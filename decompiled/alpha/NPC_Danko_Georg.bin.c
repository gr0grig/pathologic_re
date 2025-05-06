task_0_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool)
{
	StopGroup0(); // 0x3 Func
	return 0; // 0x5 Return
}


task_1_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool)
{
	TaskCall(0); // 0x1e TaskCall
	func_0(); // 0x1f Call
	TaskReturn(); // 0x20 TaskReturn
	return 0; // 0x22 Return
}


task_1_event_0(var_0_object, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool)
{
	var_31_object = Obj(); // 0x24 PushV
	var_31_object = var_30_bool; // 0x25 Mov
	func_5622(var_31_object); // 0x26 Call
	return 0; // 0x28 Return
}


task_1_event_10(var_0_object, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool)
{
	var_31_bool = 0; var_32_object = Obj(); // 0x2a PushV
	var_32_object = var_30_bool; // 0x2b Mov
	func_4501(var_32_object); // 0x2c Call
	WaitForAnimEnd(); // 0x2e Func
	return 0; // 0x30 Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool)
{
	var_32_int = 1; // 0xfb PushI
	if(var_32_int == 0) goto Label_561; // 0xfc JumpB
	func_4596(); // 0xfe Call
	var_34_int = 13228; // 0x100 PushI
	var_35_bool = var_31_bool == var_34_int; // 0x101 Eq
	if(var_35_bool == 0) goto Label_264; // 0x102 JumpB
	var_36_object = Obj(); var_37_object = Obj(); // 0x103 PushV
	var_36_object = var_1_object; // 0x104 MovT
	var_37_object = var_0_object; // 0x105 MovT
	func_5061(); // 0x106 Call
	
Label_264:
	var_40_int = 13232; // 0x108 PushI
	var_41_bool = var_31_bool == var_40_int; // 0x109 Eq
	if(var_41_bool == 0) goto Label_272; // 0x10a JumpB
	var_42_object = Obj(); var_43_object = Obj(); // 0x10b PushV
	var_42_object = var_1_object; // 0x10c MovT
	var_43_object = var_0_object; // 0x10d MovT
	func_5049(); // 0x10e Call
	
Label_272:
	var_46_int = 13236; // 0x110 PushI
	var_47_bool = var_31_bool == var_46_int; // 0x111 Eq
	if(var_47_bool == 0) goto Label_280; // 0x112 JumpB
	var_48_object = Obj(); var_49_object = Obj(); // 0x113 PushV
	var_48_object = var_1_object; // 0x114 MovT
	var_49_object = var_0_object; // 0x115 MovT
	func_5055(); // 0x116 Call
	
Label_280:
	var_52_int = 13227; // 0x118 PushI
	var_53_bool = var_30_string == var_52_int; // 0x119 Eq
	if(var_53_bool == 0) goto Label_367; // 0x11a JumpB
	var_54_string = ""; // 0x11b PushV
	var_54_string = "Neutral"; // 0x11c MovS
	func_234(var_31_bool, var_54_string); // 0x11d Call
	var_69_int = 12009; // 0x11f PushI
	SetMessage(var_69_int); // 0x120 TObjFunc
	ClearReplies(); // 0x122 TObjFunc
	var_70_bool = 0; // 0x124 PushV
	var_70_bool = 0; // 0x125 MovB
	var_71_bool = 0; var_72_object = Obj(); // 0x126 PushV
	var_72_object = var_1_object; // 0x127 MovT
	func_5377(var_72_object); // 0x128 Call
	if(var_71_bool == 0) goto Label_305; // 0x12a JumpB
	var_79_bool = 0; var_80_object = Obj(); // 0x12b PushV
	var_80_object = var_1_object; // 0x12c MovT
	func_5389(var_80_object); // 0x12d Call
	if(var_79_bool == 0) goto Label_305; // 0x12f JumpB
	var_70_bool = 1; // 0x130 MovB
	
Label_305:
	if(var_70_bool == 0) goto Label_311; // 0x131 JumpB
	var_85_int = 12010; // 0x132 PushI
	var_86_int = 13230; // 0x133 PushI
	var_87_int = 13228; // 0x134 PushI
	AddReply(var_85_int, var_86_int, var_87_int); // 0x135 TObjFunc
	
Label_311:
	var_88_bool = 0; // 0x137 PushV
	var_88_bool = 0; // 0x138 MovB
	var_89_bool = 0; // 0x139 PushV
	var_89_bool = 0; // 0x13a MovB
	var_90_bool = 0; // 0x13b PushV
	var_90_bool = 0; // 0x13c MovB
	var_91_bool = 0; var_92_object = Obj(); // 0x13d PushV
	var_92_object = var_1_object; // 0x13e MovT
	func_5317(var_92_object); // 0x13f Call
	var_97_bool = var_91_bool == 0; // 0x141 Not
	if(var_97_bool == 0) goto Label_330; // 0x142 JumpB
	var_98_bool = 0; var_99_object = Obj(); // 0x143 PushV
	var_99_object = var_1_object; // 0x144 MovT
	func_5329(var_99_object); // 0x145 Call
	var_104_bool = var_98_bool == 0; // 0x147 Not
	if(var_104_bool == 0) goto Label_330; // 0x148 JumpB
	var_90_bool = 1; // 0x149 MovB
	
Label_330:
	if(var_90_bool == 0) goto Label_338; // 0x14a JumpB
	var_105_bool = 0; var_106_object = Obj(); // 0x14b PushV
	var_106_object = var_1_object; // 0x14c MovT
	func_5341(var_106_object); // 0x14d Call
	var_111_bool = var_105_bool == 0; // 0x14f Not
	if(var_111_bool == 0) goto Label_338; // 0x150 JumpB
	var_89_bool = 1; // 0x151 MovB
	
Label_338:
	if(var_89_bool == 0) goto Label_345; // 0x152 JumpB
	var_112_bool = 0; var_113_object = Obj(); // 0x153 PushV
	var_113_object = var_1_object; // 0x154 MovT
	func_5353(var_113_object); // 0x155 Call
	if(var_112_bool == 0) goto Label_345; // 0x157 JumpB
	var_88_bool = 1; // 0x158 MovB
	
Label_345:
	if(var_88_bool == 0) goto Label_351; // 0x159 JumpB
	var_118_int = 12014; // 0x15a PushI
	var_119_int = 13233; // 0x15b PushI
	var_120_int = 13232; // 0x15c PushI
	AddReply(var_118_int, var_119_int, var_120_int); // 0x15d TObjFunc
	
Label_351:
	var_121_bool = 0; var_122_object = Obj(); // 0x15f PushV
	var_122_object = var_1_object; // 0x160 MovT
	func_5365(var_122_object); // 0x161 Call
	if(var_121_bool == 0) goto Label_361; // 0x163 JumpB
	var_127_int = 12018; // 0x164 PushI
	var_128_int = 3560; // 0x165 PushI
	var_129_int = 13236; // 0x166 PushI
	AddReply(var_127_int, var_128_int, var_129_int); // 0x167 TObjFunc
	
Label_361:
	var_130_int = 12011; // 0x169 PushI
	var_131_int = -1; // 0x16a PushI
	var_132_int = 13229; // 0x16b PushI
	AddReply(var_130_int, var_131_int, var_132_int); // 0x16c TObjFunc
	return 0; // 0x16e Return
	
Label_367:
	var_133_int = 3560; // 0x16f PushI
	var_134_bool = var_30_string == var_133_int; // 0x170 Eq
	if(var_134_bool == 0) goto Label_390; // 0x171 JumpB
	var_135_string = ""; // 0x172 PushV
	var_135_string = "Neutral"; // 0x173 MovS
	func_234(var_31_bool, var_135_string); // 0x174 Call
	var_136_int = 3289; // 0x176 PushI
	SetMessage(var_136_int); // 0x177 TObjFunc
	ClearReplies(); // 0x179 TObjFunc
	var_137_int = 3290; // 0x17b PushI
	var_138_int = 3562; // 0x17c PushI
	var_139_int = 3561; // 0x17d PushI
	AddReply(var_137_int, var_138_int, var_139_int); // 0x17e TObjFunc
	var_140_int = 3298; // 0x180 PushI
	var_141_int = 3572; // 0x181 PushI
	var_142_int = 3571; // 0x182 PushI
	AddReply(var_140_int, var_141_int, var_142_int); // 0x183 TObjFunc
	return 0; // 0x185 Return
	
Label_390:
	var_143_int = 3572; // 0x186 PushI
	var_144_bool = var_30_string == var_143_int; // 0x187 Eq
	if(var_144_bool == 0) goto Label_413; // 0x188 JumpB
	var_145_string = ""; // 0x189 PushV
	var_145_string = "Neutral"; // 0x18a MovS
	func_234(var_31_bool, var_145_string); // 0x18b Call
	var_146_int = 3299; // 0x18d PushI
	SetMessage(var_146_int); // 0x18e TObjFunc
	ClearReplies(); // 0x190 TObjFunc
	var_147_int = 3300; // 0x192 PushI
	var_148_int = 3562; // 0x193 PushI
	var_149_int = 3573; // 0x194 PushI
	AddReply(var_147_int, var_148_int, var_149_int); // 0x195 TObjFunc
	var_150_int = 3301; // 0x197 PushI
	var_151_int = 3564; // 0x198 PushI
	var_152_int = 3575; // 0x199 PushI
	AddReply(var_150_int, var_151_int, var_152_int); // 0x19a TObjFunc
	return 0; // 0x19c Return
	
Label_413:
	var_153_int = 3562; // 0x19d PushI
	var_154_bool = var_30_string == var_153_int; // 0x19e Eq
	if(var_154_bool == 0) goto Label_436; // 0x19f JumpB
	var_155_string = ""; // 0x1a0 PushV
	var_155_string = "Neutral"; // 0x1a1 MovS
	func_234(var_31_bool, var_155_string); // 0x1a2 Call
	var_156_int = 3291; // 0x1a4 PushI
	SetMessage(var_156_int); // 0x1a5 TObjFunc
	ClearReplies(); // 0x1a7 TObjFunc
	var_157_int = 3292; // 0x1a9 PushI
	var_158_int = 3564; // 0x1aa PushI
	var_159_int = 3563; // 0x1ab PushI
	AddReply(var_157_int, var_158_int, var_159_int); // 0x1ac TObjFunc
	var_160_int = 3295; // 0x1ae PushI
	var_161_int = 3564; // 0x1af PushI
	var_162_int = 3566; // 0x1b0 PushI
	AddReply(var_160_int, var_161_int, var_162_int); // 0x1b1 TObjFunc
	return 0; // 0x1b3 Return
	
Label_436:
	var_163_int = 3564; // 0x1b4 PushI
	var_164_bool = var_30_string == var_163_int; // 0x1b5 Eq
	if(var_164_bool == 0) goto Label_459; // 0x1b6 JumpB
	var_165_string = ""; // 0x1b7 PushV
	var_165_string = "Neutral"; // 0x1b8 MovS
	func_234(var_31_bool, var_165_string); // 0x1b9 Call
	var_166_int = 3293; // 0x1bb PushI
	SetMessage(var_166_int); // 0x1bc TObjFunc
	ClearReplies(); // 0x1be TObjFunc
	var_167_int = 3294; // 0x1c0 PushI
	var_168_int = 3568; // 0x1c1 PushI
	var_169_int = 3565; // 0x1c2 PushI
	AddReply(var_167_int, var_168_int, var_169_int); // 0x1c3 TObjFunc
	var_170_int = 3297; // 0x1c5 PushI
	var_171_int = 3568; // 0x1c6 PushI
	var_172_int = 3569; // 0x1c7 PushI
	AddReply(var_170_int, var_171_int, var_172_int); // 0x1c8 TObjFunc
	return 0; // 0x1ca Return
	
Label_459:
	var_173_int = 3568; // 0x1cb PushI
	var_174_bool = var_30_string == var_173_int; // 0x1cc Eq
	if(var_174_bool == 0) goto Label_482; // 0x1cd JumpB
	var_175_string = ""; // 0x1ce PushV
	var_175_string = "Neutral"; // 0x1cf MovS
	func_234(var_31_bool, var_175_string); // 0x1d0 Call
	var_176_int = 3296; // 0x1d2 PushI
	SetMessage(var_176_int); // 0x1d3 TObjFunc
	ClearReplies(); // 0x1d5 TObjFunc
	var_177_int = 3302; // 0x1d7 PushI
	var_178_int = 3578; // 0x1d8 PushI
	var_179_int = 3577; // 0x1d9 PushI
	AddReply(var_177_int, var_178_int, var_179_int); // 0x1da TObjFunc
	var_180_int = 3305; // 0x1dc PushI
	var_181_int = 3578; // 0x1dd PushI
	var_182_int = 3580; // 0x1de PushI
	AddReply(var_180_int, var_181_int, var_182_int); // 0x1df TObjFunc
	return 0; // 0x1e1 Return
	
Label_482:
	var_183_int = 3578; // 0x1e2 PushI
	var_184_bool = var_30_string == var_183_int; // 0x1e3 Eq
	if(var_184_bool == 0) goto Label_500; // 0x1e4 JumpB
	var_185_string = ""; // 0x1e5 PushV
	var_185_string = "Neutral"; // 0x1e6 MovS
	func_234(var_31_bool, var_185_string); // 0x1e7 Call
	var_186_int = 3303; // 0x1e9 PushI
	SetMessage(var_186_int); // 0x1ea TObjFunc
	ClearReplies(); // 0x1ec TObjFunc
	var_187_int = 3304; // 0x1ee PushI
	var_188_int = -1; // 0x1ef PushI
	var_189_int = 3579; // 0x1f0 PushI
	AddReply(var_187_int, var_188_int, var_189_int); // 0x1f1 TObjFunc
	return 0; // 0x1f3 Return
	
Label_500:
	var_190_int = 13233; // 0x1f4 PushI
	var_191_bool = var_30_string == var_190_int; // 0x1f5 Eq
	if(var_191_bool == 0) goto Label_518; // 0x1f6 JumpB
	var_192_string = ""; // 0x1f7 PushV
	var_192_string = "Neutral"; // 0x1f8 MovS
	func_234(var_31_bool, var_192_string); // 0x1f9 Call
	var_193_int = 12015; // 0x1fb PushI
	SetMessage(var_193_int); // 0x1fc TObjFunc
	ClearReplies(); // 0x1fe TObjFunc
	var_194_int = 12016; // 0x200 PushI
	var_195_int = 13235; // 0x201 PushI
	var_196_int = 13234; // 0x202 PushI
	AddReply(var_194_int, var_195_int, var_196_int); // 0x203 TObjFunc
	return 0; // 0x205 Return
	
Label_518:
	var_197_int = 13235; // 0x206 PushI
	var_198_bool = var_30_string == var_197_int; // 0x207 Eq
	if(var_198_bool == 0) goto Label_531; // 0x208 JumpB
	var_199_string = ""; // 0x209 PushV
	var_199_string = "Neutral"; // 0x20a MovS
	func_234(var_31_bool, var_199_string); // 0x20b Call
	var_200_int = 12017; // 0x20d PushI
	SetMessage(var_200_int); // 0x20e TObjFunc
	ClearReplies(); // 0x210 TObjFunc
	return 0; // 0x212 Return
	
Label_531:
	var_201_int = 13230; // 0x213 PushI
	var_202_bool = var_30_string == var_201_int; // 0x214 Eq
	if(var_202_bool == 0) goto Label_549; // 0x215 JumpB
	var_203_string = ""; // 0x216 PushV
	var_203_string = "Neutral"; // 0x217 MovS
	func_234(var_31_bool, var_203_string); // 0x218 Call
	var_204_int = 12012; // 0x21a PushI
	SetMessage(var_204_int); // 0x21b TObjFunc
	ClearReplies(); // 0x21d TObjFunc
	var_205_int = 12013; // 0x21f PushI
	var_206_int = -1; // 0x220 PushI
	var_207_int = 13231; // 0x221 PushI
	AddReply(var_205_int, var_206_int, var_207_int); // 0x222 TObjFunc
	return 0; // 0x224 Return
	
Label_549:
	var_3_string = 1; // 0x225 TMovB
	var_208_bool = 0; // 0x226 PushV
	func_4674(var_208_bool); // 0x227 Call
	if(var_208_bool == 0) goto Label_557; // 0x229 JumpB
	lshStopAnimation(); // 0x22a Func
	goto Label_559; // 0x22c Jump
	
Label_559:
	return 0; // 0x22f Return
	
Label_557:
	StopAnimation(); // 0x22d Func
	
Label_561:
	return 0; // 0x231 Return
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool)
{
	var_32_int = 1; // 0x2f8 PushI
	if(var_32_int == 0) goto Label_1367; // 0x2f9 JumpB
	func_4596(); // 0x2fb Call
	var_34_int = 5312; // 0x2fd PushI
	var_35_bool = var_31_bool == var_34_int; // 0x2fe Eq
	if(var_35_bool == 0) goto Label_783; // 0x2ff JumpB
	var_36_object = Obj(); var_37_object = Obj(); // 0x300 PushV
	var_36_object = var_1_object; // 0x301 MovT
	var_37_object = var_0_object; // 0x302 MovT
	func_4911(); // 0x303 Call
	var_40_object = Obj(); var_41_object = Obj(); // 0x305 PushV
	var_40_object = var_1_object; // 0x306 MovT
	var_41_object = var_0_object; // 0x307 MovT
	func_4676(); // 0x308 Call
	var_90_object = Obj(); var_91_object = Obj(); // 0x30a PushV
	var_90_object = var_1_object; // 0x30b MovT
	var_91_object = var_0_object; // 0x30c MovT
	func_4854(); // 0x30d Call
	
Label_783:
	var_94_int = 5313; // 0x30f PushI
	var_95_bool = var_31_bool == var_94_int; // 0x310 Eq
	if(var_95_bool == 0) goto Label_801; // 0x311 JumpB
	var_96_object = Obj(); var_97_object = Obj(); // 0x312 PushV
	var_96_object = var_1_object; // 0x313 MovT
	var_97_object = var_0_object; // 0x314 MovT
	func_4911(); // 0x315 Call
	var_98_object = Obj(); var_99_object = Obj(); // 0x317 PushV
	var_98_object = var_1_object; // 0x318 MovT
	var_99_object = var_0_object; // 0x319 MovT
	func_4676(); // 0x31a Call
	var_100_object = Obj(); var_101_object = Obj(); // 0x31c PushV
	var_100_object = var_1_object; // 0x31d MovT
	var_101_object = var_0_object; // 0x31e MovT
	func_4854(); // 0x31f Call
	
Label_801:
	var_102_int = 5266; // 0x321 PushI
	var_103_bool = var_31_bool == var_102_int; // 0x322 Eq
	if(var_103_bool == 0) goto Label_809; // 0x323 JumpB
	var_104_object = Obj(); var_105_object = Obj(); // 0x324 PushV
	var_104_object = var_1_object; // 0x325 MovT
	var_105_object = var_0_object; // 0x326 MovT
	func_4911(); // 0x327 Call
	
Label_809:
	var_106_int = 5314; // 0x329 PushI
	var_107_bool = var_31_bool == var_106_int; // 0x32a Eq
	if(var_107_bool == 0) goto Label_822; // 0x32b JumpB
	var_108_object = Obj(); var_109_object = Obj(); // 0x32c PushV
	var_108_object = var_1_object; // 0x32d MovT
	var_109_object = var_0_object; // 0x32e MovT
	func_4676(); // 0x32f Call
	var_110_object = Obj(); var_111_object = Obj(); // 0x331 PushV
	var_110_object = var_1_object; // 0x332 MovT
	var_111_object = var_0_object; // 0x333 MovT
	func_4854(); // 0x334 Call
	
Label_822:
	var_112_int = 5315; // 0x336 PushI
	var_113_bool = var_31_bool == var_112_int; // 0x337 Eq
	if(var_113_bool == 0) goto Label_835; // 0x338 JumpB
	var_114_object = Obj(); var_115_object = Obj(); // 0x339 PushV
	var_114_object = var_1_object; // 0x33a MovT
	var_115_object = var_0_object; // 0x33b MovT
	func_4676(); // 0x33c Call
	var_116_object = Obj(); var_117_object = Obj(); // 0x33e PushV
	var_116_object = var_1_object; // 0x33f MovT
	var_117_object = var_0_object; // 0x340 MovT
	func_4854(); // 0x341 Call
	
Label_835:
	var_118_int = 5233; // 0x343 PushI
	var_119_bool = var_30_string == var_118_int; // 0x344 Eq
	if(var_119_bool == 0) goto Label_918; // 0x345 JumpB
	var_120_bool = 0; var_121_object = Obj(); // 0x346 PushV
	var_121_object = var_1_object; // 0x347 MovT
	func_5161(var_121_object); // 0x348 Call
	if(var_120_bool == 0) goto Label_878; // 0x34a JumpB
	var_128_object = Obj(); var_129_object = Obj(); // 0x34b PushV
	var_128_object = var_1_object; // 0x34c MovT
	var_129_object = var_0_object; // 0x34d MovT
	func_4787(); // 0x34e Call
	var_132_object = Obj(); var_133_object = Obj(); // 0x350 PushV
	var_132_object = var_1_object; // 0x351 MovT
	var_133_object = var_0_object; // 0x352 MovT
	func_5043(); // 0x353 Call
	var_136_string = ""; // 0x355 PushV
	var_136_string = "Neutral"; // 0x356 MovS
	func_743(var_31_bool, var_136_string); // 0x357 Call
	var_151_int = 4780; // 0x359 PushI
	SetMessage(var_151_int); // 0x35a TObjFunc
	ClearReplies(); // 0x35c TObjFunc
	var_152_int = 4781; // 0x35e PushI
	var_153_int = 5240; // 0x35f PushI
	var_154_int = 5234; // 0x360 PushI
	AddReply(var_152_int, var_153_int, var_154_int); // 0x361 TObjFunc
	var_155_int = 4782; // 0x363 PushI
	var_156_int = 5240; // 0x364 PushI
	var_157_int = 5235; // 0x365 PushI
	AddReply(var_155_int, var_156_int, var_157_int); // 0x366 TObjFunc
	var_158_int = 4786; // 0x368 PushI
	var_159_int = 5240; // 0x369 PushI
	var_160_int = 5239; // 0x36a PushI
	AddReply(var_158_int, var_159_int, var_160_int); // 0x36b TObjFunc
	return 0; // 0x36d Return
	
Label_878:
	var_161_bool = 0; var_162_object = Obj(); // 0x36e PushV
	var_162_object = var_1_object; // 0x36f MovT
	func_5103(var_161_bool, var_162_object); // 0x370 Call
	if(var_161_bool == 0) goto Label_918; // 0x372 JumpB
	var_165_object = Obj(); var_166_object = Obj(); // 0x373 PushV
	var_165_object = var_1_object; // 0x374 MovT
	var_166_object = var_0_object; // 0x375 MovT
	func_5043(); // 0x376 Call
	var_167_string = ""; // 0x378 PushV
	var_167_string = "Neutral"; // 0x379 MovS
	func_743(var_31_bool, var_167_string); // 0x37a Call
	var_168_int = 4783; // 0x37c PushI
	SetMessage(var_168_int); // 0x37d TObjFunc
	ClearReplies(); // 0x37f TObjFunc
	var_169_int = 4784; // 0x381 PushI
	var_170_int = 5294; // 0x382 PushI
	var_171_int = 5237; // 0x383 PushI
	AddReply(var_169_int, var_170_int, var_171_int); // 0x384 TObjFunc
	var_172_int = 4830; // 0x386 PushI
	var_173_int = 5301; // 0x387 PushI
	var_174_int = 5297; // 0x388 PushI
	AddReply(var_172_int, var_173_int, var_174_int); // 0x389 TObjFunc
	var_175_int = 4836; // 0x38b PushI
	var_176_int = 5296; // 0x38c PushI
	var_177_int = 5304; // 0x38d PushI
	AddReply(var_175_int, var_176_int, var_177_int); // 0x38e TObjFunc
	var_178_int = 4845; // 0x390 PushI
	var_179_int = -1; // 0x391 PushI
	var_180_int = 5317; // 0x392 PushI
	AddReply(var_178_int, var_179_int, var_180_int); // 0x393 TObjFunc
	return 0; // 0x395 Return
	
Label_918:
	var_181_int = 5301; // 0x396 PushI
	var_182_bool = var_30_string == var_181_int; // 0x397 Eq
	if(var_182_bool == 0) goto Label_936; // 0x398 JumpB
	var_183_string = ""; // 0x399 PushV
	var_183_string = "Neutral"; // 0x39a MovS
	func_743(var_31_bool, var_183_string); // 0x39b Call
	var_184_int = 4834; // 0x39d PushI
	SetMessage(var_184_int); // 0x39e TObjFunc
	ClearReplies(); // 0x3a0 TObjFunc
	var_185_int = 4835; // 0x3a2 PushI
	var_186_int = 5299; // 0x3a3 PushI
	var_187_int = 5302; // 0x3a4 PushI
	AddReply(var_185_int, var_186_int, var_187_int); // 0x3a5 TObjFunc
	return 0; // 0x3a7 Return
	
Label_936:
	var_188_int = 5294; // 0x3a8 PushI
	var_189_bool = var_30_string == var_188_int; // 0x3a9 Eq
	if(var_189_bool == 0) goto Label_959; // 0x3aa JumpB
	var_190_string = ""; // 0x3ab PushV
	var_190_string = "Neutral"; // 0x3ac MovS
	func_743(var_31_bool, var_190_string); // 0x3ad Call
	var_191_int = 4827; // 0x3af PushI
	SetMessage(var_191_int); // 0x3b0 TObjFunc
	ClearReplies(); // 0x3b2 TObjFunc
	var_192_int = 4828; // 0x3b4 PushI
	var_193_int = 5296; // 0x3b5 PushI
	var_194_int = 5295; // 0x3b6 PushI
	AddReply(var_192_int, var_193_int, var_194_int); // 0x3b7 TObjFunc
	var_195_int = 4831; // 0x3b9 PushI
	var_196_int = 5299; // 0x3ba PushI
	var_197_int = 5298; // 0x3bb PushI
	AddReply(var_195_int, var_196_int, var_197_int); // 0x3bc TObjFunc
	return 0; // 0x3be Return
	
Label_959:
	var_198_int = 5299; // 0x3bf PushI
	var_199_bool = var_30_string == var_198_int; // 0x3c0 Eq
	if(var_199_bool == 0) goto Label_977; // 0x3c1 JumpB
	var_200_string = ""; // 0x3c2 PushV
	var_200_string = "Neutral"; // 0x3c3 MovS
	func_743(var_31_bool, var_200_string); // 0x3c4 Call
	var_201_int = 4832; // 0x3c6 PushI
	SetMessage(var_201_int); // 0x3c7 TObjFunc
	ClearReplies(); // 0x3c9 TObjFunc
	var_202_int = 4833; // 0x3cb PushI
	var_203_int = 5307; // 0x3cc PushI
	var_204_int = 5300; // 0x3cd PushI
	AddReply(var_202_int, var_203_int, var_204_int); // 0x3ce TObjFunc
	return 0; // 0x3d0 Return
	
Label_977:
	var_205_int = 5296; // 0x3d1 PushI
	var_206_bool = var_30_string == var_205_int; // 0x3d2 Eq
	if(var_206_bool == 0) goto Label_1000; // 0x3d3 JumpB
	var_207_object = Obj(); var_208_object = Obj(); // 0x3d4 PushV
	var_207_object = var_1_object; // 0x3d5 MovT
	var_208_object = var_0_object; // 0x3d6 MovT
	func_4917(); // 0x3d7 Call
	var_211_string = ""; // 0x3d9 PushV
	var_211_string = "Neutral"; // 0x3da MovS
	func_743(var_31_bool, var_211_string); // 0x3db Call
	var_212_int = 4829; // 0x3dd PushI
	SetMessage(var_212_int); // 0x3de TObjFunc
	ClearReplies(); // 0x3e0 TObjFunc
	var_213_int = 4837; // 0x3e2 PushI
	var_214_int = 5307; // 0x3e3 PushI
	var_215_int = 5306; // 0x3e4 PushI
	AddReply(var_213_int, var_214_int, var_215_int); // 0x3e5 TObjFunc
	return 0; // 0x3e7 Return
	
Label_1000:
	var_216_int = 5307; // 0x3e8 PushI
	var_217_bool = var_30_string == var_216_int; // 0x3e9 Eq
	if(var_217_bool == 0) goto Label_1023; // 0x3ea JumpB
	var_218_string = ""; // 0x3eb PushV
	var_218_string = "Neutral"; // 0x3ec MovS
	func_743(var_31_bool, var_218_string); // 0x3ed Call
	var_219_int = 4838; // 0x3ef PushI
	SetMessage(var_219_int); // 0x3f0 TObjFunc
	ClearReplies(); // 0x3f2 TObjFunc
	var_220_int = 4843; // 0x3f4 PushI
	var_221_int = -1; // 0x3f5 PushI
	var_222_int = 5314; // 0x3f6 PushI
	AddReply(var_220_int, var_221_int, var_222_int); // 0x3f7 TObjFunc
	var_223_int = 4844; // 0x3f9 PushI
	var_224_int = -1; // 0x3fa PushI
	var_225_int = 5315; // 0x3fb PushI
	AddReply(var_223_int, var_224_int, var_225_int); // 0x3fc TObjFunc
	return 0; // 0x3fe Return
	
Label_1023:
	var_226_int = 5240; // 0x3ff PushI
	var_227_bool = var_30_string == var_226_int; // 0x400 Eq
	if(var_227_bool == 0) goto Label_1046; // 0x401 JumpB
	var_228_string = ""; // 0x402 PushV
	var_228_string = "Neutral"; // 0x403 MovS
	func_743(var_31_bool, var_228_string); // 0x404 Call
	var_229_int = 4787; // 0x406 PushI
	SetMessage(var_229_int); // 0x407 TObjFunc
	ClearReplies(); // 0x409 TObjFunc
	var_230_int = 4788; // 0x40b PushI
	var_231_int = 5245; // 0x40c PushI
	var_232_int = 5243; // 0x40d PushI
	AddReply(var_230_int, var_231_int, var_232_int); // 0x40e TObjFunc
	var_233_int = 4789; // 0x410 PushI
	var_234_int = 5245; // 0x411 PushI
	var_235_int = 5244; // 0x412 PushI
	AddReply(var_233_int, var_234_int, var_235_int); // 0x413 TObjFunc
	return 0; // 0x415 Return
	
Label_1046:
	var_236_int = 5245; // 0x416 PushI
	var_237_bool = var_30_string == var_236_int; // 0x417 Eq
	if(var_237_bool == 0) goto Label_1074; // 0x418 JumpB
	var_238_string = ""; // 0x419 PushV
	var_238_string = "Neutral"; // 0x41a MovS
	func_743(var_31_bool, var_238_string); // 0x41b Call
	var_239_int = 4790; // 0x41d PushI
	SetMessage(var_239_int); // 0x41e TObjFunc
	ClearReplies(); // 0x420 TObjFunc
	var_240_int = 4791; // 0x422 PushI
	var_241_int = 5250; // 0x423 PushI
	var_242_int = 5247; // 0x424 PushI
	AddReply(var_240_int, var_241_int, var_242_int); // 0x425 TObjFunc
	var_243_int = 4792; // 0x427 PushI
	var_244_int = 5269; // 0x428 PushI
	var_245_int = 5248; // 0x429 PushI
	AddReply(var_243_int, var_244_int, var_245_int); // 0x42a TObjFunc
	var_246_int = 4793; // 0x42c PushI
	var_247_int = 5271; // 0x42d PushI
	var_248_int = 5249; // 0x42e PushI
	AddReply(var_246_int, var_247_int, var_248_int); // 0x42f TObjFunc
	return 0; // 0x431 Return
	
Label_1074:
	var_249_int = 5271; // 0x432 PushI
	var_250_bool = var_30_string == var_249_int; // 0x433 Eq
	if(var_250_bool == 0) goto Label_1097; // 0x434 JumpB
	var_251_string = ""; // 0x435 PushV
	var_251_string = "Neutral"; // 0x436 MovS
	func_743(var_31_bool, var_251_string); // 0x437 Call
	var_252_int = 4811; // 0x439 PushI
	SetMessage(var_252_int); // 0x43a TObjFunc
	ClearReplies(); // 0x43c TObjFunc
	var_253_int = 4812; // 0x43e PushI
	var_254_int = 5269; // 0x43f PushI
	var_255_int = 5272; // 0x440 PushI
	AddReply(var_253_int, var_254_int, var_255_int); // 0x441 TObjFunc
	var_256_int = 4813; // 0x443 PushI
	var_257_int = 5274; // 0x444 PushI
	var_258_int = 5273; // 0x445 PushI
	AddReply(var_256_int, var_257_int, var_258_int); // 0x446 TObjFunc
	return 0; // 0x448 Return
	
Label_1097:
	var_259_int = 5274; // 0x449 PushI
	var_260_bool = var_30_string == var_259_int; // 0x44a Eq
	if(var_260_bool == 0) goto Label_1120; // 0x44b JumpB
	var_261_object = Obj(); var_262_object = Obj(); // 0x44c PushV
	var_261_object = var_1_object; // 0x44d MovT
	var_262_object = var_0_object; // 0x44e MovT
	func_4823(); // 0x44f Call
	var_265_string = ""; // 0x451 PushV
	var_265_string = "Neutral"; // 0x452 MovS
	func_743(var_31_bool, var_265_string); // 0x453 Call
	var_266_int = 4814; // 0x455 PushI
	SetMessage(var_266_int); // 0x456 TObjFunc
	ClearReplies(); // 0x458 TObjFunc
	var_267_int = 4815; // 0x45a PushI
	var_268_int = 5269; // 0x45b PushI
	var_269_int = 5276; // 0x45c PushI
	AddReply(var_267_int, var_268_int, var_269_int); // 0x45d TObjFunc
	return 0; // 0x45f Return
	
Label_1120:
	var_270_int = 5269; // 0x460 PushI
	var_271_bool = var_30_string == var_270_int; // 0x461 Eq
	if(var_271_bool == 0) goto Label_1143; // 0x462 JumpB
	var_272_string = ""; // 0x463 PushV
	var_272_string = "Neutral"; // 0x464 MovS
	func_743(var_31_bool, var_272_string); // 0x465 Call
	var_273_int = 4809; // 0x467 PushI
	SetMessage(var_273_int); // 0x468 TObjFunc
	ClearReplies(); // 0x46a TObjFunc
	var_274_int = 4810; // 0x46c PushI
	var_275_int = 5278; // 0x46d PushI
	var_276_int = 5270; // 0x46e PushI
	AddReply(var_274_int, var_275_int, var_276_int); // 0x46f TObjFunc
	var_277_int = 4824; // 0x471 PushI
	var_278_int = 5278; // 0x472 PushI
	var_279_int = 5287; // 0x473 PushI
	AddReply(var_277_int, var_278_int, var_279_int); // 0x474 TObjFunc
	return 0; // 0x476 Return
	
Label_1143:
	var_280_int = 5278; // 0x477 PushI
	var_281_bool = var_30_string == var_280_int; // 0x478 Eq
	if(var_281_bool == 0) goto Label_1166; // 0x479 JumpB
	var_282_string = ""; // 0x47a PushV
	var_282_string = "Neutral"; // 0x47b MovS
	func_743(var_31_bool, var_282_string); // 0x47c Call
	var_283_int = 4816; // 0x47e PushI
	SetMessage(var_283_int); // 0x47f TObjFunc
	ClearReplies(); // 0x481 TObjFunc
	var_284_int = 4817; // 0x483 PushI
	var_285_int = 5280; // 0x484 PushI
	var_286_int = 5279; // 0x485 PushI
	AddReply(var_284_int, var_285_int, var_286_int); // 0x486 TObjFunc
	var_287_int = 4825; // 0x488 PushI
	var_288_int = 5257; // 0x489 PushI
	var_289_int = 5289; // 0x48a PushI
	AddReply(var_287_int, var_288_int, var_289_int); // 0x48b TObjFunc
	return 0; // 0x48d Return
	
Label_1166:
	var_290_int = 5280; // 0x48e PushI
	var_291_bool = var_30_string == var_290_int; // 0x48f Eq
	if(var_291_bool == 0) goto Label_1189; // 0x490 JumpB
	var_292_string = ""; // 0x491 PushV
	var_292_string = "Neutral"; // 0x492 MovS
	func_743(var_31_bool, var_292_string); // 0x493 Call
	var_293_int = 4818; // 0x495 PushI
	SetMessage(var_293_int); // 0x496 TObjFunc
	ClearReplies(); // 0x498 TObjFunc
	var_294_int = 4819; // 0x49a PushI
	var_295_int = 5282; // 0x49b PushI
	var_296_int = 5281; // 0x49c PushI
	AddReply(var_294_int, var_295_int, var_296_int); // 0x49d TObjFunc
	var_297_int = 4826; // 0x49f PushI
	var_298_int = 5282; // 0x4a0 PushI
	var_299_int = 5291; // 0x4a1 PushI
	AddReply(var_297_int, var_298_int, var_299_int); // 0x4a2 TObjFunc
	return 0; // 0x4a4 Return
	
Label_1189:
	var_300_int = 5282; // 0x4a5 PushI
	var_301_bool = var_30_string == var_300_int; // 0x4a6 Eq
	if(var_301_bool == 0) goto Label_1212; // 0x4a7 JumpB
	var_302_string = ""; // 0x4a8 PushV
	var_302_string = "Neutral"; // 0x4a9 MovS
	func_743(var_31_bool, var_302_string); // 0x4aa Call
	var_303_int = 4820; // 0x4ac PushI
	SetMessage(var_303_int); // 0x4ad TObjFunc
	ClearReplies(); // 0x4af TObjFunc
	var_304_int = 4821; // 0x4b1 PushI
	var_305_int = 5253; // 0x4b2 PushI
	var_306_int = 5283; // 0x4b3 PushI
	AddReply(var_304_int, var_305_int, var_306_int); // 0x4b4 TObjFunc
	var_307_int = 4823; // 0x4b6 PushI
	var_308_int = 5253; // 0x4b7 PushI
	var_309_int = 5285; // 0x4b8 PushI
	AddReply(var_307_int, var_308_int, var_309_int); // 0x4b9 TObjFunc
	return 0; // 0x4bb Return
	
Label_1212:
	var_310_int = 5250; // 0x4bc PushI
	var_311_bool = var_30_string == var_310_int; // 0x4bd Eq
	if(var_311_bool == 0) goto Label_1235; // 0x4be JumpB
	var_312_string = ""; // 0x4bf PushV
	var_312_string = "Neutral"; // 0x4c0 MovS
	func_743(var_31_bool, var_312_string); // 0x4c1 Call
	var_313_int = 4794; // 0x4c3 PushI
	SetMessage(var_313_int); // 0x4c4 TObjFunc
	ClearReplies(); // 0x4c6 TObjFunc
	var_314_int = 4795; // 0x4c8 PushI
	var_315_int = 5253; // 0x4c9 PushI
	var_316_int = 5251; // 0x4ca PushI
	AddReply(var_314_int, var_315_int, var_316_int); // 0x4cb TObjFunc
	var_317_int = 4796; // 0x4cd PushI
	var_318_int = 5253; // 0x4ce PushI
	var_319_int = 5252; // 0x4cf PushI
	AddReply(var_317_int, var_318_int, var_319_int); // 0x4d0 TObjFunc
	return 0; // 0x4d2 Return
	
Label_1235:
	var_320_int = 5253; // 0x4d3 PushI
	var_321_bool = var_30_string == var_320_int; // 0x4d4 Eq
	if(var_321_bool == 0) goto Label_1258; // 0x4d5 JumpB
	var_322_string = ""; // 0x4d6 PushV
	var_322_string = "Neutral"; // 0x4d7 MovS
	func_743(var_31_bool, var_322_string); // 0x4d8 Call
	var_323_int = 4797; // 0x4da PushI
	SetMessage(var_323_int); // 0x4db TObjFunc
	ClearReplies(); // 0x4dd TObjFunc
	var_324_int = 4798; // 0x4df PushI
	var_325_int = 5257; // 0x4e0 PushI
	var_326_int = 5254; // 0x4e1 PushI
	AddReply(var_324_int, var_325_int, var_326_int); // 0x4e2 TObjFunc
	var_327_int = 4799; // 0x4e4 PushI
	var_328_int = 5257; // 0x4e5 PushI
	var_329_int = 5256; // 0x4e6 PushI
	AddReply(var_327_int, var_328_int, var_329_int); // 0x4e7 TObjFunc
	return 0; // 0x4e9 Return
	
Label_1258:
	var_330_int = 5257; // 0x4ea PushI
	var_331_bool = var_30_string == var_330_int; // 0x4eb Eq
	if(var_331_bool == 0) goto Label_1281; // 0x4ec JumpB
	var_332_string = ""; // 0x4ed PushV
	var_332_string = "Neutral"; // 0x4ee MovS
	func_743(var_31_bool, var_332_string); // 0x4ef Call
	var_333_int = 4800; // 0x4f1 PushI
	SetMessage(var_333_int); // 0x4f2 TObjFunc
	ClearReplies(); // 0x4f4 TObjFunc
	var_334_int = 4801; // 0x4f6 PushI
	var_335_int = 5259; // 0x4f7 PushI
	var_336_int = 5258; // 0x4f8 PushI
	AddReply(var_334_int, var_335_int, var_336_int); // 0x4f9 TObjFunc
	var_337_int = 4803; // 0x4fb PushI
	var_338_int = 5264; // 0x4fc PushI
	var_339_int = 5260; // 0x4fd PushI
	AddReply(var_337_int, var_338_int, var_339_int); // 0x4fe TObjFunc
	return 0; // 0x500 Return
	
Label_1281:
	var_340_int = 5259; // 0x501 PushI
	var_341_bool = var_30_string == var_340_int; // 0x502 Eq
	if(var_341_bool == 0) goto Label_1304; // 0x503 JumpB
	var_342_string = ""; // 0x504 PushV
	var_342_string = "Neutral"; // 0x505 MovS
	func_743(var_31_bool, var_342_string); // 0x506 Call
	var_343_int = 4802; // 0x508 PushI
	SetMessage(var_343_int); // 0x509 TObjFunc
	ClearReplies(); // 0x50b TObjFunc
	var_344_int = 4804; // 0x50d PushI
	var_345_int = 5264; // 0x50e PushI
	var_346_int = 5262; // 0x50f PushI
	AddReply(var_344_int, var_345_int, var_346_int); // 0x510 TObjFunc
	var_347_int = 4805; // 0x512 PushI
	var_348_int = 5264; // 0x513 PushI
	var_349_int = 5263; // 0x514 PushI
	AddReply(var_347_int, var_348_int, var_349_int); // 0x515 TObjFunc
	return 0; // 0x517 Return
	
Label_1304:
	var_350_int = 5264; // 0x518 PushI
	var_351_bool = var_30_string == var_350_int; // 0x519 Eq
	if(var_351_bool == 0) goto Label_1332; // 0x51a JumpB
	var_352_object = Obj(); var_353_object = Obj(); // 0x51b PushV
	var_352_object = var_1_object; // 0x51c MovT
	var_353_object = var_0_object; // 0x51d MovT
	func_4917(); // 0x51e Call
	var_354_string = ""; // 0x520 PushV
	var_354_string = "Neutral"; // 0x521 MovS
	func_743(var_31_bool, var_354_string); // 0x522 Call
	var_355_int = 4806; // 0x524 PushI
	SetMessage(var_355_int); // 0x525 TObjFunc
	ClearReplies(); // 0x527 TObjFunc
	var_356_int = 4807; // 0x529 PushI
	var_357_int = 5310; // 0x52a PushI
	var_358_int = 5265; // 0x52b PushI
	AddReply(var_356_int, var_357_int, var_358_int); // 0x52c TObjFunc
	var_359_int = 4808; // 0x52e PushI
	var_360_int = -1; // 0x52f PushI
	var_361_int = 5266; // 0x530 PushI
	AddReply(var_359_int, var_360_int, var_361_int); // 0x531 TObjFunc
	return 0; // 0x533 Return
	
Label_1332:
	var_362_int = 5310; // 0x534 PushI
	var_363_bool = var_30_string == var_362_int; // 0x535 Eq
	if(var_363_bool == 0) goto Label_1355; // 0x536 JumpB
	var_364_string = ""; // 0x537 PushV
	var_364_string = "Neutral"; // 0x538 MovS
	func_743(var_31_bool, var_364_string); // 0x539 Call
	var_365_int = 4840; // 0x53b PushI
	SetMessage(var_365_int); // 0x53c TObjFunc
	ClearReplies(); // 0x53e TObjFunc
	var_366_int = 4841; // 0x540 PushI
	var_367_int = -1; // 0x541 PushI
	var_368_int = 5312; // 0x542 PushI
	AddReply(var_366_int, var_367_int, var_368_int); // 0x543 TObjFunc
	var_369_int = 4842; // 0x545 PushI
	var_370_int = -1; // 0x546 PushI
	var_371_int = 5313; // 0x547 PushI
	AddReply(var_369_int, var_370_int, var_371_int); // 0x548 TObjFunc
	return 0; // 0x54a Return
	
Label_1355:
	var_3_string = 1; // 0x54b TMovB
	var_372_bool = 0; // 0x54c PushV
	func_4674(var_372_bool); // 0x54d Call
	if(var_372_bool == 0) goto Label_1363; // 0x54f JumpB
	lshStopAnimation(); // 0x550 Func
	goto Label_1365; // 0x552 Jump
	
Label_1365:
	return 0; // 0x555 Return
	
Label_1363:
	StopAnimation(); // 0x553 Func
	
Label_1367:
	return 0; // 0x557 Return
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool)
{
	var_32_int = 1; // 0x626 PushI
	if(var_32_int == 0) goto Label_2494; // 0x627 JumpB
	func_4596(); // 0x629 Call
	var_34_int = 5424; // 0x62b PushI
	var_35_bool = var_31_bool == var_34_int; // 0x62c Eq
	if(var_35_bool == 0) goto Label_1592; // 0x62d JumpB
	var_36_object = Obj(); var_37_object = Obj(); // 0x62e PushV
	var_36_object = var_1_object; // 0x62f MovT
	var_37_object = var_0_object; // 0x630 MovT
	func_5001(); // 0x631 Call
	var_40_object = Obj(); var_41_object = Obj(); // 0x633 PushV
	var_40_object = var_1_object; // 0x634 MovT
	var_41_object = var_0_object; // 0x635 MovT
	func_4708(); // 0x636 Call
	
Label_1592:
	var_106_int = 5360; // 0x638 PushI
	var_107_bool = var_31_bool == var_106_int; // 0x639 Eq
	if(var_107_bool == 0) goto Label_1605; // 0x63a JumpB
	var_108_object = Obj(); var_109_object = Obj(); // 0x63b PushV
	var_108_object = var_1_object; // 0x63c MovT
	var_109_object = var_0_object; // 0x63d MovT
	func_5001(); // 0x63e Call
	var_110_object = Obj(); var_111_object = Obj(); // 0x640 PushV
	var_110_object = var_1_object; // 0x641 MovT
	var_111_object = var_0_object; // 0x642 MovT
	func_4781(); // 0x643 Call
	
Label_1605:
	var_114_int = 5359; // 0x645 PushI
	var_115_bool = var_31_bool == var_114_int; // 0x646 Eq
	if(var_115_bool == 0) goto Label_1618; // 0x647 JumpB
	var_116_object = Obj(); var_117_object = Obj(); // 0x648 PushV
	var_116_object = var_1_object; // 0x649 MovT
	var_117_object = var_0_object; // 0x64a MovT
	func_5001(); // 0x64b Call
	var_118_object = Obj(); var_119_object = Obj(); // 0x64d PushV
	var_118_object = var_1_object; // 0x64e MovT
	var_119_object = var_0_object; // 0x64f MovT
	func_4781(); // 0x650 Call
	
Label_1618:
	var_120_int = 5394; // 0x652 PushI
	var_121_bool = var_31_bool == var_120_int; // 0x653 Eq
	if(var_121_bool == 0) goto Label_1636; // 0x654 JumpB
	var_122_object = Obj(); var_123_object = Obj(); // 0x655 PushV
	var_122_object = var_1_object; // 0x656 MovT
	var_123_object = var_0_object; // 0x657 MovT
	func_5007(); // 0x658 Call
	var_126_object = Obj(); var_127_object = Obj(); // 0x65a PushV
	var_126_object = var_1_object; // 0x65b MovT
	var_127_object = var_0_object; // 0x65c MovT
	func_4829(); // 0x65d Call
	var_143_object = Obj(); var_144_object = Obj(); // 0x65f PushV
	var_143_object = var_1_object; // 0x660 MovT
	var_144_object = var_0_object; // 0x661 MovT
	func_4854(); // 0x662 Call
	
Label_1636:
	var_147_int = 5407; // 0x664 PushI
	var_148_bool = var_31_bool == var_147_int; // 0x665 Eq
	if(var_148_bool == 0) goto Label_1654; // 0x666 JumpB
	var_149_object = Obj(); var_150_object = Obj(); // 0x667 PushV
	var_149_object = var_1_object; // 0x668 MovT
	var_150_object = var_0_object; // 0x669 MovT
	func_5007(); // 0x66a Call
	var_151_object = Obj(); var_152_object = Obj(); // 0x66c PushV
	var_151_object = var_1_object; // 0x66d MovT
	var_152_object = var_0_object; // 0x66e MovT
	func_4829(); // 0x66f Call
	var_153_object = Obj(); var_154_object = Obj(); // 0x671 PushV
	var_153_object = var_1_object; // 0x672 MovT
	var_154_object = var_0_object; // 0x673 MovT
	func_4854(); // 0x674 Call
	
Label_1654:
	var_155_int = 5341; // 0x676 PushI
	var_156_bool = var_31_bool == var_155_int; // 0x677 Eq
	if(var_156_bool == 0) goto Label_1662; // 0x678 JumpB
	var_157_object = Obj(); var_158_object = Obj(); // 0x679 PushV
	var_157_object = var_1_object; // 0x67a MovT
	var_158_object = var_0_object; // 0x67b MovT
	func_5013(); // 0x67c Call
	
Label_1662:
	var_161_int = 5342; // 0x67e PushI
	var_162_bool = var_31_bool == var_161_int; // 0x67f Eq
	if(var_162_bool == 0) goto Label_1670; // 0x680 JumpB
	var_163_object = Obj(); var_164_object = Obj(); // 0x681 PushV
	var_163_object = var_1_object; // 0x682 MovT
	var_164_object = var_0_object; // 0x683 MovT
	func_5013(); // 0x684 Call
	
Label_1670:
	var_165_int = 5347; // 0x686 PushI
	var_166_bool = var_31_bool == var_165_int; // 0x687 Eq
	if(var_166_bool == 0) goto Label_1678; // 0x688 JumpB
	var_167_object = Obj(); var_168_object = Obj(); // 0x689 PushV
	var_167_object = var_1_object; // 0x68a MovT
	var_168_object = var_0_object; // 0x68b MovT
	func_5013(); // 0x68c Call
	
Label_1678:
	var_169_int = 8440; // 0x68e PushI
	var_170_bool = var_31_bool == var_169_int; // 0x68f Eq
	if(var_170_bool == 0) goto Label_1686; // 0x690 JumpB
	var_171_object = Obj(); var_172_object = Obj(); // 0x691 PushV
	var_171_object = var_1_object; // 0x692 MovT
	var_172_object = var_0_object; // 0x693 MovT
	func_5013(); // 0x694 Call
	
Label_1686:
	var_173_int = 8449; // 0x696 PushI
	var_174_bool = var_31_bool == var_173_int; // 0x697 Eq
	if(var_174_bool == 0) goto Label_1694; // 0x698 JumpB
	var_175_object = Obj(); var_176_object = Obj(); // 0x699 PushV
	var_175_object = var_1_object; // 0x69a MovT
	var_176_object = var_0_object; // 0x69b MovT
	func_4817(); // 0x69c Call
	
Label_1694:
	var_179_int = 8450; // 0x69e PushI
	var_180_bool = var_31_bool == var_179_int; // 0x69f Eq
	if(var_180_bool == 0) goto Label_1702; // 0x6a0 JumpB
	var_181_object = Obj(); var_182_object = Obj(); // 0x6a1 PushV
	var_181_object = var_1_object; // 0x6a2 MovT
	var_182_object = var_0_object; // 0x6a3 MovT
	func_4817(); // 0x6a4 Call
	
Label_1702:
	var_183_int = 8446; // 0x6a6 PushI
	var_184_bool = var_31_bool == var_183_int; // 0x6a7 Eq
	if(var_184_bool == 0) goto Label_1710; // 0x6a8 JumpB
	var_185_object = Obj(); var_186_object = Obj(); // 0x6a9 PushV
	var_185_object = var_1_object; // 0x6aa MovT
	var_186_object = var_0_object; // 0x6ab MovT
	func_4817(); // 0x6ac Call
	
Label_1710:
	var_187_int = 5322; // 0x6ae PushI
	var_188_bool = var_30_string == var_187_int; // 0x6af Eq
	if(var_188_bool == 0) goto Label_1801; // 0x6b0 JumpB
	var_189_bool = 0; // 0x6b1 PushV
	var_189_bool = 0; // 0x6b2 MovB
	var_190_bool = 0; var_191_object = Obj(); // 0x6b3 PushV
	var_191_object = var_1_object; // 0x6b4 MovT
	func_5173(var_191_object); // 0x6b5 Call
	if(var_190_bool == 0) goto Label_1726; // 0x6b7 JumpB
	var_198_bool = 0; var_199_object = Obj(); // 0x6b8 PushV
	var_199_object = var_1_object; // 0x6b9 MovT
	func_5305(var_199_object); // 0x6ba Call
	if(var_198_bool == 0) goto Label_1726; // 0x6bc JumpB
	var_189_bool = 1; // 0x6bd MovB
	
Label_1726:
	if(var_189_bool == 0) goto Label_1747; // 0x6be JumpB
	var_204_string = ""; // 0x6bf PushV
	var_204_string = "Neutral"; // 0x6c0 MovS
	func_1557(var_31_bool, var_204_string); // 0x6c1 Call
	var_219_int = 4850; // 0x6c3 PushI
	SetMessage(var_219_int); // 0x6c4 TObjFunc
	ClearReplies(); // 0x6c6 TObjFunc
	var_220_int = 4879; // 0x6c8 PushI
	var_221_int = 5370; // 0x6c9 PushI
	var_222_int = 5353; // 0x6ca PushI
	AddReply(var_220_int, var_221_int, var_222_int); // 0x6cb TObjFunc
	var_223_int = 4890; // 0x6cd PushI
	var_224_int = 5354; // 0x6ce PushI
	var_225_int = 5367; // 0x6cf PushI
	AddReply(var_223_int, var_224_int, var_225_int); // 0x6d0 TObjFunc
	return 0; // 0x6d2 Return
	
Label_1747:
	var_226_string = ""; // 0x6d3 PushV
	var_226_string = "Neutral"; // 0x6d4 MovS
	func_1557(var_31_bool, var_226_string); // 0x6d5 Call
	var_227_int = 7627; // 0x6d7 PushI
	SetMessage(var_227_int); // 0x6d8 TObjFunc
	ClearReplies(); // 0x6da TObjFunc
	var_228_bool = 0; var_229_object = Obj(); // 0x6dc PushV
	var_229_object = var_1_object; // 0x6dd MovT
	func_5197(var_229_object); // 0x6de Call
	if(var_228_bool == 0) goto Label_1766; // 0x6e0 JumpB
	var_234_int = 7629; // 0x6e1 PushI
	var_235_int = 5329; // 0x6e2 PushI
	var_236_int = 8418; // 0x6e3 PushI
	AddReply(var_234_int, var_235_int, var_236_int); // 0x6e4 TObjFunc
	
Label_1766:
	var_237_bool = 0; var_238_object = Obj(); // 0x6e6 PushV
	var_238_object = var_1_object; // 0x6e7 MovT
	func_5209(var_238_object); // 0x6e8 Call
	if(var_237_bool == 0) goto Label_1776; // 0x6ea JumpB
	var_243_int = 7632; // 0x6eb PushI
	var_244_int = 5334; // 0x6ec PushI
	var_245_int = 8421; // 0x6ed PushI
	AddReply(var_243_int, var_244_int, var_245_int); // 0x6ee TObjFunc
	
Label_1776:
	var_246_bool = 0; // 0x6f0 PushV
	var_246_bool = 0; // 0x6f1 MovB
	var_247_bool = 0; var_248_object = Obj(); // 0x6f2 PushV
	var_248_object = var_1_object; // 0x6f3 MovT
	func_5245(var_248_object); // 0x6f4 Call
	if(var_247_bool == 0) goto Label_1789; // 0x6f6 JumpB
	var_253_bool = 0; var_254_object = Obj(); // 0x6f7 PushV
	var_254_object = var_1_object; // 0x6f8 MovT
	func_5149(var_254_object); // 0x6f9 Call
	if(var_253_bool == 0) goto Label_1789; // 0x6fb JumpB
	var_246_bool = 1; // 0x6fc MovB
	
Label_1789:
	if(var_246_bool == 0) goto Label_1795; // 0x6fd JumpB
	var_259_int = 7630; // 0x6fe PushI
	var_260_int = 8420; // 0x6ff PushI
	var_261_int = 8419; // 0x700 PushI
	AddReply(var_259_int, var_260_int, var_261_int); // 0x701 TObjFunc
	
Label_1795:
	var_262_int = 7658; // 0x703 PushI
	var_263_int = -1; // 0x704 PushI
	var_264_int = 8451; // 0x705 PushI
	AddReply(var_262_int, var_263_int, var_264_int); // 0x706 TObjFunc
	return 0; // 0x708 Return
	
Label_1801:
	var_265_int = 8420; // 0x709 PushI
	var_266_bool = var_30_string == var_265_int; // 0x70a Eq
	if(var_266_bool == 0) goto Label_1819; // 0x70b JumpB
	var_267_string = ""; // 0x70c PushV
	var_267_string = "Neutral"; // 0x70d MovS
	func_1557(var_31_bool, var_267_string); // 0x70e Call
	var_268_int = 7631; // 0x710 PushI
	SetMessage(var_268_int); // 0x711 TObjFunc
	ClearReplies(); // 0x713 TObjFunc
	var_269_int = 7633; // 0x715 PushI
	var_270_int = 8445; // 0x716 PushI
	var_271_int = 8422; // 0x717 PushI
	AddReply(var_269_int, var_270_int, var_271_int); // 0x718 TObjFunc
	return 0; // 0x71a Return
	
Label_1819:
	var_272_int = 8445; // 0x71b PushI
	var_273_bool = var_30_string == var_272_int; // 0x71c Eq
	if(var_273_bool == 0) goto Label_1842; // 0x71d JumpB
	var_274_string = ""; // 0x71e PushV
	var_274_string = "Neutral"; // 0x71f MovS
	func_1557(var_31_bool, var_274_string); // 0x720 Call
	var_275_int = 7652; // 0x722 PushI
	SetMessage(var_275_int); // 0x723 TObjFunc
	ClearReplies(); // 0x725 TObjFunc
	var_276_int = 7654; // 0x727 PushI
	var_277_int = 8448; // 0x728 PushI
	var_278_int = 8447; // 0x729 PushI
	AddReply(var_276_int, var_277_int, var_278_int); // 0x72a TObjFunc
	var_279_int = 7653; // 0x72c PushI
	var_280_int = -1; // 0x72d PushI
	var_281_int = 8446; // 0x72e PushI
	AddReply(var_279_int, var_280_int, var_281_int); // 0x72f TObjFunc
	return 0; // 0x731 Return
	
Label_1842:
	var_282_int = 8448; // 0x732 PushI
	var_283_bool = var_30_string == var_282_int; // 0x733 Eq
	if(var_283_bool == 0) goto Label_1865; // 0x734 JumpB
	var_284_string = ""; // 0x735 PushV
	var_284_string = "Neutral"; // 0x736 MovS
	func_1557(var_31_bool, var_284_string); // 0x737 Call
	var_285_int = 7655; // 0x739 PushI
	SetMessage(var_285_int); // 0x73a TObjFunc
	ClearReplies(); // 0x73c TObjFunc
	var_286_int = 7656; // 0x73e PushI
	var_287_int = -1; // 0x73f PushI
	var_288_int = 8449; // 0x740 PushI
	AddReply(var_286_int, var_287_int, var_288_int); // 0x741 TObjFunc
	var_289_int = 7657; // 0x743 PushI
	var_290_int = -1; // 0x744 PushI
	var_291_int = 8450; // 0x745 PushI
	AddReply(var_289_int, var_290_int, var_291_int); // 0x746 TObjFunc
	return 0; // 0x748 Return
	
Label_1865:
	var_292_int = 5334; // 0x749 PushI
	var_293_bool = var_30_string == var_292_int; // 0x74a Eq
	if(var_293_bool == 0) goto Label_1904; // 0x74b JumpB
	var_294_object = Obj(); var_295_object = Obj(); // 0x74c PushV
	var_294_object = var_1_object; // 0x74d MovT
	var_295_object = var_0_object; // 0x74e MovT
	func_5019(); // 0x74f Call
	var_298_string = ""; // 0x751 PushV
	var_298_string = "Neutral"; // 0x752 MovS
	func_1557(var_31_bool, var_298_string); // 0x753 Call
	var_299_int = 4862; // 0x755 PushI
	SetMessage(var_299_int); // 0x756 TObjFunc
	ClearReplies(); // 0x758 TObjFunc
	var_300_int = 4863; // 0x75a PushI
	var_301_int = 5336; // 0x75b PushI
	var_302_int = 5335; // 0x75c PushI
	AddReply(var_300_int, var_301_int, var_302_int); // 0x75d TObjFunc
	var_303_int = 4875; // 0x75f PushI
	var_304_int = 5414; // 0x760 PushI
	var_305_int = 5348; // 0x761 PushI
	AddReply(var_303_int, var_304_int, var_305_int); // 0x762 TObjFunc
	var_306_bool = 0; var_307_object = Obj(); // 0x764 PushV
	var_307_object = var_1_object; // 0x765 MovT
	func_5137(var_307_object); // 0x766 Call
	var_312_bool = var_306_bool == 0; // 0x768 Not
	if(var_312_bool == 0) goto Label_1903; // 0x769 JumpB
	var_313_int = 7643; // 0x76a PushI
	var_314_int = 8435; // 0x76b PushI
	var_315_int = 8434; // 0x76c PushI
	AddReply(var_313_int, var_314_int, var_315_int); // 0x76d TObjFunc
	
Label_1903:
	return 0; // 0x76f Return
	
Label_1904:
	var_316_int = 8435; // 0x770 PushI
	var_317_bool = var_30_string == var_316_int; // 0x771 Eq
	if(var_317_bool == 0) goto Label_1922; // 0x772 JumpB
	var_318_string = ""; // 0x773 PushV
	var_318_string = "Neutral"; // 0x774 MovS
	func_1557(var_31_bool, var_318_string); // 0x775 Call
	var_319_int = 7644; // 0x777 PushI
	SetMessage(var_319_int); // 0x778 TObjFunc
	ClearReplies(); // 0x77a TObjFunc
	var_320_int = 7645; // 0x77c PushI
	var_321_int = 8437; // 0x77d PushI
	var_322_int = 8436; // 0x77e PushI
	AddReply(var_320_int, var_321_int, var_322_int); // 0x77f TObjFunc
	return 0; // 0x781 Return
	
Label_1922:
	var_323_int = 8437; // 0x782 PushI
	var_324_bool = var_30_string == var_323_int; // 0x783 Eq
	if(var_324_bool == 0) goto Label_1940; // 0x784 JumpB
	var_325_string = ""; // 0x785 PushV
	var_325_string = "Neutral"; // 0x786 MovS
	func_1557(var_31_bool, var_325_string); // 0x787 Call
	var_326_int = 7646; // 0x789 PushI
	SetMessage(var_326_int); // 0x78a TObjFunc
	ClearReplies(); // 0x78c TObjFunc
	var_327_int = 7647; // 0x78e PushI
	var_328_int = 5336; // 0x78f PushI
	var_329_int = 8438; // 0x790 PushI
	AddReply(var_327_int, var_328_int, var_329_int); // 0x791 TObjFunc
	return 0; // 0x793 Return
	
Label_1940:
	var_330_int = 5414; // 0x794 PushI
	var_331_bool = var_30_string == var_330_int; // 0x795 Eq
	if(var_331_bool == 0) goto Label_1963; // 0x796 JumpB
	var_332_string = ""; // 0x797 PushV
	var_332_string = "Neutral"; // 0x798 MovS
	func_1557(var_31_bool, var_332_string); // 0x799 Call
	var_333_int = 4926; // 0x79b PushI
	SetMessage(var_333_int); // 0x79c TObjFunc
	ClearReplies(); // 0x79e TObjFunc
	var_334_int = 4927; // 0x7a0 PushI
	var_335_int = 8441; // 0x7a1 PushI
	var_336_int = 5415; // 0x7a2 PushI
	AddReply(var_334_int, var_335_int, var_336_int); // 0x7a3 TObjFunc
	var_337_int = 7648; // 0x7a5 PushI
	var_338_int = -1; // 0x7a6 PushI
	var_339_int = 8440; // 0x7a7 PushI
	AddReply(var_337_int, var_338_int, var_339_int); // 0x7a8 TObjFunc
	return 0; // 0x7aa Return
	
Label_1963:
	var_340_int = 8441; // 0x7ab PushI
	var_341_bool = var_30_string == var_340_int; // 0x7ac Eq
	if(var_341_bool == 0) goto Label_1981; // 0x7ad JumpB
	var_342_string = ""; // 0x7ae PushV
	var_342_string = "Neutral"; // 0x7af MovS
	func_1557(var_31_bool, var_342_string); // 0x7b0 Call
	var_343_int = 7649; // 0x7b2 PushI
	SetMessage(var_343_int); // 0x7b3 TObjFunc
	ClearReplies(); // 0x7b5 TObjFunc
	var_344_int = 7650; // 0x7b7 PushI
	var_345_int = 5338; // 0x7b8 PushI
	var_346_int = 8442; // 0x7b9 PushI
	AddReply(var_344_int, var_345_int, var_346_int); // 0x7ba TObjFunc
	return 0; // 0x7bc Return
	
Label_1981:
	var_347_int = 5336; // 0x7bd PushI
	var_348_bool = var_30_string == var_347_int; // 0x7be Eq
	if(var_348_bool == 0) goto Label_2004; // 0x7bf JumpB
	var_349_string = ""; // 0x7c0 PushV
	var_349_string = "Neutral"; // 0x7c1 MovS
	func_1557(var_31_bool, var_349_string); // 0x7c2 Call
	var_350_int = 4864; // 0x7c4 PushI
	SetMessage(var_350_int); // 0x7c5 TObjFunc
	ClearReplies(); // 0x7c7 TObjFunc
	var_351_int = 4865; // 0x7c9 PushI
	var_352_int = 5338; // 0x7ca PushI
	var_353_int = 5337; // 0x7cb PushI
	AddReply(var_351_int, var_352_int, var_353_int); // 0x7cc TObjFunc
	var_354_int = 4871; // 0x7ce PushI
	var_355_int = 5344; // 0x7cf PushI
	var_356_int = 5343; // 0x7d0 PushI
	AddReply(var_354_int, var_355_int, var_356_int); // 0x7d1 TObjFunc
	return 0; // 0x7d3 Return
	
Label_2004:
	var_357_int = 5344; // 0x7d4 PushI
	var_358_bool = var_30_string == var_357_int; // 0x7d5 Eq
	if(var_358_bool == 0) goto Label_2027; // 0x7d6 JumpB
	var_359_string = ""; // 0x7d7 PushV
	var_359_string = "Neutral"; // 0x7d8 MovS
	func_1557(var_31_bool, var_359_string); // 0x7d9 Call
	var_360_int = 4872; // 0x7db PushI
	SetMessage(var_360_int); // 0x7dc TObjFunc
	ClearReplies(); // 0x7de TObjFunc
	var_361_int = 4873; // 0x7e0 PushI
	var_362_int = 5338; // 0x7e1 PushI
	var_363_int = 5345; // 0x7e2 PushI
	AddReply(var_361_int, var_362_int, var_363_int); // 0x7e3 TObjFunc
	var_364_int = 4874; // 0x7e5 PushI
	var_365_int = -1; // 0x7e6 PushI
	var_366_int = 5347; // 0x7e7 PushI
	AddReply(var_364_int, var_365_int, var_366_int); // 0x7e8 TObjFunc
	return 0; // 0x7ea Return
	
Label_2027:
	var_367_int = 5338; // 0x7eb PushI
	var_368_bool = var_30_string == var_367_int; // 0x7ec Eq
	if(var_368_bool == 0) goto Label_2045; // 0x7ed JumpB
	var_369_string = ""; // 0x7ee PushV
	var_369_string = "Neutral"; // 0x7ef MovS
	func_1557(var_31_bool, var_369_string); // 0x7f0 Call
	var_370_int = 4866; // 0x7f2 PushI
	SetMessage(var_370_int); // 0x7f3 TObjFunc
	ClearReplies(); // 0x7f5 TObjFunc
	var_371_int = 4867; // 0x7f7 PushI
	var_372_int = 5340; // 0x7f8 PushI
	var_373_int = 5339; // 0x7f9 PushI
	AddReply(var_371_int, var_372_int, var_373_int); // 0x7fa TObjFunc
	return 0; // 0x7fc Return
	
Label_2045:
	var_374_int = 5340; // 0x7fd PushI
	var_375_bool = var_30_string == var_374_int; // 0x7fe Eq
	if(var_375_bool == 0) goto Label_2068; // 0x7ff JumpB
	var_376_string = ""; // 0x800 PushV
	var_376_string = "Neutral"; // 0x801 MovS
	func_1557(var_31_bool, var_376_string); // 0x802 Call
	var_377_int = 4868; // 0x804 PushI
	SetMessage(var_377_int); // 0x805 TObjFunc
	ClearReplies(); // 0x807 TObjFunc
	var_378_int = 4869; // 0x809 PushI
	var_379_int = -1; // 0x80a PushI
	var_380_int = 5341; // 0x80b PushI
	AddReply(var_378_int, var_379_int, var_380_int); // 0x80c TObjFunc
	var_381_int = 4870; // 0x80e PushI
	var_382_int = -1; // 0x80f PushI
	var_383_int = 5342; // 0x810 PushI
	AddReply(var_381_int, var_382_int, var_383_int); // 0x811 TObjFunc
	return 0; // 0x813 Return
	
Label_2068:
	var_384_int = 5329; // 0x814 PushI
	var_385_bool = var_30_string == var_384_int; // 0x815 Eq
	if(var_385_bool == 0) goto Label_2086; // 0x816 JumpB
	var_386_string = ""; // 0x817 PushV
	var_386_string = "Neutral"; // 0x818 MovS
	func_1557(var_31_bool, var_386_string); // 0x819 Call
	var_387_int = 4857; // 0x81b PushI
	SetMessage(var_387_int); // 0x81c TObjFunc
	ClearReplies(); // 0x81e TObjFunc
	var_388_int = 4858; // 0x820 PushI
	var_389_int = 5374; // 0x821 PushI
	var_390_int = 5330; // 0x822 PushI
	AddReply(var_388_int, var_389_int, var_390_int); // 0x823 TObjFunc
	return 0; // 0x825 Return
	
Label_2086:
	var_391_int = 5374; // 0x826 PushI
	var_392_bool = var_30_string == var_391_int; // 0x827 Eq
	if(var_392_bool == 0) goto Label_2109; // 0x828 JumpB
	var_393_string = ""; // 0x829 PushV
	var_393_string = "Neutral"; // 0x82a MovS
	func_1557(var_31_bool, var_393_string); // 0x82b Call
	var_394_int = 4895; // 0x82d PushI
	SetMessage(var_394_int); // 0x82e TObjFunc
	ClearReplies(); // 0x830 TObjFunc
	var_395_int = 4896; // 0x832 PushI
	var_396_int = 5377; // 0x833 PushI
	var_397_int = 5375; // 0x834 PushI
	AddReply(var_395_int, var_396_int, var_397_int); // 0x835 TObjFunc
	var_398_int = 4897; // 0x837 PushI
	var_399_int = 5377; // 0x838 PushI
	var_400_int = 5376; // 0x839 PushI
	AddReply(var_398_int, var_399_int, var_400_int); // 0x83a TObjFunc
	return 0; // 0x83c Return
	
Label_2109:
	var_401_int = 5377; // 0x83d PushI
	var_402_bool = var_30_string == var_401_int; // 0x83e Eq
	if(var_402_bool == 0) goto Label_2132; // 0x83f JumpB
	var_403_string = ""; // 0x840 PushV
	var_403_string = "Neutral"; // 0x841 MovS
	func_1557(var_31_bool, var_403_string); // 0x842 Call
	var_404_int = 4898; // 0x844 PushI
	SetMessage(var_404_int); // 0x845 TObjFunc
	ClearReplies(); // 0x847 TObjFunc
	var_405_int = 4899; // 0x849 PushI
	var_406_int = 5380; // 0x84a PushI
	var_407_int = 5378; // 0x84b PushI
	AddReply(var_405_int, var_406_int, var_407_int); // 0x84c TObjFunc
	var_408_int = 4913; // 0x84e PushI
	var_409_int = 5396; // 0x84f PushI
	var_410_int = 5395; // 0x850 PushI
	AddReply(var_408_int, var_409_int, var_410_int); // 0x851 TObjFunc
	return 0; // 0x853 Return
	
Label_2132:
	var_411_int = 5396; // 0x854 PushI
	var_412_bool = var_30_string == var_411_int; // 0x855 Eq
	if(var_412_bool == 0) goto Label_2150; // 0x856 JumpB
	var_413_string = ""; // 0x857 PushV
	var_413_string = "Neutral"; // 0x858 MovS
	func_1557(var_31_bool, var_413_string); // 0x859 Call
	var_414_int = 4914; // 0x85b PushI
	SetMessage(var_414_int); // 0x85c TObjFunc
	ClearReplies(); // 0x85e TObjFunc
	var_415_int = 4915; // 0x860 PushI
	var_416_int = 5380; // 0x861 PushI
	var_417_int = 5397; // 0x862 PushI
	AddReply(var_415_int, var_416_int, var_417_int); // 0x863 TObjFunc
	return 0; // 0x865 Return
	
Label_2150:
	var_418_int = 5380; // 0x866 PushI
	var_419_bool = var_30_string == var_418_int; // 0x867 Eq
	if(var_419_bool == 0) goto Label_2178; // 0x868 JumpB
	var_420_string = ""; // 0x869 PushV
	var_420_string = "Neutral"; // 0x86a MovS
	func_1557(var_31_bool, var_420_string); // 0x86b Call
	var_421_int = 4900; // 0x86d PushI
	SetMessage(var_421_int); // 0x86e TObjFunc
	ClearReplies(); // 0x870 TObjFunc
	var_422_int = 4901; // 0x872 PushI
	var_423_int = 5382; // 0x873 PushI
	var_424_int = 5381; // 0x874 PushI
	AddReply(var_422_int, var_423_int, var_424_int); // 0x875 TObjFunc
	var_425_int = 4916; // 0x877 PushI
	var_426_int = 5382; // 0x878 PushI
	var_427_int = 5399; // 0x879 PushI
	AddReply(var_425_int, var_426_int, var_427_int); // 0x87a TObjFunc
	var_428_int = 4917; // 0x87c PushI
	var_429_int = 5402; // 0x87d PushI
	var_430_int = 5401; // 0x87e PushI
	AddReply(var_428_int, var_429_int, var_430_int); // 0x87f TObjFunc
	return 0; // 0x881 Return
	
Label_2178:
	var_431_int = 5402; // 0x882 PushI
	var_432_bool = var_30_string == var_431_int; // 0x883 Eq
	if(var_432_bool == 0) goto Label_2196; // 0x884 JumpB
	var_433_string = ""; // 0x885 PushV
	var_433_string = "Neutral"; // 0x886 MovS
	func_1557(var_31_bool, var_433_string); // 0x887 Call
	var_434_int = 4918; // 0x889 PushI
	SetMessage(var_434_int); // 0x88a TObjFunc
	ClearReplies(); // 0x88c TObjFunc
	var_435_int = 4919; // 0x88e PushI
	var_436_int = 5382; // 0x88f PushI
	var_437_int = 5403; // 0x890 PushI
	AddReply(var_435_int, var_436_int, var_437_int); // 0x891 TObjFunc
	return 0; // 0x893 Return
	
Label_2196:
	var_438_int = 5382; // 0x894 PushI
	var_439_bool = var_30_string == var_438_int; // 0x895 Eq
	if(var_439_bool == 0) goto Label_2239; // 0x896 JumpB
	var_440_object = Obj(); var_441_object = Obj(); // 0x897 PushV
	var_440_object = var_1_object; // 0x898 MovT
	var_441_object = var_0_object; // 0x899 MovT
	func_5037(); // 0x89a Call
	var_444_object = Obj(); var_445_object = Obj(); // 0x89c PushV
	var_444_object = var_1_object; // 0x89d MovT
	var_445_object = var_0_object; // 0x89e MovT
	func_5031(); // 0x89f Call
	var_448_object = Obj(); var_449_object = Obj(); // 0x8a1 PushV
	var_448_object = var_1_object; // 0x8a2 MovT
	var_449_object = var_0_object; // 0x8a3 MovT
	func_5025(); // 0x8a4 Call
	var_452_string = ""; // 0x8a6 PushV
	var_452_string = "Neutral"; // 0x8a7 MovS
	func_1557(var_31_bool, var_452_string); // 0x8a8 Call
	var_453_int = 4902; // 0x8aa PushI
	SetMessage(var_453_int); // 0x8ab TObjFunc
	ClearReplies(); // 0x8ad TObjFunc
	var_454_int = 4903; // 0x8af PushI
	var_455_int = 5385; // 0x8b0 PushI
	var_456_int = 5383; // 0x8b1 PushI
	AddReply(var_454_int, var_455_int, var_456_int); // 0x8b2 TObjFunc
	var_457_int = 4920; // 0x8b4 PushI
	var_458_int = 5385; // 0x8b5 PushI
	var_459_int = 5405; // 0x8b6 PushI
	AddReply(var_457_int, var_458_int, var_459_int); // 0x8b7 TObjFunc
	var_460_int = 4925; // 0x8b9 PushI
	var_461_int = 5409; // 0x8ba PushI
	var_462_int = 5412; // 0x8bb PushI
	AddReply(var_460_int, var_461_int, var_462_int); // 0x8bc TObjFunc
	return 0; // 0x8be Return
	
Label_2239:
	var_463_int = 5385; // 0x8bf PushI
	var_464_bool = var_30_string == var_463_int; // 0x8c0 Eq
	if(var_464_bool == 0) goto Label_2267; // 0x8c1 JumpB
	var_465_string = ""; // 0x8c2 PushV
	var_465_string = "Neutral"; // 0x8c3 MovS
	func_1557(var_31_bool, var_465_string); // 0x8c4 Call
	var_466_int = 4905; // 0x8c6 PushI
	SetMessage(var_466_int); // 0x8c7 TObjFunc
	ClearReplies(); // 0x8c9 TObjFunc
	var_467_int = 4906; // 0x8cb PushI
	var_468_int = 5388; // 0x8cc PushI
	var_469_int = 5386; // 0x8cd PushI
	AddReply(var_467_int, var_468_int, var_469_int); // 0x8ce TObjFunc
	var_470_int = 4907; // 0x8d0 PushI
	var_471_int = 5388; // 0x8d1 PushI
	var_472_int = 5387; // 0x8d2 PushI
	AddReply(var_470_int, var_471_int, var_472_int); // 0x8d3 TObjFunc
	var_473_int = 4922; // 0x8d5 PushI
	var_474_int = 5409; // 0x8d6 PushI
	var_475_int = 5408; // 0x8d7 PushI
	AddReply(var_473_int, var_474_int, var_475_int); // 0x8d8 TObjFunc
	return 0; // 0x8da Return
	
Label_2267:
	var_476_int = 5409; // 0x8db PushI
	var_477_bool = var_30_string == var_476_int; // 0x8dc Eq
	if(var_477_bool == 0) goto Label_2285; // 0x8dd JumpB
	var_478_string = ""; // 0x8de PushV
	var_478_string = "Neutral"; // 0x8df MovS
	func_1557(var_31_bool, var_478_string); // 0x8e0 Call
	var_479_int = 4923; // 0x8e2 PushI
	SetMessage(var_479_int); // 0x8e3 TObjFunc
	ClearReplies(); // 0x8e5 TObjFunc
	var_480_int = 4924; // 0x8e7 PushI
	var_481_int = 5388; // 0x8e8 PushI
	var_482_int = 5410; // 0x8e9 PushI
	AddReply(var_480_int, var_481_int, var_482_int); // 0x8ea TObjFunc
	return 0; // 0x8ec Return
	
Label_2285:
	var_483_int = 5388; // 0x8ed PushI
	var_484_bool = var_30_string == var_483_int; // 0x8ee Eq
	if(var_484_bool == 0) goto Label_2308; // 0x8ef JumpB
	var_485_string = ""; // 0x8f0 PushV
	var_485_string = "Neutral"; // 0x8f1 MovS
	func_1557(var_31_bool, var_485_string); // 0x8f2 Call
	var_486_int = 4908; // 0x8f4 PushI
	SetMessage(var_486_int); // 0x8f5 TObjFunc
	ClearReplies(); // 0x8f7 TObjFunc
	var_487_int = 4909; // 0x8f9 PushI
	var_488_int = 5392; // 0x8fa PushI
	var_489_int = 5390; // 0x8fb PushI
	AddReply(var_487_int, var_488_int, var_489_int); // 0x8fc TObjFunc
	var_490_int = 4910; // 0x8fe PushI
	var_491_int = 5392; // 0x8ff PushI
	var_492_int = 5391; // 0x900 PushI
	AddReply(var_490_int, var_491_int, var_492_int); // 0x901 TObjFunc
	return 0; // 0x903 Return
	
Label_2308:
	var_493_int = 5392; // 0x904 PushI
	var_494_bool = var_30_string == var_493_int; // 0x905 Eq
	if(var_494_bool == 0) goto Label_2331; // 0x906 JumpB
	var_495_string = ""; // 0x907 PushV
	var_495_string = "Neutral"; // 0x908 MovS
	func_1557(var_31_bool, var_495_string); // 0x909 Call
	var_496_int = 4911; // 0x90b PushI
	SetMessage(var_496_int); // 0x90c TObjFunc
	ClearReplies(); // 0x90e TObjFunc
	var_497_int = 4912; // 0x910 PushI
	var_498_int = -1; // 0x911 PushI
	var_499_int = 5394; // 0x912 PushI
	AddReply(var_497_int, var_498_int, var_499_int); // 0x913 TObjFunc
	var_500_int = 4921; // 0x915 PushI
	var_501_int = -1; // 0x916 PushI
	var_502_int = 5407; // 0x917 PushI
	AddReply(var_500_int, var_501_int, var_502_int); // 0x918 TObjFunc
	return 0; // 0x91a Return
	
Label_2331:
	var_503_int = 5354; // 0x91b PushI
	var_504_bool = var_30_string == var_503_int; // 0x91c Eq
	if(var_504_bool == 0) goto Label_2354; // 0x91d JumpB
	var_505_string = ""; // 0x91e PushV
	var_505_string = "Neutral"; // 0x91f MovS
	func_1557(var_31_bool, var_505_string); // 0x920 Call
	var_506_int = 4880; // 0x922 PushI
	SetMessage(var_506_int); // 0x923 TObjFunc
	ClearReplies(); // 0x925 TObjFunc
	var_507_int = 4881; // 0x927 PushI
	var_508_int = 5356; // 0x928 PushI
	var_509_int = 5355; // 0x929 PushI
	AddReply(var_507_int, var_508_int, var_509_int); // 0x92a TObjFunc
	var_510_int = 4889; // 0x92c PushI
	var_511_int = 5356; // 0x92d PushI
	var_512_int = 5365; // 0x92e PushI
	AddReply(var_510_int, var_511_int, var_512_int); // 0x92f TObjFunc
	return 0; // 0x931 Return
	
Label_2354:
	var_513_int = 5356; // 0x932 PushI
	var_514_bool = var_30_string == var_513_int; // 0x933 Eq
	if(var_514_bool == 0) goto Label_2377; // 0x934 JumpB
	var_515_string = ""; // 0x935 PushV
	var_515_string = "Neutral"; // 0x936 MovS
	func_1557(var_31_bool, var_515_string); // 0x937 Call
	var_516_int = 4882; // 0x939 PushI
	SetMessage(var_516_int); // 0x93a TObjFunc
	ClearReplies(); // 0x93c TObjFunc
	var_517_int = 4883; // 0x93e PushI
	var_518_int = 5358; // 0x93f PushI
	var_519_int = 5357; // 0x940 PushI
	AddReply(var_517_int, var_518_int, var_519_int); // 0x941 TObjFunc
	var_520_int = 4887; // 0x943 PushI
	var_521_int = 5358; // 0x944 PushI
	var_522_int = 5361; // 0x945 PushI
	AddReply(var_520_int, var_521_int, var_522_int); // 0x946 TObjFunc
	return 0; // 0x948 Return
	
Label_2377:
	var_523_int = 5358; // 0x949 PushI
	var_524_bool = var_30_string == var_523_int; // 0x94a Eq
	if(var_524_bool == 0) goto Label_2400; // 0x94b JumpB
	var_525_string = ""; // 0x94c PushV
	var_525_string = "Neutral"; // 0x94d MovS
	func_1557(var_31_bool, var_525_string); // 0x94e Call
	var_526_int = 4884; // 0x950 PushI
	SetMessage(var_526_int); // 0x951 TObjFunc
	ClearReplies(); // 0x953 TObjFunc
	var_527_int = 4886; // 0x955 PushI
	var_528_int = -1; // 0x956 PushI
	var_529_int = 5360; // 0x957 PushI
	AddReply(var_527_int, var_528_int, var_529_int); // 0x958 TObjFunc
	var_530_int = 4885; // 0x95a PushI
	var_531_int = -1; // 0x95b PushI
	var_532_int = 5359; // 0x95c PushI
	AddReply(var_530_int, var_531_int, var_532_int); // 0x95d TObjFunc
	return 0; // 0x95f Return
	
Label_2400:
	var_533_int = 5370; // 0x960 PushI
	var_534_bool = var_30_string == var_533_int; // 0x961 Eq
	if(var_534_bool == 0) goto Label_2423; // 0x962 JumpB
	var_535_string = ""; // 0x963 PushV
	var_535_string = "Neutral"; // 0x964 MovS
	func_1557(var_31_bool, var_535_string); // 0x965 Call
	var_536_int = 4892; // 0x967 PushI
	SetMessage(var_536_int); // 0x968 TObjFunc
	ClearReplies(); // 0x96a TObjFunc
	var_537_int = 4928; // 0x96c PushI
	var_538_int = 5421; // 0x96d PushI
	var_539_int = 5416; // 0x96e PushI
	AddReply(var_537_int, var_538_int, var_539_int); // 0x96f TObjFunc
	var_540_int = 4929; // 0x971 PushI
	var_541_int = 5418; // 0x972 PushI
	var_542_int = 5417; // 0x973 PushI
	AddReply(var_540_int, var_541_int, var_542_int); // 0x974 TObjFunc
	return 0; // 0x976 Return
	
Label_2423:
	var_543_int = 5418; // 0x977 PushI
	var_544_bool = var_30_string == var_543_int; // 0x978 Eq
	if(var_544_bool == 0) goto Label_2441; // 0x979 JumpB
	var_545_string = ""; // 0x97a PushV
	var_545_string = "Neutral"; // 0x97b MovS
	func_1557(var_31_bool, var_545_string); // 0x97c Call
	var_546_int = 4930; // 0x97e PushI
	SetMessage(var_546_int); // 0x97f TObjFunc
	ClearReplies(); // 0x981 TObjFunc
	var_547_int = 4931; // 0x983 PushI
	var_548_int = 5358; // 0x984 PushI
	var_549_int = 5419; // 0x985 PushI
	AddReply(var_547_int, var_548_int, var_549_int); // 0x986 TObjFunc
	return 0; // 0x988 Return
	
Label_2441:
	var_550_int = 5421; // 0x989 PushI
	var_551_bool = var_30_string == var_550_int; // 0x98a Eq
	if(var_551_bool == 0) goto Label_2464; // 0x98b JumpB
	var_552_string = ""; // 0x98c PushV
	var_552_string = "Neutral"; // 0x98d MovS
	func_1557(var_31_bool, var_552_string); // 0x98e Call
	var_553_int = 4932; // 0x990 PushI
	SetMessage(var_553_int); // 0x991 TObjFunc
	ClearReplies(); // 0x993 TObjFunc
	var_554_int = 4893; // 0x995 PushI
	var_555_int = 5354; // 0x996 PushI
	var_556_int = 5371; // 0x997 PushI
	AddReply(var_554_int, var_555_int, var_556_int); // 0x998 TObjFunc
	var_557_int = 4933; // 0x99a PushI
	var_558_int = 5423; // 0x99b PushI
	var_559_int = 5422; // 0x99c PushI
	AddReply(var_557_int, var_558_int, var_559_int); // 0x99d TObjFunc
	return 0; // 0x99f Return
	
Label_2464:
	var_560_int = 5423; // 0x9a0 PushI
	var_561_bool = var_30_string == var_560_int; // 0x9a1 Eq
	if(var_561_bool == 0) goto Label_2482; // 0x9a2 JumpB
	var_562_string = ""; // 0x9a3 PushV
	var_562_string = "Neutral"; // 0x9a4 MovS
	func_1557(var_31_bool, var_562_string); // 0x9a5 Call
	var_563_int = 4934; // 0x9a7 PushI
	SetMessage(var_563_int); // 0x9a8 TObjFunc
	ClearReplies(); // 0x9aa TObjFunc
	var_564_int = 4935; // 0x9ac PushI
	var_565_int = -1; // 0x9ad PushI
	var_566_int = 5424; // 0x9ae PushI
	AddReply(var_564_int, var_565_int, var_566_int); // 0x9af TObjFunc
	return 0; // 0x9b1 Return
	
Label_2482:
	var_3_string = 1; // 0x9b2 TMovB
	var_567_bool = 0; // 0x9b3 PushV
	func_4674(var_567_bool); // 0x9b4 Call
	if(var_567_bool == 0) goto Label_2490; // 0x9b6 JumpB
	lshStopAnimation(); // 0x9b7 Func
	goto Label_2492; // 0x9b9 Jump
	
Label_2492:
	return 0; // 0x9bc Return
	
Label_2490:
	StopAnimation(); // 0x9ba Func
	
Label_2494:
	return 0; // 0x9be Return
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool)
{
	var_32_int = 1; // 0xa83 PushI
	if(var_32_int == 0) goto Label_3113; // 0xa84 JumpB
	func_4596(); // 0xa86 Call
	var_34_int = 7538; // 0xa88 PushI
	var_35_bool = var_31_bool == var_34_int; // 0xa89 Eq
	if(var_35_bool == 0) goto Label_2709; // 0xa8a JumpB
	var_36_object = Obj(); var_37_object = Obj(); // 0xa8b PushV
	var_36_object = var_1_object; // 0xa8c MovT
	var_37_object = var_0_object; // 0xa8d MovT
	func_4799(); // 0xa8e Call
	var_40_object = Obj(); var_41_object = Obj(); // 0xa90 PushV
	var_40_object = var_1_object; // 0xa91 MovT
	var_41_object = var_0_object; // 0xa92 MovT
	func_4811(); // 0xa93 Call
	
Label_2709:
	var_44_int = 7539; // 0xa95 PushI
	var_45_bool = var_31_bool == var_44_int; // 0xa96 Eq
	if(var_45_bool == 0) goto Label_2722; // 0xa97 JumpB
	var_46_object = Obj(); var_47_object = Obj(); // 0xa98 PushV
	var_46_object = var_1_object; // 0xa99 MovT
	var_47_object = var_0_object; // 0xa9a MovT
	func_4799(); // 0xa9b Call
	var_48_object = Obj(); var_49_object = Obj(); // 0xa9d PushV
	var_48_object = var_1_object; // 0xa9e MovT
	var_49_object = var_0_object; // 0xa9f MovT
	func_4811(); // 0xaa0 Call
	
Label_2722:
	var_50_int = 7542; // 0xaa2 PushI
	var_51_bool = var_31_bool == var_50_int; // 0xaa3 Eq
	if(var_51_bool == 0) goto Label_2735; // 0xaa4 JumpB
	var_52_object = Obj(); var_53_object = Obj(); // 0xaa5 PushV
	var_52_object = var_1_object; // 0xaa6 MovT
	var_53_object = var_0_object; // 0xaa7 MovT
	func_4799(); // 0xaa8 Call
	var_54_object = Obj(); var_55_object = Obj(); // 0xaaa PushV
	var_54_object = var_1_object; // 0xaab MovT
	var_55_object = var_0_object; // 0xaac MovT
	func_4811(); // 0xaad Call
	
Label_2735:
	var_56_int = 7543; // 0xaaf PushI
	var_57_bool = var_31_bool == var_56_int; // 0xab0 Eq
	if(var_57_bool == 0) goto Label_2748; // 0xab1 JumpB
	var_58_object = Obj(); var_59_object = Obj(); // 0xab2 PushV
	var_58_object = var_1_object; // 0xab3 MovT
	var_59_object = var_0_object; // 0xab4 MovT
	func_4799(); // 0xab5 Call
	var_60_object = Obj(); var_61_object = Obj(); // 0xab7 PushV
	var_60_object = var_1_object; // 0xab8 MovT
	var_61_object = var_0_object; // 0xab9 MovT
	func_4811(); // 0xaba Call
	
Label_2748:
	var_62_int = 7841; // 0xabc PushI
	var_63_bool = var_31_bool == var_62_int; // 0xabd Eq
	if(var_63_bool == 0) goto Label_2756; // 0xabe JumpB
	var_64_object = Obj(); var_65_object = Obj(); // 0xabf PushV
	var_64_object = var_1_object; // 0xac0 MovT
	var_65_object = var_0_object; // 0xac1 MovT
	func_4805(); // 0xac2 Call
	
Label_2756:
	var_68_int = 7842; // 0xac4 PushI
	var_69_bool = var_31_bool == var_68_int; // 0xac5 Eq
	if(var_69_bool == 0) goto Label_2764; // 0xac6 JumpB
	var_70_object = Obj(); var_71_object = Obj(); // 0xac7 PushV
	var_70_object = var_1_object; // 0xac8 MovT
	var_71_object = var_0_object; // 0xac9 MovT
	func_4805(); // 0xaca Call
	
Label_2764:
	var_72_int = 7839; // 0xacc PushI
	var_73_bool = var_31_bool == var_72_int; // 0xacd Eq
	if(var_73_bool == 0) goto Label_2777; // 0xace JumpB
	var_74_object = Obj(); var_75_object = Obj(); // 0xacf PushV
	var_74_object = var_1_object; // 0xad0 MovT
	var_75_object = var_0_object; // 0xad1 MovT
	func_4805(); // 0xad2 Call
	var_76_object = Obj(); var_77_object = Obj(); // 0xad4 PushV
	var_76_object = var_1_object; // 0xad5 MovT
	var_77_object = var_0_object; // 0xad6 MovT
	func_4811(); // 0xad7 Call
	
Label_2777:
	var_78_int = 7843; // 0xad9 PushI
	var_79_bool = var_31_bool == var_78_int; // 0xada Eq
	if(var_79_bool == 0) goto Label_2790; // 0xadb JumpB
	var_80_object = Obj(); var_81_object = Obj(); // 0xadc PushV
	var_80_object = var_1_object; // 0xadd MovT
	var_81_object = var_0_object; // 0xade MovT
	func_4805(); // 0xadf Call
	var_82_object = Obj(); var_83_object = Obj(); // 0xae1 PushV
	var_82_object = var_1_object; // 0xae2 MovT
	var_83_object = var_0_object; // 0xae3 MovT
	func_4811(); // 0xae4 Call
	
Label_2790:
	var_84_int = 7529; // 0xae6 PushI
	var_85_bool = var_30_string == var_84_int; // 0xae7 Eq
	if(var_85_bool == 0) goto Label_2871; // 0xae8 JumpB
	var_86_bool = 0; // 0xae9 PushV
	var_86_bool = 0; // 0xaea MovB
	var_87_bool = 0; var_88_object = Obj(); // 0xaeb PushV
	var_88_object = var_1_object; // 0xaec MovT
	func_5079(var_88_object); // 0xaed Call
	if(var_87_bool == 0) goto Label_2806; // 0xaef JumpB
	var_95_bool = 0; var_96_object = Obj(); // 0xaf0 PushV
	var_96_object = var_1_object; // 0xaf1 MovT
	func_5125(var_96_object); // 0xaf2 Call
	if(var_95_bool == 0) goto Label_2806; // 0xaf4 JumpB
	var_86_bool = 1; // 0xaf5 MovB
	
Label_2806:
	if(var_86_bool == 0) goto Label_2837; // 0xaf6 JumpB
	var_101_string = ""; // 0xaf7 PushV
	var_101_string = "Neutral"; // 0xaf8 MovS
	func_2674(var_31_bool, var_101_string); // 0xaf9 Call
	var_116_int = 6829; // 0xafb PushI
	SetMessage(var_116_int); // 0xafc TObjFunc
	ClearReplies(); // 0xafe TObjFunc
	var_117_int = 6830; // 0xb00 PushI
	var_118_int = 7531; // 0xb01 PushI
	var_119_int = 7530; // 0xb02 PushI
	AddReply(var_117_int, var_118_int, var_119_int); // 0xb03 TObjFunc
	var_120_int = 6844; // 0xb05 PushI
	var_121_int = 7547; // 0xb06 PushI
	var_122_int = 7546; // 0xb07 PushI
	AddReply(var_120_int, var_121_int, var_122_int); // 0xb08 TObjFunc
	var_123_int = 6848; // 0xb0a PushI
	var_124_int = 7547; // 0xb0b PushI
	var_125_int = 7552; // 0xb0c PushI
	AddReply(var_123_int, var_124_int, var_125_int); // 0xb0d TObjFunc
	var_126_int = 6849; // 0xb0f PushI
	var_127_int = 7535; // 0xb10 PushI
	var_128_int = 7554; // 0xb11 PushI
	AddReply(var_126_int, var_127_int, var_128_int); // 0xb12 TObjFunc
	return 0; // 0xb14 Return
	
Label_2837:
	var_129_string = ""; // 0xb15 PushV
	var_129_string = "Neutral"; // 0xb16 MovS
	func_2674(var_31_bool, var_129_string); // 0xb17 Call
	var_130_int = 6850; // 0xb19 PushI
	SetMessage(var_130_int); // 0xb1a TObjFunc
	ClearReplies(); // 0xb1c TObjFunc
	var_131_bool = 0; // 0xb1e PushV
	var_131_bool = 0; // 0xb1f MovB
	var_132_bool = 0; var_133_object = Obj(); // 0xb20 PushV
	var_133_object = var_1_object; // 0xb21 MovT
	func_5091(var_133_object); // 0xb22 Call
	if(var_132_bool == 0) goto Label_2859; // 0xb24 JumpB
	var_138_bool = 0; var_139_object = Obj(); // 0xb25 PushV
	var_139_object = var_1_object; // 0xb26 MovT
	func_5113(var_139_object); // 0xb27 Call
	if(var_138_bool == 0) goto Label_2859; // 0xb29 JumpB
	var_131_bool = 1; // 0xb2a MovB
	
Label_2859:
	if(var_131_bool == 0) goto Label_2865; // 0xb2b JumpB
	var_144_int = 6851; // 0xb2c PushI
	var_145_int = 7835; // 0xb2d PushI
	var_146_int = 7557; // 0xb2e PushI
	AddReply(var_144_int, var_145_int, var_146_int); // 0xb2f TObjFunc
	
Label_2865:
	var_147_int = 7536; // 0xb31 PushI
	var_148_int = -1; // 0xb32 PushI
	var_149_int = 8318; // 0xb33 PushI
	AddReply(var_147_int, var_148_int, var_149_int); // 0xb34 TObjFunc
	return 0; // 0xb36 Return
	
Label_2871:
	var_150_int = 7835; // 0xb37 PushI
	var_151_bool = var_30_string == var_150_int; // 0xb38 Eq
	if(var_151_bool == 0) goto Label_2894; // 0xb39 JumpB
	var_152_string = ""; // 0xb3a PushV
	var_152_string = "Neutral"; // 0xb3b MovS
	func_2674(var_31_bool, var_152_string); // 0xb3c Call
	var_153_int = 7116; // 0xb3e PushI
	SetMessage(var_153_int); // 0xb3f TObjFunc
	ClearReplies(); // 0xb41 TObjFunc
	var_154_int = 7117; // 0xb43 PushI
	var_155_int = 7840; // 0xb44 PushI
	var_156_int = 7836; // 0xb45 PushI
	AddReply(var_154_int, var_155_int, var_156_int); // 0xb46 TObjFunc
	var_157_int = 7118; // 0xb48 PushI
	var_158_int = 7838; // 0xb49 PushI
	var_159_int = 7837; // 0xb4a PushI
	AddReply(var_157_int, var_158_int, var_159_int); // 0xb4b TObjFunc
	return 0; // 0xb4d Return
	
Label_2894:
	var_160_int = 7838; // 0xb4e PushI
	var_161_bool = var_30_string == var_160_int; // 0xb4f Eq
	if(var_161_bool == 0) goto Label_2917; // 0xb50 JumpB
	var_162_string = ""; // 0xb51 PushV
	var_162_string = "Neutral"; // 0xb52 MovS
	func_2674(var_31_bool, var_162_string); // 0xb53 Call
	var_163_int = 7119; // 0xb55 PushI
	SetMessage(var_163_int); // 0xb56 TObjFunc
	ClearReplies(); // 0xb58 TObjFunc
	var_164_int = 7120; // 0xb5a PushI
	var_165_int = -1; // 0xb5b PushI
	var_166_int = 7839; // 0xb5c PushI
	AddReply(var_164_int, var_165_int, var_166_int); // 0xb5d TObjFunc
	var_167_int = 7124; // 0xb5f PushI
	var_168_int = -1; // 0xb60 PushI
	var_169_int = 7843; // 0xb61 PushI
	AddReply(var_167_int, var_168_int, var_169_int); // 0xb62 TObjFunc
	return 0; // 0xb64 Return
	
Label_2917:
	var_170_int = 7840; // 0xb65 PushI
	var_171_bool = var_30_string == var_170_int; // 0xb66 Eq
	if(var_171_bool == 0) goto Label_2940; // 0xb67 JumpB
	var_172_string = ""; // 0xb68 PushV
	var_172_string = "Neutral"; // 0xb69 MovS
	func_2674(var_31_bool, var_172_string); // 0xb6a Call
	var_173_int = 7121; // 0xb6c PushI
	SetMessage(var_173_int); // 0xb6d TObjFunc
	ClearReplies(); // 0xb6f TObjFunc
	var_174_int = 7125; // 0xb71 PushI
	var_175_int = 7845; // 0xb72 PushI
	var_176_int = 7844; // 0xb73 PushI
	AddReply(var_174_int, var_175_int, var_176_int); // 0xb74 TObjFunc
	var_177_int = 7127; // 0xb76 PushI
	var_178_int = 7847; // 0xb77 PushI
	var_179_int = 7846; // 0xb78 PushI
	AddReply(var_177_int, var_178_int, var_179_int); // 0xb79 TObjFunc
	return 0; // 0xb7b Return
	
Label_2940:
	var_180_int = 7847; // 0xb7c PushI
	var_181_bool = var_30_string == var_180_int; // 0xb7d Eq
	if(var_181_bool == 0) goto Label_2958; // 0xb7e JumpB
	var_182_string = ""; // 0xb7f PushV
	var_182_string = "Neutral"; // 0xb80 MovS
	func_2674(var_31_bool, var_182_string); // 0xb81 Call
	var_183_int = 7128; // 0xb83 PushI
	SetMessage(var_183_int); // 0xb84 TObjFunc
	ClearReplies(); // 0xb86 TObjFunc
	var_184_int = 7129; // 0xb88 PushI
	var_185_int = 7845; // 0xb89 PushI
	var_186_int = 7848; // 0xb8a PushI
	AddReply(var_184_int, var_185_int, var_186_int); // 0xb8b TObjFunc
	return 0; // 0xb8d Return
	
Label_2958:
	var_187_int = 7845; // 0xb8e PushI
	var_188_bool = var_30_string == var_187_int; // 0xb8f Eq
	if(var_188_bool == 0) goto Label_2981; // 0xb90 JumpB
	var_189_string = ""; // 0xb91 PushV
	var_189_string = "Neutral"; // 0xb92 MovS
	func_2674(var_31_bool, var_189_string); // 0xb93 Call
	var_190_int = 7126; // 0xb95 PushI
	SetMessage(var_190_int); // 0xb96 TObjFunc
	ClearReplies(); // 0xb98 TObjFunc
	var_191_int = 7122; // 0xb9a PushI
	var_192_int = -1; // 0xb9b PushI
	var_193_int = 7841; // 0xb9c PushI
	AddReply(var_191_int, var_192_int, var_193_int); // 0xb9d TObjFunc
	var_194_int = 7123; // 0xb9f PushI
	var_195_int = -1; // 0xba0 PushI
	var_196_int = 7842; // 0xba1 PushI
	AddReply(var_194_int, var_195_int, var_196_int); // 0xba2 TObjFunc
	return 0; // 0xba4 Return
	
Label_2981:
	var_197_int = 7547; // 0xba5 PushI
	var_198_bool = var_30_string == var_197_int; // 0xba6 Eq
	if(var_198_bool == 0) goto Label_3004; // 0xba7 JumpB
	var_199_string = ""; // 0xba8 PushV
	var_199_string = "Neutral"; // 0xba9 MovS
	func_2674(var_31_bool, var_199_string); // 0xbaa Call
	var_200_int = 6845; // 0xbac PushI
	SetMessage(var_200_int); // 0xbad TObjFunc
	ClearReplies(); // 0xbaf TObjFunc
	var_201_int = 6846; // 0xbb1 PushI
	var_202_int = 7533; // 0xbb2 PushI
	var_203_int = 7548; // 0xbb3 PushI
	AddReply(var_201_int, var_202_int, var_203_int); // 0xbb4 TObjFunc
	var_204_int = 6847; // 0xbb6 PushI
	var_205_int = 7533; // 0xbb7 PushI
	var_206_int = 7550; // 0xbb8 PushI
	AddReply(var_204_int, var_205_int, var_206_int); // 0xbb9 TObjFunc
	return 0; // 0xbbb Return
	
Label_3004:
	var_207_int = 7531; // 0xbbc PushI
	var_208_bool = var_30_string == var_207_int; // 0xbbd Eq
	if(var_208_bool == 0) goto Label_3022; // 0xbbe JumpB
	var_209_string = ""; // 0xbbf PushV
	var_209_string = "Neutral"; // 0xbc0 MovS
	func_2674(var_31_bool, var_209_string); // 0xbc1 Call
	var_210_int = 6831; // 0xbc3 PushI
	SetMessage(var_210_int); // 0xbc4 TObjFunc
	ClearReplies(); // 0xbc6 TObjFunc
	var_211_int = 6832; // 0xbc8 PushI
	var_212_int = 7533; // 0xbc9 PushI
	var_213_int = 7532; // 0xbca PushI
	AddReply(var_211_int, var_212_int, var_213_int); // 0xbcb TObjFunc
	return 0; // 0xbcd Return
	
Label_3022:
	var_214_int = 7533; // 0xbce PushI
	var_215_bool = var_30_string == var_214_int; // 0xbcf Eq
	if(var_215_bool == 0) goto Label_3050; // 0xbd0 JumpB
	var_216_string = ""; // 0xbd1 PushV
	var_216_string = "Neutral"; // 0xbd2 MovS
	func_2674(var_31_bool, var_216_string); // 0xbd3 Call
	var_217_int = 6833; // 0xbd5 PushI
	SetMessage(var_217_int); // 0xbd6 TObjFunc
	ClearReplies(); // 0xbd8 TObjFunc
	var_218_int = 6834; // 0xbda PushI
	var_219_int = 7535; // 0xbdb PushI
	var_220_int = 7534; // 0xbdc PushI
	AddReply(var_218_int, var_219_int, var_220_int); // 0xbdd TObjFunc
	var_221_int = 6843; // 0xbdf PushI
	var_222_int = 7535; // 0xbe0 PushI
	var_223_int = 7544; // 0xbe1 PushI
	AddReply(var_221_int, var_222_int, var_223_int); // 0xbe2 TObjFunc
	var_224_int = 6842; // 0xbe4 PushI
	var_225_int = -1; // 0xbe5 PushI
	var_226_int = 7543; // 0xbe6 PushI
	AddReply(var_224_int, var_225_int, var_226_int); // 0xbe7 TObjFunc
	return 0; // 0xbe9 Return
	
Label_3050:
	var_227_int = 7535; // 0xbea PushI
	var_228_bool = var_30_string == var_227_int; // 0xbeb Eq
	if(var_228_bool == 0) goto Label_3078; // 0xbec JumpB
	var_229_string = ""; // 0xbed PushV
	var_229_string = "Neutral"; // 0xbee MovS
	func_2674(var_31_bool, var_229_string); // 0xbef Call
	var_230_int = 6835; // 0xbf1 PushI
	SetMessage(var_230_int); // 0xbf2 TObjFunc
	ClearReplies(); // 0xbf4 TObjFunc
	var_231_int = 6836; // 0xbf6 PushI
	var_232_int = 7537; // 0xbf7 PushI
	var_233_int = 7536; // 0xbf8 PushI
	AddReply(var_231_int, var_232_int, var_233_int); // 0xbf9 TObjFunc
	var_234_int = 6840; // 0xbfb PushI
	var_235_int = 7537; // 0xbfc PushI
	var_236_int = 7540; // 0xbfd PushI
	AddReply(var_234_int, var_235_int, var_236_int); // 0xbfe TObjFunc
	var_237_int = 6841; // 0xc00 PushI
	var_238_int = -1; // 0xc01 PushI
	var_239_int = 7542; // 0xc02 PushI
	AddReply(var_237_int, var_238_int, var_239_int); // 0xc03 TObjFunc
	return 0; // 0xc05 Return
	
Label_3078:
	var_240_int = 7537; // 0xc06 PushI
	var_241_bool = var_30_string == var_240_int; // 0xc07 Eq
	if(var_241_bool == 0) goto Label_3101; // 0xc08 JumpB
	var_242_string = ""; // 0xc09 PushV
	var_242_string = "Neutral"; // 0xc0a MovS
	func_2674(var_31_bool, var_242_string); // 0xc0b Call
	var_243_int = 6837; // 0xc0d PushI
	SetMessage(var_243_int); // 0xc0e TObjFunc
	ClearReplies(); // 0xc10 TObjFunc
	var_244_int = 6838; // 0xc12 PushI
	var_245_int = -1; // 0xc13 PushI
	var_246_int = 7538; // 0xc14 PushI
	AddReply(var_244_int, var_245_int, var_246_int); // 0xc15 TObjFunc
	var_247_int = 6839; // 0xc17 PushI
	var_248_int = -1; // 0xc18 PushI
	var_249_int = 7539; // 0xc19 PushI
	AddReply(var_247_int, var_248_int, var_249_int); // 0xc1a TObjFunc
	return 0; // 0xc1c Return
	
Label_3101:
	var_3_string = 1; // 0xc1d TMovB
	var_250_bool = 0; // 0xc1e PushV
	func_4674(var_250_bool); // 0xc1f Call
	if(var_250_bool == 0) goto Label_3109; // 0xc21 JumpB
	lshStopAnimation(); // 0xc22 Func
	goto Label_3111; // 0xc24 Jump
	
Label_3111:
	return 0; // 0xc27 Return
	
Label_3109:
	StopAnimation(); // 0xc25 Func
	
Label_3113:
	return 0; // 0xc29 Return
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool)
{
	var_32_int = 1; // 0xd16 PushI
	if(var_32_int == 0) goto Label_4130; // 0xd17 JumpB
	func_4596(); // 0xd19 Call
	var_34_int = 11255; // 0xd1b PushI
	var_35_bool = var_31_bool == var_34_int; // 0xd1c Eq
	if(var_35_bool == 0) goto Label_3373; // 0xd1d JumpB
	var_36_object = Obj(); var_37_object = Obj(); // 0xd1e PushV
	var_36_object = var_1_object; // 0xd1f MovT
	var_37_object = var_0_object; // 0xd20 MovT
	func_4923(); // 0xd21 Call
	var_40_object = Obj(); var_41_object = Obj(); // 0xd23 PushV
	var_40_object = var_1_object; // 0xd24 MovT
	var_41_object = var_0_object; // 0xd25 MovT
	func_4929(); // 0xd26 Call
	var_112_object = Obj(); var_113_object = Obj(); // 0xd28 PushV
	var_112_object = var_1_object; // 0xd29 MovT
	var_113_object = var_0_object; // 0xd2a MovT
	func_4860(); // 0xd2b Call
	
Label_3373:
	var_138_int = 11278; // 0xd2d PushI
	var_139_bool = var_31_bool == var_138_int; // 0xd2e Eq
	if(var_139_bool == 0) goto Label_3381; // 0xd2f JumpB
	var_140_object = Obj(); var_141_object = Obj(); // 0xd30 PushV
	var_140_object = var_1_object; // 0xd31 MovT
	var_141_object = var_0_object; // 0xd32 MovT
	func_4923(); // 0xd33 Call
	
Label_3381:
	var_142_int = 9939; // 0xd35 PushI
	var_143_bool = var_31_bool == var_142_int; // 0xd36 Eq
	if(var_143_bool == 0) goto Label_3399; // 0xd37 JumpB
	var_144_object = Obj(); var_145_object = Obj(); // 0xd38 PushV
	var_144_object = var_1_object; // 0xd39 MovT
	var_145_object = var_0_object; // 0xd3a MovT
	func_4923(); // 0xd3b Call
	var_146_object = Obj(); var_147_object = Obj(); // 0xd3d PushV
	var_146_object = var_1_object; // 0xd3e MovT
	var_147_object = var_0_object; // 0xd3f MovT
	func_4929(); // 0xd40 Call
	var_148_object = Obj(); var_149_object = Obj(); // 0xd42 PushV
	var_148_object = var_1_object; // 0xd43 MovT
	var_149_object = var_0_object; // 0xd44 MovT
	func_4860(); // 0xd45 Call
	
Label_3399:
	var_150_int = 11274; // 0xd47 PushI
	var_151_bool = var_31_bool == var_150_int; // 0xd48 Eq
	if(var_151_bool == 0) goto Label_3407; // 0xd49 JumpB
	var_152_object = Obj(); var_153_object = Obj(); // 0xd4a PushV
	var_152_object = var_1_object; // 0xd4b MovT
	var_153_object = var_0_object; // 0xd4c MovT
	func_4988(); // 0xd4d Call
	
Label_3407:
	var_160_int = 11275; // 0xd4f PushI
	var_161_bool = var_31_bool == var_160_int; // 0xd50 Eq
	if(var_161_bool == 0) goto Label_3415; // 0xd51 JumpB
	var_162_object = Obj(); var_163_object = Obj(); // 0xd52 PushV
	var_162_object = var_1_object; // 0xd53 MovT
	var_163_object = var_0_object; // 0xd54 MovT
	func_4923(); // 0xd55 Call
	
Label_3415:
	var_164_int = 11276; // 0xd57 PushI
	var_165_bool = var_31_bool == var_164_int; // 0xd58 Eq
	if(var_165_bool == 0) goto Label_3423; // 0xd59 JumpB
	var_166_object = Obj(); var_167_object = Obj(); // 0xd5a PushV
	var_166_object = var_1_object; // 0xd5b MovT
	var_167_object = var_0_object; // 0xd5c MovT
	func_4923(); // 0xd5d Call
	
Label_3423:
	var_168_int = 12577; // 0xd5f PushI
	var_169_bool = var_31_bool == var_168_int; // 0xd60 Eq
	if(var_169_bool == 0) goto Label_3431; // 0xd61 JumpB
	var_170_object = Obj(); var_171_object = Obj(); // 0xd62 PushV
	var_170_object = var_1_object; // 0xd63 MovT
	var_171_object = var_0_object; // 0xd64 MovT
	func_4929(); // 0xd65 Call
	
Label_3431:
	var_172_int = 9954; // 0xd67 PushI
	var_173_bool = var_31_bool == var_172_int; // 0xd68 Eq
	if(var_173_bool == 0) goto Label_3444; // 0xd69 JumpB
	var_174_object = Obj(); var_175_object = Obj(); // 0xd6a PushV
	var_174_object = var_1_object; // 0xd6b MovT
	var_175_object = var_0_object; // 0xd6c MovT
	func_4876(); // 0xd6d Call
	var_191_object = Obj(); var_192_object = Obj(); // 0xd6f PushV
	var_191_object = var_1_object; // 0xd70 MovT
	var_192_object = var_0_object; // 0xd71 MovT
	func_4905(); // 0xd72 Call
	
Label_3444:
	var_195_int = 9955; // 0xd74 PushI
	var_196_bool = var_31_bool == var_195_int; // 0xd75 Eq
	if(var_196_bool == 0) goto Label_3457; // 0xd76 JumpB
	var_197_object = Obj(); var_198_object = Obj(); // 0xd77 PushV
	var_197_object = var_1_object; // 0xd78 MovT
	var_198_object = var_0_object; // 0xd79 MovT
	func_4876(); // 0xd7a Call
	var_199_object = Obj(); var_200_object = Obj(); // 0xd7c PushV
	var_199_object = var_1_object; // 0xd7d MovT
	var_200_object = var_0_object; // 0xd7e MovT
	func_4905(); // 0xd7f Call
	
Label_3457:
	var_201_int = 12338; // 0xd81 PushI
	var_202_bool = var_31_bool == var_201_int; // 0xd82 Eq
	if(var_202_bool == 0) goto Label_3470; // 0xd83 JumpB
	var_203_object = Obj(); var_204_object = Obj(); // 0xd84 PushV
	var_203_object = var_1_object; // 0xd85 MovT
	var_204_object = var_0_object; // 0xd86 MovT
	func_4876(); // 0xd87 Call
	var_205_object = Obj(); var_206_object = Obj(); // 0xd89 PushV
	var_205_object = var_1_object; // 0xd8a MovT
	var_206_object = var_0_object; // 0xd8b MovT
	func_4905(); // 0xd8c Call
	
Label_3470:
	var_207_int = 11515; // 0xd8e PushI
	var_208_bool = var_31_bool == var_207_int; // 0xd8f Eq
	if(var_208_bool == 0) goto Label_3493; // 0xd90 JumpB
	var_209_object = Obj(); var_210_object = Obj(); // 0xd91 PushV
	var_209_object = var_1_object; // 0xd92 MovT
	var_210_object = var_0_object; // 0xd93 MovT
	func_4995(); // 0xd94 Call
	var_213_object = Obj(); var_214_object = Obj(); // 0xd96 PushV
	var_213_object = var_1_object; // 0xd97 MovT
	var_214_object = var_0_object; // 0xd98 MovT
	func_4977(var_214_object); // 0xd99 Call
	var_222_object = Obj(); var_223_object = Obj(); // 0xd9b PushV
	var_222_object = var_1_object; // 0xd9c MovT
	var_223_object = var_0_object; // 0xd9d MovT
	func_4793(); // 0xd9e Call
	var_226_object = Obj(); var_227_object = Obj(); // 0xda0 PushV
	var_226_object = var_1_object; // 0xda1 MovT
	var_227_object = var_0_object; // 0xda2 MovT
	func_4988(); // 0xda3 Call
	
Label_3493:
	var_228_int = 9915; // 0xda5 PushI
	var_229_bool = var_31_bool == var_228_int; // 0xda6 Eq
	if(var_229_bool == 0) goto Label_3506; // 0xda7 JumpB
	var_230_object = Obj(); var_231_object = Obj(); // 0xda8 PushV
	var_230_object = var_1_object; // 0xda9 MovT
	var_231_object = var_0_object; // 0xdaa MovT
	func_4977(var_231_object); // 0xdab Call
	var_232_object = Obj(); var_233_object = Obj(); // 0xdad PushV
	var_232_object = var_1_object; // 0xdae MovT
	var_233_object = var_0_object; // 0xdaf MovT
	func_4793(); // 0xdb0 Call
	
Label_3506:
	var_234_int = 9919; // 0xdb2 PushI
	var_235_bool = var_30_string == var_234_int; // 0xdb3 Eq
	if(var_235_bool == 0) goto Label_3627; // 0xdb4 JumpB
	var_236_bool = 0; // 0xdb5 PushV
	var_236_bool = 0; // 0xdb6 MovB
	var_237_bool = 0; var_238_object = Obj(); // 0xdb7 PushV
	var_238_object = var_1_object; // 0xdb8 MovT
	func_5221(var_238_object); // 0xdb9 Call
	var_245_bool = var_237_bool == 0; // 0xdbb Not
	if(var_245_bool == 0) goto Label_3523; // 0xdbc JumpB
	var_246_bool = 0; var_247_object = Obj(); // 0xdbd PushV
	var_247_object = var_1_object; // 0xdbe MovT
	func_5257(var_247_object); // 0xdbf Call
	if(var_246_bool == 0) goto Label_3523; // 0xdc1 JumpB
	var_236_bool = 1; // 0xdc2 MovB
	
Label_3523:
	if(var_236_bool == 0) goto Label_3544; // 0xdc3 JumpB
	var_252_object = Obj(); var_253_object = Obj(); // 0xdc4 PushV
	var_252_object = var_1_object; // 0xdc5 MovT
	var_253_object = var_0_object; // 0xdc6 MovT
	func_5073(); // 0xdc7 Call
	var_256_string = ""; // 0xdc9 PushV
	var_256_string = "Neutral"; // 0xdca MovS
	func_3333(var_31_bool, var_256_string); // 0xdcb Call
	var_271_int = 9043; // 0xdcd PushI
	SetMessage(var_271_int); // 0xdce TObjFunc
	ClearReplies(); // 0xdd0 TObjFunc
	var_272_int = 9044; // 0xdd2 PushI
	var_273_int = 9921; // 0xdd3 PushI
	var_274_int = 9920; // 0xdd4 PushI
	AddReply(var_272_int, var_273_int, var_274_int); // 0xdd5 TObjFunc
	return 0; // 0xdd7 Return
	
Label_3544:
	var_275_object = Obj(); var_276_object = Obj(); // 0xdd8 PushV
	var_275_object = var_1_object; // 0xdd9 MovT
	var_276_object = var_0_object; // 0xdda MovT
	func_5073(); // 0xddb Call
	var_277_string = ""; // 0xddd PushV
	var_277_string = "Neutral"; // 0xdde MovS
	func_3333(var_31_bool, var_277_string); // 0xddf Call
	var_278_int = 9024; // 0xde1 PushI
	SetMessage(var_278_int); // 0xde2 TObjFunc
	ClearReplies(); // 0xde4 TObjFunc
	var_279_bool = 0; // 0xde6 PushV
	var_279_bool = 0; // 0xde7 MovB
	var_280_bool = 0; var_281_object = Obj(); // 0xde8 PushV
	var_281_object = var_1_object; // 0xde9 MovT
	func_5185(var_281_object); // 0xdea Call
	if(var_280_bool == 0) goto Label_3572; // 0xdec JumpB
	var_286_bool = 0; var_287_object = Obj(); // 0xded PushV
	var_287_object = var_1_object; // 0xdee MovT
	func_5221(var_287_object); // 0xdef Call
	var_288_bool = var_286_bool == 0; // 0xdf1 Not
	if(var_288_bool == 0) goto Label_3572; // 0xdf2 JumpB
	var_279_bool = 1; // 0xdf3 MovB
	
Label_3572:
	if(var_279_bool == 0) goto Label_3578; // 0xdf4 JumpB
	var_289_int = 11376; // 0xdf5 PushI
	var_290_int = 12576; // 0xdf6 PushI
	var_291_int = 12575; // 0xdf7 PushI
	AddReply(var_289_int, var_290_int, var_291_int); // 0xdf8 TObjFunc
	
Label_3578:
	var_292_bool = 0; // 0xdfa PushV
	var_292_bool = 0; // 0xdfb MovB
	var_293_bool = 0; var_294_object = Obj(); // 0xdfc PushV
	var_294_object = var_1_object; // 0xdfd MovT
	func_5221(var_294_object); // 0xdfe Call
	if(var_293_bool == 0) goto Label_3591; // 0xe00 JumpB
	var_295_bool = 0; var_296_object = Obj(); // 0xe01 PushV
	var_296_object = var_1_object; // 0xe02 MovT
	func_5233(var_296_object); // 0xe03 Call
	if(var_295_bool == 0) goto Label_3591; // 0xe05 JumpB
	var_292_bool = 1; // 0xe06 MovB
	
Label_3591:
	if(var_292_bool == 0) goto Label_3597; // 0xe07 JumpB
	var_301_int = 9042; // 0xe08 PushI
	var_302_int = 9941; // 0xe09 PushI
	var_303_int = 9918; // 0xe0a PushI
	AddReply(var_301_int, var_302_int, var_303_int); // 0xe0b TObjFunc
	
Label_3597:
	var_304_bool = 0; // 0xe0d PushV
	var_304_bool = 0; // 0xe0e MovB
	var_305_bool = 0; var_306_object = Obj(); // 0xe0f PushV
	var_306_object = var_1_object; // 0xe10 MovT
	func_5281(var_306_object); // 0xe11 Call
	if(var_305_bool == 0) goto Label_3610; // 0xe13 JumpB
	var_311_bool = 0; var_312_object = Obj(); // 0xe14 PushV
	var_312_object = var_1_object; // 0xe15 MovT
	func_5293(var_312_object); // 0xe16 Call
	if(var_311_bool == 0) goto Label_3610; // 0xe18 JumpB
	var_304_bool = 1; // 0xe19 MovB
	
Label_3610:
	if(var_304_bool == 0) goto Label_3616; // 0xe1a JumpB
	var_317_int = 10442; // 0xe1b PushI
	var_318_int = 11512; // 0xe1c PushI
	var_319_int = 11511; // 0xe1d PushI
	AddReply(var_317_int, var_318_int, var_319_int); // 0xe1e TObjFunc
	
Label_3616:
	var_320_int = 9041; // 0xe20 PushI
	var_321_int = 9899; // 0xe21 PushI
	var_322_int = 9917; // 0xe22 PushI
	AddReply(var_320_int, var_321_int, var_322_int); // 0xe23 TObjFunc
	var_323_int = 11147; // 0xe25 PushI
	var_324_int = -1; // 0xe26 PushI
	var_325_int = 12337; // 0xe27 PushI
	AddReply(var_323_int, var_324_int, var_325_int); // 0xe28 TObjFunc
	return 0; // 0xe2a Return
	
Label_3627:
	var_326_int = 9899; // 0xe2b PushI
	var_327_bool = var_30_string == var_326_int; // 0xe2c Eq
	if(var_327_bool == 0) goto Label_3660; // 0xe2d JumpB
	var_328_string = ""; // 0xe2e PushV
	var_328_string = "Neutral"; // 0xe2f MovS
	func_3333(var_31_bool, var_328_string); // 0xe30 Call
	var_329_int = 9025; // 0xe32 PushI
	SetMessage(var_329_int); // 0xe33 TObjFunc
	ClearReplies(); // 0xe35 TObjFunc
	var_330_int = 9026; // 0xe37 PushI
	var_331_int = 9901; // 0xe38 PushI
	var_332_int = 9900; // 0xe39 PushI
	AddReply(var_330_int, var_331_int, var_332_int); // 0xe3a TObjFunc
	var_333_int = 9033; // 0xe3c PushI
	var_334_int = -1; // 0xe3d PushI
	var_335_int = 9908; // 0xe3e PushI
	AddReply(var_333_int, var_334_int, var_335_int); // 0xe3f TObjFunc
	var_336_bool = 0; var_337_object = Obj(); // 0xe41 PushV
	var_337_object = var_1_object; // 0xe42 MovT
	func_5269(var_337_object); // 0xe43 Call
	if(var_336_bool == 0) goto Label_3659; // 0xe45 JumpB
	var_342_int = 9034; // 0xe46 PushI
	var_343_int = 9910; // 0xe47 PushI
	var_344_int = 9909; // 0xe48 PushI
	AddReply(var_342_int, var_343_int, var_344_int); // 0xe49 TObjFunc
	
Label_3659:
	return 0; // 0xe4b Return
	
Label_3660:
	var_345_int = 9910; // 0xe4c PushI
	var_346_bool = var_30_string == var_345_int; // 0xe4d Eq
	if(var_346_bool == 0) goto Label_3683; // 0xe4e JumpB
	var_347_string = ""; // 0xe4f PushV
	var_347_string = "Neutral"; // 0xe50 MovS
	func_3333(var_31_bool, var_347_string); // 0xe51 Call
	var_348_int = 9035; // 0xe53 PushI
	SetMessage(var_348_int); // 0xe54 TObjFunc
	ClearReplies(); // 0xe56 TObjFunc
	var_349_int = 9036; // 0xe58 PushI
	var_350_int = 9901; // 0xe59 PushI
	var_351_int = 9911; // 0xe5a PushI
	AddReply(var_349_int, var_350_int, var_351_int); // 0xe5b TObjFunc
	var_352_int = 9037; // 0xe5d PushI
	var_353_int = 9914; // 0xe5e PushI
	var_354_int = 9913; // 0xe5f PushI
	AddReply(var_352_int, var_353_int, var_354_int); // 0xe60 TObjFunc
	return 0; // 0xe62 Return
	
Label_3683:
	var_355_int = 9914; // 0xe63 PushI
	var_356_bool = var_30_string == var_355_int; // 0xe64 Eq
	if(var_356_bool == 0) goto Label_3706; // 0xe65 JumpB
	var_357_string = ""; // 0xe66 PushV
	var_357_string = "Neutral"; // 0xe67 MovS
	func_3333(var_31_bool, var_357_string); // 0xe68 Call
	var_358_int = 9038; // 0xe6a PushI
	SetMessage(var_358_int); // 0xe6b TObjFunc
	ClearReplies(); // 0xe6d TObjFunc
	var_359_int = 9039; // 0xe6f PushI
	var_360_int = -1; // 0xe70 PushI
	var_361_int = 9915; // 0xe71 PushI
	AddReply(var_359_int, var_360_int, var_361_int); // 0xe72 TObjFunc
	var_362_int = 9040; // 0xe74 PushI
	var_363_int = -1; // 0xe75 PushI
	var_364_int = 9916; // 0xe76 PushI
	AddReply(var_362_int, var_363_int, var_364_int); // 0xe77 TObjFunc
	return 0; // 0xe79 Return
	
Label_3706:
	var_365_int = 9901; // 0xe7a PushI
	var_366_bool = var_30_string == var_365_int; // 0xe7b Eq
	if(var_366_bool == 0) goto Label_3729; // 0xe7c JumpB
	var_367_string = ""; // 0xe7d PushV
	var_367_string = "Neutral"; // 0xe7e MovS
	func_3333(var_31_bool, var_367_string); // 0xe7f Call
	var_368_int = 9027; // 0xe81 PushI
	SetMessage(var_368_int); // 0xe82 TObjFunc
	ClearReplies(); // 0xe84 TObjFunc
	var_369_int = 9028; // 0xe86 PushI
	var_370_int = 9903; // 0xe87 PushI
	var_371_int = 9902; // 0xe88 PushI
	AddReply(var_369_int, var_370_int, var_371_int); // 0xe89 TObjFunc
	var_372_int = 9032; // 0xe8b PushI
	var_373_int = 9903; // 0xe8c PushI
	var_374_int = 9906; // 0xe8d PushI
	AddReply(var_372_int, var_373_int, var_374_int); // 0xe8e TObjFunc
	return 0; // 0xe90 Return
	
Label_3729:
	var_375_int = 9903; // 0xe91 PushI
	var_376_bool = var_30_string == var_375_int; // 0xe92 Eq
	if(var_376_bool == 0) goto Label_3752; // 0xe93 JumpB
	var_377_string = ""; // 0xe94 PushV
	var_377_string = "Neutral"; // 0xe95 MovS
	func_3333(var_31_bool, var_377_string); // 0xe96 Call
	var_378_int = 9029; // 0xe98 PushI
	SetMessage(var_378_int); // 0xe99 TObjFunc
	ClearReplies(); // 0xe9b TObjFunc
	var_379_int = 9030; // 0xe9d PushI
	var_380_int = -1; // 0xe9e PushI
	var_381_int = 9904; // 0xe9f PushI
	AddReply(var_379_int, var_380_int, var_381_int); // 0xea0 TObjFunc
	var_382_int = 9031; // 0xea2 PushI
	var_383_int = -1; // 0xea3 PushI
	var_384_int = 9905; // 0xea4 PushI
	AddReply(var_382_int, var_383_int, var_384_int); // 0xea5 TObjFunc
	return 0; // 0xea7 Return
	
Label_3752:
	var_385_int = 11512; // 0xea8 PushI
	var_386_bool = var_30_string == var_385_int; // 0xea9 Eq
	if(var_386_bool == 0) goto Label_3770; // 0xeaa JumpB
	var_387_string = ""; // 0xeab PushV
	var_387_string = "Neutral"; // 0xeac MovS
	func_3333(var_31_bool, var_387_string); // 0xead Call
	var_388_int = 10443; // 0xeaf PushI
	SetMessage(var_388_int); // 0xeb0 TObjFunc
	ClearReplies(); // 0xeb2 TObjFunc
	var_389_int = 10444; // 0xeb4 PushI
	var_390_int = 11514; // 0xeb5 PushI
	var_391_int = 11513; // 0xeb6 PushI
	AddReply(var_389_int, var_390_int, var_391_int); // 0xeb7 TObjFunc
	return 0; // 0xeb9 Return
	
Label_3770:
	var_392_int = 11514; // 0xeba PushI
	var_393_bool = var_30_string == var_392_int; // 0xebb Eq
	if(var_393_bool == 0) goto Label_3788; // 0xebc JumpB
	var_394_string = ""; // 0xebd PushV
	var_394_string = "Neutral"; // 0xebe MovS
	func_3333(var_31_bool, var_394_string); // 0xebf Call
	var_395_int = 10445; // 0xec1 PushI
	SetMessage(var_395_int); // 0xec2 TObjFunc
	ClearReplies(); // 0xec4 TObjFunc
	var_396_int = 10446; // 0xec6 PushI
	var_397_int = -1; // 0xec7 PushI
	var_398_int = 11515; // 0xec8 PushI
	AddReply(var_396_int, var_397_int, var_398_int); // 0xec9 TObjFunc
	return 0; // 0xecb Return
	
Label_3788:
	var_399_int = 9941; // 0xecc PushI
	var_400_bool = var_30_string == var_399_int; // 0xecd Eq
	if(var_400_bool == 0) goto Label_3806; // 0xece JumpB
	var_401_string = ""; // 0xecf PushV
	var_401_string = "Neutral"; // 0xed0 MovS
	func_3333(var_31_bool, var_401_string); // 0xed1 Call
	var_402_int = 9064; // 0xed3 PushI
	SetMessage(var_402_int); // 0xed4 TObjFunc
	ClearReplies(); // 0xed6 TObjFunc
	var_403_int = 9065; // 0xed8 PushI
	var_404_int = 9943; // 0xed9 PushI
	var_405_int = 9942; // 0xeda PushI
	AddReply(var_403_int, var_404_int, var_405_int); // 0xedb TObjFunc
	return 0; // 0xedd Return
	
Label_3806:
	var_406_int = 9943; // 0xede PushI
	var_407_bool = var_30_string == var_406_int; // 0xedf Eq
	if(var_407_bool == 0) goto Label_3829; // 0xee0 JumpB
	var_408_string = ""; // 0xee1 PushV
	var_408_string = "Neutral"; // 0xee2 MovS
	func_3333(var_31_bool, var_408_string); // 0xee3 Call
	var_409_int = 9066; // 0xee5 PushI
	SetMessage(var_409_int); // 0xee6 TObjFunc
	ClearReplies(); // 0xee8 TObjFunc
	var_410_int = 9067; // 0xeea PushI
	var_411_int = 9946; // 0xeeb PushI
	var_412_int = 9944; // 0xeec PushI
	AddReply(var_410_int, var_411_int, var_412_int); // 0xeed TObjFunc
	var_413_int = 9068; // 0xeef PushI
	var_414_int = 9949; // 0xef0 PushI
	var_415_int = 9945; // 0xef1 PushI
	AddReply(var_413_int, var_414_int, var_415_int); // 0xef2 TObjFunc
	return 0; // 0xef4 Return
	
Label_3829:
	var_416_int = 9949; // 0xef5 PushI
	var_417_bool = var_30_string == var_416_int; // 0xef6 Eq
	if(var_417_bool == 0) goto Label_3847; // 0xef7 JumpB
	var_418_string = ""; // 0xef8 PushV
	var_418_string = "Neutral"; // 0xef9 MovS
	func_3333(var_31_bool, var_418_string); // 0xefa Call
	var_419_int = 9072; // 0xefc PushI
	SetMessage(var_419_int); // 0xefd TObjFunc
	ClearReplies(); // 0xeff TObjFunc
	var_420_int = 9073; // 0xf01 PushI
	var_421_int = 9948; // 0xf02 PushI
	var_422_int = 9950; // 0xf03 PushI
	AddReply(var_420_int, var_421_int, var_422_int); // 0xf04 TObjFunc
	return 0; // 0xf06 Return
	
Label_3847:
	var_423_int = 9946; // 0xf07 PushI
	var_424_bool = var_30_string == var_423_int; // 0xf08 Eq
	if(var_424_bool == 0) goto Label_3870; // 0xf09 JumpB
	var_425_string = ""; // 0xf0a PushV
	var_425_string = "Neutral"; // 0xf0b MovS
	func_3333(var_31_bool, var_425_string); // 0xf0c Call
	var_426_int = 9069; // 0xf0e PushI
	SetMessage(var_426_int); // 0xf0f TObjFunc
	ClearReplies(); // 0xf11 TObjFunc
	var_427_int = 9074; // 0xf13 PushI
	var_428_int = 9953; // 0xf14 PushI
	var_429_int = 9952; // 0xf15 PushI
	AddReply(var_427_int, var_428_int, var_429_int); // 0xf16 TObjFunc
	var_430_int = 9070; // 0xf18 PushI
	var_431_int = 9948; // 0xf19 PushI
	var_432_int = 9947; // 0xf1a PushI
	AddReply(var_430_int, var_431_int, var_432_int); // 0xf1b TObjFunc
	return 0; // 0xf1d Return
	
Label_3870:
	var_433_int = 9948; // 0xf1e PushI
	var_434_bool = var_30_string == var_433_int; // 0xf1f Eq
	if(var_434_bool == 0) goto Label_3888; // 0xf20 JumpB
	var_435_string = ""; // 0xf21 PushV
	var_435_string = "Neutral"; // 0xf22 MovS
	func_3333(var_31_bool, var_435_string); // 0xf23 Call
	var_436_int = 9071; // 0xf25 PushI
	SetMessage(var_436_int); // 0xf26 TObjFunc
	ClearReplies(); // 0xf28 TObjFunc
	var_437_int = 11149; // 0xf2a PushI
	var_438_int = -1; // 0xf2b PushI
	var_439_int = 12338; // 0xf2c PushI
	AddReply(var_437_int, var_438_int, var_439_int); // 0xf2d TObjFunc
	return 0; // 0xf2f Return
	
Label_3888:
	var_440_int = 9953; // 0xf30 PushI
	var_441_bool = var_30_string == var_440_int; // 0xf31 Eq
	if(var_441_bool == 0) goto Label_3911; // 0xf32 JumpB
	var_442_string = ""; // 0xf33 PushV
	var_442_string = "Neutral"; // 0xf34 MovS
	func_3333(var_31_bool, var_442_string); // 0xf35 Call
	var_443_int = 9075; // 0xf37 PushI
	SetMessage(var_443_int); // 0xf38 TObjFunc
	ClearReplies(); // 0xf3a TObjFunc
	var_444_int = 9076; // 0xf3c PushI
	var_445_int = -1; // 0xf3d PushI
	var_446_int = 9954; // 0xf3e PushI
	AddReply(var_444_int, var_445_int, var_446_int); // 0xf3f TObjFunc
	var_447_int = 9077; // 0xf41 PushI
	var_448_int = -1; // 0xf42 PushI
	var_449_int = 9955; // 0xf43 PushI
	AddReply(var_447_int, var_448_int, var_449_int); // 0xf44 TObjFunc
	return 0; // 0xf46 Return
	
Label_3911:
	var_450_int = 12576; // 0xf47 PushI
	var_451_bool = var_30_string == var_450_int; // 0xf48 Eq
	if(var_451_bool == 0) goto Label_3929; // 0xf49 JumpB
	var_452_string = ""; // 0xf4a PushV
	var_452_string = "Neutral"; // 0xf4b MovS
	func_3333(var_31_bool, var_452_string); // 0xf4c Call
	var_453_int = 11377; // 0xf4e PushI
	SetMessage(var_453_int); // 0xf4f TObjFunc
	ClearReplies(); // 0xf51 TObjFunc
	var_454_int = 11378; // 0xf53 PushI
	var_455_int = -1; // 0xf54 PushI
	var_456_int = 12577; // 0xf55 PushI
	AddReply(var_454_int, var_455_int, var_456_int); // 0xf56 TObjFunc
	return 0; // 0xf58 Return
	
Label_3929:
	var_457_int = 9921; // 0xf59 PushI
	var_458_bool = var_30_string == var_457_int; // 0xf5a Eq
	if(var_458_bool == 0) goto Label_3947; // 0xf5b JumpB
	var_459_string = ""; // 0xf5c PushV
	var_459_string = "Neutral"; // 0xf5d MovS
	func_3333(var_31_bool, var_459_string); // 0xf5e Call
	var_460_int = 9045; // 0xf60 PushI
	SetMessage(var_460_int); // 0xf61 TObjFunc
	ClearReplies(); // 0xf63 TObjFunc
	var_461_int = 10222; // 0xf65 PushI
	var_462_int = 11270; // 0xf66 PushI
	var_463_int = 11269; // 0xf67 PushI
	AddReply(var_461_int, var_462_int, var_463_int); // 0xf68 TObjFunc
	return 0; // 0xf6a Return
	
Label_3947:
	var_464_int = 11270; // 0xf6b PushI
	var_465_bool = var_30_string == var_464_int; // 0xf6c Eq
	if(var_465_bool == 0) goto Label_3980; // 0xf6d JumpB
	var_466_string = ""; // 0xf6e PushV
	var_466_string = "Neutral"; // 0xf6f MovS
	func_3333(var_31_bool, var_466_string); // 0xf70 Call
	var_467_int = 10223; // 0xf72 PushI
	SetMessage(var_467_int); // 0xf73 TObjFunc
	ClearReplies(); // 0xf75 TObjFunc
	var_468_int = 9046; // 0xf77 PushI
	var_469_int = 11280; // 0xf78 PushI
	var_470_int = 9922; // 0xf79 PushI
	AddReply(var_468_int, var_469_int, var_470_int); // 0xf7a TObjFunc
	var_471_int = 10224; // 0xf7c PushI
	var_472_int = 9929; // 0xf7d PushI
	var_473_int = 11271; // 0xf7e PushI
	AddReply(var_471_int, var_472_int, var_473_int); // 0xf7f TObjFunc
	var_474_bool = 0; var_475_object = Obj(); // 0xf81 PushV
	var_475_object = var_1_object; // 0xf82 MovT
	func_5269(var_475_object); // 0xf83 Call
	if(var_474_bool == 0) goto Label_3979; // 0xf85 JumpB
	var_476_int = 9047; // 0xf86 PushI
	var_477_int = 9924; // 0xf87 PushI
	var_478_int = 9923; // 0xf88 PushI
	AddReply(var_476_int, var_477_int, var_478_int); // 0xf89 TObjFunc
	
Label_3979:
	return 0; // 0xf8b Return
	
Label_3980:
	var_479_int = 9924; // 0xf8c PushI
	var_480_bool = var_30_string == var_479_int; // 0xf8d Eq
	if(var_480_bool == 0) goto Label_4003; // 0xf8e JumpB
	var_481_string = ""; // 0xf8f PushV
	var_481_string = "Neutral"; // 0xf90 MovS
	func_3333(var_31_bool, var_481_string); // 0xf91 Call
	var_482_int = 9048; // 0xf93 PushI
	SetMessage(var_482_int); // 0xf94 TObjFunc
	ClearReplies(); // 0xf96 TObjFunc
	var_483_int = 9049; // 0xf98 PushI
	var_484_int = 9929; // 0xf99 PushI
	var_485_int = 9925; // 0xf9a PushI
	AddReply(var_483_int, var_484_int, var_485_int); // 0xf9b TObjFunc
	var_486_int = 10225; // 0xf9d PushI
	var_487_int = 11273; // 0xf9e PushI
	var_488_int = 11272; // 0xf9f PushI
	AddReply(var_486_int, var_487_int, var_488_int); // 0xfa0 TObjFunc
	return 0; // 0xfa2 Return
	
Label_4003:
	var_489_int = 11273; // 0xfa3 PushI
	var_490_bool = var_30_string == var_489_int; // 0xfa4 Eq
	if(var_490_bool == 0) goto Label_4031; // 0xfa5 JumpB
	var_491_string = ""; // 0xfa6 PushV
	var_491_string = "Neutral"; // 0xfa7 MovS
	func_3333(var_31_bool, var_491_string); // 0xfa8 Call
	var_492_int = 10226; // 0xfaa PushI
	SetMessage(var_492_int); // 0xfab TObjFunc
	ClearReplies(); // 0xfad TObjFunc
	var_493_int = 10227; // 0xfaf PushI
	var_494_int = -1; // 0xfb0 PushI
	var_495_int = 11274; // 0xfb1 PushI
	AddReply(var_493_int, var_494_int, var_495_int); // 0xfb2 TObjFunc
	var_496_int = 10228; // 0xfb4 PushI
	var_497_int = -1; // 0xfb5 PushI
	var_498_int = 11275; // 0xfb6 PushI
	AddReply(var_496_int, var_497_int, var_498_int); // 0xfb7 TObjFunc
	var_499_int = 10229; // 0xfb9 PushI
	var_500_int = -1; // 0xfba PushI
	var_501_int = 11276; // 0xfbb PushI
	AddReply(var_499_int, var_500_int, var_501_int); // 0xfbc TObjFunc
	return 0; // 0xfbe Return
	
Label_4031:
	var_502_int = 9929; // 0xfbf PushI
	var_503_bool = var_30_string == var_502_int; // 0xfc0 Eq
	if(var_503_bool == 0) goto Label_4049; // 0xfc1 JumpB
	var_504_string = ""; // 0xfc2 PushV
	var_504_string = "Neutral"; // 0xfc3 MovS
	func_3333(var_31_bool, var_504_string); // 0xfc4 Call
	var_505_int = 9053; // 0xfc6 PushI
	SetMessage(var_505_int); // 0xfc7 TObjFunc
	ClearReplies(); // 0xfc9 TObjFunc
	var_506_int = 9060; // 0xfcb PushI
	var_507_int = 9938; // 0xfcc PushI
	var_508_int = 9937; // 0xfcd PushI
	AddReply(var_506_int, var_507_int, var_508_int); // 0xfce TObjFunc
	return 0; // 0xfd0 Return
	
Label_4049:
	var_509_int = 9938; // 0xfd1 PushI
	var_510_bool = var_30_string == var_509_int; // 0xfd2 Eq
	if(var_510_bool == 0) goto Label_4072; // 0xfd3 JumpB
	var_511_string = ""; // 0xfd4 PushV
	var_511_string = "Neutral"; // 0xfd5 MovS
	func_3333(var_31_bool, var_511_string); // 0xfd6 Call
	var_512_int = 9061; // 0xfd8 PushI
	SetMessage(var_512_int); // 0xfd9 TObjFunc
	ClearReplies(); // 0xfdb TObjFunc
	var_513_int = 9063; // 0xfdd PushI
	var_514_int = 11254; // 0xfde PushI
	var_515_int = 9940; // 0xfdf PushI
	AddReply(var_513_int, var_514_int, var_515_int); // 0xfe0 TObjFunc
	var_516_int = 9062; // 0xfe2 PushI
	var_517_int = -1; // 0xfe3 PushI
	var_518_int = 9939; // 0xfe4 PushI
	AddReply(var_516_int, var_517_int, var_518_int); // 0xfe5 TObjFunc
	return 0; // 0xfe7 Return
	
Label_4072:
	var_519_int = 11254; // 0xfe8 PushI
	var_520_bool = var_30_string == var_519_int; // 0xfe9 Eq
	if(var_520_bool == 0) goto Label_4095; // 0xfea JumpB
	var_521_string = ""; // 0xfeb PushV
	var_521_string = "Neutral"; // 0xfec MovS
	func_3333(var_31_bool, var_521_string); // 0xfed Call
	var_522_int = 10208; // 0xfef PushI
	SetMessage(var_522_int); // 0xff0 TObjFunc
	ClearReplies(); // 0xff2 TObjFunc
	var_523_int = 10209; // 0xff4 PushI
	var_524_int = -1; // 0xff5 PushI
	var_525_int = 11255; // 0xff6 PushI
	AddReply(var_523_int, var_524_int, var_525_int); // 0xff7 TObjFunc
	var_526_int = 10231; // 0xff9 PushI
	var_527_int = -1; // 0xffa PushI
	var_528_int = 11278; // 0xffb PushI
	AddReply(var_526_int, var_527_int, var_528_int); // 0xffc TObjFunc
	return 0; // 0xffe Return
	
Label_4095:
	var_529_int = 11280; // 0xfff PushI
	var_530_bool = var_30_string == var_529_int; // 0x1000 Eq
	if(var_530_bool == 0) goto Label_4118; // 0x1001 JumpB
	var_531_string = ""; // 0x1002 PushV
	var_531_string = "Neutral"; // 0x1003 MovS
	func_3333(var_31_bool, var_531_string); // 0x1004 Call
	var_532_int = 10232; // 0x1006 PushI
	SetMessage(var_532_int); // 0x1007 TObjFunc
	ClearReplies(); // 0x1009 TObjFunc
	var_533_int = 10233; // 0x100b PushI
	var_534_int = 9938; // 0x100c PushI
	var_535_int = 11281; // 0x100d PushI
	AddReply(var_533_int, var_534_int, var_535_int); // 0x100e TObjFunc
	var_536_int = 10234; // 0x1010 PushI
	var_537_int = 9938; // 0x1011 PushI
	var_538_int = 11282; // 0x1012 PushI
	AddReply(var_536_int, var_537_int, var_538_int); // 0x1013 TObjFunc
	return 0; // 0x1015 Return
	
Label_4118:
	var_3_string = 1; // 0x1016 TMovB
	var_539_bool = 0; // 0x1017 PushV
	func_4674(var_539_bool); // 0x1018 Call
	if(var_539_bool == 0) goto Label_4126; // 0x101a JumpB
	lshStopAnimation(); // 0x101b Func
	goto Label_4128; // 0x101d Jump
	
Label_4128:
	return 0; // 0x1020 Return
	
Label_4126:
	StopAnimation(); // 0x101e Func
	
Label_4130:
	return 0; // 0x1022 Return
}


task_13_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int)
{
	var_32_int = 1; // 0x10ca PushI
	if(var_32_int == 0) goto Label_4493; // 0x10cb JumpB
	func_4596(); // 0x10cd Call
	var_34_int = 13415; // 0x10cf PushI
	var_35_bool = var_30_int == var_34_int; // 0x10d0 Eq
	if(var_35_bool == 0) goto Label_4355; // 0x10d1 JumpB
	var_36_bool = 0; // 0x10d2 PushV
	var_36_bool = 0; // 0x10d3 MovB
	var_37_bool = 0; var_38_object = Obj(); // 0x10d4 PushV
	var_38_object = var_1_object; // 0x10d5 MovT
	func_5401(var_38_object); // 0x10d6 Call
	if(var_37_bool == 0) goto Label_4319; // 0x10d8 JumpB
	var_45_bool = 0; var_46_object = Obj(); // 0x10d9 PushV
	var_46_object = var_1_object; // 0x10da MovT
	func_5413(var_46_object); // 0x10db Call
	if(var_45_bool == 0) goto Label_4319; // 0x10dd JumpB
	var_36_bool = 1; // 0x10de MovB
	
Label_4319:
	if(var_36_bool == 0) goto Label_4340; // 0x10df JumpB
	var_51_object = Obj(); var_52_object = Obj(); // 0x10e0 PushV
	var_51_object = var_1_object; // 0x10e1 MovT
	var_52_object = var_0_object; // 0x10e2 MovT
	func_5067(); // 0x10e3 Call
	var_55_string = ""; // 0x10e5 PushV
	var_55_string = "Neutral"; // 0x10e6 MovS
	func_4281(var_31_int, var_55_string); // 0x10e7 Call
	var_70_int = 12258; // 0x10e9 PushI
	SetMessage(var_70_int); // 0x10ea TObjFunc
	ClearReplies(); // 0x10ec TObjFunc
	var_71_int = 12259; // 0x10ee PushI
	var_72_int = 13417; // 0x10ef PushI
	var_73_int = 13416; // 0x10f0 PushI
	AddReply(var_71_int, var_72_int, var_73_int); // 0x10f1 TObjFunc
	return 0; // 0x10f3 Return
	
Label_4340:
	var_74_string = ""; // 0x10f4 PushV
	var_74_string = "Neutral"; // 0x10f5 MovS
	func_4281(var_31_int, var_74_string); // 0x10f6 Call
	var_75_int = 13775; // 0x10f8 PushI
	SetMessage(var_75_int); // 0x10f9 TObjFunc
	ClearReplies(); // 0x10fb TObjFunc
	var_76_int = 13776; // 0x10fd PushI
	var_77_int = -1; // 0x10fe PushI
	var_78_int = 15012; // 0x10ff PushI
	AddReply(var_76_int, var_77_int, var_78_int); // 0x1100 TObjFunc
	return 0; // 0x1102 Return
	
Label_4355:
	var_79_int = 13417; // 0x1103 PushI
	var_80_bool = var_30_int == var_79_int; // 0x1104 Eq
	if(var_80_bool == 0) goto Label_4373; // 0x1105 JumpB
	var_81_string = ""; // 0x1106 PushV
	var_81_string = "Neutral"; // 0x1107 MovS
	func_4281(var_31_int, var_81_string); // 0x1108 Call
	var_82_int = 12260; // 0x110a PushI
	SetMessage(var_82_int); // 0x110b TObjFunc
	ClearReplies(); // 0x110d TObjFunc
	var_83_int = 12261; // 0x110f PushI
	var_84_int = 13419; // 0x1110 PushI
	var_85_int = 13418; // 0x1111 PushI
	AddReply(var_83_int, var_84_int, var_85_int); // 0x1112 TObjFunc
	return 0; // 0x1114 Return
	
Label_4373:
	var_86_int = 13419; // 0x1115 PushI
	var_87_bool = var_30_int == var_86_int; // 0x1116 Eq
	if(var_87_bool == 0) goto Label_4391; // 0x1117 JumpB
	var_88_string = ""; // 0x1118 PushV
	var_88_string = "Neutral"; // 0x1119 MovS
	func_4281(var_31_int, var_88_string); // 0x111a Call
	var_89_int = 12262; // 0x111c PushI
	SetMessage(var_89_int); // 0x111d TObjFunc
	ClearReplies(); // 0x111f TObjFunc
	var_90_int = 12263; // 0x1121 PushI
	var_91_int = 13421; // 0x1122 PushI
	var_92_int = 13420; // 0x1123 PushI
	AddReply(var_90_int, var_91_int, var_92_int); // 0x1124 TObjFunc
	return 0; // 0x1126 Return
	
Label_4391:
	var_93_int = 13421; // 0x1127 PushI
	var_94_bool = var_30_int == var_93_int; // 0x1128 Eq
	if(var_94_bool == 0) goto Label_4409; // 0x1129 JumpB
	var_95_string = ""; // 0x112a PushV
	var_95_string = "Neutral"; // 0x112b MovS
	func_4281(var_31_int, var_95_string); // 0x112c Call
	var_96_int = 12264; // 0x112e PushI
	SetMessage(var_96_int); // 0x112f TObjFunc
	ClearReplies(); // 0x1131 TObjFunc
	var_97_int = 12265; // 0x1133 PushI
	var_98_int = 13423; // 0x1134 PushI
	var_99_int = 13422; // 0x1135 PushI
	AddReply(var_97_int, var_98_int, var_99_int); // 0x1136 TObjFunc
	return 0; // 0x1138 Return
	
Label_4409:
	var_100_int = 13423; // 0x1139 PushI
	var_101_bool = var_30_int == var_100_int; // 0x113a Eq
	if(var_101_bool == 0) goto Label_4427; // 0x113b JumpB
	var_102_string = ""; // 0x113c PushV
	var_102_string = "Neutral"; // 0x113d MovS
	func_4281(var_31_int, var_102_string); // 0x113e Call
	var_103_int = 12266; // 0x1140 PushI
	SetMessage(var_103_int); // 0x1141 TObjFunc
	ClearReplies(); // 0x1143 TObjFunc
	var_104_int = 12267; // 0x1145 PushI
	var_105_int = 13425; // 0x1146 PushI
	var_106_int = 13424; // 0x1147 PushI
	AddReply(var_104_int, var_105_int, var_106_int); // 0x1148 TObjFunc
	return 0; // 0x114a Return
	
Label_4427:
	var_107_int = 13425; // 0x114b PushI
	var_108_bool = var_30_int == var_107_int; // 0x114c Eq
	if(var_108_bool == 0) goto Label_4445; // 0x114d JumpB
	var_109_string = ""; // 0x114e PushV
	var_109_string = "Neutral"; // 0x114f MovS
	func_4281(var_31_int, var_109_string); // 0x1150 Call
	var_110_int = 12268; // 0x1152 PushI
	SetMessage(var_110_int); // 0x1153 TObjFunc
	ClearReplies(); // 0x1155 TObjFunc
	var_111_int = 12269; // 0x1157 PushI
	var_112_int = 13427; // 0x1158 PushI
	var_113_int = 13426; // 0x1159 PushI
	AddReply(var_111_int, var_112_int, var_113_int); // 0x115a TObjFunc
	return 0; // 0x115c Return
	
Label_4445:
	var_114_int = 13427; // 0x115d PushI
	var_115_bool = var_30_int == var_114_int; // 0x115e Eq
	if(var_115_bool == 0) goto Label_4463; // 0x115f JumpB
	var_116_string = ""; // 0x1160 PushV
	var_116_string = "Neutral"; // 0x1161 MovS
	func_4281(var_31_int, var_116_string); // 0x1162 Call
	var_117_int = 12270; // 0x1164 PushI
	SetMessage(var_117_int); // 0x1165 TObjFunc
	ClearReplies(); // 0x1167 TObjFunc
	var_118_int = 12271; // 0x1169 PushI
	var_119_int = 13429; // 0x116a PushI
	var_120_int = 13428; // 0x116b PushI
	AddReply(var_118_int, var_119_int, var_120_int); // 0x116c TObjFunc
	return 0; // 0x116e Return
	
Label_4463:
	var_121_int = 13429; // 0x116f PushI
	var_122_bool = var_30_int == var_121_int; // 0x1170 Eq
	if(var_122_bool == 0) goto Label_4481; // 0x1171 JumpB
	var_123_string = ""; // 0x1172 PushV
	var_123_string = "Neutral"; // 0x1173 MovS
	func_4281(var_31_int, var_123_string); // 0x1174 Call
	var_124_int = 12272; // 0x1176 PushI
	SetMessage(var_124_int); // 0x1177 TObjFunc
	ClearReplies(); // 0x1179 TObjFunc
	var_125_int = 12273; // 0x117b PushI
	var_126_int = -1; // 0x117c PushI
	var_127_int = 13430; // 0x117d PushI
	AddReply(var_125_int, var_126_int, var_127_int); // 0x117e TObjFunc
	return 0; // 0x1180 Return
	
Label_4481:
	var_3_string = 1; // 0x1181 TMovB
	var_128_bool = 0; // 0x1182 PushV
	func_4674(var_128_bool); // 0x1183 Call
	if(var_128_bool == 0) goto Label_4489; // 0x1185 JumpB
	lshStopAnimation(); // 0x1186 Func
	goto Label_4491; // 0x1188 Jump
	
Label_4491:
	return 0; // 0x118b Return
	
Label_4489:
	StopAnimation(); // 0x1189 Func
	
Label_4493:
	return 0; // 0x118d Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool)
{
	func_5618(); // 0x7 Call
	var_31_bool = 0; // 0x9 PushV
	func_4513(var_31_bool); // 0xa Call
	var_34_bool = var_31_bool == 0; // 0xc Not
	if(var_34_bool == 0) goto Label_19; // 0xd JumpB
	TaskCall(0); // 0xf TaskCall
	func_0(); // 0x10 Call
	TaskReturn(); // 0x11 TaskReturn
	
Label_19:
	var_35_string = ""; // 0x13 PushV
	var_35_string = "Neutral"; // 0x14 MovS
	func_4578(var_35_string); // 0x15 Call
	lshWaitForAnimEnd(); // 0x17 Func
	goto Label_19; // 0x19 Jump
}


func_0()
{
	Hold(); // 0x0 Func
	return 0; // 0x2 Return
}


func_5377(var_71_bool)
{
	var_73_int = 0; var_74_string = ""; // 0x1502 PushV
	var_74_string = "d6RubinGoesToGeorg"; // 0x1503 MovS
	func_4613(var_73_int, var_74_string); // 0x1504 Call
	var_77_int = 0; // 0x1506 PushI
	var_78_bool = var_73_int != var_77_int; // 0x1507 Neq
	if(var_78_bool == 0) goto Label_5387; // 0x1508 JumpB
	var_71_bool = 1; // 0x1509 MovB
	return 0; // 0x150a Return
	
Label_5387:
	var_71_bool = 0; // 0x150b MovB
	return 0; // 0x150c Return
}


func_4613(var_39_int, var_40_string)
{
	var_41_int = 0; var_42_int = 0; // 0x1205 PushV
	GetVariable(var_40_string, var_42_int); // 0x1206 Func
	var_39_int = var_42_int; // 0x1208 Mov
	return 2; // 0x1209 Return
}


func_5125(var_95_bool)
{
	var_97_int = 0; var_98_string = ""; // 0x1406 PushV
	var_98_string = "d2q01"; // 0x1407 MovS
	func_4613(var_97_int, var_98_string); // 0x1408 Call
	var_99_int = 6; // 0x140a PushI
	var_100_bool = var_97_int == var_99_int; // 0x140b Eq
	if(var_100_bool == 0) goto Label_5135; // 0x140c JumpB
	var_95_bool = 1; // 0x140d MovB
	return 0; // 0x140e Return
	
Label_5135:
	var_95_bool = 0; // 0x140f MovB
	return 0; // 0x1410 Return
}


func_3333(var_2_object, var_256_string)
{
	var_257_bool = 0; // 0xd06 PushV
	func_4674(var_257_bool); // 0xd07 Call
	var_258_bool = var_257_bool == 0; // 0xd09 Not
	if(var_258_bool == 0) goto Label_3340; // 0xd0a JumpB
	return 0; // 0xd0b Return
	
Label_3340:
	var_259_bool = var_256_string == var_2_object; // 0xd0c Eq
	if(var_259_bool == 0) goto Label_3343; // 0xd0d JumpB
	return 0; // 0xd0e Return
	
Label_3343:
	var_260_string = ""; // 0xd0f PushV
	var_260_string = var_256_string; // 0xd10 Mov
	func_4578(var_260_string); // 0xd11 Call
	var_2_object = var_256_string; // 0xd13 TMov
	return 0; // 0xd14 Return
}


func_4618(var_104_object, var_105_string)
{
	var_106_object = Obj(); var_107_object = Obj(); var_108_object = Obj(); var_109_object = Obj(); // 0x120a PushV
	GetMainOutdoorScene(var_108_object); // 0x120b Func
	var_110_string = ".bin"; // 0x120d PushS
	var_111_int = var_105_string + var_110_string; // 0x120e Add
	AddBlankActor(var_109_object, var_108_object, var_105_string, var_111_int); // 0x120f Func
	var_104_object = var_109_object; // 0x1211 Mov
	return 4; // 0x1212 Return
}


func_4876()
{
	var_176_object = Obj(); var_177_object = Obj(); // 0x130c PushV
	var_178_string = "d3q01"; // 0x130d PushS
	var_179_int = 5; // 0x130e PushI
	SetVariable(var_178_string, var_179_int); // 0x130f Func
	var_180_object = Obj(); // 0x1311 PushV
	func_5487(var_180_object); // 0x1312 Call
	var_177_object = var_180_object; // 0x1313 Mov
	var_181_string = "d3q01GeorgAgreedSelf"; // 0x1315 PushS
	var_182_string = "pt_map_georg"; // 0x1316 PushS
	var_183_int = 1; // 0x1317 PushI
	var_184_int = 11154; // 0x1318 PushI
	var_185_float = 0; // 0x1319 PushV
	func_4641(var_185_float); // 0x131a Call
	AddMark(var_181_string, var_182_string, var_183_int, var_184_int, var_185_float); // 0x131c ObjFunc
	var_186_string = "d3q01GeorgAgreed"; // 0x131e PushS
	var_187_string = "pt_map_bigvlad"; // 0x131f PushS
	var_188_int = 1; // 0x1320 PushI
	var_189_int = 15299; // 0x1321 PushI
	var_190_float = 0; // 0x1322 PushV
	func_4641(var_190_float); // 0x1323 Call
	AddMark(var_186_string, var_187_string, var_188_int, var_189_int, var_190_float); // 0x1325 ObjFunc
	return 2; // 0x1327 Return
}


func_5389(var_79_bool)
{
	var_81_int = 0; var_82_string = ""; // 0x150e PushV
	var_82_string = "ood6Georg3"; // 0x150f MovS
	func_4613(var_81_int, var_82_string); // 0x1510 Call
	var_83_int = 0; // 0x1512 PushI
	var_84_bool = var_81_int == var_83_int; // 0x1513 Eq
	if(var_84_bool == 0) goto Label_5399; // 0x1514 JumpB
	var_79_bool = 1; // 0x1515 MovB
	return 0; // 0x1516 Return
	
Label_5399:
	var_79_bool = 0; // 0x1517 MovB
	return 0; // 0x1518 Return
}


func_5137(var_306_bool)
{
	var_308_int = 0; var_309_string = ""; // 0x1412 PushV
	var_309_string = "KnowBurahDead"; // 0x1413 MovS
	func_4613(var_308_int, var_309_string); // 0x1414 Call
	var_310_int = 1; // 0x1416 PushI
	var_311_bool = var_308_int == var_310_int; // 0x1417 Eq
	if(var_311_bool == 0) goto Label_5147; // 0x1418 JumpB
	var_306_bool = 1; // 0x1419 MovB
	return 0; // 0x141a Return
	
Label_5147:
	var_306_bool = 0; // 0x141b MovB
	return 0; // 0x141c Return
}


func_1557(var_2_object, var_204_string)
{
	var_205_bool = 0; // 0x616 PushV
	func_4674(var_205_bool); // 0x617 Call
	var_206_bool = var_205_bool == 0; // 0x619 Not
	if(var_206_bool == 0) goto Label_1564; // 0x61a JumpB
	return 0; // 0x61b Return
	
Label_1564:
	var_207_bool = var_204_string == var_2_object; // 0x61c Eq
	if(var_207_bool == 0) goto Label_1567; // 0x61d JumpB
	return 0; // 0x61e Return
	
Label_1567:
	var_208_string = ""; // 0x61f PushV
	var_208_string = var_204_string; // 0x620 Mov
	func_4578(var_208_string); // 0x621 Call
	var_2_object = var_204_string; // 0x623 TMov
	return 0; // 0x624 Return
}


func_4629(var_154_bool, var_155_string, var_156_string)
{
	var_157_object = Obj(); var_158_object = Obj(); // 0x1215 PushV
	FindActor(var_158_object, var_155_string); // 0x1216 Func
	var_159_bool = var_158_object == 0; // 0x1218 NullEq
	if(var_159_bool == 0) goto Label_4636; // 0x1219 JumpB
	var_154_bool = 0; // 0x121a MovB
	return 2; // 0x121b Return
	
Label_4636:
	Trigger(var_158_object, var_156_string); // 0x121c Func
	var_154_bool = 1; // 0x121e MovB
	return 2; // 0x121f Return
}


func_5401(var_37_bool)
{
	var_39_int = 0; var_40_string = ""; // 0x151a PushV
	var_40_string = "d8KainIsReason"; // 0x151b MovS
	func_4613(var_39_int, var_40_string); // 0x151c Call
	var_43_int = 1; // 0x151e PushI
	var_44_bool = var_39_int == var_43_int; // 0x151f Eq
	if(var_44_bool == 0) goto Label_5411; // 0x1520 JumpB
	var_37_bool = 1; // 0x1521 MovB
	return 0; // 0x1522 Return
	
Label_5411:
	var_37_bool = 0; // 0x1523 MovB
	return 0; // 0x1524 Return
}


func_5149(var_253_bool)
{
	var_255_int = 0; var_256_string = ""; // 0x141e PushV
	var_256_string = "ood1Georg4"; // 0x141f MovS
	func_4613(var_255_int, var_256_string); // 0x1420 Call
	var_257_int = 0; // 0x1422 PushI
	var_258_bool = var_255_int == var_257_int; // 0x1423 Eq
	if(var_258_bool == 0) goto Label_5159; // 0x1424 JumpB
	var_253_bool = 1; // 0x1425 MovB
	return 0; // 0x1426 Return
	
Label_5159:
	var_253_bool = 0; // 0x1427 MovB
	return 0; // 0x1428 Return
}


func_4641(var_57_float)
{
	var_58_float = 0; var_59_float = 0; // 0x1221 PushV
	GetGameTime(var_59_float); // 0x1222 Func
	var_57_float = var_59_float; // 0x1224 Mov
	return 2; // 0x1225 Return
}


func_4131(var_0_object, var_594_int, var_595_object)
{
	var_597_object = Obj(); var_598_bool = 0; var_599_int = 0; var_600_bool = 0; var_601_object = Obj(); var_602_bool = 0; var_603_int = 0; var_604_bool = 0; // 0x1023 PushV
	var_0_object = var_595_object; // 0x1024 TMov
	var_605_bool = 0; var_606_object = Obj(); // 0x1025 PushV
	var_606_object = var_595_object; // 0x1026 Mov
	func_4518(var_606_object); // 0x1027 Call
	var_607_bool = var_605_bool == 0; // 0x1029 Not
	if(var_607_bool == 0) goto Label_4141; // 0x102a JumpB
	var_594_int = -2; // 0x102b MovI
	return 8; // 0x102c Return
	
Label_4141:
	CreateDialog(var_601_object); // 0x102d Func
	var_608_int = 0; // 0x102f PushV
	func_4670(var_608_int); // 0x1030 Call
	SetNPCName(var_608_int); // 0x1032 ObjFunc
	var_609_string = ""; // 0x1034 PushV
	func_4672(var_609_string); // 0x1035 Call
	SetPhoto(var_609_string); // 0x1037 ObjFunc
	var_610_int = 0; // 0x1039 PushV
	func_5537(var_610_int); // 0x103a Call
	SetPlayerName(var_610_int); // 0x103c ObjFunc
	var_603_int = -1; // 0x103e MovI
	IsOverrideActive(var_602_bool); // 0x103f Func
	var_611_bool = var_602_bool; // 0x1041 Push
	if(var_611_bool == 0) goto Label_4165; // 0x1042 JumpB
	var_594_int = -2; // 0x1043 MovI
	return 8; // 0x1044 Return
	
Label_4165:
	DoDialog(var_601_object); // 0x1045 Func
	var_612_object = Obj(); var_613_object = Obj(); // 0x1047 PushV
	var_612_object = var_595_object; // 0x1048 Mov
	var_613_object = var_601_object; // 0x1049 Mov
	TaskCall(13); // 0x104a TaskCall
	func_4194(var_614_object, var_615_object, var_616_string, var_617_bool, var_612_object, var_613_object); // 0x104b Call
	TaskReturn(); // 0x104c TaskReturn
	IsDialogEnd(var_604_bool); // 0x104e ObjFunc
	
Label_4176:
	var_658_bool = var_604_bool == 0; // 0x1050 Not
	if(var_658_bool == 0) goto Label_4183; // 0x1051 JumpB
	sync(); // 0x1052 Func
	IsDialogEnd(var_604_bool); // 0x1054 ObjFunc
	goto Label_4176; // 0x1056 Jump
	
Label_4183:
	var_659_object = Obj(); // 0x1057 PushV
	var_659_object = var_595_object; // 0x1058 Mov
	func_4574(); // 0x1059 Call
	StopDialog(var_601_object); // 0x105b Func
	GetReturnValue(var_603_int); // 0x105d ObjFunc
	var_594_int = var_603_int; // 0x105f Mov
	return 8; // 0x1060 Return
}


func_5413(var_45_bool)
{
	var_47_int = 0; var_48_string = ""; // 0x1526 PushV
	var_48_string = "ood8Georg1"; // 0x1527 MovS
	func_4613(var_47_int, var_48_string); // 0x1528 Call
	var_49_int = 0; // 0x152a PushI
	var_50_bool = var_47_int == var_49_int; // 0x152b Eq
	if(var_50_bool == 0) goto Label_5423; // 0x152c JumpB
	var_45_bool = 1; // 0x152d MovB
	return 0; // 0x152e Return
	
Label_5423:
	var_45_bool = 0; // 0x152f MovB
	return 0; // 0x1530 Return
}


func_4646(var_34_int)
{
	var_35_float = 0; var_36_float = 0; // 0x1226 PushV
	GetGameTime(var_36_float); // 0x1227 Func
	var_37_int = 1; // 0x1229 PushI
	var_38_int = 0; // 0x122a PushV
	var_39_int = 24; // 0x122b PushI
	var_38_int = var_36_float / var_36_float; // 0x122c Div2
	var_34_int = var_37_int + var_38_int; // 0x122d Add2
	return 2; // 0x122e Return
}


func_5161(var_120_bool)
{
	var_122_int = 0; var_123_string = ""; // 0x142a PushV
	var_123_string = "ood1GeorgMQ1"; // 0x142b MovS
	func_4613(var_122_int, var_123_string); // 0x142c Call
	var_126_int = 0; // 0x142e PushI
	var_127_bool = var_122_int == var_126_int; // 0x142f Eq
	if(var_127_bool == 0) goto Label_5171; // 0x1430 JumpB
	var_120_bool = 1; // 0x1431 MovB
	return 0; // 0x1432 Return
	
Label_5171:
	var_120_bool = 0; // 0x1433 MovB
	return 0; // 0x1434 Return
}


func_3114(var_0_object, var_375_int, var_376_object)
{
	var_378_object = Obj(); var_379_bool = 0; var_380_int = 0; var_381_bool = 0; var_382_object = Obj(); var_383_bool = 0; var_384_int = 0; var_385_bool = 0; // 0xc2a PushV
	var_0_object = var_376_object; // 0xc2b TMov
	var_386_bool = 0; var_387_object = Obj(); // 0xc2c PushV
	var_387_object = var_376_object; // 0xc2d Mov
	func_4518(var_387_object); // 0xc2e Call
	var_388_bool = var_386_bool == 0; // 0xc30 Not
	if(var_388_bool == 0) goto Label_3124; // 0xc31 JumpB
	var_375_int = -2; // 0xc32 MovI
	return 8; // 0xc33 Return
	
Label_3124:
	CreateDialog(var_382_object); // 0xc34 Func
	var_389_int = 0; // 0xc36 PushV
	func_4670(var_389_int); // 0xc37 Call
	SetNPCName(var_389_int); // 0xc39 ObjFunc
	var_390_string = ""; // 0xc3b PushV
	func_4672(var_390_string); // 0xc3c Call
	SetPhoto(var_390_string); // 0xc3e ObjFunc
	var_391_int = 0; // 0xc40 PushV
	func_5537(var_391_int); // 0xc41 Call
	SetPlayerName(var_391_int); // 0xc43 ObjFunc
	var_384_int = -1; // 0xc45 MovI
	IsOverrideActive(var_383_bool); // 0xc46 Func
	var_392_bool = var_383_bool; // 0xc48 Push
	if(var_392_bool == 0) goto Label_3148; // 0xc49 JumpB
	var_375_int = -2; // 0xc4a MovI
	return 8; // 0xc4b Return
	
Label_3148:
	DoDialog(var_382_object); // 0xc4c Func
	var_393_object = Obj(); var_394_object = Obj(); // 0xc4e PushV
	var_393_object = var_376_object; // 0xc4f Mov
	var_394_object = var_382_object; // 0xc50 Mov
	TaskCall(11); // 0xc51 TaskCall
	func_3177(var_395_object, var_396_object, var_397_string, var_398_bool, var_393_object, var_394_object); // 0xc52 Call
	TaskReturn(); // 0xc53 TaskReturn
	IsDialogEnd(var_385_bool); // 0xc55 ObjFunc
	
Label_3159:
	var_486_bool = var_385_bool == 0; // 0xc57 Not
	if(var_486_bool == 0) goto Label_3166; // 0xc58 JumpB
	sync(); // 0xc59 Func
	IsDialogEnd(var_385_bool); // 0xc5b ObjFunc
	goto Label_3159; // 0xc5d Jump
	
Label_3166:
	var_487_object = Obj(); // 0xc5e PushV
	var_487_object = var_376_object; // 0xc5f Mov
	func_4574(); // 0xc60 Call
	StopDialog(var_382_object); // 0xc62 Func
	GetReturnValue(var_384_int); // 0xc64 ObjFunc
	var_375_int = var_384_int; // 0xc66 Mov
	return 8; // 0xc67 Return
}


func_4905()
{
	var_193_string = "ood3Georg1"; // 0x132a PushS
	var_194_int = 1; // 0x132b PushI
	SetVariable(var_193_string, var_194_int); // 0x132c Func
	return 0; // 0x132e Return
}


func_4655(var_32_bool, var_33_int)
{
	var_34_int = 0; // 0x1230 PushV
	func_4646(var_34_int); // 0x1231 Call
	var_32_bool = var_34_int == var_33_int; // 0x1233 Eq2
	return 0; // 0x1234 Return
}


func_4911()
{
	var_38_string = "ood1GeorgMQ1"; // 0x1330 PushS
	var_39_int = 1; // 0x1331 PushI
	SetVariable(var_38_string, var_39_int); // 0x1332 Func
	return 0; // 0x1334 Return
}


func_49(var_0_object, var_490_int, var_491_object)
{
	var_493_object = Obj(); var_494_bool = 0; var_495_int = 0; var_496_bool = 0; var_497_object = Obj(); var_498_bool = 0; var_499_int = 0; var_500_bool = 0; // 0x31 PushV
	var_0_object = var_491_object; // 0x32 TMov
	var_501_bool = 0; var_502_object = Obj(); // 0x33 PushV
	var_502_object = var_491_object; // 0x34 Mov
	func_4518(var_502_object); // 0x35 Call
	var_503_bool = var_501_bool == 0; // 0x37 Not
	if(var_503_bool == 0) goto Label_59; // 0x38 JumpB
	var_490_int = -2; // 0x39 MovI
	return 8; // 0x3a Return
	
Label_59:
	CreateDialog(var_497_object); // 0x3b Func
	var_504_int = 0; // 0x3d PushV
	func_4670(var_504_int); // 0x3e Call
	SetNPCName(var_504_int); // 0x40 ObjFunc
	var_505_string = ""; // 0x42 PushV
	func_4672(var_505_string); // 0x43 Call
	SetPhoto(var_505_string); // 0x45 ObjFunc
	var_506_int = 0; // 0x47 PushV
	func_5537(var_506_int); // 0x48 Call
	SetPlayerName(var_506_int); // 0x4a ObjFunc
	var_499_int = -1; // 0x4c MovI
	IsOverrideActive(var_498_bool); // 0x4d Func
	var_507_bool = var_498_bool; // 0x4f Push
	if(var_507_bool == 0) goto Label_83; // 0x50 JumpB
	var_490_int = -2; // 0x51 MovI
	return 8; // 0x52 Return
	
Label_83:
	DoDialog(var_497_object); // 0x53 Func
	var_508_object = Obj(); var_509_object = Obj(); // 0x55 PushV
	var_508_object = var_491_object; // 0x56 Mov
	var_509_object = var_497_object; // 0x57 Mov
	TaskCall(3); // 0x58 TaskCall
	func_112(var_510_object, var_511_object, var_512_string, var_513_bool, var_508_object, var_509_object); // 0x59 Call
	TaskReturn(); // 0x5a TaskReturn
	IsDialogEnd(var_500_bool); // 0x5c ObjFunc
	
Label_94:
	var_590_bool = var_500_bool == 0; // 0x5e Not
	if(var_590_bool == 0) goto Label_101; // 0x5f JumpB
	sync(); // 0x60 Func
	IsDialogEnd(var_500_bool); // 0x62 ObjFunc
	goto Label_94; // 0x64 Jump
	
Label_101:
	var_591_object = Obj(); // 0x65 PushV
	var_591_object = var_491_object; // 0x66 Mov
	func_4574(); // 0x67 Call
	StopDialog(var_497_object); // 0x69 Func
	GetReturnValue(var_499_int); // 0x6b ObjFunc
	var_490_int = var_499_int; // 0x6d Mov
	return 8; // 0x6e Return
}


func_562(var_0_object, var_46_int, var_47_object)
{
	var_49_object = Obj(); var_50_bool = 0; var_51_int = 0; var_52_bool = 0; var_53_object = Obj(); var_54_bool = 0; var_55_int = 0; var_56_bool = 0; // 0x232 PushV
	var_0_object = var_47_object; // 0x233 TMov
	var_57_bool = 0; var_58_object = Obj(); // 0x234 PushV
	var_58_object = var_47_object; // 0x235 Mov
	func_4518(var_58_object); // 0x236 Call
	var_97_bool = var_57_bool == 0; // 0x238 Not
	if(var_97_bool == 0) goto Label_572; // 0x239 JumpB
	var_46_int = -2; // 0x23a MovI
	return 8; // 0x23b Return
	
Label_572:
	CreateDialog(var_53_object); // 0x23c Func
	var_98_int = 0; // 0x23e PushV
	func_4670(var_98_int); // 0x23f Call
	SetNPCName(var_98_int); // 0x241 ObjFunc
	var_99_string = ""; // 0x243 PushV
	func_4672(var_99_string); // 0x244 Call
	SetPhoto(var_99_string); // 0x246 ObjFunc
	var_100_int = 0; // 0x248 PushV
	func_5537(var_100_int); // 0x249 Call
	SetPlayerName(var_100_int); // 0x24b ObjFunc
	var_55_int = -1; // 0x24d MovI
	IsOverrideActive(var_54_bool); // 0x24e Func
	var_108_bool = var_54_bool; // 0x250 Push
	if(var_108_bool == 0) goto Label_596; // 0x251 JumpB
	var_46_int = -2; // 0x252 MovI
	return 8; // 0x253 Return
	
Label_596:
	DoDialog(var_53_object); // 0x254 Func
	var_109_object = Obj(); var_110_object = Obj(); // 0x256 PushV
	var_109_object = var_47_object; // 0x257 Mov
	var_110_object = var_53_object; // 0x258 Mov
	TaskCall(5); // 0x259 TaskCall
	func_625(var_111_object, var_112_object, var_113_string, var_114_bool, var_109_object, var_110_object); // 0x25a Call
	TaskReturn(); // 0x25b TaskReturn
	IsDialogEnd(var_56_bool); // 0x25d ObjFunc
	
Label_607:
	var_183_bool = var_56_bool == 0; // 0x25f Not
	if(var_183_bool == 0) goto Label_614; // 0x260 JumpB
	sync(); // 0x261 Func
	IsDialogEnd(var_56_bool); // 0x263 ObjFunc
	goto Label_607; // 0x265 Jump
	
Label_614:
	var_184_object = Obj(); // 0x266 PushV
	var_184_object = var_47_object; // 0x267 Mov
	func_4574(); // 0x268 Call
	StopDialog(var_53_object); // 0x26a Func
	GetReturnValue(var_55_int); // 0x26c ObjFunc
	var_46_int = var_55_int; // 0x26e Mov
	return 8; // 0x26f Return
}


func_5425(var_163_bool)
{
	var_163_bool = 0; // 0x1532 MovB
	return 0; // 0x1533 Return
}


func_5428(var_85_object)
{
	var_86_object = Obj(); var_87_object = Obj(); // 0x1534 PushV
	GetDiaryRoot(var_87_object); // 0x1535 Func
	var_88_bool = var_87_object == 0; // 0x1537 Not
	if(var_88_bool == 0) goto Label_5438; // 0x1538 JumpB
	var_89_string = "Can't retrieve diary root"; // 0x1539 PushS
	Trace(var_89_string); // 0x153a Func
	var_85_object = 0; // 0x153c MovB
	return 2; // 0x153d Return
	
Label_5438:
	var_85_object = var_87_object; // 0x153e Mov
	return 2; // 0x153f Return
}


func_5173(var_190_bool)
{
	var_192_int = 0; var_193_string = ""; // 0x1436 PushV
	var_193_string = "ood1Georg1"; // 0x1437 MovS
	func_4613(var_192_int, var_193_string); // 0x1438 Call
	var_196_int = 0; // 0x143a PushI
	var_197_bool = var_192_int == var_196_int; // 0x143b Eq
	if(var_197_bool == 0) goto Label_5183; // 0x143c JumpB
	var_190_bool = 1; // 0x143d MovB
	return 0; // 0x143e Return
	
Label_5183:
	var_190_bool = 0; // 0x143f MovB
	return 0; // 0x1440 Return
}


func_4661(var_660_bool)
{
	var_661_bool = 0; var_662_bool = 0; // 0x1235 PushV
	var_663_string = ""; // 0x1236 PushV
	var_663_string = "No"; // 0x1237 MovS
	func_4578(var_663_string); // 0x1238 Call
	lshWaitForAnimEnd(var_662_bool); // 0x123a Func
	var_660_bool = var_662_bool; // 0x123c Mov
	return 2; // 0x123d Return
}


func_4917()
{
	var_209_string = "KnowViktor"; // 0x1336 PushS
	var_210_int = 1; // 0x1337 PushI
	SetVariable(var_209_string, var_210_int); // 0x1338 Func
	return 0; // 0x133a Return
}


func_4923()
{
	var_38_string = "ood3Georg2"; // 0x133c PushS
	var_39_int = 1; // 0x133d PushI
	SetVariable(var_38_string, var_39_int); // 0x133e Func
	return 0; // 0x1340 Return
}


func_4670(var_98_int)
{
	var_98_int = 2859; // 0x123e MovI
	return 0; // 0x123f Return
}


func_4672(var_99_string)
{
	var_99_string = "ui/NPC_Georg.png"; // 0x1240 MovS
	return 0; // 0x1241 Return
}


func_5185(var_280_bool)
{
	var_282_int = 0; var_283_string = ""; // 0x1442 PushV
	var_283_string = "d3q01"; // 0x1443 MovS
	func_4613(var_282_int, var_283_string); // 0x1444 Call
	var_284_int = 0; // 0x1446 PushI
	var_285_bool = var_282_int == var_284_int; // 0x1447 Eq
	if(var_285_bool == 0) goto Label_5195; // 0x1448 JumpB
	var_280_bool = 1; // 0x1449 MovB
	return 0; // 0x144a Return
	
Label_5195:
	var_280_bool = 0; // 0x144b MovB
	return 0; // 0x144c Return
}


func_4674(var_33_bool)
{
	var_33_bool = 1; // 0x1242 MovB
	return 0; // 0x1243 Return
}


func_4929()
{
	var_42_object = Obj(); var_43_object = Obj(); // 0x1341 PushV
	var_44_string = "d3q02"; // 0x1342 PushS
	var_45_int = 1; // 0x1343 PushI
	SetVariable(var_44_string, var_45_int); // 0x1344 Func
	var_46_object = Obj(); // 0x1346 PushV
	func_5487(var_46_object); // 0x1347 Call
	var_43_object = var_46_object; // 0x1348 Mov
	var_53_string = "d3q02GeorgGotoMishka"; // 0x134a PushS
	var_54_string = "pt_map_mishka"; // 0x134b PushS
	var_55_int = 0; // 0x134c PushI
	var_56_int = 11375; // 0x134d PushI
	var_57_float = 0; // 0x134e PushV
	func_4641(var_57_float); // 0x134f Call
	AddMark(var_53_string, var_54_string, var_55_int, var_56_int, var_57_float); // 0x1351 ObjFunc
	var_60_string = "d3q02GeorgSelf"; // 0x1353 PushS
	var_61_string = "pt_map_georg"; // 0x1354 PushS
	var_62_int = 0; // 0x1355 PushI
	var_63_int = 15304; // 0x1356 PushI
	var_64_float = 0; // 0x1357 PushV
	func_4641(var_64_float); // 0x1358 Call
	AddMark(var_60_string, var_61_string, var_62_int, var_63_int, var_64_float); // 0x135a ObjFunc
	var_65_string = "d3q02GeorgGotoViktor"; // 0x135c PushS
	var_66_string = "pt_map_viktor"; // 0x135d PushS
	var_67_int = 0; // 0x135e PushI
	var_68_int = 11379; // 0x135f PushI
	var_69_float = 0; // 0x1360 PushV
	func_4641(var_69_float); // 0x1361 Call
	AddMark(var_65_string, var_66_string, var_67_int, var_68_int, var_69_float); // 0x1363 ObjFunc
	func_5586(); // 0x1366 Call
	func_5602(); // 0x1369 Call
	var_104_object = Obj(); var_105_string = ""; // 0x136b PushV
	var_105_string = "quest_d3_02"; // 0x136c MovS
	func_4618(var_104_object, var_105_string); // 0x136d Call
	return 2; // 0x136f Return
}


func_4676()
{
	var_42_object = Obj(); var_43_object = Obj(); // 0x1244 PushV
	var_44_string = "d1q01"; // 0x1245 PushS
	var_45_int = 1; // 0x1246 PushI
	SetVariable(var_44_string, var_45_int); // 0x1247 Func
	var_46_object = Obj(); // 0x1249 PushV
	func_5487(var_46_object); // 0x124a Call
	var_43_object = var_46_object; // 0x124b Mov
	var_53_string = "d1GeorgInfo"; // 0x124d PushS
	var_54_string = "pt_map_georg"; // 0x124e PushS
	var_55_int = 3; // 0x124f PushI
	var_56_int = 8631; // 0x1250 PushI
	var_57_float = 0; // 0x1251 PushV
	func_4641(var_57_float); // 0x1252 Call
	AddMark(var_53_string, var_54_string, var_55_int, var_56_int, var_57_float); // 0x1254 ObjFunc
	var_60_string = "d1GeorgGotoViktor"; // 0x1256 PushS
	var_61_string = "pt_map_viktor"; // 0x1257 PushS
	var_62_int = 3; // 0x1258 PushI
	var_63_int = 8629; // 0x1259 PushI
	var_64_float = 0; // 0x125a PushV
	func_4641(var_64_float); // 0x125b Call
	AddMark(var_60_string, var_61_string, var_62_int, var_63_int, var_64_float); // 0x125d ObjFunc
	func_5554(); // 0x1260 Call
	return 2; // 0x1262 Return
}


func_5441(var_76_bool, var_77_object, var_78_int)
{
	var_79_object = Obj(); var_80_object = Obj(); var_81_int = 0; var_82_object = Obj(); var_83_object = Obj(); var_84_int = 0; // 0x1541 PushV
	var_85_object = Obj(); // 0x1542 PushV
	func_5428(var_85_object); // 0x1543 Call
	var_82_object = var_85_object; // 0x1544 Mov
	Find(var_78_int, var_83_object); // 0x1546 ObjFunc
	var_90_bool = var_83_object == 0; // 0x1548 Not
	if(var_90_bool == 0) goto Label_5456; // 0x1549 JumpB
	var_91_string = "Can't find diary parent with id: "; // 0x154a PushS
	var_92_int = var_91_string + var_78_int; // 0x154b Add
	Trace(var_92_int); // 0x154c Func
	var_76_bool = 0; // 0x154e MovB
	return 6; // 0x154f Return
	
Label_5456:
	AddChild(var_77_object); // 0x1550 ObjFunc
	var_93_string = "player_diary"; // 0x1552 PushS
	var_94_int = 1; // 0x1553 PushI
	SetVariable(var_93_string, var_94_int); // 0x1554 Func
	GetCategory(var_84_int); // 0x1556 ObjFunc
	SetDiarySection(var_84_int); // 0x1558 Func
	var_76_bool = 0; // 0x155a MovB
	return 6; // 0x155b Return
}


func_5197(var_228_bool)
{
	var_230_int = 0; var_231_string = ""; // 0x144e PushV
	var_231_string = "ood1Georg2"; // 0x144f MovS
	func_4613(var_230_int, var_231_string); // 0x1450 Call
	var_232_int = 0; // 0x1452 PushI
	var_233_bool = var_230_int == var_232_int; // 0x1453 Eq
	if(var_233_bool == 0) goto Label_5207; // 0x1454 JumpB
	var_228_bool = 1; // 0x1455 MovB
	return 0; // 0x1456 Return
	
Label_5207:
	var_228_bool = 0; // 0x1457 MovB
	return 0; // 0x1458 Return
}


func_1368(var_0_object, var_185_int, var_186_object)
{
	var_188_object = Obj(); var_189_bool = 0; var_190_int = 0; var_191_bool = 0; var_192_object = Obj(); var_193_bool = 0; var_194_int = 0; var_195_bool = 0; // 0x558 PushV
	var_0_object = var_186_object; // 0x559 TMov
	var_196_bool = 0; var_197_object = Obj(); // 0x55a PushV
	var_197_object = var_186_object; // 0x55b Mov
	func_4518(var_197_object); // 0x55c Call
	var_198_bool = var_196_bool == 0; // 0x55e Not
	if(var_198_bool == 0) goto Label_1378; // 0x55f JumpB
	var_185_int = -2; // 0x560 MovI
	return 8; // 0x561 Return
	
Label_1378:
	CreateDialog(var_192_object); // 0x562 Func
	var_199_int = 0; // 0x564 PushV
	func_4670(var_199_int); // 0x565 Call
	SetNPCName(var_199_int); // 0x567 ObjFunc
	var_200_string = ""; // 0x569 PushV
	func_4672(var_200_string); // 0x56a Call
	SetPhoto(var_200_string); // 0x56c ObjFunc
	var_201_int = 0; // 0x56e PushV
	func_5537(var_201_int); // 0x56f Call
	SetPlayerName(var_201_int); // 0x571 ObjFunc
	var_194_int = -1; // 0x573 MovI
	IsOverrideActive(var_193_bool); // 0x574 Func
	var_202_bool = var_193_bool; // 0x576 Push
	if(var_202_bool == 0) goto Label_1402; // 0x577 JumpB
	var_185_int = -2; // 0x578 MovI
	return 8; // 0x579 Return
	
Label_1402:
	DoDialog(var_192_object); // 0x57a Func
	var_203_object = Obj(); var_204_object = Obj(); // 0x57c PushV
	var_203_object = var_186_object; // 0x57d Mov
	var_204_object = var_192_object; // 0x57e Mov
	TaskCall(7); // 0x57f TaskCall
	func_1431(var_205_object, var_206_object, var_207_string, var_208_bool, var_203_object, var_204_object); // 0x580 Call
	TaskReturn(); // 0x581 TaskReturn
	IsDialogEnd(var_195_bool); // 0x583 ObjFunc
	
Label_1413:
	var_282_bool = var_195_bool == 0; // 0x585 Not
	if(var_282_bool == 0) goto Label_1420; // 0x586 JumpB
	sync(); // 0x587 Func
	IsDialogEnd(var_195_bool); // 0x589 ObjFunc
	goto Label_1413; // 0x58b Jump
	
Label_1420:
	var_283_object = Obj(); // 0x58c PushV
	var_283_object = var_186_object; // 0x58d Mov
	func_4574(); // 0x58e Call
	StopDialog(var_192_object); // 0x590 Func
	GetReturnValue(var_194_int); // 0x592 ObjFunc
	var_185_int = var_194_int; // 0x594 Mov
	return 8; // 0x595 Return
}


func_5209(var_237_bool)
{
	var_239_int = 0; var_240_string = ""; // 0x145a PushV
	var_240_string = "ood1Georg3"; // 0x145b MovS
	func_4613(var_239_int, var_240_string); // 0x145c Call
	var_241_int = 0; // 0x145e PushI
	var_242_bool = var_239_int == var_241_int; // 0x145f Eq
	if(var_242_bool == 0) goto Label_5219; // 0x1460 JumpB
	var_237_bool = 1; // 0x1461 MovB
	return 0; // 0x1462 Return
	
Label_5219:
	var_237_bool = 0; // 0x1463 MovB
	return 0; // 0x1464 Return
}


func_5470(var_92_bool, var_93_int)
{
	var_94_object = Obj(); var_95_object = Obj(); var_96_object = Obj(); var_97_object = Obj(); // 0x155e PushV
	var_98_object = Obj(); // 0x155f PushV
	func_5428(var_98_object); // 0x1560 Call
	var_96_object = var_98_object; // 0x1561 Mov
	Find(var_93_int, var_97_object); // 0x1563 ObjFunc
	var_99_bool = var_97_object == 0; // 0x1565 Not
	if(var_99_bool == 0) goto Label_5481; // 0x1566 JumpB
	var_92_bool = 0; // 0x1567 MovB
	return 4; // 0x1568 Return
	
Label_5481:
	Remove(); // 0x1569 ObjFunc
	var_92_bool = 1; // 0x156b MovB
	return 4; // 0x156c Return
}


func_4194(var_0_object, var_1_object, var_2_object, var_3_object, var_612_object, var_613_object)
{
	var_0_object = var_613_object; // 0x1063 TMov
	var_1_object = var_612_object; // 0x1064 TMov
	var_3_object = 0; // 0x1065 TMovB
	var_618_int = 1; // 0x1066 PushI
	if(var_618_int == 0) goto Label_4251; // 0x1067 JumpB
	var_619_bool = 0; // 0x1068 PushV
	var_619_bool = 0; // 0x1069 MovB
	var_620_bool = 0; var_621_object = Obj(); // 0x106a PushV
	var_621_object = var_1_object; // 0x106b MovT
	func_5401(var_621_object); // 0x106c Call
	if(var_620_bool == 0) goto Label_4213; // 0x106e JumpB
	var_626_bool = 0; var_627_object = Obj(); // 0x106f PushV
	var_627_object = var_1_object; // 0x1070 MovT
	func_5413(var_627_object); // 0x1071 Call
	if(var_626_bool == 0) goto Label_4213; // 0x1073 JumpB
	var_619_bool = 1; // 0x1074 MovB
	
Label_4213:
	if(var_619_bool == 0) goto Label_4234; // 0x1075 JumpB
	var_632_object = Obj(); var_633_object = Obj(); // 0x1076 PushV
	var_632_object = var_1_object; // 0x1077 MovT
	var_633_object = var_0_object; // 0x1078 MovT
	func_5067(); // 0x1079 Call
	var_636_string = ""; // 0x107b PushV
	var_636_string = "Neutral"; // 0x107c MovS
	func_4281(var_613_object, var_636_string); // 0x107d Call
	var_641_int = 12258; // 0x107f PushI
	SetMessage(var_641_int); // 0x1080 TObjFunc
	ClearReplies(); // 0x1082 TObjFunc
	var_642_int = 12259; // 0x1084 PushI
	var_643_int = 13417; // 0x1085 PushI
	var_644_int = 13416; // 0x1086 PushI
	AddReply(var_642_int, var_643_int, var_644_int); // 0x1087 TObjFunc
	goto Label_4251; // 0x1089 Jump
	
Label_4251:
	var_645_bool = 0; // 0x109b PushV
	func_4674(var_645_bool); // 0x109c Call
	if(var_645_bool == 0) goto Label_4266; // 0x109e JumpB
	
Label_4255:
	lshWaitForAnimEnd(); // 0x109f Func
	var_646_object = var_3_object; // 0x10a1 PushT
	if(var_646_object == 0) goto Label_4260; // 0x10a2 JumpB
	goto Label_4265; // 0x10a3 Jump
	
Label_4265:
	goto Label_4280; // 0x10a9 Jump
	
Label_4280:
	return 0; // 0x10b8 Return
	
Label_4260:
	var_647_string = ""; // 0x10a4 PushV
	var_647_string = var_2_object; // 0x10a5 MovT
	func_4578(var_647_string); // 0x10a6 Call
	goto Label_4255; // 0x10a8 Jump
	
Label_4266:
	var_648_string = "all"; // 0x10aa PushS
	var_649_string = "idle"; // 0x10ab PushS
	PlayAnimation(var_648_string, var_649_string); // 0x10ac Func
	
Label_4270:
	WaitForAnimEnd(); // 0x10ae Func
	var_650_object = var_3_object; // 0x10b0 PushT
	if(var_650_object == 0) goto Label_4275; // 0x10b1 JumpB
	goto Label_4280; // 0x10b2 Jump
	
Label_4275:
	var_651_string = "all"; // 0x10b3 PushS
	var_652_string = "idle"; // 0x10b4 PushS
	PlayAnimation(var_651_string, var_652_string); // 0x10b5 Func
	goto Label_4270; // 0x10b7 Jump
	
Label_4234:
	var_653_string = ""; // 0x108a PushV
	var_653_string = "Neutral"; // 0x108b MovS
	func_4281(var_613_object, var_653_string); // 0x108c Call
	var_654_int = 13775; // 0x108e PushI
	SetMessage(var_654_int); // 0x108f TObjFunc
	ClearReplies(); // 0x1091 TObjFunc
	var_655_int = 13776; // 0x1093 PushI
	var_656_int = -1; // 0x1094 PushI
	var_657_int = 15012; // 0x1095 PushI
	AddReply(var_655_int, var_656_int, var_657_int); // 0x1096 TObjFunc
	goto Label_4251; // 0x1098 Jump
}


func_4708()
{
	var_42_object = Obj(); var_43_object = Obj(); var_44_object = Obj(); var_45_object = Obj(); // 0x1264 PushV
	var_46_string = "d1q01"; // 0x1265 PushS
	var_47_int = 1000; // 0x1266 PushI
	SetVariable(var_46_string, var_47_int); // 0x1267 Func
	var_48_object = Obj(); // 0x1269 PushV
	func_5487(var_48_object); // 0x126a Call
	var_44_object = var_48_object; // 0x126b Mov
	var_55_string = "d1q01EvaAboutMark"; // 0x126d PushS
	FindMark(var_45_object, var_55_string); // 0x126e ObjFunc
	var_56_object = var_45_object; // 0x1270 Push
	if(var_56_object == 0) goto Label_4724; // 0x1271 JumpB
	Remove(); // 0x1272 ObjFunc
	
Label_4724:
	var_57_string = "d1q01EvaGotoSimon"; // 0x1274 PushS
	FindMark(var_45_object, var_57_string); // 0x1275 ObjFunc
	var_58_object = var_45_object; // 0x1277 Push
	if(var_58_object == 0) goto Label_4731; // 0x1278 JumpB
	Remove(); // 0x1279 ObjFunc
	
Label_4731:
	var_59_string = "d1q01GrifAboutRubin"; // 0x127b PushS
	FindMark(var_45_object, var_59_string); // 0x127c ObjFunc
	var_60_object = var_45_object; // 0x127e Push
	if(var_60_object == 0) goto Label_4738; // 0x127f JumpB
	Remove(); // 0x1280 ObjFunc
	
Label_4738:
	var_61_string = "d1q01MarkAboutJulia"; // 0x1282 PushS
	FindMark(var_45_object, var_61_string); // 0x1283 ObjFunc
	var_62_object = var_45_object; // 0x1285 Push
	if(var_62_object == 0) goto Label_4745; // 0x1286 JumpB
	Remove(); // 0x1287 ObjFunc
	
Label_4745:
	var_63_string = "d1q01MarkAboutLara"; // 0x1289 PushS
	FindMark(var_45_object, var_63_string); // 0x128a ObjFunc
	var_64_object = var_45_object; // 0x128c Push
	if(var_64_object == 0) goto Label_4752; // 0x128d JumpB
	Remove(); // 0x128e ObjFunc
	
Label_4752:
	var_65_string = "d1q01NotkinAboutRubin"; // 0x1290 PushS
	FindMark(var_45_object, var_65_string); // 0x1291 ObjFunc
	var_66_object = var_45_object; // 0x1293 Push
	if(var_66_object == 0) goto Label_4759; // 0x1294 JumpB
	Remove(); // 0x1295 ObjFunc
	
Label_4759:
	func_5570(); // 0x1298 Call
	var_92_bool = 0; var_93_int = 0; // 0x129a PushV
	var_93_int = 31; // 0x129b MovI
	func_5470(var_92_bool, var_93_int); // 0x129c Call
	var_100_bool = 0; var_101_int = 0; // 0x129e PushV
	var_101_int = 32; // 0x129f MovI
	func_5470(var_100_bool, var_101_int); // 0x12a0 Call
	var_102_bool = 0; var_103_int = 0; // 0x12a2 PushV
	var_103_int = 33; // 0x12a3 MovI
	func_5470(var_102_bool, var_103_int); // 0x12a4 Call
	var_104_bool = 0; var_105_int = 0; // 0x12a6 PushV
	var_105_int = 34; // 0x12a7 MovI
	func_5470(var_104_bool, var_105_int); // 0x12a8 Call
	return 4; // 0x12aa Return
}


func_5221(var_237_bool)
{
	var_239_int = 0; var_240_string = ""; // 0x1466 PushV
	var_240_string = "d3q01"; // 0x1467 MovS
	func_4613(var_239_int, var_240_string); // 0x1468 Call
	var_243_int = 4; // 0x146a PushI
	var_244_bool = var_239_int == var_243_int; // 0x146b Eq
	if(var_244_bool == 0) goto Label_5231; // 0x146c JumpB
	var_237_bool = 1; // 0x146d MovB
	return 0; // 0x146e Return
	
Label_5231:
	var_237_bool = 0; // 0x146f MovB
	return 0; // 0x1470 Return
}


func_3177(var_0_object, var_1_object, var_2_object, var_3_object, var_393_object, var_394_object)
{
	var_0_object = var_394_object; // 0xc6a TMov
	var_1_object = var_393_object; // 0xc6b TMov
	var_3_object = 0; // 0xc6c TMovB
	var_399_int = 1; // 0xc6d PushI
	if(var_399_int == 0) goto Label_3303; // 0xc6e JumpB
	var_400_bool = 0; // 0xc6f PushV
	var_400_bool = 0; // 0xc70 MovB
	var_401_bool = 0; var_402_object = Obj(); // 0xc71 PushV
	var_402_object = var_1_object; // 0xc72 MovT
	func_5221(var_402_object); // 0xc73 Call
	var_407_bool = var_401_bool == 0; // 0xc75 Not
	if(var_407_bool == 0) goto Label_3197; // 0xc76 JumpB
	var_408_bool = 0; var_409_object = Obj(); // 0xc77 PushV
	var_409_object = var_1_object; // 0xc78 MovT
	func_5257(var_409_object); // 0xc79 Call
	if(var_408_bool == 0) goto Label_3197; // 0xc7b JumpB
	var_400_bool = 1; // 0xc7c MovB
	
Label_3197:
	if(var_400_bool == 0) goto Label_3218; // 0xc7d JumpB
	var_414_object = Obj(); var_415_object = Obj(); // 0xc7e PushV
	var_414_object = var_1_object; // 0xc7f MovT
	var_415_object = var_0_object; // 0xc80 MovT
	func_5073(); // 0xc81 Call
	var_418_string = ""; // 0xc83 PushV
	var_418_string = "Neutral"; // 0xc84 MovS
	func_3333(var_394_object, var_418_string); // 0xc85 Call
	var_423_int = 9043; // 0xc87 PushI
	SetMessage(var_423_int); // 0xc88 TObjFunc
	ClearReplies(); // 0xc8a TObjFunc
	var_424_int = 9044; // 0xc8c PushI
	var_425_int = 9921; // 0xc8d PushI
	var_426_int = 9920; // 0xc8e PushI
	AddReply(var_424_int, var_425_int, var_426_int); // 0xc8f TObjFunc
	goto Label_3303; // 0xc91 Jump
	
Label_3303:
	var_427_bool = 0; // 0xce7 PushV
	func_4674(var_427_bool); // 0xce8 Call
	if(var_427_bool == 0) goto Label_3318; // 0xcea JumpB
	
Label_3307:
	lshWaitForAnimEnd(); // 0xceb Func
	var_428_object = var_3_object; // 0xced PushT
	if(var_428_object == 0) goto Label_3312; // 0xcee JumpB
	goto Label_3317; // 0xcef Jump
	
Label_3317:
	goto Label_3332; // 0xcf5 Jump
	
Label_3332:
	return 0; // 0xd04 Return
	
Label_3312:
	var_429_string = ""; // 0xcf0 PushV
	var_429_string = var_2_object; // 0xcf1 MovT
	func_4578(var_429_string); // 0xcf2 Call
	goto Label_3307; // 0xcf4 Jump
	
Label_3318:
	var_430_string = "all"; // 0xcf6 PushS
	var_431_string = "idle"; // 0xcf7 PushS
	PlayAnimation(var_430_string, var_431_string); // 0xcf8 Func
	
Label_3322:
	WaitForAnimEnd(); // 0xcfa Func
	var_432_object = var_3_object; // 0xcfc PushT
	if(var_432_object == 0) goto Label_3327; // 0xcfd JumpB
	goto Label_3332; // 0xcfe Jump
	
Label_3327:
	var_433_string = "all"; // 0xcff PushS
	var_434_string = "idle"; // 0xd00 PushS
	PlayAnimation(var_433_string, var_434_string); // 0xd01 Func
	goto Label_3322; // 0xd03 Jump
	
Label_3218:
	var_435_object = Obj(); var_436_object = Obj(); // 0xc92 PushV
	var_435_object = var_1_object; // 0xc93 MovT
	var_436_object = var_0_object; // 0xc94 MovT
	func_5073(); // 0xc95 Call
	var_437_string = ""; // 0xc97 PushV
	var_437_string = "Neutral"; // 0xc98 MovS
	func_3333(var_394_object, var_437_string); // 0xc99 Call
	var_438_int = 9024; // 0xc9b PushI
	SetMessage(var_438_int); // 0xc9c TObjFunc
	ClearReplies(); // 0xc9e TObjFunc
	var_439_bool = 0; // 0xca0 PushV
	var_439_bool = 0; // 0xca1 MovB
	var_440_bool = 0; var_441_object = Obj(); // 0xca2 PushV
	var_441_object = var_1_object; // 0xca3 MovT
	func_5185(var_441_object); // 0xca4 Call
	if(var_440_bool == 0) goto Label_3246; // 0xca6 JumpB
	var_446_bool = 0; var_447_object = Obj(); // 0xca7 PushV
	var_447_object = var_1_object; // 0xca8 MovT
	func_5221(var_447_object); // 0xca9 Call
	var_448_bool = var_446_bool == 0; // 0xcab Not
	if(var_448_bool == 0) goto Label_3246; // 0xcac JumpB
	var_439_bool = 1; // 0xcad MovB
	
Label_3246:
	if(var_439_bool == 0) goto Label_3252; // 0xcae JumpB
	var_449_int = 11376; // 0xcaf PushI
	var_450_int = 12576; // 0xcb0 PushI
	var_451_int = 12575; // 0xcb1 PushI
	AddReply(var_449_int, var_450_int, var_451_int); // 0xcb2 TObjFunc
	
Label_3252:
	var_452_bool = 0; // 0xcb4 PushV
	var_452_bool = 0; // 0xcb5 MovB
	var_453_bool = 0; var_454_object = Obj(); // 0xcb6 PushV
	var_454_object = var_1_object; // 0xcb7 MovT
	func_5221(var_454_object); // 0xcb8 Call
	if(var_453_bool == 0) goto Label_3265; // 0xcba JumpB
	var_455_bool = 0; var_456_object = Obj(); // 0xcbb PushV
	var_456_object = var_1_object; // 0xcbc MovT
	func_5233(var_456_object); // 0xcbd Call
	if(var_455_bool == 0) goto Label_3265; // 0xcbf JumpB
	var_452_bool = 1; // 0xcc0 MovB
	
Label_3265:
	if(var_452_bool == 0) goto Label_3271; // 0xcc1 JumpB
	var_461_int = 9042; // 0xcc2 PushI
	var_462_int = 9941; // 0xcc3 PushI
	var_463_int = 9918; // 0xcc4 PushI
	AddReply(var_461_int, var_462_int, var_463_int); // 0xcc5 TObjFunc
	
Label_3271:
	var_464_bool = 0; // 0xcc7 PushV
	var_464_bool = 0; // 0xcc8 MovB
	var_465_bool = 0; var_466_object = Obj(); // 0xcc9 PushV
	var_466_object = var_1_object; // 0xcca MovT
	func_5281(var_466_object); // 0xccb Call
	if(var_465_bool == 0) goto Label_3284; // 0xccd JumpB
	var_471_bool = 0; var_472_object = Obj(); // 0xcce PushV
	var_472_object = var_1_object; // 0xccf MovT
	func_5293(var_472_object); // 0xcd0 Call
	if(var_471_bool == 0) goto Label_3284; // 0xcd2 JumpB
	var_464_bool = 1; // 0xcd3 MovB
	
Label_3284:
	if(var_464_bool == 0) goto Label_3290; // 0xcd4 JumpB
	var_477_int = 10442; // 0xcd5 PushI
	var_478_int = 11512; // 0xcd6 PushI
	var_479_int = 11511; // 0xcd7 PushI
	AddReply(var_477_int, var_478_int, var_479_int); // 0xcd8 TObjFunc
	
Label_3290:
	var_480_int = 9041; // 0xcda PushI
	var_481_int = 9899; // 0xcdb PushI
	var_482_int = 9917; // 0xcdc PushI
	AddReply(var_480_int, var_481_int, var_482_int); // 0xcdd TObjFunc
	var_483_int = 11147; // 0xcdf PushI
	var_484_int = -1; // 0xce0 PushI
	var_485_int = 12337; // 0xce1 PushI
	AddReply(var_483_int, var_484_int, var_485_int); // 0xce2 TObjFunc
	goto Label_3303; // 0xce4 Jump
}


func_5487(var_46_object)
{
	var_47_object = Obj(); var_48_object = Obj(); var_49_object = Obj(); var_50_object = Obj(); // 0x156f PushV
	GetMainOutdoorScene(var_49_object); // 0x1570 Func
	var_51_bool = var_49_object == 0; // 0x1572 NullEq
	if(var_51_bool == 0) goto Label_5498; // 0x1573 JumpB
	var_52_string = "Can't find main outdoor scene"; // 0x1574 PushS
	Trace(var_52_string); // 0x1575 Func
	var_50_object = 0; // 0x1577 SetNull
	var_46_object = var_50_object; // 0x1578 Mov
	return 4; // 0x1579 Return
	
Label_5498:
	GetMap(var_50_object); // 0x157a ObjFunc
	var_46_object = var_50_object; // 0x157c Mov
	return 4; // 0x157d Return
}


func_112(var_0_object, var_1_object, var_2_object, var_3_object, var_508_object, var_509_object)
{
	var_0_object = var_509_object; // 0x71 TMov
	var_1_object = var_508_object; // 0x72 TMov
	var_3_object = 0; // 0x73 TMovB
	var_514_int = 1; // 0x74 PushI
	if(var_514_int == 0) goto Label_204; // 0x75 JumpB
	var_515_string = ""; // 0x76 PushV
	var_515_string = "Neutral"; // 0x77 MovS
	func_234(var_509_object, var_515_string); // 0x78 Call
	var_520_int = 12009; // 0x7a PushI
	SetMessage(var_520_int); // 0x7b TObjFunc
	ClearReplies(); // 0x7d TObjFunc
	var_521_bool = 0; // 0x7f PushV
	var_521_bool = 0; // 0x80 MovB
	var_522_bool = 0; var_523_object = Obj(); // 0x81 PushV
	var_523_object = var_1_object; // 0x82 MovT
	func_5377(var_523_object); // 0x83 Call
	if(var_522_bool == 0) goto Label_140; // 0x85 JumpB
	var_528_bool = 0; var_529_object = Obj(); // 0x86 PushV
	var_529_object = var_1_object; // 0x87 MovT
	func_5389(var_529_object); // 0x88 Call
	if(var_528_bool == 0) goto Label_140; // 0x8a JumpB
	var_521_bool = 1; // 0x8b MovB
	
Label_140:
	if(var_521_bool == 0) goto Label_146; // 0x8c JumpB
	var_534_int = 12010; // 0x8d PushI
	var_535_int = 13230; // 0x8e PushI
	var_536_int = 13228; // 0x8f PushI
	AddReply(var_534_int, var_535_int, var_536_int); // 0x90 TObjFunc
	
Label_146:
	var_537_bool = 0; // 0x92 PushV
	var_537_bool = 0; // 0x93 MovB
	var_538_bool = 0; // 0x94 PushV
	var_538_bool = 0; // 0x95 MovB
	var_539_bool = 0; // 0x96 PushV
	var_539_bool = 0; // 0x97 MovB
	var_540_bool = 0; var_541_object = Obj(); // 0x98 PushV
	var_541_object = var_1_object; // 0x99 MovT
	func_5317(var_541_object); // 0x9a Call
	var_546_bool = var_540_bool == 0; // 0x9c Not
	if(var_546_bool == 0) goto Label_165; // 0x9d JumpB
	var_547_bool = 0; var_548_object = Obj(); // 0x9e PushV
	var_548_object = var_1_object; // 0x9f MovT
	func_5329(var_548_object); // 0xa0 Call
	var_553_bool = var_547_bool == 0; // 0xa2 Not
	if(var_553_bool == 0) goto Label_165; // 0xa3 JumpB
	var_539_bool = 1; // 0xa4 MovB
	
Label_165:
	if(var_539_bool == 0) goto Label_173; // 0xa5 JumpB
	var_554_bool = 0; var_555_object = Obj(); // 0xa6 PushV
	var_555_object = var_1_object; // 0xa7 MovT
	func_5341(var_555_object); // 0xa8 Call
	var_560_bool = var_554_bool == 0; // 0xaa Not
	if(var_560_bool == 0) goto Label_173; // 0xab JumpB
	var_538_bool = 1; // 0xac MovB
	
Label_173:
	if(var_538_bool == 0) goto Label_180; // 0xad JumpB
	var_561_bool = 0; var_562_object = Obj(); // 0xae PushV
	var_562_object = var_1_object; // 0xaf MovT
	func_5353(var_562_object); // 0xb0 Call
	if(var_561_bool == 0) goto Label_180; // 0xb2 JumpB
	var_537_bool = 1; // 0xb3 MovB
	
Label_180:
	if(var_537_bool == 0) goto Label_186; // 0xb4 JumpB
	var_567_int = 12014; // 0xb5 PushI
	var_568_int = 13233; // 0xb6 PushI
	var_569_int = 13232; // 0xb7 PushI
	AddReply(var_567_int, var_568_int, var_569_int); // 0xb8 TObjFunc
	
Label_186:
	var_570_bool = 0; var_571_object = Obj(); // 0xba PushV
	var_571_object = var_1_object; // 0xbb MovT
	func_5365(var_571_object); // 0xbc Call
	if(var_570_bool == 0) goto Label_196; // 0xbe JumpB
	var_576_int = 12018; // 0xbf PushI
	var_577_int = 3560; // 0xc0 PushI
	var_578_int = 13236; // 0xc1 PushI
	AddReply(var_576_int, var_577_int, var_578_int); // 0xc2 TObjFunc
	
Label_196:
	var_579_int = 12011; // 0xc4 PushI
	var_580_int = -1; // 0xc5 PushI
	var_581_int = 13229; // 0xc6 PushI
	AddReply(var_579_int, var_580_int, var_581_int); // 0xc7 TObjFunc
	goto Label_204; // 0xc9 Jump
	
Label_204:
	var_582_bool = 0; // 0xcc PushV
	func_4674(var_582_bool); // 0xcd Call
	if(var_582_bool == 0) goto Label_219; // 0xcf JumpB
	
Label_208:
	lshWaitForAnimEnd(); // 0xd0 Func
	var_583_object = var_3_object; // 0xd2 PushT
	if(var_583_object == 0) goto Label_213; // 0xd3 JumpB
	goto Label_218; // 0xd4 Jump
	
Label_218:
	goto Label_233; // 0xda Jump
	
Label_233:
	return 0; // 0xe9 Return
	
Label_213:
	var_584_string = ""; // 0xd5 PushV
	var_584_string = var_2_object; // 0xd6 MovT
	func_4578(var_584_string); // 0xd7 Call
	goto Label_208; // 0xd9 Jump
	
Label_219:
	var_585_string = "all"; // 0xdb PushS
	var_586_string = "idle"; // 0xdc PushS
	PlayAnimation(var_585_string, var_586_string); // 0xdd Func
	
Label_223:
	WaitForAnimEnd(); // 0xdf Func
	var_587_object = var_3_object; // 0xe1 PushT
	if(var_587_object == 0) goto Label_228; // 0xe2 JumpB
	goto Label_233; // 0xe3 Jump
	
Label_228:
	var_588_string = "all"; // 0xe4 PushS
	var_589_string = "idle"; // 0xe5 PushS
	PlayAnimation(var_588_string, var_589_string); // 0xe6 Func
	goto Label_223; // 0xe8 Jump
}


func_625(var_0_object, var_1_object, var_2_object, var_3_object, var_109_object, var_110_object)
{
	var_0_object = var_110_object; // 0x272 TMov
	var_1_object = var_109_object; // 0x273 TMov
	var_3_object = 0; // 0x274 TMovB
	var_115_int = 1; // 0x275 PushI
	if(var_115_int == 0) goto Label_713; // 0x276 JumpB
	var_116_bool = 0; var_117_object = Obj(); // 0x277 PushV
	var_117_object = var_1_object; // 0x278 MovT
	func_5161(var_117_object); // 0x279 Call
	if(var_116_bool == 0) goto Label_671; // 0x27b JumpB
	var_122_object = Obj(); var_123_object = Obj(); // 0x27c PushV
	var_122_object = var_1_object; // 0x27d MovT
	var_123_object = var_0_object; // 0x27e MovT
	func_4787(); // 0x27f Call
	var_126_object = Obj(); var_127_object = Obj(); // 0x281 PushV
	var_126_object = var_1_object; // 0x282 MovT
	var_127_object = var_0_object; // 0x283 MovT
	func_5043(); // 0x284 Call
	var_130_string = ""; // 0x286 PushV
	var_130_string = "Neutral"; // 0x287 MovS
	func_743(var_110_object, var_130_string); // 0x288 Call
	var_145_int = 4780; // 0x28a PushI
	SetMessage(var_145_int); // 0x28b TObjFunc
	ClearReplies(); // 0x28d TObjFunc
	var_146_int = 4781; // 0x28f PushI
	var_147_int = 5240; // 0x290 PushI
	var_148_int = 5234; // 0x291 PushI
	AddReply(var_146_int, var_147_int, var_148_int); // 0x292 TObjFunc
	var_149_int = 4782; // 0x294 PushI
	var_150_int = 5240; // 0x295 PushI
	var_151_int = 5235; // 0x296 PushI
	AddReply(var_149_int, var_150_int, var_151_int); // 0x297 TObjFunc
	var_152_int = 4786; // 0x299 PushI
	var_153_int = 5240; // 0x29a PushI
	var_154_int = 5239; // 0x29b PushI
	AddReply(var_152_int, var_153_int, var_154_int); // 0x29c TObjFunc
	goto Label_713; // 0x29e Jump
	
Label_713:
	var_155_bool = 0; // 0x2c9 PushV
	func_4674(var_155_bool); // 0x2ca Call
	if(var_155_bool == 0) goto Label_728; // 0x2cc JumpB
	
Label_717:
	lshWaitForAnimEnd(); // 0x2cd Func
	var_156_object = var_3_object; // 0x2cf PushT
	if(var_156_object == 0) goto Label_722; // 0x2d0 JumpB
	goto Label_727; // 0x2d1 Jump
	
Label_727:
	goto Label_742; // 0x2d7 Jump
	
Label_742:
	return 0; // 0x2e6 Return
	
Label_722:
	var_157_string = ""; // 0x2d2 PushV
	var_157_string = var_2_object; // 0x2d3 MovT
	func_4578(var_157_string); // 0x2d4 Call
	goto Label_717; // 0x2d6 Jump
	
Label_728:
	var_158_string = "all"; // 0x2d8 PushS
	var_159_string = "idle"; // 0x2d9 PushS
	PlayAnimation(var_158_string, var_159_string); // 0x2da Func
	
Label_732:
	WaitForAnimEnd(); // 0x2dc Func
	var_160_object = var_3_object; // 0x2de PushT
	if(var_160_object == 0) goto Label_737; // 0x2df JumpB
	goto Label_742; // 0x2e0 Jump
	
Label_737:
	var_161_string = "all"; // 0x2e1 PushS
	var_162_string = "idle"; // 0x2e2 PushS
	PlayAnimation(var_161_string, var_162_string); // 0x2e3 Func
	goto Label_732; // 0x2e5 Jump
	
Label_671:
	var_163_bool = 0; var_164_object = Obj(); // 0x29f PushV
	var_164_object = var_1_object; // 0x2a0 MovT
	func_5103(var_163_bool, var_164_object); // 0x2a1 Call
	if(var_163_bool == 0) goto Label_711; // 0x2a3 JumpB
	var_167_object = Obj(); var_168_object = Obj(); // 0x2a4 PushV
	var_167_object = var_1_object; // 0x2a5 MovT
	var_168_object = var_0_object; // 0x2a6 MovT
	func_5043(); // 0x2a7 Call
	var_169_string = ""; // 0x2a9 PushV
	var_169_string = "Neutral"; // 0x2aa MovS
	func_743(var_110_object, var_169_string); // 0x2ab Call
	var_170_int = 4783; // 0x2ad PushI
	SetMessage(var_170_int); // 0x2ae TObjFunc
	ClearReplies(); // 0x2b0 TObjFunc
	var_171_int = 4784; // 0x2b2 PushI
	var_172_int = 5294; // 0x2b3 PushI
	var_173_int = 5237; // 0x2b4 PushI
	AddReply(var_171_int, var_172_int, var_173_int); // 0x2b5 TObjFunc
	var_174_int = 4830; // 0x2b7 PushI
	var_175_int = 5301; // 0x2b8 PushI
	var_176_int = 5297; // 0x2b9 PushI
	AddReply(var_174_int, var_175_int, var_176_int); // 0x2ba TObjFunc
	var_177_int = 4836; // 0x2bc PushI
	var_178_int = 5296; // 0x2bd PushI
	var_179_int = 5304; // 0x2be PushI
	AddReply(var_177_int, var_178_int, var_179_int); // 0x2bf TObjFunc
	var_180_int = 4845; // 0x2c1 PushI
	var_181_int = -1; // 0x2c2 PushI
	var_182_int = 5317; // 0x2c3 PushI
	AddReply(var_180_int, var_181_int, var_182_int); // 0x2c4 TObjFunc
	goto Label_713; // 0x2c6 Jump
	
Label_711:
	return 0; // 0x2c7 Return
}


func_2674(var_2_object, var_101_string)
{
	var_102_bool = 0; // 0xa73 PushV
	func_4674(var_102_bool); // 0xa74 Call
	var_103_bool = var_102_bool == 0; // 0xa76 Not
	if(var_103_bool == 0) goto Label_2681; // 0xa77 JumpB
	return 0; // 0xa78 Return
	
Label_2681:
	var_104_bool = var_101_string == var_2_object; // 0xa79 Eq
	if(var_104_bool == 0) goto Label_2684; // 0xa7a JumpB
	return 0; // 0xa7b Return
	
Label_2684:
	var_105_string = ""; // 0xa7c PushV
	var_105_string = var_101_string; // 0xa7d Mov
	func_4578(var_105_string); // 0xa7e Call
	var_2_object = var_101_string; // 0xa80 TMov
	return 0; // 0xa81 Return
}


func_5233(var_295_bool)
{
	var_297_int = 0; var_298_string = ""; // 0x1472 PushV
	var_298_string = "ood3Georg1"; // 0x1473 MovS
	func_4613(var_297_int, var_298_string); // 0x1474 Call
	var_299_int = 0; // 0x1476 PushI
	var_300_bool = var_297_int == var_299_int; // 0x1477 Eq
	if(var_300_bool == 0) goto Label_5243; // 0x1478 JumpB
	var_295_bool = 1; // 0x1479 MovB
	return 0; // 0x147a Return
	
Label_5243:
	var_295_bool = 0; // 0x147b MovB
	return 0; // 0x147c Return
}


func_4977(var_213_object)
{
	var_215_string = "money3000 is given"; // 0x1372 PushS
	Trace(var_215_string); // 0x1373 Func
	var_216_object = Obj(); var_217_string = ""; var_218_int = 0; // 0x1375 PushV
	var_216_object = var_213_object; // 0x1376 Mov
	var_217_string = "money"; // 0x1377 MovS
	var_218_int = 3000; // 0x1378 MovI
	func_4494(var_217_string, var_218_int); // 0x1379 Call
	return 0; // 0x137b Return
}


func_4988()
{
	var_154_bool = 0; var_155_string = ""; var_156_string = ""; // 0x137d PushV
	var_155_string = "quest_d3_02"; // 0x137e MovS
	var_156_string = "completed"; // 0x137f MovS
	func_4629(var_154_bool, var_155_string, var_156_string); // 0x1380 Call
	return 0; // 0x1382 Return
}


func_5245(var_247_bool)
{
	var_249_int = 0; var_250_string = ""; // 0x147e PushV
	var_250_string = "KnowRubin"; // 0x147f MovS
	func_4613(var_249_int, var_250_string); // 0x1480 Call
	var_251_int = 1; // 0x1482 PushI
	var_252_bool = var_249_int == var_251_int; // 0x1483 Eq
	if(var_252_bool == 0) goto Label_5255; // 0x1484 JumpB
	var_247_bool = 1; // 0x1485 MovB
	return 0; // 0x1486 Return
	
Label_5255:
	var_247_bool = 0; // 0x1487 MovB
	return 0; // 0x1488 Return
}


func_5504(var_114_object, var_115_string, var_116_float)
{
	var_118_cvector = CVector(0,0,0); var_119_cvector = CVector(0,0,0); var_120_object = Obj(); var_121_bool = 0; var_122_cvector = CVector(0,0,0); var_123_cvector = CVector(0,0,0); var_124_object = Obj(); var_125_bool = 0; // 0x1580 PushV
	GetMainOutdoorScene(var_124_object); // 0x1581 Func
	var_126_bool = var_124_object == 0; // 0x1583 NullEq
	if(var_126_bool == 0) goto Label_5513; // 0x1584 JumpB
	var_127_string = "Can't find main outdoor scene"; // 0x1585 PushS
	Trace(var_127_string); // 0x1586 Func
	return 8; // 0x1588 Return
	
Label_5513:
	GetLocator(var_115_string, var_125_bool, var_122_cvector, var_123_cvector); // 0x1589 ObjFunc
	var_128_bool = var_125_bool == 0; // 0x158b Not
	if(var_128_bool == 0) goto Label_5523; // 0x158c JumpB
	var_129_string = "Warning: outdoor scene locator "; // 0x158d PushS
	var_130_int = var_129_string + var_115_string; // 0x158e Add
	var_131_string = " doesnt exist"; // 0x158f PushS
	var_132_int = var_130_int + var_131_string; // 0x1590 Add
	Trace(var_132_int); // 0x1591 Func
	
Label_5523:
	GetMap(var_114_object); // 0x1593 ObjFunc
	var_133_bool = var_114_object == 0; // 0x1595 NullEq
	if(var_133_bool == 0) goto Label_5531; // 0x1596 JumpB
	var_134_string = "Can't find map"; // 0x1597 PushS
	Trace(var_134_string); // 0x1598 Func
	return 8; // 0x159a Return
	
Label_5531:
	var_135_float = GetByIndex(var_122_cvector, 0); // 0x159b PushE
	var_136_float = GetByIndex(var_122_cvector, 2); // 0x159c PushE
	SetMapParams(var_135_float, var_136_float, var_116_float); // 0x159d ObjFunc
	return 8; // 0x159f Return
}


func_4995()
{
	var_211_string = "ood3Georg3"; // 0x1384 PushS
	var_212_int = 1; // 0x1385 PushI
	SetVariable(var_211_string, var_212_int); // 0x1386 Func
	return 0; // 0x1388 Return
}


func_5257(var_246_bool)
{
	var_248_int = 0; var_249_string = ""; // 0x148a PushV
	var_249_string = "ood3Georg2"; // 0x148b MovS
	func_4613(var_248_int, var_249_string); // 0x148c Call
	var_250_int = 0; // 0x148e PushI
	var_251_bool = var_248_int == var_250_int; // 0x148f Eq
	if(var_251_bool == 0) goto Label_5267; // 0x1490 JumpB
	var_246_bool = 1; // 0x1491 MovB
	return 0; // 0x1492 Return
	
Label_5267:
	var_246_bool = 0; // 0x1493 MovB
	return 0; // 0x1494 Return
}


func_5001()
{
	var_38_string = "ood1Georg1"; // 0x138a PushS
	var_39_int = 1; // 0x138b PushI
	SetVariable(var_38_string, var_39_int); // 0x138c Func
	return 0; // 0x138e Return
}


func_4494(var_217_string, var_218_int)
{
	var_219_int = 0; var_220_int = 0; // 0x118e PushV
	GetProperty(var_217_string, var_220_int); // 0x118f ObjFunc
	var_221_int = var_220_int + var_218_int; // 0x1191 Add
	SetProperty(var_217_string, var_221_int); // 0x1192 ObjFunc
	return 2; // 0x1194 Return
}


func_5007()
{
	var_124_string = "ood1Georg2"; // 0x1390 PushS
	var_125_int = 1; // 0x1391 PushI
	SetVariable(var_124_string, var_125_int); // 0x1392 Func
	return 0; // 0x1394 Return
}


func_5269(var_336_bool)
{
	var_338_int = 0; var_339_string = ""; // 0x1496 PushV
	var_339_string = "d3RubinToldWhereIsSimon"; // 0x1497 MovS
	func_4613(var_338_int, var_339_string); // 0x1498 Call
	var_340_int = 1; // 0x149a PushI
	var_341_bool = var_338_int == var_340_int; // 0x149b Eq
	if(var_341_bool == 0) goto Label_5279; // 0x149c JumpB
	var_336_bool = 1; // 0x149d MovB
	return 0; // 0x149e Return
	
Label_5279:
	var_336_bool = 0; // 0x149f MovB
	return 0; // 0x14a0 Return
}


func_4501(var_31_bool)
{
	var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_bool = 0; var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_bool = 0; // 0x1195 PushV
	GetPosition(var_37_cvector); // 0x1196 ObjFunc
	GetPosition(var_38_cvector); // 0x1198 Func
	var_39_cvector = var_37_cvector - var_38_cvector; // 0x119a Sub2
	var_41_float = GetByIndex(var_39_cvector, 0); // 0x119b PushE
	var_42_float = GetByIndex(var_39_cvector, 2); // 0x119c PushE
	Rotate(var_41_float, var_42_float, var_40_bool); // 0x119d Func
	var_31_bool = var_40_bool; // 0x119f Mov
	return 8; // 0x11a0 Return
}


func_5013()
{
	var_159_string = "ood1Georg3"; // 0x1396 PushS
	var_160_int = 1; // 0x1397 PushI
	SetVariable(var_159_string, var_160_int); // 0x1398 Func
	return 0; // 0x139a Return
}


func_1431(var_0_object, var_1_object, var_2_object, var_3_object, var_203_object, var_204_object)
{
	var_0_object = var_204_object; // 0x598 TMov
	var_1_object = var_203_object; // 0x599 TMov
	var_3_object = 0; // 0x59a TMovB
	var_209_int = 1; // 0x59b PushI
	if(var_209_int == 0) goto Label_1527; // 0x59c JumpB
	var_210_bool = 0; // 0x59d PushV
	var_210_bool = 0; // 0x59e MovB
	var_211_bool = 0; var_212_object = Obj(); // 0x59f PushV
	var_212_object = var_1_object; // 0x5a0 MovT
	func_5173(var_212_object); // 0x5a1 Call
	if(var_211_bool == 0) goto Label_1450; // 0x5a3 JumpB
	var_217_bool = 0; var_218_object = Obj(); // 0x5a4 PushV
	var_218_object = var_1_object; // 0x5a5 MovT
	func_5305(var_218_object); // 0x5a6 Call
	if(var_217_bool == 0) goto Label_1450; // 0x5a8 JumpB
	var_210_bool = 1; // 0x5a9 MovB
	
Label_1450:
	if(var_210_bool == 0) goto Label_1471; // 0x5aa JumpB
	var_223_string = ""; // 0x5ab PushV
	var_223_string = "Neutral"; // 0x5ac MovS
	func_1557(var_204_object, var_223_string); // 0x5ad Call
	var_228_int = 4850; // 0x5af PushI
	SetMessage(var_228_int); // 0x5b0 TObjFunc
	ClearReplies(); // 0x5b2 TObjFunc
	var_229_int = 4879; // 0x5b4 PushI
	var_230_int = 5370; // 0x5b5 PushI
	var_231_int = 5353; // 0x5b6 PushI
	AddReply(var_229_int, var_230_int, var_231_int); // 0x5b7 TObjFunc
	var_232_int = 4890; // 0x5b9 PushI
	var_233_int = 5354; // 0x5ba PushI
	var_234_int = 5367; // 0x5bb PushI
	AddReply(var_232_int, var_233_int, var_234_int); // 0x5bc TObjFunc
	goto Label_1527; // 0x5be Jump
	
Label_1527:
	var_235_bool = 0; // 0x5f7 PushV
	func_4674(var_235_bool); // 0x5f8 Call
	if(var_235_bool == 0) goto Label_1542; // 0x5fa JumpB
	
Label_1531:
	lshWaitForAnimEnd(); // 0x5fb Func
	var_236_object = var_3_object; // 0x5fd PushT
	if(var_236_object == 0) goto Label_1536; // 0x5fe JumpB
	goto Label_1541; // 0x5ff Jump
	
Label_1541:
	goto Label_1556; // 0x605 Jump
	
Label_1556:
	return 0; // 0x614 Return
	
Label_1536:
	var_237_string = ""; // 0x600 PushV
	var_237_string = var_2_object; // 0x601 MovT
	func_4578(var_237_string); // 0x602 Call
	goto Label_1531; // 0x604 Jump
	
Label_1542:
	var_238_string = "all"; // 0x606 PushS
	var_239_string = "idle"; // 0x607 PushS
	PlayAnimation(var_238_string, var_239_string); // 0x608 Func
	
Label_1546:
	WaitForAnimEnd(); // 0x60a Func
	var_240_object = var_3_object; // 0x60c PushT
	if(var_240_object == 0) goto Label_1551; // 0x60d JumpB
	goto Label_1556; // 0x60e Jump
	
Label_1551:
	var_241_string = "all"; // 0x60f PushS
	var_242_string = "idle"; // 0x610 PushS
	PlayAnimation(var_241_string, var_242_string); // 0x611 Func
	goto Label_1546; // 0x613 Jump
	
Label_1471:
	var_243_string = ""; // 0x5bf PushV
	var_243_string = "Neutral"; // 0x5c0 MovS
	func_1557(var_204_object, var_243_string); // 0x5c1 Call
	var_244_int = 7627; // 0x5c3 PushI
	SetMessage(var_244_int); // 0x5c4 TObjFunc
	ClearReplies(); // 0x5c6 TObjFunc
	var_245_bool = 0; var_246_object = Obj(); // 0x5c8 PushV
	var_246_object = var_1_object; // 0x5c9 MovT
	func_5197(var_246_object); // 0x5ca Call
	if(var_245_bool == 0) goto Label_1490; // 0x5cc JumpB
	var_251_int = 7629; // 0x5cd PushI
	var_252_int = 5329; // 0x5ce PushI
	var_253_int = 8418; // 0x5cf PushI
	AddReply(var_251_int, var_252_int, var_253_int); // 0x5d0 TObjFunc
	
Label_1490:
	var_254_bool = 0; var_255_object = Obj(); // 0x5d2 PushV
	var_255_object = var_1_object; // 0x5d3 MovT
	func_5209(var_255_object); // 0x5d4 Call
	if(var_254_bool == 0) goto Label_1500; // 0x5d6 JumpB
	var_260_int = 7632; // 0x5d7 PushI
	var_261_int = 5334; // 0x5d8 PushI
	var_262_int = 8421; // 0x5d9 PushI
	AddReply(var_260_int, var_261_int, var_262_int); // 0x5da TObjFunc
	
Label_1500:
	var_263_bool = 0; // 0x5dc PushV
	var_263_bool = 0; // 0x5dd MovB
	var_264_bool = 0; var_265_object = Obj(); // 0x5de PushV
	var_265_object = var_1_object; // 0x5df MovT
	func_5245(var_265_object); // 0x5e0 Call
	if(var_264_bool == 0) goto Label_1513; // 0x5e2 JumpB
	var_270_bool = 0; var_271_object = Obj(); // 0x5e3 PushV
	var_271_object = var_1_object; // 0x5e4 MovT
	func_5149(var_271_object); // 0x5e5 Call
	if(var_270_bool == 0) goto Label_1513; // 0x5e7 JumpB
	var_263_bool = 1; // 0x5e8 MovB
	
Label_1513:
	if(var_263_bool == 0) goto Label_1519; // 0x5e9 JumpB
	var_276_int = 7630; // 0x5ea PushI
	var_277_int = 8420; // 0x5eb PushI
	var_278_int = 8419; // 0x5ec PushI
	AddReply(var_276_int, var_277_int, var_278_int); // 0x5ed TObjFunc
	
Label_1519:
	var_279_int = 7658; // 0x5ef PushI
	var_280_int = -1; // 0x5f0 PushI
	var_281_int = 8451; // 0x5f1 PushI
	AddReply(var_279_int, var_280_int, var_281_int); // 0x5f2 TObjFunc
	goto Label_1527; // 0x5f4 Jump
}


func_5019()
{
	var_296_string = "KnowRubin"; // 0x139c PushS
	var_297_int = 1; // 0x139d PushI
	SetVariable(var_296_string, var_297_int); // 0x139e Func
	return 0; // 0x13a0 Return
}


func_5281(var_305_bool)
{
	var_307_int = 0; var_308_string = ""; // 0x14a2 PushV
	var_308_string = "ood3Georg3"; // 0x14a3 MovS
	func_4613(var_307_int, var_308_string); // 0x14a4 Call
	var_309_int = 0; // 0x14a6 PushI
	var_310_bool = var_307_int == var_309_int; // 0x14a7 Eq
	if(var_310_bool == 0) goto Label_5291; // 0x14a8 JumpB
	var_305_bool = 1; // 0x14a9 MovB
	return 0; // 0x14aa Return
	
Label_5291:
	var_305_bool = 0; // 0x14ab MovB
	return 0; // 0x14ac Return
}


func_4513(var_31_bool)
{
	var_32_bool = 0; var_33_bool = 0; // 0x11a1 PushV
	IsLoaded(var_33_bool); // 0x11a2 Func
	var_31_bool = var_33_bool; // 0x11a4 Mov
	return 2; // 0x11a5 Return
}


func_5537(var_100_int)
{
	var_101_int = 0; var_102_int = 0; // 0x15a1 PushV
	var_103_string = "player"; // 0x15a2 PushS
	GetVariable(var_103_string, var_102_int); // 0x15a3 Func
	var_104_int = 0; // 0x15a5 PushI
	var_105_bool = var_102_int == var_104_int; // 0x15a6 Eq
	if(var_105_bool == 0) goto Label_5547; // 0x15a7 JumpB
	var_100_int = 200001; // 0x15a8 MovI
	return 2; // 0x15a9 Return
	
Label_5547:
	var_106_int = 1; // 0x15ab PushI
	var_107_bool = var_102_int == var_106_int; // 0x15ac Eq
	if(var_107_bool == 0) goto Label_5552; // 0x15ad JumpB
	var_100_int = 200002; // 0x15ae MovI
	return 2; // 0x15af Return
	
Label_5552:
	var_100_int = 200003; // 0x15b0 MovI
	return 2; // 0x15b1 Return
}


func_5025()
{
	var_450_string = "KnowSaburivClan"; // 0x13a2 PushS
	var_451_int = 1; // 0x13a3 PushI
	SetVariable(var_450_string, var_451_int); // 0x13a4 Func
	return 0; // 0x13a6 Return
}


func_4518(var_57_bool)
{
	var_59_float = 0; var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_bool = 0; var_67_float = 0; var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); var_74_bool = 0; // 0x11a6 PushV
	GetPosition(var_68_cvector); // 0x11a7 ObjFunc
	GetEyesHeight(var_67_float); // 0x11a9 ObjFunc
	var_75_float = GetByIndex(var_68_cvector, 1); // 0x11ab PushE
	var_75_float = var_75_float + var_67_float; // 0x11ac Add2
	SetByIndex(var_68_cvector, 1) = var_75_float; // 0x11ad PopE
	GetPosition(var_69_cvector); // 0x11ae Func
	GetEyesHeight(var_67_float); // 0x11b0 Func
	var_76_float = GetByIndex(var_69_cvector, 1); // 0x11b2 PushE
	var_76_float = var_76_float + var_67_float; // 0x11b3 Add2
	SetByIndex(var_69_cvector, 1) = var_76_float; // 0x11b4 PopE
	var_70_cvector = var_68_cvector - var_69_cvector; // 0x11b5 Sub2
	var_77_float = GetByIndex(var_70_cvector, 1); // 0x11b6 PushE
	var_77_float = 0; // 0x11b7 MovI
	SetByIndex(var_70_cvector, 1) = var_77_float; // 0x11b8 PopE
	var_78_int = var_70_cvector | var_70_cvector; // 0x11b9 Or
	var_79_float = sqrt(var_78_int); // 0x11ba Sqrt
	var_70_cvector = var_70_cvector / var_70_cvector; // 0x11bb Div2
	var_71_cvector = -var_70_cvector; // 0x11bc Neg2
	var_80_int = 70; // 0x11bd PushI
	var_81_float = var_70_cvector * var_80_int; // 0x11be Mult
	var_82_cvector = CVector(0,0,0); var_83_cvector = CVector(0,0,0); // 0x11bf PushV
	var_84_cvector = CVector(0.0, 1.0, 0.0); // 0x11c0 PushVec
	var_83_cvector = var_71_cvector ^ var_84_cvector; // 0x11c1 Xor2
	func_4603(var_82_cvector, var_83_cvector); // 0x11c2 Call
	var_90_int = 25; // 0x11c4 PushI
	var_91_float = var_82_cvector * var_90_int; // 0x11c5 Mult
	var_92_int = var_81_float + var_91_float; // 0x11c6 Add
	var_93_cvector = CVector(0.0, 10.0, 0.0); // 0x11c7 PushVec
	var_72_cvector = var_92_int - var_93_cvector; // 0x11c8 Sub2
	var_73_cvector = var_69_cvector + var_72_cvector; // 0x11c9 Add2
	IsOverrideActive(var_74_bool); // 0x11ca Func
	var_94_bool = var_74_bool; // 0x11cc Push
	if(var_94_bool == 0) goto Label_4560; // 0x11cd JumpB
	var_57_bool = 0; // 0x11ce MovB
	return 16; // 0x11cf Return
	
Label_4560:
	StopWorld(); // 0x11d0 Func
	CameraTransit(var_73_cvector, var_71_cvector); // 0x11d2 Func
	var_95_float = GetByIndex(var_72_cvector, 0); // 0x11d4 PushE
	var_96_float = GetByIndex(var_72_cvector, 2); // 0x11d5 PushE
	Rotate(var_95_float, var_96_float); // 0x11d6 Func
	CameraWaitForPlayFinish(); // 0x11d8 Func
	ResumeWorld(); // 0x11da Func
	var_57_bool = 1; // 0x11dc MovB
	return 16; // 0x11dd Return
}


