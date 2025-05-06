task_0_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool)
{
	StopGroup0(); // 0x3 Func
	return 0; // 0x5 Return
}


task_1_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool)
{
	TaskCall(0); // 0x1e TaskCall
	func_0(); // 0x1f Call
	TaskReturn(); // 0x20 TaskReturn
	return 0; // 0x22 Return
}


task_1_event_0(var_0_object, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool)
{
	var_41_object = Obj(); // 0x24 PushV
	var_41_object = var_40_bool; // 0x25 Mov
	func_7525(var_41_object); // 0x26 Call
	return 0; // 0x28 Return
}


task_1_event_10(var_0_object, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool)
{
	var_41_bool = 0; var_42_object = Obj(); // 0x2a PushV
	var_42_object = var_40_bool; // 0x2b Mov
	func_6100(var_42_object); // 0x2c Call
	WaitForAnimEnd(); // 0x2e Func
	return 0; // 0x30 Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool)
{
	var_42_int = 1; // 0xc0 PushI
	if(var_42_int == 0) goto Label_288; // 0xc1 JumpB
	func_6195(); // 0xc3 Call
	var_44_int = 1779; // 0xc5 PushI
	var_45_bool = var_40_string == var_44_int; // 0xc6 Eq
	if(var_45_bool == 0) goto Label_225; // 0xc7 JumpB
	var_46_object = Obj(); var_47_object = Obj(); // 0xc8 PushV
	var_46_object = var_1_object; // 0xc9 MovT
	var_47_object = var_0_object; // 0xca MovT
	func_6445(); // 0xcb Call
	var_50_string = ""; // 0xcd PushV
	var_50_string = "Neutral"; // 0xce MovS
	func_175(var_41_bool, var_50_string); // 0xcf Call
	var_65_int = 1575; // 0xd1 PushI
	SetMessage(var_65_int); // 0xd2 TObjFunc
	ClearReplies(); // 0xd4 TObjFunc
	var_66_int = 1576; // 0xd6 PushI
	var_67_int = 1782; // 0xd7 PushI
	var_68_int = 1780; // 0xd8 PushI
	AddReply(var_66_int, var_67_int, var_68_int); // 0xd9 TObjFunc
	var_69_int = 1577; // 0xdb PushI
	var_70_int = 1782; // 0xdc PushI
	var_71_int = 1781; // 0xdd PushI
	AddReply(var_69_int, var_70_int, var_71_int); // 0xde TObjFunc
	return 0; // 0xe0 Return
	
Label_225:
	var_72_int = 1782; // 0xe1 PushI
	var_73_bool = var_40_string == var_72_int; // 0xe2 Eq
	if(var_73_bool == 0) goto Label_253; // 0xe3 JumpB
	var_74_object = Obj(); var_75_object = Obj(); // 0xe4 PushV
	var_74_object = var_1_object; // 0xe5 MovT
	var_75_object = var_0_object; // 0xe6 MovT
	func_6683(); // 0xe7 Call
	var_78_string = ""; // 0xe9 PushV
	var_78_string = "Neutral"; // 0xea MovS
	func_175(var_41_bool, var_78_string); // 0xeb Call
	var_79_int = 1578; // 0xed PushI
	SetMessage(var_79_int); // 0xee TObjFunc
	ClearReplies(); // 0xf0 TObjFunc
	var_80_int = 1580; // 0xf2 PushI
	var_81_int = 1785; // 0xf3 PushI
	var_82_int = 1784; // 0xf4 PushI
	AddReply(var_80_int, var_81_int, var_82_int); // 0xf5 TObjFunc
	var_83_int = 1579; // 0xf7 PushI
	var_84_int = -1; // 0xf8 PushI
	var_85_int = 1783; // 0xf9 PushI
	AddReply(var_83_int, var_84_int, var_85_int); // 0xfa TObjFunc
	return 0; // 0xfc Return
	
Label_253:
	var_86_int = 1785; // 0xfd PushI
	var_87_bool = var_40_string == var_86_int; // 0xfe Eq
	if(var_87_bool == 0) goto Label_276; // 0xff JumpB
	var_88_string = ""; // 0x100 PushV
	var_88_string = "Neutral"; // 0x101 MovS
	func_175(var_41_bool, var_88_string); // 0x102 Call
	var_89_int = 1581; // 0x104 PushI
	SetMessage(var_89_int); // 0x105 TObjFunc
	ClearReplies(); // 0x107 TObjFunc
	var_90_int = 1582; // 0x109 PushI
	var_91_int = -1; // 0x10a PushI
	var_92_int = 1786; // 0x10b PushI
	AddReply(var_90_int, var_91_int, var_92_int); // 0x10c TObjFunc
	var_93_int = 1583; // 0x10e PushI
	var_94_int = -1; // 0x10f PushI
	var_95_int = 1787; // 0x110 PushI
	AddReply(var_93_int, var_94_int, var_95_int); // 0x111 TObjFunc
	return 0; // 0x113 Return
	
Label_276:
	var_3_string = 1; // 0x114 TMovB
	var_96_bool = 0; // 0x115 PushV
	func_6273(var_96_bool); // 0x116 Call
	if(var_96_bool == 0) goto Label_284; // 0x118 JumpB
	lshStopAnimation(); // 0x119 Func
	goto Label_286; // 0x11b Jump
	
Label_286:
	return 0; // 0x11e Return
	
Label_284:
	StopAnimation(); // 0x11c Func
	
Label_288:
	return 0; // 0x120 Return
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool)
{
	var_42_int = 1; // 0x1c4 PushI
	if(var_42_int == 0) goto Label_651; // 0x1c5 JumpB
	func_6195(); // 0x1c7 Call
	var_44_int = 13819; // 0x1c9 PushI
	var_45_bool = var_41_bool == var_44_int; // 0x1ca Eq
	if(var_45_bool == 0) goto Label_470; // 0x1cb JumpB
	var_46_object = Obj(); var_47_object = Obj(); // 0x1cc PushV
	var_46_object = var_1_object; // 0x1cd MovT
	var_47_object = var_0_object; // 0x1ce MovT
	func_6595(); // 0x1cf Call
	var_119_object = Obj(); var_120_object = Obj(); // 0x1d1 PushV
	var_119_object = var_1_object; // 0x1d2 MovT
	var_120_object = var_0_object; // 0x1d3 MovT
	func_6589(); // 0x1d4 Call
	
Label_470:
	var_123_int = 13848; // 0x1d6 PushI
	var_124_bool = var_41_bool == var_123_int; // 0x1d7 Eq
	if(var_124_bool == 0) goto Label_483; // 0x1d8 JumpB
	var_125_object = Obj(); var_126_object = Obj(); // 0x1d9 PushV
	var_125_object = var_1_object; // 0x1da MovT
	var_126_object = var_0_object; // 0x1db MovT
	func_6595(); // 0x1dc Call
	var_127_object = Obj(); var_128_object = Obj(); // 0x1de PushV
	var_127_object = var_1_object; // 0x1df MovT
	var_128_object = var_0_object; // 0x1e0 MovT
	func_6589(); // 0x1e1 Call
	
Label_483:
	var_129_int = 13254; // 0x1e3 PushI
	var_130_bool = var_40_string == var_129_int; // 0x1e4 Eq
	if(var_130_bool == 0) goto Label_531; // 0x1e5 JumpB
	var_131_bool = 0; var_132_object = Obj(); // 0x1e6 PushV
	var_132_object = var_1_object; // 0x1e7 MovT
	func_7100(var_132_object); // 0x1e8 Call
	if(var_131_bool == 0) goto Label_516; // 0x1ea JumpB
	var_139_object = Obj(); var_140_object = Obj(); // 0x1eb PushV
	var_139_object = var_1_object; // 0x1ec MovT
	var_140_object = var_0_object; // 0x1ed MovT
	func_6689(); // 0x1ee Call
	var_143_string = ""; // 0x1f0 PushV
	var_143_string = "Neutral"; // 0x1f1 MovS
	func_435(var_41_bool, var_143_string); // 0x1f2 Call
	var_158_int = 12036; // 0x1f4 PushI
	SetMessage(var_158_int); // 0x1f5 TObjFunc
	ClearReplies(); // 0x1f7 TObjFunc
	var_159_int = 12037; // 0x1f9 PushI
	var_160_int = 13256; // 0x1fa PushI
	var_161_int = 13255; // 0x1fb PushI
	AddReply(var_159_int, var_160_int, var_161_int); // 0x1fc TObjFunc
	var_162_int = 12640; // 0x1fe PushI
	var_163_int = 13821; // 0x1ff PushI
	var_164_int = 13820; // 0x200 PushI
	AddReply(var_162_int, var_163_int, var_164_int); // 0x201 TObjFunc
	return 0; // 0x203 Return
	
Label_516:
	var_165_string = ""; // 0x204 PushV
	var_165_string = "Neutral"; // 0x205 MovS
	func_435(var_41_bool, var_165_string); // 0x206 Call
	var_166_int = 13016; // 0x208 PushI
	SetMessage(var_166_int); // 0x209 TObjFunc
	ClearReplies(); // 0x20b TObjFunc
	var_167_int = 13017; // 0x20d PushI
	var_168_int = -1; // 0x20e PushI
	var_169_int = 14223; // 0x20f PushI
	AddReply(var_167_int, var_168_int, var_169_int); // 0x210 TObjFunc
	return 0; // 0x212 Return
	
Label_531:
	var_170_int = 13821; // 0x213 PushI
	var_171_bool = var_40_string == var_170_int; // 0x214 Eq
	if(var_171_bool == 0) goto Label_549; // 0x215 JumpB
	var_172_string = ""; // 0x216 PushV
	var_172_string = "Neutral"; // 0x217 MovS
	func_435(var_41_bool, var_172_string); // 0x218 Call
	var_173_int = 12641; // 0x21a PushI
	SetMessage(var_173_int); // 0x21b TObjFunc
	ClearReplies(); // 0x21d TObjFunc
	var_174_int = 12642; // 0x21f PushI
	var_175_int = 13823; // 0x220 PushI
	var_176_int = 13822; // 0x221 PushI
	AddReply(var_174_int, var_175_int, var_176_int); // 0x222 TObjFunc
	return 0; // 0x224 Return
	
Label_549:
	var_177_int = 13823; // 0x225 PushI
	var_178_bool = var_40_string == var_177_int; // 0x226 Eq
	if(var_178_bool == 0) goto Label_567; // 0x227 JumpB
	var_179_string = ""; // 0x228 PushV
	var_179_string = "Neutral"; // 0x229 MovS
	func_435(var_41_bool, var_179_string); // 0x22a Call
	var_180_int = 12643; // 0x22c PushI
	SetMessage(var_180_int); // 0x22d TObjFunc
	ClearReplies(); // 0x22f TObjFunc
	var_181_int = 12644; // 0x231 PushI
	var_182_int = 13825; // 0x232 PushI
	var_183_int = 13824; // 0x233 PushI
	AddReply(var_181_int, var_182_int, var_183_int); // 0x234 TObjFunc
	return 0; // 0x236 Return
	
Label_567:
	var_184_int = 13825; // 0x237 PushI
	var_185_bool = var_40_string == var_184_int; // 0x238 Eq
	if(var_185_bool == 0) goto Label_585; // 0x239 JumpB
	var_186_string = ""; // 0x23a PushV
	var_186_string = "Neutral"; // 0x23b MovS
	func_435(var_41_bool, var_186_string); // 0x23c Call
	var_187_int = 12645; // 0x23e PushI
	SetMessage(var_187_int); // 0x23f TObjFunc
	ClearReplies(); // 0x241 TObjFunc
	var_188_int = 12666; // 0x243 PushI
	var_189_int = -1; // 0x244 PushI
	var_190_int = 13848; // 0x245 PushI
	AddReply(var_188_int, var_189_int, var_190_int); // 0x246 TObjFunc
	return 0; // 0x248 Return
	
Label_585:
	var_191_int = 13256; // 0x249 PushI
	var_192_bool = var_40_string == var_191_int; // 0x24a Eq
	if(var_192_bool == 0) goto Label_603; // 0x24b JumpB
	var_193_string = ""; // 0x24c PushV
	var_193_string = "Neutral"; // 0x24d MovS
	func_435(var_41_bool, var_193_string); // 0x24e Call
	var_194_int = 12038; // 0x250 PushI
	SetMessage(var_194_int); // 0x251 TObjFunc
	ClearReplies(); // 0x253 TObjFunc
	var_195_int = 12635; // 0x255 PushI
	var_196_int = 13816; // 0x256 PushI
	var_197_int = 13815; // 0x257 PushI
	AddReply(var_195_int, var_196_int, var_197_int); // 0x258 TObjFunc
	return 0; // 0x25a Return
	
Label_603:
	var_198_int = 13816; // 0x25b PushI
	var_199_bool = var_40_string == var_198_int; // 0x25c Eq
	if(var_199_bool == 0) goto Label_621; // 0x25d JumpB
	var_200_string = ""; // 0x25e PushV
	var_200_string = "Neutral"; // 0x25f MovS
	func_435(var_41_bool, var_200_string); // 0x260 Call
	var_201_int = 12636; // 0x262 PushI
	SetMessage(var_201_int); // 0x263 TObjFunc
	ClearReplies(); // 0x265 TObjFunc
	var_202_int = 12637; // 0x267 PushI
	var_203_int = 13818; // 0x268 PushI
	var_204_int = 13817; // 0x269 PushI
	AddReply(var_202_int, var_203_int, var_204_int); // 0x26a TObjFunc
	return 0; // 0x26c Return
	
Label_621:
	var_205_int = 13818; // 0x26d PushI
	var_206_bool = var_40_string == var_205_int; // 0x26e Eq
	if(var_206_bool == 0) goto Label_639; // 0x26f JumpB
	var_207_string = ""; // 0x270 PushV
	var_207_string = "Neutral"; // 0x271 MovS
	func_435(var_41_bool, var_207_string); // 0x272 Call
	var_208_int = 12638; // 0x274 PushI
	SetMessage(var_208_int); // 0x275 TObjFunc
	ClearReplies(); // 0x277 TObjFunc
	var_209_int = 12639; // 0x279 PushI
	var_210_int = -1; // 0x27a PushI
	var_211_int = 13819; // 0x27b PushI
	AddReply(var_209_int, var_210_int, var_211_int); // 0x27c TObjFunc
	return 0; // 0x27e Return
	
Label_639:
	var_3_string = 1; // 0x27f TMovB
	var_212_bool = 0; // 0x280 PushV
	func_6273(var_212_bool); // 0x281 Call
	if(var_212_bool == 0) goto Label_647; // 0x283 JumpB
	lshStopAnimation(); // 0x284 Func
	goto Label_649; // 0x286 Jump
	
Label_649:
	return 0; // 0x289 Return
	
Label_647:
	StopAnimation(); // 0x287 Func
	
Label_651:
	return 0; // 0x28b Return
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool)
{
	var_42_int = 1; // 0x40c PushI
	if(var_42_int == 0) goto Label_3045; // 0x40d JumpB
	func_6195(); // 0x40f Call
	var_44_int = 5686; // 0x411 PushI
	var_45_bool = var_41_bool == var_44_int; // 0x412 Eq
	if(var_45_bool == 0) goto Label_1064; // 0x413 JumpB
	var_46_object = Obj(); var_47_object = Obj(); // 0x414 PushV
	var_46_object = var_1_object; // 0x415 MovT
	var_47_object = var_0_object; // 0x416 MovT
	func_6299(); // 0x417 Call
	var_81_object = Obj(); var_82_object = Obj(); // 0x419 PushV
	var_81_object = var_1_object; // 0x41a MovT
	var_82_object = var_0_object; // 0x41b MovT
	func_6275(); // 0x41c Call
	var_85_object = Obj(); var_86_object = Obj(); // 0x41e PushV
	var_85_object = var_1_object; // 0x41f MovT
	var_86_object = var_0_object; // 0x420 MovT
	func_6395(); // 0x421 Call
	var_103_object = Obj(); var_104_object = Obj(); // 0x423 PushV
	var_103_object = var_1_object; // 0x424 MovT
	var_104_object = var_0_object; // 0x425 MovT
	func_6411(); // 0x426 Call
	
Label_1064:
	var_129_int = 5685; // 0x428 PushI
	var_130_bool = var_41_bool == var_129_int; // 0x429 Eq
	if(var_130_bool == 0) goto Label_1072; // 0x42a JumpB
	var_131_object = Obj(); var_132_object = Obj(); // 0x42b PushV
	var_131_object = var_1_object; // 0x42c MovT
	var_132_object = var_0_object; // 0x42d MovT
	func_6275(); // 0x42e Call
	
Label_1072:
	var_133_int = 5689; // 0x430 PushI
	var_134_bool = var_41_bool == var_133_int; // 0x431 Eq
	if(var_134_bool == 0) goto Label_1090; // 0x432 JumpB
	var_135_object = Obj(); var_136_object = Obj(); // 0x433 PushV
	var_135_object = var_1_object; // 0x434 MovT
	var_136_object = var_0_object; // 0x435 MovT
	func_6299(); // 0x436 Call
	var_137_object = Obj(); var_138_object = Obj(); // 0x438 PushV
	var_137_object = var_1_object; // 0x439 MovT
	var_138_object = var_0_object; // 0x43a MovT
	func_6275(); // 0x43b Call
	var_139_object = Obj(); var_140_object = Obj(); // 0x43d PushV
	var_139_object = var_1_object; // 0x43e MovT
	var_140_object = var_0_object; // 0x43f MovT
	func_6395(); // 0x440 Call
	
Label_1090:
	var_141_int = 9297; // 0x442 PushI
	var_142_bool = var_41_bool == var_141_int; // 0x443 Eq
	if(var_142_bool == 0) goto Label_1108; // 0x444 JumpB
	var_143_object = Obj(); var_144_object = Obj(); // 0x445 PushV
	var_143_object = var_1_object; // 0x446 MovT
	var_144_object = var_0_object; // 0x447 MovT
	func_6357(); // 0x448 Call
	var_145_object = Obj(); var_146_object = Obj(); // 0x44a PushV
	var_145_object = var_1_object; // 0x44b MovT
	var_146_object = var_0_object; // 0x44c MovT
	func_6281(); // 0x44d Call
	var_149_object = Obj(); var_150_object = Obj(); // 0x44f PushV
	var_149_object = var_1_object; // 0x450 MovT
	var_150_object = var_0_object; // 0x451 MovT
	func_6505(); // 0x452 Call
	
Label_1108:
	var_160_int = 5621; // 0x454 PushI
	var_161_bool = var_41_bool == var_160_int; // 0x455 Eq
	if(var_161_bool == 0) goto Label_1116; // 0x456 JumpB
	var_162_object = Obj(); var_163_object = Obj(); // 0x457 PushV
	var_162_object = var_1_object; // 0x458 MovT
	var_163_object = var_0_object; // 0x459 MovT
	func_6299(); // 0x45a Call
	
Label_1116:
	var_164_int = 9316; // 0x45c PushI
	var_165_bool = var_41_bool == var_164_int; // 0x45d Eq
	if(var_165_bool == 0) goto Label_1139; // 0x45e JumpB
	var_166_object = Obj(); var_167_object = Obj(); // 0x45f PushV
	var_166_object = var_1_object; // 0x460 MovT
	var_167_object = var_0_object; // 0x461 MovT
	func_6293(); // 0x462 Call
	var_170_object = Obj(); var_171_object = Obj(); // 0x464 PushV
	var_170_object = var_1_object; // 0x465 MovT
	var_171_object = var_0_object; // 0x466 MovT
	func_6395(); // 0x467 Call
	var_172_object = Obj(); var_173_object = Obj(); // 0x469 PushV
	var_172_object = var_1_object; // 0x46a MovT
	var_173_object = var_0_object; // 0x46b MovT
	func_6299(); // 0x46c Call
	var_174_object = Obj(); var_175_object = Obj(); // 0x46e PushV
	var_174_object = var_1_object; // 0x46f MovT
	var_175_object = var_0_object; // 0x470 MovT
	func_6411(); // 0x471 Call
	
Label_1139:
	var_176_int = 5648; // 0x473 PushI
	var_177_bool = var_41_bool == var_176_int; // 0x474 Eq
	if(var_177_bool == 0) goto Label_1147; // 0x475 JumpB
	var_178_object = Obj(); var_179_object = Obj(); // 0x476 PushV
	var_178_object = var_1_object; // 0x477 MovT
	var_179_object = var_0_object; // 0x478 MovT
	func_6287(); // 0x479 Call
	
Label_1147:
	var_182_int = 5649; // 0x47b PushI
	var_183_bool = var_41_bool == var_182_int; // 0x47c Eq
	if(var_183_bool == 0) goto Label_1155; // 0x47d JumpB
	var_184_object = Obj(); var_185_object = Obj(); // 0x47e PushV
	var_184_object = var_1_object; // 0x47f MovT
	var_185_object = var_0_object; // 0x480 MovT
	func_6287(); // 0x481 Call
	
Label_1155:
	var_186_int = 5718; // 0x483 PushI
	var_187_bool = var_41_bool == var_186_int; // 0x484 Eq
	if(var_187_bool == 0) goto Label_1163; // 0x485 JumpB
	var_188_object = Obj(); var_189_object = Obj(); // 0x486 PushV
	var_188_object = var_1_object; // 0x487 MovT
	var_189_object = var_0_object; // 0x488 MovT
	func_6308(); // 0x489 Call
	
Label_1163:
	var_192_int = 5719; // 0x48b PushI
	var_193_bool = var_41_bool == var_192_int; // 0x48c Eq
	if(var_193_bool == 0) goto Label_1171; // 0x48d JumpB
	var_194_object = Obj(); var_195_object = Obj(); // 0x48e PushV
	var_194_object = var_1_object; // 0x48f MovT
	var_195_object = var_0_object; // 0x490 MovT
	func_6308(); // 0x491 Call
	
Label_1171:
	var_196_int = 5724; // 0x493 PushI
	var_197_bool = var_41_bool == var_196_int; // 0x494 Eq
	if(var_197_bool == 0) goto Label_1179; // 0x495 JumpB
	var_198_object = Obj(); var_199_object = Obj(); // 0x496 PushV
	var_198_object = var_1_object; // 0x497 MovT
	var_199_object = var_0_object; // 0x498 MovT
	func_6308(); // 0x499 Call
	
Label_1179:
	var_200_int = 5725; // 0x49b PushI
	var_201_bool = var_41_bool == var_200_int; // 0x49c Eq
	if(var_201_bool == 0) goto Label_1187; // 0x49d JumpB
	var_202_object = Obj(); var_203_object = Obj(); // 0x49e PushV
	var_202_object = var_1_object; // 0x49f MovT
	var_203_object = var_0_object; // 0x4a0 MovT
	func_6308(); // 0x4a1 Call
	
Label_1187:
	var_204_int = 5726; // 0x4a3 PushI
	var_205_bool = var_41_bool == var_204_int; // 0x4a4 Eq
	if(var_205_bool == 0) goto Label_1195; // 0x4a5 JumpB
	var_206_object = Obj(); var_207_object = Obj(); // 0x4a6 PushV
	var_206_object = var_1_object; // 0x4a7 MovT
	var_207_object = var_0_object; // 0x4a8 MovT
	func_6308(); // 0x4a9 Call
	
Label_1195:
	var_208_int = 9329; // 0x4ab PushI
	var_209_bool = var_41_bool == var_208_int; // 0x4ac Eq
	if(var_209_bool == 0) goto Label_1203; // 0x4ad JumpB
	var_210_object = Obj(); var_211_object = Obj(); // 0x4ae PushV
	var_210_object = var_1_object; // 0x4af MovT
	var_211_object = var_0_object; // 0x4b0 MovT
	func_6359(); // 0x4b1 Call
	
Label_1203:
	var_214_int = 9334; // 0x4b3 PushI
	var_215_bool = var_41_bool == var_214_int; // 0x4b4 Eq
	if(var_215_bool == 0) goto Label_1211; // 0x4b5 JumpB
	var_216_object = Obj(); var_217_object = Obj(); // 0x4b6 PushV
	var_216_object = var_1_object; // 0x4b7 MovT
	var_217_object = var_0_object; // 0x4b8 MovT
	func_6359(); // 0x4b9 Call
	
Label_1211:
	var_218_int = 9341; // 0x4bb PushI
	var_219_bool = var_41_bool == var_218_int; // 0x4bc Eq
	if(var_219_bool == 0) goto Label_1219; // 0x4bd JumpB
	var_220_object = Obj(); var_221_object = Obj(); // 0x4be PushV
	var_220_object = var_1_object; // 0x4bf MovT
	var_221_object = var_0_object; // 0x4c0 MovT
	func_6365(); // 0x4c1 Call
	
Label_1219:
	var_224_int = 9347; // 0x4c3 PushI
	var_225_bool = var_41_bool == var_224_int; // 0x4c4 Eq
	if(var_225_bool == 0) goto Label_1227; // 0x4c5 JumpB
	var_226_object = Obj(); var_227_object = Obj(); // 0x4c6 PushV
	var_226_object = var_1_object; // 0x4c7 MovT
	var_227_object = var_0_object; // 0x4c8 MovT
	func_6371(); // 0x4c9 Call
	
Label_1227:
	var_230_int = 9349; // 0x4cb PushI
	var_231_bool = var_41_bool == var_230_int; // 0x4cc Eq
	if(var_231_bool == 0) goto Label_1235; // 0x4cd JumpB
	var_232_object = Obj(); var_233_object = Obj(); // 0x4ce PushV
	var_232_object = var_1_object; // 0x4cf MovT
	var_233_object = var_0_object; // 0x4d0 MovT
	func_6371(); // 0x4d1 Call
	
Label_1235:
	var_234_int = 9354; // 0x4d3 PushI
	var_235_bool = var_41_bool == var_234_int; // 0x4d4 Eq
	if(var_235_bool == 0) goto Label_1243; // 0x4d5 JumpB
	var_236_object = Obj(); var_237_object = Obj(); // 0x4d6 PushV
	var_236_object = var_1_object; // 0x4d7 MovT
	var_237_object = var_0_object; // 0x4d8 MovT
	func_6377(); // 0x4d9 Call
	
Label_1243:
	var_240_int = 9357; // 0x4db PushI
	var_241_bool = var_41_bool == var_240_int; // 0x4dc Eq
	if(var_241_bool == 0) goto Label_1251; // 0x4dd JumpB
	var_242_object = Obj(); var_243_object = Obj(); // 0x4de PushV
	var_242_object = var_1_object; // 0x4df MovT
	var_243_object = var_0_object; // 0x4e0 MovT
	func_6377(); // 0x4e1 Call
	
Label_1251:
	var_244_int = 9360; // 0x4e3 PushI
	var_245_bool = var_41_bool == var_244_int; // 0x4e4 Eq
	if(var_245_bool == 0) goto Label_1259; // 0x4e5 JumpB
	var_246_object = Obj(); var_247_object = Obj(); // 0x4e6 PushV
	var_246_object = var_1_object; // 0x4e7 MovT
	var_247_object = var_0_object; // 0x4e8 MovT
	func_6383(); // 0x4e9 Call
	
Label_1259:
	var_250_int = 9361; // 0x4eb PushI
	var_251_bool = var_41_bool == var_250_int; // 0x4ec Eq
	if(var_251_bool == 0) goto Label_1267; // 0x4ed JumpB
	var_252_object = Obj(); var_253_object = Obj(); // 0x4ee PushV
	var_252_object = var_1_object; // 0x4ef MovT
	var_253_object = var_0_object; // 0x4f0 MovT
	func_6383(); // 0x4f1 Call
	
Label_1267:
	var_254_int = 5667; // 0x4f3 PushI
	var_255_bool = var_41_bool == var_254_int; // 0x4f4 Eq
	if(var_255_bool == 0) goto Label_1275; // 0x4f5 JumpB
	var_256_object = Obj(); var_257_object = Obj(); // 0x4f6 PushV
	var_256_object = var_1_object; // 0x4f7 MovT
	var_257_object = var_0_object; // 0x4f8 MovT
	func_6389(); // 0x4f9 Call
	
Label_1275:
	var_260_int = 5668; // 0x4fb PushI
	var_261_bool = var_41_bool == var_260_int; // 0x4fc Eq
	if(var_261_bool == 0) goto Label_1283; // 0x4fd JumpB
	var_262_object = Obj(); var_263_object = Obj(); // 0x4fe PushV
	var_262_object = var_1_object; // 0x4ff MovT
	var_263_object = var_0_object; // 0x500 MovT
	func_6389(); // 0x501 Call
	
Label_1283:
	var_264_int = 5671; // 0x503 PushI
	var_265_bool = var_41_bool == var_264_int; // 0x504 Eq
	if(var_265_bool == 0) goto Label_1291; // 0x505 JumpB
	var_266_object = Obj(); var_267_object = Obj(); // 0x506 PushV
	var_266_object = var_1_object; // 0x507 MovT
	var_267_object = var_0_object; // 0x508 MovT
	func_6389(); // 0x509 Call
	
Label_1291:
	var_268_int = 5624; // 0x50b PushI
	var_269_bool = var_40_string == var_268_int; // 0x50c Eq
	if(var_269_bool == 0) goto Label_1560; // 0x50d JumpB
	var_270_bool = 0; var_271_object = Obj(); // 0x50e PushV
	var_271_object = var_1_object; // 0x50f MovT
	func_6821(var_271_object); // 0x510 Call
	var_278_bool = var_270_bool == 0; // 0x512 Not
	if(var_278_bool == 0) goto Label_1325; // 0x513 JumpB
	var_279_string = ""; // 0x514 PushV
	var_279_string = "Neutral"; // 0x515 MovS
	func_1019(var_41_bool, var_279_string); // 0x516 Call
	var_294_int = 5111; // 0x518 PushI
	SetMessage(var_294_int); // 0x519 TObjFunc
	ClearReplies(); // 0x51b TObjFunc
	var_295_int = 5112; // 0x51d PushI
	var_296_int = 5626; // 0x51e PushI
	var_297_int = 5625; // 0x51f PushI
	AddReply(var_295_int, var_296_int, var_297_int); // 0x520 TObjFunc
	var_298_int = 5119; // 0x522 PushI
	var_299_int = 5626; // 0x523 PushI
	var_300_int = 5632; // 0x524 PushI
	AddReply(var_298_int, var_299_int, var_300_int); // 0x525 TObjFunc
	var_301_int = 5120; // 0x527 PushI
	var_302_int = -1; // 0x528 PushI
	var_303_int = 5634; // 0x529 PushI
	AddReply(var_301_int, var_302_int, var_303_int); // 0x52a TObjFunc
	return 0; // 0x52c Return
	
Label_1325:
	var_304_bool = 0; var_305_object = Obj(); // 0x52d PushV
	var_305_object = var_1_object; // 0x52e MovT
	func_6713(var_305_object); // 0x52f Call
	if(var_304_bool == 0) goto Label_1355; // 0x531 JumpB
	var_310_string = ""; // 0x532 PushV
	var_310_string = "Neutral"; // 0x533 MovS
	func_1019(var_41_bool, var_310_string); // 0x534 Call
	var_311_int = 5155; // 0x536 PushI
	SetMessage(var_311_int); // 0x537 TObjFunc
	ClearReplies(); // 0x539 TObjFunc
	var_312_int = 5156; // 0x53b PushI
	var_313_int = 5678; // 0x53c PushI
	var_314_int = 5677; // 0x53d PushI
	AddReply(var_312_int, var_313_int, var_314_int); // 0x53e TObjFunc
	var_315_int = 5183; // 0x540 PushI
	var_316_int = 5678; // 0x541 PushI
	var_317_int = 5707; // 0x542 PushI
	AddReply(var_315_int, var_316_int, var_317_int); // 0x543 TObjFunc
	var_318_int = 5184; // 0x545 PushI
	var_319_int = 5678; // 0x546 PushI
	var_320_int = 5709; // 0x547 PushI
	AddReply(var_318_int, var_319_int, var_320_int); // 0x548 TObjFunc
	return 0; // 0x54a Return
	
Label_1355:
	var_321_string = ""; // 0x54b PushV
	var_321_string = "Neutral"; // 0x54c MovS
	func_1019(var_41_bool, var_321_string); // 0x54d Call
	var_322_int = 5106; // 0x54f PushI
	SetMessage(var_322_int); // 0x550 TObjFunc
	ClearReplies(); // 0x552 TObjFunc
	var_323_bool = 0; // 0x554 PushV
	var_323_bool = 0; // 0x555 MovB
	var_324_bool = 0; var_325_object = Obj(); // 0x556 PushV
	var_325_object = var_1_object; // 0x557 MovT
	func_6725(var_325_object); // 0x558 Call
	if(var_324_bool == 0) goto Label_1377; // 0x55a JumpB
	var_330_bool = 0; var_331_object = Obj(); // 0x55b PushV
	var_331_object = var_1_object; // 0x55c MovT
	func_6821(var_331_object); // 0x55d Call
	if(var_330_bool == 0) goto Label_1377; // 0x55f JumpB
	var_323_bool = 1; // 0x560 MovB
	
Label_1377:
	if(var_323_bool == 0) goto Label_1383; // 0x561 JumpB
	var_332_int = 5107; // 0x562 PushI
	var_333_int = 9234; // 0x563 PushI
	var_334_int = 5620; // 0x564 PushI
	AddReply(var_332_int, var_333_int, var_334_int); // 0x565 TObjFunc
	
Label_1383:
	var_335_bool = 0; // 0x567 PushV
	var_335_bool = 0; // 0x568 MovB
	var_336_bool = 0; var_337_object = Obj(); // 0x569 PushV
	var_337_object = var_1_object; // 0x56a MovT
	func_6785(var_337_object); // 0x56b Call
	if(var_336_bool == 0) goto Label_1396; // 0x56d JumpB
	var_342_bool = 0; var_343_object = Obj(); // 0x56e PushV
	var_343_object = var_1_object; // 0x56f MovT
	func_6749(var_343_object); // 0x570 Call
	if(var_342_bool == 0) goto Label_1396; // 0x572 JumpB
	var_335_bool = 1; // 0x573 MovB
	
Label_1396:
	if(var_335_bool == 0) goto Label_1402; // 0x574 JumpB
	var_348_int = 5108; // 0x575 PushI
	var_349_int = 9315; // 0x576 PushI
	var_350_int = 5621; // 0x577 PushI
	AddReply(var_348_int, var_349_int, var_350_int); // 0x578 TObjFunc
	
Label_1402:
	var_351_bool = 0; // 0x57a PushV
	var_351_bool = 0; // 0x57b MovB
	var_352_bool = 0; var_353_object = Obj(); // 0x57c PushV
	var_353_object = var_1_object; // 0x57d MovT
	func_6881(var_353_object); // 0x57e Call
	if(var_352_bool == 0) goto Label_1415; // 0x580 JumpB
	var_354_bool = 0; var_355_object = Obj(); // 0x581 PushV
	var_355_object = var_1_object; // 0x582 MovT
	func_6737(var_355_object); // 0x583 Call
	if(var_354_bool == 0) goto Label_1415; // 0x585 JumpB
	var_351_bool = 1; // 0x586 MovB
	
Label_1415:
	if(var_351_bool == 0) goto Label_1421; // 0x587 JumpB
	var_360_int = 8455; // 0x588 PushI
	var_361_int = 5635; // 0x589 PushI
	var_362_int = 9290; // 0x58a PushI
	AddReply(var_360_int, var_361_int, var_362_int); // 0x58b TObjFunc
	
Label_1421:
	var_363_bool = 0; // 0x58d PushV
	var_363_bool = 0; // 0x58e MovB
	var_364_bool = 0; var_365_object = Obj(); // 0x58f PushV
	var_365_object = var_1_object; // 0x590 MovT
	func_6797(var_365_object); // 0x591 Call
	if(var_364_bool == 0) goto Label_1434; // 0x593 JumpB
	var_370_bool = 0; var_371_object = Obj(); // 0x594 PushV
	var_371_object = var_1_object; // 0x595 MovT
	func_6809(var_371_object); // 0x596 Call
	if(var_370_bool == 0) goto Label_1434; // 0x598 JumpB
	var_363_bool = 1; // 0x599 MovB
	
Label_1434:
	if(var_363_bool == 0) goto Label_1440; // 0x59a JumpB
	var_376_int = 5109; // 0x59b PushI
	var_377_int = 5711; // 0x59c PushI
	var_378_int = 5622; // 0x59d PushI
	AddReply(var_376_int, var_377_int, var_378_int); // 0x59e TObjFunc
	
Label_1440:
	var_379_bool = 0; // 0x5a0 PushV
	var_379_bool = 0; // 0x5a1 MovB
	var_380_bool = 0; var_381_object = Obj(); // 0x5a2 PushV
	var_381_object = var_1_object; // 0x5a3 MovT
	func_7172(var_381_object); // 0x5a4 Call
	if(var_380_bool == 0) goto Label_1453; // 0x5a6 JumpB
	var_386_bool = 0; var_387_object = Obj(); // 0x5a7 PushV
	var_387_object = var_1_object; // 0x5a8 MovT
	func_6886(var_387_object); // 0x5a9 Call
	if(var_386_bool == 0) goto Label_1453; // 0x5ab JumpB
	var_379_bool = 1; // 0x5ac MovB
	
Label_1453:
	if(var_379_bool == 0) goto Label_1459; // 0x5ad JumpB
	var_392_int = 8390; // 0x5ae PushI
	var_393_int = 9317; // 0x5af PushI
	var_394_int = 9213; // 0x5b0 PushI
	AddReply(var_392_int, var_393_int, var_394_int); // 0x5b1 TObjFunc
	
Label_1459:
	var_395_bool = 0; // 0x5b3 PushV
	var_395_bool = 0; // 0x5b4 MovB
	var_396_bool = 0; var_397_object = Obj(); // 0x5b5 PushV
	var_397_object = var_1_object; // 0x5b6 MovT
	func_7220(var_397_object); // 0x5b7 Call
	if(var_396_bool == 0) goto Label_1472; // 0x5b9 JumpB
	var_402_bool = 0; var_403_object = Obj(); // 0x5ba PushV
	var_403_object = var_1_object; // 0x5bb MovT
	func_6898(var_403_object); // 0x5bc Call
	if(var_402_bool == 0) goto Label_1472; // 0x5be JumpB
	var_395_bool = 1; // 0x5bf MovB
	
Label_1472:
	if(var_395_bool == 0) goto Label_1478; // 0x5c0 JumpB
	var_408_int = 8392; // 0x5c1 PushI
	var_409_int = 9247; // 0x5c2 PushI
	var_410_int = 9215; // 0x5c3 PushI
	AddReply(var_408_int, var_409_int, var_410_int); // 0x5c4 TObjFunc
	
Label_1478:
	var_411_bool = 0; // 0x5c6 PushV
	var_411_bool = 0; // 0x5c7 MovB
	var_412_bool = 0; var_413_object = Obj(); // 0x5c8 PushV
	var_413_object = var_1_object; // 0x5c9 MovT
	func_7112(var_413_object); // 0x5ca Call
	if(var_412_bool == 0) goto Label_1491; // 0x5cc JumpB
	var_418_bool = 0; var_419_object = Obj(); // 0x5cd PushV
	var_419_object = var_1_object; // 0x5ce MovT
	func_6910(var_419_object); // 0x5cf Call
	if(var_418_bool == 0) goto Label_1491; // 0x5d1 JumpB
	var_411_bool = 1; // 0x5d2 MovB
	
Label_1491:
	if(var_411_bool == 0) goto Label_1497; // 0x5d3 JumpB
	var_424_int = 8397; // 0x5d4 PushI
	var_425_int = 9248; // 0x5d5 PushI
	var_426_int = 9220; // 0x5d6 PushI
	AddReply(var_424_int, var_425_int, var_426_int); // 0x5d7 TObjFunc
	
Label_1497:
	var_427_bool = 0; // 0x5d9 PushV
	var_427_bool = 0; // 0x5da MovB
	var_428_bool = 0; var_429_object = Obj(); // 0x5db PushV
	var_429_object = var_1_object; // 0x5dc MovT
	func_7124(var_429_object); // 0x5dd Call
	if(var_428_bool == 0) goto Label_1510; // 0x5df JumpB
	var_434_bool = 0; var_435_object = Obj(); // 0x5e0 PushV
	var_435_object = var_1_object; // 0x5e1 MovT
	func_6922(var_435_object); // 0x5e2 Call
	if(var_434_bool == 0) goto Label_1510; // 0x5e4 JumpB
	var_427_bool = 1; // 0x5e5 MovB
	
Label_1510:
	if(var_427_bool == 0) goto Label_1516; // 0x5e6 JumpB
	var_440_int = 8399; // 0x5e7 PushI
	var_441_int = 9249; // 0x5e8 PushI
	var_442_int = 9222; // 0x5e9 PushI
	AddReply(var_440_int, var_441_int, var_442_int); // 0x5ea TObjFunc
	
Label_1516:
	var_443_bool = 0; // 0x5ec PushV
	var_443_bool = 0; // 0x5ed MovB
	var_444_bool = 0; var_445_object = Obj(); // 0x5ee PushV
	var_445_object = var_1_object; // 0x5ef MovT
	func_7244(var_445_object); // 0x5f0 Call
	if(var_444_bool == 0) goto Label_1529; // 0x5f2 JumpB
	var_450_bool = 0; var_451_object = Obj(); // 0x5f3 PushV
	var_451_object = var_1_object; // 0x5f4 MovT
	func_6934(var_451_object); // 0x5f5 Call
	if(var_450_bool == 0) goto Label_1529; // 0x5f7 JumpB
	var_443_bool = 1; // 0x5f8 MovB
	
Label_1529:
	if(var_443_bool == 0) goto Label_1535; // 0x5f9 JumpB
	var_456_int = 8404; // 0x5fa PushI
	var_457_int = 9358; // 0x5fb PushI
	var_458_int = 9227; // 0x5fc PushI
	AddReply(var_456_int, var_457_int, var_458_int); // 0x5fd TObjFunc
	
Label_1535:
	var_459_bool = 0; // 0x5ff PushV
	var_459_bool = 0; // 0x600 MovB
	var_460_bool = 0; var_461_object = Obj(); // 0x601 PushV
	var_461_object = var_1_object; // 0x602 MovT
	func_6773(var_461_object); // 0x603 Call
	if(var_460_bool == 0) goto Label_1548; // 0x605 JumpB
	var_466_bool = 0; var_467_object = Obj(); // 0x606 PushV
	var_467_object = var_1_object; // 0x607 MovT
	func_6946(var_467_object); // 0x608 Call
	if(var_466_bool == 0) goto Label_1548; // 0x60a JumpB
	var_459_bool = 1; // 0x60b MovB
	
Label_1548:
	if(var_459_bool == 0) goto Label_1554; // 0x60c JumpB
	var_472_int = 5142; // 0x60d PushI
	var_473_int = 5662; // 0x60e PushI
	var_474_int = 5661; // 0x60f PushI
	AddReply(var_472_int, var_473_int, var_474_int); // 0x610 TObjFunc
	
Label_1554:
	var_475_int = 5110; // 0x612 PushI
	var_476_int = -1; // 0x613 PushI
	var_477_int = 5623; // 0x614 PushI
	AddReply(var_475_int, var_476_int, var_477_int); // 0x615 TObjFunc
	return 0; // 0x617 Return
	
Label_1560:
	var_478_int = 5662; // 0x618 PushI
	var_479_bool = var_40_string == var_478_int; // 0x619 Eq
	if(var_479_bool == 0) goto Label_1583; // 0x61a JumpB
	var_480_string = ""; // 0x61b PushV
	var_480_string = "Neutral"; // 0x61c MovS
	func_1019(var_41_bool, var_480_string); // 0x61d Call
	var_481_int = 5143; // 0x61f PushI
	SetMessage(var_481_int); // 0x620 TObjFunc
	ClearReplies(); // 0x622 TObjFunc
	var_482_int = 5144; // 0x624 PushI
	var_483_int = 5664; // 0x625 PushI
	var_484_int = 5663; // 0x626 PushI
	AddReply(var_482_int, var_483_int, var_484_int); // 0x627 TObjFunc
	var_485_int = 5154; // 0x629 PushI
	var_486_int = 5664; // 0x62a PushI
	var_487_int = 5674; // 0x62b PushI
	AddReply(var_485_int, var_486_int, var_487_int); // 0x62c TObjFunc
	return 0; // 0x62e Return
	
Label_1583:
	var_488_int = 5664; // 0x62f PushI
	var_489_bool = var_40_string == var_488_int; // 0x630 Eq
	if(var_489_bool == 0) goto Label_1606; // 0x631 JumpB
	var_490_string = ""; // 0x632 PushV
	var_490_string = "Neutral"; // 0x633 MovS
	func_1019(var_41_bool, var_490_string); // 0x634 Call
	var_491_int = 5145; // 0x636 PushI
	SetMessage(var_491_int); // 0x637 TObjFunc
	ClearReplies(); // 0x639 TObjFunc
	var_492_int = 5146; // 0x63b PushI
	var_493_int = 5666; // 0x63c PushI
	var_494_int = 5665; // 0x63d PushI
	AddReply(var_492_int, var_493_int, var_494_int); // 0x63e TObjFunc
	var_495_int = 5153; // 0x640 PushI
	var_496_int = 5666; // 0x641 PushI
	var_497_int = 5672; // 0x642 PushI
	AddReply(var_495_int, var_496_int, var_497_int); // 0x643 TObjFunc
	return 0; // 0x645 Return
	
Label_1606:
	var_498_int = 5666; // 0x646 PushI
	var_499_bool = var_40_string == var_498_int; // 0x647 Eq
	if(var_499_bool == 0) goto Label_1634; // 0x648 JumpB
	var_500_string = ""; // 0x649 PushV
	var_500_string = "Neutral"; // 0x64a MovS
	func_1019(var_41_bool, var_500_string); // 0x64b Call
	var_501_int = 5147; // 0x64d PushI
	SetMessage(var_501_int); // 0x64e TObjFunc
	ClearReplies(); // 0x650 TObjFunc
	var_502_int = 5148; // 0x652 PushI
	var_503_int = -1; // 0x653 PushI
	var_504_int = 5667; // 0x654 PushI
	AddReply(var_502_int, var_503_int, var_504_int); // 0x655 TObjFunc
	var_505_int = 5149; // 0x657 PushI
	var_506_int = -1; // 0x658 PushI
	var_507_int = 5668; // 0x659 PushI
	AddReply(var_505_int, var_506_int, var_507_int); // 0x65a TObjFunc
	var_508_int = 5150; // 0x65c PushI
	var_509_int = 5670; // 0x65d PushI
	var_510_int = 5669; // 0x65e PushI
	AddReply(var_508_int, var_509_int, var_510_int); // 0x65f TObjFunc
	return 0; // 0x661 Return
	
Label_1634:
	var_511_int = 5670; // 0x662 PushI
	var_512_bool = var_40_string == var_511_int; // 0x663 Eq
	if(var_512_bool == 0) goto Label_1652; // 0x664 JumpB
	var_513_string = ""; // 0x665 PushV
	var_513_string = "Neutral"; // 0x666 MovS
	func_1019(var_41_bool, var_513_string); // 0x667 Call
	var_514_int = 5151; // 0x669 PushI
	SetMessage(var_514_int); // 0x66a TObjFunc
	ClearReplies(); // 0x66c TObjFunc
	var_515_int = 5152; // 0x66e PushI
	var_516_int = -1; // 0x66f PushI
	var_517_int = 5671; // 0x670 PushI
	AddReply(var_515_int, var_516_int, var_517_int); // 0x671 TObjFunc
	return 0; // 0x673 Return
	
Label_1652:
	var_518_int = 9358; // 0x674 PushI
	var_519_bool = var_40_string == var_518_int; // 0x675 Eq
	if(var_519_bool == 0) goto Label_1670; // 0x676 JumpB
	var_520_string = ""; // 0x677 PushV
	var_520_string = "Neutral"; // 0x678 MovS
	func_1019(var_41_bool, var_520_string); // 0x679 Call
	var_521_int = 8516; // 0x67b PushI
	SetMessage(var_521_int); // 0x67c TObjFunc
	ClearReplies(); // 0x67e TObjFunc
	var_522_int = 8517; // 0x680 PushI
	var_523_int = 9250; // 0x681 PushI
	var_524_int = 9359; // 0x682 PushI
	AddReply(var_522_int, var_523_int, var_524_int); // 0x683 TObjFunc
	return 0; // 0x685 Return
	
Label_1670:
	var_525_int = 9250; // 0x686 PushI
	var_526_bool = var_40_string == var_525_int; // 0x687 Eq
	if(var_526_bool == 0) goto Label_1693; // 0x688 JumpB
	var_527_string = ""; // 0x689 PushV
	var_527_string = "Neutral"; // 0x68a MovS
	func_1019(var_41_bool, var_527_string); // 0x68b Call
	var_528_int = 8427; // 0x68d PushI
	SetMessage(var_528_int); // 0x68e TObjFunc
	ClearReplies(); // 0x690 TObjFunc
	var_529_int = 8518; // 0x692 PushI
	var_530_int = -1; // 0x693 PushI
	var_531_int = 9360; // 0x694 PushI
	AddReply(var_529_int, var_530_int, var_531_int); // 0x695 TObjFunc
	var_532_int = 8519; // 0x697 PushI
	var_533_int = -1; // 0x698 PushI
	var_534_int = 9361; // 0x699 PushI
	AddReply(var_532_int, var_533_int, var_534_int); // 0x69a TObjFunc
	return 0; // 0x69c Return
	
Label_1693:
	var_535_int = 9249; // 0x69d PushI
	var_536_bool = var_40_string == var_535_int; // 0x69e Eq
	if(var_536_bool == 0) goto Label_1711; // 0x69f JumpB
	var_537_string = ""; // 0x6a0 PushV
	var_537_string = "Neutral"; // 0x6a1 MovS
	func_1019(var_41_bool, var_537_string); // 0x6a2 Call
	var_538_int = 8426; // 0x6a4 PushI
	SetMessage(var_538_int); // 0x6a5 TObjFunc
	ClearReplies(); // 0x6a7 TObjFunc
	var_539_int = 8508; // 0x6a9 PushI
	var_540_int = 9351; // 0x6aa PushI
	var_541_int = 9350; // 0x6ab PushI
	AddReply(var_539_int, var_540_int, var_541_int); // 0x6ac TObjFunc
	return 0; // 0x6ae Return
	
Label_1711:
	var_542_int = 9351; // 0x6af PushI
	var_543_bool = var_40_string == var_542_int; // 0x6b0 Eq
	if(var_543_bool == 0) goto Label_1745; // 0x6b1 JumpB
	var_544_object = Obj(); var_545_object = Obj(); // 0x6b2 PushV
	var_544_object = var_1_object; // 0x6b3 MovT
	var_545_object = var_0_object; // 0x6b4 MovT
	func_6642(); // 0x6b5 Call
	var_548_string = ""; // 0x6b7 PushV
	var_548_string = "Neutral"; // 0x6b8 MovS
	func_1019(var_41_bool, var_548_string); // 0x6b9 Call
	var_549_int = 8509; // 0x6bb PushI
	SetMessage(var_549_int); // 0x6bc TObjFunc
	ClearReplies(); // 0x6be TObjFunc
	var_550_int = 8510; // 0x6c0 PushI
	var_551_int = 9353; // 0x6c1 PushI
	var_552_int = 9352; // 0x6c2 PushI
	AddReply(var_550_int, var_551_int, var_552_int); // 0x6c3 TObjFunc
	var_553_bool = 0; var_554_object = Obj(); // 0x6c5 PushV
	var_554_object = var_1_object; // 0x6c6 MovT
	func_7256(var_554_object); // 0x6c7 Call
	var_559_bool = var_553_bool == 0; // 0x6c9 Not
	if(var_559_bool == 0) goto Label_1744; // 0x6ca JumpB
	var_560_int = 8513; // 0x6cb PushI
	var_561_int = 9356; // 0x6cc PushI
	var_562_int = 9355; // 0x6cd PushI
	AddReply(var_560_int, var_561_int, var_562_int); // 0x6ce TObjFunc
	
Label_1744:
	return 0; // 0x6d0 Return
	
Label_1745:
	var_563_int = 9356; // 0x6d1 PushI
	var_564_bool = var_40_string == var_563_int; // 0x6d2 Eq
	if(var_564_bool == 0) goto Label_1788; // 0x6d3 JumpB
	var_565_object = Obj(); var_566_object = Obj(); // 0x6d4 PushV
	var_565_object = var_1_object; // 0x6d5 MovT
	var_566_object = var_0_object; // 0x6d6 MovT
	func_6701(); // 0x6d7 Call
	var_569_object = Obj(); var_570_object = Obj(); // 0x6d9 PushV
	var_569_object = var_1_object; // 0x6da MovT
	var_570_object = var_0_object; // 0x6db MovT
	func_6433(); // 0x6dc Call
	var_573_object = Obj(); var_574_object = Obj(); // 0x6de PushV
	var_573_object = var_1_object; // 0x6df MovT
	var_574_object = var_0_object; // 0x6e0 MovT
	func_6427(); // 0x6e1 Call
	var_577_object = Obj(); var_578_object = Obj(); // 0x6e3 PushV
	var_577_object = var_1_object; // 0x6e4 MovT
	var_578_object = var_0_object; // 0x6e5 MovT
	func_6439(); // 0x6e6 Call
	var_581_object = Obj(); var_582_object = Obj(); // 0x6e8 PushV
	var_581_object = var_1_object; // 0x6e9 MovT
	var_582_object = var_0_object; // 0x6ea MovT
	func_6707(); // 0x6eb Call
	var_585_string = ""; // 0x6ed PushV
	var_585_string = "Neutral"; // 0x6ee MovS
	func_1019(var_41_bool, var_585_string); // 0x6ef Call
	var_586_int = 8514; // 0x6f1 PushI
	SetMessage(var_586_int); // 0x6f2 TObjFunc
	ClearReplies(); // 0x6f4 TObjFunc
	var_587_int = 8515; // 0x6f6 PushI
	var_588_int = -1; // 0x6f7 PushI
	var_589_int = 9357; // 0x6f8 PushI
	AddReply(var_587_int, var_588_int, var_589_int); // 0x6f9 TObjFunc
	return 0; // 0x6fb Return
	
Label_1788:
	var_590_int = 9353; // 0x6fc PushI
	var_591_bool = var_40_string == var_590_int; // 0x6fd Eq
	if(var_591_bool == 0) goto Label_1806; // 0x6fe JumpB
	var_592_string = ""; // 0x6ff PushV
	var_592_string = "Neutral"; // 0x700 MovS
	func_1019(var_41_bool, var_592_string); // 0x701 Call
	var_593_int = 8511; // 0x703 PushI
	SetMessage(var_593_int); // 0x704 TObjFunc
	ClearReplies(); // 0x706 TObjFunc
	var_594_int = 8512; // 0x708 PushI
	var_595_int = -1; // 0x709 PushI
	var_596_int = 9354; // 0x70a PushI
	AddReply(var_594_int, var_595_int, var_596_int); // 0x70b TObjFunc
	return 0; // 0x70d Return
	
Label_1806:
	var_597_int = 9248; // 0x70e PushI
	var_598_bool = var_40_string == var_597_int; // 0x70f Eq
	if(var_598_bool == 0) goto Label_1824; // 0x710 JumpB
	var_599_string = ""; // 0x711 PushV
	var_599_string = "Neutral"; // 0x712 MovS
	func_1019(var_41_bool, var_599_string); // 0x713 Call
	var_600_int = 8425; // 0x715 PushI
	SetMessage(var_600_int); // 0x716 TObjFunc
	ClearReplies(); // 0x718 TObjFunc
	var_601_int = 8500; // 0x71a PushI
	var_602_int = 9343; // 0x71b PushI
	var_603_int = 9342; // 0x71c PushI
	AddReply(var_601_int, var_602_int, var_603_int); // 0x71d TObjFunc
	return 0; // 0x71f Return
	
Label_1824:
	var_604_int = 9343; // 0x720 PushI
	var_605_bool = var_40_string == var_604_int; // 0x721 Eq
	if(var_605_bool == 0) goto Label_1847; // 0x722 JumpB
	var_606_string = ""; // 0x723 PushV
	var_606_string = "Neutral"; // 0x724 MovS
	func_1019(var_41_bool, var_606_string); // 0x725 Call
	var_607_int = 8501; // 0x727 PushI
	SetMessage(var_607_int); // 0x728 TObjFunc
	ClearReplies(); // 0x72a TObjFunc
	var_608_int = 8502; // 0x72c PushI
	var_609_int = 9345; // 0x72d PushI
	var_610_int = 9344; // 0x72e PushI
	AddReply(var_608_int, var_609_int, var_610_int); // 0x72f TObjFunc
	var_611_int = 8507; // 0x731 PushI
	var_612_int = -1; // 0x732 PushI
	var_613_int = 9349; // 0x733 PushI
	AddReply(var_611_int, var_612_int, var_613_int); // 0x734 TObjFunc
	return 0; // 0x736 Return
	
Label_1847:
	var_614_int = 9345; // 0x737 PushI
	var_615_bool = var_40_string == var_614_int; // 0x738 Eq
	if(var_615_bool == 0) goto Label_1865; // 0x739 JumpB
	var_616_string = ""; // 0x73a PushV
	var_616_string = "Neutral"; // 0x73b MovS
	func_1019(var_41_bool, var_616_string); // 0x73c Call
	var_617_int = 8503; // 0x73e PushI
	SetMessage(var_617_int); // 0x73f TObjFunc
	ClearReplies(); // 0x741 TObjFunc
	var_618_int = 8504; // 0x743 PushI
	var_619_int = 9348; // 0x744 PushI
	var_620_int = 9346; // 0x745 PushI
	AddReply(var_618_int, var_619_int, var_620_int); // 0x746 TObjFunc
	return 0; // 0x748 Return
	
Label_1865:
	var_621_int = 9348; // 0x749 PushI
	var_622_bool = var_40_string == var_621_int; // 0x74a Eq
	if(var_622_bool == 0) goto Label_1888; // 0x74b JumpB
	var_623_object = Obj(); var_624_object = Obj(); // 0x74c PushV
	var_623_object = var_1_object; // 0x74d MovT
	var_624_object = var_0_object; // 0x74e MovT
	func_6320(); // 0x74f Call
	var_627_string = ""; // 0x751 PushV
	var_627_string = "Neutral"; // 0x752 MovS
	func_1019(var_41_bool, var_627_string); // 0x753 Call
	var_628_int = 8506; // 0x755 PushI
	SetMessage(var_628_int); // 0x756 TObjFunc
	ClearReplies(); // 0x758 TObjFunc
	var_629_int = 8505; // 0x75a PushI
	var_630_int = -1; // 0x75b PushI
	var_631_int = 9347; // 0x75c PushI
	AddReply(var_629_int, var_630_int, var_631_int); // 0x75d TObjFunc
	return 0; // 0x75f Return
	
Label_1888:
	var_632_int = 9247; // 0x760 PushI
	var_633_bool = var_40_string == var_632_int; // 0x761 Eq
	if(var_633_bool == 0) goto Label_1906; // 0x762 JumpB
	var_634_string = ""; // 0x763 PushV
	var_634_string = "Neutral"; // 0x764 MovS
	func_1019(var_41_bool, var_634_string); // 0x765 Call
	var_635_int = 8424; // 0x767 PushI
	SetMessage(var_635_int); // 0x768 TObjFunc
	ClearReplies(); // 0x76a TObjFunc
	var_636_int = 8495; // 0x76c PushI
	var_637_int = 9338; // 0x76d PushI
	var_638_int = 9337; // 0x76e PushI
	AddReply(var_636_int, var_637_int, var_638_int); // 0x76f TObjFunc
	return 0; // 0x771 Return
	
Label_1906:
	var_639_int = 9338; // 0x772 PushI
	var_640_bool = var_40_string == var_639_int; // 0x773 Eq
	if(var_640_bool == 0) goto Label_1924; // 0x774 JumpB
	var_641_string = ""; // 0x775 PushV
	var_641_string = "Neutral"; // 0x776 MovS
	func_1019(var_41_bool, var_641_string); // 0x777 Call
	var_642_int = 8496; // 0x779 PushI
	SetMessage(var_642_int); // 0x77a TObjFunc
	ClearReplies(); // 0x77c TObjFunc
	var_643_int = 8497; // 0x77e PushI
	var_644_int = 9340; // 0x77f PushI
	var_645_int = 9339; // 0x780 PushI
	AddReply(var_643_int, var_644_int, var_645_int); // 0x781 TObjFunc
	return 0; // 0x783 Return
	
Label_1924:
	var_646_int = 9340; // 0x784 PushI
	var_647_bool = var_40_string == var_646_int; // 0x785 Eq
	if(var_647_bool == 0) goto Label_1942; // 0x786 JumpB
	var_648_string = ""; // 0x787 PushV
	var_648_string = "Neutral"; // 0x788 MovS
	func_1019(var_41_bool, var_648_string); // 0x789 Call
	var_649_int = 8498; // 0x78b PushI
	SetMessage(var_649_int); // 0x78c TObjFunc
	ClearReplies(); // 0x78e TObjFunc
	var_650_int = 8499; // 0x790 PushI
	var_651_int = -1; // 0x791 PushI
	var_652_int = 9341; // 0x792 PushI
	AddReply(var_650_int, var_651_int, var_652_int); // 0x793 TObjFunc
	return 0; // 0x795 Return
	
Label_1942:
	var_653_int = 9317; // 0x796 PushI
	var_654_bool = var_40_string == var_653_int; // 0x797 Eq
	if(var_654_bool == 0) goto Label_1965; // 0x798 JumpB
	var_655_string = ""; // 0x799 PushV
	var_655_string = "Neutral"; // 0x79a MovS
	func_1019(var_41_bool, var_655_string); // 0x79b Call
	var_656_int = 8477; // 0x79d PushI
	SetMessage(var_656_int); // 0x79e TObjFunc
	ClearReplies(); // 0x7a0 TObjFunc
	var_657_int = 8478; // 0x7a2 PushI
	var_658_int = 9246; // 0x7a3 PushI
	var_659_int = 9318; // 0x7a4 PushI
	AddReply(var_657_int, var_658_int, var_659_int); // 0x7a5 TObjFunc
	var_660_int = 8481; // 0x7a7 PushI
	var_661_int = 9322; // 0x7a8 PushI
	var_662_int = 9321; // 0x7a9 PushI
	AddReply(var_660_int, var_661_int, var_662_int); // 0x7aa TObjFunc
	return 0; // 0x7ac Return
	
Label_1965:
	var_663_int = 9322; // 0x7ad PushI
	var_664_bool = var_40_string == var_663_int; // 0x7ae Eq
	if(var_664_bool == 0) goto Label_1983; // 0x7af JumpB
	var_665_string = ""; // 0x7b0 PushV
	var_665_string = "Neutral"; // 0x7b1 MovS
	func_1019(var_41_bool, var_665_string); // 0x7b2 Call
	var_666_int = 8482; // 0x7b4 PushI
	SetMessage(var_666_int); // 0x7b5 TObjFunc
	ClearReplies(); // 0x7b7 TObjFunc
	var_667_int = 8483; // 0x7b9 PushI
	var_668_int = 9246; // 0x7ba PushI
	var_669_int = 9323; // 0x7bb PushI
	AddReply(var_667_int, var_668_int, var_669_int); // 0x7bc TObjFunc
	return 0; // 0x7be Return
	
Label_1983:
	var_670_int = 9246; // 0x7bf PushI
	var_671_bool = var_40_string == var_670_int; // 0x7c0 Eq
	if(var_671_bool == 0) goto Label_2006; // 0x7c1 JumpB
	var_672_string = ""; // 0x7c2 PushV
	var_672_string = "Neutral"; // 0x7c3 MovS
	func_1019(var_41_bool, var_672_string); // 0x7c4 Call
	var_673_int = 8423; // 0x7c6 PushI
	SetMessage(var_673_int); // 0x7c7 TObjFunc
	ClearReplies(); // 0x7c9 TObjFunc
	var_674_int = 8479; // 0x7cb PushI
	var_675_int = 9320; // 0x7cc PushI
	var_676_int = 9319; // 0x7cd PushI
	AddReply(var_674_int, var_675_int, var_676_int); // 0x7ce TObjFunc
	var_677_int = 8494; // 0x7d0 PushI
	var_678_int = 9331; // 0x7d1 PushI
	var_679_int = 9335; // 0x7d2 PushI
	AddReply(var_677_int, var_678_int, var_679_int); // 0x7d3 TObjFunc
	return 0; // 0x7d5 Return
	
Label_2006:
	var_680_int = 9320; // 0x7d6 PushI
	var_681_bool = var_40_string == var_680_int; // 0x7d7 Eq
	if(var_681_bool == 0) goto Label_2024; // 0x7d8 JumpB
	var_682_string = ""; // 0x7d9 PushV
	var_682_string = "Neutral"; // 0x7da MovS
	func_1019(var_41_bool, var_682_string); // 0x7db Call
	var_683_int = 8480; // 0x7dd PushI
	SetMessage(var_683_int); // 0x7de TObjFunc
	ClearReplies(); // 0x7e0 TObjFunc
	var_684_int = 8484; // 0x7e2 PushI
	var_685_int = 9326; // 0x7e3 PushI
	var_686_int = 9325; // 0x7e4 PushI
	AddReply(var_684_int, var_685_int, var_686_int); // 0x7e5 TObjFunc
	return 0; // 0x7e7 Return
	
Label_2024:
	var_687_int = 9326; // 0x7e8 PushI
	var_688_bool = var_40_string == var_687_int; // 0x7e9 Eq
	if(var_688_bool == 0) goto Label_2047; // 0x7ea JumpB
	var_689_string = ""; // 0x7eb PushV
	var_689_string = "Neutral"; // 0x7ec MovS
	func_1019(var_41_bool, var_689_string); // 0x7ed Call
	var_690_int = 8485; // 0x7ef PushI
	SetMessage(var_690_int); // 0x7f0 TObjFunc
	ClearReplies(); // 0x7f2 TObjFunc
	var_691_int = 8486; // 0x7f4 PushI
	var_692_int = 9328; // 0x7f5 PushI
	var_693_int = 9327; // 0x7f6 PushI
	AddReply(var_691_int, var_692_int, var_693_int); // 0x7f7 TObjFunc
	var_694_int = 8489; // 0x7f9 PushI
	var_695_int = 9331; // 0x7fa PushI
	var_696_int = 9330; // 0x7fb PushI
	AddReply(var_694_int, var_695_int, var_696_int); // 0x7fc TObjFunc
	return 0; // 0x7fe Return
	
Label_2047:
	var_697_int = 9331; // 0x7ff PushI
	var_698_bool = var_40_string == var_697_int; // 0x800 Eq
	if(var_698_bool == 0) goto Label_2065; // 0x801 JumpB
	var_699_string = ""; // 0x802 PushV
	var_699_string = "Neutral"; // 0x803 MovS
	func_1019(var_41_bool, var_699_string); // 0x804 Call
	var_700_int = 8490; // 0x806 PushI
	SetMessage(var_700_int); // 0x807 TObjFunc
	ClearReplies(); // 0x809 TObjFunc
	var_701_int = 8491; // 0x80b PushI
	var_702_int = 9333; // 0x80c PushI
	var_703_int = 9332; // 0x80d PushI
	AddReply(var_701_int, var_702_int, var_703_int); // 0x80e TObjFunc
	return 0; // 0x810 Return
	
Label_2065:
	var_704_int = 9333; // 0x811 PushI
	var_705_bool = var_40_string == var_704_int; // 0x812 Eq
	if(var_705_bool == 0) goto Label_2083; // 0x813 JumpB
	var_706_string = ""; // 0x814 PushV
	var_706_string = "Neutral"; // 0x815 MovS
	func_1019(var_41_bool, var_706_string); // 0x816 Call
	var_707_int = 8492; // 0x818 PushI
	SetMessage(var_707_int); // 0x819 TObjFunc
	ClearReplies(); // 0x81b TObjFunc
	var_708_int = 8493; // 0x81d PushI
	var_709_int = -1; // 0x81e PushI
	var_710_int = 9334; // 0x81f PushI
	AddReply(var_708_int, var_709_int, var_710_int); // 0x820 TObjFunc
	return 0; // 0x822 Return
	
Label_2083:
	var_711_int = 9328; // 0x823 PushI
	var_712_bool = var_40_string == var_711_int; // 0x824 Eq
	if(var_712_bool == 0) goto Label_2101; // 0x825 JumpB
	var_713_string = ""; // 0x826 PushV
	var_713_string = "Neutral"; // 0x827 MovS
	func_1019(var_41_bool, var_713_string); // 0x828 Call
	var_714_int = 8487; // 0x82a PushI
	SetMessage(var_714_int); // 0x82b TObjFunc
	ClearReplies(); // 0x82d TObjFunc
	var_715_int = 8488; // 0x82f PushI
	var_716_int = -1; // 0x830 PushI
	var_717_int = 9329; // 0x831 PushI
	AddReply(var_715_int, var_716_int, var_717_int); // 0x832 TObjFunc
	return 0; // 0x834 Return
	
Label_2101:
	var_718_int = 5711; // 0x835 PushI
	var_719_bool = var_40_string == var_718_int; // 0x836 Eq
	if(var_719_bool == 0) goto Label_2129; // 0x837 JumpB
	var_720_string = ""; // 0x838 PushV
	var_720_string = "Neutral"; // 0x839 MovS
	func_1019(var_41_bool, var_720_string); // 0x83a Call
	var_721_int = 5185; // 0x83c PushI
	SetMessage(var_721_int); // 0x83d TObjFunc
	ClearReplies(); // 0x83f TObjFunc
	var_722_int = 5186; // 0x841 PushI
	var_723_int = 5713; // 0x842 PushI
	var_724_int = 5712; // 0x843 PushI
	AddReply(var_722_int, var_723_int, var_724_int); // 0x844 TObjFunc
	var_725_int = 5202; // 0x846 PushI
	var_726_int = 5713; // 0x847 PushI
	var_727_int = 5729; // 0x848 PushI
	AddReply(var_725_int, var_726_int, var_727_int); // 0x849 TObjFunc
	var_728_int = 5203; // 0x84b PushI
	var_729_int = 5713; // 0x84c PushI
	var_730_int = 5731; // 0x84d PushI
	AddReply(var_728_int, var_729_int, var_730_int); // 0x84e TObjFunc
	return 0; // 0x850 Return
	
Label_2129:
	var_731_int = 5713; // 0x851 PushI
	var_732_bool = var_40_string == var_731_int; // 0x852 Eq
	if(var_732_bool == 0) goto Label_2152; // 0x853 JumpB
	var_733_string = ""; // 0x854 PushV
	var_733_string = "Neutral"; // 0x855 MovS
	func_1019(var_41_bool, var_733_string); // 0x856 Call
	var_734_int = 5187; // 0x858 PushI
	SetMessage(var_734_int); // 0x859 TObjFunc
	ClearReplies(); // 0x85b TObjFunc
	var_735_int = 5188; // 0x85d PushI
	var_736_int = 5715; // 0x85e PushI
	var_737_int = 5714; // 0x85f PushI
	AddReply(var_735_int, var_736_int, var_737_int); // 0x860 TObjFunc
	var_738_int = 5201; // 0x862 PushI
	var_739_int = 5715; // 0x863 PushI
	var_740_int = 5727; // 0x864 PushI
	AddReply(var_738_int, var_739_int, var_740_int); // 0x865 TObjFunc
	return 0; // 0x867 Return
	
Label_2152:
	var_741_int = 5715; // 0x868 PushI
	var_742_bool = var_40_string == var_741_int; // 0x869 Eq
	if(var_742_bool == 0) goto Label_2175; // 0x86a JumpB
	var_743_string = ""; // 0x86b PushV
	var_743_string = "Neutral"; // 0x86c MovS
	func_1019(var_41_bool, var_743_string); // 0x86d Call
	var_744_int = 5189; // 0x86f PushI
	SetMessage(var_744_int); // 0x870 TObjFunc
	ClearReplies(); // 0x872 TObjFunc
	var_745_int = 5190; // 0x874 PushI
	var_746_int = 5717; // 0x875 PushI
	var_747_int = 5716; // 0x876 PushI
	AddReply(var_745_int, var_746_int, var_747_int); // 0x877 TObjFunc
	var_748_int = 5194; // 0x879 PushI
	var_749_int = 5721; // 0x87a PushI
	var_750_int = 5720; // 0x87b PushI
	AddReply(var_748_int, var_749_int, var_750_int); // 0x87c TObjFunc
	return 0; // 0x87e Return
	
Label_2175:
	var_751_int = 5721; // 0x87f PushI
	var_752_bool = var_40_string == var_751_int; // 0x880 Eq
	if(var_752_bool == 0) goto Label_2198; // 0x881 JumpB
	var_753_string = ""; // 0x882 PushV
	var_753_string = "Neutral"; // 0x883 MovS
	func_1019(var_41_bool, var_753_string); // 0x884 Call
	var_754_int = 5195; // 0x886 PushI
	SetMessage(var_754_int); // 0x887 TObjFunc
	ClearReplies(); // 0x889 TObjFunc
	var_755_int = 5196; // 0x88b PushI
	var_756_int = 5723; // 0x88c PushI
	var_757_int = 5722; // 0x88d PushI
	AddReply(var_755_int, var_756_int, var_757_int); // 0x88e TObjFunc
	var_758_int = 5200; // 0x890 PushI
	var_759_int = -1; // 0x891 PushI
	var_760_int = 5726; // 0x892 PushI
	AddReply(var_758_int, var_759_int, var_760_int); // 0x893 TObjFunc
	return 0; // 0x895 Return
	
Label_2198:
	var_761_int = 5723; // 0x896 PushI
	var_762_bool = var_40_string == var_761_int; // 0x897 Eq
	if(var_762_bool == 0) goto Label_2221; // 0x898 JumpB
	var_763_string = ""; // 0x899 PushV
	var_763_string = "Neutral"; // 0x89a MovS
	func_1019(var_41_bool, var_763_string); // 0x89b Call
	var_764_int = 5197; // 0x89d PushI
	SetMessage(var_764_int); // 0x89e TObjFunc
	ClearReplies(); // 0x8a0 TObjFunc
	var_765_int = 5198; // 0x8a2 PushI
	var_766_int = -1; // 0x8a3 PushI
	var_767_int = 5724; // 0x8a4 PushI
	AddReply(var_765_int, var_766_int, var_767_int); // 0x8a5 TObjFunc
	var_768_int = 5199; // 0x8a7 PushI
	var_769_int = -1; // 0x8a8 PushI
	var_770_int = 5725; // 0x8a9 PushI
	AddReply(var_768_int, var_769_int, var_770_int); // 0x8aa TObjFunc
	return 0; // 0x8ac Return
	
Label_2221:
	var_771_int = 5717; // 0x8ad PushI
	var_772_bool = var_40_string == var_771_int; // 0x8ae Eq
	if(var_772_bool == 0) goto Label_2244; // 0x8af JumpB
	var_773_string = ""; // 0x8b0 PushV
	var_773_string = "Neutral"; // 0x8b1 MovS
	func_1019(var_41_bool, var_773_string); // 0x8b2 Call
	var_774_int = 5191; // 0x8b4 PushI
	SetMessage(var_774_int); // 0x8b5 TObjFunc
	ClearReplies(); // 0x8b7 TObjFunc
	var_775_int = 5192; // 0x8b9 PushI
	var_776_int = -1; // 0x8ba PushI
	var_777_int = 5718; // 0x8bb PushI
	AddReply(var_775_int, var_776_int, var_777_int); // 0x8bc TObjFunc
	var_778_int = 5193; // 0x8be PushI
	var_779_int = -1; // 0x8bf PushI
	var_780_int = 5719; // 0x8c0 PushI
	AddReply(var_778_int, var_779_int, var_780_int); // 0x8c1 TObjFunc
	return 0; // 0x8c3 Return
	
Label_2244:
	var_781_int = 5635; // 0x8c4 PushI
	var_782_bool = var_40_string == var_781_int; // 0x8c5 Eq
	if(var_782_bool == 0) goto Label_2278; // 0x8c6 JumpB
	var_783_object = Obj(); var_784_object = Obj(); // 0x8c7 PushV
	var_783_object = var_1_object; // 0x8c8 MovT
	var_784_object = var_0_object; // 0x8c9 MovT
	func_6326(); // 0x8ca Call
	var_787_string = ""; // 0x8cc PushV
	var_787_string = "Neutral"; // 0x8cd MovS
	func_1019(var_41_bool, var_787_string); // 0x8ce Call
	var_788_int = 5121; // 0x8d0 PushI
	SetMessage(var_788_int); // 0x8d1 TObjFunc
	ClearReplies(); // 0x8d3 TObjFunc
	var_789_int = 5122; // 0x8d5 PushI
	var_790_int = 5637; // 0x8d6 PushI
	var_791_int = 5636; // 0x8d7 PushI
	AddReply(var_789_int, var_790_int, var_791_int); // 0x8d8 TObjFunc
	var_792_bool = 0; var_793_object = Obj(); // 0x8da PushV
	var_793_object = var_1_object; // 0x8db MovT
	func_7004(var_793_object); // 0x8dc Call
	var_798_bool = var_792_bool == 0; // 0x8de Not
	if(var_798_bool == 0) goto Label_2277; // 0x8df JumpB
	var_799_int = 8466; // 0x8e0 PushI
	var_800_int = 9304; // 0x8e1 PushI
	var_801_int = 9303; // 0x8e2 PushI
	AddReply(var_799_int, var_800_int, var_801_int); // 0x8e3 TObjFunc
	
Label_2277:
	return 0; // 0x8e5 Return
	
Label_2278:
	var_802_int = 9304; // 0x8e6 PushI
	var_803_bool = var_40_string == var_802_int; // 0x8e7 Eq
	if(var_803_bool == 0) goto Label_2301; // 0x8e8 JumpB
	var_804_object = Obj(); var_805_object = Obj(); // 0x8e9 PushV
	var_804_object = var_1_object; // 0x8ea MovT
	var_805_object = var_0_object; // 0x8eb MovT
	func_6326(); // 0x8ec Call
	var_806_string = ""; // 0x8ee PushV
	var_806_string = "Neutral"; // 0x8ef MovS
	func_1019(var_41_bool, var_806_string); // 0x8f0 Call
	var_807_int = 8467; // 0x8f2 PushI
	SetMessage(var_807_int); // 0x8f3 TObjFunc
	ClearReplies(); // 0x8f5 TObjFunc
	var_808_int = 8468; // 0x8f7 PushI
	var_809_int = 5637; // 0x8f8 PushI
	var_810_int = 9305; // 0x8f9 PushI
	AddReply(var_808_int, var_809_int, var_810_int); // 0x8fa TObjFunc
	return 0; // 0x8fc Return
	
Label_2301:
	var_811_int = 5637; // 0x8fd PushI
	var_812_bool = var_40_string == var_811_int; // 0x8fe Eq
	if(var_812_bool == 0) goto Label_2329; // 0x8ff JumpB
	var_813_string = ""; // 0x900 PushV
	var_813_string = "Neutral"; // 0x901 MovS
	func_1019(var_41_bool, var_813_string); // 0x902 Call
	var_814_int = 5123; // 0x904 PushI
	SetMessage(var_814_int); // 0x905 TObjFunc
	ClearReplies(); // 0x907 TObjFunc
	var_815_int = 5124; // 0x909 PushI
	var_816_int = 5639; // 0x90a PushI
	var_817_int = 5638; // 0x90b PushI
	AddReply(var_815_int, var_816_int, var_817_int); // 0x90c TObjFunc
	var_818_int = 8472; // 0x90e PushI
	var_819_int = 9312; // 0x90f PushI
	var_820_int = 9311; // 0x910 PushI
	AddReply(var_818_int, var_819_int, var_820_int); // 0x911 TObjFunc
	var_821_int = 8469; // 0x913 PushI
	var_822_int = 9308; // 0x914 PushI
	var_823_int = 9307; // 0x915 PushI
	AddReply(var_821_int, var_822_int, var_823_int); // 0x916 TObjFunc
	return 0; // 0x918 Return
	
Label_2329:
	var_824_int = 9308; // 0x919 PushI
	var_825_bool = var_40_string == var_824_int; // 0x91a Eq
	if(var_825_bool == 0) goto Label_2347; // 0x91b JumpB
	var_826_string = ""; // 0x91c PushV
	var_826_string = "Neutral"; // 0x91d MovS
	func_1019(var_41_bool, var_826_string); // 0x91e Call
	var_827_int = 8470; // 0x920 PushI
	SetMessage(var_827_int); // 0x921 TObjFunc
	ClearReplies(); // 0x923 TObjFunc
	var_828_int = 8471; // 0x925 PushI
	var_829_int = 5639; // 0x926 PushI
	var_830_int = 9309; // 0x927 PushI
	AddReply(var_828_int, var_829_int, var_830_int); // 0x928 TObjFunc
	return 0; // 0x92a Return
	
Label_2347:
	var_831_int = 9312; // 0x92b PushI
	var_832_bool = var_40_string == var_831_int; // 0x92c Eq
	if(var_832_bool == 0) goto Label_2365; // 0x92d JumpB
	var_833_string = ""; // 0x92e PushV
	var_833_string = "Neutral"; // 0x92f MovS
	func_1019(var_41_bool, var_833_string); // 0x930 Call
	var_834_int = 8473; // 0x932 PushI
	SetMessage(var_834_int); // 0x933 TObjFunc
	ClearReplies(); // 0x935 TObjFunc
	var_835_int = 8474; // 0x937 PushI
	var_836_int = 5639; // 0x938 PushI
	var_837_int = 9313; // 0x939 PushI
	AddReply(var_835_int, var_836_int, var_837_int); // 0x93a TObjFunc
	return 0; // 0x93c Return
	
Label_2365:
	var_838_int = 5639; // 0x93d PushI
	var_839_bool = var_40_string == var_838_int; // 0x93e Eq
	if(var_839_bool == 0) goto Label_2388; // 0x93f JumpB
	var_840_string = ""; // 0x940 PushV
	var_840_string = "Neutral"; // 0x941 MovS
	func_1019(var_41_bool, var_840_string); // 0x942 Call
	var_841_int = 5125; // 0x944 PushI
	SetMessage(var_841_int); // 0x945 TObjFunc
	ClearReplies(); // 0x947 TObjFunc
	var_842_int = 5126; // 0x949 PushI
	var_843_int = 5641; // 0x94a PushI
	var_844_int = 5640; // 0x94b PushI
	AddReply(var_842_int, var_843_int, var_844_int); // 0x94c TObjFunc
	var_845_int = 5138; // 0x94e PushI
	var_846_int = 5641; // 0x94f PushI
	var_847_int = 5654; // 0x950 PushI
	AddReply(var_845_int, var_846_int, var_847_int); // 0x951 TObjFunc
	return 0; // 0x953 Return
	
Label_2388:
	var_848_int = 5641; // 0x954 PushI
	var_849_bool = var_40_string == var_848_int; // 0x955 Eq
	if(var_849_bool == 0) goto Label_2411; // 0x956 JumpB
	var_850_string = ""; // 0x957 PushV
	var_850_string = "Neutral"; // 0x958 MovS
	func_1019(var_41_bool, var_850_string); // 0x959 Call
	var_851_int = 5127; // 0x95b PushI
	SetMessage(var_851_int); // 0x95c TObjFunc
	ClearReplies(); // 0x95e TObjFunc
	var_852_int = 5128; // 0x960 PushI
	var_853_int = 5643; // 0x961 PushI
	var_854_int = 5642; // 0x962 PushI
	AddReply(var_852_int, var_853_int, var_854_int); // 0x963 TObjFunc
	var_855_int = 5137; // 0x965 PushI
	var_856_int = 5643; // 0x966 PushI
	var_857_int = 5652; // 0x967 PushI
	AddReply(var_855_int, var_856_int, var_857_int); // 0x968 TObjFunc
	return 0; // 0x96a Return
	
Label_2411:
	var_858_int = 5643; // 0x96b PushI
	var_859_bool = var_40_string == var_858_int; // 0x96c Eq
	if(var_859_bool == 0) goto Label_2429; // 0x96d JumpB
	var_860_string = ""; // 0x96e PushV
	var_860_string = "Neutral"; // 0x96f MovS
	func_1019(var_41_bool, var_860_string); // 0x970 Call
	var_861_int = 5129; // 0x972 PushI
	SetMessage(var_861_int); // 0x973 TObjFunc
	ClearReplies(); // 0x975 TObjFunc
	var_862_int = 5130; // 0x977 PushI
	var_863_int = 5645; // 0x978 PushI
	var_864_int = 5644; // 0x979 PushI
	AddReply(var_862_int, var_863_int, var_864_int); // 0x97a TObjFunc
	return 0; // 0x97c Return
	
Label_2429:
	var_865_int = 5645; // 0x97d PushI
	var_866_bool = var_40_string == var_865_int; // 0x97e Eq
	if(var_866_bool == 0) goto Label_2452; // 0x97f JumpB
	var_867_string = ""; // 0x980 PushV
	var_867_string = "Neutral"; // 0x981 MovS
	func_1019(var_41_bool, var_867_string); // 0x982 Call
	var_868_int = 5131; // 0x984 PushI
	SetMessage(var_868_int); // 0x985 TObjFunc
	ClearReplies(); // 0x987 TObjFunc
	var_869_int = 5132; // 0x989 PushI
	var_870_int = 5647; // 0x98a PushI
	var_871_int = 5646; // 0x98b PushI
	AddReply(var_869_int, var_870_int, var_871_int); // 0x98c TObjFunc
	var_872_int = 5136; // 0x98e PushI
	var_873_int = 5647; // 0x98f PushI
	var_874_int = 5650; // 0x990 PushI
	AddReply(var_872_int, var_873_int, var_874_int); // 0x991 TObjFunc
	return 0; // 0x993 Return
	
Label_2452:
	var_875_int = 5647; // 0x994 PushI
	var_876_bool = var_40_string == var_875_int; // 0x995 Eq
	if(var_876_bool == 0) goto Label_2475; // 0x996 JumpB
	var_877_string = ""; // 0x997 PushV
	var_877_string = "Neutral"; // 0x998 MovS
	func_1019(var_41_bool, var_877_string); // 0x999 Call
	var_878_int = 5133; // 0x99b PushI
	SetMessage(var_878_int); // 0x99c TObjFunc
	ClearReplies(); // 0x99e TObjFunc
	var_879_int = 5134; // 0x9a0 PushI
	var_880_int = -1; // 0x9a1 PushI
	var_881_int = 5648; // 0x9a2 PushI
	AddReply(var_879_int, var_880_int, var_881_int); // 0x9a3 TObjFunc
	var_882_int = 5135; // 0x9a5 PushI
	var_883_int = -1; // 0x9a6 PushI
	var_884_int = 5649; // 0x9a7 PushI
	AddReply(var_882_int, var_883_int, var_884_int); // 0x9a8 TObjFunc
	return 0; // 0x9aa Return
	
Label_2475:
	var_885_int = 9315; // 0x9ab PushI
	var_886_bool = var_40_string == var_885_int; // 0x9ac Eq
	if(var_886_bool == 0) goto Label_2493; // 0x9ad JumpB
	var_887_string = ""; // 0x9ae PushV
	var_887_string = "Neutral"; // 0x9af MovS
	func_1019(var_41_bool, var_887_string); // 0x9b0 Call
	var_888_int = 8475; // 0x9b2 PushI
	SetMessage(var_888_int); // 0x9b3 TObjFunc
	ClearReplies(); // 0x9b5 TObjFunc
	var_889_int = 8476; // 0x9b7 PushI
	var_890_int = -1; // 0x9b8 PushI
	var_891_int = 9316; // 0x9b9 PushI
	AddReply(var_889_int, var_890_int, var_891_int); // 0x9ba TObjFunc
	return 0; // 0x9bc Return
	
Label_2493:
	var_892_int = 9234; // 0x9bd PushI
	var_893_bool = var_40_string == var_892_int; // 0x9be Eq
	if(var_893_bool == 0) goto Label_2526; // 0x9bf JumpB
	var_894_string = ""; // 0x9c0 PushV
	var_894_string = "Neutral"; // 0x9c1 MovS
	func_1019(var_41_bool, var_894_string); // 0x9c2 Call
	var_895_int = 8411; // 0x9c4 PushI
	SetMessage(var_895_int); // 0x9c5 TObjFunc
	ClearReplies(); // 0x9c7 TObjFunc
	var_896_bool = 0; var_897_object = Obj(); // 0x9c9 PushV
	var_897_object = var_1_object; // 0x9ca MovT
	func_6958(var_897_object); // 0x9cb Call
	if(var_896_bool == 0) goto Label_2515; // 0x9cd JumpB
	var_902_int = 8448; // 0x9ce PushI
	var_903_int = 9282; // 0x9cf PushI
	var_904_int = 9281; // 0x9d0 PushI
	AddReply(var_902_int, var_903_int, var_904_int); // 0x9d1 TObjFunc
	
Label_2515:
	var_905_bool = 0; var_906_object = Obj(); // 0x9d3 PushV
	var_906_object = var_1_object; // 0x9d4 MovT
	func_6761(var_906_object); // 0x9d5 Call
	if(var_905_bool == 0) goto Label_2525; // 0x9d7 JumpB
	var_911_int = 8463; // 0x9d8 PushI
	var_912_int = 9300; // 0x9d9 PushI
	var_913_int = 9299; // 0x9da PushI
	AddReply(var_911_int, var_912_int, var_913_int); // 0x9db TObjFunc
	
Label_2525:
	return 0; // 0x9dd Return
	
Label_2526:
	var_914_int = 9300; // 0x9de PushI
	var_915_bool = var_40_string == var_914_int; // 0x9df Eq
	if(var_915_bool == 0) goto Label_2544; // 0x9e0 JumpB
	var_916_string = ""; // 0x9e1 PushV
	var_916_string = "Neutral"; // 0x9e2 MovS
	func_1019(var_41_bool, var_916_string); // 0x9e3 Call
	var_917_int = 8464; // 0x9e5 PushI
	SetMessage(var_917_int); // 0x9e6 TObjFunc
	ClearReplies(); // 0x9e8 TObjFunc
	var_918_int = 8465; // 0x9ea PushI
	var_919_int = -1; // 0x9eb PushI
	var_920_int = 9301; // 0x9ec PushI
	AddReply(var_918_int, var_919_int, var_920_int); // 0x9ed TObjFunc
	return 0; // 0x9ef Return
	
Label_2544:
	var_921_int = 9282; // 0x9f0 PushI
	var_922_bool = var_40_string == var_921_int; // 0x9f1 Eq
	if(var_922_bool == 0) goto Label_2572; // 0x9f2 JumpB
	var_923_string = ""; // 0x9f3 PushV
	var_923_string = "Neutral"; // 0x9f4 MovS
	func_1019(var_41_bool, var_923_string); // 0x9f5 Call
	var_924_int = 8449; // 0x9f7 PushI
	SetMessage(var_924_int); // 0x9f8 TObjFunc
	ClearReplies(); // 0x9fa TObjFunc
	var_925_int = 8451; // 0x9fc PushI
	var_926_int = 9287; // 0x9fd PushI
	var_927_int = 9284; // 0x9fe PushI
	AddReply(var_925_int, var_926_int, var_927_int); // 0x9ff TObjFunc
	var_928_int = 8452; // 0xa01 PushI
	var_929_int = 9287; // 0xa02 PushI
	var_930_int = 9285; // 0xa03 PushI
	AddReply(var_928_int, var_929_int, var_930_int); // 0xa04 TObjFunc
	var_931_int = 8453; // 0xa06 PushI
	var_932_int = 9287; // 0xa07 PushI
	var_933_int = 9286; // 0xa08 PushI
	AddReply(var_931_int, var_932_int, var_933_int); // 0xa09 TObjFunc
	return 0; // 0xa0b Return
	
Label_2572:
	var_934_int = 9287; // 0xa0c PushI
	var_935_bool = var_40_string == var_934_int; // 0xa0d Eq
	if(var_935_bool == 0) goto Label_2590; // 0xa0e JumpB
	var_936_string = ""; // 0xa0f PushV
	var_936_string = "Neutral"; // 0xa10 MovS
	func_1019(var_41_bool, var_936_string); // 0xa11 Call
	var_937_int = 8454; // 0xa13 PushI
	SetMessage(var_937_int); // 0xa14 TObjFunc
	ClearReplies(); // 0xa16 TObjFunc
	var_938_int = 8412; // 0xa18 PushI
	var_939_int = 9236; // 0xa19 PushI
	var_940_int = 9235; // 0xa1a PushI
	AddReply(var_938_int, var_939_int, var_940_int); // 0xa1b TObjFunc
	return 0; // 0xa1d Return
	
Label_2590:
	var_941_int = 9236; // 0xa1e PushI
	var_942_bool = var_40_string == var_941_int; // 0xa1f Eq
	if(var_942_bool == 0) goto Label_2608; // 0xa20 JumpB
	var_943_string = ""; // 0xa21 PushV
	var_943_string = "Neutral"; // 0xa22 MovS
	func_1019(var_41_bool, var_943_string); // 0xa23 Call
	var_944_int = 8413; // 0xa25 PushI
	SetMessage(var_944_int); // 0xa26 TObjFunc
	ClearReplies(); // 0xa28 TObjFunc
	var_945_int = 8414; // 0xa2a PushI
	var_946_int = 9238; // 0xa2b PushI
	var_947_int = 9237; // 0xa2c PushI
	AddReply(var_945_int, var_946_int, var_947_int); // 0xa2d TObjFunc
	return 0; // 0xa2f Return
	
Label_2608:
	var_948_int = 9238; // 0xa30 PushI
	var_949_bool = var_40_string == var_948_int; // 0xa31 Eq
	if(var_949_bool == 0) goto Label_2631; // 0xa32 JumpB
	var_950_string = ""; // 0xa33 PushV
	var_950_string = "Neutral"; // 0xa34 MovS
	func_1019(var_41_bool, var_950_string); // 0xa35 Call
	var_951_int = 8415; // 0xa37 PushI
	SetMessage(var_951_int); // 0xa38 TObjFunc
	ClearReplies(); // 0xa3a TObjFunc
	var_952_int = 8416; // 0xa3c PushI
	var_953_int = 9240; // 0xa3d PushI
	var_954_int = 9239; // 0xa3e PushI
	AddReply(var_952_int, var_953_int, var_954_int); // 0xa3f TObjFunc
	var_955_int = 8418; // 0xa41 PushI
	var_956_int = 9242; // 0xa42 PushI
	var_957_int = 9241; // 0xa43 PushI
	AddReply(var_955_int, var_956_int, var_957_int); // 0xa44 TObjFunc
	return 0; // 0xa46 Return
	
Label_2631:
	var_958_int = 9242; // 0xa47 PushI
	var_959_bool = var_40_string == var_958_int; // 0xa48 Eq
	if(var_959_bool == 0) goto Label_2649; // 0xa49 JumpB
	var_960_string = ""; // 0xa4a PushV
	var_960_string = "Neutral"; // 0xa4b MovS
	func_1019(var_41_bool, var_960_string); // 0xa4c Call
	var_961_int = 8419; // 0xa4e PushI
	SetMessage(var_961_int); // 0xa4f TObjFunc
	ClearReplies(); // 0xa51 TObjFunc
	var_962_int = 8456; // 0xa53 PushI
	var_963_int = 9292; // 0xa54 PushI
	var_964_int = 9291; // 0xa55 PushI
	AddReply(var_962_int, var_963_int, var_964_int); // 0xa56 TObjFunc
	return 0; // 0xa58 Return
	
Label_2649:
	var_965_int = 9292; // 0xa59 PushI
	var_966_bool = var_40_string == var_965_int; // 0xa5a Eq
	if(var_966_bool == 0) goto Label_2667; // 0xa5b JumpB
	var_967_string = ""; // 0xa5c PushV
	var_967_string = "Neutral"; // 0xa5d MovS
	func_1019(var_41_bool, var_967_string); // 0xa5e Call
	var_968_int = 8457; // 0xa60 PushI
	SetMessage(var_968_int); // 0xa61 TObjFunc
	ClearReplies(); // 0xa63 TObjFunc
	var_969_int = 8459; // 0xa65 PushI
	var_970_int = 9244; // 0xa66 PushI
	var_971_int = 9294; // 0xa67 PushI
	AddReply(var_969_int, var_970_int, var_971_int); // 0xa68 TObjFunc
	return 0; // 0xa6a Return
	
Label_2667:
	var_972_int = 9240; // 0xa6b PushI
	var_973_bool = var_40_string == var_972_int; // 0xa6c Eq
	if(var_973_bool == 0) goto Label_2685; // 0xa6d JumpB
	var_974_string = ""; // 0xa6e PushV
	var_974_string = "Neutral"; // 0xa6f MovS
	func_1019(var_41_bool, var_974_string); // 0xa70 Call
	var_975_int = 8417; // 0xa72 PushI
	SetMessage(var_975_int); // 0xa73 TObjFunc
	ClearReplies(); // 0xa75 TObjFunc
	var_976_int = 8420; // 0xa77 PushI
	var_977_int = 9244; // 0xa78 PushI
	var_978_int = 9243; // 0xa79 PushI
	AddReply(var_976_int, var_977_int, var_978_int); // 0xa7a TObjFunc
	return 0; // 0xa7c Return
	
Label_2685:
	var_979_int = 9244; // 0xa7d PushI
	var_980_bool = var_40_string == var_979_int; // 0xa7e Eq
	if(var_980_bool == 0) goto Label_2708; // 0xa7f JumpB
	var_981_string = ""; // 0xa80 PushV
	var_981_string = "Neutral"; // 0xa81 MovS
	func_1019(var_41_bool, var_981_string); // 0xa82 Call
	var_982_int = 8421; // 0xa84 PushI
	SetMessage(var_982_int); // 0xa85 TObjFunc
	ClearReplies(); // 0xa87 TObjFunc
	var_983_int = 8430; // 0xa89 PushI
	var_984_int = 9254; // 0xa8a PushI
	var_985_int = 9253; // 0xa8b PushI
	AddReply(var_983_int, var_984_int, var_985_int); // 0xa8c TObjFunc
	var_986_int = 8422; // 0xa8e PushI
	var_987_int = 9251; // 0xa8f PushI
	var_988_int = 9245; // 0xa90 PushI
	AddReply(var_986_int, var_987_int, var_988_int); // 0xa91 TObjFunc
	return 0; // 0xa93 Return
	
Label_2708:
	var_989_int = 9254; // 0xa94 PushI
	var_990_bool = var_40_string == var_989_int; // 0xa95 Eq
	if(var_990_bool == 0) goto Label_2726; // 0xa96 JumpB
	var_991_string = ""; // 0xa97 PushV
	var_991_string = "Neutral"; // 0xa98 MovS
	func_1019(var_41_bool, var_991_string); // 0xa99 Call
	var_992_int = 8431; // 0xa9b PushI
	SetMessage(var_992_int); // 0xa9c TObjFunc
	ClearReplies(); // 0xa9e TObjFunc
	var_993_int = 8432; // 0xaa0 PushI
	var_994_int = 9256; // 0xaa1 PushI
	var_995_int = 9255; // 0xaa2 PushI
	AddReply(var_993_int, var_994_int, var_995_int); // 0xaa3 TObjFunc
	return 0; // 0xaa5 Return
	
Label_2726:
	var_996_int = 9256; // 0xaa6 PushI
	var_997_bool = var_40_string == var_996_int; // 0xaa7 Eq
	if(var_997_bool == 0) goto Label_2744; // 0xaa8 JumpB
	var_998_string = ""; // 0xaa9 PushV
	var_998_string = "Neutral"; // 0xaaa MovS
	func_1019(var_41_bool, var_998_string); // 0xaab Call
	var_999_int = 8433; // 0xaad PushI
	SetMessage(var_999_int); // 0xaae TObjFunc
	ClearReplies(); // 0xab0 TObjFunc
	var_1000_int = 8434; // 0xab2 PushI
	var_1001_int = 9258; // 0xab3 PushI
	var_1002_int = 9257; // 0xab4 PushI
	AddReply(var_1000_int, var_1001_int, var_1002_int); // 0xab5 TObjFunc
	return 0; // 0xab7 Return
	
Label_2744:
	var_1003_int = 9258; // 0xab8 PushI
	var_1004_bool = var_40_string == var_1003_int; // 0xab9 Eq
	if(var_1004_bool == 0) goto Label_2762; // 0xaba JumpB
	var_1005_string = ""; // 0xabb PushV
	var_1005_string = "Neutral"; // 0xabc MovS
	func_1019(var_41_bool, var_1005_string); // 0xabd Call
	var_1006_int = 8435; // 0xabf PushI
	SetMessage(var_1006_int); // 0xac0 TObjFunc
	ClearReplies(); // 0xac2 TObjFunc
	var_1007_int = 8436; // 0xac4 PushI
	var_1008_int = 9251; // 0xac5 PushI
	var_1009_int = 9259; // 0xac6 PushI
	AddReply(var_1007_int, var_1008_int, var_1009_int); // 0xac7 TObjFunc
	return 0; // 0xac9 Return
	
Label_2762:
	var_1010_int = 9251; // 0xaca PushI
	var_1011_bool = var_40_string == var_1010_int; // 0xacb Eq
	if(var_1011_bool == 0) goto Label_2780; // 0xacc JumpB
	var_1012_string = ""; // 0xacd PushV
	var_1012_string = "Neutral"; // 0xace MovS
	func_1019(var_41_bool, var_1012_string); // 0xacf Call
	var_1013_int = 8428; // 0xad1 PushI
	SetMessage(var_1013_int); // 0xad2 TObjFunc
	ClearReplies(); // 0xad4 TObjFunc
	var_1014_int = 8429; // 0xad6 PushI
	var_1015_int = 9296; // 0xad7 PushI
	var_1016_int = 9252; // 0xad8 PushI
	AddReply(var_1014_int, var_1015_int, var_1016_int); // 0xad9 TObjFunc
	return 0; // 0xadb Return
	
Label_2780:
	var_1017_int = 9296; // 0xadc PushI
	var_1018_bool = var_40_string == var_1017_int; // 0xadd Eq
	if(var_1018_bool == 0) goto Label_2798; // 0xade JumpB
	var_1019_string = ""; // 0xadf PushV
	var_1019_string = "Neutral"; // 0xae0 MovS
	func_1019(var_41_bool, var_1019_string); // 0xae1 Call
	var_1020_int = 8460; // 0xae3 PushI
	SetMessage(var_1020_int); // 0xae4 TObjFunc
	ClearReplies(); // 0xae6 TObjFunc
	var_1021_int = 8461; // 0xae8 PushI
	var_1022_int = -1; // 0xae9 PushI
	var_1023_int = 9297; // 0xaea PushI
	AddReply(var_1021_int, var_1022_int, var_1023_int); // 0xaeb TObjFunc
	return 0; // 0xaed Return
	
Label_2798:
	var_1024_int = 5678; // 0xaee PushI
	var_1025_bool = var_40_string == var_1024_int; // 0xaef Eq
	if(var_1025_bool == 0) goto Label_2826; // 0xaf0 JumpB
	var_1026_string = ""; // 0xaf1 PushV
	var_1026_string = "Neutral"; // 0xaf2 MovS
	func_1019(var_41_bool, var_1026_string); // 0xaf3 Call
	var_1027_int = 5157; // 0xaf5 PushI
	SetMessage(var_1027_int); // 0xaf6 TObjFunc
	ClearReplies(); // 0xaf8 TObjFunc
	var_1028_int = 5158; // 0xafa PushI
	var_1029_int = 5680; // 0xafb PushI
	var_1030_int = 5679; // 0xafc PushI
	AddReply(var_1028_int, var_1029_int, var_1030_int); // 0xafd TObjFunc
	var_1031_int = 5181; // 0xaff PushI
	var_1032_int = 5680; // 0xb00 PushI
	var_1033_int = 5705; // 0xb01 PushI
	AddReply(var_1031_int, var_1032_int, var_1033_int); // 0xb02 TObjFunc
	var_1034_int = 5182; // 0xb04 PushI
	var_1035_int = 5680; // 0xb05 PushI
	var_1036_int = 5706; // 0xb06 PushI
	AddReply(var_1034_int, var_1035_int, var_1036_int); // 0xb07 TObjFunc
	return 0; // 0xb09 Return
	
Label_2826:
	var_1037_int = 5680; // 0xb0a PushI
	var_1038_bool = var_40_string == var_1037_int; // 0xb0b Eq
	if(var_1038_bool == 0) goto Label_2854; // 0xb0c JumpB
	var_1039_string = ""; // 0xb0d PushV
	var_1039_string = "Neutral"; // 0xb0e MovS
	func_1019(var_41_bool, var_1039_string); // 0xb0f Call
	var_1040_int = 5159; // 0xb11 PushI
	SetMessage(var_1040_int); // 0xb12 TObjFunc
	ClearReplies(); // 0xb14 TObjFunc
	var_1041_int = 5160; // 0xb16 PushI
	var_1042_int = 5682; // 0xb17 PushI
	var_1043_int = 5681; // 0xb18 PushI
	AddReply(var_1041_int, var_1042_int, var_1043_int); // 0xb19 TObjFunc
	var_1044_int = 5177; // 0xb1b PushI
	var_1045_int = 5684; // 0xb1c PushI
	var_1046_int = 5700; // 0xb1d PushI
	AddReply(var_1044_int, var_1045_int, var_1046_int); // 0xb1e TObjFunc
	var_1047_int = 5178; // 0xb20 PushI
	var_1048_int = 5703; // 0xb21 PushI
	var_1049_int = 5702; // 0xb22 PushI
	AddReply(var_1047_int, var_1048_int, var_1049_int); // 0xb23 TObjFunc
	return 0; // 0xb25 Return
	
Label_2854:
	var_1050_int = 5703; // 0xb26 PushI
	var_1051_bool = var_40_string == var_1050_int; // 0xb27 Eq
	if(var_1051_bool == 0) goto Label_2872; // 0xb28 JumpB
	var_1052_string = ""; // 0xb29 PushV
	var_1052_string = "Neutral"; // 0xb2a MovS
	func_1019(var_41_bool, var_1052_string); // 0xb2b Call
	var_1053_int = 5179; // 0xb2d PushI
	SetMessage(var_1053_int); // 0xb2e TObjFunc
	ClearReplies(); // 0xb30 TObjFunc
	var_1054_int = 5180; // 0xb32 PushI
	var_1055_int = 5694; // 0xb33 PushI
	var_1056_int = 5704; // 0xb34 PushI
	AddReply(var_1054_int, var_1055_int, var_1056_int); // 0xb35 TObjFunc
	return 0; // 0xb37 Return
	
Label_2872:
	var_1057_int = 5682; // 0xb38 PushI
	var_1058_bool = var_40_string == var_1057_int; // 0xb39 Eq
	if(var_1058_bool == 0) goto Label_2895; // 0xb3a JumpB
	var_1059_string = ""; // 0xb3b PushV
	var_1059_string = "Neutral"; // 0xb3c MovS
	func_1019(var_41_bool, var_1059_string); // 0xb3d Call
	var_1060_int = 5161; // 0xb3f PushI
	SetMessage(var_1060_int); // 0xb40 TObjFunc
	ClearReplies(); // 0xb42 TObjFunc
	var_1061_int = 5162; // 0xb44 PushI
	var_1062_int = 5684; // 0xb45 PushI
	var_1063_int = 5683; // 0xb46 PushI
	AddReply(var_1061_int, var_1062_int, var_1063_int); // 0xb47 TObjFunc
	var_1064_int = 5170; // 0xb49 PushI
	var_1065_int = 5692; // 0xb4a PushI
	var_1066_int = 5691; // 0xb4b PushI
	AddReply(var_1064_int, var_1065_int, var_1066_int); // 0xb4c TObjFunc
	return 0; // 0xb4e Return
	
Label_2895:
	var_1067_int = 5692; // 0xb4f PushI
	var_1068_bool = var_40_string == var_1067_int; // 0xb50 Eq
	if(var_1068_bool == 0) goto Label_2918; // 0xb51 JumpB
	var_1069_string = ""; // 0xb52 PushV
	var_1069_string = "Neutral"; // 0xb53 MovS
	func_1019(var_41_bool, var_1069_string); // 0xb54 Call
	var_1070_int = 5171; // 0xb56 PushI
	SetMessage(var_1070_int); // 0xb57 TObjFunc
	ClearReplies(); // 0xb59 TObjFunc
	var_1071_int = 5172; // 0xb5b PushI
	var_1072_int = 5694; // 0xb5c PushI
	var_1073_int = 5693; // 0xb5d PushI
	AddReply(var_1071_int, var_1072_int, var_1073_int); // 0xb5e TObjFunc
	var_1074_int = 5176; // 0xb60 PushI
	var_1075_int = 5694; // 0xb61 PushI
	var_1076_int = 5699; // 0xb62 PushI
	AddReply(var_1074_int, var_1075_int, var_1076_int); // 0xb63 TObjFunc
	return 0; // 0xb65 Return
	
Label_2918:
	var_1077_int = 5694; // 0xb66 PushI
	var_1078_bool = var_40_string == var_1077_int; // 0xb67 Eq
	if(var_1078_bool == 0) goto Label_2941; // 0xb68 JumpB
	var_1079_string = ""; // 0xb69 PushV
	var_1079_string = "Neutral"; // 0xb6a MovS
	func_1019(var_41_bool, var_1079_string); // 0xb6b Call
	var_1080_int = 5173; // 0xb6d PushI
	SetMessage(var_1080_int); // 0xb6e TObjFunc
	ClearReplies(); // 0xb70 TObjFunc
	var_1081_int = 5174; // 0xb72 PushI
	var_1082_int = 5684; // 0xb73 PushI
	var_1083_int = 5695; // 0xb74 PushI
	AddReply(var_1081_int, var_1082_int, var_1083_int); // 0xb75 TObjFunc
	var_1084_int = 5175; // 0xb77 PushI
	var_1085_int = 5684; // 0xb78 PushI
	var_1086_int = 5697; // 0xb79 PushI
	AddReply(var_1084_int, var_1085_int, var_1086_int); // 0xb7a TObjFunc
	return 0; // 0xb7c Return
	
Label_2941:
	var_1087_int = 5684; // 0xb7d PushI
	var_1088_bool = var_40_string == var_1087_int; // 0xb7e Eq
	if(var_1088_bool == 0) goto Label_2969; // 0xb7f JumpB
	var_1089_string = ""; // 0xb80 PushV
	var_1089_string = "Neutral"; // 0xb81 MovS
	func_1019(var_41_bool, var_1089_string); // 0xb82 Call
	var_1090_int = 5163; // 0xb84 PushI
	SetMessage(var_1090_int); // 0xb85 TObjFunc
	ClearReplies(); // 0xb87 TObjFunc
	var_1091_int = 5165; // 0xb89 PushI
	var_1092_int = -1; // 0xb8a PushI
	var_1093_int = 5686; // 0xb8b PushI
	AddReply(var_1091_int, var_1092_int, var_1093_int); // 0xb8c TObjFunc
	var_1094_int = 5164; // 0xb8e PushI
	var_1095_int = -1; // 0xb8f PushI
	var_1096_int = 5685; // 0xb90 PushI
	AddReply(var_1094_int, var_1095_int, var_1096_int); // 0xb91 TObjFunc
	var_1097_int = 5166; // 0xb93 PushI
	var_1098_int = 5688; // 0xb94 PushI
	var_1099_int = 5687; // 0xb95 PushI
	AddReply(var_1097_int, var_1098_int, var_1099_int); // 0xb96 TObjFunc
	return 0; // 0xb98 Return
	
Label_2969:
	var_1100_int = 5688; // 0xb99 PushI
	var_1101_bool = var_40_string == var_1100_int; // 0xb9a Eq
	if(var_1101_bool == 0) goto Label_2987; // 0xb9b JumpB
	var_1102_string = ""; // 0xb9c PushV
	var_1102_string = "Neutral"; // 0xb9d MovS
	func_1019(var_41_bool, var_1102_string); // 0xb9e Call
	var_1103_int = 5167; // 0xba0 PushI
	SetMessage(var_1103_int); // 0xba1 TObjFunc
	ClearReplies(); // 0xba3 TObjFunc
	var_1104_int = 5168; // 0xba5 PushI
	var_1105_int = -1; // 0xba6 PushI
	var_1106_int = 5689; // 0xba7 PushI
	AddReply(var_1104_int, var_1105_int, var_1106_int); // 0xba8 TObjFunc
	return 0; // 0xbaa Return
	
Label_2987:
	var_1107_int = 5626; // 0xbab PushI
	var_1108_bool = var_40_string == var_1107_int; // 0xbac Eq
	if(var_1108_bool == 0) goto Label_3010; // 0xbad JumpB
	var_1109_string = ""; // 0xbae PushV
	var_1109_string = "Neutral"; // 0xbaf MovS
	func_1019(var_41_bool, var_1109_string); // 0xbb0 Call
	var_1110_int = 5113; // 0xbb2 PushI
	SetMessage(var_1110_int); // 0xbb3 TObjFunc
	ClearReplies(); // 0xbb5 TObjFunc
	var_1111_int = 5114; // 0xbb7 PushI
	var_1112_int = 5628; // 0xbb8 PushI
	var_1113_int = 5627; // 0xbb9 PushI
	AddReply(var_1111_int, var_1112_int, var_1113_int); // 0xbba TObjFunc
	var_1114_int = 5118; // 0xbbc PushI
	var_1115_int = -1; // 0xbbd PushI
	var_1116_int = 5631; // 0xbbe PushI
	AddReply(var_1114_int, var_1115_int, var_1116_int); // 0xbbf TObjFunc
	return 0; // 0xbc1 Return
	
Label_3010:
	var_1117_int = 5628; // 0xbc2 PushI
	var_1118_bool = var_40_string == var_1117_int; // 0xbc3 Eq
	if(var_1118_bool == 0) goto Label_3033; // 0xbc4 JumpB
	var_1119_string = ""; // 0xbc5 PushV
	var_1119_string = "Neutral"; // 0xbc6 MovS
	func_1019(var_41_bool, var_1119_string); // 0xbc7 Call
	var_1120_int = 5115; // 0xbc9 PushI
	SetMessage(var_1120_int); // 0xbca TObjFunc
	ClearReplies(); // 0xbcc TObjFunc
	var_1121_int = 5116; // 0xbce PushI
	var_1122_int = -1; // 0xbcf PushI
	var_1123_int = 5629; // 0xbd0 PushI
	AddReply(var_1121_int, var_1122_int, var_1123_int); // 0xbd1 TObjFunc
	var_1124_int = 5117; // 0xbd3 PushI
	var_1125_int = -1; // 0xbd4 PushI
	var_1126_int = 5630; // 0xbd5 PushI
	AddReply(var_1124_int, var_1125_int, var_1126_int); // 0xbd6 TObjFunc
	return 0; // 0xbd8 Return
	
Label_3033:
	var_3_string = 1; // 0xbd9 TMovB
	var_1127_bool = 0; // 0xbda PushV
	func_6273(var_1127_bool); // 0xbdb Call
	if(var_1127_bool == 0) goto Label_3041; // 0xbdd JumpB
	lshStopAnimation(); // 0xbde Func
	goto Label_3043; // 0xbe0 Jump
	
Label_3043:
	return 0; // 0xbe3 Return
	
Label_3041:
	StopAnimation(); // 0xbe1 Func
	
Label_3045:
	return 0; // 0xbe5 Return
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool)
{
	var_42_int = 1; // 0xc9b PushI
	if(var_42_int == 0) goto Label_3492; // 0xc9c JumpB
	func_6195(); // 0xc9e Call
	var_44_int = 8194; // 0xca0 PushI
	var_45_bool = var_41_bool == var_44_int; // 0xca1 Eq
	if(var_45_bool == 0) goto Label_3250; // 0xca2 JumpB
	var_46_object = Obj(); var_47_object = Obj(); // 0xca3 PushV
	var_46_object = var_1_object; // 0xca4 MovT
	var_47_object = var_0_object; // 0xca5 MovT
	func_6334(); // 0xca6 Call
	var_50_object = Obj(); var_51_object = Obj(); // 0xca8 PushV
	var_50_object = var_1_object; // 0xca9 MovT
	var_51_object = var_0_object; // 0xcaa MovT
	func_6346(var_51_object); // 0xcab Call
	var_59_object = Obj(); var_60_object = Obj(); // 0xcad PushV
	var_59_object = var_1_object; // 0xcae MovT
	var_60_object = var_0_object; // 0xcaf MovT
	func_6314(); // 0xcb0 Call
	
Label_3250:
	var_63_int = 8192; // 0xcb2 PushI
	var_64_bool = var_41_bool == var_63_int; // 0xcb3 Eq
	if(var_64_bool == 0) goto Label_3258; // 0xcb4 JumpB
	var_65_object = Obj(); var_66_object = Obj(); // 0xcb5 PushV
	var_65_object = var_1_object; // 0xcb6 MovT
	var_66_object = var_0_object; // 0xcb7 MovT
	func_6334(); // 0xcb8 Call
	
Label_3258:
	var_67_int = 7630; // 0xcba PushI
	var_68_bool = var_40_string == var_67_int; // 0xcbb Eq
	if(var_68_bool == 0) goto Label_3324; // 0xcbc JumpB
	var_69_string = ""; // 0xcbd PushV
	var_69_string = "Neutral"; // 0xcbe MovS
	func_3210(var_41_bool, var_69_string); // 0xcbf Call
	var_84_int = 6924; // 0xcc1 PushI
	SetMessage(var_84_int); // 0xcc2 TObjFunc
	ClearReplies(); // 0xcc4 TObjFunc
	var_85_bool = 0; // 0xcc6 PushV
	var_85_bool = 0; // 0xcc7 MovB
	var_86_bool = 0; // 0xcc8 PushV
	var_86_bool = 0; // 0xcc9 MovB
	var_87_bool = 0; var_88_object = Obj(); // 0xcca PushV
	var_88_object = var_1_object; // 0xccb MovT
	func_6833(var_88_object); // 0xccc Call
	if(var_87_bool == 0) goto Label_3285; // 0xcce JumpB
	var_95_bool = 0; var_96_object = Obj(); // 0xccf PushV
	var_96_object = var_1_object; // 0xcd0 MovT
	func_6869(var_96_object); // 0xcd1 Call
	if(var_95_bool == 0) goto Label_3285; // 0xcd3 JumpB
	var_86_bool = 1; // 0xcd4 MovB
	
Label_3285:
	if(var_86_bool == 0) goto Label_3292; // 0xcd5 JumpB
	var_101_bool = 0; var_102_object = Obj(); // 0xcd6 PushV
	var_102_object = var_1_object; // 0xcd7 MovT
	func_6857(var_102_object); // 0xcd8 Call
	if(var_101_bool == 0) goto Label_3292; // 0xcda JumpB
	var_85_bool = 1; // 0xcdb MovB
	
Label_3292:
	if(var_85_bool == 0) goto Label_3298; // 0xcdc JumpB
	var_107_int = 6925; // 0xcdd PushI
	var_108_int = 7632; // 0xcde PushI
	var_109_int = 7631; // 0xcdf PushI
	AddReply(var_107_int, var_108_int, var_109_int); // 0xce0 TObjFunc
	
Label_3298:
	var_110_int = 7777; // 0xce2 PushI
	var_111_int = -1; // 0xce3 PushI
	var_112_int = 8579; // 0xce4 PushI
	AddReply(var_110_int, var_111_int, var_112_int); // 0xce5 TObjFunc
	return 0; // 0xce7 Return
	
Label_3324:
	var_113_int = 10478; // 0xcfc PushI
	var_114_bool = var_40_string == var_113_int; // 0xcfd Eq
	if(var_114_bool == 0) goto Label_3347; // 0xcfe JumpB
	var_115_string = ""; // 0xcff PushV
	var_115_string = "Neutral"; // 0xd00 MovS
	func_3210(var_41_bool, var_115_string); // 0xd01 Call
	var_116_int = 9533; // 0xd03 PushI
	SetMessage(var_116_int); // 0xd04 TObjFunc
	ClearReplies(); // 0xd06 TObjFunc
	var_117_int = 9534; // 0xd08 PushI
	var_118_int = -1; // 0xd09 PushI
	var_119_int = 10479; // 0xd0a PushI
	AddReply(var_117_int, var_118_int, var_119_int); // 0xd0b TObjFunc
	var_120_int = 9535; // 0xd0d PushI
	var_121_int = 10481; // 0xd0e PushI
	var_122_int = 10480; // 0xd0f PushI
	AddReply(var_120_int, var_121_int, var_122_int); // 0xd10 TObjFunc
	return 0; // 0xd12 Return
	
Label_3347:
	var_123_int = 10481; // 0xd13 PushI
	var_124_bool = var_40_string == var_123_int; // 0xd14 Eq
	if(var_124_bool == 0) goto Label_3370; // 0xd15 JumpB
	var_125_string = ""; // 0xd16 PushV
	var_125_string = "Neutral"; // 0xd17 MovS
	func_3210(var_41_bool, var_125_string); // 0xd18 Call
	var_126_int = 9536; // 0xd1a PushI
	SetMessage(var_126_int); // 0xd1b TObjFunc
	ClearReplies(); // 0xd1d TObjFunc
	var_127_int = 9537; // 0xd1f PushI
	var_128_int = -1; // 0xd20 PushI
	var_129_int = 10482; // 0xd21 PushI
	AddReply(var_127_int, var_128_int, var_129_int); // 0xd22 TObjFunc
	var_130_int = 9538; // 0xd24 PushI
	var_131_int = -1; // 0xd25 PushI
	var_132_int = 10483; // 0xd26 PushI
	AddReply(var_130_int, var_131_int, var_132_int); // 0xd27 TObjFunc
	return 0; // 0xd29 Return
	
Label_3370:
	var_133_int = 7632; // 0xd2a PushI
	var_134_bool = var_40_string == var_133_int; // 0xd2b Eq
	if(var_134_bool == 0) goto Label_3398; // 0xd2c JumpB
	var_135_string = ""; // 0xd2d PushV
	var_135_string = "Neutral"; // 0xd2e MovS
	func_3210(var_41_bool, var_135_string); // 0xd2f Call
	var_136_int = 6926; // 0xd31 PushI
	SetMessage(var_136_int); // 0xd32 TObjFunc
	ClearReplies(); // 0xd34 TObjFunc
	var_137_int = 6927; // 0xd36 PushI
	var_138_int = 8188; // 0xd37 PushI
	var_139_int = 7633; // 0xd38 PushI
	AddReply(var_137_int, var_138_int, var_139_int); // 0xd39 TObjFunc
	var_140_bool = 0; var_141_object = Obj(); // 0xd3b PushV
	var_141_object = var_1_object; // 0xd3c MovT
	func_6845(var_141_object); // 0xd3d Call
	if(var_140_bool == 0) goto Label_3397; // 0xd3f JumpB
	var_146_int = 7420; // 0xd40 PushI
	var_147_int = 8190; // 0xd41 PushI
	var_148_int = 8189; // 0xd42 PushI
	AddReply(var_146_int, var_147_int, var_148_int); // 0xd43 TObjFunc
	
Label_3397:
	return 0; // 0xd45 Return
	
Label_3398:
	var_149_int = 8190; // 0xd46 PushI
	var_150_bool = var_40_string == var_149_int; // 0xd47 Eq
	if(var_150_bool == 0) goto Label_3416; // 0xd48 JumpB
	var_151_string = ""; // 0xd49 PushV
	var_151_string = "Neutral"; // 0xd4a MovS
	func_3210(var_41_bool, var_151_string); // 0xd4b Call
	var_152_int = 7421; // 0xd4d PushI
	SetMessage(var_152_int); // 0xd4e TObjFunc
	ClearReplies(); // 0xd50 TObjFunc
	var_153_int = 7426; // 0xd52 PushI
	var_154_int = 8197; // 0xd53 PushI
	var_155_int = 8195; // 0xd54 PushI
	AddReply(var_153_int, var_154_int, var_155_int); // 0xd55 TObjFunc
	return 0; // 0xd57 Return
	
Label_3416:
	var_156_int = 8197; // 0xd58 PushI
	var_157_bool = var_40_string == var_156_int; // 0xd59 Eq
	if(var_157_bool == 0) goto Label_3434; // 0xd5a JumpB
	var_158_string = ""; // 0xd5b PushV
	var_158_string = "Neutral"; // 0xd5c MovS
	func_3210(var_41_bool, var_158_string); // 0xd5d Call
	var_159_int = 7427; // 0xd5f PushI
	SetMessage(var_159_int); // 0xd60 TObjFunc
	ClearReplies(); // 0xd62 TObjFunc
	var_160_int = 7428; // 0xd64 PushI
	var_161_int = 8188; // 0xd65 PushI
	var_162_int = 8198; // 0xd66 PushI
	AddReply(var_160_int, var_161_int, var_162_int); // 0xd67 TObjFunc
	return 0; // 0xd69 Return
	
Label_3434:
	var_163_int = 8188; // 0xd6a PushI
	var_164_bool = var_40_string == var_163_int; // 0xd6b Eq
	if(var_164_bool == 0) goto Label_3462; // 0xd6c JumpB
	var_165_object = Obj(); var_166_object = Obj(); // 0xd6d PushV
	var_165_object = var_1_object; // 0xd6e MovT
	var_166_object = var_0_object; // 0xd6f MovT
	func_6340(); // 0xd70 Call
	var_169_string = ""; // 0xd72 PushV
	var_169_string = "Neutral"; // 0xd73 MovS
	func_3210(var_41_bool, var_169_string); // 0xd74 Call
	var_170_int = 7419; // 0xd76 PushI
	SetMessage(var_170_int); // 0xd77 TObjFunc
	ClearReplies(); // 0xd79 TObjFunc
	var_171_int = 7422; // 0xd7b PushI
	var_172_int = 8193; // 0xd7c PushI
	var_173_int = 8191; // 0xd7d PushI
	AddReply(var_171_int, var_172_int, var_173_int); // 0xd7e TObjFunc
	var_174_int = 7423; // 0xd80 PushI
	var_175_int = -1; // 0xd81 PushI
	var_176_int = 8192; // 0xd82 PushI
	AddReply(var_174_int, var_175_int, var_176_int); // 0xd83 TObjFunc
	return 0; // 0xd85 Return
	
Label_3462:
	var_177_int = 8193; // 0xd86 PushI
	var_178_bool = var_40_string == var_177_int; // 0xd87 Eq
	if(var_178_bool == 0) goto Label_3480; // 0xd88 JumpB
	var_179_string = ""; // 0xd89 PushV
	var_179_string = "Neutral"; // 0xd8a MovS
	func_3210(var_41_bool, var_179_string); // 0xd8b Call
	var_180_int = 7424; // 0xd8d PushI
	SetMessage(var_180_int); // 0xd8e TObjFunc
	ClearReplies(); // 0xd90 TObjFunc
	var_181_int = 7425; // 0xd92 PushI
	var_182_int = -1; // 0xd93 PushI
	var_183_int = 8194; // 0xd94 PushI
	AddReply(var_181_int, var_182_int, var_183_int); // 0xd95 TObjFunc
	return 0; // 0xd97 Return
	
Label_3480:
	var_3_string = 1; // 0xd98 TMovB
	var_184_bool = 0; // 0xd99 PushV
	func_6273(var_184_bool); // 0xd9a Call
	if(var_184_bool == 0) goto Label_3488; // 0xd9c JumpB
	lshStopAnimation(); // 0xd9d Func
	goto Label_3490; // 0xd9f Jump
	
Label_3490:
	return 0; // 0xda2 Return
	
Label_3488:
	StopAnimation(); // 0xda0 Func
	
Label_3492:
	return 0; // 0xda4 Return
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool)
{
	var_42_int = 1; // 0xe55 PushI
	if(var_42_int == 0) goto Label_4370; // 0xe56 JumpB
	func_6195(); // 0xe58 Call
	var_44_int = 11314; // 0xe5a PushI
	var_45_bool = var_41_bool == var_44_int; // 0xe5b Eq
	if(var_45_bool == 0) goto Label_3692; // 0xe5c JumpB
	var_46_object = Obj(); var_47_object = Obj(); // 0xe5d PushV
	var_46_object = var_1_object; // 0xe5e MovT
	var_47_object = var_0_object; // 0xe5f MovT
	func_6479(); // 0xe60 Call
	var_48_object = Obj(); var_49_object = Obj(); // 0xe62 PushV
	var_48_object = var_1_object; // 0xe63 MovT
	var_49_object = var_0_object; // 0xe64 MovT
	func_6451(); // 0xe65 Call
	var_96_object = Obj(); var_97_object = Obj(); // 0xe67 PushV
	var_96_object = var_1_object; // 0xe68 MovT
	var_97_object = var_0_object; // 0xe69 MovT
	func_6481(); // 0xe6a Call
	
Label_3692:
	var_122_int = 11315; // 0xe6c PushI
	var_123_bool = var_41_bool == var_122_int; // 0xe6d Eq
	if(var_123_bool == 0) goto Label_3710; // 0xe6e JumpB
	var_124_object = Obj(); var_125_object = Obj(); // 0xe6f PushV
	var_124_object = var_1_object; // 0xe70 MovT
	var_125_object = var_0_object; // 0xe71 MovT
	func_6479(); // 0xe72 Call
	var_126_object = Obj(); var_127_object = Obj(); // 0xe74 PushV
	var_126_object = var_1_object; // 0xe75 MovT
	var_127_object = var_0_object; // 0xe76 MovT
	func_6451(); // 0xe77 Call
	var_128_object = Obj(); var_129_object = Obj(); // 0xe79 PushV
	var_128_object = var_1_object; // 0xe7a MovT
	var_129_object = var_0_object; // 0xe7b MovT
	func_6481(); // 0xe7c Call
	
Label_3710:
	var_130_int = 11318; // 0xe7e PushI
	var_131_bool = var_41_bool == var_130_int; // 0xe7f Eq
	if(var_131_bool == 0) goto Label_3728; // 0xe80 JumpB
	var_132_object = Obj(); var_133_object = Obj(); // 0xe81 PushV
	var_132_object = var_1_object; // 0xe82 MovT
	var_133_object = var_0_object; // 0xe83 MovT
	func_6479(); // 0xe84 Call
	var_134_object = Obj(); var_135_object = Obj(); // 0xe86 PushV
	var_134_object = var_1_object; // 0xe87 MovT
	var_135_object = var_0_object; // 0xe88 MovT
	func_6451(); // 0xe89 Call
	var_136_object = Obj(); var_137_object = Obj(); // 0xe8b PushV
	var_136_object = var_1_object; // 0xe8c MovT
	var_137_object = var_0_object; // 0xe8d MovT
	func_6481(); // 0xe8e Call
	
Label_3728:
	var_138_int = 11340; // 0xe90 PushI
	var_139_bool = var_41_bool == var_138_int; // 0xe91 Eq
	if(var_139_bool == 0) goto Label_3746; // 0xe92 JumpB
	var_140_object = Obj(); var_141_object = Obj(); // 0xe93 PushV
	var_140_object = var_1_object; // 0xe94 MovT
	var_141_object = var_0_object; // 0xe95 MovT
	func_6497(); // 0xe96 Call
	var_142_object = Obj(); var_143_object = Obj(); // 0xe98 PushV
	var_142_object = var_1_object; // 0xe99 MovT
	var_143_object = var_0_object; // 0xe9a MovT
	func_6499(); // 0xe9b Call
	var_146_object = Obj(); var_147_object = Obj(); // 0xe9d PushV
	var_146_object = var_1_object; // 0xe9e MovT
	var_147_object = var_0_object; // 0xe9f MovT
	func_6411(); // 0xea0 Call
	
Label_3746:
	var_153_int = 11341; // 0xea2 PushI
	var_154_bool = var_41_bool == var_153_int; // 0xea3 Eq
	if(var_154_bool == 0) goto Label_3764; // 0xea4 JumpB
	var_155_object = Obj(); var_156_object = Obj(); // 0xea5 PushV
	var_155_object = var_1_object; // 0xea6 MovT
	var_156_object = var_0_object; // 0xea7 MovT
	func_6497(); // 0xea8 Call
	var_157_object = Obj(); var_158_object = Obj(); // 0xeaa PushV
	var_157_object = var_1_object; // 0xeab MovT
	var_158_object = var_0_object; // 0xeac MovT
	func_6499(); // 0xead Call
	var_159_object = Obj(); var_160_object = Obj(); // 0xeaf PushV
	var_159_object = var_1_object; // 0xeb0 MovT
	var_160_object = var_0_object; // 0xeb1 MovT
	func_6411(); // 0xeb2 Call
	
Label_3764:
	var_161_int = 11335; // 0xeb4 PushI
	var_162_bool = var_41_bool == var_161_int; // 0xeb5 Eq
	if(var_162_bool == 0) goto Label_3772; // 0xeb6 JumpB
	var_163_object = Obj(); var_164_object = Obj(); // 0xeb7 PushV
	var_163_object = var_1_object; // 0xeb8 MovT
	var_164_object = var_0_object; // 0xeb9 MovT
	func_6497(); // 0xeba Call
	
Label_3772:
	var_165_int = 11326; // 0xebc PushI
	var_166_bool = var_41_bool == var_165_int; // 0xebd Eq
	if(var_166_bool == 0) goto Label_3780; // 0xebe JumpB
	var_167_object = Obj(); var_168_object = Obj(); // 0xebf PushV
	var_167_object = var_1_object; // 0xec0 MovT
	var_168_object = var_0_object; // 0xec1 MovT
	func_6497(); // 0xec2 Call
	
Label_3780:
	var_169_int = 11285; // 0xec4 PushI
	var_170_bool = var_40_string == var_169_int; // 0xec5 Eq
	if(var_170_bool == 0) goto Label_3841; // 0xec6 JumpB
	var_171_string = ""; // 0xec7 PushV
	var_171_string = "Neutral"; // 0xec8 MovS
	func_3652(var_41_bool, var_171_string); // 0xec9 Call
	var_186_int = 10235; // 0xecb PushI
	SetMessage(var_186_int); // 0xecc TObjFunc
	ClearReplies(); // 0xece TObjFunc
	var_187_bool = 0; // 0xed0 PushV
	var_187_bool = 0; // 0xed1 MovB
	var_188_bool = 0; var_189_object = Obj(); // 0xed2 PushV
	var_189_object = var_1_object; // 0xed3 MovT
	func_6970(var_189_object); // 0xed4 Call
	if(var_188_bool == 0) goto Label_3805; // 0xed6 JumpB
	var_196_bool = 0; var_197_object = Obj(); // 0xed7 PushV
	var_197_object = var_1_object; // 0xed8 MovT
	func_6982(var_197_object); // 0xed9 Call
	if(var_196_bool == 0) goto Label_3805; // 0xedb JumpB
	var_187_bool = 1; // 0xedc MovB
	
Label_3805:
	if(var_187_bool == 0) goto Label_3811; // 0xedd JumpB
	var_198_int = 10236; // 0xede PushI
	var_199_int = 11288; // 0xedf PushI
	var_200_int = 11286; // 0xee0 PushI
	AddReply(var_198_int, var_199_int, var_200_int); // 0xee1 TObjFunc
	
Label_3811:
	var_201_bool = 0; // 0xee3 PushV
	var_201_bool = 0; // 0xee4 MovB
	var_202_bool = 0; var_203_object = Obj(); // 0xee5 PushV
	var_203_object = var_1_object; // 0xee6 MovT
	func_6987(var_203_object); // 0xee7 Call
	if(var_202_bool == 0) goto Label_3824; // 0xee9 JumpB
	var_208_bool = 0; var_209_object = Obj(); // 0xeea PushV
	var_209_object = var_1_object; // 0xeeb MovT
	func_6999(var_209_object); // 0xeec Call
	if(var_208_bool == 0) goto Label_3824; // 0xeee JumpB
	var_201_bool = 1; // 0xeef MovB
	
Label_3824:
	if(var_201_bool == 0) goto Label_3830; // 0xef0 JumpB
	var_210_int = 10266; // 0xef1 PushI
	var_211_int = 11321; // 0xef2 PushI
	var_212_int = 11320; // 0xef3 PushI
	AddReply(var_210_int, var_211_int, var_212_int); // 0xef4 TObjFunc
	
Label_3830:
	var_213_int = 10237; // 0xef6 PushI
	var_214_int = 11089; // 0xef7 PushI
	var_215_int = 11287; // 0xef8 PushI
	AddReply(var_213_int, var_214_int, var_215_int); // 0xef9 TObjFunc
	var_216_int = 11382; // 0xefb PushI
	var_217_int = -1; // 0xefc PushI
	var_218_int = 12578; // 0xefd PushI
	AddReply(var_216_int, var_217_int, var_218_int); // 0xefe TObjFunc
	return 0; // 0xf00 Return
	
Label_3841:
	var_219_int = 11089; // 0xf01 PushI
	var_220_bool = var_40_string == var_219_int; // 0xf02 Eq
	if(var_220_bool == 0) goto Label_3859; // 0xf03 JumpB
	var_221_string = ""; // 0xf04 PushV
	var_221_string = "Neutral"; // 0xf05 MovS
	func_3652(var_41_bool, var_221_string); // 0xf06 Call
	var_222_int = 10063; // 0xf08 PushI
	SetMessage(var_222_int); // 0xf09 TObjFunc
	ClearReplies(); // 0xf0b TObjFunc
	var_223_int = 10064; // 0xf0d PushI
	var_224_int = 11091; // 0xf0e PushI
	var_225_int = 11090; // 0xf0f PushI
	AddReply(var_223_int, var_224_int, var_225_int); // 0xf10 TObjFunc
	return 0; // 0xf12 Return
	
Label_3859:
	var_226_int = 11091; // 0xf13 PushI
	var_227_bool = var_40_string == var_226_int; // 0xf14 Eq
	if(var_227_bool == 0) goto Label_3882; // 0xf15 JumpB
	var_228_string = ""; // 0xf16 PushV
	var_228_string = "Neutral"; // 0xf17 MovS
	func_3652(var_41_bool, var_228_string); // 0xf18 Call
	var_229_int = 10065; // 0xf1a PushI
	SetMessage(var_229_int); // 0xf1b TObjFunc
	ClearReplies(); // 0xf1d TObjFunc
	var_230_int = 10066; // 0xf1f PushI
	var_231_int = 11093; // 0xf20 PushI
	var_232_int = 11092; // 0xf21 PushI
	AddReply(var_230_int, var_231_int, var_232_int); // 0xf22 TObjFunc
	var_233_int = 10070; // 0xf24 PushI
	var_234_int = 11097; // 0xf25 PushI
	var_235_int = 11096; // 0xf26 PushI
	AddReply(var_233_int, var_234_int, var_235_int); // 0xf27 TObjFunc
	return 0; // 0xf29 Return
	
Label_3882:
	var_236_int = 11097; // 0xf2a PushI
	var_237_bool = var_40_string == var_236_int; // 0xf2b Eq
	if(var_237_bool == 0) goto Label_3910; // 0xf2c JumpB
	var_238_string = ""; // 0xf2d PushV
	var_238_string = "Neutral"; // 0xf2e MovS
	func_3652(var_41_bool, var_238_string); // 0xf2f Call
	var_239_int = 10071; // 0xf31 PushI
	SetMessage(var_239_int); // 0xf32 TObjFunc
	ClearReplies(); // 0xf34 TObjFunc
	var_240_int = 10072; // 0xf36 PushI
	var_241_int = 11099; // 0xf37 PushI
	var_242_int = 11098; // 0xf38 PushI
	AddReply(var_240_int, var_241_int, var_242_int); // 0xf39 TObjFunc
	var_243_int = 10080; // 0xf3b PushI
	var_244_int = -1; // 0xf3c PushI
	var_245_int = 11109; // 0xf3d PushI
	AddReply(var_243_int, var_244_int, var_245_int); // 0xf3e TObjFunc
	var_246_int = 10242; // 0xf40 PushI
	var_247_int = 11293; // 0xf41 PushI
	var_248_int = 11292; // 0xf42 PushI
	AddReply(var_246_int, var_247_int, var_248_int); // 0xf43 TObjFunc
	return 0; // 0xf45 Return
	
Label_3910:
	var_249_int = 11293; // 0xf46 PushI
	var_250_bool = var_40_string == var_249_int; // 0xf47 Eq
	if(var_250_bool == 0) goto Label_3933; // 0xf48 JumpB
	var_251_string = ""; // 0xf49 PushV
	var_251_string = "Neutral"; // 0xf4a MovS
	func_3652(var_41_bool, var_251_string); // 0xf4b Call
	var_252_int = 10243; // 0xf4d PushI
	SetMessage(var_252_int); // 0xf4e TObjFunc
	ClearReplies(); // 0xf50 TObjFunc
	var_253_int = 10244; // 0xf52 PushI
	var_254_int = 11110; // 0xf53 PushI
	var_255_int = 11294; // 0xf54 PushI
	AddReply(var_253_int, var_254_int, var_255_int); // 0xf55 TObjFunc
	var_256_int = 10245; // 0xf57 PushI
	var_257_int = 11290; // 0xf58 PushI
	var_258_int = 11295; // 0xf59 PushI
	AddReply(var_256_int, var_257_int, var_258_int); // 0xf5a TObjFunc
	return 0; // 0xf5c Return
	
Label_3933:
	var_259_int = 11110; // 0xf5d PushI
	var_260_bool = var_40_string == var_259_int; // 0xf5e Eq
	if(var_260_bool == 0) goto Label_3956; // 0xf5f JumpB
	var_261_string = ""; // 0xf60 PushV
	var_261_string = "Neutral"; // 0xf61 MovS
	func_3652(var_41_bool, var_261_string); // 0xf62 Call
	var_262_int = 10081; // 0xf64 PushI
	SetMessage(var_262_int); // 0xf65 TObjFunc
	ClearReplies(); // 0xf67 TObjFunc
	var_263_int = 10239; // 0xf69 PushI
	var_264_int = 11290; // 0xf6a PushI
	var_265_int = 11289; // 0xf6b PushI
	AddReply(var_263_int, var_264_int, var_265_int); // 0xf6c TObjFunc
	var_266_int = 10083; // 0xf6e PushI
	var_267_int = -1; // 0xf6f PushI
	var_268_int = 11112; // 0xf70 PushI
	AddReply(var_266_int, var_267_int, var_268_int); // 0xf71 TObjFunc
	return 0; // 0xf73 Return
	
Label_3956:
	var_269_int = 11290; // 0xf74 PushI
	var_270_bool = var_40_string == var_269_int; // 0xf75 Eq
	if(var_270_bool == 0) goto Label_3974; // 0xf76 JumpB
	var_271_string = ""; // 0xf77 PushV
	var_271_string = "Neutral"; // 0xf78 MovS
	func_3652(var_41_bool, var_271_string); // 0xf79 Call
	var_272_int = 10240; // 0xf7b PushI
	SetMessage(var_272_int); // 0xf7c TObjFunc
	ClearReplies(); // 0xf7e TObjFunc
	var_273_int = 10082; // 0xf80 PushI
	var_274_int = -1; // 0xf81 PushI
	var_275_int = 11111; // 0xf82 PushI
	AddReply(var_273_int, var_274_int, var_275_int); // 0xf83 TObjFunc
	return 0; // 0xf85 Return
	
Label_3974:
	var_276_int = 11099; // 0xf86 PushI
	var_277_bool = var_40_string == var_276_int; // 0xf87 Eq
	if(var_277_bool == 0) goto Label_3997; // 0xf88 JumpB
	var_278_string = ""; // 0xf89 PushV
	var_278_string = "Neutral"; // 0xf8a MovS
	func_3652(var_41_bool, var_278_string); // 0xf8b Call
	var_279_int = 10073; // 0xf8d PushI
	SetMessage(var_279_int); // 0xf8e TObjFunc
	ClearReplies(); // 0xf90 TObjFunc
	var_280_int = 10074; // 0xf92 PushI
	var_281_int = 11101; // 0xf93 PushI
	var_282_int = 11100; // 0xf94 PushI
	AddReply(var_280_int, var_281_int, var_282_int); // 0xf95 TObjFunc
	var_283_int = 10079; // 0xf97 PushI
	var_284_int = 11101; // 0xf98 PushI
	var_285_int = 11107; // 0xf99 PushI
	AddReply(var_283_int, var_284_int, var_285_int); // 0xf9a TObjFunc
	return 0; // 0xf9c Return
	
Label_3997:
	var_286_int = 11101; // 0xf9d PushI
	var_287_bool = var_40_string == var_286_int; // 0xf9e Eq
	if(var_287_bool == 0) goto Label_4020; // 0xf9f JumpB
	var_288_string = ""; // 0xfa0 PushV
	var_288_string = "Neutral"; // 0xfa1 MovS
	func_3652(var_41_bool, var_288_string); // 0xfa2 Call
	var_289_int = 10075; // 0xfa4 PushI
	SetMessage(var_289_int); // 0xfa5 TObjFunc
	ClearReplies(); // 0xfa7 TObjFunc
	var_290_int = 10076; // 0xfa9 PushI
	var_291_int = 11093; // 0xfaa PushI
	var_292_int = 11102; // 0xfab PushI
	AddReply(var_290_int, var_291_int, var_292_int); // 0xfac TObjFunc
	var_293_int = 10078; // 0xfae PushI
	var_294_int = -1; // 0xfaf PushI
	var_295_int = 11106; // 0xfb0 PushI
	AddReply(var_293_int, var_294_int, var_295_int); // 0xfb1 TObjFunc
	return 0; // 0xfb3 Return
	
Label_4020:
	var_296_int = 11093; // 0xfb4 PushI
	var_297_bool = var_40_string == var_296_int; // 0xfb5 Eq
	if(var_297_bool == 0) goto Label_4043; // 0xfb6 JumpB
	var_298_string = ""; // 0xfb7 PushV
	var_298_string = "Neutral"; // 0xfb8 MovS
	func_3652(var_41_bool, var_298_string); // 0xfb9 Call
	var_299_int = 10067; // 0xfbb PushI
	SetMessage(var_299_int); // 0xfbc TObjFunc
	ClearReplies(); // 0xfbe TObjFunc
	var_300_int = 10068; // 0xfc0 PushI
	var_301_int = -1; // 0xfc1 PushI
	var_302_int = 11094; // 0xfc2 PushI
	AddReply(var_300_int, var_301_int, var_302_int); // 0xfc3 TObjFunc
	var_303_int = 10069; // 0xfc5 PushI
	var_304_int = -1; // 0xfc6 PushI
	var_305_int = 11095; // 0xfc7 PushI
	AddReply(var_303_int, var_304_int, var_305_int); // 0xfc8 TObjFunc
	return 0; // 0xfca Return
	
Label_4043:
	var_306_int = 11321; // 0xfcb PushI
	var_307_bool = var_40_string == var_306_int; // 0xfcc Eq
	if(var_307_bool == 0) goto Label_4066; // 0xfcd JumpB
	var_308_string = ""; // 0xfce PushV
	var_308_string = "Neutral"; // 0xfcf MovS
	func_3652(var_41_bool, var_308_string); // 0xfd0 Call
	var_309_int = 10267; // 0xfd2 PushI
	SetMessage(var_309_int); // 0xfd3 TObjFunc
	ClearReplies(); // 0xfd5 TObjFunc
	var_310_int = 10268; // 0xfd7 PushI
	var_311_int = 11323; // 0xfd8 PushI
	var_312_int = 11322; // 0xfd9 PushI
	AddReply(var_310_int, var_311_int, var_312_int); // 0xfda TObjFunc
	var_313_int = 10270; // 0xfdc PushI
	var_314_int = 11325; // 0xfdd PushI
	var_315_int = 11324; // 0xfde PushI
	AddReply(var_313_int, var_314_int, var_315_int); // 0xfdf TObjFunc
	return 0; // 0xfe1 Return
	
Label_4066:
	var_316_int = 11325; // 0xfe2 PushI
	var_317_bool = var_40_string == var_316_int; // 0xfe3 Eq
	if(var_317_bool == 0) goto Label_4084; // 0xfe4 JumpB
	var_318_string = ""; // 0xfe5 PushV
	var_318_string = "Neutral"; // 0xfe6 MovS
	func_3652(var_41_bool, var_318_string); // 0xfe7 Call
	var_319_int = 10271; // 0xfe9 PushI
	SetMessage(var_319_int); // 0xfea TObjFunc
	ClearReplies(); // 0xfec TObjFunc
	var_320_int = 10272; // 0xfee PushI
	var_321_int = -1; // 0xfef PushI
	var_322_int = 11326; // 0xff0 PushI
	AddReply(var_320_int, var_321_int, var_322_int); // 0xff1 TObjFunc
	return 0; // 0xff3 Return
	
Label_4084:
	var_323_int = 11323; // 0xff4 PushI
	var_324_bool = var_40_string == var_323_int; // 0xff5 Eq
	if(var_324_bool == 0) goto Label_4107; // 0xff6 JumpB
	var_325_string = ""; // 0xff7 PushV
	var_325_string = "Neutral"; // 0xff8 MovS
	func_3652(var_41_bool, var_325_string); // 0xff9 Call
	var_326_int = 10269; // 0xffb PushI
	SetMessage(var_326_int); // 0xffc TObjFunc
	ClearReplies(); // 0xffe TObjFunc
	var_327_int = 10273; // 0x1000 PushI
	var_328_int = 11328; // 0x1001 PushI
	var_329_int = 11327; // 0x1002 PushI
	AddReply(var_327_int, var_328_int, var_329_int); // 0x1003 TObjFunc
	var_330_int = 10275; // 0x1005 PushI
	var_331_int = 11330; // 0x1006 PushI
	var_332_int = 11329; // 0x1007 PushI
	AddReply(var_330_int, var_331_int, var_332_int); // 0x1008 TObjFunc
	return 0; // 0x100a Return
	
Label_4107:
	var_333_int = 11330; // 0x100b PushI
	var_334_bool = var_40_string == var_333_int; // 0x100c Eq
	if(var_334_bool == 0) goto Label_4125; // 0x100d JumpB
	var_335_string = ""; // 0x100e PushV
	var_335_string = "Neutral"; // 0x100f MovS
	func_3652(var_41_bool, var_335_string); // 0x1010 Call
	var_336_int = 10276; // 0x1012 PushI
	SetMessage(var_336_int); // 0x1013 TObjFunc
	ClearReplies(); // 0x1015 TObjFunc
	var_337_int = 10277; // 0x1017 PushI
	var_338_int = 11332; // 0x1018 PushI
	var_339_int = 11331; // 0x1019 PushI
	AddReply(var_337_int, var_338_int, var_339_int); // 0x101a TObjFunc
	return 0; // 0x101c Return
	
Label_4125:
	var_340_int = 11332; // 0x101d PushI
	var_341_bool = var_40_string == var_340_int; // 0x101e Eq
	if(var_341_bool == 0) goto Label_4148; // 0x101f JumpB
	var_342_string = ""; // 0x1020 PushV
	var_342_string = "Neutral"; // 0x1021 MovS
	func_3652(var_41_bool, var_342_string); // 0x1022 Call
	var_343_int = 10278; // 0x1024 PushI
	SetMessage(var_343_int); // 0x1025 TObjFunc
	ClearReplies(); // 0x1027 TObjFunc
	var_344_int = 10279; // 0x1029 PushI
	var_345_int = 11328; // 0x102a PushI
	var_346_int = 11333; // 0x102b PushI
	AddReply(var_344_int, var_345_int, var_346_int); // 0x102c TObjFunc
	var_347_int = 10280; // 0x102e PushI
	var_348_int = -1; // 0x102f PushI
	var_349_int = 11335; // 0x1030 PushI
	AddReply(var_347_int, var_348_int, var_349_int); // 0x1031 TObjFunc
	return 0; // 0x1033 Return
	
Label_4148:
	var_350_int = 11328; // 0x1034 PushI
	var_351_bool = var_40_string == var_350_int; // 0x1035 Eq
	if(var_351_bool == 0) goto Label_4166; // 0x1036 JumpB
	var_352_string = ""; // 0x1037 PushV
	var_352_string = "Neutral"; // 0x1038 MovS
	func_3652(var_41_bool, var_352_string); // 0x1039 Call
	var_353_int = 10274; // 0x103b PushI
	SetMessage(var_353_int); // 0x103c TObjFunc
	ClearReplies(); // 0x103e TObjFunc
	var_354_int = 10281; // 0x1040 PushI
	var_355_int = 11337; // 0x1041 PushI
	var_356_int = 11336; // 0x1042 PushI
	AddReply(var_354_int, var_355_int, var_356_int); // 0x1043 TObjFunc
	return 0; // 0x1045 Return
	
Label_4166:
	var_357_int = 11337; // 0x1046 PushI
	var_358_bool = var_40_string == var_357_int; // 0x1047 Eq
	if(var_358_bool == 0) goto Label_4184; // 0x1048 JumpB
	var_359_string = ""; // 0x1049 PushV
	var_359_string = "Neutral"; // 0x104a MovS
	func_3652(var_41_bool, var_359_string); // 0x104b Call
	var_360_int = 10282; // 0x104d PushI
	SetMessage(var_360_int); // 0x104e TObjFunc
	ClearReplies(); // 0x1050 TObjFunc
	var_361_int = 10283; // 0x1052 PushI
	var_362_int = 11339; // 0x1053 PushI
	var_363_int = 11338; // 0x1054 PushI
	AddReply(var_361_int, var_362_int, var_363_int); // 0x1055 TObjFunc
	return 0; // 0x1057 Return
	
Label_4184:
	var_364_int = 11339; // 0x1058 PushI
	var_365_bool = var_40_string == var_364_int; // 0x1059 Eq
	if(var_365_bool == 0) goto Label_4207; // 0x105a JumpB
	var_366_string = ""; // 0x105b PushV
	var_366_string = "Neutral"; // 0x105c MovS
	func_3652(var_41_bool, var_366_string); // 0x105d Call
	var_367_int = 10284; // 0x105f PushI
	SetMessage(var_367_int); // 0x1060 TObjFunc
	ClearReplies(); // 0x1062 TObjFunc
	var_368_int = 10285; // 0x1064 PushI
	var_369_int = -1; // 0x1065 PushI
	var_370_int = 11340; // 0x1066 PushI
	AddReply(var_368_int, var_369_int, var_370_int); // 0x1067 TObjFunc
	var_371_int = 10286; // 0x1069 PushI
	var_372_int = -1; // 0x106a PushI
	var_373_int = 11341; // 0x106b PushI
	AddReply(var_371_int, var_372_int, var_373_int); // 0x106c TObjFunc
	return 0; // 0x106e Return
	
Label_4207:
	var_374_int = 11288; // 0x106f PushI
	var_375_bool = var_40_string == var_374_int; // 0x1070 Eq
	if(var_375_bool == 0) goto Label_4230; // 0x1071 JumpB
	var_376_string = ""; // 0x1072 PushV
	var_376_string = "Neutral"; // 0x1073 MovS
	func_3652(var_41_bool, var_376_string); // 0x1074 Call
	var_377_int = 10238; // 0x1076 PushI
	SetMessage(var_377_int); // 0x1077 TObjFunc
	ClearReplies(); // 0x1079 TObjFunc
	var_378_int = 10246; // 0x107b PushI
	var_379_int = 11298; // 0x107c PushI
	var_380_int = 11297; // 0x107d PushI
	AddReply(var_378_int, var_379_int, var_380_int); // 0x107e TObjFunc
	var_381_int = 10253; // 0x1080 PushI
	var_382_int = 11308; // 0x1081 PushI
	var_383_int = 11304; // 0x1082 PushI
	AddReply(var_381_int, var_382_int, var_383_int); // 0x1083 TObjFunc
	return 0; // 0x1085 Return
	
Label_4230:
	var_384_int = 11298; // 0x1086 PushI
	var_385_bool = var_40_string == var_384_int; // 0x1087 Eq
	if(var_385_bool == 0) goto Label_4253; // 0x1088 JumpB
	var_386_string = ""; // 0x1089 PushV
	var_386_string = "Neutral"; // 0x108a MovS
	func_3652(var_41_bool, var_386_string); // 0x108b Call
	var_387_int = 10247; // 0x108d PushI
	SetMessage(var_387_int); // 0x108e TObjFunc
	ClearReplies(); // 0x1090 TObjFunc
	var_388_int = 10248; // 0x1092 PushI
	var_389_int = 11300; // 0x1093 PushI
	var_390_int = 11299; // 0x1094 PushI
	AddReply(var_388_int, var_389_int, var_390_int); // 0x1095 TObjFunc
	var_391_int = 10258; // 0x1097 PushI
	var_392_int = 11308; // 0x1098 PushI
	var_393_int = 11309; // 0x1099 PushI
	AddReply(var_391_int, var_392_int, var_393_int); // 0x109a TObjFunc
	return 0; // 0x109c Return
	
Label_4253:
	var_394_int = 11300; // 0x109d PushI
	var_395_bool = var_40_string == var_394_int; // 0x109e Eq
	if(var_395_bool == 0) goto Label_4276; // 0x109f JumpB
	var_396_string = ""; // 0x10a0 PushV
	var_396_string = "Neutral"; // 0x10a1 MovS
	func_3652(var_41_bool, var_396_string); // 0x10a2 Call
	var_397_int = 10249; // 0x10a4 PushI
	SetMessage(var_397_int); // 0x10a5 TObjFunc
	ClearReplies(); // 0x10a7 TObjFunc
	var_398_int = 10250; // 0x10a9 PushI
	var_399_int = 11302; // 0x10aa PushI
	var_400_int = 11301; // 0x10ab PushI
	AddReply(var_398_int, var_399_int, var_400_int); // 0x10ac TObjFunc
	var_401_int = 10256; // 0x10ae PushI
	var_402_int = 11302; // 0x10af PushI
	var_403_int = 11307; // 0x10b0 PushI
	AddReply(var_401_int, var_402_int, var_403_int); // 0x10b1 TObjFunc
	return 0; // 0x10b3 Return
	
Label_4276:
	var_404_int = 11302; // 0x10b4 PushI
	var_405_bool = var_40_string == var_404_int; // 0x10b5 Eq
	if(var_405_bool == 0) goto Label_4294; // 0x10b6 JumpB
	var_406_string = ""; // 0x10b7 PushV
	var_406_string = "Neutral"; // 0x10b8 MovS
	func_3652(var_41_bool, var_406_string); // 0x10b9 Call
	var_407_int = 10251; // 0x10bb PushI
	SetMessage(var_407_int); // 0x10bc TObjFunc
	ClearReplies(); // 0x10be TObjFunc
	var_408_int = 10259; // 0x10c0 PushI
	var_409_int = 11313; // 0x10c1 PushI
	var_410_int = 11312; // 0x10c2 PushI
	AddReply(var_408_int, var_409_int, var_410_int); // 0x10c3 TObjFunc
	return 0; // 0x10c5 Return
	
Label_4294:
	var_411_int = 11313; // 0x10c6 PushI
	var_412_bool = var_40_string == var_411_int; // 0x10c7 Eq
	if(var_412_bool == 0) goto Label_4317; // 0x10c8 JumpB
	var_413_string = ""; // 0x10c9 PushV
	var_413_string = "Neutral"; // 0x10ca MovS
	func_3652(var_41_bool, var_413_string); // 0x10cb Call
	var_414_int = 10260; // 0x10cd PushI
	SetMessage(var_414_int); // 0x10ce TObjFunc
	ClearReplies(); // 0x10d0 TObjFunc
	var_415_int = 10261; // 0x10d2 PushI
	var_416_int = -1; // 0x10d3 PushI
	var_417_int = 11314; // 0x10d4 PushI
	AddReply(var_415_int, var_416_int, var_417_int); // 0x10d5 TObjFunc
	var_418_int = 10252; // 0x10d7 PushI
	var_419_int = 11308; // 0x10d8 PushI
	var_420_int = 11303; // 0x10d9 PushI
	AddReply(var_418_int, var_419_int, var_420_int); // 0x10da TObjFunc
	return 0; // 0x10dc Return
	
Label_4317:
	var_421_int = 11308; // 0x10dd PushI
	var_422_bool = var_40_string == var_421_int; // 0x10de Eq
	if(var_422_bool == 0) goto Label_4340; // 0x10df JumpB
	var_423_string = ""; // 0x10e0 PushV
	var_423_string = "Neutral"; // 0x10e1 MovS
	func_3652(var_41_bool, var_423_string); // 0x10e2 Call
	var_424_int = 10257; // 0x10e4 PushI
	SetMessage(var_424_int); // 0x10e5 TObjFunc
	ClearReplies(); // 0x10e7 TObjFunc
	var_425_int = 10262; // 0x10e9 PushI
	var_426_int = -1; // 0x10ea PushI
	var_427_int = 11315; // 0x10eb PushI
	AddReply(var_425_int, var_426_int, var_427_int); // 0x10ec TObjFunc
	var_428_int = 10263; // 0x10ee PushI
	var_429_int = 11317; // 0x10ef PushI
	var_430_int = 11316; // 0x10f0 PushI
	AddReply(var_428_int, var_429_int, var_430_int); // 0x10f1 TObjFunc
	return 0; // 0x10f3 Return
	
Label_4340:
	var_431_int = 11317; // 0x10f4 PushI
	var_432_bool = var_40_string == var_431_int; // 0x10f5 Eq
	if(var_432_bool == 0) goto Label_4358; // 0x10f6 JumpB
	var_433_string = ""; // 0x10f7 PushV
	var_433_string = "Neutral"; // 0x10f8 MovS
	func_3652(var_41_bool, var_433_string); // 0x10f9 Call
	var_434_int = 10264; // 0x10fb PushI
	SetMessage(var_434_int); // 0x10fc TObjFunc
	ClearReplies(); // 0x10fe TObjFunc
	var_435_int = 10265; // 0x1100 PushI
	var_436_int = -1; // 0x1101 PushI
	var_437_int = 11318; // 0x1102 PushI
	AddReply(var_435_int, var_436_int, var_437_int); // 0x1103 TObjFunc
	return 0; // 0x1105 Return
	
Label_4358:
	var_3_string = 1; // 0x1106 TMovB
	var_438_bool = 0; // 0x1107 PushV
	func_6273(var_438_bool); // 0x1108 Call
	if(var_438_bool == 0) goto Label_4366; // 0x110a JumpB
	lshStopAnimation(); // 0x110b Func
	goto Label_4368; // 0x110d Jump
	
Label_4368:
	return 0; // 0x1110 Return
	
Label_4366:
	StopAnimation(); // 0x110e Func
	
Label_4370:
	return 0; // 0x1112 Return
}


task_13_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool)
{
	var_42_int = 1; // 0x11f1 PushI
	if(var_42_int == 0) goto Label_5064; // 0x11f2 JumpB
	func_6195(); // 0x11f4 Call
	var_44_int = 12998; // 0x11f6 PushI
	var_45_bool = var_41_bool == var_44_int; // 0x11f7 Eq
	if(var_45_bool == 0) goto Label_4611; // 0x11f8 JumpB
	var_46_object = Obj(); var_47_object = Obj(); // 0x11f9 PushV
	var_46_object = var_1_object; // 0x11fa MovT
	var_47_object = var_0_object; // 0x11fb MovT
	func_6510(); // 0x11fc Call
	var_116_object = Obj(); var_117_object = Obj(); // 0x11fe PushV
	var_116_object = var_1_object; // 0x11ff MovT
	var_117_object = var_0_object; // 0x1200 MovT
	func_6583(); // 0x1201 Call
	
Label_4611:
	var_120_int = 12999; // 0x1203 PushI
	var_121_bool = var_41_bool == var_120_int; // 0x1204 Eq
	if(var_121_bool == 0) goto Label_4624; // 0x1205 JumpB
	var_122_object = Obj(); var_123_object = Obj(); // 0x1206 PushV
	var_122_object = var_1_object; // 0x1207 MovT
	var_123_object = var_0_object; // 0x1208 MovT
	func_6583(); // 0x1209 Call
	var_124_object = Obj(); var_125_object = Obj(); // 0x120b PushV
	var_124_object = var_1_object; // 0x120c MovT
	var_125_object = var_0_object; // 0x120d MovT
	func_6510(); // 0x120e Call
	
Label_4624:
	var_126_int = 13752; // 0x1210 PushI
	var_127_bool = var_41_bool == var_126_int; // 0x1211 Eq
	if(var_127_bool == 0) goto Label_4632; // 0x1212 JumpB
	var_128_object = Obj(); var_129_object = Obj(); // 0x1213 PushV
	var_128_object = var_1_object; // 0x1214 MovT
	var_129_object = var_0_object; // 0x1215 MovT
	func_6583(); // 0x1216 Call
	
Label_4632:
	var_130_int = 12989; // 0x1218 PushI
	var_131_bool = var_41_bool == var_130_int; // 0x1219 Eq
	if(var_131_bool == 0) goto Label_4650; // 0x121a JumpB
	var_132_object = Obj(); var_133_object = Obj(); // 0x121b PushV
	var_132_object = var_1_object; // 0x121c MovT
	var_133_object = var_0_object; // 0x121d MovT
	func_6558(); // 0x121e Call
	var_136_object = Obj(); var_137_object = Obj(); // 0x1220 PushV
	var_136_object = var_1_object; // 0x1221 MovT
	var_137_object = var_0_object; // 0x1222 MovT
	func_6564(var_137_object); // 0x1223 Call
	var_145_object = Obj(); var_146_object = Obj(); // 0x1225 PushV
	var_145_object = var_1_object; // 0x1226 MovT
	var_146_object = var_0_object; // 0x1227 MovT
	func_6314(); // 0x1228 Call
	
Label_4650:
	var_149_int = 12990; // 0x122a PushI
	var_150_bool = var_41_bool == var_149_int; // 0x122b Eq
	if(var_150_bool == 0) goto Label_4668; // 0x122c JumpB
	var_151_object = Obj(); var_152_object = Obj(); // 0x122d PushV
	var_151_object = var_1_object; // 0x122e MovT
	var_152_object = var_0_object; // 0x122f MovT
	func_6558(); // 0x1230 Call
	var_153_object = Obj(); var_154_object = Obj(); // 0x1232 PushV
	var_153_object = var_1_object; // 0x1233 MovT
	var_154_object = var_0_object; // 0x1234 MovT
	func_6564(var_154_object); // 0x1235 Call
	var_155_object = Obj(); var_156_object = Obj(); // 0x1237 PushV
	var_155_object = var_1_object; // 0x1238 MovT
	var_156_object = var_0_object; // 0x1239 MovT
	func_6314(); // 0x123a Call
	
Label_4668:
	var_157_int = 13741; // 0x123c PushI
	var_158_bool = var_41_bool == var_157_int; // 0x123d Eq
	if(var_158_bool == 0) goto Label_4686; // 0x123e JumpB
	var_159_object = Obj(); var_160_object = Obj(); // 0x123f PushV
	var_159_object = var_1_object; // 0x1240 MovT
	var_160_object = var_0_object; // 0x1241 MovT
	func_6575(); // 0x1242 Call
	var_163_object = Obj(); var_164_object = Obj(); // 0x1244 PushV
	var_163_object = var_1_object; // 0x1245 MovT
	var_164_object = var_0_object; // 0x1246 MovT
	func_6332(); // 0x1247 Call
	var_165_object = Obj(); var_166_object = Obj(); // 0x1249 PushV
	var_165_object = var_1_object; // 0x124a MovT
	var_166_object = var_0_object; // 0x124b MovT
	func_6581(); // 0x124c Call
	
Label_4686:
	var_167_int = 13751; // 0x124e PushI
	var_168_bool = var_40_string == var_167_int; // 0x124f Eq
	if(var_168_bool == 0) goto Label_4793; // 0x1250 JumpB
	var_169_bool = 0; // 0x1251 PushV
	var_169_bool = 0; // 0x1252 MovB
	var_170_bool = 0; // 0x1253 PushV
	var_170_bool = 0; // 0x1254 MovB
	var_171_bool = 0; var_172_object = Obj(); // 0x1255 PushV
	var_172_object = var_1_object; // 0x1256 MovT
	func_7088(var_172_object); // 0x1257 Call
	if(var_171_bool == 0) goto Label_4705; // 0x1259 JumpB
	var_177_bool = 0; var_178_object = Obj(); // 0x125a PushV
	var_178_object = var_1_object; // 0x125b MovT
	func_7028(var_178_object); // 0x125c Call
	var_183_bool = var_177_bool == 0; // 0x125e Not
	if(var_183_bool == 0) goto Label_4705; // 0x125f JumpB
	var_170_bool = 1; // 0x1260 MovB
	
Label_4705:
	if(var_170_bool == 0) goto Label_4713; // 0x1261 JumpB
	var_184_bool = 0; var_185_object = Obj(); // 0x1262 PushV
	var_185_object = var_1_object; // 0x1263 MovT
	func_7040(var_185_object); // 0x1264 Call
	var_190_bool = var_184_bool == 0; // 0x1266 Not
	if(var_190_bool == 0) goto Label_4713; // 0x1267 JumpB
	var_169_bool = 1; // 0x1268 MovB
	
Label_4713:
	if(var_169_bool == 0) goto Label_4740; // 0x1269 JumpB
	var_191_string = ""; // 0x126a PushV
	var_191_string = "Neutral"; // 0x126b MovS
	func_4576(var_41_bool, var_191_string); // 0x126c Call
	var_206_int = 12584; // 0x126e PushI
	SetMessage(var_206_int); // 0x126f TObjFunc
	ClearReplies(); // 0x1271 TObjFunc
	var_207_int = 11771; // 0x1273 PushI
	var_208_int = 12991; // 0x1274 PushI
	var_209_int = 12979; // 0x1275 PushI
	AddReply(var_207_int, var_208_int, var_209_int); // 0x1276 TObjFunc
	var_210_bool = 0; var_211_object = Obj(); // 0x1278 PushV
	var_211_object = var_1_object; // 0x1279 MovT
	func_7016(var_211_object); // 0x127a Call
	var_216_bool = var_210_bool == 0; // 0x127c Not
	if(var_216_bool == 0) goto Label_4739; // 0x127d JumpB
	var_217_int = 12585; // 0x127e PushI
	var_218_int = 13755; // 0x127f PushI
	var_219_int = 13752; // 0x1280 PushI
	AddReply(var_217_int, var_218_int, var_219_int); // 0x1281 TObjFunc
	
Label_4739:
	return 0; // 0x1283 Return
	
Label_4740:
	var_220_string = ""; // 0x1284 PushV
	var_220_string = "Neutral"; // 0x1285 MovS
	func_4576(var_41_bool, var_220_string); // 0x1286 Call
	var_221_int = 11765; // 0x1288 PushI
	SetMessage(var_221_int); // 0x1289 TObjFunc
	ClearReplies(); // 0x128b TObjFunc
	var_222_bool = 0; // 0x128d PushV
	var_222_bool = 0; // 0x128e MovB
	var_223_bool = 0; var_224_object = Obj(); // 0x128f PushV
	var_224_object = var_1_object; // 0x1290 MovT
	func_7052(var_224_object); // 0x1291 Call
	if(var_223_bool == 0) goto Label_4762; // 0x1293 JumpB
	var_229_bool = 0; var_230_object = Obj(); // 0x1294 PushV
	var_230_object = var_1_object; // 0x1295 MovT
	func_7064(var_230_object); // 0x1296 Call
	if(var_229_bool == 0) goto Label_4762; // 0x1298 JumpB
	var_222_bool = 1; // 0x1299 MovB
	
Label_4762:
	if(var_222_bool == 0) goto Label_4768; // 0x129a JumpB
	var_235_int = 11767; // 0x129b PushI
	var_236_int = 12977; // 0x129c PushI
	var_237_int = 12975; // 0x129d PushI
	AddReply(var_235_int, var_236_int, var_237_int); // 0x129e TObjFunc
	
Label_4768:
	var_238_bool = 0; // 0x12a0 PushV
	var_238_bool = 0; // 0x12a1 MovB
	var_239_bool = 0; var_240_object = Obj(); // 0x12a2 PushV
	var_240_object = var_1_object; // 0x12a3 MovT
	func_7028(var_240_object); // 0x12a4 Call
	if(var_239_bool == 0) goto Label_4781; // 0x12a6 JumpB
	var_241_bool = 0; var_242_object = Obj(); // 0x12a7 PushV
	var_242_object = var_1_object; // 0x12a8 MovT
	func_7076(var_242_object); // 0x12a9 Call
	if(var_241_bool == 0) goto Label_4781; // 0x12ab JumpB
	var_238_bool = 1; // 0x12ac MovB
	
Label_4781:
	if(var_238_bool == 0) goto Label_4787; // 0x12ad JumpB
	var_247_int = 12570; // 0x12ae PushI
	var_248_int = 13740; // 0x12af PushI
	var_249_int = 13739; // 0x12b0 PushI
	AddReply(var_247_int, var_248_int, var_249_int); // 0x12b1 TObjFunc
	
Label_4787:
	var_250_int = 11766; // 0x12b3 PushI
	var_251_int = -1; // 0x12b4 PushI
	var_252_int = 12974; // 0x12b5 PushI
	AddReply(var_250_int, var_251_int, var_252_int); // 0x12b6 TObjFunc
	return 0; // 0x12b8 Return
	
Label_4793:
	var_253_int = 13740; // 0x12b9 PushI
	var_254_bool = var_40_string == var_253_int; // 0x12ba Eq
	if(var_254_bool == 0) goto Label_4811; // 0x12bb JumpB
	var_255_string = ""; // 0x12bc PushV
	var_255_string = "Neutral"; // 0x12bd MovS
	func_4576(var_41_bool, var_255_string); // 0x12be Call
	var_256_int = 12571; // 0x12c0 PushI
	SetMessage(var_256_int); // 0x12c1 TObjFunc
	ClearReplies(); // 0x12c3 TObjFunc
	var_257_int = 12592; // 0x12c5 PushI
	var_258_int = 13763; // 0x12c6 PushI
	var_259_int = 13762; // 0x12c7 PushI
	AddReply(var_257_int, var_258_int, var_259_int); // 0x12c8 TObjFunc
	return 0; // 0x12ca Return
	
Label_4811:
	var_260_int = 13763; // 0x12cb PushI
	var_261_bool = var_40_string == var_260_int; // 0x12cc Eq
	if(var_261_bool == 0) goto Label_4829; // 0x12cd JumpB
	var_262_string = ""; // 0x12ce PushV
	var_262_string = "Neutral"; // 0x12cf MovS
	func_4576(var_41_bool, var_262_string); // 0x12d0 Call
	var_263_int = 12593; // 0x12d2 PushI
	SetMessage(var_263_int); // 0x12d3 TObjFunc
	ClearReplies(); // 0x12d5 TObjFunc
	var_264_int = 12594; // 0x12d7 PushI
	var_265_int = 13765; // 0x12d8 PushI
	var_266_int = 13764; // 0x12d9 PushI
	AddReply(var_264_int, var_265_int, var_266_int); // 0x12da TObjFunc
	return 0; // 0x12dc Return
	
Label_4829:
	var_267_int = 13765; // 0x12dd PushI
	var_268_bool = var_40_string == var_267_int; // 0x12de Eq
	if(var_268_bool == 0) goto Label_4847; // 0x12df JumpB
	var_269_string = ""; // 0x12e0 PushV
	var_269_string = "Neutral"; // 0x12e1 MovS
	func_4576(var_41_bool, var_269_string); // 0x12e2 Call
	var_270_int = 12595; // 0x12e4 PushI
	SetMessage(var_270_int); // 0x12e5 TObjFunc
	ClearReplies(); // 0x12e7 TObjFunc
	var_271_int = 12572; // 0x12e9 PushI
	var_272_int = -1; // 0x12ea PushI
	var_273_int = 13741; // 0x12eb PushI
	AddReply(var_271_int, var_272_int, var_273_int); // 0x12ec TObjFunc
	return 0; // 0x12ee Return
	
Label_4847:
	var_274_int = 12977; // 0x12ef PushI
	var_275_bool = var_40_string == var_274_int; // 0x12f0 Eq
	if(var_275_bool == 0) goto Label_4870; // 0x12f1 JumpB
	var_276_string = ""; // 0x12f2 PushV
	var_276_string = "Neutral"; // 0x12f3 MovS
	func_4576(var_41_bool, var_276_string); // 0x12f4 Call
	var_277_int = 11769; // 0x12f6 PushI
	SetMessage(var_277_int); // 0x12f7 TObjFunc
	ClearReplies(); // 0x12f9 TObjFunc
	var_278_int = 11770; // 0x12fb PushI
	var_279_int = 12981; // 0x12fc PushI
	var_280_int = 12978; // 0x12fd PushI
	AddReply(var_278_int, var_279_int, var_280_int); // 0x12fe TObjFunc
	var_281_int = 11772; // 0x1300 PushI
	var_282_int = 12981; // 0x1301 PushI
	var_283_int = 12980; // 0x1302 PushI
	AddReply(var_281_int, var_282_int, var_283_int); // 0x1303 TObjFunc
	return 0; // 0x1305 Return
	
Label_4870:
	var_284_int = 12981; // 0x1306 PushI
	var_285_bool = var_40_string == var_284_int; // 0x1307 Eq
	if(var_285_bool == 0) goto Label_4888; // 0x1308 JumpB
	var_286_string = ""; // 0x1309 PushV
	var_286_string = "Neutral"; // 0x130a MovS
	func_4576(var_41_bool, var_286_string); // 0x130b Call
	var_287_int = 11773; // 0x130d PushI
	SetMessage(var_287_int); // 0x130e TObjFunc
	ClearReplies(); // 0x1310 TObjFunc
	var_288_int = 11774; // 0x1312 PushI
	var_289_int = 12984; // 0x1313 PushI
	var_290_int = 12983; // 0x1314 PushI
	AddReply(var_288_int, var_289_int, var_290_int); // 0x1315 TObjFunc
	return 0; // 0x1317 Return
	
Label_4888:
	var_291_int = 12984; // 0x1318 PushI
	var_292_bool = var_40_string == var_291_int; // 0x1319 Eq
	if(var_292_bool == 0) goto Label_4911; // 0x131a JumpB
	var_293_string = ""; // 0x131b PushV
	var_293_string = "Neutral"; // 0x131c MovS
	func_4576(var_41_bool, var_293_string); // 0x131d Call
	var_294_int = 11775; // 0x131f PushI
	SetMessage(var_294_int); // 0x1320 TObjFunc
	ClearReplies(); // 0x1322 TObjFunc
	var_295_int = 11776; // 0x1324 PushI
	var_296_int = 12987; // 0x1325 PushI
	var_297_int = 12985; // 0x1326 PushI
	AddReply(var_295_int, var_296_int, var_297_int); // 0x1327 TObjFunc
	var_298_int = 11777; // 0x1329 PushI
	var_299_int = 12987; // 0x132a PushI
	var_300_int = 12986; // 0x132b PushI
	AddReply(var_298_int, var_299_int, var_300_int); // 0x132c TObjFunc
	return 0; // 0x132e Return
	
Label_4911:
	var_301_int = 12987; // 0x132f PushI
	var_302_bool = var_40_string == var_301_int; // 0x1330 Eq
	if(var_302_bool == 0) goto Label_4934; // 0x1331 JumpB
	var_303_string = ""; // 0x1332 PushV
	var_303_string = "Neutral"; // 0x1333 MovS
	func_4576(var_41_bool, var_303_string); // 0x1334 Call
	var_304_int = 11778; // 0x1336 PushI
	SetMessage(var_304_int); // 0x1337 TObjFunc
	ClearReplies(); // 0x1339 TObjFunc
	var_305_int = 11779; // 0x133b PushI
	var_306_int = -1; // 0x133c PushI
	var_307_int = 12989; // 0x133d PushI
	AddReply(var_305_int, var_306_int, var_307_int); // 0x133e TObjFunc
	var_308_int = 11780; // 0x1340 PushI
	var_309_int = -1; // 0x1341 PushI
	var_310_int = 12990; // 0x1342 PushI
	AddReply(var_308_int, var_309_int, var_310_int); // 0x1343 TObjFunc
	return 0; // 0x1345 Return
	
Label_4934:
	var_311_int = 13755; // 0x1346 PushI
	var_312_bool = var_40_string == var_311_int; // 0x1347 Eq
	if(var_312_bool == 0) goto Label_4952; // 0x1348 JumpB
	var_313_string = ""; // 0x1349 PushV
	var_313_string = "Neutral"; // 0x134a MovS
	func_4576(var_41_bool, var_313_string); // 0x134b Call
	var_314_int = 12587; // 0x134d PushI
	SetMessage(var_314_int); // 0x134e TObjFunc
	ClearReplies(); // 0x1350 TObjFunc
	var_315_int = 12588; // 0x1352 PushI
	var_316_int = 12993; // 0x1353 PushI
	var_317_int = 13756; // 0x1354 PushI
	AddReply(var_315_int, var_316_int, var_317_int); // 0x1355 TObjFunc
	return 0; // 0x1357 Return
	
Label_4952:
	var_318_int = 12991; // 0x1358 PushI
	var_319_bool = var_40_string == var_318_int; // 0x1359 Eq
	if(var_319_bool == 0) goto Label_4970; // 0x135a JumpB
	var_320_string = ""; // 0x135b PushV
	var_320_string = "Neutral"; // 0x135c MovS
	func_4576(var_41_bool, var_320_string); // 0x135d Call
	var_321_int = 11781; // 0x135f PushI
	SetMessage(var_321_int); // 0x1360 TObjFunc
	ClearReplies(); // 0x1362 TObjFunc
	var_322_int = 11782; // 0x1364 PushI
	var_323_int = 12993; // 0x1365 PushI
	var_324_int = 12992; // 0x1366 PushI
	AddReply(var_322_int, var_323_int, var_324_int); // 0x1367 TObjFunc
	return 0; // 0x1369 Return
	
Label_4970:
	var_325_int = 12993; // 0x136a PushI
	var_326_bool = var_40_string == var_325_int; // 0x136b Eq
	if(var_326_bool == 0) goto Label_4993; // 0x136c JumpB
	var_327_string = ""; // 0x136d PushV
	var_327_string = "Neutral"; // 0x136e MovS
	func_4576(var_41_bool, var_327_string); // 0x136f Call
	var_328_int = 11783; // 0x1371 PushI
	SetMessage(var_328_int); // 0x1372 TObjFunc
	ClearReplies(); // 0x1374 TObjFunc
	var_329_int = 12589; // 0x1376 PushI
	var_330_int = 12995; // 0x1377 PushI
	var_331_int = 13758; // 0x1378 PushI
	AddReply(var_329_int, var_330_int, var_331_int); // 0x1379 TObjFunc
	var_332_int = 11784; // 0x137b PushI
	var_333_int = 13760; // 0x137c PushI
	var_334_int = 12994; // 0x137d PushI
	AddReply(var_332_int, var_333_int, var_334_int); // 0x137e TObjFunc
	return 0; // 0x1380 Return
	
Label_4993:
	var_335_int = 12995; // 0x1381 PushI
	var_336_bool = var_40_string == var_335_int; // 0x1382 Eq
	if(var_336_bool == 0) goto Label_5011; // 0x1383 JumpB
	var_337_string = ""; // 0x1384 PushV
	var_337_string = "Neutral"; // 0x1385 MovS
	func_4576(var_41_bool, var_337_string); // 0x1386 Call
	var_338_int = 11785; // 0x1388 PushI
	SetMessage(var_338_int); // 0x1389 TObjFunc
	ClearReplies(); // 0x138b TObjFunc
	var_339_int = 12590; // 0x138d PushI
	var_340_int = 13760; // 0x138e PushI
	var_341_int = 13759; // 0x138f PushI
	AddReply(var_339_int, var_340_int, var_341_int); // 0x1390 TObjFunc
	return 0; // 0x1392 Return
	
Label_5011:
	var_342_int = 13760; // 0x1393 PushI
	var_343_bool = var_40_string == var_342_int; // 0x1394 Eq
	if(var_343_bool == 0) goto Label_5029; // 0x1395 JumpB
	var_344_string = ""; // 0x1396 PushV
	var_344_string = "Neutral"; // 0x1397 MovS
	func_4576(var_41_bool, var_344_string); // 0x1398 Call
	var_345_int = 12591; // 0x139a PushI
	SetMessage(var_345_int); // 0x139b TObjFunc
	ClearReplies(); // 0x139d TObjFunc
	var_346_int = 11786; // 0x139f PushI
	var_347_int = 12997; // 0x13a0 PushI
	var_348_int = 12996; // 0x13a1 PushI
	AddReply(var_346_int, var_347_int, var_348_int); // 0x13a2 TObjFunc
	return 0; // 0x13a4 Return
	
Label_5029:
	var_349_int = 12997; // 0x13a5 PushI
	var_350_bool = var_40_string == var_349_int; // 0x13a6 Eq
	if(var_350_bool == 0) goto Label_5052; // 0x13a7 JumpB
	var_351_string = ""; // 0x13a8 PushV
	var_351_string = "Neutral"; // 0x13a9 MovS
	func_4576(var_41_bool, var_351_string); // 0x13aa Call
	var_352_int = 11787; // 0x13ac PushI
	SetMessage(var_352_int); // 0x13ad TObjFunc
	ClearReplies(); // 0x13af TObjFunc
	var_353_int = 11788; // 0x13b1 PushI
	var_354_int = -1; // 0x13b2 PushI
	var_355_int = 12998; // 0x13b3 PushI
	AddReply(var_353_int, var_354_int, var_355_int); // 0x13b4 TObjFunc
	var_356_int = 11789; // 0x13b6 PushI
	var_357_int = -1; // 0x13b7 PushI
	var_358_int = 12999; // 0x13b8 PushI
	AddReply(var_356_int, var_357_int, var_358_int); // 0x13b9 TObjFunc
	return 0; // 0x13bb Return
	
Label_5052:
	var_3_string = 1; // 0x13bc TMovB
	var_359_bool = 0; // 0x13bd PushV
	func_6273(var_359_bool); // 0x13be Call
	if(var_359_bool == 0) goto Label_5060; // 0x13c0 JumpB
	lshStopAnimation(); // 0x13c1 Func
	goto Label_5062; // 0x13c3 Jump
	
Label_5062:
	return 0; // 0x13c6 Return
	
Label_5060:
	StopAnimation(); // 0x13c4 Func
	
Label_5064:
	return 0; // 0x13c8 Return
}


task_15_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_int, var_36_int, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool)
{
	var_42_int = 1; // 0x1475 PushI
	if(var_42_int == 0) goto Label_5442; // 0x1476 JumpB
	func_6195(); // 0x1478 Call
	var_44_int = 13432; // 0x147a PushI
	var_45_bool = var_40_string == var_44_int; // 0x147b Eq
	if(var_45_bool == 0) goto Label_5299; // 0x147c JumpB
	var_46_bool = 0; // 0x147d PushV
	var_46_bool = 0; // 0x147e MovB
	var_47_bool = 0; var_48_object = Obj(); // 0x147f PushV
	var_48_object = var_1_object; // 0x1480 MovT
	func_7148(var_48_object); // 0x1481 Call
	if(var_47_bool == 0) goto Label_5258; // 0x1483 JumpB
	var_55_bool = 0; var_56_object = Obj(); // 0x1484 PushV
	var_56_object = var_1_object; // 0x1485 MovT
	func_7136(var_56_object); // 0x1486 Call
	if(var_55_bool == 0) goto Label_5258; // 0x1488 JumpB
	var_46_bool = 1; // 0x1489 MovB
	
Label_5258:
	if(var_46_bool == 0) goto Label_5284; // 0x148a JumpB
	var_61_object = Obj(); var_62_object = Obj(); // 0x148b PushV
	var_61_object = var_1_object; // 0x148c MovT
	var_62_object = var_0_object; // 0x148d MovT
	func_6648(); // 0x148e Call
	var_65_string = ""; // 0x1490 PushV
	var_65_string = "Neutral"; // 0x1491 MovS
	func_5220(var_41_bool, var_65_string); // 0x1492 Call
	var_80_int = 12275; // 0x1494 PushI
	SetMessage(var_80_int); // 0x1495 TObjFunc
	ClearReplies(); // 0x1497 TObjFunc
	var_81_int = 12276; // 0x1499 PushI
	var_82_int = 13435; // 0x149a PushI
	var_83_int = 13433; // 0x149b PushI
	AddReply(var_81_int, var_82_int, var_83_int); // 0x149c TObjFunc
	var_84_int = 12277; // 0x149e PushI
	var_85_int = 13435; // 0x149f PushI
	var_86_int = 13434; // 0x14a0 PushI
	AddReply(var_84_int, var_85_int, var_86_int); // 0x14a1 TObjFunc
	return 0; // 0x14a3 Return
	
Label_5284:
	var_87_string = ""; // 0x14a4 PushV
	var_87_string = "Neutral"; // 0x14a5 MovS
	func_5220(var_41_bool, var_87_string); // 0x14a6 Call
	var_88_int = 13779; // 0x14a8 PushI
	SetMessage(var_88_int); // 0x14a9 TObjFunc
	ClearReplies(); // 0x14ab TObjFunc
	var_89_int = 13780; // 0x14ad PushI
	var_90_int = -1; // 0x14ae PushI
	var_91_int = 15016; // 0x14af PushI
	AddReply(var_89_int, var_90_int, var_91_int); // 0x14b0 TObjFunc
	return 0; // 0x14b2 Return
	
Label_5299:
	var_92_int = 13435; // 0x14b3 PushI
	var_93_bool = var_40_string == var_92_int; // 0x14b4 Eq
	if(var_93_bool == 0) goto Label_5322; // 0x14b5 JumpB
	var_94_string = ""; // 0x14b6 PushV
	var_94_string = "Neutral"; // 0x14b7 MovS
	func_5220(var_41_bool, var_94_string); // 0x14b8 Call
	var_95_int = 12278; // 0x14ba PushI
	SetMessage(var_95_int); // 0x14bb TObjFunc
	ClearReplies(); // 0x14bd TObjFunc
	var_96_int = 12279; // 0x14bf PushI
	var_97_int = 13439; // 0x14c0 PushI
	var_98_int = 13437; // 0x14c1 PushI
	AddReply(var_96_int, var_97_int, var_98_int); // 0x14c2 TObjFunc
	var_99_int = 12280; // 0x14c4 PushI
	var_100_int = 13439; // 0x14c5 PushI
	var_101_int = 13438; // 0x14c6 PushI
	AddReply(var_99_int, var_100_int, var_101_int); // 0x14c7 TObjFunc
	return 0; // 0x14c9 Return
	
Label_5322:
	var_102_int = 13439; // 0x14ca PushI
	var_103_bool = var_40_string == var_102_int; // 0x14cb Eq
	if(var_103_bool == 0) goto Label_5340; // 0x14cc JumpB
	var_104_string = ""; // 0x14cd PushV
	var_104_string = "Neutral"; // 0x14ce MovS
	func_5220(var_41_bool, var_104_string); // 0x14cf Call
	var_105_int = 12281; // 0x14d1 PushI
	SetMessage(var_105_int); // 0x14d2 TObjFunc
	ClearReplies(); // 0x14d4 TObjFunc
	var_106_int = 12282; // 0x14d6 PushI
	var_107_int = 13442; // 0x14d7 PushI
	var_108_int = 13441; // 0x14d8 PushI
	AddReply(var_106_int, var_107_int, var_108_int); // 0x14d9 TObjFunc
	return 0; // 0x14db Return
	
Label_5340:
	var_109_int = 13442; // 0x14dc PushI
	var_110_bool = var_40_string == var_109_int; // 0x14dd Eq
	if(var_110_bool == 0) goto Label_5358; // 0x14de JumpB
	var_111_string = ""; // 0x14df PushV
	var_111_string = "Neutral"; // 0x14e0 MovS
	func_5220(var_41_bool, var_111_string); // 0x14e1 Call
	var_112_int = 12283; // 0x14e3 PushI
	SetMessage(var_112_int); // 0x14e4 TObjFunc
	ClearReplies(); // 0x14e6 TObjFunc
	var_113_int = 12284; // 0x14e8 PushI
	var_114_int = 13444; // 0x14e9 PushI
	var_115_int = 13443; // 0x14ea PushI
	AddReply(var_113_int, var_114_int, var_115_int); // 0x14eb TObjFunc
	return 0; // 0x14ed Return
	
Label_5358:
	var_116_int = 13444; // 0x14ee PushI
	var_117_bool = var_40_string == var_116_int; // 0x14ef Eq
	if(var_117_bool == 0) goto Label_5376; // 0x14f0 JumpB
	var_118_string = ""; // 0x14f1 PushV
	var_118_string = "Neutral"; // 0x14f2 MovS
	func_5220(var_41_bool, var_118_string); // 0x14f3 Call
	var_119_int = 12285; // 0x14f5 PushI
	SetMessage(var_119_int); // 0x14f6 TObjFunc
	ClearReplies(); // 0x14f8 TObjFunc
	var_120_int = 12286; // 0x14fa PushI
	var_121_int = 13446; // 0x14fb PushI
	var_122_int = 13445; // 0x14fc PushI
	AddReply(var_120_int, var_121_int, var_122_int); // 0x14fd TObjFunc
	return 0; // 0x14ff Return
	
Label_5376:
	var_123_int = 13446; // 0x1500 PushI
	var_124_bool = var_40_string == var_123_int; // 0x1501 Eq
	if(var_124_bool == 0) goto Label_5394; // 0x1502 JumpB
	var_125_string = ""; // 0x1503 PushV
	var_125_string = "Neutral"; // 0x1504 MovS
	func_5220(var_41_bool, var_125_string); // 0x1505 Call
	var_126_int = 12287; // 0x1507 PushI
	SetMessage(var_126_int); // 0x1508 TObjFunc
	ClearReplies(); // 0x150a TObjFunc
	var_127_int = 12288; // 0x150c PushI
	var_128_int = 13448; // 0x150d PushI
	var_129_int = 13447; // 0x150e PushI
	AddReply(var_127_int, var_128_int, var_129_int); // 0x150f TObjFunc
	return 0; // 0x1511 Return
	
Label_5394:
	var_130_int = 13448; // 0x1512 PushI
	var_131_bool = var_40_string == var_130_int; // 0x1513 Eq
	if(var_131_bool == 0) goto Label_5412; // 0x1514 JumpB
	var_132_string = ""; // 0x1515 PushV
	var_132_string = "Neutral"; // 0x1516 MovS
	func_5220(var_41_bool, var_132_string); // 0x1517 Call
	var_133_int = 12289; // 0x1519 PushI
	SetMessage(var_133_int); // 0x151a TObjFunc
	ClearReplies(); // 0x151c TObjFunc
	var_134_int = 12290; // 0x151e PushI
	var_135_int = 13450; // 0x151f PushI
	var_136_int = 13449; // 0x1520 PushI
	AddReply(var_134_int, var_135_int, var_136_int); // 0x1521 TObjFunc
	return 0; // 0x1523 Return
	
Label_5412:
	var_137_int = 13450; // 0x1524 PushI
	var_138_bool = var_40_string == var_137_int; // 0x1525 Eq
	if(var_138_bool == 0) goto Label_5430; // 0x1526 JumpB
	var_139_string = ""; // 0x1527 PushV
	var_139_string = "Neutral"; // 0x1528 MovS
	func_5220(var_41_bool, var_139_string); // 0x1529 Call
	var_140_int = 12291; // 0x152b PushI
	SetMessage(var_140_int); // 0x152c TObjFunc
	ClearReplies(); // 0x152e TObjFunc
	var_141_int = 12292; // 0x1530 PushI
	var_142_int = -1; // 0x1531 PushI
	var_143_int = 13451; // 0x1532 PushI
	AddReply(var_141_int, var_142_int, var_143_int); // 0x1533 TObjFunc
	return 0; // 0x1535 Return
	
Label_5430:
	var_3_string = 1; // 0x1536 TMovB
	var_144_bool = 0; // 0x1537 PushV
	func_6273(var_144_bool); // 0x1538 Call
	if(var_144_bool == 0) goto Label_5438; // 0x153a JumpB
	lshStopAnimation(); // 0x153b Func
	goto Label_5440; // 0x153d Jump
	
Label_5440:
	return 0; // 0x1540 Return
	
Label_5438:
	StopAnimation(); // 0x153e Func
	
Label_5442:
	return 0; // 0x1542 Return
}


task_17_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_int, var_41_int)
{
	var_42_int = 1; // 0x15fe PushI
	if(var_42_int == 0) goto Label_6092; // 0x15ff JumpB
	func_6195(); // 0x1601 Call
	var_44_int = 15244; // 0x1603 PushI
	var_45_bool = var_41_int == var_44_int; // 0x1604 Eq
	if(var_45_bool == 0) goto Label_5643; // 0x1605 JumpB
	var_46_object = Obj(); var_47_object = Obj(); // 0x1606 PushV
	var_46_object = var_1_object; // 0x1607 MovT
	var_47_object = var_0_object; // 0x1608 MovT
	func_6660(); // 0x1609 Call
	
Label_5643:
	var_90_int = 15245; // 0x160b PushI
	var_91_bool = var_41_int == var_90_int; // 0x160c Eq
	if(var_91_bool == 0) goto Label_5651; // 0x160d JumpB
	var_92_object = Obj(); var_93_object = Obj(); // 0x160e PushV
	var_92_object = var_1_object; // 0x160f MovT
	var_93_object = var_0_object; // 0x1610 MovT
	func_6660(); // 0x1611 Call
	
Label_5651:
	var_94_int = 15247; // 0x1613 PushI
	var_95_bool = var_41_int == var_94_int; // 0x1614 Eq
	if(var_95_bool == 0) goto Label_5659; // 0x1615 JumpB
	var_96_object = Obj(); var_97_object = Obj(); // 0x1616 PushV
	var_96_object = var_1_object; // 0x1617 MovT
	var_97_object = var_0_object; // 0x1618 MovT
	func_6695(); // 0x1619 Call
	
Label_5659:
	var_100_int = 15264; // 0x161b PushI
	var_101_bool = var_41_int == var_100_int; // 0x161c Eq
	if(var_101_bool == 0) goto Label_5667; // 0x161d JumpB
	var_102_object = Obj(); var_103_object = Obj(); // 0x161e PushV
	var_102_object = var_1_object; // 0x161f MovT
	var_103_object = var_0_object; // 0x1620 MovT
	func_6677(); // 0x1621 Call
	
Label_5667:
	var_106_int = 15229; // 0x1623 PushI
	var_107_bool = var_40_int == var_106_int; // 0x1624 Eq
	if(var_107_bool == 0) goto Label_5739; // 0x1625 JumpB
	var_108_bool = 0; var_109_object = Obj(); // 0x1626 PushV
	var_109_object = var_1_object; // 0x1627 MovT
	func_7160(var_109_object); // 0x1628 Call
	if(var_108_bool == 0) goto Label_5695; // 0x162a JumpB
	var_116_object = Obj(); var_117_object = Obj(); // 0x162b PushV
	var_116_object = var_1_object; // 0x162c MovT
	var_117_object = var_0_object; // 0x162d MovT
	func_6654(); // 0x162e Call
	var_120_string = ""; // 0x1630 PushV
	var_120_string = "Neutral"; // 0x1631 MovS
	func_5613(var_41_int, var_120_string); // 0x1632 Call
	var_135_int = 13994; // 0x1634 PushI
	SetMessage(var_135_int); // 0x1635 TObjFunc
	ClearReplies(); // 0x1637 TObjFunc
	var_136_int = 13995; // 0x1639 PushI
	var_137_int = 15231; // 0x163a PushI
	var_138_int = 15230; // 0x163b PushI
	AddReply(var_136_int, var_137_int, var_138_int); // 0x163c TObjFunc
	return 0; // 0x163e Return
	
Label_5695:
	var_139_string = ""; // 0x163f PushV
	var_139_string = "Neutral"; // 0x1640 MovS
	func_5613(var_41_int, var_139_string); // 0x1641 Call
	var_140_int = 14011; // 0x1643 PushI
	SetMessage(var_140_int); // 0x1644 TObjFunc
	ClearReplies(); // 0x1646 TObjFunc
	var_141_bool = 0; var_142_object = Obj(); // 0x1648 PushV
	var_142_object = var_1_object; // 0x1649 MovT
	func_7232(var_142_object); // 0x164a Call
	if(var_141_bool == 0) goto Label_5714; // 0x164c JumpB
	var_147_int = 14012; // 0x164d PushI
	var_148_int = 15248; // 0x164e PushI
	var_149_int = 15247; // 0x164f PushI
	AddReply(var_147_int, var_148_int, var_149_int); // 0x1650 TObjFunc
	
Label_5714:
	var_150_bool = 0; // 0x1652 PushV
	var_150_bool = 0; // 0x1653 MovB
	var_151_bool = 0; var_152_object = Obj(); // 0x1654 PushV
	var_152_object = var_1_object; // 0x1655 MovT
	func_7184(var_152_object); // 0x1656 Call
	if(var_151_bool == 0) goto Label_5727; // 0x1658 JumpB
	var_157_bool = 0; var_158_object = Obj(); // 0x1659 PushV
	var_158_object = var_1_object; // 0x165a MovT
	func_7196(var_158_object); // 0x165b Call
	if(var_157_bool == 0) goto Label_5727; // 0x165d JumpB
	var_150_bool = 1; // 0x165e MovB
	
Label_5727:
	if(var_150_bool == 0) goto Label_5733; // 0x165f JumpB
	var_163_int = 14029; // 0x1660 PushI
	var_164_int = 15265; // 0x1661 PushI
	var_165_int = 15264; // 0x1662 PushI
	AddReply(var_163_int, var_164_int, var_165_int); // 0x1663 TObjFunc
	
Label_5733:
	var_166_int = 14039; // 0x1665 PushI
	var_167_int = -1; // 0x1666 PushI
	var_168_int = 15274; // 0x1667 PushI
	AddReply(var_166_int, var_167_int, var_168_int); // 0x1668 TObjFunc
	return 0; // 0x166a Return
	
Label_5739:
	var_169_int = 15265; // 0x166b PushI
	var_170_bool = var_40_int == var_169_int; // 0x166c Eq
	if(var_170_bool == 0) goto Label_5757; // 0x166d JumpB
	var_171_string = ""; // 0x166e PushV
	var_171_string = "Neutral"; // 0x166f MovS
	func_5613(var_41_int, var_171_string); // 0x1670 Call
	var_172_int = 14030; // 0x1672 PushI
	SetMessage(var_172_int); // 0x1673 TObjFunc
	ClearReplies(); // 0x1675 TObjFunc
	var_173_int = 14031; // 0x1677 PushI
	var_174_int = 15267; // 0x1678 PushI
	var_175_int = 15266; // 0x1679 PushI
	AddReply(var_173_int, var_174_int, var_175_int); // 0x167a TObjFunc
	return 0; // 0x167c Return
	
Label_5757:
	var_176_int = 15267; // 0x167d PushI
	var_177_bool = var_40_int == var_176_int; // 0x167e Eq
	if(var_177_bool == 0) goto Label_5785; // 0x167f JumpB
	var_178_string = ""; // 0x1680 PushV
	var_178_string = "Neutral"; // 0x1681 MovS
	func_5613(var_41_int, var_178_string); // 0x1682 Call
	var_179_int = 14032; // 0x1684 PushI
	SetMessage(var_179_int); // 0x1685 TObjFunc
	ClearReplies(); // 0x1687 TObjFunc
	var_180_bool = 0; var_181_object = Obj(); // 0x1689 PushV
	var_181_object = var_1_object; // 0x168a MovT
	func_7208(var_181_object); // 0x168b Call
	if(var_180_bool == 0) goto Label_5779; // 0x168d JumpB
	var_186_int = 14033; // 0x168e PushI
	var_187_int = 15269; // 0x168f PushI
	var_188_int = 15268; // 0x1690 PushI
	AddReply(var_186_int, var_187_int, var_188_int); // 0x1691 TObjFunc
	
Label_5779:
	var_189_int = 14038; // 0x1693 PushI
	var_190_int = -1; // 0x1694 PushI
	var_191_int = 15273; // 0x1695 PushI
	AddReply(var_189_int, var_190_int, var_191_int); // 0x1696 TObjFunc
	return 0; // 0x1698 Return
	
Label_5785:
	var_192_int = 15269; // 0x1699 PushI
	var_193_bool = var_40_int == var_192_int; // 0x169a Eq
	if(var_193_bool == 0) goto Label_5813; // 0x169b JumpB
	var_194_string = ""; // 0x169c PushV
	var_194_string = "Neutral"; // 0x169d MovS
	func_5613(var_41_int, var_194_string); // 0x169e Call
	var_195_int = 14034; // 0x16a0 PushI
	SetMessage(var_195_int); // 0x16a1 TObjFunc
	ClearReplies(); // 0x16a3 TObjFunc
	var_196_int = 14035; // 0x16a5 PushI
	var_197_int = -1; // 0x16a6 PushI
	var_198_int = 15270; // 0x16a7 PushI
	AddReply(var_196_int, var_197_int, var_198_int); // 0x16a8 TObjFunc
	var_199_int = 14036; // 0x16aa PushI
	var_200_int = -1; // 0x16ab PushI
	var_201_int = 15271; // 0x16ac PushI
	AddReply(var_199_int, var_200_int, var_201_int); // 0x16ad TObjFunc
	var_202_int = 14037; // 0x16af PushI
	var_203_int = -1; // 0x16b0 PushI
	var_204_int = 15272; // 0x16b1 PushI
	AddReply(var_202_int, var_203_int, var_204_int); // 0x16b2 TObjFunc
	return 0; // 0x16b4 Return
	
Label_5813:
	var_205_int = 15248; // 0x16b5 PushI
	var_206_bool = var_40_int == var_205_int; // 0x16b6 Eq
	if(var_206_bool == 0) goto Label_5836; // 0x16b7 JumpB
	var_207_string = ""; // 0x16b8 PushV
	var_207_string = "Neutral"; // 0x16b9 MovS
	func_5613(var_41_int, var_207_string); // 0x16ba Call
	var_208_int = 14013; // 0x16bc PushI
	SetMessage(var_208_int); // 0x16bd TObjFunc
	ClearReplies(); // 0x16bf TObjFunc
	var_209_int = 14014; // 0x16c1 PushI
	var_210_int = 15250; // 0x16c2 PushI
	var_211_int = 15249; // 0x16c3 PushI
	AddReply(var_209_int, var_210_int, var_211_int); // 0x16c4 TObjFunc
	var_212_int = 14024; // 0x16c6 PushI
	var_213_int = 15260; // 0x16c7 PushI
	var_214_int = 15259; // 0x16c8 PushI
	AddReply(var_212_int, var_213_int, var_214_int); // 0x16c9 TObjFunc
	return 0; // 0x16cb Return
	
Label_5836:
	var_215_int = 15260; // 0x16cc PushI
	var_216_bool = var_40_int == var_215_int; // 0x16cd Eq
	if(var_216_bool == 0) goto Label_5854; // 0x16ce JumpB
	var_217_string = ""; // 0x16cf PushV
	var_217_string = "Neutral"; // 0x16d0 MovS
	func_5613(var_41_int, var_217_string); // 0x16d1 Call
	var_218_int = 14025; // 0x16d3 PushI
	SetMessage(var_218_int); // 0x16d4 TObjFunc
	ClearReplies(); // 0x16d6 TObjFunc
	var_219_int = 14026; // 0x16d8 PushI
	var_220_int = 15262; // 0x16d9 PushI
	var_221_int = 15261; // 0x16da PushI
	AddReply(var_219_int, var_220_int, var_221_int); // 0x16db TObjFunc
	return 0; // 0x16dd Return
	
Label_5854:
	var_222_int = 15262; // 0x16de PushI
	var_223_bool = var_40_int == var_222_int; // 0x16df Eq
	if(var_223_bool == 0) goto Label_5872; // 0x16e0 JumpB
	var_224_string = ""; // 0x16e1 PushV
	var_224_string = "Neutral"; // 0x16e2 MovS
	func_5613(var_41_int, var_224_string); // 0x16e3 Call
	var_225_int = 14027; // 0x16e5 PushI
	SetMessage(var_225_int); // 0x16e6 TObjFunc
	ClearReplies(); // 0x16e8 TObjFunc
	var_226_int = 14028; // 0x16ea PushI
	var_227_int = -1; // 0x16eb PushI
	var_228_int = 15263; // 0x16ec PushI
	AddReply(var_226_int, var_227_int, var_228_int); // 0x16ed TObjFunc
	return 0; // 0x16ef Return
	
Label_5872:
	var_229_int = 15250; // 0x16f0 PushI
	var_230_bool = var_40_int == var_229_int; // 0x16f1 Eq
	if(var_230_bool == 0) goto Label_5890; // 0x16f2 JumpB
	var_231_string = ""; // 0x16f3 PushV
	var_231_string = "Neutral"; // 0x16f4 MovS
	func_5613(var_41_int, var_231_string); // 0x16f5 Call
	var_232_int = 14015; // 0x16f7 PushI
	SetMessage(var_232_int); // 0x16f8 TObjFunc
	ClearReplies(); // 0x16fa TObjFunc
	var_233_int = 14016; // 0x16fc PushI
	var_234_int = 15252; // 0x16fd PushI
	var_235_int = 15251; // 0x16fe PushI
	AddReply(var_233_int, var_234_int, var_235_int); // 0x16ff TObjFunc
	return 0; // 0x1701 Return
	
Label_5890:
	var_236_int = 15252; // 0x1702 PushI
	var_237_bool = var_40_int == var_236_int; // 0x1703 Eq
	if(var_237_bool == 0) goto Label_5913; // 0x1704 JumpB
	var_238_string = ""; // 0x1705 PushV
	var_238_string = "Neutral"; // 0x1706 MovS
	func_5613(var_41_int, var_238_string); // 0x1707 Call
	var_239_int = 14017; // 0x1709 PushI
	SetMessage(var_239_int); // 0x170a TObjFunc
	ClearReplies(); // 0x170c TObjFunc
	var_240_int = 14018; // 0x170e PushI
	var_241_int = -1; // 0x170f PushI
	var_242_int = 15253; // 0x1710 PushI
	AddReply(var_240_int, var_241_int, var_242_int); // 0x1711 TObjFunc
	var_243_int = 14019; // 0x1713 PushI
	var_244_int = 15255; // 0x1714 PushI
	var_245_int = 15254; // 0x1715 PushI
	AddReply(var_243_int, var_244_int, var_245_int); // 0x1716 TObjFunc
	return 0; // 0x1718 Return
	
Label_5913:
	var_246_int = 15255; // 0x1719 PushI
	var_247_bool = var_40_int == var_246_int; // 0x171a Eq
	if(var_247_bool == 0) goto Label_5931; // 0x171b JumpB
	var_248_string = ""; // 0x171c PushV
	var_248_string = "Neutral"; // 0x171d MovS
	func_5613(var_41_int, var_248_string); // 0x171e Call
	var_249_int = 14020; // 0x1720 PushI
	SetMessage(var_249_int); // 0x1721 TObjFunc
	ClearReplies(); // 0x1723 TObjFunc
	var_250_int = 14021; // 0x1725 PushI
	var_251_int = 15257; // 0x1726 PushI
	var_252_int = 15256; // 0x1727 PushI
	AddReply(var_250_int, var_251_int, var_252_int); // 0x1728 TObjFunc
	return 0; // 0x172a Return
	
Label_5931:
	var_253_int = 15257; // 0x172b PushI
	var_254_bool = var_40_int == var_253_int; // 0x172c Eq
	if(var_254_bool == 0) goto Label_5949; // 0x172d JumpB
	var_255_string = ""; // 0x172e PushV
	var_255_string = "Neutral"; // 0x172f MovS
	func_5613(var_41_int, var_255_string); // 0x1730 Call
	var_256_int = 14022; // 0x1732 PushI
	SetMessage(var_256_int); // 0x1733 TObjFunc
	ClearReplies(); // 0x1735 TObjFunc
	var_257_int = 14023; // 0x1737 PushI
	var_258_int = -1; // 0x1738 PushI
	var_259_int = 15258; // 0x1739 PushI
	AddReply(var_257_int, var_258_int, var_259_int); // 0x173a TObjFunc
	return 0; // 0x173c Return
	
Label_5949:
	var_260_int = 15231; // 0x173d PushI
	var_261_bool = var_40_int == var_260_int; // 0x173e Eq
	if(var_261_bool == 0) goto Label_5967; // 0x173f JumpB
	var_262_string = ""; // 0x1740 PushV
	var_262_string = "Neutral"; // 0x1741 MovS
	func_5613(var_41_int, var_262_string); // 0x1742 Call
	var_263_int = 13996; // 0x1744 PushI
	SetMessage(var_263_int); // 0x1745 TObjFunc
	ClearReplies(); // 0x1747 TObjFunc
	var_264_int = 13997; // 0x1749 PushI
	var_265_int = 15233; // 0x174a PushI
	var_266_int = 15232; // 0x174b PushI
	AddReply(var_264_int, var_265_int, var_266_int); // 0x174c TObjFunc
	return 0; // 0x174e Return
	
Label_5967:
	var_267_int = 15233; // 0x174f PushI
	var_268_bool = var_40_int == var_267_int; // 0x1750 Eq
	if(var_268_bool == 0) goto Label_5985; // 0x1751 JumpB
	var_269_string = ""; // 0x1752 PushV
	var_269_string = "Neutral"; // 0x1753 MovS
	func_5613(var_41_int, var_269_string); // 0x1754 Call
	var_270_int = 13998; // 0x1756 PushI
	SetMessage(var_270_int); // 0x1757 TObjFunc
	ClearReplies(); // 0x1759 TObjFunc
	var_271_int = 13999; // 0x175b PushI
	var_272_int = 15235; // 0x175c PushI
	var_273_int = 15234; // 0x175d PushI
	AddReply(var_271_int, var_272_int, var_273_int); // 0x175e TObjFunc
	return 0; // 0x1760 Return
	
Label_5985:
	var_274_int = 15235; // 0x1761 PushI
	var_275_bool = var_40_int == var_274_int; // 0x1762 Eq
	if(var_275_bool == 0) goto Label_6003; // 0x1763 JumpB
	var_276_string = ""; // 0x1764 PushV
	var_276_string = "Neutral"; // 0x1765 MovS
	func_5613(var_41_int, var_276_string); // 0x1766 Call
	var_277_int = 14000; // 0x1768 PushI
	SetMessage(var_277_int); // 0x1769 TObjFunc
	ClearReplies(); // 0x176b TObjFunc
	var_278_int = 14001; // 0x176d PushI
	var_279_int = 15237; // 0x176e PushI
	var_280_int = 15236; // 0x176f PushI
	AddReply(var_278_int, var_279_int, var_280_int); // 0x1770 TObjFunc
	return 0; // 0x1772 Return
	
Label_6003:
	var_281_int = 15237; // 0x1773 PushI
	var_282_bool = var_40_int == var_281_int; // 0x1774 Eq
	if(var_282_bool == 0) goto Label_6021; // 0x1775 JumpB
	var_283_string = ""; // 0x1776 PushV
	var_283_string = "Neutral"; // 0x1777 MovS
	func_5613(var_41_int, var_283_string); // 0x1778 Call
	var_284_int = 14002; // 0x177a PushI
	SetMessage(var_284_int); // 0x177b TObjFunc
	ClearReplies(); // 0x177d TObjFunc
	var_285_int = 14003; // 0x177f PushI
	var_286_int = 15239; // 0x1780 PushI
	var_287_int = 15238; // 0x1781 PushI
	AddReply(var_285_int, var_286_int, var_287_int); // 0x1782 TObjFunc
	return 0; // 0x1784 Return
	
Label_6021:
	var_288_int = 15239; // 0x1785 PushI
	var_289_bool = var_40_int == var_288_int; // 0x1786 Eq
	if(var_289_bool == 0) goto Label_6039; // 0x1787 JumpB
	var_290_string = ""; // 0x1788 PushV
	var_290_string = "Neutral"; // 0x1789 MovS
	func_5613(var_41_int, var_290_string); // 0x178a Call
	var_291_int = 14004; // 0x178c PushI
	SetMessage(var_291_int); // 0x178d TObjFunc
	ClearReplies(); // 0x178f TObjFunc
	var_292_int = 14005; // 0x1791 PushI
	var_293_int = 15241; // 0x1792 PushI
	var_294_int = 15240; // 0x1793 PushI
	AddReply(var_292_int, var_293_int, var_294_int); // 0x1794 TObjFunc
	return 0; // 0x1796 Return
	
Label_6039:
	var_295_int = 15241; // 0x1797 PushI
	var_296_bool = var_40_int == var_295_int; // 0x1798 Eq
	if(var_296_bool == 0) goto Label_6057; // 0x1799 JumpB
	var_297_string = ""; // 0x179a PushV
	var_297_string = "Neutral"; // 0x179b MovS
	func_5613(var_41_int, var_297_string); // 0x179c Call
	var_298_int = 14006; // 0x179e PushI
	SetMessage(var_298_int); // 0x179f TObjFunc
	ClearReplies(); // 0x17a1 TObjFunc
	var_299_int = 14007; // 0x17a3 PushI
	var_300_int = 15243; // 0x17a4 PushI
	var_301_int = 15242; // 0x17a5 PushI
	AddReply(var_299_int, var_300_int, var_301_int); // 0x17a6 TObjFunc
	return 0; // 0x17a8 Return
	
Label_6057:
	var_302_int = 15243; // 0x17a9 PushI
	var_303_bool = var_40_int == var_302_int; // 0x17aa Eq
	if(var_303_bool == 0) goto Label_6080; // 0x17ab JumpB
	var_304_string = ""; // 0x17ac PushV
	var_304_string = "Neutral"; // 0x17ad MovS
	func_5613(var_41_int, var_304_string); // 0x17ae Call
	var_305_int = 14008; // 0x17b0 PushI
	SetMessage(var_305_int); // 0x17b1 TObjFunc
	ClearReplies(); // 0x17b3 TObjFunc
	var_306_int = 14009; // 0x17b5 PushI
	var_307_int = -1; // 0x17b6 PushI
	var_308_int = 15244; // 0x17b7 PushI
	AddReply(var_306_int, var_307_int, var_308_int); // 0x17b8 TObjFunc
	var_309_int = 14010; // 0x17ba PushI
	var_310_int = -1; // 0x17bb PushI
	var_311_int = 15245; // 0x17bc PushI
	AddReply(var_309_int, var_310_int, var_311_int); // 0x17bd TObjFunc
	return 0; // 0x17bf Return
	
Label_6080:
	var_3_string = 1; // 0x17c0 TMovB
	var_312_bool = 0; // 0x17c1 PushV
	func_6273(var_312_bool); // 0x17c2 Call
	if(var_312_bool == 0) goto Label_6088; // 0x17c4 JumpB
	lshStopAnimation(); // 0x17c5 Func
	goto Label_6090; // 0x17c7 Jump
	
Label_6090:
	return 0; // 0x17ca Return
	
Label_6088:
	StopAnimation(); // 0x17c8 Func
	
Label_6092:
	return 0; // 0x17cc Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool)
{
	func_7521(); // 0x7 Call
	var_41_bool = 0; // 0x9 PushV
	func_6112(var_41_bool); // 0xa Call
	var_44_bool = var_41_bool == 0; // 0xc Not
	if(var_44_bool == 0) goto Label_19; // 0xd JumpB
	TaskCall(0); // 0xf TaskCall
	func_0(); // 0x10 Call
	TaskReturn(); // 0x11 TaskReturn
	
Label_19:
	var_45_string = ""; // 0x13 PushV
	var_45_string = "Neutral"; // 0x14 MovS
	func_6177(var_45_string); // 0x15 Call
	lshWaitForAnimEnd(); // 0x17 Func
	goto Label_19; // 0x19 Jump
}


func_0()
{
	Hold(); // 0x0 Func
	return 0; // 0x2 Return
}


func_7172(var_380_bool)
{
	var_382_int = 0; var_383_string = ""; // 0x1c05 PushV
	var_383_string = "KnowEva"; // 0x1c06 MovS
	func_6212(var_382_int, var_383_string); // 0x1c07 Call
	var_384_int = 1; // 0x1c09 PushI
	var_385_bool = var_382_int == var_384_int; // 0x1c0a Eq
	if(var_385_bool == 0) goto Label_7182; // 0x1c0b JumpB
	var_380_bool = 1; // 0x1c0c MovB
	return 0; // 0x1c0d Return
	
Label_7182:
	var_380_bool = 0; // 0x1c0e MovB
	return 0; // 0x1c0f Return
}


func_6660()
{
	var_48_string = "d9q01"; // 0x1a05 PushS
	var_49_int = 1; // 0x1a06 PushI
	SetVariable(var_48_string, var_49_int); // 0x1a07 Func
	func_7489(); // 0x1a0a Call
	func_7505(); // 0x1a0d Call
	var_84_bool = 0; var_85_string = ""; var_86_string = ""; // 0x1a0f PushV
	var_85_string = "quest_d9_01"; // 0x1a10 MovS
	var_86_string = "place_rifles"; // 0x1a11 MovS
	func_6228(var_84_bool, var_85_string, var_86_string); // 0x1a12 Call
	return 0; // 0x1a14 Return
}


func_5128(var_0_object, var_1_object, var_2_object, var_3_object, var_729_object, var_730_object)
{
	var_0_object = var_730_object; // 0x1409 TMov
	var_1_object = var_729_object; // 0x140a TMov
	var_3_object = 0; // 0x140b TMovB
	var_735_int = 1; // 0x140c PushI
	if(var_735_int == 0) goto Label_5190; // 0x140d JumpB
	var_736_bool = 0; // 0x140e PushV
	var_736_bool = 0; // 0x140f MovB
	var_737_bool = 0; var_738_object = Obj(); // 0x1410 PushV
	var_738_object = var_1_object; // 0x1411 MovT
	func_7148(var_738_object); // 0x1412 Call
	if(var_737_bool == 0) goto Label_5147; // 0x1414 JumpB
	var_743_bool = 0; var_744_object = Obj(); // 0x1415 PushV
	var_744_object = var_1_object; // 0x1416 MovT
	func_7136(var_744_object); // 0x1417 Call
	if(var_743_bool == 0) goto Label_5147; // 0x1419 JumpB
	var_736_bool = 1; // 0x141a MovB
	
Label_5147:
	if(var_736_bool == 0) goto Label_5173; // 0x141b JumpB
	var_749_object = Obj(); var_750_object = Obj(); // 0x141c PushV
	var_749_object = var_1_object; // 0x141d MovT
	var_750_object = var_0_object; // 0x141e MovT
	func_6648(); // 0x141f Call
	var_753_string = ""; // 0x1421 PushV
	var_753_string = "Neutral"; // 0x1422 MovS
	func_5220(var_730_object, var_753_string); // 0x1423 Call
	var_758_int = 12275; // 0x1425 PushI
	SetMessage(var_758_int); // 0x1426 TObjFunc
	ClearReplies(); // 0x1428 TObjFunc
	var_759_int = 12276; // 0x142a PushI
	var_760_int = 13435; // 0x142b PushI
	var_761_int = 13433; // 0x142c PushI
	AddReply(var_759_int, var_760_int, var_761_int); // 0x142d TObjFunc
	var_762_int = 12277; // 0x142f PushI
	var_763_int = 13435; // 0x1430 PushI
	var_764_int = 13434; // 0x1431 PushI
	AddReply(var_762_int, var_763_int, var_764_int); // 0x1432 TObjFunc
	goto Label_5190; // 0x1434 Jump
	
Label_5190:
	var_765_bool = 0; // 0x1446 PushV
	func_6273(var_765_bool); // 0x1447 Call
	if(var_765_bool == 0) goto Label_5205; // 0x1449 JumpB
	
Label_5194:
	lshWaitForAnimEnd(); // 0x144a Func
	var_766_object = var_3_object; // 0x144c PushT
	if(var_766_object == 0) goto Label_5199; // 0x144d JumpB
	goto Label_5204; // 0x144e Jump
	
Label_5204:
	goto Label_5219; // 0x1454 Jump
	
Label_5219:
	return 0; // 0x1463 Return
	
Label_5199:
	var_767_string = ""; // 0x144f PushV
	var_767_string = var_2_object; // 0x1450 MovT
	func_6177(var_767_string); // 0x1451 Call
	goto Label_5194; // 0x1453 Jump
	
Label_5205:
	var_768_string = "all"; // 0x1455 PushS
	var_769_string = "idle"; // 0x1456 PushS
	PlayAnimation(var_768_string, var_769_string); // 0x1457 Func
	
Label_5209:
	WaitForAnimEnd(); // 0x1459 Func
	var_770_object = var_3_object; // 0x145b PushT
	if(var_770_object == 0) goto Label_5214; // 0x145c JumpB
	goto Label_5219; // 0x145d Jump
	
Label_5214:
	var_771_string = "all"; // 0x145e PushS
	var_772_string = "idle"; // 0x145f PushS
	PlayAnimation(var_771_string, var_772_string); // 0x1460 Func
	goto Label_5209; // 0x1462 Jump
	
Label_5173:
	var_773_string = ""; // 0x1435 PushV
	var_773_string = "Neutral"; // 0x1436 MovS
	func_5220(var_730_object, var_773_string); // 0x1437 Call
	var_774_int = 13779; // 0x1439 PushI
	SetMessage(var_774_int); // 0x143a TObjFunc
	ClearReplies(); // 0x143c TObjFunc
	var_775_int = 13780; // 0x143e PushI
	var_776_int = -1; // 0x143f PushI
	var_777_int = 15016; // 0x1440 PushI
	AddReply(var_775_int, var_776_int, var_777_int); // 0x1441 TObjFunc
	goto Label_5190; // 0x1443 Jump
}


func_7184(var_151_bool)
{
	var_153_int = 0; var_154_string = ""; // 0x1c11 PushV
	var_154_string = "d9q01"; // 0x1c12 MovS
	func_6212(var_153_int, var_154_string); // 0x1c13 Call
	var_155_int = 2; // 0x1c15 PushI
	var_156_bool = var_153_int == var_155_int; // 0x1c16 Eq
	if(var_156_bool == 0) goto Label_7194; // 0x1c17 JumpB
	var_151_bool = 1; // 0x1c18 MovB
	return 0; // 0x1c19 Return
	
Label_7194:
	var_151_bool = 0; // 0x1c1a MovB
	return 0; // 0x1c1b Return
}


func_6677()
{
	var_104_string = "ood9Viktor2"; // 0x1a16 PushS
	var_105_int = 1; // 0x1a17 PushI
	SetVariable(var_104_string, var_105_int); // 0x1a18 Func
	return 0; // 0x1a1a Return
}


func_6683()
{
	var_76_string = "KnowMyth"; // 0x1a1c PushS
	var_77_int = 1; // 0x1a1d PushI
	SetVariable(var_76_string, var_77_int); // 0x1a1e Func
	return 0; // 0x1a20 Return
}


func_7196(var_157_bool)
{
	var_159_int = 0; var_160_string = ""; // 0x1c1d PushV
	var_160_string = "ood9Viktor2"; // 0x1c1e MovS
	func_6212(var_159_int, var_160_string); // 0x1c1f Call
	var_161_int = 0; // 0x1c21 PushI
	var_162_bool = var_159_int == var_161_int; // 0x1c22 Eq
	if(var_162_bool == 0) goto Label_7206; // 0x1c23 JumpB
	var_157_bool = 1; // 0x1c24 MovB
	return 0; // 0x1c25 Return
	
Label_7206:
	var_157_bool = 0; // 0x1c26 MovB
	return 0; // 0x1c27 Return
}


func_6173()
{
	CameraSwitchToNormal(); // 0x181e Func
	return 0; // 0x1820 Return
}


func_6177(var_45_string)
{
	var_46_float = 0; var_47_float = 0; var_48_float = 0; var_49_float = 0; // 0x1821 PushV
	var_50_string = "playing "; // 0x1822 PushS
	var_51_int = var_50_string + var_45_string; // 0x1823 Add
	Trace(var_51_int); // 0x1824 Func
	lshGetAnimTimes(var_45_string, var_48_float, var_49_float); // 0x1826 Func
	lshPlayAnimation(var_48_float, var_49_float); // 0x1828 Func
	var_52_string = "start: "; // 0x182a PushS
	var_53_int = var_52_string + var_48_float; // 0x182b Add
	Trace(var_53_int); // 0x182c Func
	var_54_string = "end: "; // 0x182e PushS
	var_55_int = var_54_string + var_49_float; // 0x182f Add
	Trace(var_55_int); // 0x1830 Func
	return 4; // 0x1832 Return
}


func_6689()
{
	var_141_string = "d6ViktorVisit"; // 0x1a22 PushS
	var_142_int = 1; // 0x1a23 PushI
	SetVariable(var_141_string, var_142_int); // 0x1a24 Func
	return 0; // 0x1a26 Return
}


func_3109(var_0_object, var_1_object, var_2_object, var_3_object, var_412_object, var_413_object)
{
	var_0_object = var_413_object; // 0xc26 TMov
	var_1_object = var_412_object; // 0xc27 TMov
	var_3_object = 0; // 0xc28 TMovB
	var_418_int = 1; // 0xc29 PushI
	if(var_418_int == 0) goto Label_3180; // 0xc2a JumpB
	var_419_string = ""; // 0xc2b PushV
	var_419_string = "Neutral"; // 0xc2c MovS
	func_3210(var_413_object, var_419_string); // 0xc2d Call
	var_424_int = 6924; // 0xc2f PushI
	SetMessage(var_424_int); // 0xc30 TObjFunc
	ClearReplies(); // 0xc32 TObjFunc
	var_425_bool = 0; // 0xc34 PushV
	var_425_bool = 0; // 0xc35 MovB
	var_426_bool = 0; // 0xc36 PushV
	var_426_bool = 0; // 0xc37 MovB
	var_427_bool = 0; var_428_object = Obj(); // 0xc38 PushV
	var_428_object = var_1_object; // 0xc39 MovT
	func_6833(var_428_object); // 0xc3a Call
	if(var_427_bool == 0) goto Label_3139; // 0xc3c JumpB
	var_433_bool = 0; var_434_object = Obj(); // 0xc3d PushV
	var_434_object = var_1_object; // 0xc3e MovT
	func_6869(var_434_object); // 0xc3f Call
	if(var_433_bool == 0) goto Label_3139; // 0xc41 JumpB
	var_426_bool = 1; // 0xc42 MovB
	
Label_3139:
	if(var_426_bool == 0) goto Label_3146; // 0xc43 JumpB
	var_439_bool = 0; var_440_object = Obj(); // 0xc44 PushV
	var_440_object = var_1_object; // 0xc45 MovT
	func_6857(var_440_object); // 0xc46 Call
	if(var_439_bool == 0) goto Label_3146; // 0xc48 JumpB
	var_425_bool = 1; // 0xc49 MovB
	
Label_3146:
	if(var_425_bool == 0) goto Label_3152; // 0xc4a JumpB
	var_445_int = 6925; // 0xc4b PushI
	var_446_int = 7632; // 0xc4c PushI
	var_447_int = 7631; // 0xc4d PushI
	AddReply(var_445_int, var_446_int, var_447_int); // 0xc4e TObjFunc
	
Label_3152:
	var_448_int = 7777; // 0xc50 PushI
	var_449_int = -1; // 0xc51 PushI
	var_450_int = 8579; // 0xc52 PushI
	AddReply(var_448_int, var_449_int, var_450_int); // 0xc53 TObjFunc
	goto Label_3180; // 0xc55 Jump
	
Label_3180:
	var_451_bool = 0; // 0xc6c PushV
	func_6273(var_451_bool); // 0xc6d Call
	if(var_451_bool == 0) goto Label_3195; // 0xc6f JumpB
	
Label_3184:
	lshWaitForAnimEnd(); // 0xc70 Func
	var_452_object = var_3_object; // 0xc72 PushT
	if(var_452_object == 0) goto Label_3189; // 0xc73 JumpB
	goto Label_3194; // 0xc74 Jump
	
Label_3194:
	goto Label_3209; // 0xc7a Jump
	
Label_3209:
	return 0; // 0xc89 Return
	
Label_3189:
	var_453_string = ""; // 0xc75 PushV
	var_453_string = var_2_object; // 0xc76 MovT
	func_6177(var_453_string); // 0xc77 Call
	goto Label_3184; // 0xc79 Jump
	
Label_3195:
	var_454_string = "all"; // 0xc7b PushS
	var_455_string = "idle"; // 0xc7c PushS
	PlayAnimation(var_454_string, var_455_string); // 0xc7d Func
	
Label_3199:
	WaitForAnimEnd(); // 0xc7f Func
	var_456_object = var_3_object; // 0xc81 PushT
	if(var_456_object == 0) goto Label_3204; // 0xc82 JumpB
	goto Label_3209; // 0xc83 Jump
	
Label_3204:
	var_457_string = "all"; // 0xc84 PushS
	var_458_string = "idle"; // 0xc85 PushS
	PlayAnimation(var_457_string, var_458_string); // 0xc86 Func
	goto Label_3199; // 0xc88 Jump
}


func_6695()
{
	var_98_string = "ood9Viktor3"; // 0x1a28 PushS
	var_99_int = 1; // 0x1a29 PushI
	SetVariable(var_98_string, var_99_int); // 0x1a2a Func
	return 0; // 0x1a2c Return
}


func_7208(var_180_bool)
{
	var_182_int = 0; var_183_string = ""; // 0x1c29 PushV
	var_183_string = "d9TalkToPolkovodec"; // 0x1c2a MovS
	func_6212(var_182_int, var_183_string); // 0x1c2b Call
	var_184_int = 0; // 0x1c2d PushI
	var_185_bool = var_182_int != var_184_int; // 0x1c2e Neq
	if(var_185_bool == 0) goto Label_7218; // 0x1c2f JumpB
	var_180_bool = 1; // 0x1c30 MovB
	return 0; // 0x1c31 Return
	
Label_7218:
	var_180_bool = 0; // 0x1c32 MovB
	return 0; // 0x1c33 Return
}


func_6701()
{
	var_567_string = "KnowBoyni"; // 0x1a2e PushS
	var_568_int = 1; // 0x1a2f PushI
	SetVariable(var_567_string, var_568_int); // 0x1a30 Func
	return 0; // 0x1a32 Return
}


func_49(var_0_object, var_44_int, var_45_object)
{
	var_47_object = Obj(); var_48_bool = 0; var_49_int = 0; var_50_bool = 0; var_51_object = Obj(); var_52_bool = 0; var_53_int = 0; var_54_bool = 0; // 0x31 PushV
	var_0_object = var_45_object; // 0x32 TMov
	var_55_bool = 0; var_56_object = Obj(); // 0x33 PushV
	var_56_object = var_45_object; // 0x34 Mov
	func_6117(var_56_object); // 0x35 Call
	var_95_bool = var_55_bool == 0; // 0x37 Not
	if(var_95_bool == 0) goto Label_59; // 0x38 JumpB
	var_44_int = -2; // 0x39 MovI
	return 8; // 0x3a Return
	
Label_59:
	CreateDialog(var_51_object); // 0x3b Func
	var_96_int = 0; // 0x3d PushV
	func_6269(var_96_int); // 0x3e Call
	SetNPCName(var_96_int); // 0x40 ObjFunc
	var_97_string = ""; // 0x42 PushV
	func_6271(var_97_string); // 0x43 Call
	SetPhoto(var_97_string); // 0x45 ObjFunc
	var_98_int = 0; // 0x47 PushV
	func_7360(var_98_int); // 0x48 Call
	SetPlayerName(var_98_int); // 0x4a ObjFunc
	var_53_int = -1; // 0x4c MovI
	IsOverrideActive(var_52_bool); // 0x4d Func
	var_106_bool = var_52_bool; // 0x4f Push
	if(var_106_bool == 0) goto Label_83; // 0x50 JumpB
	var_44_int = -2; // 0x51 MovI
	return 8; // 0x52 Return
	
Label_83:
	DoDialog(var_51_object); // 0x53 Func
	var_107_object = Obj(); var_108_object = Obj(); // 0x55 PushV
	var_107_object = var_45_object; // 0x56 Mov
	var_108_object = var_51_object; // 0x57 Mov
	TaskCall(3); // 0x58 TaskCall
	func_112(var_109_object, var_110_object, var_111_string, var_112_bool, var_107_object, var_108_object); // 0x59 Call
	TaskReturn(); // 0x5a TaskReturn
	IsDialogEnd(var_54_bool); // 0x5c ObjFunc
	
Label_94:
	var_148_bool = var_54_bool == 0; // 0x5e Not
	if(var_148_bool == 0) goto Label_101; // 0x5f JumpB
	sync(); // 0x60 Func
	IsDialogEnd(var_54_bool); // 0x62 ObjFunc
	goto Label_94; // 0x64 Jump
	
Label_101:
	var_149_object = Obj(); // 0x65 PushV
	var_149_object = var_45_object; // 0x66 Mov
	func_6173(); // 0x67 Call
	StopDialog(var_51_object); // 0x69 Func
	GetReturnValue(var_53_int); // 0x6b ObjFunc
	var_44_int = var_53_int; // 0x6d Mov
	return 8; // 0x6e Return
}


func_6195()
{
	var_43_bool = 0; // 0x1833 PushV
	func_6273(var_43_bool); // 0x1834 Call
	if(var_43_bool == 0) goto Label_6201; // 0x1836 JumpB
	lshStopSpeech(); // 0x1837 Func
	
Label_6201:
	return 0; // 0x1839 Return
}


func_7220(var_396_bool)
{
	var_398_int = 0; var_399_string = ""; // 0x1c35 PushV
	var_399_string = "KnowJulia"; // 0x1c36 MovS
	func_6212(var_398_int, var_399_string); // 0x1c37 Call
	var_400_int = 1; // 0x1c39 PushI
	var_401_bool = var_398_int == var_400_int; // 0x1c3a Eq
	if(var_401_bool == 0) goto Label_7230; // 0x1c3b JumpB
	var_396_bool = 1; // 0x1c3c MovB
	return 0; // 0x1c3d Return
	
Label_7230:
	var_396_bool = 0; // 0x1c3e MovB
	return 0; // 0x1c3f Return
}


func_6707()
{
	var_583_string = "KnowTaurusProject"; // 0x1a34 PushS
	var_584_int = 1; // 0x1a35 PushI
	SetVariable(var_583_string, var_584_int); // 0x1a36 Func
	return 0; // 0x1a38 Return
}


func_6713(var_304_bool)
{
	var_306_int = 0; var_307_string = ""; // 0x1a3a PushV
	var_307_string = "ood1Viktor1"; // 0x1a3b MovS
	func_6212(var_306_int, var_307_string); // 0x1a3c Call
	var_308_int = 0; // 0x1a3e PushI
	var_309_bool = var_306_int == var_308_int; // 0x1a3f Eq
	if(var_309_bool == 0) goto Label_6723; // 0x1a40 JumpB
	var_304_bool = 1; // 0x1a41 MovB
	return 0; // 0x1a42 Return
	
Label_6723:
	var_304_bool = 0; // 0x1a43 MovB
	return 0; // 0x1a44 Return
}


func_6202(var_80_cvector, var_81_cvector)
{
	var_83_float = 0; var_84_float = 0; // 0x183a PushV
	var_85_int = var_81_cvector | var_81_cvector; // 0x183b Or
	var_84_float = sqrt(var_85_int); // 0x183c Sqrt2
	var_86_float = 0.0; // 0x183d PushF
	var_87_bool = var_84_float < var_86_float; // 0x183e LT
	if(var_87_bool == 0) goto Label_6210; // 0x183f JumpB
	var_80_cvector = CVector(0.0, 0.0, 0.0); // 0x1840 MovV
	return 2; // 0x1841 Return
	
Label_6210:
	var_80_cvector = var_81_cvector / var_81_cvector; // 0x1842 Div2
	return 2; // 0x1843 Return
}


func_7232(var_141_bool)
{
	var_143_int = 0; var_144_string = ""; // 0x1c41 PushV
	var_144_string = "ood9Viktor3"; // 0x1c42 MovS
	func_6212(var_143_int, var_144_string); // 0x1c43 Call
	var_145_int = 0; // 0x1c45 PushI
	var_146_bool = var_143_int == var_145_int; // 0x1c46 Eq
	if(var_146_bool == 0) goto Label_7242; // 0x1c47 JumpB
	var_141_bool = 1; // 0x1c48 MovB
	return 0; // 0x1c49 Return
	
Label_7242:
	var_141_bool = 0; // 0x1c4a MovB
	return 0; // 0x1c4b Return
}


func_3652(var_2_object, var_171_string)
{
	var_172_bool = 0; // 0xe45 PushV
	func_6273(var_172_bool); // 0xe46 Call
	var_173_bool = var_172_bool == 0; // 0xe48 Not
	if(var_173_bool == 0) goto Label_3659; // 0xe49 JumpB
	return 0; // 0xe4a Return
	
Label_3659:
	var_174_bool = var_171_string == var_2_object; // 0xe4b Eq
	if(var_174_bool == 0) goto Label_3662; // 0xe4c JumpB
	return 0; // 0xe4d Return
	
Label_3662:
	var_175_string = ""; // 0xe4e PushV
	var_175_string = var_171_string; // 0xe4f Mov
	func_6177(var_175_string); // 0xe50 Call
	var_2_object = var_171_string; // 0xe52 TMov
	return 0; // 0xe53 Return
}


func_6725(var_324_bool)
{
	var_326_int = 0; var_327_string = ""; // 0x1a46 PushV
	var_327_string = "ood1Viktor2"; // 0x1a47 MovS
	func_6212(var_326_int, var_327_string); // 0x1a48 Call
	var_328_int = 0; // 0x1a4a PushI
	var_329_bool = var_326_int == var_328_int; // 0x1a4b Eq
	if(var_329_bool == 0) goto Label_6735; // 0x1a4c JumpB
	var_324_bool = 1; // 0x1a4d MovB
	return 0; // 0x1a4e Return
	
Label_6735:
	var_324_bool = 0; // 0x1a4f MovB
	return 0; // 0x1a50 Return
}


func_6212(var_110_int, var_111_string)
{
	var_112_int = 0; var_113_int = 0; // 0x1844 PushV
	GetVariable(var_111_string, var_113_int); // 0x1845 Func
	var_110_int = var_113_int; // 0x1847 Mov
	return 2; // 0x1848 Return
}


func_6217(var_102_object, var_103_string)
{
	var_104_object = Obj(); var_105_object = Obj(); var_106_object = Obj(); var_107_object = Obj(); // 0x1849 PushV
	GetMainOutdoorScene(var_106_object); // 0x184a Func
	var_108_string = ".bin"; // 0x184c PushS
	var_109_int = var_103_string + var_108_string; // 0x184d Add
	AddBlankActor(var_107_object, var_106_object, var_103_string, var_109_int); // 0x184e Func
	var_102_object = var_107_object; // 0x1850 Mov
	return 4; // 0x1851 Return
}


func_7244(var_444_bool)
{
	var_446_int = 0; var_447_string = ""; // 0x1c4d PushV
	var_447_string = "KnowStamatins"; // 0x1c4e MovS
	func_6212(var_446_int, var_447_string); // 0x1c4f Call
	var_448_int = 1; // 0x1c51 PushI
	var_449_bool = var_446_int == var_448_int; // 0x1c52 Eq
	if(var_449_bool == 0) goto Label_7254; // 0x1c53 JumpB
	var_444_bool = 1; // 0x1c54 MovB
	return 0; // 0x1c55 Return
	
Label_7254:
	var_444_bool = 0; // 0x1c56 MovB
	return 0; // 0x1c57 Return
}


func_6737(var_354_bool)
{
	var_356_int = 0; var_357_string = ""; // 0x1a52 PushV
	var_357_string = "ood1Viktor3"; // 0x1a53 MovS
	func_6212(var_356_int, var_357_string); // 0x1a54 Call
	var_358_int = 0; // 0x1a56 PushI
	var_359_bool = var_356_int == var_358_int; // 0x1a57 Eq
	if(var_359_bool == 0) goto Label_6747; // 0x1a58 JumpB
	var_354_bool = 1; // 0x1a59 MovB
	return 0; // 0x1a5a Return
	
Label_6747:
	var_354_bool = 0; // 0x1a5b MovB
	return 0; // 0x1a5c Return
}


func_6228(var_84_bool, var_85_string, var_86_string)
{
	var_87_object = Obj(); var_88_object = Obj(); // 0x1854 PushV
	FindActor(var_88_object, var_85_string); // 0x1855 Func
	var_89_bool = var_88_object == 0; // 0x1857 NullEq
	if(var_89_bool == 0) goto Label_6235; // 0x1858 JumpB
	var_84_bool = 0; // 0x1859 MovB
	return 2; // 0x185a Return
	
Label_6235:
	Trigger(var_88_object, var_86_string); // 0x185b Func
	var_84_bool = 1; // 0x185d MovB
	return 2; // 0x185e Return
}


func_7256(var_553_bool)
{
	var_555_int = 0; var_556_string = ""; // 0x1c59 PushV
	var_556_string = "KnowTaurusProject"; // 0x1c5a MovS
	func_6212(var_555_int, var_556_string); // 0x1c5b Call
	var_557_int = 1; // 0x1c5d PushI
	var_558_bool = var_555_int == var_557_int; // 0x1c5e Eq
	if(var_558_bool == 0) goto Label_7266; // 0x1c5f JumpB
	var_553_bool = 1; // 0x1c60 MovB
	return 0; // 0x1c61 Return
	
Label_7266:
	var_553_bool = 0; // 0x1c62 MovB
	return 0; // 0x1c63 Return
}


func_6749(var_342_bool)
{
	var_344_int = 0; var_345_string = ""; // 0x1a5e PushV
	var_345_string = "ood1Viktor4"; // 0x1a5f MovS
	func_6212(var_344_int, var_345_string); // 0x1a60 Call
	var_346_int = 0; // 0x1a62 PushI
	var_347_bool = var_344_int == var_346_int; // 0x1a63 Eq
	if(var_347_bool == 0) goto Label_6759; // 0x1a64 JumpB
	var_342_bool = 1; // 0x1a65 MovB
	return 0; // 0x1a66 Return
	
Label_6759:
	var_342_bool = 0; // 0x1a67 MovB
	return 0; // 0x1a68 Return
}


func_6240(var_69_float)
{
	var_70_float = 0; var_71_float = 0; // 0x1860 PushV
	GetGameTime(var_71_float); // 0x1861 Func
	var_69_float = var_71_float; // 0x1863 Mov
	return 2; // 0x1864 Return
}


func_5220(var_2_object, var_65_string)
{
	var_66_bool = 0; // 0x1465 PushV
	func_6273(var_66_bool); // 0x1466 Call
	var_67_bool = var_66_bool == 0; // 0x1468 Not
	if(var_67_bool == 0) goto Label_5227; // 0x1469 JumpB
	return 0; // 0x146a Return
	
Label_5227:
	var_68_bool = var_65_string == var_2_object; // 0x146b Eq
	if(var_68_bool == 0) goto Label_5230; // 0x146c JumpB
	return 0; // 0x146d Return
	
Label_5230:
	var_69_string = ""; // 0x146e PushV
	var_69_string = var_65_string; // 0x146f Mov
	func_6177(var_69_string); // 0x1470 Call
	var_2_object = var_65_string; // 0x1472 TMov
	return 0; // 0x1473 Return
}


func_6245(var_153_int)
{
	var_154_float = 0; var_155_float = 0; // 0x1865 PushV
	GetGameTime(var_155_float); // 0x1866 Func
	var_156_int = 1; // 0x1868 PushI
	var_157_int = 0; // 0x1869 PushV
	var_158_int = 24; // 0x186a PushI
	var_157_int = var_155_float / var_155_float; // 0x186b Div2
	var_153_int = var_156_int + var_157_int; // 0x186c Add2
	return 2; // 0x186d Return
}


func_7268(var_65_object)
{
	var_66_object = Obj(); var_67_object = Obj(); // 0x1c64 PushV
	GetDiaryRoot(var_67_object); // 0x1c65 Func
	var_68_bool = var_67_object == 0; // 0x1c67 Not
	if(var_68_bool == 0) goto Label_7278; // 0x1c68 JumpB
	var_69_string = "Can't retrieve diary root"; // 0x1c69 PushS
	Trace(var_69_string); // 0x1c6a Func
	var_65_object = 0; // 0x1c6c MovB
	return 2; // 0x1c6d Return
	
Label_7278:
	var_65_object = var_67_object; // 0x1c6e Mov
	return 2; // 0x1c6f Return
}


func_6761(var_905_bool)
{
	var_907_int = 0; var_908_string = ""; // 0x1a6a PushV
	var_908_string = "d1q01"; // 0x1a6b MovS
	func_6212(var_907_int, var_908_string); // 0x1a6c Call
	var_909_int = 0; // 0x1a6e PushI
	var_910_bool = var_907_int == var_909_int; // 0x1a6f Eq
	if(var_910_bool == 0) goto Label_6771; // 0x1a70 JumpB
	var_905_bool = 1; // 0x1a71 MovB
	return 0; // 0x1a72 Return
	
Label_6771:
	var_905_bool = 0; // 0x1a73 MovB
	return 0; // 0x1a74 Return
}


func_6254(var_151_bool, var_152_int)
{
	var_153_int = 0; // 0x186f PushV
	func_6245(var_153_int); // 0x1870 Call
	var_151_bool = var_153_int == var_152_int; // 0x1872 Eq2
	return 0; // 0x1873 Return
}


func_112(var_0_object, var_1_object, var_2_object, var_3_object, var_107_object, var_108_object)
{
	var_0_object = var_108_object; // 0x71 TMov
	var_1_object = var_107_object; // 0x72 TMov
	var_3_object = 0; // 0x73 TMovB
	var_113_int = 1; // 0x74 PushI
	if(var_113_int == 0) goto Label_145; // 0x75 JumpB
	var_114_object = Obj(); var_115_object = Obj(); // 0x76 PushV
	var_114_object = var_1_object; // 0x77 MovT
	var_115_object = var_0_object; // 0x78 MovT
	func_6445(); // 0x79 Call
	var_118_string = ""; // 0x7b PushV
	var_118_string = "Neutral"; // 0x7c MovS
	func_175(var_108_object, var_118_string); // 0x7d Call
	var_133_int = 1575; // 0x7f PushI
	SetMessage(var_133_int); // 0x80 TObjFunc
	ClearReplies(); // 0x82 TObjFunc
	var_134_int = 1576; // 0x84 PushI
	var_135_int = 1782; // 0x85 PushI
	var_136_int = 1780; // 0x86 PushI
	AddReply(var_134_int, var_135_int, var_136_int); // 0x87 TObjFunc
	var_137_int = 1577; // 0x89 PushI
	var_138_int = 1782; // 0x8a PushI
	var_139_int = 1781; // 0x8b PushI
	AddReply(var_137_int, var_138_int, var_139_int); // 0x8c TObjFunc
	goto Label_145; // 0x8e Jump
	
Label_145:
	var_140_bool = 0; // 0x91 PushV
	func_6273(var_140_bool); // 0x92 Call
	if(var_140_bool == 0) goto Label_160; // 0x94 JumpB
	
Label_149:
	lshWaitForAnimEnd(); // 0x95 Func
	var_141_object = var_3_object; // 0x97 PushT
	if(var_141_object == 0) goto Label_154; // 0x98 JumpB
	goto Label_159; // 0x99 Jump
	
Label_159:
	goto Label_174; // 0x9f Jump
	
Label_174:
	return 0; // 0xae Return
	
Label_154:
	var_142_string = ""; // 0x9a PushV
	var_142_string = var_2_object; // 0x9b MovT
	func_6177(var_142_string); // 0x9c Call
	goto Label_149; // 0x9e Jump
	
Label_160:
	var_143_string = "all"; // 0xa0 PushS
	var_144_string = "idle"; // 0xa1 PushS
	PlayAnimation(var_143_string, var_144_string); // 0xa2 Func
	
Label_164:
	WaitForAnimEnd(); // 0xa4 Func
	var_145_object = var_3_object; // 0xa6 PushT
	if(var_145_object == 0) goto Label_169; // 0xa7 JumpB
	goto Label_174; // 0xa8 Jump
	
Label_169:
	var_146_string = "all"; // 0xa9 PushS
	var_147_string = "idle"; // 0xaa PushS
	PlayAnimation(var_146_string, var_147_string); // 0xab Func
	goto Label_164; // 0xad Jump
}


func_7281(var_56_bool, var_57_object, var_58_int)
{
	var_59_object = Obj(); var_60_object = Obj(); var_61_int = 0; var_62_object = Obj(); var_63_object = Obj(); var_64_int = 0; // 0x1c71 PushV
	var_65_object = Obj(); // 0x1c72 PushV
	func_7268(var_65_object); // 0x1c73 Call
	var_62_object = var_65_object; // 0x1c74 Mov
	Find(var_58_int, var_63_object); // 0x1c76 ObjFunc
	var_70_bool = var_63_object == 0; // 0x1c78 Not
	if(var_70_bool == 0) goto Label_7296; // 0x1c79 JumpB
	var_71_string = "Can't find diary parent with id: "; // 0x1c7a PushS
	var_72_int = var_71_string + var_58_int; // 0x1c7b Add
	Trace(var_72_int); // 0x1c7c Func
	var_56_bool = 0; // 0x1c7e MovB
	return 6; // 0x1c7f Return
	
Label_7296:
	AddChild(var_57_object); // 0x1c80 ObjFunc
	var_73_string = "player_diary"; // 0x1c82 PushS
	var_74_int = 1; // 0x1c83 PushI
	SetVariable(var_73_string, var_74_int); // 0x1c84 Func
	GetCategory(var_64_int); // 0x1c86 ObjFunc
	SetDiarySection(var_64_int); // 0x1c88 Func
	var_56_bool = 0; // 0x1c8a MovB
	return 6; // 0x1c8b Return
}


func_6260(var_866_bool)
{
	var_867_bool = 0; var_868_bool = 0; // 0x1874 PushV
	var_869_string = ""; // 0x1875 PushV
	var_869_string = "No"; // 0x1876 MovS
	func_6177(var_869_string); // 0x1877 Call
	lshWaitForAnimEnd(var_868_bool); // 0x1879 Func
	var_866_bool = var_868_bool; // 0x187b Mov
	return 2; // 0x187c Return
}


func_6773(var_460_bool)
{
	var_462_int = 0; var_463_string = ""; // 0x1a76 PushV
	var_463_string = "d1q01TeloNedostupno"; // 0x1a77 MovS
	func_6212(var_462_int, var_463_string); // 0x1a78 Call
	var_464_int = 1; // 0x1a7a PushI
	var_465_bool = var_462_int == var_464_int; // 0x1a7b Eq
	if(var_465_bool == 0) goto Label_6783; // 0x1a7c JumpB
	var_460_bool = 1; // 0x1a7d MovB
	return 0; // 0x1a7e Return
	
Label_6783:
	var_460_bool = 0; // 0x1a7f MovB
	return 0; // 0x1a80 Return
}


func_6269(var_96_int)
{
	var_96_int = 2879; // 0x187d MovI
	return 0; // 0x187e Return
}


func_6271(var_97_string)
{
	var_97_string = "ui/NPC_Viktor.png"; // 0x187f MovS
	return 0; // 0x1880 Return
}


func_6273(var_43_bool)
{
	var_43_bool = 1; // 0x1881 MovB
	return 0; // 0x1882 Return
}


func_6785(var_336_bool)
{
	var_338_int = 0; var_339_string = ""; // 0x1a82 PushV
	var_339_string = "d1q02"; // 0x1a83 MovS
	func_6212(var_338_int, var_339_string); // 0x1a84 Call
	var_340_int = 0; // 0x1a86 PushI
	var_341_bool = var_338_int == var_340_int; // 0x1a87 Eq
	if(var_341_bool == 0) goto Label_6795; // 0x1a88 JumpB
	var_336_bool = 1; // 0x1a89 MovB
	return 0; // 0x1a8a Return
	
Label_6795:
	var_336_bool = 0; // 0x1a8b MovB
	return 0; // 0x1a8c Return
}


func_6275()
{
	var_83_string = "ood1Viktor1"; // 0x1884 PushS
	var_84_int = 1; // 0x1885 PushI
	SetVariable(var_83_string, var_84_int); // 0x1886 Func
	return 0; // 0x1888 Return
}


func_6281()
{
	var_147_string = "ood1Viktor2"; // 0x188a PushS
	var_148_int = 1; // 0x188b PushI
	SetVariable(var_147_string, var_148_int); // 0x188c Func
	return 0; // 0x188e Return
}


func_3210(var_2_object, var_69_string)
{
	var_70_bool = 0; // 0xc8b PushV
	func_6273(var_70_bool); // 0xc8c Call
	var_71_bool = var_70_bool == 0; // 0xc8e Not
	if(var_71_bool == 0) goto Label_3217; // 0xc8f JumpB
	return 0; // 0xc90 Return
	
Label_3217:
	var_72_bool = var_69_string == var_2_object; // 0xc91 Eq
	if(var_72_bool == 0) goto Label_3220; // 0xc92 JumpB
	return 0; // 0xc93 Return
	
Label_3220:
	var_73_string = ""; // 0xc94 PushV
	var_73_string = var_69_string; // 0xc95 Mov
	func_6177(var_73_string); // 0xc96 Call
	var_2_object = var_69_string; // 0xc98 TMov
	return 0; // 0xc99 Return
}


func_652(var_0_object, var_159_int, var_160_object)
{
	var_162_object = Obj(); var_163_bool = 0; var_164_int = 0; var_165_bool = 0; var_166_object = Obj(); var_167_bool = 0; var_168_int = 0; var_169_bool = 0; // 0x28c PushV
	var_0_object = var_160_object; // 0x28d TMov
	var_170_bool = 0; var_171_object = Obj(); // 0x28e PushV
	var_171_object = var_160_object; // 0x28f Mov
	func_6117(var_171_object); // 0x290 Call
	var_172_bool = var_170_bool == 0; // 0x292 Not
	if(var_172_bool == 0) goto Label_662; // 0x293 JumpB
	var_159_int = -2; // 0x294 MovI
	return 8; // 0x295 Return
	
Label_662:
	CreateDialog(var_166_object); // 0x296 Func
	var_173_int = 0; // 0x298 PushV
	func_6269(var_173_int); // 0x299 Call
	SetNPCName(var_173_int); // 0x29b ObjFunc
	var_174_string = ""; // 0x29d PushV
	func_6271(var_174_string); // 0x29e Call
	SetPhoto(var_174_string); // 0x2a0 ObjFunc
	var_175_int = 0; // 0x2a2 PushV
	func_7360(var_175_int); // 0x2a3 Call
	SetPlayerName(var_175_int); // 0x2a5 ObjFunc
	var_168_int = -1; // 0x2a7 MovI
	IsOverrideActive(var_167_bool); // 0x2a8 Func
	var_176_bool = var_167_bool; // 0x2aa Push
	if(var_176_bool == 0) goto Label_686; // 0x2ab JumpB
	var_159_int = -2; // 0x2ac MovI
	return 8; // 0x2ad Return
	
Label_686:
	DoDialog(var_166_object); // 0x2ae Func
	var_177_object = Obj(); var_178_object = Obj(); // 0x2b0 PushV
	var_177_object = var_160_object; // 0x2b1 Mov
	var_178_object = var_166_object; // 0x2b2 Mov
	TaskCall(7); // 0x2b3 TaskCall
	func_715(var_179_object, var_180_object, var_181_string, var_182_bool, var_177_object, var_178_object); // 0x2b4 Call
	TaskReturn(); // 0x2b5 TaskReturn
	IsDialogEnd(var_169_bool); // 0x2b7 ObjFunc
	
Label_697:
	var_390_bool = var_169_bool == 0; // 0x2b9 Not
	if(var_390_bool == 0) goto Label_704; // 0x2ba JumpB
	sync(); // 0x2bb Func
	IsDialogEnd(var_169_bool); // 0x2bd ObjFunc
	goto Label_697; // 0x2bf Jump
	
Label_704:
	var_391_object = Obj(); // 0x2c0 PushV
	var_391_object = var_160_object; // 0x2c1 Mov
	func_6173(); // 0x2c2 Call
	StopDialog(var_166_object); // 0x2c4 Func
	GetReturnValue(var_168_int); // 0x2c6 ObjFunc
	var_159_int = var_168_int; // 0x2c8 Mov
	return 8; // 0x2c9 Return
}


func_6797(var_364_bool)
{
	var_366_int = 0; var_367_string = ""; // 0x1a8e PushV
	var_367_string = "d1q02"; // 0x1a8f MovS
	func_6212(var_366_int, var_367_string); // 0x1a90 Call
	var_368_int = 1000; // 0x1a92 PushI
	var_369_bool = var_366_int == var_368_int; // 0x1a93 Eq
	if(var_369_bool == 0) goto Label_6807; // 0x1a94 JumpB
	var_364_bool = 1; // 0x1a95 MovB
	return 0; // 0x1a96 Return
	
Label_6807:
	var_364_bool = 0; // 0x1a97 MovB
	return 0; // 0x1a98 Return
}


func_7310(var_58_object)
{
	var_59_object = Obj(); var_60_object = Obj(); var_61_object = Obj(); var_62_object = Obj(); // 0x1c8e PushV
	GetMainOutdoorScene(var_61_object); // 0x1c8f Func
	var_63_bool = var_61_object == 0; // 0x1c91 NullEq
	if(var_63_bool == 0) goto Label_7321; // 0x1c92 JumpB
	var_64_string = "Can't find main outdoor scene"; // 0x1c93 PushS
	Trace(var_64_string); // 0x1c94 Func
	var_62_object = 0; // 0x1c96 SetNull
	var_58_object = var_62_object; // 0x1c97 Mov
	return 4; // 0x1c98 Return
	
Label_7321:
	GetMap(var_62_object); // 0x1c99 ObjFunc
	var_58_object = var_62_object; // 0x1c9b Mov
	return 4; // 0x1c9c Return
}


func_6287()
{
	var_180_string = "ood1Viktor3"; // 0x1890 PushS
	var_181_int = 1; // 0x1891 PushI
	SetVariable(var_180_string, var_181_int); // 0x1892 Func
	return 0; // 0x1894 Return
}


func_6293()
{
	var_168_string = "ood1Viktor4"; // 0x1896 PushS
	var_169_int = 1; // 0x1897 PushI
	SetVariable(var_168_string, var_169_int); // 0x1898 Func
	return 0; // 0x189a Return
}


func_6809(var_370_bool)
{
	var_372_int = 0; var_373_string = ""; // 0x1a9a PushV
	var_373_string = "ood1Viktor5"; // 0x1a9b MovS
	func_6212(var_372_int, var_373_string); // 0x1a9c Call
	var_374_int = 0; // 0x1a9e PushI
	var_375_bool = var_372_int == var_374_int; // 0x1a9f Eq
	if(var_375_bool == 0) goto Label_6819; // 0x1aa0 JumpB
	var_370_bool = 1; // 0x1aa1 MovB
	return 0; // 0x1aa2 Return
	
Label_6819:
	var_370_bool = 0; // 0x1aa3 MovB
	return 0; // 0x1aa4 Return
}


func_6299()
{
	func_7393(); // 0x189d Call
	var_73_object = Obj(); var_74_string = ""; // 0x189f PushV
	var_74_string = "quest_d1_02"; // 0x18a0 MovS
	func_6217(var_73_object, var_74_string); // 0x18a1 Call
	return 0; // 0x18a3 Return
}


func_7327(var_98_object, var_99_string, var_100_float)
{
	var_102_cvector = CVector(0,0,0); var_103_cvector = CVector(0,0,0); var_104_object = Obj(); var_105_bool = 0; var_106_cvector = CVector(0,0,0); var_107_cvector = CVector(0,0,0); var_108_object = Obj(); var_109_bool = 0; // 0x1c9f PushV
	GetMainOutdoorScene(var_108_object); // 0x1ca0 Func
	var_110_bool = var_108_object == 0; // 0x1ca2 NullEq
	if(var_110_bool == 0) goto Label_7336; // 0x1ca3 JumpB
	var_111_string = "Can't find main outdoor scene"; // 0x1ca4 PushS
	Trace(var_111_string); // 0x1ca5 Func
	return 8; // 0x1ca7 Return
	
Label_7336:
	GetLocator(var_99_string, var_109_bool, var_106_cvector, var_107_cvector); // 0x1ca8 ObjFunc
	var_112_bool = var_109_bool == 0; // 0x1caa Not
	if(var_112_bool == 0) goto Label_7346; // 0x1cab JumpB
	var_113_string = "Warning: outdoor scene locator "; // 0x1cac PushS
	var_114_int = var_113_string + var_99_string; // 0x1cad Add
	var_115_string = " doesnt exist"; // 0x1cae PushS
	var_116_int = var_114_int + var_115_string; // 0x1caf Add
	Trace(var_116_int); // 0x1cb0 Func
	
Label_7346:
	GetMap(var_98_object); // 0x1cb2 ObjFunc
	var_117_bool = var_98_object == 0; // 0x1cb4 NullEq
	if(var_117_bool == 0) goto Label_7354; // 0x1cb5 JumpB
	var_118_string = "Can't find map"; // 0x1cb6 PushS
	Trace(var_118_string); // 0x1cb7 Func
	return 8; // 0x1cb9 Return
	
Label_7354:
	var_119_float = GetByIndex(var_106_cvector, 0); // 0x1cba PushE
	var_120_float = GetByIndex(var_106_cvector, 2); // 0x1cbb PushE
	SetMapParams(var_119_float, var_120_float, var_100_float); // 0x1cbc ObjFunc
	return 8; // 0x1cbe Return
}


func_6308()
{
	var_190_string = "ood1Viktor5"; // 0x18a5 PushS
	var_191_int = 1; // 0x18a6 PushI
	SetVariable(var_190_string, var_191_int); // 0x18a7 Func
	return 0; // 0x18a9 Return
}


func_6821(var_270_bool)
{
	var_272_int = 0; var_273_string = ""; // 0x1aa6 PushV
	var_273_string = "d1q01FirstGeorgVisit"; // 0x1aa7 MovS
	func_6212(var_272_int, var_273_string); // 0x1aa8 Call
	var_276_int = 1; // 0x1aaa PushI
	var_277_bool = var_272_int == var_276_int; // 0x1aab Eq
	if(var_277_bool == 0) goto Label_6831; // 0x1aac JumpB
	var_270_bool = 1; // 0x1aad MovB
	return 0; // 0x1aae Return
	
Label_6831:
	var_270_bool = 0; // 0x1aaf MovB
	return 0; // 0x1ab0 Return
}


func_6648()
{
	var_63_string = "ood8Viktor1"; // 0x19f9 PushS
	var_64_int = 1; // 0x19fa PushI
	SetVariable(var_63_string, var_64_int); // 0x19fb Func
	return 0; // 0x19fd Return
}


func_6314()
{
	var_147_string = "playsound"; // 0x18ab PushS
	var_148_string = "givemoney"; // 0x18ac PushS
	TriggerWorld(var_147_string, var_148_string); // 0x18ad Func
	return 0; // 0x18af Return
}


func_175(var_2_object, var_50_string)
{
	var_51_bool = 0; // 0xb0 PushV
	func_6273(var_51_bool); // 0xb1 Call
	var_52_bool = var_51_bool == 0; // 0xb3 Not
	if(var_52_bool == 0) goto Label_182; // 0xb4 JumpB
	return 0; // 0xb5 Return
	
Label_182:
	var_53_bool = var_50_string == var_2_object; // 0xb6 Eq
	if(var_53_bool == 0) goto Label_185; // 0xb7 JumpB
	return 0; // 0xb8 Return
	
Label_185:
	var_54_string = ""; // 0xb9 PushV
	var_54_string = var_50_string; // 0xba Mov
	func_6177(var_54_string); // 0xbb Call
	var_2_object = var_50_string; // 0xbd TMov
	return 0; // 0xbe Return
}


func_6320()
{
	var_625_string = "KnowBattleBrods"; // 0x18b1 PushS
	var_626_int = 1; // 0x18b2 PushI
	SetVariable(var_625_string, var_626_int); // 0x18b3 Func
	return 0; // 0x18b5 Return
}


func_6833(var_87_bool)
{
	var_89_int = 0; var_90_string = ""; // 0x1ab2 PushV
	var_90_string = "ood2Viktor1"; // 0x1ab3 MovS
	func_6212(var_89_int, var_90_string); // 0x1ab4 Call
	var_93_int = 0; // 0x1ab6 PushI
	var_94_bool = var_89_int == var_93_int; // 0x1ab7 Eq
	if(var_94_bool == 0) goto Label_6843; // 0x1ab8 JumpB
	var_87_bool = 1; // 0x1ab9 MovB
	return 0; // 0x1aba Return
	
Label_6843:
	var_87_bool = 0; // 0x1abb MovB
	return 0; // 0x1abc Return
}


func_6326()
{
	var_785_string = "KnowShabnak"; // 0x18b7 PushS
	var_786_int = 1; // 0x18b8 PushI
	SetVariable(var_785_string, var_786_int); // 0x18b9 Func
	return 0; // 0x18bb Return
}


func_6332()
{
	return 0; // 0x18bd Return
}


func_6845(var_140_bool)
{
	var_142_int = 0; var_143_string = ""; // 0x1abe PushV
	var_143_string = "KnowRavell"; // 0x1abf MovS
	func_6212(var_142_int, var_143_string); // 0x1ac0 Call
	var_144_int = 1; // 0x1ac2 PushI
	var_145_bool = var_142_int == var_144_int; // 0x1ac3 Eq
	if(var_145_bool == 0) goto Label_6855; // 0x1ac4 JumpB
	var_140_bool = 1; // 0x1ac5 MovB
	return 0; // 0x1ac6 Return
	
Label_6855:
	var_140_bool = 0; // 0x1ac7 MovB
	return 0; // 0x1ac8 Return
}


func_6334()
{
	var_48_string = "ood2Viktor1"; // 0x18bf PushS
	var_49_int = 1; // 0x18c0 PushI
	SetVariable(var_48_string, var_49_int); // 0x18c1 Func
	return 0; // 0x18c3 Return
}


func_7360(var_98_int)
{
	var_99_int = 0; var_100_int = 0; // 0x1cc0 PushV
	var_101_string = "player"; // 0x1cc1 PushS
	GetVariable(var_101_string, var_100_int); // 0x1cc2 Func
	var_102_int = 0; // 0x1cc4 PushI
	var_103_bool = var_100_int == var_102_int; // 0x1cc5 Eq
	if(var_103_bool == 0) goto Label_7370; // 0x1cc6 JumpB
	var_98_int = 200001; // 0x1cc7 MovI
	return 2; // 0x1cc8 Return
	
Label_7370:
	var_104_int = 1; // 0x1cca PushI
	var_105_bool = var_100_int == var_104_int; // 0x1ccb Eq
	if(var_105_bool == 0) goto Label_7375; // 0x1ccc JumpB
	var_98_int = 200002; // 0x1ccd MovI
	return 2; // 0x1cce Return
	
Label_7375:
	var_98_int = 200003; // 0x1ccf MovI
	return 2; // 0x1cd0 Return
}


func_6340()
{
	var_167_string = "KnowRavell"; // 0x18c5 PushS
	var_168_int = 1; // 0x18c6 PushI
	SetVariable(var_167_string, var_168_int); // 0x18c7 Func
	return 0; // 0x18c9 Return
}


func_6857(var_101_bool)
{
	var_103_int = 0; var_104_string = ""; // 0x1aca PushV
	var_104_string = "d2q03"; // 0x1acb MovS
	func_6212(var_103_int, var_104_string); // 0x1acc Call
	var_105_int = 1; // 0x1ace PushI
	var_106_bool = var_103_int == var_105_int; // 0x1acf Eq
	if(var_106_bool == 0) goto Label_6867; // 0x1ad0 JumpB
	var_101_bool = 1; // 0x1ad1 MovB
	return 0; // 0x1ad2 Return
	
Label_6867:
	var_101_bool = 0; // 0x1ad3 MovB
	return 0; // 0x1ad4 Return
}


func_6346(var_50_object)
{
	var_52_string = "money 5000 is given"; // 0x18cb PushS
	Trace(var_52_string); // 0x18cc Func
	var_53_object = Obj(); var_54_string = ""; var_55_int = 0; // 0x18ce PushV
	var_53_object = var_50_object; // 0x18cf Mov
	var_54_string = "money"; // 0x18d0 MovS
	var_55_int = 5000; // 0x18d1 MovI
	func_6093(var_54_string, var_55_int); // 0x18d2 Call
	return 0; // 0x18d4 Return
}


func_715(var_0_object, var_1_object, var_2_object, var_3_object, var_177_object, var_178_object)
{
	var_0_object = var_178_object; // 0x2cc TMov
	var_1_object = var_177_object; // 0x2cd TMov
	var_3_object = 0; // 0x2ce TMovB
	var_183_int = 1; // 0x2cf PushI
	if(var_183_int == 0) goto Label_989; // 0x2d0 JumpB
	var_184_bool = 0; var_185_object = Obj(); // 0x2d1 PushV
	var_185_object = var_1_object; // 0x2d2 MovT
	func_6821(var_185_object); // 0x2d3 Call
	var_192_bool = var_184_bool == 0; // 0x2d5 Not
	if(var_192_bool == 0) goto Label_752; // 0x2d6 JumpB
	var_193_string = ""; // 0x2d7 PushV
	var_193_string = "Neutral"; // 0x2d8 MovS
	func_1019(var_178_object, var_193_string); // 0x2d9 Call
	var_198_int = 5111; // 0x2db PushI
	SetMessage(var_198_int); // 0x2dc TObjFunc
	ClearReplies(); // 0x2de TObjFunc
	var_199_int = 5112; // 0x2e0 PushI
	var_200_int = 5626; // 0x2e1 PushI
	var_201_int = 5625; // 0x2e2 PushI
	AddReply(var_199_int, var_200_int, var_201_int); // 0x2e3 TObjFunc
	var_202_int = 5119; // 0x2e5 PushI
	var_203_int = 5626; // 0x2e6 PushI
	var_204_int = 5632; // 0x2e7 PushI
	AddReply(var_202_int, var_203_int, var_204_int); // 0x2e8 TObjFunc
	var_205_int = 5120; // 0x2ea PushI
	var_206_int = -1; // 0x2eb PushI
	var_207_int = 5634; // 0x2ec PushI
	AddReply(var_205_int, var_206_int, var_207_int); // 0x2ed TObjFunc
	goto Label_989; // 0x2ef Jump
	
Label_989:
	var_208_bool = 0; // 0x3dd PushV
	func_6273(var_208_bool); // 0x3de Call
	if(var_208_bool == 0) goto Label_1004; // 0x3e0 JumpB
	
Label_993:
	lshWaitForAnimEnd(); // 0x3e1 Func
	var_209_object = var_3_object; // 0x3e3 PushT
	if(var_209_object == 0) goto Label_998; // 0x3e4 JumpB
	goto Label_1003; // 0x3e5 Jump
	
Label_1003:
	goto Label_1018; // 0x3eb Jump
	
Label_1018:
	return 0; // 0x3fa Return
	
Label_998:
	var_210_string = ""; // 0x3e6 PushV
	var_210_string = var_2_object; // 0x3e7 MovT
	func_6177(var_210_string); // 0x3e8 Call
	goto Label_993; // 0x3ea Jump
	
Label_1004:
	var_211_string = "all"; // 0x3ec PushS
	var_212_string = "idle"; // 0x3ed PushS
	PlayAnimation(var_211_string, var_212_string); // 0x3ee Func
	
Label_1008:
	WaitForAnimEnd(); // 0x3f0 Func
	var_213_object = var_3_object; // 0x3f2 PushT
	if(var_213_object == 0) goto Label_1013; // 0x3f3 JumpB
	goto Label_1018; // 0x3f4 Jump
	
Label_1013:
	var_214_string = "all"; // 0x3f5 PushS
	var_215_string = "idle"; // 0x3f6 PushS
	PlayAnimation(var_214_string, var_215_string); // 0x3f7 Func
	goto Label_1008; // 0x3f9 Jump
	
Label_752:
	var_216_bool = 0; var_217_object = Obj(); // 0x2f0 PushV
	var_217_object = var_1_object; // 0x2f1 MovT
	func_6713(var_217_object); // 0x2f2 Call
	if(var_216_bool == 0) goto Label_782; // 0x2f4 JumpB
	var_222_string = ""; // 0x2f5 PushV
	var_222_string = "Neutral"; // 0x2f6 MovS
	func_1019(var_178_object, var_222_string); // 0x2f7 Call
	var_223_int = 5155; // 0x2f9 PushI
	SetMessage(var_223_int); // 0x2fa TObjFunc
	ClearReplies(); // 0x2fc TObjFunc
	var_224_int = 5156; // 0x2fe PushI
	var_225_int = 5678; // 0x2ff PushI
	var_226_int = 5677; // 0x300 PushI
	AddReply(var_224_int, var_225_int, var_226_int); // 0x301 TObjFunc
	var_227_int = 5183; // 0x303 PushI
	var_228_int = 5678; // 0x304 PushI
	var_229_int = 5707; // 0x305 PushI
	AddReply(var_227_int, var_228_int, var_229_int); // 0x306 TObjFunc
	var_230_int = 5184; // 0x308 PushI
	var_231_int = 5678; // 0x309 PushI
	var_232_int = 5709; // 0x30a PushI
	AddReply(var_230_int, var_231_int, var_232_int); // 0x30b TObjFunc
	goto Label_989; // 0x30d Jump
	
Label_782:
	var_233_string = ""; // 0x30e PushV
	var_233_string = "Neutral"; // 0x30f MovS
	func_1019(var_178_object, var_233_string); // 0x310 Call
	var_234_int = 5106; // 0x312 PushI
	SetMessage(var_234_int); // 0x313 TObjFunc
	ClearReplies(); // 0x315 TObjFunc
	var_235_bool = 0; // 0x317 PushV
	var_235_bool = 0; // 0x318 MovB
	var_236_bool = 0; var_237_object = Obj(); // 0x319 PushV
	var_237_object = var_1_object; // 0x31a MovT
	func_6725(var_237_object); // 0x31b Call
	if(var_236_bool == 0) goto Label_804; // 0x31d JumpB
	var_242_bool = 0; var_243_object = Obj(); // 0x31e PushV
	var_243_object = var_1_object; // 0x31f MovT
	func_6821(var_243_object); // 0x320 Call
	if(var_242_bool == 0) goto Label_804; // 0x322 JumpB
	var_235_bool = 1; // 0x323 MovB
	
Label_804:
	if(var_235_bool == 0) goto Label_810; // 0x324 JumpB
	var_244_int = 5107; // 0x325 PushI
	var_245_int = 9234; // 0x326 PushI
	var_246_int = 5620; // 0x327 PushI
	AddReply(var_244_int, var_245_int, var_246_int); // 0x328 TObjFunc
	
Label_810:
	var_247_bool = 0; // 0x32a PushV
	var_247_bool = 0; // 0x32b MovB
	var_248_bool = 0; var_249_object = Obj(); // 0x32c PushV
	var_249_object = var_1_object; // 0x32d MovT
	func_6785(var_249_object); // 0x32e Call
	if(var_248_bool == 0) goto Label_823; // 0x330 JumpB
	var_254_bool = 0; var_255_object = Obj(); // 0x331 PushV
	var_255_object = var_1_object; // 0x332 MovT
	func_6749(var_255_object); // 0x333 Call
	if(var_254_bool == 0) goto Label_823; // 0x335 JumpB
	var_247_bool = 1; // 0x336 MovB
	
Label_823:
	if(var_247_bool == 0) goto Label_829; // 0x337 JumpB
	var_260_int = 5108; // 0x338 PushI
	var_261_int = 9315; // 0x339 PushI
	var_262_int = 5621; // 0x33a PushI
	AddReply(var_260_int, var_261_int, var_262_int); // 0x33b TObjFunc
	
Label_829:
	var_263_bool = 0; // 0x33d PushV
	var_263_bool = 0; // 0x33e MovB
	var_264_bool = 0; var_265_object = Obj(); // 0x33f PushV
	var_265_object = var_1_object; // 0x340 MovT
	func_6881(var_265_object); // 0x341 Call
	if(var_264_bool == 0) goto Label_842; // 0x343 JumpB
	var_266_bool = 0; var_267_object = Obj(); // 0x344 PushV
	var_267_object = var_1_object; // 0x345 MovT
	func_6737(var_267_object); // 0x346 Call
	if(var_266_bool == 0) goto Label_842; // 0x348 JumpB
	var_263_bool = 1; // 0x349 MovB
	
Label_842:
	if(var_263_bool == 0) goto Label_848; // 0x34a JumpB
	var_272_int = 8455; // 0x34b PushI
	var_273_int = 5635; // 0x34c PushI
	var_274_int = 9290; // 0x34d PushI
	AddReply(var_272_int, var_273_int, var_274_int); // 0x34e TObjFunc
	
Label_848:
	var_275_bool = 0; // 0x350 PushV
	var_275_bool = 0; // 0x351 MovB
	var_276_bool = 0; var_277_object = Obj(); // 0x352 PushV
	var_277_object = var_1_object; // 0x353 MovT
	func_6797(var_277_object); // 0x354 Call
	if(var_276_bool == 0) goto Label_861; // 0x356 JumpB
	var_282_bool = 0; var_283_object = Obj(); // 0x357 PushV
	var_283_object = var_1_object; // 0x358 MovT
	func_6809(var_283_object); // 0x359 Call
	if(var_282_bool == 0) goto Label_861; // 0x35b JumpB
	var_275_bool = 1; // 0x35c MovB
	
Label_861:
	if(var_275_bool == 0) goto Label_867; // 0x35d JumpB
	var_288_int = 5109; // 0x35e PushI
	var_289_int = 5711; // 0x35f PushI
	var_290_int = 5622; // 0x360 PushI
	AddReply(var_288_int, var_289_int, var_290_int); // 0x361 TObjFunc
	
Label_867:
	var_291_bool = 0; // 0x363 PushV
	var_291_bool = 0; // 0x364 MovB
	var_292_bool = 0; var_293_object = Obj(); // 0x365 PushV
	var_293_object = var_1_object; // 0x366 MovT
	func_7172(var_293_object); // 0x367 Call
	if(var_292_bool == 0) goto Label_880; // 0x369 JumpB
	var_298_bool = 0; var_299_object = Obj(); // 0x36a PushV
	var_299_object = var_1_object; // 0x36b MovT
	func_6886(var_299_object); // 0x36c Call
	if(var_298_bool == 0) goto Label_880; // 0x36e JumpB
	var_291_bool = 1; // 0x36f MovB
	
Label_880:
	if(var_291_bool == 0) goto Label_886; // 0x370 JumpB
	var_304_int = 8390; // 0x371 PushI
	var_305_int = 9317; // 0x372 PushI
	var_306_int = 9213; // 0x373 PushI
	AddReply(var_304_int, var_305_int, var_306_int); // 0x374 TObjFunc
	
Label_886:
	var_307_bool = 0; // 0x376 PushV
	var_307_bool = 0; // 0x377 MovB
	var_308_bool = 0; var_309_object = Obj(); // 0x378 PushV
	var_309_object = var_1_object; // 0x379 MovT
	func_7220(var_309_object); // 0x37a Call
	if(var_308_bool == 0) goto Label_899; // 0x37c JumpB
	var_314_bool = 0; var_315_object = Obj(); // 0x37d PushV
	var_315_object = var_1_object; // 0x37e MovT
	func_6898(var_315_object); // 0x37f Call
	if(var_314_bool == 0) goto Label_899; // 0x381 JumpB
	var_307_bool = 1; // 0x382 MovB
	
Label_899:
	if(var_307_bool == 0) goto Label_905; // 0x383 JumpB
	var_320_int = 8392; // 0x384 PushI
	var_321_int = 9247; // 0x385 PushI
	var_322_int = 9215; // 0x386 PushI
	AddReply(var_320_int, var_321_int, var_322_int); // 0x387 TObjFunc
	
Label_905:
	var_323_bool = 0; // 0x389 PushV
	var_323_bool = 0; // 0x38a MovB
	var_324_bool = 0; var_325_object = Obj(); // 0x38b PushV
	var_325_object = var_1_object; // 0x38c MovT
	func_7112(var_325_object); // 0x38d Call
	if(var_324_bool == 0) goto Label_918; // 0x38f JumpB
	var_330_bool = 0; var_331_object = Obj(); // 0x390 PushV
	var_331_object = var_1_object; // 0x391 MovT
	func_6910(var_331_object); // 0x392 Call
	if(var_330_bool == 0) goto Label_918; // 0x394 JumpB
	var_323_bool = 1; // 0x395 MovB
	
Label_918:
	if(var_323_bool == 0) goto Label_924; // 0x396 JumpB
	var_336_int = 8397; // 0x397 PushI
	var_337_int = 9248; // 0x398 PushI
	var_338_int = 9220; // 0x399 PushI
	AddReply(var_336_int, var_337_int, var_338_int); // 0x39a TObjFunc
	
Label_924:
	var_339_bool = 0; // 0x39c PushV
	var_339_bool = 0; // 0x39d MovB
	var_340_bool = 0; var_341_object = Obj(); // 0x39e PushV
	var_341_object = var_1_object; // 0x39f MovT
	func_7124(var_341_object); // 0x3a0 Call
	if(var_340_bool == 0) goto Label_937; // 0x3a2 JumpB
	var_346_bool = 0; var_347_object = Obj(); // 0x3a3 PushV
	var_347_object = var_1_object; // 0x3a4 MovT
	func_6922(var_347_object); // 0x3a5 Call
	if(var_346_bool == 0) goto Label_937; // 0x3a7 JumpB
	var_339_bool = 1; // 0x3a8 MovB
	
Label_937:
	if(var_339_bool == 0) goto Label_943; // 0x3a9 JumpB
	var_352_int = 8399; // 0x3aa PushI
	var_353_int = 9249; // 0x3ab PushI
	var_354_int = 9222; // 0x3ac PushI
	AddReply(var_352_int, var_353_int, var_354_int); // 0x3ad TObjFunc
	
Label_943:
	var_355_bool = 0; // 0x3af PushV
	var_355_bool = 0; // 0x3b0 MovB
	var_356_bool = 0; var_357_object = Obj(); // 0x3b1 PushV
	var_357_object = var_1_object; // 0x3b2 MovT
	func_7244(var_357_object); // 0x3b3 Call
	if(var_356_bool == 0) goto Label_956; // 0x3b5 JumpB
	var_362_bool = 0; var_363_object = Obj(); // 0x3b6 PushV
	var_363_object = var_1_object; // 0x3b7 MovT
	func_6934(var_363_object); // 0x3b8 Call
	if(var_362_bool == 0) goto Label_956; // 0x3ba JumpB
	var_355_bool = 1; // 0x3bb MovB
	
Label_956:
	if(var_355_bool == 0) goto Label_962; // 0x3bc JumpB
	var_368_int = 8404; // 0x3bd PushI
	var_369_int = 9358; // 0x3be PushI
	var_370_int = 9227; // 0x3bf PushI
	AddReply(var_368_int, var_369_int, var_370_int); // 0x3c0 TObjFunc
	
Label_962:
	var_371_bool = 0; // 0x3c2 PushV
	var_371_bool = 0; // 0x3c3 MovB
	var_372_bool = 0; var_373_object = Obj(); // 0x3c4 PushV
	var_373_object = var_1_object; // 0x3c5 MovT
	func_6773(var_373_object); // 0x3c6 Call
	if(var_372_bool == 0) goto Label_975; // 0x3c8 JumpB
	var_378_bool = 0; var_379_object = Obj(); // 0x3c9 PushV
	var_379_object = var_1_object; // 0x3ca MovT
	func_6946(var_379_object); // 0x3cb Call
	if(var_378_bool == 0) goto Label_975; // 0x3cd JumpB
	var_371_bool = 1; // 0x3ce MovB
	
Label_975:
	if(var_371_bool == 0) goto Label_981; // 0x3cf JumpB
	var_384_int = 5142; // 0x3d0 PushI
	var_385_int = 5662; // 0x3d1 PushI
	var_386_int = 5661; // 0x3d2 PushI
	AddReply(var_384_int, var_385_int, var_386_int); // 0x3d3 TObjFunc
	
Label_981:
	var_387_int = 5110; // 0x3d5 PushI
	var_388_int = -1; // 0x3d6 PushI
	var_389_int = 5623; // 0x3d7 PushI
	AddReply(var_387_int, var_388_int, var_389_int); // 0x3d8 TObjFunc
	goto Label_989; // 0x3da Jump
}


func_7377()
{
	var_151_object = Obj(); var_152_object = Obj(); // 0x1cd1 PushV
	var_153_string = "Adding diary entry"; // 0x1cd2 PushS
	Trace(var_153_string); // 0x1cd3 Func
	var_154_int = 31; // 0x1cd5 PushI
	var_155_int = 1; // 0x1cd6 PushI
	var_156_int = 12113; // 0x1cd7 PushI
	CreateDiaryEntry(var_152_object, var_154_int, var_155_int, var_156_int); // 0x1cd8 Func
	var_157_bool = 0; var_158_object = Obj(); var_159_int = 0; // 0x1cda PushV
	var_158_object = var_152_object; // 0x1cdb Mov
	var_159_int = 2; // 0x1cdc MovI
	func_7281(var_157_bool, var_158_object, var_159_int); // 0x1cdd Call
	return 2; // 0x1cdf Return
}


func_6357()
{
	return 0; // 0x18d6 Return
}


func_6869(var_95_bool)
{
	var_97_int = 0; var_98_string = ""; // 0x1ad6 PushV
	var_98_string = "d2q03MariaGotoViktor"; // 0x1ad7 MovS
	func_6212(var_97_int, var_98_string); // 0x1ad8 Call
	var_99_int = 1; // 0x1ada PushI
	var_100_bool = var_97_int == var_99_int; // 0x1adb Eq
	if(var_100_bool == 0) goto Label_6879; // 0x1adc JumpB
	var_95_bool = 1; // 0x1add MovB
	return 0; // 0x1ade Return
	
Label_6879:
	var_95_bool = 0; // 0x1adf MovB
	return 0; // 0x1ae0 Return
}


func_6359()
{
	var_212_string = "ood1Viktor6"; // 0x18d8 PushS
	var_213_int = 1; // 0x18d9 PushI
	SetVariable(var_212_string, var_213_int); // 0x18da Func
	return 0; // 0x18dc Return
}


func_6365()
{
	var_222_string = "ood1Viktor7"; // 0x18de PushS
	var_223_int = 1; // 0x18df PushI
	SetVariable(var_222_string, var_223_int); // 0x18e0 Func
	return 0; // 0x18e2 Return
}


func_6881(var_352_bool)
{
	var_352_bool = 1; // 0x1ae2 MovB
	return 0; // 0x1ae3 Return
}


func_7393()
{
	var_48_object = Obj(); var_49_object = Obj(); // 0x1ce1 PushV
	var_50_string = "Adding diary entry"; // 0x1ce2 PushS
	Trace(var_50_string); // 0x1ce3 Func
	var_51_int = 7; // 0x1ce5 PushI
	var_52_int = 2; // 0x1ce6 PushI
	var_53_int = 3078; // 0x1ce7 PushI
	CreateDiaryEntry(var_49_object, var_51_int, var_52_int, var_53_int); // 0x1ce8 Func
	var_54_bool = 0; var_55_object = Obj(); var_56_int = 0; // 0x1cea PushV
	var_55_object = var_49_object; // 0x1ceb Mov
	var_56_int = -1; // 0x1cec MovI
	func_7281(var_54_bool, var_55_object, var_56_int); // 0x1ced Call
	return 2; // 0x1cef Return
}


func_6371()
{
	var_228_string = "ood1Viktor8"; // 0x18e4 PushS
	var_229_int = 1; // 0x18e5 PushI
	SetVariable(var_228_string, var_229_int); // 0x18e6 Func
	return 0; // 0x18e8 Return
}


func_6886(var_386_bool)
{
	var_388_int = 0; var_389_string = ""; // 0x1ae7 PushV
	var_389_string = "ood1Viktor6"; // 0x1ae8 MovS
	func_6212(var_388_int, var_389_string); // 0x1ae9 Call
	var_390_int = 0; // 0x1aeb PushI
	var_391_bool = var_388_int == var_390_int; // 0x1aec Eq
	if(var_391_bool == 0) goto Label_6896; // 0x1aed JumpB
	var_386_bool = 1; // 0x1aee MovB
	return 0; // 0x1aef Return
	
Label_6896:
	var_386_bool = 0; // 0x1af0 MovB
	return 0; // 0x1af1 Return
}


func_6377()
{
	var_238_string = "ood1Viktor9"; // 0x18ea PushS
	var_239_int = 1; // 0x18eb PushI
	SetVariable(var_238_string, var_239_int); // 0x18ec Func
	return 0; // 0x18ee Return
}


func_6383()
{
	var_248_string = "ood1Viktor10"; // 0x18f0 PushS
	var_249_int = 1; // 0x18f1 PushI
	SetVariable(var_248_string, var_249_int); // 0x18f2 Func
	return 0; // 0x18f4 Return
}


func_7409()
{
	var_71_object = Obj(); var_72_object = Obj(); // 0x1cf1 PushV
	var_73_string = "Adding diary entry"; // 0x1cf2 PushS
	Trace(var_73_string); // 0x1cf3 Func
	var_74_int = 77; // 0x1cf5 PushI
	var_75_int = 2; // 0x1cf6 PushI
	var_76_int = 12159; // 0x1cf7 PushI
	CreateDiaryEntry(var_72_object, var_74_int, var_75_int, var_76_int); // 0x1cf8 Func
	var_77_bool = 0; var_78_object = Obj(); var_79_int = 0; // 0x1cfa PushV
	var_78_object = var_72_object; // 0x1cfb Mov
	var_79_int = 26; // 0x1cfc MovI
	func_7281(var_77_bool, var_78_object, var_79_int); // 0x1cfd Call
	return 2; // 0x1cff Return
}


func_6898(var_402_bool)
{
	var_404_int = 0; var_405_string = ""; // 0x1af3 PushV
	var_405_string = "ood1Viktor7"; // 0x1af4 MovS
	func_6212(var_404_int, var_405_string); // 0x1af5 Call
	var_406_int = 0; // 0x1af7 PushI
	var_407_bool = var_404_int == var_406_int; // 0x1af8 Eq
	if(var_407_bool == 0) goto Label_6908; // 0x1af9 JumpB
	var_402_bool = 1; // 0x1afa MovB
	return 0; // 0x1afb Return
	
Label_6908:
	var_402_bool = 0; // 0x1afc MovB
	return 0; // 0x1afd Return
}


func_6389()
{
	var_258_string = "ood1Viktor11"; // 0x18f6 PushS
	var_259_int = 1; // 0x18f7 PushI
	SetVariable(var_258_string, var_259_int); // 0x18f8 Func
	return 0; // 0x18fa Return
}


func_6395()
{
	var_87_object = Obj(); var_88_object = Obj(); // 0x18fb PushV
	var_89_object = Obj(); // 0x18fc PushV
	func_7310(var_89_object); // 0x18fd Call
	var_88_object = var_89_object; // 0x18fe Mov
	var_96_string = "d1q02ViktorGotoAnna"; // 0x1900 PushS
	var_97_string = "pt_map_anna"; // 0x1901 PushS
	var_98_int = 0; // 0x1902 PushI
	var_99_int = 8634; // 0x1903 PushI
	var_100_float = 0; // 0x1904 PushV
	func_6240(var_100_float); // 0x1905 Call
	AddMark(var_96_string, var_97_string, var_98_int, var_99_int, var_100_float); // 0x1907 ObjFunc
	return 2; // 0x1909 Return
}


func_6910(var_418_bool)
{
	var_420_int = 0; var_421_string = ""; // 0x1aff PushV
	var_421_string = "ood1Viktor8"; // 0x1b00 MovS
	func_6212(var_420_int, var_421_string); // 0x1b01 Call
	var_422_int = 0; // 0x1b03 PushI
	var_423_bool = var_420_int == var_422_int; // 0x1b04 Eq
	if(var_423_bool == 0) goto Label_6920; // 0x1b05 JumpB
	var_418_bool = 1; // 0x1b06 MovB
	return 0; // 0x1b07 Return
	
Label_6920:
	var_418_bool = 0; // 0x1b08 MovB
	return 0; // 0x1b09 Return
}


func_7425()
{
	var_77_object = Obj(); var_78_object = Obj(); // 0x1d01 PushV
	var_79_string = "Adding diary entry"; // 0x1d02 PushS
	Trace(var_79_string); // 0x1d03 Func
	var_80_int = 154; // 0x1d05 PushI
	var_81_int = 2; // 0x1d06 PushI
	var_82_int = 15365; // 0x1d07 PushI
	CreateDiaryEntry(var_78_object, var_80_int, var_81_int, var_82_int); // 0x1d08 Func
	var_83_bool = 0; var_84_object = Obj(); var_85_int = 0; // 0x1d0a PushV
	var_84_object = var_78_object; // 0x1d0b Mov
	var_85_int = -1; // 0x1d0c MovI
	func_7281(var_83_bool, var_84_object, var_85_int); // 0x1d0d Call
	return 2; // 0x1d0f Return
}


func_6922(var_434_bool)
{
	var_436_int = 0; var_437_string = ""; // 0x1b0b PushV
	var_437_string = "ood1Viktor9"; // 0x1b0c MovS
	func_6212(var_436_int, var_437_string); // 0x1b0d Call
	var_438_int = 0; // 0x1b0f PushI
	var_439_bool = var_436_int == var_438_int; // 0x1b10 Eq
	if(var_439_bool == 0) goto Label_6932; // 0x1b11 JumpB
	var_434_bool = 1; // 0x1b12 MovB
	return 0; // 0x1b13 Return
	
Label_6932:
	var_434_bool = 0; // 0x1b14 MovB
	return 0; // 0x1b15 Return
}


func_6411()
{
	var_148_object = Obj(); var_149_string = ""; var_150_float = 0; // 0x190c PushV
	var_151_object = Obj(); // 0x190d PushV
	func_7310(var_151_object); // 0x190e Call
	var_148_object = var_151_object; // 0x190f Mov
	var_149_string = "pt_map_anna"; // 0x1911 MovS
	var_150_float = 2; // 0x1912 MovI
	func_7327(var_148_object, var_149_string, var_150_float); // 0x1913 Call
	var_152_object = Obj(); // 0x1915 PushV
	func_7310(var_152_object); // 0x1916 Call
	ShowMap(var_152_object); // 0x1918 ObjFunc
	return 0; // 0x191a Return
}


func_7441()
{
	var_76_object = Obj(); var_77_object = Obj(); // 0x1d11 PushV
	var_78_string = "Adding diary entry"; // 0x1d12 PushS
	Trace(var_78_string); // 0x1d13 Func
	var_79_int = 111; // 0x1d15 PushI
	var_80_int = 1; // 0x1d16 PushI
	var_81_int = 13734; // 0x1d17 PushI
	CreateDiaryEntry(var_77_object, var_79_int, var_80_int, var_81_int); // 0x1d18 Func
	var_82_bool = 0; var_83_object = Obj(); var_84_int = 0; // 0x1d1a PushV
	var_83_object = var_77_object; // 0x1d1b Mov
	var_84_int = -1; // 0x1d1c MovI
	func_7281(var_82_bool, var_83_object, var_84_int); // 0x1d1d Call
	return 2; // 0x1d1f Return
}


func_4371(var_0_object, var_536_int, var_537_object)
{
	var_539_object = Obj(); var_540_bool = 0; var_541_int = 0; var_542_bool = 0; var_543_object = Obj(); var_544_bool = 0; var_545_int = 0; var_546_bool = 0; // 0x1113 PushV
	var_0_object = var_537_object; // 0x1114 TMov
	var_547_bool = 0; var_548_object = Obj(); // 0x1115 PushV
	var_548_object = var_537_object; // 0x1116 Mov
	func_6117(var_548_object); // 0x1117 Call
	var_549_bool = var_547_bool == 0; // 0x1119 Not
	if(var_549_bool == 0) goto Label_4381; // 0x111a JumpB
	var_536_int = -2; // 0x111b MovI
	return 8; // 0x111c Return
	
Label_4381:
	CreateDialog(var_543_object); // 0x111d Func
	var_550_int = 0; // 0x111f PushV
	func_6269(var_550_int); // 0x1120 Call
	SetNPCName(var_550_int); // 0x1122 ObjFunc
	var_551_string = ""; // 0x1124 PushV
	func_6271(var_551_string); // 0x1125 Call
	SetPhoto(var_551_string); // 0x1127 ObjFunc
	var_552_int = 0; // 0x1129 PushV
	func_7360(var_552_int); // 0x112a Call
	SetPlayerName(var_552_int); // 0x112c ObjFunc
	var_545_int = -1; // 0x112e MovI
	IsOverrideActive(var_544_bool); // 0x112f Func
	var_553_bool = var_544_bool; // 0x1131 Push
	if(var_553_bool == 0) goto Label_4405; // 0x1132 JumpB
	var_536_int = -2; // 0x1133 MovI
	return 8; // 0x1134 Return
	
Label_4405:
	DoDialog(var_543_object); // 0x1135 Func
	var_554_object = Obj(); var_555_object = Obj(); // 0x1137 PushV
	var_554_object = var_537_object; // 0x1138 Mov
	var_555_object = var_543_object; // 0x1139 Mov
	TaskCall(13); // 0x113a TaskCall
	func_4434(var_556_object, var_557_object, var_558_string, var_559_bool, var_554_object, var_555_object); // 0x113b Call
	TaskReturn(); // 0x113c TaskReturn
	IsDialogEnd(var_546_bool); // 0x113e ObjFunc
	
Label_4416:
	var_643_bool = var_546_bool == 0; // 0x1140 Not
	if(var_643_bool == 0) goto Label_4423; // 0x1141 JumpB
	sync(); // 0x1142 Func
	IsDialogEnd(var_546_bool); // 0x1144 ObjFunc
	goto Label_4416; // 0x1146 Jump
	
Label_4423:
	var_644_object = Obj(); // 0x1147 PushV
	var_644_object = var_537_object; // 0x1148 Mov
	func_6173(); // 0x1149 Call
	StopDialog(var_543_object); // 0x114b Func
	GetReturnValue(var_545_int); // 0x114d ObjFunc
	var_536_int = var_545_int; // 0x114f Mov
	return 8; // 0x1150 Return
}


func_6934(var_450_bool)
{
	var_452_int = 0; var_453_string = ""; // 0x1b17 PushV
	var_453_string = "ood1Viktor10"; // 0x1b18 MovS
	func_6212(var_452_int, var_453_string); // 0x1b19 Call
	var_454_int = 0; // 0x1b1b PushI
	var_455_bool = var_452_int == var_454_int; // 0x1b1c Eq
	if(var_455_bool == 0) goto Label_6944; // 0x1b1d JumpB
	var_450_bool = 1; // 0x1b1e MovB
	return 0; // 0x1b1f Return
	
Label_6944:
	var_450_bool = 0; // 0x1b20 MovB
	return 0; // 0x1b21 Return
}


func_6427()
{
	var_575_string = "KnowStation"; // 0x191c PushS
	var_576_int = 1; // 0x191d PushI
	SetVariable(var_575_string, var_576_int); // 0x191e Func
	return 0; // 0x1920 Return
}


func_6433()
{
	var_571_string = "KnowFactory"; // 0x1922 PushS
	var_572_int = 1; // 0x1923 PushI
	SetVariable(var_571_string, var_572_int); // 0x1924 Func
	return 0; // 0x1926 Return
}


func_6946(var_466_bool)
{
	var_468_int = 0; var_469_string = ""; // 0x1b23 PushV
	var_469_string = "ood1Viktor11"; // 0x1b24 MovS
	func_6212(var_468_int, var_469_string); // 0x1b25 Call
	var_470_int = 0; // 0x1b27 PushI
	var_471_bool = var_468_int == var_470_int; // 0x1b28 Eq
	if(var_471_bool == 0) goto Label_6956; // 0x1b29 JumpB
	var_466_bool = 1; // 0x1b2a MovB
	return 0; // 0x1b2b Return
	
Label_6956:
	var_466_bool = 0; // 0x1b2c MovB
	return 0; // 0x1b2d Return
}


func_7457()
{
	var_110_object = Obj(); var_111_object = Obj(); // 0x1d21 PushV
	var_112_string = "Adding diary entry"; // 0x1d22 PushS
	Trace(var_112_string); // 0x1d23 Func
	var_113_int = 113; // 0x1d25 PushI
	var_114_int = 1; // 0x1d26 PushI
	var_115_int = 13736; // 0x1d27 PushI
	CreateDiaryEntry(var_111_object, var_113_int, var_114_int, var_115_int); // 0x1d28 Func
	var_116_bool = 0; var_117_object = Obj(); var_118_int = 0; // 0x1d2a PushV
	var_117_object = var_111_object; // 0x1d2b Mov
	var_118_int = 111; // 0x1d2c MovI
	func_7281(var_116_bool, var_117_object, var_118_int); // 0x1d2d Call
	return 2; // 0x1d2f Return
}


func_289(var_0_object, var_647_int, var_648_object)
{
	var_650_object = Obj(); var_651_bool = 0; var_652_int = 0; var_653_bool = 0; var_654_object = Obj(); var_655_bool = 0; var_656_int = 0; var_657_bool = 0; // 0x121 PushV
	var_0_object = var_648_object; // 0x122 TMov
	var_658_bool = 0; var_659_object = Obj(); // 0x123 PushV
	var_659_object = var_648_object; // 0x124 Mov
	func_6117(var_659_object); // 0x125 Call
	var_660_bool = var_658_bool == 0; // 0x127 Not
	if(var_660_bool == 0) goto Label_299; // 0x128 JumpB
	var_647_int = -2; // 0x129 MovI
	return 8; // 0x12a Return
	
Label_299:
	CreateDialog(var_654_object); // 0x12b Func
	var_661_int = 0; // 0x12d PushV
	func_6269(var_661_int); // 0x12e Call
	SetNPCName(var_661_int); // 0x130 ObjFunc
	var_662_string = ""; // 0x132 PushV
	func_6271(var_662_string); // 0x133 Call
	SetPhoto(var_662_string); // 0x135 ObjFunc
	var_663_int = 0; // 0x137 PushV
	func_7360(var_663_int); // 0x138 Call
	SetPlayerName(var_663_int); // 0x13a ObjFunc
	var_656_int = -1; // 0x13c MovI
	IsOverrideActive(var_655_bool); // 0x13d Func
	var_664_bool = var_655_bool; // 0x13f Push
	if(var_664_bool == 0) goto Label_323; // 0x140 JumpB
	var_647_int = -2; // 0x141 MovI
	return 8; // 0x142 Return
	
Label_323:
	DoDialog(var_654_object); // 0x143 Func
	var_665_object = Obj(); var_666_object = Obj(); // 0x145 PushV
	var_665_object = var_648_object; // 0x146 Mov
	var_666_object = var_654_object; // 0x147 Mov
	TaskCall(5); // 0x148 TaskCall
	func_352(var_667_object, var_668_object, var_669_string, var_670_bool, var_665_object, var_666_object); // 0x149 Call
	TaskReturn(); // 0x14a TaskReturn
	IsDialogEnd(var_657_bool); // 0x14c ObjFunc
	
Label_334:
	var_707_bool = var_657_bool == 0; // 0x14e Not
	if(var_707_bool == 0) goto Label_341; // 0x14f JumpB
	sync(); // 0x150 Func
	IsDialogEnd(var_657_bool); // 0x152 ObjFunc
	goto Label_334; // 0x154 Jump
	
Label_341:
	var_708_object = Obj(); // 0x155 PushV
	var_708_object = var_648_object; // 0x156 Mov
	func_6173(); // 0x157 Call
	StopDialog(var_654_object); // 0x159 Func
	GetReturnValue(var_656_int); // 0x15b ObjFunc
	var_647_int = var_656_int; // 0x15d Mov
	return 8; // 0x15e Return
}


func_6439()
{
	var_579_string = "KnowWarehouses"; // 0x1928 PushS
	var_580_int = 1; // 0x1929 PushI
	SetVariable(var_579_string, var_580_int); // 0x192a Func
	return 0; // 0x192c Return
}


func_6445()
{
	var_48_string = "KnowViktor"; // 0x192e PushS
	var_49_int = 1; // 0x192f PushI
	SetVariable(var_48_string, var_49_int); // 0x1930 Func
	return 0; // 0x1932 Return
}


func_6958(var_896_bool)
{
	var_898_int = 0; var_899_string = ""; // 0x1b2f PushV
	var_899_string = "d1q01"; // 0x1b30 MovS
	func_6212(var_898_int, var_899_string); // 0x1b31 Call
	var_900_int = 1; // 0x1b33 PushI
	var_901_bool = var_898_int == var_900_int; // 0x1b34 Eq
	if(var_901_bool == 0) goto Label_6968; // 0x1b35 JumpB
	var_896_bool = 1; // 0x1b36 MovB
	return 0; // 0x1b37 Return
	
Label_6968:
	var_896_bool = 0; // 0x1b38 MovB
	return 0; // 0x1b39 Return
}


func_7473()
{
	var_101_object = Obj(); var_102_object = Obj(); // 0x1d31 PushV
	var_103_string = "Adding diary entry"; // 0x1d32 PushS
	Trace(var_103_string); // 0x1d33 Func
	var_104_int = 112; // 0x1d35 PushI
	var_105_int = 1; // 0x1d36 PushI
	var_106_int = 13735; // 0x1d37 PushI
	CreateDiaryEntry(var_102_object, var_104_int, var_105_int, var_106_int); // 0x1d38 Func
	var_107_bool = 0; var_108_object = Obj(); var_109_int = 0; // 0x1d3a PushV
	var_108_object = var_102_object; // 0x1d3b Mov
	var_109_int = 111; // 0x1d3c MovI
	func_7281(var_107_bool, var_108_object, var_109_int); // 0x1d3d Call
	return 2; // 0x1d3f Return
}


func_6451()
{
	var_50_object = Obj(); var_51_object = Obj(); // 0x1933 PushV
	var_52_object = Obj(); // 0x1934 PushV
	func_7310(var_52_object); // 0x1935 Call
	var_51_object = var_52_object; // 0x1936 Mov
	var_59_string = "d3q02ViktorGotoMladVlad"; // 0x1938 PushS
	var_60_string = "pt_map_maldvlad"; // 0x1939 PushS
	var_61_int = 0; // 0x193a PushI
	var_62_int = 11380; // 0x193b PushI
	var_63_float = 0; // 0x193c PushV
	func_6240(var_63_float); // 0x193d Call
	AddMark(var_59_string, var_60_string, var_61_int, var_62_int, var_63_float); // 0x193f ObjFunc
	var_66_string = "d3q02ViktorGotoMladVladSelf"; // 0x1941 PushS
	var_67_string = "pt_map_viktor"; // 0x1942 PushS
	var_68_int = 0; // 0x1943 PushI
	var_69_int = 15305; // 0x1944 PushI
	var_70_float = 0; // 0x1945 PushV
	func_6240(var_70_float); // 0x1946 Call
	AddMark(var_66_string, var_67_string, var_68_int, var_69_int, var_70_float); // 0x1948 ObjFunc
	func_7409(); // 0x194b Call
	return 2; // 0x194d Return
}


func_6970(var_188_bool)
{
	var_190_int = 0; var_191_string = ""; // 0x1b3b PushV
	var_191_string = "d3q02"; // 0x1b3c MovS
	func_6212(var_190_int, var_191_string); // 0x1b3d Call
	var_194_int = 1; // 0x1b3f PushI
	var_195_bool = var_190_int == var_194_int; // 0x1b40 Eq
	if(var_195_bool == 0) goto Label_6980; // 0x1b41 JumpB
	var_188_bool = 1; // 0x1b42 MovB
	return 0; // 0x1b43 Return
	
Label_6980:
	var_188_bool = 0; // 0x1b44 MovB
	return 0; // 0x1b45 Return
}


func_7489()
{
	var_50_object = Obj(); var_51_object = Obj(); // 0x1d41 PushV
	var_52_string = "Adding diary entry"; // 0x1d42 PushS
	Trace(var_52_string); // 0x1d43 Func
	var_53_int = 182; // 0x1d45 PushI
	var_54_int = 1; // 0x1d46 PushI
	var_55_int = 15445; // 0x1d47 PushI
	CreateDiaryEntry(var_51_object, var_53_int, var_54_int, var_55_int); // 0x1d48 Func
	var_56_bool = 0; var_57_object = Obj(); var_58_int = 0; // 0x1d4a PushV
	var_57_object = var_51_object; // 0x1d4b Mov
	var_58_int = -1; // 0x1d4c MovI
	func_7281(var_56_bool, var_57_object, var_58_int); // 0x1d4d Call
	return 2; // 0x1d4f Return
}


func_5443(var_0_object, var_782_int, var_783_object)
{
	var_785_object = Obj(); var_786_bool = 0; var_787_int = 0; var_788_bool = 0; var_789_object = Obj(); var_790_bool = 0; var_791_int = 0; var_792_bool = 0; // 0x1543 PushV
	var_0_object = var_783_object; // 0x1544 TMov
	var_793_bool = 0; var_794_object = Obj(); // 0x1545 PushV
	var_794_object = var_783_object; // 0x1546 Mov
	func_6117(var_794_object); // 0x1547 Call
	var_795_bool = var_793_bool == 0; // 0x1549 Not
	if(var_795_bool == 0) goto Label_5453; // 0x154a JumpB
	var_782_int = -2; // 0x154b MovI
	return 8; // 0x154c Return
	
Label_5453:
	CreateDialog(var_789_object); // 0x154d Func
	var_796_int = 0; // 0x154f PushV
	func_6269(var_796_int); // 0x1550 Call
	SetNPCName(var_796_int); // 0x1552 ObjFunc
	var_797_string = ""; // 0x1554 PushV
	func_6271(var_797_string); // 0x1555 Call
	SetPhoto(var_797_string); // 0x1557 ObjFunc
	var_798_int = 0; // 0x1559 PushV
	func_7360(var_798_int); // 0x155a Call
	SetPlayerName(var_798_int); // 0x155c ObjFunc
	var_791_int = -1; // 0x155e MovI
	IsOverrideActive(var_790_bool); // 0x155f Func
	var_799_bool = var_790_bool; // 0x1561 Push
	if(var_799_bool == 0) goto Label_5477; // 0x1562 JumpB
	var_782_int = -2; // 0x1563 MovI
	return 8; // 0x1564 Return
	
Label_5477:
	DoDialog(var_789_object); // 0x1565 Func
	var_800_object = Obj(); var_801_object = Obj(); // 0x1567 PushV
	var_800_object = var_783_object; // 0x1568 Mov
	var_801_object = var_789_object; // 0x1569 Mov
	TaskCall(17); // 0x156a TaskCall
	func_5506(var_802_object, var_803_object, var_804_string, var_805_bool, var_800_object, var_801_object); // 0x156b Call
	TaskReturn(); // 0x156c TaskReturn
	IsDialogEnd(var_792_bool); // 0x156e ObjFunc
	
Label_5488:
	var_864_bool = var_792_bool == 0; // 0x1570 Not
	if(var_864_bool == 0) goto Label_5495; // 0x1571 JumpB
	sync(); // 0x1572 Func
	IsDialogEnd(var_792_bool); // 0x1574 ObjFunc
	goto Label_5488; // 0x1576 Jump
	
Label_5495:
	var_865_object = Obj(); // 0x1577 PushV
	var_865_object = var_783_object; // 0x1578 Mov
	func_6173(); // 0x1579 Call
	StopDialog(var_789_object); // 0x157b Func
	GetReturnValue(var_791_int); // 0x157d ObjFunc
	var_782_int = var_791_int; // 0x157f Mov
	return 8; // 0x1580 Return
}


func_6982(var_196_bool)
{
	var_196_bool = 1; // 0x1b47 MovB
	return 0; // 0x1b48 Return
}


func_6987(var_202_bool)
{
	var_204_int = 0; var_205_string = ""; // 0x1b4c PushV
	var_205_string = "d3q02"; // 0x1b4d MovS
	func_6212(var_204_int, var_205_string); // 0x1b4e Call
	var_206_int = 4; // 0x1b50 PushI
	var_207_bool = var_204_int == var_206_int; // 0x1b51 Eq
	if(var_207_bool == 0) goto Label_6997; // 0x1b52 JumpB
	var_202_bool = 1; // 0x1b53 MovB
	return 0; // 0x1b54 Return
	
Label_6997:
	var_202_bool = 0; // 0x1b55 MovB
	return 0; // 0x1b56 Return
}


func_6479()
{
	return 0; // 0x1950 Return
}


func_6481()
{
	var_98_object = Obj(); var_99_string = ""; var_100_float = 0; // 0x1952 PushV
	var_101_object = Obj(); // 0x1953 PushV
	func_7310(var_101_object); // 0x1954 Call
	var_98_object = var_101_object; // 0x1955 Mov
	var_99_string = "pt_map_mladvlad"; // 0x1957 MovS
	var_100_float = 2; // 0x1958 MovI
	func_7327(var_98_object, var_99_string, var_100_float); // 0x1959 Call
	var_121_object = Obj(); // 0x195b PushV
	func_7310(var_121_object); // 0x195c Call
	ShowMap(var_121_object); // 0x195e ObjFunc
	return 0; // 0x1960 Return
}


func_4434(var_0_object, var_1_object, var_2_object, var_3_object, var_554_object, var_555_object)
{
	var_0_object = var_555_object; // 0x1153 TMov
	var_1_object = var_554_object; // 0x1154 TMov
	var_3_object = 0; // 0x1155 TMovB
	var_560_int = 1; // 0x1156 PushI
	if(var_560_int == 0) goto Label_4546; // 0x1157 JumpB
	var_561_bool = 0; // 0x1158 PushV
	var_561_bool = 0; // 0x1159 MovB
	var_562_bool = 0; // 0x115a PushV
	var_562_bool = 0; // 0x115b MovB
	var_563_bool = 0; var_564_object = Obj(); // 0x115c PushV
	var_564_object = var_1_object; // 0x115d MovT
	func_7088(var_564_object); // 0x115e Call
	if(var_563_bool == 0) goto Label_4456; // 0x1160 JumpB
	var_569_bool = 0; var_570_object = Obj(); // 0x1161 PushV
	var_570_object = var_1_object; // 0x1162 MovT
	func_7028(var_570_object); // 0x1163 Call
	var_575_bool = var_569_bool == 0; // 0x1165 Not
	if(var_575_bool == 0) goto Label_4456; // 0x1166 JumpB
	var_562_bool = 1; // 0x1167 MovB
	
Label_4456:
	if(var_562_bool == 0) goto Label_4464; // 0x1168 JumpB
	var_576_bool = 0; var_577_object = Obj(); // 0x1169 PushV
	var_577_object = var_1_object; // 0x116a MovT
	func_7040(var_577_object); // 0x116b Call
	var_582_bool = var_576_bool == 0; // 0x116d Not
	if(var_582_bool == 0) goto Label_4464; // 0x116e JumpB
	var_561_bool = 1; // 0x116f MovB
	
Label_4464:
	if(var_561_bool == 0) goto Label_4491; // 0x1170 JumpB
	var_583_string = ""; // 0x1171 PushV
	var_583_string = "Neutral"; // 0x1172 MovS
	func_4576(var_555_object, var_583_string); // 0x1173 Call
	var_588_int = 12584; // 0x1175 PushI
	SetMessage(var_588_int); // 0x1176 TObjFunc
	ClearReplies(); // 0x1178 TObjFunc
	var_589_int = 11771; // 0x117a PushI
	var_590_int = 12991; // 0x117b PushI
	var_591_int = 12979; // 0x117c PushI
	AddReply(var_589_int, var_590_int, var_591_int); // 0x117d TObjFunc
	var_592_bool = 0; var_593_object = Obj(); // 0x117f PushV
	var_593_object = var_1_object; // 0x1180 MovT
	func_7016(var_593_object); // 0x1181 Call
	var_598_bool = var_592_bool == 0; // 0x1183 Not
	if(var_598_bool == 0) goto Label_4490; // 0x1184 JumpB
	var_599_int = 12585; // 0x1185 PushI
	var_600_int = 13755; // 0x1186 PushI
	var_601_int = 13752; // 0x1187 PushI
	AddReply(var_599_int, var_600_int, var_601_int); // 0x1188 TObjFunc
	
Label_4490:
	goto Label_4546; // 0x118a Jump
	
Label_4546:
	var_602_bool = 0; // 0x11c2 PushV
	func_6273(var_602_bool); // 0x11c3 Call
	if(var_602_bool == 0) goto Label_4561; // 0x11c5 JumpB
	
Label_4550:
	lshWaitForAnimEnd(); // 0x11c6 Func
	var_603_object = var_3_object; // 0x11c8 PushT
	if(var_603_object == 0) goto Label_4555; // 0x11c9 JumpB
	goto Label_4560; // 0x11ca Jump
	
Label_4560:
	goto Label_4575; // 0x11d0 Jump
	
Label_4575:
	return 0; // 0x11df Return
	
Label_4555:
	var_604_string = ""; // 0x11cb PushV
	var_604_string = var_2_object; // 0x11cc MovT
	func_6177(var_604_string); // 0x11cd Call
	goto Label_4550; // 0x11cf Jump
	
Label_4561:
	var_605_string = "all"; // 0x11d1 PushS
	var_606_string = "idle"; // 0x11d2 PushS
	PlayAnimation(var_605_string, var_606_string); // 0x11d3 Func
	
Label_4565:
	WaitForAnimEnd(); // 0x11d5 Func
	var_607_object = var_3_object; // 0x11d7 PushT
	if(var_607_object == 0) goto Label_4570; // 0x11d8 JumpB
	goto Label_4575; // 0x11d9 Jump
	
Label_4570:
	var_608_string = "all"; // 0x11da PushS
	var_609_string = "idle"; // 0x11db PushS
	PlayAnimation(var_608_string, var_609_string); // 0x11dc Func
	goto Label_4565; // 0x11de Jump
	
Label_4491:
	var_610_string = ""; // 0x118b PushV
	var_610_string = "Neutral"; // 0x118c MovS
	func_4576(var_555_object, var_610_string); // 0x118d Call
	var_611_int = 11765; // 0x118f PushI
	SetMessage(var_611_int); // 0x1190 TObjFunc
	ClearReplies(); // 0x1192 TObjFunc
	var_612_bool = 0; // 0x1194 PushV
	var_612_bool = 0; // 0x1195 MovB
	var_613_bool = 0; var_614_object = Obj(); // 0x1196 PushV
	var_614_object = var_1_object; // 0x1197 MovT
	func_7052(var_614_object); // 0x1198 Call
	if(var_613_bool == 0) goto Label_4513; // 0x119a JumpB
	var_619_bool = 0; var_620_object = Obj(); // 0x119b PushV
	var_620_object = var_1_object; // 0x119c MovT
	func_7064(var_620_object); // 0x119d Call
	if(var_619_bool == 0) goto Label_4513; // 0x119f JumpB
	var_612_bool = 1; // 0x11a0 MovB
	
Label_4513:
	if(var_612_bool == 0) goto Label_4519; // 0x11a1 JumpB
	var_625_int = 11767; // 0x11a2 PushI
	var_626_int = 12977; // 0x11a3 PushI
	var_627_int = 12975; // 0x11a4 PushI
	AddReply(var_625_int, var_626_int, var_627_int); // 0x11a5 TObjFunc
	
Label_4519:
	var_628_bool = 0; // 0x11a7 PushV
	var_628_bool = 0; // 0x11a8 MovB
	var_629_bool = 0; var_630_object = Obj(); // 0x11a9 PushV
	var_630_object = var_1_object; // 0x11aa MovT
	func_7028(var_630_object); // 0x11ab Call
	if(var_629_bool == 0) goto Label_4532; // 0x11ad JumpB
	var_631_bool = 0; var_632_object = Obj(); // 0x11ae PushV
	var_632_object = var_1_object; // 0x11af MovT
	func_7076(var_632_object); // 0x11b0 Call
	if(var_631_bool == 0) goto Label_4532; // 0x11b2 JumpB
	var_628_bool = 1; // 0x11b3 MovB
	
Label_4532:
	if(var_628_bool == 0) goto Label_4538; // 0x11b4 JumpB
	var_637_int = 12570; // 0x11b5 PushI
	var_638_int = 13740; // 0x11b6 PushI
	var_639_int = 13739; // 0x11b7 PushI
	AddReply(var_637_int, var_638_int, var_639_int); // 0x11b8 TObjFunc
	
Label_4538:
	var_640_int = 11766; // 0x11ba PushI
	var_641_int = -1; // 0x11bb PushI
	var_642_int = 12974; // 0x11bc PushI
	AddReply(var_640_int, var_641_int, var_642_int); // 0x11bd TObjFunc
	goto Label_4546; // 0x11bf Jump
}


func_7505()
{
	var_75_object = Obj(); var_76_object = Obj(); // 0x1d51 PushV
	var_77_string = "Adding diary entry"; // 0x1d52 PushS
	Trace(var_77_string); // 0x1d53 Func
	var_78_int = 183; // 0x1d55 PushI
	var_79_int = 1; // 0x1d56 PushI
	var_80_int = 15446; // 0x1d57 PushI
	CreateDiaryEntry(var_76_object, var_78_int, var_79_int, var_80_int); // 0x1d58 Func
	var_81_bool = 0; var_82_object = Obj(); var_83_int = 0; // 0x1d5a PushV
	var_82_object = var_76_object; // 0x1d5b Mov
	var_83_int = 182; // 0x1d5c MovI
	func_7281(var_81_bool, var_82_object, var_83_int); // 0x1d5d Call
	return 2; // 0x1d5f Return
}


func_6999(var_208_bool)
{
	var_208_bool = 1; // 0x1b58 MovB
	return 0; // 0x1b59 Return
}


func_7004(var_792_bool)
{
	var_794_int = 0; var_795_string = ""; // 0x1b5d PushV
	var_795_string = "KnowSaburivClan"; // 0x1b5e MovS
	func_6212(var_794_int, var_795_string); // 0x1b5f Call
	var_796_int = 1; // 0x1b61 PushI
	var_797_bool = var_794_int == var_796_int; // 0x1b62 Eq
	if(var_797_bool == 0) goto Label_7014; // 0x1b63 JumpB
	var_792_bool = 1; // 0x1b64 MovB
	return 0; // 0x1b65 Return
	
Label_7014:
	var_792_bool = 0; // 0x1b66 MovB
	return 0; // 0x1b67 Return
}


func_352(var_0_object, var_1_object, var_2_object, var_3_object, var_665_object, var_666_object)
{
	var_0_object = var_666_object; // 0x161 TMov
	var_1_object = var_665_object; // 0x162 TMov
	var_3_object = 0; // 0x163 TMovB
	var_671_int = 1; // 0x164 PushI
	if(var_671_int == 0) goto Label_405; // 0x165 JumpB
	var_672_bool = 0; var_673_object = Obj(); // 0x166 PushV
	var_673_object = var_1_object; // 0x167 MovT
	func_7100(var_673_object); // 0x168 Call
	if(var_672_bool == 0) goto Label_388; // 0x16a JumpB
	var_678_object = Obj(); var_679_object = Obj(); // 0x16b PushV
	var_678_object = var_1_object; // 0x16c MovT
	var_679_object = var_0_object; // 0x16d MovT
	func_6689(); // 0x16e Call
	var_682_string = ""; // 0x170 PushV
	var_682_string = "Neutral"; // 0x171 MovS
	func_435(var_666_object, var_682_string); // 0x172 Call
	var_687_int = 12036; // 0x174 PushI
	SetMessage(var_687_int); // 0x175 TObjFunc
	ClearReplies(); // 0x177 TObjFunc
	var_688_int = 12037; // 0x179 PushI
	var_689_int = 13256; // 0x17a PushI
	var_690_int = 13255; // 0x17b PushI
	AddReply(var_688_int, var_689_int, var_690_int); // 0x17c TObjFunc
	var_691_int = 12640; // 0x17e PushI
	var_692_int = 13821; // 0x17f PushI
	var_693_int = 13820; // 0x180 PushI
	AddReply(var_691_int, var_692_int, var_693_int); // 0x181 TObjFunc
	goto Label_405; // 0x183 Jump
	
Label_405:
	var_694_bool = 0; // 0x195 PushV
	func_6273(var_694_bool); // 0x196 Call
	if(var_694_bool == 0) goto Label_420; // 0x198 JumpB
	
Label_409:
	lshWaitForAnimEnd(); // 0x199 Func
	var_695_object = var_3_object; // 0x19b PushT
	if(var_695_object == 0) goto Label_414; // 0x19c JumpB
	goto Label_419; // 0x19d Jump
	
Label_419:
	goto Label_434; // 0x1a3 Jump
	
Label_434:
	return 0; // 0x1b2 Return
	
Label_414:
	var_696_string = ""; // 0x19e PushV
	var_696_string = var_2_object; // 0x19f MovT
	func_6177(var_696_string); // 0x1a0 Call
	goto Label_409; // 0x1a2 Jump
	
Label_420:
	var_697_string = "all"; // 0x1a4 PushS
	var_698_string = "idle"; // 0x1a5 PushS
	PlayAnimation(var_697_string, var_698_string); // 0x1a6 Func
	
Label_424:
	WaitForAnimEnd(); // 0x1a8 Func
	var_699_object = var_3_object; // 0x1aa PushT
	if(var_699_object == 0) goto Label_429; // 0x1ab JumpB
	goto Label_434; // 0x1ac Jump
	
Label_429:
	var_700_string = "all"; // 0x1ad PushS
	var_701_string = "idle"; // 0x1ae PushS
	PlayAnimation(var_700_string, var_701_string); // 0x1af Func
	goto Label_424; // 0x1b1 Jump
	
Label_388:
	var_702_string = ""; // 0x184 PushV
	var_702_string = "Neutral"; // 0x185 MovS
	func_435(var_666_object, var_702_string); // 0x186 Call
	var_703_int = 13016; // 0x188 PushI
	SetMessage(var_703_int); // 0x189 TObjFunc
	ClearReplies(); // 0x18b TObjFunc
	var_704_int = 13017; // 0x18d PushI
	var_705_int = -1; // 0x18e PushI
	var_706_int = 14223; // 0x18f PushI
	AddReply(var_704_int, var_705_int, var_706_int); // 0x190 TObjFunc
	goto Label_405; // 0x192 Jump
}


func_7521()
{
	var_40_bool = GlobalVars[1]; // 0x1d61 PushGE
	var_40_bool = 0; // 0x1d62 MovB
	GlobalVars[1] = var_40_bool; // 0x1d63 PopGE
	return 0; // 0x1d64 Return
}


func_6497()
{
	return 0; // 0x1962 Return
}


func_6499()
{
	var_144_string = "d3q02"; // 0x1964 PushS
	var_145_int = 5; // 0x1965 PushI
	SetVariable(var_144_string, var_145_int); // 0x1966 Func
	return 0; // 0x1968 Return
}


func_7525(var_41_object)
{
	var_42_bool = GlobalVars[1]; // 0x1d66 PushGE
	var_43_bool = var_42_bool == 0; // 0x1d67 Not
	if(var_43_bool == 0) goto Label_7538; // 0x1d68 JumpB
	var_44_int = 0; var_45_object = Obj(); // 0x1d69 PushV
	var_45_object = var_41_object; // 0x1d6a Mov
	TaskCall(2); // 0x1d6b TaskCall
	func_49(var_46_object, var_44_int, var_45_object); // 0x1d6c Call
	TaskReturn(); // 0x1d6d TaskReturn
	var_150_bool = GlobalVars[1]; // 0x1d6f PushGE
	var_150_bool = 1; // 0x1d70 MovB
	GlobalVars[1] = var_150_bool; // 0x1d71 PopGE
	
Label_7538:
	var_151_bool = 0; var_152_int = 0; // 0x1d72 PushV
	var_152_int = 1; // 0x1d73 MovI
	func_6254(var_151_bool, var_152_int); // 0x1d74 Call
	if(var_151_bool == 0) goto Label_7550; // 0x1d76 JumpB
	var_159_int = 0; var_160_object = Obj(); // 0x1d77 PushV
	var_160_object = var_41_object; // 0x1d78 Mov
	TaskCall(6); // 0x1d79 TaskCall
	func_652(var_161_object, var_159_int, var_160_object); // 0x1d7a Call
	TaskReturn(); // 0x1d7b TaskReturn
	return 0; // 0x1d7d Return
	
Label_7550:
	var_392_bool = 0; var_393_int = 0; // 0x1d7e PushV
	var_393_int = 2; // 0x1d7f MovI
	func_6254(var_392_bool, var_393_int); // 0x1d80 Call
	if(var_392_bool == 0) goto Label_7562; // 0x1d82 JumpB
	var_394_int = 0; var_395_object = Obj(); // 0x1d83 PushV
	var_395_object = var_41_object; // 0x1d84 Mov
	TaskCall(8); // 0x1d85 TaskCall
	func_3046(var_396_object, var_394_int, var_395_object); // 0x1d86 Call
	TaskReturn(); // 0x1d87 TaskReturn
	return 0; // 0x1d89 Return
	
Label_7562:
	var_461_bool = 0; var_462_int = 0; // 0x1d8a PushV
	var_462_int = 3; // 0x1d8b MovI
	func_6254(var_461_bool, var_462_int); // 0x1d8c Call
	if(var_461_bool == 0) goto Label_7574; // 0x1d8e JumpB
	var_463_int = 0; var_464_object = Obj(); // 0x1d8f PushV
	var_464_object = var_41_object; // 0x1d90 Mov
	TaskCall(10); // 0x1d91 TaskCall
	func_3493(var_465_object, var_463_int, var_464_object); // 0x1d92 Call
	TaskReturn(); // 0x1d93 TaskReturn
	return 0; // 0x1d95 Return
	
Label_7574:
	var_534_bool = 0; var_535_int = 0; // 0x1d96 PushV
	var_535_int = 5; // 0x1d97 MovI
	func_6254(var_534_bool, var_535_int); // 0x1d98 Call
	if(var_534_bool == 0) goto Label_7586; // 0x1d9a JumpB
	var_536_int = 0; var_537_object = Obj(); // 0x1d9b PushV
	var_537_object = var_41_object; // 0x1d9c Mov
	TaskCall(12); // 0x1d9d TaskCall
	func_4371(var_538_object, var_536_int, var_537_object); // 0x1d9e Call
	TaskReturn(); // 0x1d9f TaskReturn
	return 0; // 0x1da1 Return
	
Label_7586:
	var_645_bool = 0; var_646_int = 0; // 0x1da2 PushV
	var_646_int = 6; // 0x1da3 MovI
	func_6254(var_645_bool, var_646_int); // 0x1da4 Call
	if(var_645_bool == 0) goto Label_7598; // 0x1da6 JumpB
	var_647_int = 0; var_648_object = Obj(); // 0x1da7 PushV
	var_648_object = var_41_object; // 0x1da8 Mov
	TaskCall(4); // 0x1da9 TaskCall
	func_289(var_649_object, var_647_int, var_648_object); // 0x1daa Call
	TaskReturn(); // 0x1dab TaskReturn
	return 0; // 0x1dad Return
	
Label_7598:
	var_709_bool = 0; var_710_int = 0; // 0x1dae PushV
	var_710_int = 8; // 0x1daf MovI
	func_6254(var_709_bool, var_710_int); // 0x1db0 Call
	if(var_709_bool == 0) goto Label_7610; // 0x1db2 JumpB
	var_711_int = 0; var_712_object = Obj(); // 0x1db3 PushV
	var_712_object = var_41_object; // 0x1db4 Mov
	TaskCall(14); // 0x1db5 TaskCall
	func_5065(var_713_object, var_711_int, var_712_object); // 0x1db6 Call
	TaskReturn(); // 0x1db7 TaskReturn
	return 0; // 0x1db9 Return
	
Label_7610:
	var_780_bool = 0; var_781_int = 0; // 0x1dba PushV
	var_781_int = 9; // 0x1dbb MovI
	func_6254(var_780_bool, var_781_int); // 0x1dbc Call
	if(var_780_bool == 0) goto Label_7622; // 0x1dbe JumpB
	var_782_int = 0; var_783_object = Obj(); // 0x1dbf PushV
	var_783_object = var_41_object; // 0x1dc0 Mov
	TaskCall(16); // 0x1dc1 TaskCall
	func_5443(var_784_object, var_782_int, var_783_object); // 0x1dc2 Call
	TaskReturn(); // 0x1dc3 TaskReturn
	return 0; // 0x1dc5 Return
	
Label_7622:
	var_866_bool = 0; // 0x1dc6 PushV
	func_6260(var_866_bool); // 0x1dc7 Call
	return 0; // 0x1dc9 Return
}


func_7016(var_210_bool)
{
	var_212_int = 0; var_213_string = ""; // 0x1b69 PushV
	var_213_string = "d5q03"; // 0x1b6a MovS
	func_6212(var_212_int, var_213_string); // 0x1b6b Call
	var_214_int = 0; // 0x1b6d PushI
	var_215_bool = var_212_int == var_214_int; // 0x1b6e Eq
	if(var_215_bool == 0) goto Label_7026; // 0x1b6f JumpB
	var_210_bool = 1; // 0x1b70 MovB
	return 0; // 0x1b71 Return
	
Label_7026:
	var_210_bool = 0; // 0x1b72 MovB
	return 0; // 0x1b73 Return
}


func_6505()
{
	func_7377(); // 0x196b Call
	return 0; // 0x196d Return
}


func_6510()
{
	var_48_object = Obj(); var_49_object = Obj(); // 0x196e PushV
	var_50_int = 0; var_51_string = ""; // 0x196f PushV
	var_51_string = "d5q03"; // 0x1970 MovS
	func_6212(var_50_int, var_51_string); // 0x1971 Call
	var_54_int = 0; // 0x1973 PushI
	var_55_bool = var_50_int == var_54_int; // 0x1974 Eq
	if(var_55_bool == 0) goto Label_6557; // 0x1975 JumpB
	var_56_string = "d5q03"; // 0x1976 PushS
	var_57_int = 1; // 0x1977 PushI
	SetVariable(var_56_string, var_57_int); // 0x1978 Func
	var_58_object = Obj(); // 0x197a PushV
	func_7310(var_58_object); // 0x197b Call
	var_49_object = var_58_object; // 0x197c Mov
	var_65_string = "d5q03ViktorSavePrisonersSelf"; // 0x197e PushS
	var_66_string = "pt_map_viktor"; // 0x197f PushS
	var_67_int = 0; // 0x1980 PushI
	var_68_int = 15371; // 0x1981 PushI
	var_69_float = 0; // 0x1982 PushV
	func_6240(var_69_float); // 0x1983 Call
	AddMark(var_65_string, var_66_string, var_67_int, var_68_int, var_69_float); // 0x1985 ObjFunc
	var_72_string = "d5q03SavePrisoners"; // 0x1987 PushS
	var_73_string = "pt_map_uprava_prison"; // 0x1988 PushS
	var_74_int = 0; // 0x1989 PushI
	var_75_int = 15370; // 0x198a PushI
	var_76_float = 0; // 0x198b PushV
	func_6240(var_76_float); // 0x198c Call
	AddMark(var_72_string, var_73_string, var_74_int, var_75_int, var_76_float); // 0x198e ObjFunc
	func_7425(); // 0x1991 Call
	var_102_object = Obj(); var_103_string = ""; // 0x1993 PushV
	var_103_string = "quest_d5_03"; // 0x1994 MovS
	func_6217(var_102_object, var_103_string); // 0x1995 Call
	var_110_bool = 0; var_111_string = ""; var_112_string = ""; // 0x1997 PushV
	var_111_string = "quest_d5_03"; // 0x1998 MovS
	var_112_string = "place_prisoners"; // 0x1999 MovS
	func_6228(var_110_bool, var_111_string, var_112_string); // 0x199a Call
	var_49_object = 0; // 0x199c SetNull
	
Label_6557:
	return 2; // 0x199d Return
}


func_7028(var_177_bool)
{
	var_179_int = 0; var_180_string = ""; // 0x1b75 PushV
	var_180_string = "d5q03"; // 0x1b76 MovS
	func_6212(var_179_int, var_180_string); // 0x1b77 Call
	var_181_int = 1000; // 0x1b79 PushI
	var_182_bool = var_179_int == var_181_int; // 0x1b7a Eq
	if(var_182_bool == 0) goto Label_7038; // 0x1b7b JumpB
	var_177_bool = 1; // 0x1b7c MovB
	return 0; // 0x1b7d Return
	
Label_7038:
	var_177_bool = 0; // 0x1b7e MovB
	return 0; // 0x1b7f Return
}


func_7040(var_184_bool)
{
	var_186_int = 0; var_187_string = ""; // 0x1b81 PushV
	var_187_string = "d5q03"; // 0x1b82 MovS
	func_6212(var_186_int, var_187_string); // 0x1b83 Call
	var_188_int = -1; // 0x1b85 PushI
	var_189_bool = var_186_int == var_188_int; // 0x1b86 Eq
	if(var_189_bool == 0) goto Label_7050; // 0x1b87 JumpB
	var_184_bool = 1; // 0x1b88 MovB
	return 0; // 0x1b89 Return
	
Label_7050:
	var_184_bool = 0; // 0x1b8a MovB
	return 0; // 0x1b8b Return
}


func_5506(var_0_object, var_1_object, var_2_object, var_3_object, var_800_object, var_801_object)
{
	var_0_object = var_801_object; // 0x1583 TMov
	var_1_object = var_800_object; // 0x1584 TMov
	var_3_object = 0; // 0x1585 TMovB
	var_806_int = 1; // 0x1586 PushI
	if(var_806_int == 0) goto Label_5583; // 0x1587 JumpB
	var_807_bool = 0; var_808_object = Obj(); // 0x1588 PushV
	var_808_object = var_1_object; // 0x1589 MovT
	func_7160(var_808_object); // 0x158a Call
	if(var_807_bool == 0) goto Label_5537; // 0x158c JumpB
	var_813_object = Obj(); var_814_object = Obj(); // 0x158d PushV
	var_813_object = var_1_object; // 0x158e MovT
	var_814_object = var_0_object; // 0x158f MovT
	func_6654(); // 0x1590 Call
	var_817_string = ""; // 0x1592 PushV
	var_817_string = "Neutral"; // 0x1593 MovS
	func_5613(var_801_object, var_817_string); // 0x1594 Call
	var_822_int = 13994; // 0x1596 PushI
	SetMessage(var_822_int); // 0x1597 TObjFunc
	ClearReplies(); // 0x1599 TObjFunc
	var_823_int = 13995; // 0x159b PushI
	var_824_int = 15231; // 0x159c PushI
	var_825_int = 15230; // 0x159d PushI
	AddReply(var_823_int, var_824_int, var_825_int); // 0x159e TObjFunc
	goto Label_5583; // 0x15a0 Jump
	
Label_5583:
	var_826_bool = 0; // 0x15cf PushV
	func_6273(var_826_bool); // 0x15d0 Call
	if(var_826_bool == 0) goto Label_5598; // 0x15d2 JumpB
	
Label_5587:
	lshWaitForAnimEnd(); // 0x15d3 Func
	var_827_object = var_3_object; // 0x15d5 PushT
	if(var_827_object == 0) goto Label_5592; // 0x15d6 JumpB
	goto Label_5597; // 0x15d7 Jump
	
Label_5597:
	goto Label_5612; // 0x15dd Jump
	
Label_5612:
	return 0; // 0x15ec Return
	
Label_5592:
	var_828_string = ""; // 0x15d8 PushV
	var_828_string = var_2_object; // 0x15d9 MovT
	func_6177(var_828_string); // 0x15da Call
	goto Label_5587; // 0x15dc Jump
	
Label_5598:
	var_829_string = "all"; // 0x15de PushS
	var_830_string = "idle"; // 0x15df PushS
	PlayAnimation(var_829_string, var_830_string); // 0x15e0 Func
	
Label_5602:
	WaitForAnimEnd(); // 0x15e2 Func
	var_831_object = var_3_object; // 0x15e4 PushT
	if(var_831_object == 0) goto Label_5607; // 0x15e5 JumpB
	goto Label_5612; // 0x15e6 Jump
	
Label_5607:
	var_832_string = "all"; // 0x15e7 PushS
	var_833_string = "idle"; // 0x15e8 PushS
	PlayAnimation(var_832_string, var_833_string); // 0x15e9 Func
	goto Label_5602; // 0x15eb Jump
	
Label_5537:
	var_834_string = ""; // 0x15a1 PushV
	var_834_string = "Neutral"; // 0x15a2 MovS
	func_5613(var_801_object, var_834_string); // 0x15a3 Call
	var_835_int = 14011; // 0x15a5 PushI
	SetMessage(var_835_int); // 0x15a6 TObjFunc
	ClearReplies(); // 0x15a8 TObjFunc
	var_836_bool = 0; var_837_object = Obj(); // 0x15aa PushV
	var_837_object = var_1_object; // 0x15ab MovT
	func_7232(var_837_object); // 0x15ac Call
	if(var_836_bool == 0) goto Label_5556; // 0x15ae JumpB
	var_842_int = 14012; // 0x15af PushI
	var_843_int = 15248; // 0x15b0 PushI
	var_844_int = 15247; // 0x15b1 PushI
	AddReply(var_842_int, var_843_int, var_844_int); // 0x15b2 TObjFunc
	
Label_5556:
	var_845_bool = 0; // 0x15b4 PushV
	var_845_bool = 0; // 0x15b5 MovB
	var_846_bool = 0; var_847_object = Obj(); // 0x15b6 PushV
	var_847_object = var_1_object; // 0x15b7 MovT
	func_7184(var_847_object); // 0x15b8 Call
	if(var_846_bool == 0) goto Label_5569; // 0x15ba JumpB
	var_852_bool = 0; var_853_object = Obj(); // 0x15bb PushV
	var_853_object = var_1_object; // 0x15bc MovT
	func_7196(var_853_object); // 0x15bd Call
	if(var_852_bool == 0) goto Label_5569; // 0x15bf JumpB
	var_845_bool = 1; // 0x15c0 MovB
	
Label_5569:
	if(var_845_bool == 0) goto Label_5575; // 0x15c1 JumpB
	var_858_int = 14029; // 0x15c2 PushI
	var_859_int = 15265; // 0x15c3 PushI
	var_860_int = 15264; // 0x15c4 PushI
	AddReply(var_858_int, var_859_int, var_860_int); // 0x15c5 TObjFunc
	
Label_5575:
	var_861_int = 14039; // 0x15c7 PushI
	var_862_int = -1; // 0x15c8 PushI
	var_863_int = 15274; // 0x15c9 PushI
	AddReply(var_861_int, var_862_int, var_863_int); // 0x15ca TObjFunc
	goto Label_5583; // 0x15cc Jump
}


func_7052(var_223_bool)
{
	var_225_int = 0; var_226_string = ""; // 0x1b8d PushV
	var_226_string = "d5q03"; // 0x1b8e MovS
	func_6212(var_225_int, var_226_string); // 0x1b8f Call
	var_227_int = 2; // 0x1b91 PushI
	var_228_bool = var_225_int == var_227_int; // 0x1b92 Eq
	if(var_228_bool == 0) goto Label_7062; // 0x1b93 JumpB
	var_223_bool = 1; // 0x1b94 MovB
	return 0; // 0x1b95 Return
	
Label_7062:
	var_223_bool = 0; // 0x1b96 MovB
	return 0; // 0x1b97 Return
}


func_7064(var_229_bool)
{
	var_231_int = 0; var_232_string = ""; // 0x1b99 PushV
	var_232_string = "ood5Viktor1"; // 0x1b9a MovS
	func_6212(var_231_int, var_232_string); // 0x1b9b Call
	var_233_int = 0; // 0x1b9d PushI
	var_234_bool = var_231_int == var_233_int; // 0x1b9e Eq
	if(var_234_bool == 0) goto Label_7074; // 0x1b9f JumpB
	var_229_bool = 1; // 0x1ba0 MovB
	return 0; // 0x1ba1 Return
	
Label_7074:
	var_229_bool = 0; // 0x1ba2 MovB
	return 0; // 0x1ba3 Return
}


func_6558()
{
	var_134_string = "ood5Viktor1"; // 0x199f PushS
	var_135_int = 1; // 0x19a0 PushI
	SetVariable(var_134_string, var_135_int); // 0x19a1 Func
	return 0; // 0x19a3 Return
}


func_7076(var_241_bool)
{
	var_243_int = 0; var_244_string = ""; // 0x1ba5 PushV
	var_244_string = "ood5Viktor2"; // 0x1ba6 MovS
	func_6212(var_243_int, var_244_string); // 0x1ba7 Call
	var_245_int = 0; // 0x1ba9 PushI
	var_246_bool = var_243_int == var_245_int; // 0x1baa Eq
	if(var_246_bool == 0) goto Label_7086; // 0x1bab JumpB
	var_241_bool = 1; // 0x1bac MovB
	return 0; // 0x1bad Return
	
Label_7086:
	var_241_bool = 0; // 0x1bae MovB
	return 0; // 0x1baf Return
}


func_6564(var_136_object)
{
	var_138_string = "money30000 is given"; // 0x19a5 PushS
	Trace(var_138_string); // 0x19a6 Func
	var_139_object = Obj(); var_140_string = ""; var_141_int = 0; // 0x19a8 PushV
	var_139_object = var_136_object; // 0x19a9 Mov
	var_140_string = "money"; // 0x19aa MovS
	var_141_int = 30000; // 0x19ab MovI
	func_6093(var_140_string, var_141_int); // 0x19ac Call
	return 0; // 0x19ae Return
}


func_3493(var_0_object, var_463_int, var_464_object)
{
	var_466_object = Obj(); var_467_bool = 0; var_468_int = 0; var_469_bool = 0; var_470_object = Obj(); var_471_bool = 0; var_472_int = 0; var_473_bool = 0; // 0xda5 PushV
	var_0_object = var_464_object; // 0xda6 TMov
	var_474_bool = 0; var_475_object = Obj(); // 0xda7 PushV
	var_475_object = var_464_object; // 0xda8 Mov
	func_6117(var_475_object); // 0xda9 Call
	var_476_bool = var_474_bool == 0; // 0xdab Not
	if(var_476_bool == 0) goto Label_3503; // 0xdac JumpB
	var_463_int = -2; // 0xdad MovI
	return 8; // 0xdae Return
	
Label_3503:
	CreateDialog(var_470_object); // 0xdaf Func
	var_477_int = 0; // 0xdb1 PushV
	func_6269(var_477_int); // 0xdb2 Call
	SetNPCName(var_477_int); // 0xdb4 ObjFunc
	var_478_string = ""; // 0xdb6 PushV
	func_6271(var_478_string); // 0xdb7 Call
	SetPhoto(var_478_string); // 0xdb9 ObjFunc
	var_479_int = 0; // 0xdbb PushV
	func_7360(var_479_int); // 0xdbc Call
	SetPlayerName(var_479_int); // 0xdbe ObjFunc
	var_472_int = -1; // 0xdc0 MovI
	IsOverrideActive(var_471_bool); // 0xdc1 Func
	var_480_bool = var_471_bool; // 0xdc3 Push
	if(var_480_bool == 0) goto Label_3527; // 0xdc4 JumpB
	var_463_int = -2; // 0xdc5 MovI
	return 8; // 0xdc6 Return
	
Label_3527:
	DoDialog(var_470_object); // 0xdc7 Func
	var_481_object = Obj(); var_482_object = Obj(); // 0xdc9 PushV
	var_481_object = var_464_object; // 0xdca Mov
	var_482_object = var_470_object; // 0xdcb Mov
	TaskCall(11); // 0xdcc TaskCall
	func_3556(var_483_object, var_484_object, var_485_string, var_486_bool, var_481_object, var_482_object); // 0xdcd Call
	TaskReturn(); // 0xdce TaskReturn
	IsDialogEnd(var_473_bool); // 0xdd0 ObjFunc
	
Label_3538:
	var_532_bool = var_473_bool == 0; // 0xdd2 Not
	if(var_532_bool == 0) goto Label_3545; // 0xdd3 JumpB
	sync(); // 0xdd4 Func
	IsDialogEnd(var_473_bool); // 0xdd6 ObjFunc
	goto Label_3538; // 0xdd8 Jump
	
Label_3545:
	var_533_object = Obj(); // 0xdd9 PushV
	var_533_object = var_464_object; // 0xdda Mov
	func_6173(); // 0xddb Call
	StopDialog(var_470_object); // 0xddd Func
	GetReturnValue(var_472_int); // 0xddf ObjFunc
	var_463_int = var_472_int; // 0xde1 Mov
	return 8; // 0xde2 Return
}


func_6575()
{
	var_161_string = "ood5Viktor2"; // 0x19b0 PushS
	var_162_int = 1; // 0x19b1 PushI
	SetVariable(var_161_string, var_162_int); // 0x19b2 Func
	return 0; // 0x19b4 Return
}


func_7088(var_171_bool)
{
	var_173_int = 0; var_174_string = ""; // 0x1bb1 PushV
	var_174_string = "ood5Viktor3"; // 0x1bb2 MovS
	func_6212(var_173_int, var_174_string); // 0x1bb3 Call
	var_175_int = 0; // 0x1bb5 PushI
	var_176_bool = var_173_int == var_175_int; // 0x1bb6 Eq
	if(var_176_bool == 0) goto Label_7098; // 0x1bb7 JumpB
	var_171_bool = 1; // 0x1bb8 MovB
	return 0; // 0x1bb9 Return
	
Label_7098:
	var_171_bool = 0; // 0x1bba MovB
	return 0; // 0x1bbb Return
}


func_435(var_2_object, var_143_string)
{
	var_144_bool = 0; // 0x1b4 PushV
	func_6273(var_144_bool); // 0x1b5 Call
	var_145_bool = var_144_bool == 0; // 0x1b7 Not
	if(var_145_bool == 0) goto Label_442; // 0x1b8 JumpB
	return 0; // 0x1b9 Return
	
Label_442:
	var_146_bool = var_143_string == var_2_object; // 0x1ba Eq
	if(var_146_bool == 0) goto Label_445; // 0x1bb JumpB
	return 0; // 0x1bc Return
	
Label_445:
	var_147_string = ""; // 0x1bd PushV
	var_147_string = var_143_string; // 0x1be Mov
	func_6177(var_147_string); // 0x1bf Call
	var_2_object = var_143_string; // 0x1c1 TMov
	return 0; // 0x1c2 Return
}


func_6581()
{
	return 0; // 0x19b6 Return
}


func_6583()
{
	var_118_string = "ood5Viktor3"; // 0x19b8 PushS
	var_119_int = 1; // 0x19b9 PushI
	SetVariable(var_118_string, var_119_int); // 0x19ba Func
	return 0; // 0x19bc Return
}


func_7100(var_131_bool)
{
	var_133_int = 0; var_134_string = ""; // 0x1bbd PushV
	var_134_string = "ood6Viktor1"; // 0x1bbe MovS
	func_6212(var_133_int, var_134_string); // 0x1bbf Call
	var_137_int = 0; // 0x1bc1 PushI
	var_138_bool = var_133_int == var_137_int; // 0x1bc2 Eq
	if(var_138_bool == 0) goto Label_7110; // 0x1bc3 JumpB
	var_131_bool = 1; // 0x1bc4 MovB
	return 0; // 0x1bc5 Return
	
Label_7110:
	var_131_bool = 0; // 0x1bc6 MovB
	return 0; // 0x1bc7 Return
}


func_6589()
{
	var_121_string = "ood6Viktor1"; // 0x19be PushS
	var_122_int = 1; // 0x19bf PushI
	SetVariable(var_121_string, var_122_int); // 0x19c0 Func
	return 0; // 0x19c2 Return
}


func_6595()
{
	var_48_object = Obj(); var_49_object = Obj(); // 0x19c3 PushV
	var_50_string = "d6q01"; // 0x19c4 PushS
	var_51_int = 1; // 0x19c5 PushI
	SetVariable(var_50_string, var_51_int); // 0x19c6 Func
	var_52_object = Obj(); // 0x19c8 PushV
	func_7310(var_52_object); // 0x19c9 Call
	var_49_object = var_52_object; // 0x19ca Mov
	var_59_string = "d6q01ViktorGotoAlexandr"; // 0x19cc PushS
	var_60_string = "pt_map_alexandr"; // 0x19cd PushS
	var_61_int = 1; // 0x19ce PushI
	var_62_int = 15383; // 0x19cf PushI
	var_63_float = 0; // 0x19d0 PushV
	func_6240(var_63_float); // 0x19d1 Call
	AddMark(var_59_string, var_60_string, var_61_int, var_62_int, var_63_float); // 0x19d3 ObjFunc
	var_66_string = "d6q01ViktorGotoBigVlad"; // 0x19d5 PushS
	var_67_string = "pt_map_bigvlad"; // 0x19d6 PushS
	var_68_int = 1; // 0x19d7 PushI
	var_69_int = 15384; // 0x19d8 PushI
	var_70_float = 0; // 0x19d9 PushV
	func_6240(var_70_float); // 0x19da Call
	AddMark(var_66_string, var_67_string, var_68_int, var_69_int, var_70_float); // 0x19dc ObjFunc
	var_71_string = "d6q01ViktorGotoAlxBigSelf"; // 0x19de PushS
	var_72_string = "pt_map_viktor"; // 0x19df PushS
	var_73_int = 1; // 0x19e0 PushI
	var_74_int = 15385; // 0x19e1 PushI
	var_75_float = 0; // 0x19e2 PushV
	func_6240(var_75_float); // 0x19e3 Call
	AddMark(var_71_string, var_72_string, var_73_int, var_74_int, var_75_float); // 0x19e5 ObjFunc
	func_7441(); // 0x19e8 Call
	func_7473(); // 0x19eb Call
	func_7457(); // 0x19ee Call
	return 2; // 0x19f0 Return
}


func_7112(var_412_bool)
{
	var_414_int = 0; var_415_string = ""; // 0x1bc9 PushV
	var_415_string = "KnowAlexandr"; // 0x1bca MovS
	func_6212(var_414_int, var_415_string); // 0x1bcb Call
	var_416_int = 1; // 0x1bcd PushI
	var_417_bool = var_414_int == var_416_int; // 0x1bce Eq
	if(var_417_bool == 0) goto Label_7122; // 0x1bcf JumpB
	var_412_bool = 1; // 0x1bd0 MovB
	return 0; // 0x1bd1 Return
	
Label_7122:
	var_412_bool = 0; // 0x1bd2 MovB
	return 0; // 0x1bd3 Return
}


func_5065(var_0_object, var_711_int, var_712_object)
{
	var_714_object = Obj(); var_715_bool = 0; var_716_int = 0; var_717_bool = 0; var_718_object = Obj(); var_719_bool = 0; var_720_int = 0; var_721_bool = 0; // 0x13c9 PushV
	var_0_object = var_712_object; // 0x13ca TMov
	var_722_bool = 0; var_723_object = Obj(); // 0x13cb PushV
	var_723_object = var_712_object; // 0x13cc Mov
	func_6117(var_723_object); // 0x13cd Call
	var_724_bool = var_722_bool == 0; // 0x13cf Not
	if(var_724_bool == 0) goto Label_5075; // 0x13d0 JumpB
	var_711_int = -2; // 0x13d1 MovI
	return 8; // 0x13d2 Return
	
Label_5075:
	CreateDialog(var_718_object); // 0x13d3 Func
	var_725_int = 0; // 0x13d5 PushV
	func_6269(var_725_int); // 0x13d6 Call
	SetNPCName(var_725_int); // 0x13d8 ObjFunc
	var_726_string = ""; // 0x13da PushV
	func_6271(var_726_string); // 0x13db Call
	SetPhoto(var_726_string); // 0x13dd ObjFunc
	var_727_int = 0; // 0x13df PushV
	func_7360(var_727_int); // 0x13e0 Call
	SetPlayerName(var_727_int); // 0x13e2 ObjFunc
	var_720_int = -1; // 0x13e4 MovI
	IsOverrideActive(var_719_bool); // 0x13e5 Func
	var_728_bool = var_719_bool; // 0x13e7 Push
	if(var_728_bool == 0) goto Label_5099; // 0x13e8 JumpB
	var_711_int = -2; // 0x13e9 MovI
	return 8; // 0x13ea Return
	
Label_5099:
	DoDialog(var_718_object); // 0x13eb Func
	var_729_object = Obj(); var_730_object = Obj(); // 0x13ed PushV
	var_729_object = var_712_object; // 0x13ee Mov
	var_730_object = var_718_object; // 0x13ef Mov
	TaskCall(15); // 0x13f0 TaskCall
	func_5128(var_731_object, var_732_object, var_733_string, var_734_bool, var_729_object, var_730_object); // 0x13f1 Call
	TaskReturn(); // 0x13f2 TaskReturn
	IsDialogEnd(var_721_bool); // 0x13f4 ObjFunc
	
Label_5110:
	var_778_bool = var_721_bool == 0; // 0x13f6 Not
	if(var_778_bool == 0) goto Label_5117; // 0x13f7 JumpB
	sync(); // 0x13f8 Func
	IsDialogEnd(var_721_bool); // 0x13fa ObjFunc
	goto Label_5110; // 0x13fc Jump
	
Label_5117:
	var_779_object = Obj(); // 0x13fd PushV
	var_779_object = var_712_object; // 0x13fe Mov
	func_6173(); // 0x13ff Call
	StopDialog(var_718_object); // 0x1401 Func
	GetReturnValue(var_720_int); // 0x1403 ObjFunc
	var_711_int = var_720_int; // 0x1405 Mov
	return 8; // 0x1406 Return
}


func_6093(var_140_string, var_141_int)
{
	var_142_int = 0; var_143_int = 0; // 0x17cd PushV
	GetProperty(var_140_string, var_143_int); // 0x17ce ObjFunc
	var_144_int = var_143_int + var_141_int; // 0x17d0 Add
	SetProperty(var_140_string, var_144_int); // 0x17d1 ObjFunc
	return 2; // 0x17d3 Return
}


func_6100(var_41_bool)
{
	var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0; var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_bool = 0; // 0x17d4 PushV
	GetPosition(var_47_cvector); // 0x17d5 ObjFunc
	GetPosition(var_48_cvector); // 0x17d7 Func
	var_49_cvector = var_47_cvector - var_48_cvector; // 0x17d9 Sub2
	var_51_float = GetByIndex(var_49_cvector, 0); // 0x17da PushE
	var_52_float = GetByIndex(var_49_cvector, 2); // 0x17db PushE
	Rotate(var_51_float, var_52_float, var_50_bool); // 0x17dc Func
	var_41_bool = var_50_bool; // 0x17de Mov
	return 8; // 0x17df Return
}


func_7124(var_428_bool)
{
	var_430_int = 0; var_431_string = ""; // 0x1bd5 PushV
	var_431_string = "KnowBigVlad"; // 0x1bd6 MovS
	func_6212(var_430_int, var_431_string); // 0x1bd7 Call
	var_432_int = 1; // 0x1bd9 PushI
	var_433_bool = var_430_int == var_432_int; // 0x1bda Eq
	if(var_433_bool == 0) goto Label_7134; // 0x1bdb JumpB
	var_428_bool = 1; // 0x1bdc MovB
	return 0; // 0x1bdd Return
	
Label_7134:
	var_428_bool = 0; // 0x1bde MovB
	return 0; // 0x1bdf Return
}


func_6112(var_41_bool)
{
	var_42_bool = 0; var_43_bool = 0; // 0x17e0 PushV
	IsLoaded(var_43_bool); // 0x17e1 Func
	var_41_bool = var_43_bool; // 0x17e3 Mov
	return 2; // 0x17e4 Return
}


func_4576(var_2_object, var_191_string)
{
	var_192_bool = 0; // 0x11e1 PushV
	func_6273(var_192_bool); // 0x11e2 Call
	var_193_bool = var_192_bool == 0; // 0x11e4 Not
	if(var_193_bool == 0) goto Label_4583; // 0x11e5 JumpB
	return 0; // 0x11e6 Return
	
Label_4583:
	var_194_bool = var_191_string == var_2_object; // 0x11e7 Eq
	if(var_194_bool == 0) goto Label_4586; // 0x11e8 JumpB
	return 0; // 0x11e9 Return
	
Label_4586:
	var_195_string = ""; // 0x11ea PushV
	var_195_string = var_191_string; // 0x11eb Mov
	func_6177(var_195_string); // 0x11ec Call
	var_2_object = var_191_string; // 0x11ee TMov
	return 0; // 0x11ef Return
}


func_7136(var_55_bool)
{
	var_57_int = 0; var_58_string = ""; // 0x1be1 PushV
	var_58_string = "ood8Viktor1"; // 0x1be2 MovS
	func_6212(var_57_int, var_58_string); // 0x1be3 Call
	var_59_int = 0; // 0x1be5 PushI
	var_60_bool = var_57_int == var_59_int; // 0x1be6 Eq
	if(var_60_bool == 0) goto Label_7146; // 0x1be7 JumpB
	var_55_bool = 1; // 0x1be8 MovB
	return 0; // 0x1be9 Return
	
Label_7146:
	var_55_bool = 0; // 0x1bea MovB
	return 0; // 0x1beb Return
}


func_3556(var_0_object, var_1_object, var_2_object, var_3_object, var_481_object, var_482_object)
{
	var_0_object = var_482_object; // 0xde5 TMov
	var_1_object = var_481_object; // 0xde6 TMov
	var_3_object = 0; // 0xde7 TMovB
	var_487_int = 1; // 0xde8 PushI
	if(var_487_int == 0) goto Label_3622; // 0xde9 JumpB
	var_488_string = ""; // 0xdea PushV
	var_488_string = "Neutral"; // 0xdeb MovS
	func_3652(var_482_object, var_488_string); // 0xdec Call
	var_493_int = 10235; // 0xdee PushI
	SetMessage(var_493_int); // 0xdef TObjFunc
	ClearReplies(); // 0xdf1 TObjFunc
	var_494_bool = 0; // 0xdf3 PushV
	var_494_bool = 0; // 0xdf4 MovB
	var_495_bool = 0; var_496_object = Obj(); // 0xdf5 PushV
	var_496_object = var_1_object; // 0xdf6 MovT
	func_6970(var_496_object); // 0xdf7 Call
	if(var_495_bool == 0) goto Label_3584; // 0xdf9 JumpB
	var_501_bool = 0; var_502_object = Obj(); // 0xdfa PushV
	var_502_object = var_1_object; // 0xdfb MovT
	func_6982(var_502_object); // 0xdfc Call
	if(var_501_bool == 0) goto Label_3584; // 0xdfe JumpB
	var_494_bool = 1; // 0xdff MovB
	
Label_3584:
	if(var_494_bool == 0) goto Label_3590; // 0xe00 JumpB
	var_503_int = 10236; // 0xe01 PushI
	var_504_int = 11288; // 0xe02 PushI
	var_505_int = 11286; // 0xe03 PushI
	AddReply(var_503_int, var_504_int, var_505_int); // 0xe04 TObjFunc
	
Label_3590:
	var_506_bool = 0; // 0xe06 PushV
	var_506_bool = 0; // 0xe07 MovB
	var_507_bool = 0; var_508_object = Obj(); // 0xe08 PushV
	var_508_object = var_1_object; // 0xe09 MovT
	func_6987(var_508_object); // 0xe0a Call
	if(var_507_bool == 0) goto Label_3603; // 0xe0c JumpB
	var_513_bool = 0; var_514_object = Obj(); // 0xe0d PushV
	var_514_object = var_1_object; // 0xe0e MovT
	func_6999(var_514_object); // 0xe0f Call
	if(var_513_bool == 0) goto Label_3603; // 0xe11 JumpB
	var_506_bool = 1; // 0xe12 MovB
	
Label_3603:
	if(var_506_bool == 0) goto Label_3609; // 0xe13 JumpB
	var_515_int = 10266; // 0xe14 PushI
	var_516_int = 11321; // 0xe15 PushI
	var_517_int = 11320; // 0xe16 PushI
	AddReply(var_515_int, var_516_int, var_517_int); // 0xe17 TObjFunc
	
Label_3609:
	var_518_int = 10237; // 0xe19 PushI
	var_519_int = 11089; // 0xe1a PushI
	var_520_int = 11287; // 0xe1b PushI
	AddReply(var_518_int, var_519_int, var_520_int); // 0xe1c TObjFunc
	var_521_int = 11382; // 0xe1e PushI
	var_522_int = -1; // 0xe1f PushI
	var_523_int = 12578; // 0xe20 PushI
	AddReply(var_521_int, var_522_int, var_523_int); // 0xe21 TObjFunc
	goto Label_3622; // 0xe23 Jump
	
Label_3622:
	var_524_bool = 0; // 0xe26 PushV
	func_6273(var_524_bool); // 0xe27 Call
	if(var_524_bool == 0) goto Label_3637; // 0xe29 JumpB
	
Label_3626:
	lshWaitForAnimEnd(); // 0xe2a Func
	var_525_object = var_3_object; // 0xe2c PushT
	if(var_525_object == 0) goto Label_3631; // 0xe2d JumpB
	goto Label_3636; // 0xe2e Jump
	
Label_3636:
	goto Label_3651; // 0xe34 Jump
	
Label_3651:
	return 0; // 0xe43 Return
	
Label_3631:
	var_526_string = ""; // 0xe2f PushV
	var_526_string = var_2_object; // 0xe30 MovT
	func_6177(var_526_string); // 0xe31 Call
	goto Label_3626; // 0xe33 Jump
	
Label_3637:
	var_527_string = "all"; // 0xe35 PushS
	var_528_string = "idle"; // 0xe36 PushS
	PlayAnimation(var_527_string, var_528_string); // 0xe37 Func
	
Label_3641:
	WaitForAnimEnd(); // 0xe39 Func
	var_529_object = var_3_object; // 0xe3b PushT
	if(var_529_object == 0) goto Label_3646; // 0xe3c JumpB
	goto Label_3651; // 0xe3d Jump
	
Label_3646:
	var_530_string = "all"; // 0xe3e PushS
	var_531_string = "idle"; // 0xe3f PushS
	PlayAnimation(var_530_string, var_531_string); // 0xe40 Func
	goto Label_3641; // 0xe42 Jump
}


func_6117(var_55_bool)
{
	var_57_float = 0; var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_bool = 0; var_65_float = 0; var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_bool = 0; // 0x17e5 PushV
	GetPosition(var_66_cvector); // 0x17e6 ObjFunc
	GetEyesHeight(var_65_float); // 0x17e8 ObjFunc
	var_73_float = GetByIndex(var_66_cvector, 1); // 0x17ea PushE
	var_73_float = var_73_float + var_65_float; // 0x17eb Add2
	SetByIndex(var_66_cvector, 1) = var_73_float; // 0x17ec PopE
	GetPosition(var_67_cvector); // 0x17ed Func
	GetEyesHeight(var_65_float); // 0x17ef Func
	var_74_float = GetByIndex(var_67_cvector, 1); // 0x17f1 PushE
	var_74_float = var_74_float + var_65_float; // 0x17f2 Add2
	SetByIndex(var_67_cvector, 1) = var_74_float; // 0x17f3 PopE
	var_68_cvector = var_66_cvector - var_67_cvector; // 0x17f4 Sub2
	var_75_float = GetByIndex(var_68_cvector, 1); // 0x17f5 PushE
	var_75_float = 0; // 0x17f6 MovI
	SetByIndex(var_68_cvector, 1) = var_75_float; // 0x17f7 PopE
	var_76_int = var_68_cvector | var_68_cvector; // 0x17f8 Or
	var_77_float = sqrt(var_76_int); // 0x17f9 Sqrt
	var_68_cvector = var_68_cvector / var_68_cvector; // 0x17fa Div2
	var_69_cvector = -var_68_cvector; // 0x17fb Neg2
	var_78_int = 70; // 0x17fc PushI
	var_79_float = var_68_cvector * var_78_int; // 0x17fd Mult
	var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); // 0x17fe PushV
	var_82_cvector = CVector(0.0, 1.0, 0.0); // 0x17ff PushVec
	var_81_cvector = var_69_cvector ^ var_82_cvector; // 0x1800 Xor2
	func_6202(var_80_cvector, var_81_cvector); // 0x1801 Call
	var_88_int = 25; // 0x1803 PushI
	var_89_float = var_80_cvector * var_88_int; // 0x1804 Mult
	var_90_int = var_79_float + var_89_float; // 0x1805 Add
	var_91_cvector = CVector(0.0, 10.0, 0.0); // 0x1806 PushVec
	var_70_cvector = var_90_int - var_91_cvector; // 0x1807 Sub2
	var_71_cvector = var_67_cvector + var_70_cvector; // 0x1808 Add2
	IsOverrideActive(var_72_bool); // 0x1809 Func
	var_92_bool = var_72_bool; // 0x180b Push
	if(var_92_bool == 0) goto Label_6159; // 0x180c JumpB
	var_55_bool = 0; // 0x180d MovB
	return 16; // 0x180e Return
	
Label_6159:
	StopWorld(); // 0x180f Func
	CameraTransit(var_71_cvector, var_69_cvector); // 0x1811 Func
	var_93_float = GetByIndex(var_70_cvector, 0); // 0x1813 PushE
	var_94_float = GetByIndex(var_70_cvector, 2); // 0x1814 PushE
	Rotate(var_93_float, var_94_float); // 0x1815 Func
	CameraWaitForPlayFinish(); // 0x1817 Func
	ResumeWorld(); // 0x1819 Func
	var_55_bool = 1; // 0x181b MovB
	return 16; // 0x181c Return
}


func_3046(var_0_object, var_394_int, var_395_object)
{
	var_397_object = Obj(); var_398_bool = 0; var_399_int = 0; var_400_bool = 0; var_401_object = Obj(); var_402_bool = 0; var_403_int = 0; var_404_bool = 0; // 0xbe6 PushV
	var_0_object = var_395_object; // 0xbe7 TMov
	var_405_bool = 0; var_406_object = Obj(); // 0xbe8 PushV
	var_406_object = var_395_object; // 0xbe9 Mov
	func_6117(var_406_object); // 0xbea Call
	var_407_bool = var_405_bool == 0; // 0xbec Not
	if(var_407_bool == 0) goto Label_3056; // 0xbed JumpB
	var_394_int = -2; // 0xbee MovI
	return 8; // 0xbef Return
	
Label_3056:
	CreateDialog(var_401_object); // 0xbf0 Func
	var_408_int = 0; // 0xbf2 PushV
	func_6269(var_408_int); // 0xbf3 Call
	SetNPCName(var_408_int); // 0xbf5 ObjFunc
	var_409_string = ""; // 0xbf7 PushV
	func_6271(var_409_string); // 0xbf8 Call
	SetPhoto(var_409_string); // 0xbfa ObjFunc
	var_410_int = 0; // 0xbfc PushV
	func_7360(var_410_int); // 0xbfd Call
	SetPlayerName(var_410_int); // 0xbff ObjFunc
	var_403_int = -1; // 0xc01 MovI
	IsOverrideActive(var_402_bool); // 0xc02 Func
	var_411_bool = var_402_bool; // 0xc04 Push
	if(var_411_bool == 0) goto Label_3080; // 0xc05 JumpB
	var_394_int = -2; // 0xc06 MovI
	return 8; // 0xc07 Return
	
Label_3080:
	DoDialog(var_401_object); // 0xc08 Func
	var_412_object = Obj(); var_413_object = Obj(); // 0xc0a PushV
	var_412_object = var_395_object; // 0xc0b Mov
	var_413_object = var_401_object; // 0xc0c Mov
	TaskCall(9); // 0xc0d TaskCall
	func_3109(var_414_object, var_415_object, var_416_string, var_417_bool, var_412_object, var_413_object); // 0xc0e Call
	TaskReturn(); // 0xc0f TaskReturn
	IsDialogEnd(var_404_bool); // 0xc11 ObjFunc
	
Label_3091:
	var_459_bool = var_404_bool == 0; // 0xc13 Not
	if(var_459_bool == 0) goto Label_3098; // 0xc14 JumpB
	sync(); // 0xc15 Func
	IsDialogEnd(var_404_bool); // 0xc17 ObjFunc
	goto Label_3091; // 0xc19 Jump
	
Label_3098:
	var_460_object = Obj(); // 0xc1a PushV
	var_460_object = var_395_object; // 0xc1b Mov
	func_6173(); // 0xc1c Call
	StopDialog(var_401_object); // 0xc1e Func
	GetReturnValue(var_403_int); // 0xc20 ObjFunc
	var_394_int = var_403_int; // 0xc22 Mov
	return 8; // 0xc23 Return
}


func_7148(var_47_bool)
{
	var_49_int = 0; var_50_string = ""; // 0x1bed PushV
	var_50_string = "d8KainIsReason"; // 0x1bee MovS
	func_6212(var_49_int, var_50_string); // 0x1bef Call
	var_53_int = 1; // 0x1bf1 PushI
	var_54_bool = var_49_int == var_53_int; // 0x1bf2 Eq
	if(var_54_bool == 0) goto Label_7158; // 0x1bf3 JumpB
	var_47_bool = 1; // 0x1bf4 MovB
	return 0; // 0x1bf5 Return
	
Label_7158:
	var_47_bool = 0; // 0x1bf6 MovB
	return 0; // 0x1bf7 Return
}


func_5613(var_2_object, var_120_string)
{
	var_121_bool = 0; // 0x15ee PushV
	func_6273(var_121_bool); // 0x15ef Call
	var_122_bool = var_121_bool == 0; // 0x15f1 Not
	if(var_122_bool == 0) goto Label_5620; // 0x15f2 JumpB
	return 0; // 0x15f3 Return
	
Label_5620:
	var_123_bool = var_120_string == var_2_object; // 0x15f4 Eq
	if(var_123_bool == 0) goto Label_5623; // 0x15f5 JumpB
	return 0; // 0x15f6 Return
	
Label_5623:
	var_124_string = ""; // 0x15f7 PushV
	var_124_string = var_120_string; // 0x15f8 Mov
	func_6177(var_124_string); // 0x15f9 Call
	var_2_object = var_120_string; // 0x15fb TMov
	return 0; // 0x15fc Return
}


func_6642()
{
	var_546_string = "KnowAlexandr"; // 0x19f3 PushS
	var_547_int = 1; // 0x19f4 PushI
	SetVariable(var_546_string, var_547_int); // 0x19f5 Func
	return 0; // 0x19f7 Return
}


func_7160(var_108_bool)
{
	var_110_int = 0; var_111_string = ""; // 0x1bf9 PushV
	var_111_string = "ood9Viktor1"; // 0x1bfa MovS
	func_6212(var_110_int, var_111_string); // 0x1bfb Call
	var_114_int = 0; // 0x1bfd PushI
	var_115_bool = var_110_int == var_114_int; // 0x1bfe Eq
	if(var_115_bool == 0) goto Label_7170; // 0x1bff JumpB
	var_108_bool = 1; // 0x1c00 MovB
	return 0; // 0x1c01 Return
	
Label_7170:
	var_108_bool = 0; // 0x1c02 MovB
	return 0; // 0x1c03 Return
}


func_1019(var_2_object, var_279_string)
{
	var_280_bool = 0; // 0x3fc PushV
	func_6273(var_280_bool); // 0x3fd Call
	var_281_bool = var_280_bool == 0; // 0x3ff Not
	if(var_281_bool == 0) goto Label_1026; // 0x400 JumpB
	return 0; // 0x401 Return
	
Label_1026:
	var_282_bool = var_279_string == var_2_object; // 0x402 Eq
	if(var_282_bool == 0) goto Label_1029; // 0x403 JumpB
	return 0; // 0x404 Return
	
Label_1029:
	var_283_string = ""; // 0x405 PushV
	var_283_string = var_279_string; // 0x406 Mov
	func_6177(var_283_string); // 0x407 Call
	var_2_object = var_279_string; // 0x409 TMov
	return 0; // 0x40a Return
}


func_6654()
{
	var_118_string = "ood9Viktor1"; // 0x19ff PushS
	var_119_int = 1; // 0x1a00 PushI
	SetVariable(var_118_string, var_119_int); // 0x1a01 Func
	return 0; // 0x1a03 Return
}