func_5031()
{
	var_446_string = "KnowOlgimskiClan"; // 0x13a8 PushS
	var_447_int = 1; // 0x13a9 PushI
	SetVariable(var_446_string, var_447_int); // 0x13aa Func
	return 0; // 0x13ac Return
}


func_4781()
{
	var_112_string = "d1q01TeloNedostupno"; // 0x12ae PushS
	var_113_int = 1; // 0x12af PushI
	SetVariable(var_112_string, var_113_int); // 0x12b0 Func
	return 0; // 0x12b2 Return
}


func_5293(var_311_bool)
{
	var_313_int = 0; var_314_string = ""; // 0x14ae PushV
	var_314_string = "d3q02SeeCorpse"; // 0x14af MovS
	func_4613(var_313_int, var_314_string); // 0x14b0 Call
	var_315_int = 1; // 0x14b2 PushI
	var_316_bool = var_313_int == var_315_int; // 0x14b3 Eq
	if(var_316_bool == 0) goto Label_5303; // 0x14b4 JumpB
	var_311_bool = 1; // 0x14b5 MovB
	return 0; // 0x14b6 Return
	
Label_5303:
	var_311_bool = 0; // 0x14b7 MovB
	return 0; // 0x14b8 Return
}


func_5037()
{
	var_442_string = "KnowKainClan"; // 0x13ae PushS
	var_443_int = 1; // 0x13af PushI
	SetVariable(var_442_string, var_443_int); // 0x13b0 Func
	return 0; // 0x13b2 Return
}


func_5554()
{
	var_65_object = Obj(); var_66_object = Obj(); // 0x15b2 PushV
	var_67_string = "Adding diary entry"; // 0x15b3 PushS
	Trace(var_67_string); // 0x15b4 Func
	var_68_int = 2; // 0x15b6 PushI
	var_69_int = 1; // 0x15b7 PushI
	var_70_int = 3073; // 0x15b8 PushI
	CreateDiaryEntry(var_66_object, var_68_int, var_69_int, var_70_int); // 0x15b9 Func
	var_71_bool = 0; var_72_object = Obj(); var_73_int = 0; // 0x15bb PushV
	var_72_object = var_66_object; // 0x15bc Mov
	var_73_int = -1; // 0x15bd MovI
	func_5441(var_71_bool, var_72_object, var_73_int); // 0x15be Call
	return 2; // 0x15c0 Return
}


func_4787()
{
	var_130_string = "d1q01FirstGeorgVisit"; // 0x12b4 PushS
	var_131_int = 1; // 0x12b5 PushI
	SetVariable(var_130_string, var_131_int); // 0x12b6 Func
	return 0; // 0x12b8 Return
}


func_5043()
{
	var_134_string = "KnowGeorg"; // 0x13b4 PushS
	var_135_int = 1; // 0x13b5 PushI
	SetVariable(var_134_string, var_135_int); // 0x13b6 Func
	return 0; // 0x13b8 Return
}


func_5305(var_198_bool)
{
	var_200_int = 0; var_201_string = ""; // 0x14ba PushV
	var_201_string = "d1q01"; // 0x14bb MovS
	func_4613(var_200_int, var_201_string); // 0x14bc Call
	var_202_int = 2; // 0x14be PushI
	var_203_bool = var_200_int == var_202_int; // 0x14bf Eq
	if(var_203_bool == 0) goto Label_5315; // 0x14c0 JumpB
	var_198_bool = 1; // 0x14c1 MovB
	return 0; // 0x14c2 Return
	
Label_5315:
	var_198_bool = 0; // 0x14c3 MovB
	return 0; // 0x14c4 Return
}


func_4793()
{
	var_224_string = "playsound"; // 0x12ba PushS
	var_225_string = "givemoney"; // 0x12bb PushS
	TriggerWorld(var_224_string, var_225_string); // 0x12bc Func
	return 0; // 0x12be Return
}


func_4281(var_2_object, var_55_string)
{
	var_56_bool = 0; // 0x10ba PushV
	func_4674(var_56_bool); // 0x10bb Call
	var_57_bool = var_56_bool == 0; // 0x10bd Not
	if(var_57_bool == 0) goto Label_4288; // 0x10be JumpB
	return 0; // 0x10bf Return
	
Label_4288:
	var_58_bool = var_55_string == var_2_object; // 0x10c0 Eq
	if(var_58_bool == 0) goto Label_4291; // 0x10c1 JumpB
	return 0; // 0x10c2 Return
	
Label_4291:
	var_59_string = ""; // 0x10c3 PushV
	var_59_string = var_55_string; // 0x10c4 Mov
	func_4578(var_59_string); // 0x10c5 Call
	var_2_object = var_55_string; // 0x10c7 TMov
	return 0; // 0x10c8 Return
}


func_5049()
{
	var_44_string = "ood6Georg1"; // 0x13ba PushS
	var_45_int = 1; // 0x13bb PushI
	SetVariable(var_44_string, var_45_int); // 0x13bc Func
	return 0; // 0x13be Return
}


func_4799()
{
	var_38_string = "ood2Georg1"; // 0x12c0 PushS
	var_39_int = 1; // 0x12c1 PushI
	SetVariable(var_38_string, var_39_int); // 0x12c2 Func
	return 0; // 0x12c4 Return
}


func_5055()
{
	var_50_string = "ood6Georg2"; // 0x13c0 PushS
	var_51_int = 1; // 0x13c1 PushI
	SetVariable(var_50_string, var_51_int); // 0x13c2 Func
	return 0; // 0x13c4 Return
}


func_2495(var_0_object, var_286_int, var_287_object)
{
	var_289_object = Obj(); var_290_bool = 0; var_291_int = 0; var_292_bool = 0; var_293_object = Obj(); var_294_bool = 0; var_295_int = 0; var_296_bool = 0; // 0x9bf PushV
	var_0_object = var_287_object; // 0x9c0 TMov
	var_297_bool = 0; var_298_object = Obj(); // 0x9c1 PushV
	var_298_object = var_287_object; // 0x9c2 Mov
	func_4518(var_298_object); // 0x9c3 Call
	var_299_bool = var_297_bool == 0; // 0x9c5 Not
	if(var_299_bool == 0) goto Label_2505; // 0x9c6 JumpB
	var_286_int = -2; // 0x9c7 MovI
	return 8; // 0x9c8 Return
	
Label_2505:
	CreateDialog(var_293_object); // 0x9c9 Func
	var_300_int = 0; // 0x9cb PushV
	func_4670(var_300_int); // 0x9cc Call
	SetNPCName(var_300_int); // 0x9ce ObjFunc
	var_301_string = ""; // 0x9d0 PushV
	func_4672(var_301_string); // 0x9d1 Call
	SetPhoto(var_301_string); // 0x9d3 ObjFunc
	var_302_int = 0; // 0x9d5 PushV
	func_5537(var_302_int); // 0x9d6 Call
	SetPlayerName(var_302_int); // 0x9d8 ObjFunc
	var_295_int = -1; // 0x9da MovI
	IsOverrideActive(var_294_bool); // 0x9db Func
	var_303_bool = var_294_bool; // 0x9dd Push
	if(var_303_bool == 0) goto Label_2529; // 0x9de JumpB
	var_286_int = -2; // 0x9df MovI
	return 8; // 0x9e0 Return
	
Label_2529:
	DoDialog(var_293_object); // 0x9e1 Func
	var_304_object = Obj(); var_305_object = Obj(); // 0x9e3 PushV
	var_304_object = var_287_object; // 0x9e4 Mov
	var_305_object = var_293_object; // 0x9e5 Mov
	TaskCall(9); // 0x9e6 TaskCall
	func_2558(var_306_object, var_307_object, var_308_string, var_309_bool, var_304_object, var_305_object); // 0x9e7 Call
	TaskReturn(); // 0x9e8 TaskReturn
	IsDialogEnd(var_296_bool); // 0x9ea ObjFunc
	
Label_2540:
	var_371_bool = var_296_bool == 0; // 0x9ec Not
	if(var_371_bool == 0) goto Label_2547; // 0x9ed JumpB
	sync(); // 0x9ee Func
	IsDialogEnd(var_296_bool); // 0x9f0 ObjFunc
	goto Label_2540; // 0x9f2 Jump
	
Label_2547:
	var_372_object = Obj(); // 0x9f3 PushV
	var_372_object = var_287_object; // 0x9f4 Mov
	func_4574(); // 0x9f5 Call
	StopDialog(var_293_object); // 0x9f7 Func
	GetReturnValue(var_295_int); // 0x9f9 ObjFunc
	var_286_int = var_295_int; // 0x9fb Mov
	return 8; // 0x9fc Return
}


func_5570()
{
	var_67_object = Obj(); var_68_object = Obj(); // 0x15c2 PushV
	var_69_string = "Adding diary entry"; // 0x15c3 PushS
	Trace(var_69_string); // 0x15c4 Func
	var_70_int = 49; // 0x15c6 PushI
	var_71_int = 1; // 0x15c7 PushI
	var_72_int = 12131; // 0x15c8 PushI
	CreateDiaryEntry(var_68_object, var_70_int, var_71_int, var_72_int); // 0x15c9 Func
	var_73_bool = 0; var_74_object = Obj(); var_75_int = 0; // 0x15cb PushV
	var_74_object = var_68_object; // 0x15cc Mov
	var_75_int = 2; // 0x15cd MovI
	func_5441(var_73_bool, var_74_object, var_75_int); // 0x15ce Call
	return 2; // 0x15d0 Return
}


func_5317(var_91_bool)
{
	var_93_int = 0; var_94_string = ""; // 0x14c6 PushV
	var_94_string = "d6q01"; // 0x14c7 MovS
	func_4613(var_93_int, var_94_string); // 0x14c8 Call
	var_95_int = 0; // 0x14ca PushI
	var_96_bool = var_93_int == var_95_int; // 0x14cb Eq
	if(var_96_bool == 0) goto Label_5327; // 0x14cc JumpB
	var_91_bool = 1; // 0x14cd MovB
	return 0; // 0x14ce Return
	
Label_5327:
	var_91_bool = 0; // 0x14cf MovB
	return 0; // 0x14d0 Return
}


func_4805()
{
	var_66_string = "ood2Georg2"; // 0x12c6 PushS
	var_67_int = 1; // 0x12c7 PushI
	SetVariable(var_66_string, var_67_int); // 0x12c8 Func
	return 0; // 0x12ca Return
}


func_5061()
{
	var_38_string = "ood6Georg3"; // 0x13c6 PushS
	var_39_int = 1; // 0x13c7 PushI
	SetVariable(var_38_string, var_39_int); // 0x13c8 Func
	return 0; // 0x13ca Return
}


func_4811()
{
	var_42_string = "d2q01GeorgVisit"; // 0x12cc PushS
	var_43_int = 1; // 0x12cd PushI
	SetVariable(var_42_string, var_43_int); // 0x12ce Func
	return 0; // 0x12d0 Return
}


func_5067()
{
	var_53_string = "ood8Georg1"; // 0x13cc PushS
	var_54_int = 1; // 0x13cd PushI
	SetVariable(var_53_string, var_54_int); // 0x13ce Func
	return 0; // 0x13d0 Return
}


func_5329(var_98_bool)
{
	var_100_int = 0; var_101_string = ""; // 0x14d2 PushV
	var_101_string = "d6q01"; // 0x14d3 MovS
	func_4613(var_100_int, var_101_string); // 0x14d4 Call
	var_102_int = 1000; // 0x14d6 PushI
	var_103_bool = var_100_int == var_102_int; // 0x14d7 Eq
	if(var_103_bool == 0) goto Label_5339; // 0x14d8 JumpB
	var_98_bool = 1; // 0x14d9 MovB
	return 0; // 0x14da Return
	
Label_5339:
	var_98_bool = 0; // 0x14db MovB
	return 0; // 0x14dc Return
}


func_4817()
{
	var_177_string = "ood1Georg4"; // 0x12d2 PushS
	var_178_int = 1; // 0x12d3 PushI
	SetVariable(var_177_string, var_178_int); // 0x12d4 Func
	return 0; // 0x12d6 Return
}


func_5073()
{
	var_254_string = "d3GeorgVisit"; // 0x13d2 PushS
	var_255_int = 1; // 0x13d3 PushI
	SetVariable(var_254_string, var_255_int); // 0x13d4 Func
	return 0; // 0x13d6 Return
}


func_5586()
{
	var_70_object = Obj(); var_71_object = Obj(); // 0x15d2 PushV
	var_72_string = "Adding diary entry"; // 0x15d3 PushS
	Trace(var_72_string); // 0x15d4 Func
	var_73_int = 26; // 0x15d6 PushI
	var_74_int = 2; // 0x15d7 PushI
	var_75_int = 3366; // 0x15d8 PushI
	CreateDiaryEntry(var_71_object, var_73_int, var_74_int, var_75_int); // 0x15d9 Func
	var_76_bool = 0; var_77_object = Obj(); var_78_int = 0; // 0x15db PushV
	var_77_object = var_71_object; // 0x15dc Mov
	var_78_int = -1; // 0x15dd MovI
	func_5441(var_76_bool, var_77_object, var_78_int); // 0x15de Call
	return 2; // 0x15e0 Return
}


func_4823()
{
	var_263_string = "KnowGorny"; // 0x12d8 PushS
	var_264_int = 1; // 0x12d9 PushI
	SetVariable(var_263_string, var_264_int); // 0x12da Func
	return 0; // 0x12dc Return
}


func_5079(var_87_bool)
{
	var_89_int = 0; var_90_string = ""; // 0x13d8 PushV
	var_90_string = "ood2Georg1"; // 0x13d9 MovS
	func_4613(var_89_int, var_90_string); // 0x13da Call
	var_93_int = 0; // 0x13dc PushI
	var_94_bool = var_89_int == var_93_int; // 0x13dd Eq
	if(var_94_bool == 0) goto Label_5089; // 0x13de JumpB
	var_87_bool = 1; // 0x13df MovB
	return 0; // 0x13e0 Return
	
Label_5089:
	var_87_bool = 0; // 0x13e1 MovB
	return 0; // 0x13e2 Return
}


func_5341(var_105_bool)
{
	var_107_int = 0; var_108_string = ""; // 0x14de PushV
	var_108_string = "d6q01"; // 0x14df MovS
	func_4613(var_107_int, var_108_string); // 0x14e0 Call
	var_109_int = -1; // 0x14e2 PushI
	var_110_bool = var_107_int == var_109_int; // 0x14e3 Eq
	if(var_110_bool == 0) goto Label_5351; // 0x14e4 JumpB
	var_105_bool = 1; // 0x14e5 MovB
	return 0; // 0x14e6 Return
	
Label_5351:
	var_105_bool = 0; // 0x14e7 MovB
	return 0; // 0x14e8 Return
}


func_4829()
{
	var_128_object = Obj(); var_129_object = Obj(); // 0x12dd PushV
	var_130_object = Obj(); // 0x12de PushV
	func_5487(var_130_object); // 0x12df Call
	var_129_object = var_130_object; // 0x12e0 Mov
	var_131_string = "d1GeorgAboutAlexandr"; // 0x12e2 PushS
	var_132_string = "pt_map_alexandr"; // 0x12e3 PushS
	var_133_int = 3; // 0x12e4 PushI
	var_134_int = 8632; // 0x12e5 PushI
	var_135_float = 0; // 0x12e6 PushV
	func_4641(var_135_float); // 0x12e7 Call
	AddMark(var_131_string, var_132_string, var_133_int, var_134_int, var_135_float); // 0x12e9 ObjFunc
	var_138_string = "d1GeorgAboutBigVlad"; // 0x12eb PushS
	var_139_string = "pt_map_bigvlad"; // 0x12ec PushS
	var_140_int = 3; // 0x12ed PushI
	var_141_int = 8633; // 0x12ee PushI
	var_142_float = 0; // 0x12ef PushV
	func_4641(var_142_float); // 0x12f0 Call
	AddMark(var_138_string, var_139_string, var_140_int, var_141_int, var_142_float); // 0x12f2 ObjFunc
	return 2; // 0x12f4 Return
}


func_4574()
{
	CameraSwitchToNormal(); // 0x11df Func
	return 0; // 0x11e1 Return
}


func_4578(var_35_string)
{
	var_36_float = 0; var_37_float = 0; var_38_float = 0; var_39_float = 0; // 0x11e2 PushV
	var_40_string = "playing "; // 0x11e3 PushS
	var_41_int = var_40_string + var_35_string; // 0x11e4 Add
	Trace(var_41_int); // 0x11e5 Func
	lshGetAnimTimes(var_35_string, var_38_float, var_39_float); // 0x11e7 Func
	lshPlayAnimation(var_38_float, var_39_float); // 0x11e9 Func
	var_42_string = "start: "; // 0x11eb PushS
	var_43_int = var_42_string + var_38_float; // 0x11ec Add
	Trace(var_43_int); // 0x11ed Func
	var_44_string = "end: "; // 0x11ef PushS
	var_45_int = var_44_string + var_39_float; // 0x11f0 Add
	Trace(var_45_int); // 0x11f1 Func
	return 4; // 0x11f3 Return
}


func_5091(var_132_bool)
{
	var_134_int = 0; var_135_string = ""; // 0x13e4 PushV
	var_135_string = "ood2Georg2"; // 0x13e5 MovS
	func_4613(var_134_int, var_135_string); // 0x13e6 Call
	var_136_int = 0; // 0x13e8 PushI
	var_137_bool = var_134_int == var_136_int; // 0x13e9 Eq
	if(var_137_bool == 0) goto Label_5101; // 0x13ea JumpB
	var_132_bool = 1; // 0x13eb MovB
	return 0; // 0x13ec Return
	
Label_5101:
	var_132_bool = 0; // 0x13ed MovB
	return 0; // 0x13ee Return
}


func_5602()
{
	var_95_object = Obj(); var_96_object = Obj(); // 0x15e2 PushV
	var_97_string = "Adding diary entry"; // 0x15e3 PushS
	Trace(var_97_string); // 0x15e4 Func
	var_98_int = 76; // 0x15e6 PushI
	var_99_int = 2; // 0x15e7 PushI
	var_100_int = 12158; // 0x15e8 PushI
	CreateDiaryEntry(var_96_object, var_98_int, var_99_int, var_100_int); // 0x15e9 Func
	var_101_bool = 0; var_102_object = Obj(); var_103_int = 0; // 0x15eb PushV
	var_102_object = var_96_object; // 0x15ec Mov
	var_103_int = 26; // 0x15ed MovI
	func_5441(var_101_bool, var_102_object, var_103_int); // 0x15ee Call
	return 2; // 0x15f0 Return
}


func_743(var_2_object, var_136_string)
{
	var_137_bool = 0; // 0x2e8 PushV
	func_4674(var_137_bool); // 0x2e9 Call
	var_138_bool = var_137_bool == 0; // 0x2eb Not
	if(var_138_bool == 0) goto Label_750; // 0x2ec JumpB
	return 0; // 0x2ed Return
	
Label_750:
	var_139_bool = var_136_string == var_2_object; // 0x2ee Eq
	if(var_139_bool == 0) goto Label_753; // 0x2ef JumpB
	return 0; // 0x2f0 Return
	
Label_753:
	var_140_string = ""; // 0x2f1 PushV
	var_140_string = var_136_string; // 0x2f2 Mov
	func_4578(var_140_string); // 0x2f3 Call
	var_2_object = var_136_string; // 0x2f5 TMov
	return 0; // 0x2f6 Return
}


func_5353(var_112_bool)
{
	var_114_int = 0; var_115_string = ""; // 0x14ea PushV
	var_115_string = "ood6Georg1"; // 0x14eb MovS
	func_4613(var_114_int, var_115_string); // 0x14ec Call
	var_116_int = 0; // 0x14ee PushI
	var_117_bool = var_114_int == var_116_int; // 0x14ef Eq
	if(var_117_bool == 0) goto Label_5363; // 0x14f0 JumpB
	var_112_bool = 1; // 0x14f1 MovB
	return 0; // 0x14f2 Return
	
Label_5363:
	var_112_bool = 0; // 0x14f3 MovB
	return 0; // 0x14f4 Return
}


func_234(var_2_object, var_54_string)
{
	var_55_bool = 0; // 0xeb PushV
	func_4674(var_55_bool); // 0xec Call
	var_56_bool = var_55_bool == 0; // 0xee Not
	if(var_56_bool == 0) goto Label_241; // 0xef JumpB
	return 0; // 0xf0 Return
	
Label_241:
	var_57_bool = var_54_string == var_2_object; // 0xf1 Eq
	if(var_57_bool == 0) goto Label_244; // 0xf2 JumpB
	return 0; // 0xf3 Return
	
Label_244:
	var_58_string = ""; // 0xf4 PushV
	var_58_string = var_54_string; // 0xf5 Mov
	func_4578(var_58_string); // 0xf6 Call
	var_2_object = var_54_string; // 0xf8 TMov
	return 0; // 0xf9 Return
}


func_5103(var_161_bool, var_162_object)
{
	var_163_bool = 0; var_164_object = Obj(); // 0x13f0 PushV
	var_164_object = var_162_object; // 0x13f1 Mov
	func_5425(var_164_object); // 0x13f2 Call
	if(var_163_bool == 0) goto Label_5111; // 0x13f4 JumpB
	var_161_bool = 1; // 0x13f5 MovB
	return 0; // 0x13f6 Return
	
Label_5111:
	var_161_bool = 0; // 0x13f7 MovB
	return 0; // 0x13f8 Return
}


func_5618()
{
	var_30_bool = GlobalVars[1]; // 0x15f2 PushGE
	var_30_bool = 0; // 0x15f3 MovB
	GlobalVars[1] = var_30_bool; // 0x15f4 PopGE
	return 0; // 0x15f5 Return
}


func_4596()
{
	var_33_bool = 0; // 0x11f4 PushV
	func_4674(var_33_bool); // 0x11f5 Call
	if(var_33_bool == 0) goto Label_4602; // 0x11f7 JumpB
	lshStopSpeech(); // 0x11f8 Func
	
Label_4602:
	return 0; // 0x11fa Return
}


func_5365(var_121_bool)
{
	var_123_int = 0; var_124_string = ""; // 0x14f6 PushV
	var_124_string = "ood6Georg2"; // 0x14f7 MovS
	func_4613(var_123_int, var_124_string); // 0x14f8 Call
	var_125_int = 0; // 0x14fa PushI
	var_126_bool = var_123_int == var_125_int; // 0x14fb Eq
	if(var_126_bool == 0) goto Label_5375; // 0x14fc JumpB
	var_121_bool = 1; // 0x14fd MovB
	return 0; // 0x14fe Return
	
Label_5375:
	var_121_bool = 0; // 0x14ff MovB
	return 0; // 0x1500 Return
}


func_4854()
{
	var_145_string = "playsound"; // 0x12f7 PushS
	var_146_string = "mapmark"; // 0x12f8 PushS
	TriggerWorld(var_145_string, var_146_string); // 0x12f9 Func
	return 0; // 0x12fb Return
}


func_5622(var_31_object)
{
	var_32_bool = 0; var_33_int = 0; // 0x15f7 PushV
	var_33_int = 1; // 0x15f8 MovI
	func_4655(var_32_bool, var_33_int); // 0x15f9 Call
	if(var_32_bool == 0) goto Label_5649; // 0x15fb JumpB
	var_40_int = 0; var_41_string = ""; // 0x15fc PushV
	var_41_string = "d1q01"; // 0x15fd MovS
	func_4613(var_40_int, var_41_string); // 0x15fe Call
	var_44_int = 0; // 0x1600 PushI
	var_45_bool = var_40_int == var_44_int; // 0x1601 Eq
	if(var_45_bool == 0) goto Label_5642; // 0x1602 JumpB
	var_46_int = 0; var_47_object = Obj(); // 0x1603 PushV
	var_47_object = var_31_object; // 0x1604 Mov
	TaskCall(4); // 0x1605 TaskCall
	func_562(var_48_object, var_46_int, var_47_object); // 0x1606 Call
	TaskReturn(); // 0x1607 TaskReturn
	return 0; // 0x1609 Return
	
Label_5642:
	var_185_int = 0; var_186_object = Obj(); // 0x160a PushV
	var_186_object = var_31_object; // 0x160b Mov
	TaskCall(6); // 0x160c TaskCall
	func_1368(var_187_object, var_185_int, var_186_object); // 0x160d Call
	TaskReturn(); // 0x160e TaskReturn
	return 0; // 0x1610 Return
	
Label_5649:
	var_284_bool = 0; var_285_int = 0; // 0x1611 PushV
	var_285_int = 2; // 0x1612 MovI
	func_4655(var_284_bool, var_285_int); // 0x1613 Call
	if(var_284_bool == 0) goto Label_5661; // 0x1615 JumpB
	var_286_int = 0; var_287_object = Obj(); // 0x1616 PushV
	var_287_object = var_31_object; // 0x1617 Mov
	TaskCall(8); // 0x1618 TaskCall
	func_2495(var_288_object, var_286_int, var_287_object); // 0x1619 Call
	TaskReturn(); // 0x161a TaskReturn
	return 0; // 0x161c Return
	
Label_5661:
	var_373_bool = 0; var_374_int = 0; // 0x161d PushV
	var_374_int = 3; // 0x161e MovI
	func_4655(var_373_bool, var_374_int); // 0x161f Call
	if(var_373_bool == 0) goto Label_5673; // 0x1621 JumpB
	var_375_int = 0; var_376_object = Obj(); // 0x1622 PushV
	var_376_object = var_31_object; // 0x1623 Mov
	TaskCall(10); // 0x1624 TaskCall
	func_3114(var_377_object, var_375_int, var_376_object); // 0x1625 Call
	TaskReturn(); // 0x1626 TaskReturn
	return 0; // 0x1628 Return
	
Label_5673:
	var_488_bool = 0; var_489_int = 0; // 0x1629 PushV
	var_489_int = 6; // 0x162a MovI
	func_4655(var_488_bool, var_489_int); // 0x162b Call
	if(var_488_bool == 0) goto Label_5685; // 0x162d JumpB
	var_490_int = 0; var_491_object = Obj(); // 0x162e PushV
	var_491_object = var_31_object; // 0x162f Mov
	TaskCall(2); // 0x1630 TaskCall
	func_49(var_492_object, var_490_int, var_491_object); // 0x1631 Call
	TaskReturn(); // 0x1632 TaskReturn
	return 0; // 0x1634 Return
	
Label_5685:
	var_592_bool = 0; var_593_int = 0; // 0x1635 PushV
	var_593_int = 8; // 0x1636 MovI
	func_4655(var_592_bool, var_593_int); // 0x1637 Call
	if(var_592_bool == 0) goto Label_5697; // 0x1639 JumpB
	var_594_int = 0; var_595_object = Obj(); // 0x163a PushV
	var_595_object = var_31_object; // 0x163b Mov
	TaskCall(12); // 0x163c TaskCall
	func_4131(var_596_object, var_594_int, var_595_object); // 0x163d Call
	TaskReturn(); // 0x163e TaskReturn
	return 0; // 0x1640 Return
	
Label_5697:
	var_660_bool = 0; // 0x1641 PushV
	func_4661(var_660_bool); // 0x1642 Call
	return 0; // 0x1644 Return
}


func_5113(var_138_bool)
{
	var_140_int = 0; var_141_string = ""; // 0x13fa PushV
	var_141_string = "d2q01"; // 0x13fb MovS
	func_4613(var_140_int, var_141_string); // 0x13fc Call
	var_142_int = 0; // 0x13fe PushI
	var_143_bool = var_140_int == var_142_int; // 0x13ff Eq
	if(var_143_bool == 0) goto Label_5123; // 0x1400 JumpB
	var_138_bool = 1; // 0x1401 MovB
	return 0; // 0x1402 Return
	
Label_5123:
	var_138_bool = 0; // 0x1403 MovB
	return 0; // 0x1404 Return
}


func_4603(var_82_cvector, var_83_cvector)
{
	var_85_float = 0; var_86_float = 0; // 0x11fb PushV
	var_87_int = var_83_cvector | var_83_cvector; // 0x11fc Or
	var_86_float = sqrt(var_87_int); // 0x11fd Sqrt2
	var_88_float = 0.0; // 0x11fe PushF
	var_89_bool = var_86_float < var_88_float; // 0x11ff LT
	if(var_89_bool == 0) goto Label_4611; // 0x1200 JumpB
	var_82_cvector = CVector(0.0, 0.0, 0.0); // 0x1201 MovV
	return 2; // 0x1202 Return
	
Label_4611:
	var_82_cvector = var_83_cvector / var_83_cvector; // 0x1203 Div2
	return 2; // 0x1204 Return
}


func_4860()
{
	var_114_object = Obj(); var_115_string = ""; var_116_float = 0; // 0x12fd PushV
	var_117_object = Obj(); // 0x12fe PushV
	func_5487(var_117_object); // 0x12ff Call
	var_114_object = var_117_object; // 0x1300 Mov
	var_115_string = "pt_map_mishka"; // 0x1302 MovS
	var_116_float = 2; // 0x1303 MovI
	func_5504(var_114_object, var_115_string, var_116_float); // 0x1304 Call
	var_137_object = Obj(); // 0x1306 PushV
	func_5487(var_137_object); // 0x1307 Call
	ShowMap(var_137_object); // 0x1309 ObjFunc
	return 0; // 0x130b Return
}


func_2558(var_0_object, var_1_object, var_2_object, var_3_object, var_304_object, var_305_object)
{
	var_0_object = var_305_object; // 0x9ff TMov
	var_1_object = var_304_object; // 0xa00 TMov
	var_3_object = 0; // 0xa01 TMovB
	var_310_int = 1; // 0xa02 PushI
	if(var_310_int == 0) goto Label_2644; // 0xa03 JumpB
	var_311_bool = 0; // 0xa04 PushV
	var_311_bool = 0; // 0xa05 MovB
	var_312_bool = 0; var_313_object = Obj(); // 0xa06 PushV
	var_313_object = var_1_object; // 0xa07 MovT
	func_5079(var_313_object); // 0xa08 Call
	if(var_312_bool == 0) goto Label_2577; // 0xa0a JumpB
	var_318_bool = 0; var_319_object = Obj(); // 0xa0b PushV
	var_319_object = var_1_object; // 0xa0c MovT
	func_5125(var_319_object); // 0xa0d Call
	if(var_318_bool == 0) goto Label_2577; // 0xa0f JumpB
	var_311_bool = 1; // 0xa10 MovB
	
Label_2577:
	if(var_311_bool == 0) goto Label_2608; // 0xa11 JumpB
	var_324_string = ""; // 0xa12 PushV
	var_324_string = "Neutral"; // 0xa13 MovS
	func_2674(var_305_object, var_324_string); // 0xa14 Call
	var_329_int = 6829; // 0xa16 PushI
	SetMessage(var_329_int); // 0xa17 TObjFunc
	ClearReplies(); // 0xa19 TObjFunc
	var_330_int = 6830; // 0xa1b PushI
	var_331_int = 7531; // 0xa1c PushI
	var_332_int = 7530; // 0xa1d PushI
	AddReply(var_330_int, var_331_int, var_332_int); // 0xa1e TObjFunc
	var_333_int = 6844; // 0xa20 PushI
	var_334_int = 7547; // 0xa21 PushI
	var_335_int = 7546; // 0xa22 PushI
	AddReply(var_333_int, var_334_int, var_335_int); // 0xa23 TObjFunc
	var_336_int = 6848; // 0xa25 PushI
	var_337_int = 7547; // 0xa26 PushI
	var_338_int = 7552; // 0xa27 PushI
	AddReply(var_336_int, var_337_int, var_338_int); // 0xa28 TObjFunc
	var_339_int = 6849; // 0xa2a PushI
	var_340_int = 7535; // 0xa2b PushI
	var_341_int = 7554; // 0xa2c PushI
	AddReply(var_339_int, var_340_int, var_341_int); // 0xa2d TObjFunc
	goto Label_2644; // 0xa2f Jump
	
Label_2644:
	var_342_bool = 0; // 0xa54 PushV
	func_4674(var_342_bool); // 0xa55 Call
	if(var_342_bool == 0) goto Label_2659; // 0xa57 JumpB
	
Label_2648:
	lshWaitForAnimEnd(); // 0xa58 Func
	var_343_object = var_3_object; // 0xa5a PushT
	if(var_343_object == 0) goto Label_2653; // 0xa5b JumpB
	goto Label_2658; // 0xa5c Jump
	
Label_2658:
	goto Label_2673; // 0xa62 Jump
	
Label_2673:
	return 0; // 0xa71 Return
	
Label_2653:
	var_344_string = ""; // 0xa5d PushV
	var_344_string = var_2_object; // 0xa5e MovT
	func_4578(var_344_string); // 0xa5f Call
	goto Label_2648; // 0xa61 Jump
	
Label_2659:
	var_345_string = "all"; // 0xa63 PushS
	var_346_string = "idle"; // 0xa64 PushS
	PlayAnimation(var_345_string, var_346_string); // 0xa65 Func
	
Label_2663:
	WaitForAnimEnd(); // 0xa67 Func
	var_347_object = var_3_object; // 0xa69 PushT
	if(var_347_object == 0) goto Label_2668; // 0xa6a JumpB
	goto Label_2673; // 0xa6b Jump
	
Label_2668:
	var_348_string = "all"; // 0xa6c PushS
	var_349_string = "idle"; // 0xa6d PushS
	PlayAnimation(var_348_string, var_349_string); // 0xa6e Func
	goto Label_2663; // 0xa70 Jump
	
Label_2608:
	var_350_string = ""; // 0xa30 PushV
	var_350_string = "Neutral"; // 0xa31 MovS
	func_2674(var_305_object, var_350_string); // 0xa32 Call
	var_351_int = 6850; // 0xa34 PushI
	SetMessage(var_351_int); // 0xa35 TObjFunc
	ClearReplies(); // 0xa37 TObjFunc
	var_352_bool = 0; // 0xa39 PushV
	var_352_bool = 0; // 0xa3a MovB
	var_353_bool = 0; var_354_object = Obj(); // 0xa3b PushV
	var_354_object = var_1_object; // 0xa3c MovT
	func_5091(var_354_object); // 0xa3d Call
	if(var_353_bool == 0) goto Label_2630; // 0xa3f JumpB
	var_359_bool = 0; var_360_object = Obj(); // 0xa40 PushV
	var_360_object = var_1_object; // 0xa41 MovT
	func_5113(var_360_object); // 0xa42 Call
	if(var_359_bool == 0) goto Label_2630; // 0xa44 JumpB
	var_352_bool = 1; // 0xa45 MovB
	
Label_2630:
	if(var_352_bool == 0) goto Label_2636; // 0xa46 JumpB
	var_365_int = 6851; // 0xa47 PushI
	var_366_int = 7835; // 0xa48 PushI
	var_367_int = 7557; // 0xa49 PushI
	AddReply(var_365_int, var_366_int, var_367_int); // 0xa4a TObjFunc
	
Label_2636:
	var_368_int = 7536; // 0xa4c PushI
	var_369_int = -1; // 0xa4d PushI
	var_370_int = 8318; // 0xa4e PushI
	AddReply(var_368_int, var_369_int, var_370_int); // 0xa4f TObjFunc
	goto Label_2644; // 0xa51 Jump
}


