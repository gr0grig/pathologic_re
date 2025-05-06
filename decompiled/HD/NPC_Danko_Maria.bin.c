task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_cvector)
{
	var_58_int = 1; // 0xb1 PushI
	if(var_58_int == 0) goto Label_319; // 0xb2 JumpB
	func_6488(); // 0xb4 NEW_2
	var_60_int = 84; // 0xb6 PushI
	var_61_bool = var_56_bool == var_60_int; // 0xb7 Eq
	if(var_61_bool == 0) goto Label_220; // 0xb8 JumpB
	var_62_object = Obj(); var_63_object = Obj(); // 0xb9 PushV
	var_62_object = var_1_object; // 0xba MovT
	var_63_object = var_0_object; // 0xbb MovT
	func_6780(); // 0xbc NEW_2
	var_66_string = ""; // 0xbe PushV
	var_66_string = "Staring"; // 0xbf MovS
	func_154(var_57_cvector, var_66_string); // 0xc0 NEW_2
	var_83_int = 500072; // 0xc2 PushI
	SetMessage(var_83_int); // 0xc3 TObjFunc
	ClearReplies(); // 0xc5 TObjFunc
	var_84_int = 500073; // 0xc7 PushI
	var_85_int = 87; // 0xc8 PushI
	var_86_int = 85; // 0xc9 PushI
	AddReply(var_84_int, var_85_int, var_86_int); // 0xca TObjFunc
	var_87_int = 500074; // 0xcc PushI
	var_88_int = 88; // 0xcd PushI
	var_89_int = 86; // 0xce PushI
	AddReply(var_87_int, var_88_int, var_89_int); // 0xcf TObjFunc
	var_90_int = 500086; // 0xd1 PushI
	var_91_int = 87; // 0xd2 PushI
	var_92_int = 98; // 0xd3 PushI
	AddReply(var_90_int, var_91_int, var_92_int); // 0xd4 TObjFunc
	var_93_int = 500087; // 0xd6 PushI
	var_94_int = 87; // 0xd7 PushI
	var_95_int = 99; // 0xd8 PushI
	AddReply(var_93_int, var_94_int, var_95_int); // 0xd9 TObjFunc
	return 0; // 0xdb Return
	
Label_220:
	var_96_int = 88; // 0xdc PushI
	var_97_bool = var_56_bool == var_96_int; // 0xdd Eq
	if(var_97_bool == 0) goto Label_243; // 0xde JumpB
	var_98_object = Obj(); var_99_object = Obj(); // 0xdf PushV
	var_98_object = var_1_object; // 0xe0 MovT
	var_99_object = var_0_object; // 0xe1 MovT
	func_6750(); // 0xe2 NEW_2
	var_102_string = ""; // 0xe4 PushV
	var_102_string = "Neutral"; // 0xe5 MovS
	func_154(var_57_cvector, var_102_string); // 0xe6 NEW_2
	var_103_int = 500076; // 0xe8 PushI
	SetMessage(var_103_int); // 0xe9 TObjFunc
	ClearReplies(); // 0xeb TObjFunc
	var_104_int = 500085; // 0xed PushI
	var_105_int = 87; // 0xee PushI
	var_106_int = 97; // 0xef PushI
	AddReply(var_104_int, var_105_int, var_106_int); // 0xf0 TObjFunc
	return 0; // 0xf2 Return
	
Label_243:
	var_107_int = 87; // 0xf3 PushI
	var_108_bool = var_56_bool == var_107_int; // 0xf4 Eq
	if(var_108_bool == 0) goto Label_266; // 0xf5 JumpB
	var_109_string = ""; // 0xf6 PushV
	var_109_string = "Staring"; // 0xf7 MovS
	func_154(var_57_cvector, var_109_string); // 0xf8 NEW_2
	var_110_int = 500075; // 0xfa PushI
	SetMessage(var_110_int); // 0xfb TObjFunc
	ClearReplies(); // 0xfd TObjFunc
	var_111_int = 500077; // 0xff PushI
	var_112_int = 93; // 0x100 PushI
	var_113_int = 89; // 0x101 PushI
	AddReply(var_111_int, var_112_int, var_113_int); // 0x102 TObjFunc
	var_114_int = 500078; // 0x104 PushI
	var_115_int = 91; // 0x105 PushI
	var_116_int = 90; // 0x106 PushI
	AddReply(var_114_int, var_115_int, var_116_int); // 0x107 TObjFunc
	return 0; // 0x109 Return
	
Label_266:
	var_117_int = 91; // 0x10a PushI
	var_118_bool = var_56_bool == var_117_int; // 0x10b Eq
	if(var_118_bool == 0) goto Label_284; // 0x10c JumpB
	var_119_string = ""; // 0x10d PushV
	var_119_string = "Staring"; // 0x10e MovS
	func_154(var_57_cvector, var_119_string); // 0x10f NEW_2
	var_120_int = 500079; // 0x111 PushI
	SetMessage(var_120_int); // 0x112 TObjFunc
	ClearReplies(); // 0x114 TObjFunc
	var_121_int = 500080; // 0x116 PushI
	var_122_int = -1; // 0x117 PushI
	var_123_int = 92; // 0x118 PushI
	AddReply(var_121_int, var_122_int, var_123_int); // 0x119 TObjFunc
	return 0; // 0x11b Return
	
Label_284:
	var_124_int = 93; // 0x11c PushI
	var_125_bool = var_56_bool == var_124_int; // 0x11d Eq
	if(var_125_bool == 0) goto Label_307; // 0x11e JumpB
	var_126_string = ""; // 0x11f PushV
	var_126_string = "Staring"; // 0x120 MovS
	func_154(var_57_cvector, var_126_string); // 0x121 NEW_2
	var_127_int = 500081; // 0x123 PushI
	SetMessage(var_127_int); // 0x124 TObjFunc
	ClearReplies(); // 0x126 TObjFunc
	var_128_int = 500083; // 0x128 PushI
	var_129_int = -1; // 0x129 PushI
	var_130_int = 95; // 0x12a PushI
	AddReply(var_128_int, var_129_int, var_130_int); // 0x12b TObjFunc
	var_131_int = 500084; // 0x12d PushI
	var_132_int = -1; // 0x12e PushI
	var_133_int = 96; // 0x12f PushI
	AddReply(var_131_int, var_132_int, var_133_int); // 0x130 TObjFunc
	return 0; // 0x132 Return
	
Label_307:
	var_3_string = 1; // 0x133 TMovB
	var_134_bool = 0; // 0x134 PushV
	func_6611(var_134_bool); // 0x135 NEW_2
	if(var_134_bool == 0) goto Label_315; // 0x137 JumpB
	lshStopAnimation(); // 0x138 Func
	goto Label_317; // 0x13a Jump
	
Label_317:
	return 0; // 0x13d Return
	
Label_315:
	StopAnimation(); // 0x13b Func
	
Label_319:
	return 0; // 0x13f Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_cvector)
{
	var_58_int = 1; // 0x218 PushI
	if(var_58_int == 0) goto Label_784; // 0x219 JumpB
	func_6488(); // 0x21b NEW_2
	var_60_int = 13313; // 0x21d PushI
	var_61_bool = var_57_cvector == var_60_int; // 0x21e Eq
	if(var_61_bool == 0) goto Label_549; // 0x21f JumpB
	var_62_object = Obj(); var_63_object = Obj(); // 0x220 PushV
	var_62_object = var_1_object; // 0x221 MovT
	var_63_object = var_0_object; // 0x222 MovT
	func_6768(); // 0x223 NEW_2
	
Label_549:
	var_66_int = 3539; // 0x225 PushI
	var_67_bool = var_56_bool == var_66_int; // 0x226 Eq
	if(var_67_bool == 0) goto Label_626; // 0x227 JumpB
	var_68_bool = 0; // 0x228 PushV
	var_68_bool = 0; // 0x229 MovB
	var_69_bool = 0; var_70_object = Obj(); // 0x22a PushV
	var_70_object = var_1_object; // 0x22b MovT
	func_7052(var_70_object); // 0x22c NEW_2
	if(var_69_bool == 0) goto Label_565; // 0x22e JumpB
	var_77_bool = 0; var_78_object = Obj(); // 0x22f PushV
	var_78_object = var_1_object; // 0x230 MovT
	func_7064(var_78_object); // 0x231 NEW_2
	if(var_77_bool == 0) goto Label_565; // 0x233 JumpB
	var_68_bool = 1; // 0x234 MovB
	
Label_565:
	if(var_68_bool == 0) goto Label_596; // 0x235 JumpB
	var_83_object = Obj(); var_84_object = Obj(); // 0x236 PushV
	var_83_object = var_1_object; // 0x237 MovT
	var_84_object = var_0_object; // 0x238 MovT
	func_6762(); // 0x239 NEW_2
	var_87_object = Obj(); var_88_object = Obj(); // 0x23b PushV
	var_87_object = var_1_object; // 0x23c MovT
	var_88_object = var_0_object; // 0x23d MovT
	func_6806(); // 0x23e NEW_2
	var_91_string = ""; // 0x240 PushV
	var_91_string = "Angry"; // 0x241 MovS
	func_513(var_57_cvector, var_91_string); // 0x242 NEW_2
	var_108_int = 503206; // 0x244 PushI
	SetMessage(var_108_int); // 0x245 TObjFunc
	ClearReplies(); // 0x247 TObjFunc
	var_109_int = 503207; // 0x249 PushI
	var_110_int = 3543; // 0x24a PushI
	var_111_int = 3540; // 0x24b PushI
	AddReply(var_109_int, var_110_int, var_111_int); // 0x24c TObjFunc
	var_112_int = 503208; // 0x24e PushI
	var_113_int = 3542; // 0x24f PushI
	var_114_int = 3541; // 0x250 PushI
	AddReply(var_112_int, var_113_int, var_114_int); // 0x251 TObjFunc
	return 0; // 0x253 Return
	
Label_596:
	var_115_object = Obj(); var_116_object = Obj(); // 0x254 PushV
	var_115_object = var_1_object; // 0x255 MovT
	var_116_object = var_0_object; // 0x256 MovT
	func_6806(); // 0x257 NEW_2
	var_117_string = ""; // 0x259 PushV
	var_117_string = "Mysterious"; // 0x25a MovS
	func_513(var_57_cvector, var_117_string); // 0x25b NEW_2
	var_118_int = 512086; // 0x25d PushI
	SetMessage(var_118_int); // 0x25e TObjFunc
	ClearReplies(); // 0x260 TObjFunc
	var_119_bool = 0; var_120_object = Obj(); // 0x262 PushV
	var_120_object = var_1_object; // 0x263 MovT
	func_7076(var_120_object); // 0x264 NEW_2
	if(var_119_bool == 0) goto Label_620; // 0x266 JumpB
	var_125_int = 512087; // 0x267 PushI
	var_126_int = 13314; // 0x268 PushI
	var_127_int = 13313; // 0x269 PushI
	AddReply(var_125_int, var_126_int, var_127_int); // 0x26a TObjFunc
	
Label_620:
	var_128_int = 512094; // 0x26c PushI
	var_129_int = -1; // 0x26d PushI
	var_130_int = 13320; // 0x26e PushI
	AddReply(var_128_int, var_129_int, var_130_int); // 0x26f TObjFunc
	return 0; // 0x271 Return
	
Label_626:
	var_131_int = 13314; // 0x272 PushI
	var_132_bool = var_56_bool == var_131_int; // 0x273 Eq
	if(var_132_bool == 0) goto Label_644; // 0x274 JumpB
	var_133_string = ""; // 0x275 PushV
	var_133_string = "Mysterious"; // 0x276 MovS
	func_513(var_57_cvector, var_133_string); // 0x277 NEW_2
	var_134_int = 512088; // 0x279 PushI
	SetMessage(var_134_int); // 0x27a TObjFunc
	ClearReplies(); // 0x27c TObjFunc
	var_135_int = 512089; // 0x27e PushI
	var_136_int = 13316; // 0x27f PushI
	var_137_int = 13315; // 0x280 PushI
	AddReply(var_135_int, var_136_int, var_137_int); // 0x281 TObjFunc
	return 0; // 0x283 Return
	
Label_644:
	var_138_int = 13316; // 0x284 PushI
	var_139_bool = var_56_bool == var_138_int; // 0x285 Eq
	if(var_139_bool == 0) goto Label_662; // 0x286 JumpB
	var_140_string = ""; // 0x287 PushV
	var_140_string = "Neutral"; // 0x288 MovS
	func_513(var_57_cvector, var_140_string); // 0x289 NEW_2
	var_141_int = 512090; // 0x28b PushI
	SetMessage(var_141_int); // 0x28c TObjFunc
	ClearReplies(); // 0x28e TObjFunc
	var_142_int = 512091; // 0x290 PushI
	var_143_int = 13318; // 0x291 PushI
	var_144_int = 13317; // 0x292 PushI
	AddReply(var_142_int, var_143_int, var_144_int); // 0x293 TObjFunc
	return 0; // 0x295 Return
	
Label_662:
	var_145_int = 13318; // 0x296 PushI
	var_146_bool = var_56_bool == var_145_int; // 0x297 Eq
	if(var_146_bool == 0) goto Label_680; // 0x298 JumpB
	var_147_string = ""; // 0x299 PushV
	var_147_string = "Neutral"; // 0x29a MovS
	func_513(var_57_cvector, var_147_string); // 0x29b NEW_2
	var_148_int = 512092; // 0x29d PushI
	SetMessage(var_148_int); // 0x29e TObjFunc
	ClearReplies(); // 0x2a0 TObjFunc
	var_149_int = 512093; // 0x2a2 PushI
	var_150_int = -1; // 0x2a3 PushI
	var_151_int = 13319; // 0x2a4 PushI
	AddReply(var_149_int, var_150_int, var_151_int); // 0x2a5 TObjFunc
	return 0; // 0x2a7 Return
	
Label_680:
	var_152_int = 3542; // 0x2a8 PushI
	var_153_bool = var_56_bool == var_152_int; // 0x2a9 Eq
	if(var_153_bool == 0) goto Label_703; // 0x2aa JumpB
	var_154_string = ""; // 0x2ab PushV
	var_154_string = "Rage"; // 0x2ac MovS
	func_513(var_57_cvector, var_154_string); // 0x2ad NEW_2
	var_155_int = 503209; // 0x2af PushI
	SetMessage(var_155_int); // 0x2b0 TObjFunc
	ClearReplies(); // 0x2b2 TObjFunc
	var_156_int = 503215; // 0x2b4 PushI
	var_157_int = 3543; // 0x2b5 PushI
	var_158_int = 3549; // 0x2b6 PushI
	AddReply(var_156_int, var_157_int, var_158_int); // 0x2b7 TObjFunc
	var_159_int = 503216; // 0x2b9 PushI
	var_160_int = 3543; // 0x2ba PushI
	var_161_int = 3551; // 0x2bb PushI
	AddReply(var_159_int, var_160_int, var_161_int); // 0x2bc TObjFunc
	return 0; // 0x2be Return
	
Label_703:
	var_162_int = 3543; // 0x2bf PushI
	var_163_bool = var_56_bool == var_162_int; // 0x2c0 Eq
	if(var_163_bool == 0) goto Label_726; // 0x2c1 JumpB
	var_164_string = ""; // 0x2c2 PushV
	var_164_string = "Rage"; // 0x2c3 MovS
	func_513(var_57_cvector, var_164_string); // 0x2c4 NEW_2
	var_165_int = 503210; // 0x2c6 PushI
	SetMessage(var_165_int); // 0x2c7 TObjFunc
	ClearReplies(); // 0x2c9 TObjFunc
	var_166_int = 503211; // 0x2cb PushI
	var_167_int = 3545; // 0x2cc PushI
	var_168_int = 3544; // 0x2cd PushI
	AddReply(var_166_int, var_167_int, var_168_int); // 0x2ce TObjFunc
	var_169_int = 503214; // 0x2d0 PushI
	var_170_int = 3545; // 0x2d1 PushI
	var_171_int = 3547; // 0x2d2 PushI
	AddReply(var_169_int, var_170_int, var_171_int); // 0x2d3 TObjFunc
	return 0; // 0x2d5 Return
	
Label_726:
	var_172_int = 3545; // 0x2d6 PushI
	var_173_bool = var_56_bool == var_172_int; // 0x2d7 Eq
	if(var_173_bool == 0) goto Label_749; // 0x2d8 JumpB
	var_174_string = ""; // 0x2d9 PushV
	var_174_string = "Rage"; // 0x2da MovS
	func_513(var_57_cvector, var_174_string); // 0x2db NEW_2
	var_175_int = 503212; // 0x2dd PushI
	SetMessage(var_175_int); // 0x2de TObjFunc
	ClearReplies(); // 0x2e0 TObjFunc
	var_176_int = 503213; // 0x2e2 PushI
	var_177_int = -1; // 0x2e3 PushI
	var_178_int = 3546; // 0x2e4 PushI
	AddReply(var_176_int, var_177_int, var_178_int); // 0x2e5 TObjFunc
	var_179_int = 503217; // 0x2e7 PushI
	var_180_int = 3554; // 0x2e8 PushI
	var_181_int = 3553; // 0x2e9 PushI
	AddReply(var_179_int, var_180_int, var_181_int); // 0x2ea TObjFunc
	return 0; // 0x2ec Return
	
Label_749:
	var_182_int = 3554; // 0x2ed PushI
	var_183_bool = var_56_bool == var_182_int; // 0x2ee Eq
	if(var_183_bool == 0) goto Label_772; // 0x2ef JumpB
	var_184_string = ""; // 0x2f0 PushV
	var_184_string = "Staring"; // 0x2f1 MovS
	func_513(var_57_cvector, var_184_string); // 0x2f2 NEW_2
	var_185_int = 503218; // 0x2f4 PushI
	SetMessage(var_185_int); // 0x2f5 TObjFunc
	ClearReplies(); // 0x2f7 TObjFunc
	var_186_int = 503219; // 0x2f9 PushI
	var_187_int = -1; // 0x2fa PushI
	var_188_int = 3555; // 0x2fb PushI
	AddReply(var_186_int, var_187_int, var_188_int); // 0x2fc TObjFunc
	var_189_int = 503220; // 0x2fe PushI
	var_190_int = -1; // 0x2ff PushI
	var_191_int = 3556; // 0x300 PushI
	AddReply(var_189_int, var_190_int, var_191_int); // 0x301 TObjFunc
	return 0; // 0x303 Return
	
Label_772:
	var_3_string = 1; // 0x304 TMovB
	var_192_bool = 0; // 0x305 PushV
	func_6611(var_192_bool); // 0x306 NEW_2
	if(var_192_bool == 0) goto Label_780; // 0x308 JumpB
	lshStopAnimation(); // 0x309 Func
	goto Label_782; // 0x30b Jump
	
Label_782:
	return 0; // 0x30e Return
	
Label_780:
	StopAnimation(); // 0x30c Func
	
Label_784:
	return 0; // 0x310 Return
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_cvector)
{
	var_58_int = 1; // 0x41b PushI
	if(var_58_int == 0) goto Label_2031; // 0x41c JumpB
	func_6488(); // 0x41e NEW_2
	var_60_int = 26327; // 0x420 PushI
	var_61_bool = var_57_cvector == var_60_int; // 0x421 Eq
	if(var_61_bool == 0) goto Label_1069; // 0x422 JumpB
	var_62_object = Obj(); var_63_object = Obj(); // 0x423 PushV
	var_62_object = var_1_object; // 0x424 MovT
	var_63_object = var_0_object; // 0x425 MovT
	func_6786(); // 0x426 NEW_2
	var_100_object = Obj(); var_101_object = Obj(); // 0x428 PushV
	var_100_object = var_1_object; // 0x429 MovT
	var_101_object = var_0_object; // 0x42a MovT
	func_6795(); // 0x42b NEW_2
	
Label_1069:
	var_103_int = 26345; // 0x42d PushI
	var_104_bool = var_57_cvector == var_103_int; // 0x42e Eq
	if(var_104_bool == 0) goto Label_1082; // 0x42f JumpB
	var_105_object = Obj(); var_106_object = Obj(); // 0x430 PushV
	var_105_object = var_1_object; // 0x431 MovT
	var_106_object = var_0_object; // 0x432 MovT
	func_6786(); // 0x433 NEW_2
	var_107_object = Obj(); var_108_object = Obj(); // 0x435 PushV
	var_107_object = var_1_object; // 0x436 MovT
	var_108_object = var_0_object; // 0x437 MovT
	func_6795(); // 0x438 NEW_2
	
Label_1082:
	var_109_int = 26346; // 0x43a PushI
	var_110_bool = var_57_cvector == var_109_int; // 0x43b Eq
	if(var_110_bool == 0) goto Label_1100; // 0x43c JumpB
	var_111_object = Obj(); var_112_object = Obj(); // 0x43d PushV
	var_111_object = var_1_object; // 0x43e MovT
	var_112_object = var_0_object; // 0x43f MovT
	func_6786(); // 0x440 NEW_2
	var_113_object = Obj(); var_114_object = Obj(); // 0x442 PushV
	var_113_object = var_1_object; // 0x443 MovT
	var_114_object = var_0_object; // 0x444 MovT
	func_6795(); // 0x445 NEW_2
	var_115_object = Obj(); var_116_object = Obj(); // 0x447 PushV
	var_115_object = var_1_object; // 0x448 MovT
	var_116_object = var_0_object; // 0x449 MovT
	func_6619(); // 0x44a NEW_2
	
Label_1100:
	var_119_int = 26333; // 0x44c PushI
	var_120_bool = var_57_cvector == var_119_int; // 0x44d Eq
	if(var_120_bool == 0) goto Label_1118; // 0x44e JumpB
	var_121_object = Obj(); var_122_object = Obj(); // 0x44f PushV
	var_121_object = var_1_object; // 0x450 MovT
	var_122_object = var_0_object; // 0x451 MovT
	func_6786(); // 0x452 NEW_2
	var_123_object = Obj(); var_124_object = Obj(); // 0x454 PushV
	var_123_object = var_1_object; // 0x455 MovT
	var_124_object = var_0_object; // 0x456 MovT
	func_6795(); // 0x457 NEW_2
	var_125_object = Obj(); var_126_object = Obj(); // 0x459 PushV
	var_125_object = var_1_object; // 0x45a MovT
	var_126_object = var_0_object; // 0x45b MovT
	func_6619(); // 0x45c NEW_2
	
Label_1118:
	var_127_int = 26337; // 0x45e PushI
	var_128_bool = var_57_cvector == var_127_int; // 0x45f Eq
	if(var_128_bool == 0) goto Label_1131; // 0x460 JumpB
	var_129_object = Obj(); var_130_object = Obj(); // 0x461 PushV
	var_129_object = var_1_object; // 0x462 MovT
	var_130_object = var_0_object; // 0x463 MovT
	func_6786(); // 0x464 NEW_2
	var_131_object = Obj(); var_132_object = Obj(); // 0x466 PushV
	var_131_object = var_1_object; // 0x467 MovT
	var_132_object = var_0_object; // 0x468 MovT
	func_6795(); // 0x469 NEW_2
	
Label_1131:
	var_133_int = 23003; // 0x46b PushI
	var_134_bool = var_57_cvector == var_133_int; // 0x46c Eq
	if(var_134_bool == 0) goto Label_1139; // 0x46d JumpB
	var_135_object = Obj(); var_136_object = Obj(); // 0x46e PushV
	var_135_object = var_1_object; // 0x46f MovT
	var_136_object = var_0_object; // 0x470 MovT
	func_6638(); // 0x471 NEW_2
	
Label_1139:
	var_139_int = 6183; // 0x473 PushI
	var_140_bool = var_57_cvector == var_139_int; // 0x474 Eq
	if(var_140_bool == 0) goto Label_1147; // 0x475 JumpB
	var_141_object = Obj(); var_142_object = Obj(); // 0x476 PushV
	var_141_object = var_1_object; // 0x477 MovT
	var_142_object = var_0_object; // 0x478 MovT
	func_6613(); // 0x479 NEW_2
	
Label_1147:
	var_145_int = 6184; // 0x47b PushI
	var_146_bool = var_57_cvector == var_145_int; // 0x47c Eq
	if(var_146_bool == 0) goto Label_1155; // 0x47d JumpB
	var_147_object = Obj(); var_148_object = Obj(); // 0x47e PushV
	var_147_object = var_1_object; // 0x47f MovT
	var_148_object = var_0_object; // 0x480 MovT
	func_6613(); // 0x481 NEW_2
	
Label_1155:
	var_149_int = 8934; // 0x483 PushI
	var_150_bool = var_57_cvector == var_149_int; // 0x484 Eq
	if(var_150_bool == 0) goto Label_1163; // 0x485 JumpB
	var_151_object = Obj(); var_152_object = Obj(); // 0x486 PushV
	var_151_object = var_1_object; // 0x487 MovT
	var_152_object = var_0_object; // 0x488 MovT
	func_6800(); // 0x489 NEW_2
	
Label_1163:
	var_155_int = 23019; // 0x48b PushI
	var_156_bool = var_57_cvector == var_155_int; // 0x48c Eq
	if(var_156_bool == 0) goto Label_1171; // 0x48d JumpB
	var_157_object = Obj(); var_158_object = Obj(); // 0x48e PushV
	var_157_object = var_1_object; // 0x48f MovT
	var_158_object = var_0_object; // 0x490 MovT
	func_6800(); // 0x491 NEW_2
	
Label_1171:
	var_159_int = 6919; // 0x493 PushI
	var_160_bool = var_56_bool == var_159_int; // 0x494 Eq
	if(var_160_bool == 0) goto Label_1298; // 0x495 JumpB
	var_161_bool = 0; var_162_object = Obj(); // 0x496 PushV
	var_162_object = var_1_object; // 0x497 MovT
	func_6872(var_162_object); // 0x498 NEW_2
	var_169_bool = var_161_bool == 0; // 0x49a Not
	if(var_169_bool == 0) goto Label_1200; // 0x49b JumpB
	var_170_string = ""; // 0x49c PushV
	var_170_string = "Staring"; // 0x49d MovS
	func_1028(var_57_cvector, var_170_string); // 0x49e NEW_2
	var_187_int = 506253; // 0x4a0 PushI
	SetMessage(var_187_int); // 0x4a1 TObjFunc
	ClearReplies(); // 0x4a3 TObjFunc
	var_188_int = 506254; // 0x4a5 PushI
	var_189_int = 6921; // 0x4a6 PushI
	var_190_int = 6920; // 0x4a7 PushI
	AddReply(var_188_int, var_189_int, var_190_int); // 0x4a8 TObjFunc
	var_191_int = 506259; // 0x4aa PushI
	var_192_int = 6926; // 0x4ab PushI
	var_193_int = 6925; // 0x4ac PushI
	AddReply(var_191_int, var_192_int, var_193_int); // 0x4ad TObjFunc
	return 0; // 0x4af Return
	
Label_1200:
	var_194_bool = 0; var_195_object = Obj(); // 0x4b0 PushV
	var_195_object = var_1_object; // 0x4b1 MovT
	func_6848(var_195_object); // 0x4b2 NEW_2
	if(var_194_bool == 0) goto Label_1235; // 0x4b4 JumpB
	var_200_object = Obj(); var_201_object = Obj(); // 0x4b5 PushV
	var_200_object = var_1_object; // 0x4b6 MovT
	var_201_object = var_0_object; // 0x4b7 MovT
	func_6632(); // 0x4b8 NEW_2
	var_204_object = Obj(); var_205_object = Obj(); // 0x4ba PushV
	var_204_object = var_1_object; // 0x4bb MovT
	var_205_object = var_0_object; // 0x4bc MovT
	func_6625(); // 0x4bd NEW_2
	var_212_string = ""; // 0x4bf PushV
	var_212_string = "Mysterious"; // 0x4c0 MovS
	func_1028(var_57_cvector, var_212_string); // 0x4c1 NEW_2
	var_213_int = 524928; // 0x4c3 PushI
	SetMessage(var_213_int); // 0x4c4 TObjFunc
	ClearReplies(); // 0x4c6 TObjFunc
	var_214_int = 524944; // 0x4c8 PushI
	var_215_int = 26279; // 0x4c9 PushI
	var_216_int = 26278; // 0x4ca PushI
	AddReply(var_214_int, var_215_int, var_216_int); // 0x4cb TObjFunc
	var_217_int = 524952; // 0x4cd PushI
	var_218_int = 26279; // 0x4ce PushI
	var_219_int = 26286; // 0x4cf PushI
	AddReply(var_217_int, var_218_int, var_219_int); // 0x4d0 TObjFunc
	return 0; // 0x4d2 Return
	
Label_1235:
	var_220_string = ""; // 0x4d3 PushV
	var_220_string = "Mysterious"; // 0x4d4 MovS
	func_1028(var_57_cvector, var_220_string); // 0x4d5 NEW_2
	var_221_int = 508097; // 0x4d7 PushI
	SetMessage(var_221_int); // 0x4d8 TObjFunc
	ClearReplies(); // 0x4da TObjFunc
	var_222_bool = 0; // 0x4dc PushV
	var_222_bool = 0; // 0x4dd MovB
	var_223_bool = 0; var_224_object = Obj(); // 0x4de PushV
	var_224_object = var_1_object; // 0x4df MovT
	func_6824(var_224_object); // 0x4e0 NEW_2
	if(var_223_bool == 0) goto Label_1257; // 0x4e2 JumpB
	var_229_bool = 0; var_230_object = Obj(); // 0x4e3 PushV
	var_230_object = var_1_object; // 0x4e4 MovT
	func_6860(var_230_object); // 0x4e5 NEW_2
	if(var_229_bool == 0) goto Label_1257; // 0x4e7 JumpB
	var_222_bool = 1; // 0x4e8 MovB
	
Label_1257:
	if(var_222_bool == 0) goto Label_1263; // 0x4e9 JumpB
	var_235_int = 521832; // 0x4ea PushI
	var_236_int = 23004; // 0x4eb PushI
	var_237_int = 23003; // 0x4ec PushI
	AddReply(var_235_int, var_236_int, var_237_int); // 0x4ed TObjFunc
	
Label_1263:
	var_238_bool = 0; var_239_object = Obj(); // 0x4ef PushV
	var_239_object = var_1_object; // 0x4f0 MovT
	func_6836(var_239_object); // 0x4f1 NEW_2
	if(var_238_bool == 0) goto Label_1273; // 0x4f3 JumpB
	var_244_int = 505605; // 0x4f4 PushI
	var_245_int = 6180; // 0x4f5 PushI
	var_246_int = 6179; // 0x4f6 PushI
	AddReply(var_244_int, var_245_int, var_246_int); // 0x4f7 TObjFunc
	
Label_1273:
	var_247_bool = 0; // 0x4f9 PushV
	var_247_bool = 0; // 0x4fa MovB
	var_248_bool = 0; var_249_object = Obj(); // 0x4fb PushV
	var_249_object = var_1_object; // 0x4fc MovT
	func_7100(var_249_object); // 0x4fd NEW_2
	if(var_248_bool == 0) goto Label_1286; // 0x4ff JumpB
	var_254_bool = 0; var_255_object = Obj(); // 0x500 PushV
	var_255_object = var_1_object; // 0x501 MovT
	func_7124(var_255_object); // 0x502 NEW_2
	if(var_254_bool == 0) goto Label_1286; // 0x504 JumpB
	var_247_bool = 1; // 0x505 MovB
	
Label_1286:
	if(var_247_bool == 0) goto Label_1292; // 0x506 JumpB
	var_260_int = 508111; // 0x507 PushI
	var_261_int = 23011; // 0x508 PushI
	var_262_int = 8934; // 0x509 PushI
	AddReply(var_260_int, var_261_int, var_262_int); // 0x50a TObjFunc
	
Label_1292:
	var_263_int = 505611; // 0x50c PushI
	var_264_int = -1; // 0x50d PushI
	var_265_int = 6185; // 0x50e PushI
	AddReply(var_263_int, var_264_int, var_265_int); // 0x50f TObjFunc
	return 0; // 0x511 Return
	
Label_1298:
	var_266_int = 23011; // 0x512 PushI
	var_267_bool = var_56_bool == var_266_int; // 0x513 Eq
	if(var_267_bool == 0) goto Label_1316; // 0x514 JumpB
	var_268_string = ""; // 0x515 PushV
	var_268_string = "Neutral"; // 0x516 MovS
	func_1028(var_57_cvector, var_268_string); // 0x517 NEW_2
	var_269_int = 521840; // 0x519 PushI
	SetMessage(var_269_int); // 0x51a TObjFunc
	ClearReplies(); // 0x51c TObjFunc
	var_270_int = 521841; // 0x51e PushI
	var_271_int = 8948; // 0x51f PushI
	var_272_int = 23012; // 0x520 PushI
	AddReply(var_270_int, var_271_int, var_272_int); // 0x521 TObjFunc
	return 0; // 0x523 Return
	
Label_1316:
	var_273_int = 8948; // 0x524 PushI
	var_274_bool = var_56_bool == var_273_int; // 0x525 Eq
	if(var_274_bool == 0) goto Label_1344; // 0x526 JumpB
	var_275_object = Obj(); var_276_object = Obj(); // 0x527 PushV
	var_275_object = var_1_object; // 0x528 MovT
	var_276_object = var_0_object; // 0x529 MovT
	func_6756(); // 0x52a NEW_2
	var_279_string = ""; // 0x52c PushV
	var_279_string = "Neutral"; // 0x52d MovS
	func_1028(var_57_cvector, var_279_string); // 0x52e NEW_2
	var_280_int = 508125; // 0x530 PushI
	SetMessage(var_280_int); // 0x531 TObjFunc
	ClearReplies(); // 0x533 TObjFunc
	var_281_int = 521842; // 0x535 PushI
	var_282_int = 23014; // 0x536 PushI
	var_283_int = 23013; // 0x537 PushI
	AddReply(var_281_int, var_282_int, var_283_int); // 0x538 TObjFunc
	var_284_int = 521846; // 0x53a PushI
	var_285_int = 23016; // 0x53b PushI
	var_286_int = 23017; // 0x53c PushI
	AddReply(var_284_int, var_285_int, var_286_int); // 0x53d TObjFunc
	return 0; // 0x53f Return
	
Label_1344:
	var_287_int = 23014; // 0x540 PushI
	var_288_bool = var_56_bool == var_287_int; // 0x541 Eq
	if(var_288_bool == 0) goto Label_1362; // 0x542 JumpB
	var_289_string = ""; // 0x543 PushV
	var_289_string = "Neutral"; // 0x544 MovS
	func_1028(var_57_cvector, var_289_string); // 0x545 NEW_2
	var_290_int = 521843; // 0x547 PushI
	SetMessage(var_290_int); // 0x548 TObjFunc
	ClearReplies(); // 0x54a TObjFunc
	var_291_int = 521844; // 0x54c PushI
	var_292_int = 23016; // 0x54d PushI
	var_293_int = 23015; // 0x54e PushI
	AddReply(var_291_int, var_292_int, var_293_int); // 0x54f TObjFunc
	return 0; // 0x551 Return
	
Label_1362:
	var_294_int = 23016; // 0x552 PushI
	var_295_bool = var_56_bool == var_294_int; // 0x553 Eq
	if(var_295_bool == 0) goto Label_1380; // 0x554 JumpB
	var_296_string = ""; // 0x555 PushV
	var_296_string = "Neutral"; // 0x556 MovS
	func_1028(var_57_cvector, var_296_string); // 0x557 NEW_2
	var_297_int = 521845; // 0x559 PushI
	SetMessage(var_297_int); // 0x55a TObjFunc
	ClearReplies(); // 0x55c TObjFunc
	var_298_int = 521847; // 0x55e PushI
	var_299_int = -1; // 0x55f PushI
	var_300_int = 23019; // 0x560 PushI
	AddReply(var_298_int, var_299_int, var_300_int); // 0x561 TObjFunc
	return 0; // 0x563 Return
	
Label_1380:
	var_301_int = 6180; // 0x564 PushI
	var_302_bool = var_56_bool == var_301_int; // 0x565 Eq
	if(var_302_bool == 0) goto Label_1403; // 0x566 JumpB
	var_303_string = ""; // 0x567 PushV
	var_303_string = "Mysterious"; // 0x568 MovS
	func_1028(var_57_cvector, var_303_string); // 0x569 NEW_2
	var_304_int = 505606; // 0x56b PushI
	SetMessage(var_304_int); // 0x56c TObjFunc
	ClearReplies(); // 0x56e TObjFunc
	var_305_int = 505607; // 0x570 PushI
	var_306_int = 6182; // 0x571 PushI
	var_307_int = 6181; // 0x572 PushI
	AddReply(var_305_int, var_306_int, var_307_int); // 0x573 TObjFunc
	var_308_int = 524933; // 0x575 PushI
	var_309_int = 6182; // 0x576 PushI
	var_310_int = 26264; // 0x577 PushI
	AddReply(var_308_int, var_309_int, var_310_int); // 0x578 TObjFunc
	return 0; // 0x57a Return
	
Label_1403:
	var_311_int = 6182; // 0x57b PushI
	var_312_bool = var_56_bool == var_311_int; // 0x57c Eq
	if(var_312_bool == 0) goto Label_1426; // 0x57d JumpB
	var_313_string = ""; // 0x57e PushV
	var_313_string = "Mysterious"; // 0x57f MovS
	func_1028(var_57_cvector, var_313_string); // 0x580 NEW_2
	var_314_int = 505608; // 0x582 PushI
	SetMessage(var_314_int); // 0x583 TObjFunc
	ClearReplies(); // 0x585 TObjFunc
	var_315_int = 505609; // 0x587 PushI
	var_316_int = -1; // 0x588 PushI
	var_317_int = 6183; // 0x589 PushI
	AddReply(var_315_int, var_316_int, var_317_int); // 0x58a TObjFunc
	var_318_int = 505610; // 0x58c PushI
	var_319_int = -1; // 0x58d PushI
	var_320_int = 6184; // 0x58e PushI
	AddReply(var_318_int, var_319_int, var_320_int); // 0x58f TObjFunc
	return 0; // 0x591 Return
	
Label_1426:
	var_321_int = 23004; // 0x592 PushI
	var_322_bool = var_56_bool == var_321_int; // 0x593 Eq
	if(var_322_bool == 0) goto Label_1449; // 0x594 JumpB
	var_323_string = ""; // 0x595 PushV
	var_323_string = "Staring"; // 0x596 MovS
	func_1028(var_57_cvector, var_323_string); // 0x597 NEW_2
	var_324_int = 521833; // 0x599 PushI
	SetMessage(var_324_int); // 0x59a TObjFunc
	ClearReplies(); // 0x59c TObjFunc
	var_325_int = 505529; // 0x59e PushI
	var_326_int = 6187; // 0x59f PushI
	var_327_int = 6093; // 0x5a0 PushI
	AddReply(var_325_int, var_326_int, var_327_int); // 0x5a1 TObjFunc
	var_328_int = 521834; // 0x5a3 PushI
	var_329_int = -1; // 0x5a4 PushI
	var_330_int = 23005; // 0x5a5 PushI
	AddReply(var_328_int, var_329_int, var_330_int); // 0x5a6 TObjFunc
	return 0; // 0x5a8 Return
	
Label_1449:
	var_331_int = 6187; // 0x5a9 PushI
	var_332_bool = var_56_bool == var_331_int; // 0x5aa Eq
	if(var_332_bool == 0) goto Label_1467; // 0x5ab JumpB
	var_333_string = ""; // 0x5ac PushV
	var_333_string = "Staring"; // 0x5ad MovS
	func_1028(var_57_cvector, var_333_string); // 0x5ae NEW_2
	var_334_int = 505612; // 0x5b0 PushI
	SetMessage(var_334_int); // 0x5b1 TObjFunc
	ClearReplies(); // 0x5b3 TObjFunc
	var_335_int = 524934; // 0x5b5 PushI
	var_336_int = 26267; // 0x5b6 PushI
	var_337_int = 26266; // 0x5b7 PushI
	AddReply(var_335_int, var_336_int, var_337_int); // 0x5b8 TObjFunc
	return 0; // 0x5ba Return
	
Label_1467:
	var_338_int = 26267; // 0x5bb PushI
	var_339_bool = var_56_bool == var_338_int; // 0x5bc Eq
	if(var_339_bool == 0) goto Label_1490; // 0x5bd JumpB
	var_340_string = ""; // 0x5be PushV
	var_340_string = "Rage"; // 0x5bf MovS
	func_1028(var_57_cvector, var_340_string); // 0x5c0 NEW_2
	var_341_int = 524935; // 0x5c2 PushI
	SetMessage(var_341_int); // 0x5c3 TObjFunc
	ClearReplies(); // 0x5c5 TObjFunc
	var_342_int = 524936; // 0x5c7 PushI
	var_343_int = 26269; // 0x5c8 PushI
	var_344_int = 26268; // 0x5c9 PushI
	AddReply(var_342_int, var_343_int, var_344_int); // 0x5ca TObjFunc
	var_345_int = 524938; // 0x5cc PushI
	var_346_int = 26269; // 0x5cd PushI
	var_347_int = 26270; // 0x5ce PushI
	AddReply(var_345_int, var_346_int, var_347_int); // 0x5cf TObjFunc
	return 0; // 0x5d1 Return
	
Label_1490:
	var_348_int = 26269; // 0x5d2 PushI
	var_349_bool = var_56_bool == var_348_int; // 0x5d3 Eq
	if(var_349_bool == 0) goto Label_1508; // 0x5d4 JumpB
	var_350_string = ""; // 0x5d5 PushV
	var_350_string = "Staring"; // 0x5d6 MovS
	func_1028(var_57_cvector, var_350_string); // 0x5d7 NEW_2
	var_351_int = 524937; // 0x5d9 PushI
	SetMessage(var_351_int); // 0x5da TObjFunc
	ClearReplies(); // 0x5dc TObjFunc
	var_352_int = 524939; // 0x5de PushI
	var_353_int = 26273; // 0x5df PushI
	var_354_int = 26272; // 0x5e0 PushI
	AddReply(var_352_int, var_353_int, var_354_int); // 0x5e1 TObjFunc
	return 0; // 0x5e3 Return
	
Label_1508:
	var_355_int = 26273; // 0x5e4 PushI
	var_356_bool = var_56_bool == var_355_int; // 0x5e5 Eq
	if(var_356_bool == 0) goto Label_1531; // 0x5e6 JumpB
	var_357_string = ""; // 0x5e7 PushV
	var_357_string = "Staring"; // 0x5e8 MovS
	func_1028(var_57_cvector, var_357_string); // 0x5e9 NEW_2
	var_358_int = 524940; // 0x5eb PushI
	SetMessage(var_358_int); // 0x5ec TObjFunc
	ClearReplies(); // 0x5ee TObjFunc
	var_359_int = 505528; // 0x5f0 PushI
	var_360_int = 6901; // 0x5f1 PushI
	var_361_int = 6092; // 0x5f2 PushI
	AddReply(var_359_int, var_360_int, var_361_int); // 0x5f3 TObjFunc
	var_362_int = 505613; // 0x5f5 PushI
	var_363_int = 26274; // 0x5f6 PushI
	var_364_int = 6188; // 0x5f7 PushI
	AddReply(var_362_int, var_363_int, var_364_int); // 0x5f8 TObjFunc
	return 0; // 0x5fa Return
	
Label_1531:
	var_365_int = 26274; // 0x5fb PushI
	var_366_bool = var_56_bool == var_365_int; // 0x5fc Eq
	if(var_366_bool == 0) goto Label_1554; // 0x5fd JumpB
	var_367_string = ""; // 0x5fe PushV
	var_367_string = "Staring"; // 0x5ff MovS
	func_1028(var_57_cvector, var_367_string); // 0x600 NEW_2
	var_368_int = 524941; // 0x602 PushI
	SetMessage(var_368_int); // 0x603 TObjFunc
	ClearReplies(); // 0x605 TObjFunc
	var_369_int = 524942; // 0x607 PushI
	var_370_int = 6901; // 0x608 PushI
	var_371_int = 26275; // 0x609 PushI
	AddReply(var_369_int, var_370_int, var_371_int); // 0x60a TObjFunc
	var_372_int = 524943; // 0x60c PushI
	var_373_int = -1; // 0x60d PushI
	var_374_int = 26276; // 0x60e PushI
	AddReply(var_372_int, var_373_int, var_374_int); // 0x60f TObjFunc
	return 0; // 0x611 Return
	
Label_1554:
	var_375_int = 6901; // 0x612 PushI
	var_376_bool = var_56_bool == var_375_int; // 0x613 Eq
	if(var_376_bool == 0) goto Label_1582; // 0x614 JumpB
	var_377_string = ""; // 0x615 PushV
	var_377_string = "Staring"; // 0x616 MovS
	func_1028(var_57_cvector, var_377_string); // 0x617 NEW_2
	var_378_int = 506238; // 0x619 PushI
	SetMessage(var_378_int); // 0x61a TObjFunc
	ClearReplies(); // 0x61c TObjFunc
	var_379_int = 506239; // 0x61e PushI
	var_380_int = -1; // 0x61f PushI
	var_381_int = 6902; // 0x620 PushI
	AddReply(var_379_int, var_380_int, var_381_int); // 0x621 TObjFunc
	var_382_int = 506240; // 0x623 PushI
	var_383_int = -1; // 0x624 PushI
	var_384_int = 6903; // 0x625 PushI
	AddReply(var_382_int, var_383_int, var_384_int); // 0x626 TObjFunc
	var_385_int = 506241; // 0x628 PushI
	var_386_int = -1; // 0x629 PushI
	var_387_int = 6904; // 0x62a PushI
	AddReply(var_385_int, var_386_int, var_387_int); // 0x62b TObjFunc
	return 0; // 0x62d Return
	
Label_1582:
	var_388_int = 26279; // 0x62e PushI
	var_389_bool = var_56_bool == var_388_int; // 0x62f Eq
	if(var_389_bool == 0) goto Label_1605; // 0x630 JumpB
	var_390_string = ""; // 0x631 PushV
	var_390_string = "Mysterious"; // 0x632 MovS
	func_1028(var_57_cvector, var_390_string); // 0x633 NEW_2
	var_391_int = 524945; // 0x635 PushI
	SetMessage(var_391_int); // 0x636 TObjFunc
	ClearReplies(); // 0x638 TObjFunc
	var_392_int = 524946; // 0x63a PushI
	var_393_int = 26281; // 0x63b PushI
	var_394_int = 26280; // 0x63c PushI
	AddReply(var_392_int, var_393_int, var_394_int); // 0x63d TObjFunc
	var_395_int = 524953; // 0x63f PushI
	var_396_int = 26281; // 0x640 PushI
	var_397_int = 26288; // 0x641 PushI
	AddReply(var_395_int, var_396_int, var_397_int); // 0x642 TObjFunc
	return 0; // 0x644 Return
	
Label_1605:
	var_398_int = 26281; // 0x645 PushI
	var_399_bool = var_56_bool == var_398_int; // 0x646 Eq
	if(var_399_bool == 0) goto Label_1628; // 0x647 JumpB
	var_400_string = ""; // 0x648 PushV
	var_400_string = "Mysterious"; // 0x649 MovS
	func_1028(var_57_cvector, var_400_string); // 0x64a NEW_2
	var_401_int = 524947; // 0x64c PushI
	SetMessage(var_401_int); // 0x64d TObjFunc
	ClearReplies(); // 0x64f TObjFunc
	var_402_int = 524948; // 0x651 PushI
	var_403_int = 26283; // 0x652 PushI
	var_404_int = 26282; // 0x653 PushI
	AddReply(var_402_int, var_403_int, var_404_int); // 0x654 TObjFunc
	var_405_int = 524954; // 0x656 PushI
	var_406_int = 26291; // 0x657 PushI
	var_407_int = 26290; // 0x658 PushI
	AddReply(var_405_int, var_406_int, var_407_int); // 0x659 TObjFunc
	return 0; // 0x65b Return
	
Label_1628:
	var_408_int = 26291; // 0x65c PushI
	var_409_bool = var_56_bool == var_408_int; // 0x65d Eq
	if(var_409_bool == 0) goto Label_1651; // 0x65e JumpB
	var_410_string = ""; // 0x65f PushV
	var_410_string = "Neutral"; // 0x660 MovS
	func_1028(var_57_cvector, var_410_string); // 0x661 NEW_2
	var_411_int = 524955; // 0x663 PushI
	SetMessage(var_411_int); // 0x664 TObjFunc
	ClearReplies(); // 0x666 TObjFunc
	var_412_int = 524956; // 0x668 PushI
	var_413_int = 26294; // 0x669 PushI
	var_414_int = 26292; // 0x66a PushI
	AddReply(var_412_int, var_413_int, var_414_int); // 0x66b TObjFunc
	var_415_int = 524957; // 0x66d PushI
	var_416_int = 26301; // 0x66e PushI
	var_417_int = 26293; // 0x66f PushI
	AddReply(var_415_int, var_416_int, var_417_int); // 0x670 TObjFunc
	return 0; // 0x672 Return
	
Label_1651:
	var_418_int = 26301; // 0x673 PushI
	var_419_bool = var_56_bool == var_418_int; // 0x674 Eq
	if(var_419_bool == 0) goto Label_1679; // 0x675 JumpB
	var_420_string = ""; // 0x676 PushV
	var_420_string = "Staring"; // 0x677 MovS
	func_1028(var_57_cvector, var_420_string); // 0x678 NEW_2
	var_421_int = 524965; // 0x67a PushI
	SetMessage(var_421_int); // 0x67b TObjFunc
	ClearReplies(); // 0x67d TObjFunc
	var_422_int = 524966; // 0x67f PushI
	var_423_int = 26309; // 0x680 PushI
	var_424_int = 26302; // 0x681 PushI
	AddReply(var_422_int, var_423_int, var_424_int); // 0x682 TObjFunc
	var_425_int = 524968; // 0x684 PushI
	var_426_int = 26298; // 0x685 PushI
	var_427_int = 26307; // 0x686 PushI
	AddReply(var_425_int, var_426_int, var_427_int); // 0x687 TObjFunc
	var_428_int = 533662; // 0x689 PushI
	var_429_int = 26283; // 0x68a PushI
	var_430_int = 35192; // 0x68b PushI
	AddReply(var_428_int, var_429_int, var_430_int); // 0x68c TObjFunc
	return 0; // 0x68e Return
	
Label_1679:
	var_431_int = 26309; // 0x68f PushI
	var_432_bool = var_56_bool == var_431_int; // 0x690 Eq
	if(var_432_bool == 0) goto Label_1707; // 0x691 JumpB
	var_433_string = ""; // 0x692 PushV
	var_433_string = "Staring"; // 0x693 MovS
	func_1028(var_57_cvector, var_433_string); // 0x694 NEW_2
	var_434_int = 524969; // 0x696 PushI
	SetMessage(var_434_int); // 0x697 TObjFunc
	ClearReplies(); // 0x699 TObjFunc
	var_435_int = 524970; // 0x69b PushI
	var_436_int = 26283; // 0x69c PushI
	var_437_int = 26310; // 0x69d PushI
	AddReply(var_435_int, var_436_int, var_437_int); // 0x69e TObjFunc
	var_438_int = 524972; // 0x6a0 PushI
	var_439_int = 26314; // 0x6a1 PushI
	var_440_int = 26313; // 0x6a2 PushI
	AddReply(var_438_int, var_439_int, var_440_int); // 0x6a3 TObjFunc
	var_441_int = 524971; // 0x6a5 PushI
	var_442_int = -1; // 0x6a6 PushI
	var_443_int = 26312; // 0x6a7 PushI
	AddReply(var_441_int, var_442_int, var_443_int); // 0x6a8 TObjFunc
	return 0; // 0x6aa Return
	
Label_1707:
	var_444_int = 26314; // 0x6ab PushI
	var_445_bool = var_56_bool == var_444_int; // 0x6ac Eq
	if(var_445_bool == 0) goto Label_1730; // 0x6ad JumpB
	var_446_string = ""; // 0x6ae PushV
	var_446_string = "Staring"; // 0x6af MovS
	func_1028(var_57_cvector, var_446_string); // 0x6b0 NEW_2
	var_447_int = 524973; // 0x6b2 PushI
	SetMessage(var_447_int); // 0x6b3 TObjFunc
	ClearReplies(); // 0x6b5 TObjFunc
	var_448_int = 524974; // 0x6b7 PushI
	var_449_int = 26283; // 0x6b8 PushI
	var_450_int = 26315; // 0x6b9 PushI
	AddReply(var_448_int, var_449_int, var_450_int); // 0x6ba TObjFunc
	var_451_int = 524975; // 0x6bc PushI
	var_452_int = 26283; // 0x6bd PushI
	var_453_int = 26316; // 0x6be PushI
	AddReply(var_451_int, var_452_int, var_453_int); // 0x6bf TObjFunc
	return 0; // 0x6c1 Return
	
Label_1730:
	var_454_int = 26294; // 0x6c2 PushI
	var_455_bool = var_56_bool == var_454_int; // 0x6c3 Eq
	if(var_455_bool == 0) goto Label_1753; // 0x6c4 JumpB
	var_456_string = ""; // 0x6c5 PushV
	var_456_string = "Rage"; // 0x6c6 MovS
	func_1028(var_57_cvector, var_456_string); // 0x6c7 NEW_2
	var_457_int = 524958; // 0x6c9 PushI
	SetMessage(var_457_int); // 0x6ca TObjFunc
	ClearReplies(); // 0x6cc TObjFunc
	var_458_int = 524959; // 0x6ce PushI
	var_459_int = 26296; // 0x6cf PushI
	var_460_int = 26295; // 0x6d0 PushI
	AddReply(var_458_int, var_459_int, var_460_int); // 0x6d1 TObjFunc
	var_461_int = 524967; // 0x6d3 PushI
	var_462_int = 26298; // 0x6d4 PushI
	var_463_int = 26303; // 0x6d5 PushI
	AddReply(var_461_int, var_462_int, var_463_int); // 0x6d6 TObjFunc
	return 0; // 0x6d8 Return
	
Label_1753:
	var_464_int = 26296; // 0x6d9 PushI
	var_465_bool = var_56_bool == var_464_int; // 0x6da Eq
	if(var_465_bool == 0) goto Label_1771; // 0x6db JumpB
	var_466_string = ""; // 0x6dc PushV
	var_466_string = "Rage"; // 0x6dd MovS
	func_1028(var_57_cvector, var_466_string); // 0x6de NEW_2
	var_467_int = 524960; // 0x6e0 PushI
	SetMessage(var_467_int); // 0x6e1 TObjFunc
	ClearReplies(); // 0x6e3 TObjFunc
	var_468_int = 524961; // 0x6e5 PushI
	var_469_int = 26298; // 0x6e6 PushI
	var_470_int = 26297; // 0x6e7 PushI
	AddReply(var_468_int, var_469_int, var_470_int); // 0x6e8 TObjFunc
	return 0; // 0x6ea Return
	
Label_1771:
	var_471_int = 26298; // 0x6eb PushI
	var_472_bool = var_56_bool == var_471_int; // 0x6ec Eq
	if(var_472_bool == 0) goto Label_1794; // 0x6ed JumpB
	var_473_string = ""; // 0x6ee PushV
	var_473_string = "Neutral"; // 0x6ef MovS
	func_1028(var_57_cvector, var_473_string); // 0x6f0 NEW_2
	var_474_int = 524962; // 0x6f2 PushI
	SetMessage(var_474_int); // 0x6f3 TObjFunc
	ClearReplies(); // 0x6f5 TObjFunc
	var_475_int = 524963; // 0x6f7 PushI
	var_476_int = 26283; // 0x6f8 PushI
	var_477_int = 26299; // 0x6f9 PushI
	AddReply(var_475_int, var_476_int, var_477_int); // 0x6fa TObjFunc
	var_478_int = 524964; // 0x6fc PushI
	var_479_int = 26283; // 0x6fd PushI
	var_480_int = 26300; // 0x6fe PushI
	AddReply(var_478_int, var_479_int, var_480_int); // 0x6ff TObjFunc
	return 0; // 0x701 Return
	
Label_1794:
	var_481_int = 26283; // 0x702 PushI
	var_482_bool = var_56_bool == var_481_int; // 0x703 Eq
	if(var_482_bool == 0) goto Label_1817; // 0x704 JumpB
	var_483_string = ""; // 0x705 PushV
	var_483_string = "Rage"; // 0x706 MovS
	func_1028(var_57_cvector, var_483_string); // 0x707 NEW_2
	var_484_int = 524949; // 0x709 PushI
	SetMessage(var_484_int); // 0x70a TObjFunc
	ClearReplies(); // 0x70c TObjFunc
	var_485_int = 524976; // 0x70e PushI
	var_486_int = 26322; // 0x70f PushI
	var_487_int = 26319; // 0x710 PushI
	AddReply(var_485_int, var_486_int, var_487_int); // 0x711 TObjFunc
	var_488_int = 533663; // 0x713 PushI
	var_489_int = 26329; // 0x714 PushI
	var_490_int = 35194; // 0x715 PushI
	AddReply(var_488_int, var_489_int, var_490_int); // 0x716 TObjFunc
	return 0; // 0x718 Return
	
Label_1817:
	var_491_int = 26322; // 0x719 PushI
	var_492_bool = var_56_bool == var_491_int; // 0x71a Eq
	if(var_492_bool == 0) goto Label_1840; // 0x71b JumpB
	var_493_string = ""; // 0x71c PushV
	var_493_string = "Neutral"; // 0x71d MovS
	func_1028(var_57_cvector, var_493_string); // 0x71e NEW_2
	var_494_int = 524979; // 0x720 PushI
	SetMessage(var_494_int); // 0x721 TObjFunc
	ClearReplies(); // 0x723 TObjFunc
	var_495_int = 524981; // 0x725 PushI
	var_496_int = 26326; // 0x726 PushI
	var_497_int = 26325; // 0x727 PushI
	AddReply(var_495_int, var_496_int, var_497_int); // 0x728 TObjFunc
	var_498_int = 524992; // 0x72a PushI
	var_499_int = 26339; // 0x72b PushI
	var_500_int = 26338; // 0x72c PushI
	AddReply(var_498_int, var_499_int, var_500_int); // 0x72d TObjFunc
	return 0; // 0x72f Return
	
Label_1840:
	var_501_int = 26339; // 0x730 PushI
	var_502_bool = var_56_bool == var_501_int; // 0x731 Eq
	if(var_502_bool == 0) goto Label_1858; // 0x732 JumpB
	var_503_string = ""; // 0x733 PushV
	var_503_string = "Neutral"; // 0x734 MovS
	func_1028(var_57_cvector, var_503_string); // 0x735 NEW_2
	var_504_int = 524993; // 0x737 PushI
	SetMessage(var_504_int); // 0x738 TObjFunc
	ClearReplies(); // 0x73a TObjFunc
	var_505_int = 524994; // 0x73c PushI
	var_506_int = 26326; // 0x73d PushI
	var_507_int = 26340; // 0x73e PushI
	AddReply(var_505_int, var_506_int, var_507_int); // 0x73f TObjFunc
	return 0; // 0x741 Return
	
Label_1858:
	var_508_int = 26326; // 0x742 PushI
	var_509_bool = var_56_bool == var_508_int; // 0x743 Eq
	if(var_509_bool == 0) goto Label_1881; // 0x744 JumpB
	var_510_string = ""; // 0x745 PushV
	var_510_string = "Mysterious"; // 0x746 MovS
	func_1028(var_57_cvector, var_510_string); // 0x747 NEW_2
	var_511_int = 524982; // 0x749 PushI
	SetMessage(var_511_int); // 0x74a TObjFunc
	ClearReplies(); // 0x74c TObjFunc
	var_512_int = 524984; // 0x74e PushI
	var_513_int = 26329; // 0x74f PushI
	var_514_int = 26328; // 0x750 PushI
	AddReply(var_512_int, var_513_int, var_514_int); // 0x751 TObjFunc
	var_515_int = 524990; // 0x753 PushI
	var_516_int = 26329; // 0x754 PushI
	var_517_int = 26335; // 0x755 PushI
	AddReply(var_515_int, var_516_int, var_517_int); // 0x756 TObjFunc
	return 0; // 0x758 Return
	
Label_1881:
	var_518_int = 26329; // 0x759 PushI
	var_519_bool = var_56_bool == var_518_int; // 0x75a Eq
	if(var_519_bool == 0) goto Label_1904; // 0x75b JumpB
	var_520_string = ""; // 0x75c PushV
	var_520_string = "Mysterious"; // 0x75d MovS
	func_1028(var_57_cvector, var_520_string); // 0x75e NEW_2
	var_521_int = 524985; // 0x760 PushI
	SetMessage(var_521_int); // 0x761 TObjFunc
	ClearReplies(); // 0x763 TObjFunc
	var_522_int = 524987; // 0x765 PushI
	var_523_int = 26332; // 0x766 PushI
	var_524_int = 26331; // 0x767 PushI
	AddReply(var_522_int, var_523_int, var_524_int); // 0x768 TObjFunc
	var_525_int = 524986; // 0x76a PushI
	var_526_int = 26332; // 0x76b PushI
	var_527_int = 26330; // 0x76c PushI
	AddReply(var_525_int, var_526_int, var_527_int); // 0x76d TObjFunc
	return 0; // 0x76f Return
	
Label_1904:
	var_528_int = 26332; // 0x770 PushI
	var_529_bool = var_56_bool == var_528_int; // 0x771 Eq
	if(var_529_bool == 0) goto Label_1937; // 0x772 JumpB
	var_530_string = ""; // 0x773 PushV
	var_530_string = "Neutral"; // 0x774 MovS
	func_1028(var_57_cvector, var_530_string); // 0x775 NEW_2
	var_531_int = 524988; // 0x777 PushI
	SetMessage(var_531_int); // 0x778 TObjFunc
	ClearReplies(); // 0x77a TObjFunc
	var_532_int = 524983; // 0x77c PushI
	var_533_int = -1; // 0x77d PushI
	var_534_int = 26327; // 0x77e PushI
	AddReply(var_532_int, var_533_int, var_534_int); // 0x77f TObjFunc
	var_535_int = 524996; // 0x781 PushI
	var_536_int = 26344; // 0x782 PushI
	var_537_int = 26343; // 0x783 PushI
	AddReply(var_535_int, var_536_int, var_537_int); // 0x784 TObjFunc
	var_538_int = 524989; // 0x786 PushI
	var_539_int = -1; // 0x787 PushI
	var_540_int = 26333; // 0x788 PushI
	AddReply(var_538_int, var_539_int, var_540_int); // 0x789 TObjFunc
	var_541_int = 524991; // 0x78b PushI
	var_542_int = -1; // 0x78c PushI
	var_543_int = 26337; // 0x78d PushI
	AddReply(var_541_int, var_542_int, var_543_int); // 0x78e TObjFunc
	return 0; // 0x790 Return
	
Label_1937:
	var_544_int = 26344; // 0x791 PushI
	var_545_bool = var_56_bool == var_544_int; // 0x792 Eq
	if(var_545_bool == 0) goto Label_1960; // 0x793 JumpB
	var_546_string = ""; // 0x794 PushV
	var_546_string = "Neutral"; // 0x795 MovS
	func_1028(var_57_cvector, var_546_string); // 0x796 NEW_2
	var_547_int = 524997; // 0x798 PushI
	SetMessage(var_547_int); // 0x799 TObjFunc
	ClearReplies(); // 0x79b TObjFunc
	var_548_int = 524998; // 0x79d PushI
	var_549_int = -1; // 0x79e PushI
	var_550_int = 26345; // 0x79f PushI
	AddReply(var_548_int, var_549_int, var_550_int); // 0x7a0 TObjFunc
	var_551_int = 524999; // 0x7a2 PushI
	var_552_int = -1; // 0x7a3 PushI
	var_553_int = 26346; // 0x7a4 PushI
	AddReply(var_551_int, var_552_int, var_553_int); // 0x7a5 TObjFunc
	return 0; // 0x7a7 Return
	
Label_1960:
	var_554_int = 6926; // 0x7a8 PushI
	var_555_bool = var_56_bool == var_554_int; // 0x7a9 Eq
	if(var_555_bool == 0) goto Label_1978; // 0x7aa JumpB
	var_556_string = ""; // 0x7ab PushV
	var_556_string = "Staring"; // 0x7ac MovS
	func_1028(var_57_cvector, var_556_string); // 0x7ad NEW_2
	var_557_int = 506260; // 0x7af PushI
	SetMessage(var_557_int); // 0x7b0 TObjFunc
	ClearReplies(); // 0x7b2 TObjFunc
	var_558_int = 506261; // 0x7b4 PushI
	var_559_int = 6924; // 0x7b5 PushI
	var_560_int = 6927; // 0x7b6 PushI
	AddReply(var_558_int, var_559_int, var_560_int); // 0x7b7 TObjFunc
	return 0; // 0x7b9 Return
	
Label_1978:
	var_561_int = 6921; // 0x7ba PushI
	var_562_bool = var_56_bool == var_561_int; // 0x7bb Eq
	if(var_562_bool == 0) goto Label_2001; // 0x7bc JumpB
	var_563_string = ""; // 0x7bd PushV
	var_563_string = "Staring"; // 0x7be MovS
	func_1028(var_57_cvector, var_563_string); // 0x7bf NEW_2
	var_564_int = 506255; // 0x7c1 PushI
	SetMessage(var_564_int); // 0x7c2 TObjFunc
	ClearReplies(); // 0x7c4 TObjFunc
	var_565_int = 506256; // 0x7c6 PushI
	var_566_int = -1; // 0x7c7 PushI
	var_567_int = 6922; // 0x7c8 PushI
	AddReply(var_565_int, var_566_int, var_567_int); // 0x7c9 TObjFunc
	var_568_int = 506257; // 0x7cb PushI
	var_569_int = 6924; // 0x7cc PushI
	var_570_int = 6923; // 0x7cd PushI
	AddReply(var_568_int, var_569_int, var_570_int); // 0x7ce TObjFunc
	return 0; // 0x7d0 Return
	
Label_2001:
	var_571_int = 6924; // 0x7d1 PushI
	var_572_bool = var_56_bool == var_571_int; // 0x7d2 Eq
	if(var_572_bool == 0) goto Label_2019; // 0x7d3 JumpB
	var_573_string = ""; // 0x7d4 PushV
	var_573_string = "Neutral"; // 0x7d5 MovS
	func_1028(var_57_cvector, var_573_string); // 0x7d6 NEW_2
	var_574_int = 506258; // 0x7d8 PushI
	SetMessage(var_574_int); // 0x7d9 TObjFunc
	ClearReplies(); // 0x7db TObjFunc
	var_575_int = 506262; // 0x7dd PushI
	var_576_int = -1; // 0x7de PushI
	var_577_int = 6929; // 0x7df PushI
	AddReply(var_575_int, var_576_int, var_577_int); // 0x7e0 TObjFunc
	return 0; // 0x7e2 Return
	
Label_2019:
	var_3_string = 1; // 0x7e3 TMovB
	var_578_bool = 0; // 0x7e4 PushV
	func_6611(var_578_bool); // 0x7e5 NEW_2
	if(var_578_bool == 0) goto Label_2027; // 0x7e7 JumpB
	lshStopAnimation(); // 0x7e8 Func
	goto Label_2029; // 0x7ea Jump
	
Label_2029:
	return 0; // 0x7ed Return
	
Label_2027:
	StopAnimation(); // 0x7eb Func
	
Label_2031:
	return 0; // 0x7ef Return
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_cvector)
{
	var_58_int = 1; // 0x8b3 PushI
	if(var_58_int == 0) goto Label_2654; // 0x8b4 JumpB
	func_6488(); // 0x8b6 NEW_2
	var_60_int = 7594; // 0x8b8 PushI
	var_61_bool = var_57_cvector == var_60_int; // 0x8b9 Eq
	if(var_61_bool == 0) goto Label_2240; // 0x8ba JumpB
	var_62_object = Obj(); var_63_object = Obj(); // 0x8bb PushV
	var_62_object = var_1_object; // 0x8bc MovT
	var_63_object = var_0_object; // 0x8bd MovT
	func_6709(); // 0x8be NEW_2
	
Label_2240:
	var_66_int = 8183; // 0x8c0 PushI
	var_67_bool = var_57_cvector == var_66_int; // 0x8c1 Eq
	if(var_67_bool == 0) goto Label_2248; // 0x8c2 JumpB
	var_68_object = Obj(); var_69_object = Obj(); // 0x8c3 PushV
	var_68_object = var_1_object; // 0x8c4 MovT
	var_69_object = var_0_object; // 0x8c5 MovT
	func_6721(); // 0x8c6 NEW_2
	
Label_2248:
	var_111_int = 8187; // 0x8c8 PushI
	var_112_bool = var_57_cvector == var_111_int; // 0x8c9 Eq
	if(var_112_bool == 0) goto Label_2256; // 0x8ca JumpB
	var_113_object = Obj(); var_114_object = Obj(); // 0x8cb PushV
	var_113_object = var_1_object; // 0x8cc MovT
	var_114_object = var_0_object; // 0x8cd MovT
	func_6699(); // 0x8ce NEW_2
	
Label_2256:
	var_129_int = 8171; // 0x8d0 PushI
	var_130_bool = var_57_cvector == var_129_int; // 0x8d1 Eq
	if(var_130_bool == 0) goto Label_2279; // 0x8d2 JumpB
	var_131_object = Obj(); var_132_object = Obj(); // 0x8d3 PushV
	var_131_object = var_1_object; // 0x8d4 MovT
	var_132_object = var_0_object; // 0x8d5 MovT
	func_6715(); // 0x8d6 NEW_2
	var_135_object = Obj(); var_136_object = Obj(); // 0x8d8 PushV
	var_135_object = var_1_object; // 0x8d9 MovT
	var_136_object = var_0_object; // 0x8da MovT
	func_6744(); // 0x8db NEW_2
	var_139_object = Obj(); var_140_object = Obj(); // 0x8dd PushV
	var_139_object = var_1_object; // 0x8de MovT
	var_140_object = var_0_object; // 0x8df MovT
	func_6654(); // 0x8e0 NEW_2
	var_143_object = Obj(); var_144_object = Obj(); // 0x8e2 PushV
	var_143_object = var_1_object; // 0x8e3 MovT
	var_144_object = var_0_object; // 0x8e4 MovT
	func_6644(var_144_object); // 0x8e5 NEW_2
	
Label_2279:
	var_164_int = 8170; // 0x8e7 PushI
	var_165_bool = var_57_cvector == var_164_int; // 0x8e8 Eq
	if(var_165_bool == 0) goto Label_2297; // 0x8e9 JumpB
	var_166_object = Obj(); var_167_object = Obj(); // 0x8ea PushV
	var_166_object = var_1_object; // 0x8eb MovT
	var_167_object = var_0_object; // 0x8ec MovT
	func_6715(); // 0x8ed NEW_2
	var_168_object = Obj(); var_169_object = Obj(); // 0x8ef PushV
	var_168_object = var_1_object; // 0x8f0 MovT
	var_169_object = var_0_object; // 0x8f1 MovT
	func_6654(); // 0x8f2 NEW_2
	var_170_object = Obj(); var_171_object = Obj(); // 0x8f4 PushV
	var_170_object = var_1_object; // 0x8f5 MovT
	var_171_object = var_0_object; // 0x8f6 MovT
	func_6644(var_171_object); // 0x8f7 NEW_2
	
Label_2297:
	var_172_int = 7593; // 0x8f9 PushI
	var_173_bool = var_56_bool == var_172_int; // 0x8fa Eq
	if(var_173_bool == 0) goto Label_2353; // 0x8fb JumpB
	var_174_string = ""; // 0x8fc PushV
	var_174_string = "Staring"; // 0x8fd MovS
	func_2204(var_57_cvector, var_174_string); // 0x8fe NEW_2
	var_191_int = 506887; // 0x900 PushI
	SetMessage(var_191_int); // 0x901 TObjFunc
	ClearReplies(); // 0x903 TObjFunc
	var_192_bool = 0; // 0x905 PushV
	var_192_bool = 0; // 0x906 MovB
	var_193_bool = 0; var_194_object = Obj(); // 0x907 PushV
	var_194_object = var_1_object; // 0x908 MovT
	func_6980(var_194_object); // 0x909 NEW_2
	if(var_193_bool == 0) goto Label_2322; // 0x90b JumpB
	var_201_bool = 0; var_202_object = Obj(); // 0x90c PushV
	var_202_object = var_1_object; // 0x90d MovT
	func_7004(var_202_object); // 0x90e NEW_2
	if(var_201_bool == 0) goto Label_2322; // 0x910 JumpB
	var_192_bool = 1; // 0x911 MovB
	
Label_2322:
	if(var_192_bool == 0) goto Label_2328; // 0x912 JumpB
	var_207_int = 506888; // 0x913 PushI
	var_208_int = 7595; // 0x914 PushI
	var_209_int = 7594; // 0x915 PushI
	AddReply(var_207_int, var_208_int, var_209_int); // 0x916 TObjFunc
	
Label_2328:
	var_210_bool = 0; // 0x918 PushV
	var_210_bool = 0; // 0x919 MovB
	var_211_bool = 0; var_212_object = Obj(); // 0x91a PushV
	var_212_object = var_1_object; // 0x91b MovT
	func_6992(var_212_object); // 0x91c NEW_2
	if(var_211_bool == 0) goto Label_2341; // 0x91e JumpB
	var_217_bool = 0; var_218_object = Obj(); // 0x91f PushV
	var_218_object = var_1_object; // 0x920 MovT
	func_7016(var_218_object); // 0x921 NEW_2
	if(var_217_bool == 0) goto Label_2341; // 0x923 JumpB
	var_210_bool = 1; // 0x924 MovB
	
Label_2341:
	if(var_210_bool == 0) goto Label_2347; // 0x925 JumpB
	var_223_int = 506918; // 0x926 PushI
	var_224_int = 7625; // 0x927 PushI
	var_225_int = 7624; // 0x928 PushI
	AddReply(var_223_int, var_224_int, var_225_int); // 0x929 TObjFunc
	
Label_2347:
	var_226_int = 507400; // 0x92b PushI
	var_227_int = -1; // 0x92c PushI
	var_228_int = 8166; // 0x92d PushI
	AddReply(var_226_int, var_227_int, var_228_int); // 0x92e TObjFunc
	return 0; // 0x930 Return
	
Label_2353:
	var_229_int = 7625; // 0x931 PushI
	var_230_bool = var_56_bool == var_229_int; // 0x932 Eq
	if(var_230_bool == 0) goto Label_2371; // 0x933 JumpB
	var_231_string = ""; // 0x934 PushV
	var_231_string = "Staring"; // 0x935 MovS
	func_2204(var_57_cvector, var_231_string); // 0x936 NEW_2
	var_232_int = 506919; // 0x938 PushI
	SetMessage(var_232_int); // 0x939 TObjFunc
	ClearReplies(); // 0x93b TObjFunc
	var_233_int = 507401; // 0x93d PushI
	var_234_int = 8168; // 0x93e PushI
	var_235_int = 8167; // 0x93f PushI
	AddReply(var_233_int, var_234_int, var_235_int); // 0x940 TObjFunc
	return 0; // 0x942 Return
	
Label_2371:
	var_236_int = 8168; // 0x943 PushI
	var_237_bool = var_56_bool == var_236_int; // 0x944 Eq
	if(var_237_bool == 0) goto Label_2399; // 0x945 JumpB
	var_238_string = ""; // 0x946 PushV
	var_238_string = "Neutral"; // 0x947 MovS
	func_2204(var_57_cvector, var_238_string); // 0x948 NEW_2
	var_239_int = 507402; // 0x94a PushI
	SetMessage(var_239_int); // 0x94b TObjFunc
	ClearReplies(); // 0x94d TObjFunc
	var_240_bool = 0; var_241_object = Obj(); // 0x94f PushV
	var_241_object = var_1_object; // 0x950 MovT
	func_7112(var_241_object); // 0x951 NEW_2
	if(var_240_bool == 0) goto Label_2393; // 0x953 JumpB
	var_246_int = 506920; // 0x954 PushI
	var_247_int = 7628; // 0x955 PushI
	var_248_int = 7626; // 0x956 PushI
	AddReply(var_246_int, var_247_int, var_248_int); // 0x957 TObjFunc
	
Label_2393:
	var_249_int = 506921; // 0x959 PushI
	var_250_int = 8169; // 0x95a PushI
	var_251_int = 7627; // 0x95b PushI
	AddReply(var_249_int, var_250_int, var_251_int); // 0x95c TObjFunc
	return 0; // 0x95e Return
	
Label_2399:
	var_252_int = 8169; // 0x95f PushI
	var_253_bool = var_56_bool == var_252_int; // 0x960 Eq
	if(var_253_bool == 0) goto Label_2417; // 0x961 JumpB
	var_254_string = ""; // 0x962 PushV
	var_254_string = "Neutral"; // 0x963 MovS
	func_2204(var_57_cvector, var_254_string); // 0x964 NEW_2
	var_255_int = 507403; // 0x966 PushI
	SetMessage(var_255_int); // 0x967 TObjFunc
	ClearReplies(); // 0x969 TObjFunc
	var_256_int = 507404; // 0x96b PushI
	var_257_int = -1; // 0x96c PushI
	var_258_int = 8170; // 0x96d PushI
	AddReply(var_256_int, var_257_int, var_258_int); // 0x96e TObjFunc
	return 0; // 0x970 Return
	
Label_2417:
	var_259_int = 7628; // 0x971 PushI
	var_260_bool = var_56_bool == var_259_int; // 0x972 Eq
	if(var_260_bool == 0) goto Label_2435; // 0x973 JumpB
	var_261_string = ""; // 0x974 PushV
	var_261_string = "Neutral"; // 0x975 MovS
	func_2204(var_57_cvector, var_261_string); // 0x976 NEW_2
	var_262_int = 506922; // 0x978 PushI
	SetMessage(var_262_int); // 0x979 TObjFunc
	ClearReplies(); // 0x97b TObjFunc
	var_263_int = 507405; // 0x97d PushI
	var_264_int = -1; // 0x97e PushI
	var_265_int = 8171; // 0x97f PushI
	AddReply(var_263_int, var_264_int, var_265_int); // 0x980 TObjFunc
	return 0; // 0x982 Return
	
Label_2435:
	var_266_int = 7595; // 0x983 PushI
	var_267_bool = var_56_bool == var_266_int; // 0x984 Eq
	if(var_267_bool == 0) goto Label_2458; // 0x985 JumpB
	var_268_string = ""; // 0x986 PushV
	var_268_string = "Staring"; // 0x987 MovS
	func_2204(var_57_cvector, var_268_string); // 0x988 NEW_2
	var_269_int = 506889; // 0x98a PushI
	SetMessage(var_269_int); // 0x98b TObjFunc
	ClearReplies(); // 0x98d TObjFunc
	var_270_int = 507406; // 0x98f PushI
	var_271_int = 35516; // 0x990 PushI
	var_272_int = 8172; // 0x991 PushI
	AddReply(var_270_int, var_271_int, var_272_int); // 0x992 TObjFunc
	var_273_int = 506890; // 0x994 PushI
	var_274_int = 7597; // 0x995 PushI
	var_275_int = 7596; // 0x996 PushI
	AddReply(var_273_int, var_274_int, var_275_int); // 0x997 TObjFunc
	return 0; // 0x999 Return
	
Label_2458:
	var_276_int = 7597; // 0x99a PushI
	var_277_bool = var_56_bool == var_276_int; // 0x99b Eq
	if(var_277_bool == 0) goto Label_2486; // 0x99c JumpB
	var_278_string = ""; // 0x99d PushV
	var_278_string = "Rage"; // 0x99e MovS
	func_2204(var_57_cvector, var_278_string); // 0x99f NEW_2
	var_279_int = 506891; // 0x9a1 PushI
	SetMessage(var_279_int); // 0x9a2 TObjFunc
	ClearReplies(); // 0x9a4 TObjFunc
	var_280_int = 507407; // 0x9a6 PushI
	var_281_int = 8184; // 0x9a7 PushI
	var_282_int = 8173; // 0x9a8 PushI
	AddReply(var_280_int, var_281_int, var_282_int); // 0x9a9 TObjFunc
	var_283_int = 507417; // 0x9ab PushI
	var_284_int = 8184; // 0x9ac PushI
	var_285_int = 8185; // 0x9ad PushI
	AddReply(var_283_int, var_284_int, var_285_int); // 0x9ae TObjFunc
	var_286_int = 533958; // 0x9b0 PushI
	var_287_int = 8182; // 0x9b1 PushI
	var_288_int = 35524; // 0x9b2 PushI
	AddReply(var_286_int, var_287_int, var_288_int); // 0x9b3 TObjFunc
	return 0; // 0x9b5 Return
	
Label_2486:
	var_289_int = 8184; // 0x9b6 PushI
	var_290_bool = var_56_bool == var_289_int; // 0x9b7 Eq
	if(var_290_bool == 0) goto Label_2504; // 0x9b8 JumpB
	var_291_string = ""; // 0x9b9 PushV
	var_291_string = "Rage"; // 0x9ba MovS
	func_2204(var_57_cvector, var_291_string); // 0x9bb NEW_2
	var_292_int = 507416; // 0x9bd PushI
	SetMessage(var_292_int); // 0x9be TObjFunc
	ClearReplies(); // 0x9c0 TObjFunc
	var_293_int = 507418; // 0x9c2 PushI
	var_294_int = -1; // 0x9c3 PushI
	var_295_int = 8187; // 0x9c4 PushI
	AddReply(var_293_int, var_294_int, var_295_int); // 0x9c5 TObjFunc
	return 0; // 0x9c7 Return
	
Label_2504:
	var_296_int = 35516; // 0x9c8 PushI
	var_297_bool = var_56_bool == var_296_int; // 0x9c9 Eq
	if(var_297_bool == 0) goto Label_2527; // 0x9ca JumpB
	var_298_string = ""; // 0x9cb PushV
	var_298_string = "Staring"; // 0x9cc MovS
	func_2204(var_57_cvector, var_298_string); // 0x9cd NEW_2
	var_299_int = 533952; // 0x9cf PushI
	SetMessage(var_299_int); // 0x9d0 TObjFunc
	ClearReplies(); // 0x9d2 TObjFunc
	var_300_int = 533953; // 0x9d4 PushI
	var_301_int = 8174; // 0x9d5 PushI
	var_302_int = 35517; // 0x9d6 PushI
	AddReply(var_300_int, var_301_int, var_302_int); // 0x9d7 TObjFunc
	var_303_int = 533954; // 0x9d9 PushI
	var_304_int = 35519; // 0x9da PushI
	var_305_int = 35518; // 0x9db PushI
	AddReply(var_303_int, var_304_int, var_305_int); // 0x9dc TObjFunc
	return 0; // 0x9de Return
	
Label_2527:
	var_306_int = 35519; // 0x9df PushI
	var_307_bool = var_56_bool == var_306_int; // 0x9e0 Eq
	if(var_307_bool == 0) goto Label_2550; // 0x9e1 JumpB
	var_308_string = ""; // 0x9e2 PushV
	var_308_string = "Neutral"; // 0x9e3 MovS
	func_2204(var_57_cvector, var_308_string); // 0x9e4 NEW_2
	var_309_int = 533955; // 0x9e6 PushI
	SetMessage(var_309_int); // 0x9e7 TObjFunc
	ClearReplies(); // 0x9e9 TObjFunc
	var_310_int = 533956; // 0x9eb PushI
	var_311_int = 8182; // 0x9ec PushI
	var_312_int = 35520; // 0x9ed PushI
	AddReply(var_310_int, var_311_int, var_312_int); // 0x9ee TObjFunc
	var_313_int = 534427; // 0x9f0 PushI
	var_314_int = 8182; // 0x9f1 PushI
	var_315_int = 36054; // 0x9f2 PushI
	AddReply(var_313_int, var_314_int, var_315_int); // 0x9f3 TObjFunc
	return 0; // 0x9f5 Return
	
Label_2550:
	var_316_int = 8174; // 0x9f6 PushI
	var_317_bool = var_56_bool == var_316_int; // 0x9f7 Eq
	if(var_317_bool == 0) goto Label_2578; // 0x9f8 JumpB
	var_318_string = ""; // 0x9f9 PushV
	var_318_string = "Neutral"; // 0x9fa MovS
	func_2204(var_57_cvector, var_318_string); // 0x9fb NEW_2
	var_319_int = 507408; // 0x9fd PushI
	SetMessage(var_319_int); // 0x9fe TObjFunc
	ClearReplies(); // 0xa00 TObjFunc
	var_320_int = 507409; // 0xa02 PushI
	var_321_int = 8178; // 0xa03 PushI
	var_322_int = 8175; // 0xa04 PushI
	AddReply(var_320_int, var_321_int, var_322_int); // 0xa05 TObjFunc
	var_323_int = 507410; // 0xa07 PushI
	var_324_int = 8178; // 0xa08 PushI
	var_325_int = 8176; // 0xa09 PushI
	AddReply(var_323_int, var_324_int, var_325_int); // 0xa0a TObjFunc
	var_326_int = 507411; // 0xa0c PushI
	var_327_int = 8178; // 0xa0d PushI
	var_328_int = 8177; // 0xa0e PushI
	AddReply(var_326_int, var_327_int, var_328_int); // 0xa0f TObjFunc
	return 0; // 0xa11 Return
	
Label_2578:
	var_329_int = 8178; // 0xa12 PushI
	var_330_bool = var_56_bool == var_329_int; // 0xa13 Eq
	if(var_330_bool == 0) goto Label_2601; // 0xa14 JumpB
	var_331_string = ""; // 0xa15 PushV
	var_331_string = "Neutral"; // 0xa16 MovS
	func_2204(var_57_cvector, var_331_string); // 0xa17 NEW_2
	var_332_int = 507412; // 0xa19 PushI
	SetMessage(var_332_int); // 0xa1a TObjFunc
	ClearReplies(); // 0xa1c TObjFunc
	var_333_int = 507413; // 0xa1e PushI
	var_334_int = 8182; // 0xa1f PushI
	var_335_int = 8181; // 0xa20 PushI
	AddReply(var_333_int, var_334_int, var_335_int); // 0xa21 TObjFunc
	var_336_int = 534430; // 0xa23 PushI
	var_337_int = 36051; // 0xa24 PushI
	var_338_int = 36059; // 0xa25 PushI
	AddReply(var_336_int, var_337_int, var_338_int); // 0xa26 TObjFunc
	return 0; // 0xa28 Return
	
Label_2601:
	var_339_int = 8182; // 0xa29 PushI
	var_340_bool = var_56_bool == var_339_int; // 0xa2a Eq
	if(var_340_bool == 0) goto Label_2624; // 0xa2b JumpB
	var_341_string = ""; // 0xa2c PushV
	var_341_string = "Staring"; // 0xa2d MovS
	func_2204(var_57_cvector, var_341_string); // 0xa2e NEW_2
	var_342_int = 507414; // 0xa30 PushI
	SetMessage(var_342_int); // 0xa31 TObjFunc
	ClearReplies(); // 0xa33 TObjFunc
	var_343_int = 534424; // 0xa35 PushI
	var_344_int = 36051; // 0xa36 PushI
	var_345_int = 36050; // 0xa37 PushI
	AddReply(var_343_int, var_344_int, var_345_int); // 0xa38 TObjFunc
	var_346_int = 534426; // 0xa3a PushI
	var_347_int = 36051; // 0xa3b PushI
	var_348_int = 36052; // 0xa3c PushI
	AddReply(var_346_int, var_347_int, var_348_int); // 0xa3d TObjFunc
	return 0; // 0xa3f Return
	
Label_2624:
	var_349_int = 36051; // 0xa40 PushI
	var_350_bool = var_56_bool == var_349_int; // 0xa41 Eq
	if(var_350_bool == 0) goto Label_2642; // 0xa42 JumpB
	var_351_string = ""; // 0xa43 PushV
	var_351_string = "Mysterious"; // 0xa44 MovS
	func_2204(var_57_cvector, var_351_string); // 0xa45 NEW_2
	var_352_int = 534425; // 0xa47 PushI
	SetMessage(var_352_int); // 0xa48 TObjFunc
	ClearReplies(); // 0xa4a TObjFunc
	var_353_int = 507415; // 0xa4c PushI
	var_354_int = -1; // 0xa4d PushI
	var_355_int = 8183; // 0xa4e PushI
	AddReply(var_353_int, var_354_int, var_355_int); // 0xa4f TObjFunc
	return 0; // 0xa51 Return
	
Label_2642:
	var_3_string = 1; // 0xa52 TMovB
	var_356_bool = 0; // 0xa53 PushV
	func_6611(var_356_bool); // 0xa54 NEW_2
	if(var_356_bool == 0) goto Label_2650; // 0xa56 JumpB
	lshStopAnimation(); // 0xa57 Func
	goto Label_2652; // 0xa59 Jump
	
Label_2652:
	return 0; // 0xa5c Return
	
Label_2650:
	StopAnimation(); // 0xa5a Func
	
Label_2654:
	return 0; // 0xa5e Return
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_cvector)
{
	var_58_int = 1; // 0xb22 PushI
	if(var_58_int == 0) goto Label_3272; // 0xb23 JumpB
	func_6488(); // 0xb25 NEW_2
	var_60_int = 11467; // 0xb27 PushI
	var_61_bool = var_57_cvector == var_60_int; // 0xb28 Eq
	if(var_61_bool == 0) goto Label_2863; // 0xb29 JumpB
	var_62_object = Obj(); var_63_object = Obj(); // 0xb2a PushV
	var_62_object = var_1_object; // 0xb2b MovT
	var_63_object = var_0_object; // 0xb2c MovT
	func_6675(); // 0xb2d NEW_2
	
Label_2863:
	var_66_int = 11241; // 0xb2f PushI
	var_67_bool = var_57_cvector == var_66_int; // 0xb30 Eq
	if(var_67_bool == 0) goto Label_2871; // 0xb31 JumpB
	var_68_object = Obj(); var_69_object = Obj(); // 0xb32 PushV
	var_68_object = var_1_object; // 0xb33 MovT
	var_69_object = var_0_object; // 0xb34 MovT
	func_6681(); // 0xb35 NEW_2
	
Label_2871:
	var_72_int = 11240; // 0xb37 PushI
	var_73_bool = var_56_bool == var_72_int; // 0xb38 Eq
	if(var_73_bool == 0) goto Label_2927; // 0xb39 JumpB
	var_74_string = ""; // 0xb3a PushV
	var_74_string = "Mysterious"; // 0xb3b MovS
	func_2827(var_57_cvector, var_74_string); // 0xb3c NEW_2
	var_91_int = 510194; // 0xb3e PushI
	SetMessage(var_91_int); // 0xb3f TObjFunc
	ClearReplies(); // 0xb41 TObjFunc
	var_92_bool = 0; // 0xb43 PushV
	var_92_bool = 0; // 0xb44 MovB
	var_93_bool = 0; var_94_object = Obj(); // 0xb45 PushV
	var_94_object = var_1_object; // 0xb46 MovT
	func_7028(var_94_object); // 0xb47 NEW_2
	if(var_93_bool == 0) goto Label_2896; // 0xb49 JumpB
	var_101_bool = 0; var_102_object = Obj(); // 0xb4a PushV
	var_102_object = var_1_object; // 0xb4b MovT
	func_6932(var_102_object); // 0xb4c NEW_2
	if(var_101_bool == 0) goto Label_2896; // 0xb4e JumpB
	var_92_bool = 1; // 0xb4f MovB
	
Label_2896:
	if(var_92_bool == 0) goto Label_2902; // 0xb50 JumpB
	var_107_int = 510401; // 0xb51 PushI
	var_108_int = 11468; // 0xb52 PushI
	var_109_int = 11467; // 0xb53 PushI
	AddReply(var_107_int, var_108_int, var_109_int); // 0xb54 TObjFunc
	
Label_2902:
	var_110_bool = 0; // 0xb56 PushV
	var_110_bool = 0; // 0xb57 MovB
	var_111_bool = 0; var_112_object = Obj(); // 0xb58 PushV
	var_112_object = var_1_object; // 0xb59 MovT
	func_6920(var_112_object); // 0xb5a NEW_2
	if(var_111_bool == 0) goto Label_2915; // 0xb5c JumpB
	var_117_bool = 0; var_118_object = Obj(); // 0xb5d PushV
	var_118_object = var_1_object; // 0xb5e MovT
	func_6944(var_118_object); // 0xb5f NEW_2
	if(var_117_bool == 0) goto Label_2915; // 0xb61 JumpB
	var_110_bool = 1; // 0xb62 MovB
	
Label_2915:
	if(var_110_bool == 0) goto Label_2921; // 0xb63 JumpB
	var_123_int = 510195; // 0xb64 PushI
	var_124_int = 11242; // 0xb65 PushI
	var_125_int = 11241; // 0xb66 PushI
	AddReply(var_123_int, var_124_int, var_125_int); // 0xb67 TObjFunc
	
Label_2921:
	var_126_int = 534399; // 0xb69 PushI
	var_127_int = -1; // 0xb6a PushI
	var_128_int = 36018; // 0xb6b PushI
	AddReply(var_126_int, var_127_int, var_128_int); // 0xb6c TObjFunc
	return 0; // 0xb6e Return
	
Label_2927:
	var_129_int = 11242; // 0xb6f PushI
	var_130_bool = var_56_bool == var_129_int; // 0xb70 Eq
	if(var_130_bool == 0) goto Label_2945; // 0xb71 JumpB
	var_131_string = ""; // 0xb72 PushV
	var_131_string = "Neutral"; // 0xb73 MovS
	func_2827(var_57_cvector, var_131_string); // 0xb74 NEW_2
	var_132_int = 510196; // 0xb76 PushI
	SetMessage(var_132_int); // 0xb77 TObjFunc
	ClearReplies(); // 0xb79 TObjFunc
	var_133_int = 510197; // 0xb7b PushI
	var_134_int = 11244; // 0xb7c PushI
	var_135_int = 11243; // 0xb7d PushI
	AddReply(var_133_int, var_134_int, var_135_int); // 0xb7e TObjFunc
	return 0; // 0xb80 Return
	
Label_2945:
	var_136_int = 11244; // 0xb81 PushI
	var_137_bool = var_56_bool == var_136_int; // 0xb82 Eq
	if(var_137_bool == 0) goto Label_2968; // 0xb83 JumpB
	var_138_string = ""; // 0xb84 PushV
	var_138_string = "Neutral"; // 0xb85 MovS
	func_2827(var_57_cvector, var_138_string); // 0xb86 NEW_2
	var_139_int = 510198; // 0xb88 PushI
	SetMessage(var_139_int); // 0xb89 TObjFunc
	ClearReplies(); // 0xb8b TObjFunc
	var_140_int = 510199; // 0xb8d PushI
	var_141_int = 36021; // 0xb8e PushI
	var_142_int = 11245; // 0xb8f PushI
	AddReply(var_140_int, var_141_int, var_142_int); // 0xb90 TObjFunc
	var_143_int = 534401; // 0xb92 PushI
	var_144_int = 11246; // 0xb93 PushI
	var_145_int = 36020; // 0xb94 PushI
	AddReply(var_143_int, var_144_int, var_145_int); // 0xb95 TObjFunc
	return 0; // 0xb97 Return
	
Label_2968:
	var_146_int = 11246; // 0xb98 PushI
	var_147_bool = var_56_bool == var_146_int; // 0xb99 Eq
	if(var_147_bool == 0) goto Label_2986; // 0xb9a JumpB
	var_148_string = ""; // 0xb9b PushV
	var_148_string = "Neutral"; // 0xb9c MovS
	func_2827(var_57_cvector, var_148_string); // 0xb9d NEW_2
	var_149_int = 510200; // 0xb9f PushI
	SetMessage(var_149_int); // 0xba0 TObjFunc
	ClearReplies(); // 0xba2 TObjFunc
	var_150_int = 510400; // 0xba4 PushI
	var_151_int = 10992; // 0xba5 PushI
	var_152_int = 11466; // 0xba6 PushI
	AddReply(var_150_int, var_151_int, var_152_int); // 0xba7 TObjFunc
	return 0; // 0xba9 Return
	
Label_2986:
	var_153_int = 10992; // 0xbaa PushI
	var_154_bool = var_56_bool == var_153_int; // 0xbab Eq
	if(var_154_bool == 0) goto Label_3009; // 0xbac JumpB
	var_155_string = ""; // 0xbad PushV
	var_155_string = "Neutral"; // 0xbae MovS
	func_2827(var_57_cvector, var_155_string); // 0xbaf NEW_2
	var_156_int = 509974; // 0xbb1 PushI
	SetMessage(var_156_int); // 0xbb2 TObjFunc
	ClearReplies(); // 0xbb4 TObjFunc
	var_157_int = 509975; // 0xbb6 PushI
	var_158_int = 36019; // 0xbb7 PushI
	var_159_int = 10993; // 0xbb8 PushI
	AddReply(var_157_int, var_158_int, var_159_int); // 0xbb9 TObjFunc
	var_160_int = 509976; // 0xbbb PushI
	var_161_int = -1; // 0xbbc PushI
	var_162_int = 10994; // 0xbbd PushI
	AddReply(var_160_int, var_161_int, var_162_int); // 0xbbe TObjFunc
	return 0; // 0xbc0 Return
	
Label_3009:
	var_163_int = 36019; // 0xbc1 PushI
	var_164_bool = var_56_bool == var_163_int; // 0xbc2 Eq
	if(var_164_bool == 0) goto Label_3027; // 0xbc3 JumpB
	var_165_string = ""; // 0xbc4 PushV
	var_165_string = "Neutral"; // 0xbc5 MovS
	func_2827(var_57_cvector, var_165_string); // 0xbc6 NEW_2
	var_166_int = 534400; // 0xbc8 PushI
	SetMessage(var_166_int); // 0xbc9 TObjFunc
	ClearReplies(); // 0xbcb TObjFunc
	var_167_int = 541611; // 0xbcd PushI
	var_168_int = -1; // 0xbce PushI
	var_169_int = 43782; // 0xbcf PushI
	AddReply(var_167_int, var_168_int, var_169_int); // 0xbd0 TObjFunc
	return 0; // 0xbd2 Return
	
Label_3027:
	var_170_int = 36021; // 0xbd3 PushI
	var_171_bool = var_56_bool == var_170_int; // 0xbd4 Eq
	if(var_171_bool == 0) goto Label_3045; // 0xbd5 JumpB
	var_172_string = ""; // 0xbd6 PushV
	var_172_string = "Angry"; // 0xbd7 MovS
	func_2827(var_57_cvector, var_172_string); // 0xbd8 NEW_2
	var_173_int = 534402; // 0xbda PushI
	SetMessage(var_173_int); // 0xbdb TObjFunc
	ClearReplies(); // 0xbdd TObjFunc
	var_174_int = 534403; // 0xbdf PushI
	var_175_int = -1; // 0xbe0 PushI
	var_176_int = 36022; // 0xbe1 PushI
	AddReply(var_174_int, var_175_int, var_176_int); // 0xbe2 TObjFunc
	return 0; // 0xbe4 Return
	
Label_3045:
	var_177_int = 11468; // 0xbe5 PushI
	var_178_bool = var_56_bool == var_177_int; // 0xbe6 Eq
	if(var_178_bool == 0) goto Label_3068; // 0xbe7 JumpB
	var_179_string = ""; // 0xbe8 PushV
	var_179_string = "Staring"; // 0xbe9 MovS
	func_2827(var_57_cvector, var_179_string); // 0xbea NEW_2
	var_180_int = 510402; // 0xbec PushI
	SetMessage(var_180_int); // 0xbed TObjFunc
	ClearReplies(); // 0xbef TObjFunc
	var_181_int = 510403; // 0xbf1 PushI
	var_182_int = 11470; // 0xbf2 PushI
	var_183_int = 11469; // 0xbf3 PushI
	AddReply(var_181_int, var_182_int, var_183_int); // 0xbf4 TObjFunc
	var_184_int = 510418; // 0xbf6 PushI
	var_185_int = 11472; // 0xbf7 PushI
	var_186_int = 11485; // 0xbf8 PushI
	AddReply(var_184_int, var_185_int, var_186_int); // 0xbf9 TObjFunc
	return 0; // 0xbfb Return
	
Label_3068:
	var_187_int = 11470; // 0xbfc PushI
	var_188_bool = var_56_bool == var_187_int; // 0xbfd Eq
	if(var_188_bool == 0) goto Label_3091; // 0xbfe JumpB
	var_189_string = ""; // 0xbff PushV
	var_189_string = "Staring"; // 0xc00 MovS
	func_2827(var_57_cvector, var_189_string); // 0xc01 NEW_2
	var_190_int = 510404; // 0xc03 PushI
	SetMessage(var_190_int); // 0xc04 TObjFunc
	ClearReplies(); // 0xc06 TObjFunc
	var_191_int = 534404; // 0xc08 PushI
	var_192_int = 36024; // 0xc09 PushI
	var_193_int = 36023; // 0xc0a PushI
	AddReply(var_191_int, var_192_int, var_193_int); // 0xc0b TObjFunc
	var_194_int = 510405; // 0xc0d PushI
	var_195_int = 11472; // 0xc0e PushI
	var_196_int = 11471; // 0xc0f PushI
	AddReply(var_194_int, var_195_int, var_196_int); // 0xc10 TObjFunc
	return 0; // 0xc12 Return
	
Label_3091:
	var_197_int = 11472; // 0xc13 PushI
	var_198_bool = var_56_bool == var_197_int; // 0xc14 Eq
	if(var_198_bool == 0) goto Label_3114; // 0xc15 JumpB
	var_199_string = ""; // 0xc16 PushV
	var_199_string = "Neutral"; // 0xc17 MovS
	func_2827(var_57_cvector, var_199_string); // 0xc18 NEW_2
	var_200_int = 510406; // 0xc1a PushI
	SetMessage(var_200_int); // 0xc1b TObjFunc
	ClearReplies(); // 0xc1d TObjFunc
	var_201_int = 510407; // 0xc1f PushI
	var_202_int = 11474; // 0xc20 PushI
	var_203_int = 11473; // 0xc21 PushI
	AddReply(var_201_int, var_202_int, var_203_int); // 0xc22 TObjFunc
	var_204_int = 510409; // 0xc24 PushI
	var_205_int = 11476; // 0xc25 PushI
	var_206_int = 11475; // 0xc26 PushI
	AddReply(var_204_int, var_205_int, var_206_int); // 0xc27 TObjFunc
	return 0; // 0xc29 Return
	
Label_3114:
	var_207_int = 11476; // 0xc2a PushI
	var_208_bool = var_56_bool == var_207_int; // 0xc2b Eq
	if(var_208_bool == 0) goto Label_3132; // 0xc2c JumpB
	var_209_string = ""; // 0xc2d PushV
	var_209_string = "Neutral"; // 0xc2e MovS
	func_2827(var_57_cvector, var_209_string); // 0xc2f NEW_2
	var_210_int = 510410; // 0xc31 PushI
	SetMessage(var_210_int); // 0xc32 TObjFunc
	ClearReplies(); // 0xc34 TObjFunc
	var_211_int = 510412; // 0xc36 PushI
	var_212_int = 11474; // 0xc37 PushI
	var_213_int = 11478; // 0xc38 PushI
	AddReply(var_211_int, var_212_int, var_213_int); // 0xc39 TObjFunc
	return 0; // 0xc3b Return
	
Label_3132:
	var_214_int = 11474; // 0xc3c PushI
	var_215_bool = var_56_bool == var_214_int; // 0xc3d Eq
	if(var_215_bool == 0) goto Label_3155; // 0xc3e JumpB
	var_216_string = ""; // 0xc3f PushV
	var_216_string = "Rage"; // 0xc40 MovS
	func_2827(var_57_cvector, var_216_string); // 0xc41 NEW_2
	var_217_int = 510408; // 0xc43 PushI
	SetMessage(var_217_int); // 0xc44 TObjFunc
	ClearReplies(); // 0xc46 TObjFunc
	var_218_int = 510411; // 0xc48 PushI
	var_219_int = 11480; // 0xc49 PushI
	var_220_int = 11477; // 0xc4a PushI
	AddReply(var_218_int, var_219_int, var_220_int); // 0xc4b TObjFunc
	var_221_int = 510414; // 0xc4d PushI
	var_222_int = 11482; // 0xc4e PushI
	var_223_int = 11481; // 0xc4f PushI
	AddReply(var_221_int, var_222_int, var_223_int); // 0xc50 TObjFunc
	return 0; // 0xc52 Return
	
Label_3155:
	var_224_int = 11482; // 0xc53 PushI
	var_225_bool = var_56_bool == var_224_int; // 0xc54 Eq
	if(var_225_bool == 0) goto Label_3173; // 0xc55 JumpB
	var_226_string = ""; // 0xc56 PushV
	var_226_string = "Neutral"; // 0xc57 MovS
	func_2827(var_57_cvector, var_226_string); // 0xc58 NEW_2
	var_227_int = 510415; // 0xc5a PushI
	SetMessage(var_227_int); // 0xc5b TObjFunc
	ClearReplies(); // 0xc5d TObjFunc
	var_228_int = 510417; // 0xc5f PushI
	var_229_int = -1; // 0xc60 PushI
	var_230_int = 11484; // 0xc61 PushI
	AddReply(var_228_int, var_229_int, var_230_int); // 0xc62 TObjFunc
	return 0; // 0xc64 Return
	
Label_3173:
	var_231_int = 11480; // 0xc65 PushI
	var_232_bool = var_56_bool == var_231_int; // 0xc66 Eq
	if(var_232_bool == 0) goto Label_3196; // 0xc67 JumpB
	var_233_string = ""; // 0xc68 PushV
	var_233_string = "Neutral"; // 0xc69 MovS
	func_2827(var_57_cvector, var_233_string); // 0xc6a NEW_2
	var_234_int = 510413; // 0xc6c PushI
	SetMessage(var_234_int); // 0xc6d TObjFunc
	ClearReplies(); // 0xc6f TObjFunc
	var_235_int = 510416; // 0xc71 PushI
	var_236_int = -1; // 0xc72 PushI
	var_237_int = 11483; // 0xc73 PushI
	AddReply(var_235_int, var_236_int, var_237_int); // 0xc74 TObjFunc
	var_238_int = 534421; // 0xc76 PushI
	var_239_int = -1; // 0xc77 PushI
	var_240_int = 36048; // 0xc78 PushI
	AddReply(var_238_int, var_239_int, var_240_int); // 0xc79 TObjFunc
	return 0; // 0xc7b Return
	
Label_3196:
	var_241_int = 36024; // 0xc7c PushI
	var_242_bool = var_56_bool == var_241_int; // 0xc7d Eq
	if(var_242_bool == 0) goto Label_3219; // 0xc7e JumpB
	var_243_string = ""; // 0xc7f PushV
	var_243_string = "Neutral"; // 0xc80 MovS
	func_2827(var_57_cvector, var_243_string); // 0xc81 NEW_2
	var_244_int = 534405; // 0xc83 PushI
	SetMessage(var_244_int); // 0xc84 TObjFunc
	ClearReplies(); // 0xc86 TObjFunc
	var_245_int = 534406; // 0xc88 PushI
	var_246_int = 36029; // 0xc89 PushI
	var_247_int = 36025; // 0xc8a PushI
	AddReply(var_245_int, var_246_int, var_247_int); // 0xc8b TObjFunc
	var_248_int = 534407; // 0xc8d PushI
	var_249_int = 36027; // 0xc8e PushI
	var_250_int = 36026; // 0xc8f PushI
	AddReply(var_248_int, var_249_int, var_250_int); // 0xc90 TObjFunc
	return 0; // 0xc92 Return
	
Label_3219:
	var_251_int = 36027; // 0xc93 PushI
	var_252_bool = var_56_bool == var_251_int; // 0xc94 Eq
	if(var_252_bool == 0) goto Label_3237; // 0xc95 JumpB
	var_253_string = ""; // 0xc96 PushV
	var_253_string = "Neutral"; // 0xc97 MovS
	func_2827(var_57_cvector, var_253_string); // 0xc98 NEW_2
	var_254_int = 534408; // 0xc9a PushI
	SetMessage(var_254_int); // 0xc9b TObjFunc
	ClearReplies(); // 0xc9d TObjFunc
	var_255_int = 534409; // 0xc9f PushI
	var_256_int = 11474; // 0xca0 PushI
	var_257_int = 36028; // 0xca1 PushI
	AddReply(var_255_int, var_256_int, var_257_int); // 0xca2 TObjFunc
	return 0; // 0xca4 Return
	
Label_3237:
	var_258_int = 36029; // 0xca5 PushI
	var_259_bool = var_56_bool == var_258_int; // 0xca6 Eq
	if(var_259_bool == 0) goto Label_3260; // 0xca7 JumpB
	var_260_string = ""; // 0xca8 PushV
	var_260_string = "Neutral"; // 0xca9 MovS
	func_2827(var_57_cvector, var_260_string); // 0xcaa NEW_2
	var_261_int = 534410; // 0xcac PushI
	SetMessage(var_261_int); // 0xcad TObjFunc
	ClearReplies(); // 0xcaf TObjFunc
	var_262_int = 534411; // 0xcb1 PushI
	var_263_int = 11474; // 0xcb2 PushI
	var_264_int = 36030; // 0xcb3 PushI
	AddReply(var_262_int, var_263_int, var_264_int); // 0xcb4 TObjFunc
	var_265_int = 534412; // 0xcb6 PushI
	var_266_int = 11474; // 0xcb7 PushI
	var_267_int = 36031; // 0xcb8 PushI
	AddReply(var_265_int, var_266_int, var_267_int); // 0xcb9 TObjFunc
	return 0; // 0xcbb Return
	
Label_3260:
	var_3_string = 1; // 0xcbc TMovB
	var_268_bool = 0; // 0xcbd PushV
	func_6611(var_268_bool); // 0xcbe NEW_2
	if(var_268_bool == 0) goto Label_3268; // 0xcc0 JumpB
	lshStopAnimation(); // 0xcc1 Func
	goto Label_3270; // 0xcc3 Jump
	
Label_3270:
	return 0; // 0xcc6 Return
	
Label_3268:
	StopAnimation(); // 0xcc4 Func
	
Label_3272:
	return 0; // 0xcc8 Return
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_cvector)
{
	var_58_int = 1; // 0xd84 PushI
	if(var_58_int == 0) goto Label_3858; // 0xd85 JumpB
	func_6488(); // 0xd87 NEW_2
	var_60_int = 38005; // 0xd89 PushI
	var_61_bool = var_57_cvector == var_60_int; // 0xd8a Eq
	if(var_61_bool == 0) goto Label_3473; // 0xd8b JumpB
	var_62_object = Obj(); var_63_object = Obj(); // 0xd8c PushV
	var_62_object = var_1_object; // 0xd8d MovT
	var_63_object = var_0_object; // 0xd8e MovT
	func_6687(); // 0xd8f NEW_2
	
Label_3473:
	var_66_int = 38008; // 0xd91 PushI
	var_67_bool = var_57_cvector == var_66_int; // 0xd92 Eq
	if(var_67_bool == 0) goto Label_3481; // 0xd93 JumpB
	var_68_object = Obj(); var_69_object = Obj(); // 0xd94 PushV
	var_68_object = var_1_object; // 0xd95 MovT
	var_69_object = var_0_object; // 0xd96 MovT
	func_6693(); // 0xd97 NEW_2
	
Label_3481:
	var_72_int = 36875; // 0xd99 PushI
	var_73_bool = var_56_bool == var_72_int; // 0xd9a Eq
	if(var_73_bool == 0) goto Label_3529; // 0xd9b JumpB
	var_74_string = ""; // 0xd9c PushV
	var_74_string = "Mysterious"; // 0xd9d MovS
	func_3437(var_57_cvector, var_74_string); // 0xd9e NEW_2
	var_91_int = 535203; // 0xda0 PushI
	SetMessage(var_91_int); // 0xda1 TObjFunc
	ClearReplies(); // 0xda3 TObjFunc
	var_92_bool = 0; var_93_object = Obj(); // 0xda5 PushV
	var_93_object = var_1_object; // 0xda6 MovT
	func_6956(var_93_object); // 0xda7 NEW_2
	if(var_92_bool == 0) goto Label_3503; // 0xda9 JumpB
	var_100_int = 536230; // 0xdaa PushI
	var_101_int = 38006; // 0xdab PushI
	var_102_int = 38005; // 0xdac PushI
	AddReply(var_100_int, var_101_int, var_102_int); // 0xdad TObjFunc
	
Label_3503:
	var_103_bool = 0; // 0xdaf PushV
	var_103_bool = 0; // 0xdb0 MovB
	var_104_bool = 0; var_105_object = Obj(); // 0xdb1 PushV
	var_105_object = var_1_object; // 0xdb2 MovT
	func_6968(var_105_object); // 0xdb3 NEW_2
	if(var_104_bool == 0) goto Label_3517; // 0xdb5 JumpB
	var_110_bool = 0; var_111_object = Obj(); // 0xdb6 PushV
	var_111_object = var_1_object; // 0xdb7 MovT
	func_7040(var_111_object); // 0xdb8 NEW_2
	var_116_bool = var_110_bool == 0; // 0xdba Not
	if(var_116_bool == 0) goto Label_3517; // 0xdbb JumpB
	var_103_bool = 1; // 0xdbc MovB
	
Label_3517:
	if(var_103_bool == 0) goto Label_3523; // 0xdbd JumpB
	var_117_int = 536233; // 0xdbe PushI
	var_118_int = 12417; // 0xdbf PushI
	var_119_int = 38008; // 0xdc0 PushI
	AddReply(var_117_int, var_118_int, var_119_int); // 0xdc1 TObjFunc
	
Label_3523:
	var_120_int = 536232; // 0xdc3 PushI
	var_121_int = -1; // 0xdc4 PushI
	var_122_int = 38007; // 0xdc5 PushI
	AddReply(var_120_int, var_121_int, var_122_int); // 0xdc6 TObjFunc
	return 0; // 0xdc8 Return
	
Label_3529:
	var_123_int = 12417; // 0xdc9 PushI
	var_124_bool = var_56_bool == var_123_int; // 0xdca Eq
	if(var_124_bool == 0) goto Label_3552; // 0xdcb JumpB
	var_125_string = ""; // 0xdcc PushV
	var_125_string = "Rage"; // 0xdcd MovS
	func_3437(var_57_cvector, var_125_string); // 0xdce NEW_2
	var_126_int = 511227; // 0xdd0 PushI
	SetMessage(var_126_int); // 0xdd1 TObjFunc
	ClearReplies(); // 0xdd3 TObjFunc
	var_127_int = 511228; // 0xdd5 PushI
	var_128_int = 12419; // 0xdd6 PushI
	var_129_int = 12418; // 0xdd7 PushI
	AddReply(var_127_int, var_128_int, var_129_int); // 0xdd8 TObjFunc
	var_130_int = 536229; // 0xdda PushI
	var_131_int = 36888; // 0xddb PushI
	var_132_int = 38004; // 0xddc PushI
	AddReply(var_130_int, var_131_int, var_132_int); // 0xddd TObjFunc
	return 0; // 0xddf Return
	
Label_3552:
	var_133_int = 36888; // 0xde0 PushI
	var_134_bool = var_56_bool == var_133_int; // 0xde1 Eq
	if(var_134_bool == 0) goto Label_3575; // 0xde2 JumpB
	var_135_string = ""; // 0xde3 PushV
	var_135_string = "Neutral"; // 0xde4 MovS
	func_3437(var_57_cvector, var_135_string); // 0xde5 NEW_2
	var_136_int = 535214; // 0xde7 PushI
	SetMessage(var_136_int); // 0xde8 TObjFunc
	ClearReplies(); // 0xdea TObjFunc
	var_137_int = 535215; // 0xdec PushI
	var_138_int = 36890; // 0xded PushI
	var_139_int = 36889; // 0xdee PushI
	AddReply(var_137_int, var_138_int, var_139_int); // 0xdef TObjFunc
	var_140_int = 535223; // 0xdf1 PushI
	var_141_int = 36898; // 0xdf2 PushI
	var_142_int = 36897; // 0xdf3 PushI
	AddReply(var_140_int, var_141_int, var_142_int); // 0xdf4 TObjFunc
	return 0; // 0xdf6 Return
	
Label_3575:
	var_143_int = 36898; // 0xdf7 PushI
	var_144_bool = var_56_bool == var_143_int; // 0xdf8 Eq
	if(var_144_bool == 0) goto Label_3598; // 0xdf9 JumpB
	var_145_string = ""; // 0xdfa PushV
	var_145_string = "Mysterious"; // 0xdfb MovS
	func_3437(var_57_cvector, var_145_string); // 0xdfc NEW_2
	var_146_int = 535224; // 0xdfe PushI
	SetMessage(var_146_int); // 0xdff TObjFunc
	ClearReplies(); // 0xe01 TObjFunc
	var_147_int = 535225; // 0xe03 PushI
	var_148_int = 36900; // 0xe04 PushI
	var_149_int = 36899; // 0xe05 PushI
	AddReply(var_147_int, var_148_int, var_149_int); // 0xe06 TObjFunc
	var_150_int = 535228; // 0xe08 PushI
	var_151_int = 36890; // 0xe09 PushI
	var_152_int = 36902; // 0xe0a PushI
	AddReply(var_150_int, var_151_int, var_152_int); // 0xe0b TObjFunc
	return 0; // 0xe0d Return
	
Label_3598:
	var_153_int = 36900; // 0xe0e PushI
	var_154_bool = var_56_bool == var_153_int; // 0xe0f Eq
	if(var_154_bool == 0) goto Label_3616; // 0xe10 JumpB
	var_155_string = ""; // 0xe11 PushV
	var_155_string = "Mysterious"; // 0xe12 MovS
	func_3437(var_57_cvector, var_155_string); // 0xe13 NEW_2
	var_156_int = 535226; // 0xe15 PushI
	SetMessage(var_156_int); // 0xe16 TObjFunc
	ClearReplies(); // 0xe18 TObjFunc
	var_157_int = 535227; // 0xe1a PushI
	var_158_int = -1; // 0xe1b PushI
	var_159_int = 36901; // 0xe1c PushI
	AddReply(var_157_int, var_158_int, var_159_int); // 0xe1d TObjFunc
	return 0; // 0xe1f Return
	
Label_3616:
	var_160_int = 36890; // 0xe20 PushI
	var_161_bool = var_56_bool == var_160_int; // 0xe21 Eq
	if(var_161_bool == 0) goto Label_3639; // 0xe22 JumpB
	var_162_string = ""; // 0xe23 PushV
	var_162_string = "Neutral"; // 0xe24 MovS
	func_3437(var_57_cvector, var_162_string); // 0xe25 NEW_2
	var_163_int = 535216; // 0xe27 PushI
	SetMessage(var_163_int); // 0xe28 TObjFunc
	ClearReplies(); // 0xe2a TObjFunc
	var_164_int = 535217; // 0xe2c PushI
	var_165_int = 36892; // 0xe2d PushI
	var_166_int = 36891; // 0xe2e PushI
	AddReply(var_164_int, var_165_int, var_166_int); // 0xe2f TObjFunc
	var_167_int = 535220; // 0xe31 PushI
	var_168_int = 36895; // 0xe32 PushI
	var_169_int = 36894; // 0xe33 PushI
	AddReply(var_167_int, var_168_int, var_169_int); // 0xe34 TObjFunc
	return 0; // 0xe36 Return
	
Label_3639:
	var_170_int = 36895; // 0xe37 PushI
	var_171_bool = var_56_bool == var_170_int; // 0xe38 Eq
	if(var_171_bool == 0) goto Label_3657; // 0xe39 JumpB
	var_172_string = ""; // 0xe3a PushV
	var_172_string = "Mysterious"; // 0xe3b MovS
	func_3437(var_57_cvector, var_172_string); // 0xe3c NEW_2
	var_173_int = 535221; // 0xe3e PushI
	SetMessage(var_173_int); // 0xe3f TObjFunc
	ClearReplies(); // 0xe41 TObjFunc
	var_174_int = 535222; // 0xe43 PushI
	var_175_int = -1; // 0xe44 PushI
	var_176_int = 36896; // 0xe45 PushI
	AddReply(var_174_int, var_175_int, var_176_int); // 0xe46 TObjFunc
	return 0; // 0xe48 Return
	
Label_3657:
	var_177_int = 36892; // 0xe49 PushI
	var_178_bool = var_56_bool == var_177_int; // 0xe4a Eq
	if(var_178_bool == 0) goto Label_3675; // 0xe4b JumpB
	var_179_string = ""; // 0xe4c PushV
	var_179_string = "Neutral"; // 0xe4d MovS
	func_3437(var_57_cvector, var_179_string); // 0xe4e NEW_2
	var_180_int = 535218; // 0xe50 PushI
	SetMessage(var_180_int); // 0xe51 TObjFunc
	ClearReplies(); // 0xe53 TObjFunc
	var_181_int = 535219; // 0xe55 PushI
	var_182_int = -1; // 0xe56 PushI
	var_183_int = 36893; // 0xe57 PushI
	AddReply(var_181_int, var_182_int, var_183_int); // 0xe58 TObjFunc
	return 0; // 0xe5a Return
	
Label_3675:
	var_184_int = 12419; // 0xe5b PushI
	var_185_bool = var_56_bool == var_184_int; // 0xe5c Eq
	if(var_185_bool == 0) goto Label_3698; // 0xe5d JumpB
	var_186_string = ""; // 0xe5e PushV
	var_186_string = "Rage"; // 0xe5f MovS
	func_3437(var_57_cvector, var_186_string); // 0xe60 NEW_2
	var_187_int = 511229; // 0xe62 PushI
	SetMessage(var_187_int); // 0xe63 TObjFunc
	ClearReplies(); // 0xe65 TObjFunc
	var_188_int = 511230; // 0xe67 PushI
	var_189_int = 12421; // 0xe68 PushI
	var_190_int = 12420; // 0xe69 PushI
	AddReply(var_188_int, var_189_int, var_190_int); // 0xe6a TObjFunc
	var_191_int = 536234; // 0xe6c PushI
	var_192_int = 38010; // 0xe6d PushI
	var_193_int = 38009; // 0xe6e PushI
	AddReply(var_191_int, var_192_int, var_193_int); // 0xe6f TObjFunc
	return 0; // 0xe71 Return
	
Label_3698:
	var_194_int = 38010; // 0xe72 PushI
	var_195_bool = var_56_bool == var_194_int; // 0xe73 Eq
	if(var_195_bool == 0) goto Label_3721; // 0xe74 JumpB
	var_196_string = ""; // 0xe75 PushV
	var_196_string = "Neutral"; // 0xe76 MovS
	func_3437(var_57_cvector, var_196_string); // 0xe77 NEW_2
	var_197_int = 536235; // 0xe79 PushI
	SetMessage(var_197_int); // 0xe7a TObjFunc
	ClearReplies(); // 0xe7c TObjFunc
	var_198_int = 536236; // 0xe7e PushI
	var_199_int = 38012; // 0xe7f PushI
	var_200_int = 38011; // 0xe80 PushI
	AddReply(var_198_int, var_199_int, var_200_int); // 0xe81 TObjFunc
	var_201_int = 536238; // 0xe83 PushI
	var_202_int = 38012; // 0xe84 PushI
	var_203_int = 38013; // 0xe85 PushI
	AddReply(var_201_int, var_202_int, var_203_int); // 0xe86 TObjFunc
	return 0; // 0xe88 Return
	
Label_3721:
	var_204_int = 38012; // 0xe89 PushI
	var_205_bool = var_56_bool == var_204_int; // 0xe8a Eq
	if(var_205_bool == 0) goto Label_3744; // 0xe8b JumpB
	var_206_string = ""; // 0xe8c PushV
	var_206_string = "Neutral"; // 0xe8d MovS
	func_3437(var_57_cvector, var_206_string); // 0xe8e NEW_2
	var_207_int = 536237; // 0xe90 PushI
	SetMessage(var_207_int); // 0xe91 TObjFunc
	ClearReplies(); // 0xe93 TObjFunc
	var_208_int = 536239; // 0xe95 PushI
	var_209_int = -1; // 0xe96 PushI
	var_210_int = 38015; // 0xe97 PushI
	AddReply(var_208_int, var_209_int, var_210_int); // 0xe98 TObjFunc
	var_211_int = 536240; // 0xe9a PushI
	var_212_int = -1; // 0xe9b PushI
	var_213_int = 38016; // 0xe9c PushI
	AddReply(var_211_int, var_212_int, var_213_int); // 0xe9d TObjFunc
	return 0; // 0xe9f Return
	
Label_3744:
	var_214_int = 12421; // 0xea0 PushI
	var_215_bool = var_56_bool == var_214_int; // 0xea1 Eq
	if(var_215_bool == 0) goto Label_3767; // 0xea2 JumpB
	var_216_string = ""; // 0xea3 PushV
	var_216_string = "Neutral"; // 0xea4 MovS
	func_3437(var_57_cvector, var_216_string); // 0xea5 NEW_2
	var_217_int = 511231; // 0xea7 PushI
	SetMessage(var_217_int); // 0xea8 TObjFunc
	ClearReplies(); // 0xeaa TObjFunc
	var_218_int = 511232; // 0xeac PushI
	var_219_int = -1; // 0xead PushI
	var_220_int = 12422; // 0xeae PushI
	AddReply(var_218_int, var_219_int, var_220_int); // 0xeaf TObjFunc
	var_221_int = 536228; // 0xeb1 PushI
	var_222_int = -1; // 0xeb2 PushI
	var_223_int = 38003; // 0xeb3 PushI
	AddReply(var_221_int, var_222_int, var_223_int); // 0xeb4 TObjFunc
	return 0; // 0xeb6 Return
	
Label_3767:
	var_224_int = 38006; // 0xeb7 PushI
	var_225_bool = var_56_bool == var_224_int; // 0xeb8 Eq
	if(var_225_bool == 0) goto Label_3790; // 0xeb9 JumpB
	var_226_string = ""; // 0xeba PushV
	var_226_string = "Mysterious"; // 0xebb MovS
	func_3437(var_57_cvector, var_226_string); // 0xebc NEW_2
	var_227_int = 536231; // 0xebe PushI
	SetMessage(var_227_int); // 0xebf TObjFunc
	ClearReplies(); // 0xec1 TObjFunc
	var_228_int = 535204; // 0xec3 PushI
	var_229_int = 36877; // 0xec4 PushI
	var_230_int = 36876; // 0xec5 PushI
	AddReply(var_228_int, var_229_int, var_230_int); // 0xec6 TObjFunc
	var_231_int = 535213; // 0xec8 PushI
	var_232_int = 36877; // 0xec9 PushI
	var_233_int = 36886; // 0xeca PushI
	AddReply(var_231_int, var_232_int, var_233_int); // 0xecb TObjFunc
	return 0; // 0xecd Return
	
Label_3790:
	var_234_int = 36877; // 0xece PushI
	var_235_bool = var_56_bool == var_234_int; // 0xecf Eq
	if(var_235_bool == 0) goto Label_3818; // 0xed0 JumpB
	var_236_string = ""; // 0xed1 PushV
	var_236_string = "Rage"; // 0xed2 MovS
	func_3437(var_57_cvector, var_236_string); // 0xed3 NEW_2
	var_237_int = 535205; // 0xed5 PushI
	SetMessage(var_237_int); // 0xed6 TObjFunc
	ClearReplies(); // 0xed8 TObjFunc
	var_238_int = 535206; // 0xeda PushI
	var_239_int = 36879; // 0xedb PushI
	var_240_int = 36878; // 0xedc PushI
	AddReply(var_238_int, var_239_int, var_240_int); // 0xedd TObjFunc
	var_241_int = 535211; // 0xedf PushI
	var_242_int = 36879; // 0xee0 PushI
	var_243_int = 36883; // 0xee1 PushI
	AddReply(var_241_int, var_242_int, var_243_int); // 0xee2 TObjFunc
	var_244_int = 535212; // 0xee4 PushI
	var_245_int = -1; // 0xee5 PushI
	var_246_int = 36885; // 0xee6 PushI
	AddReply(var_244_int, var_245_int, var_246_int); // 0xee7 TObjFunc
	return 0; // 0xee9 Return
	
Label_3818:
	var_247_int = 36879; // 0xeea PushI
	var_248_bool = var_56_bool == var_247_int; // 0xeeb Eq
	if(var_248_bool == 0) goto Label_3846; // 0xeec JumpB
	var_249_string = ""; // 0xeed PushV
	var_249_string = "Rage"; // 0xeee MovS
	func_3437(var_57_cvector, var_249_string); // 0xeef NEW_2
	var_250_int = 535207; // 0xef1 PushI
	SetMessage(var_250_int); // 0xef2 TObjFunc
	ClearReplies(); // 0xef4 TObjFunc
	var_251_int = 535208; // 0xef6 PushI
	var_252_int = -1; // 0xef7 PushI
	var_253_int = 36880; // 0xef8 PushI
	AddReply(var_251_int, var_252_int, var_253_int); // 0xef9 TObjFunc
	var_254_int = 535209; // 0xefb PushI
	var_255_int = -1; // 0xefc PushI
	var_256_int = 36881; // 0xefd PushI
	AddReply(var_254_int, var_255_int, var_256_int); // 0xefe TObjFunc
	var_257_int = 535210; // 0xf00 PushI
	var_258_int = -1; // 0xf01 PushI
	var_259_int = 36882; // 0xf02 PushI
	AddReply(var_257_int, var_258_int, var_259_int); // 0xf03 TObjFunc
	return 0; // 0xf05 Return
	
Label_3846:
	var_3_string = 1; // 0xf06 TMovB
	var_260_bool = 0; // 0xf07 PushV
	func_6611(var_260_bool); // 0xf08 NEW_2
	if(var_260_bool == 0) goto Label_3854; // 0xf0a JumpB
	lshStopAnimation(); // 0xf0b Func
	goto Label_3856; // 0xf0d Jump
	
Label_3856:
	return 0; // 0xf10 Return
	
Label_3854:
	StopAnimation(); // 0xf0e Func
	
Label_3858:
	return 0; // 0xf12 Return
}


task_13_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_int, var_36_int, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_cvector)
{
	var_58_int = 1; // 0xfbf PushI
	if(var_58_int == 0) goto Label_4279; // 0xfc0 JumpB
	func_6488(); // 0xfc2 NEW_2
	var_60_int = 34757; // 0xfc4 PushI
	var_61_bool = var_57_cvector == var_60_int; // 0xfc5 Eq
	if(var_61_bool == 0) goto Label_4044; // 0xfc6 JumpB
	var_62_object = Obj(); var_63_object = Obj(); // 0xfc7 PushV
	var_62_object = var_1_object; // 0xfc8 MovT
	var_63_object = var_0_object; // 0xfc9 MovT
	func_6660(); // 0xfca NEW_2
	
Label_4044:
	var_89_int = 37459; // 0xfcc PushI
	var_90_bool = var_57_cvector == var_89_int; // 0xfcd Eq
	if(var_90_bool == 0) goto Label_4052; // 0xfce JumpB
	var_91_object = Obj(); var_92_object = Obj(); // 0xfcf PushV
	var_91_object = var_1_object; // 0xfd0 MovT
	var_92_object = var_0_object; // 0xfd1 MovT
	func_6660(); // 0xfd2 NEW_2
	
Label_4052:
	var_93_int = 37458; // 0xfd4 PushI
	var_94_bool = var_57_cvector == var_93_int; // 0xfd5 Eq
	if(var_94_bool == 0) goto Label_4060; // 0xfd6 JumpB
	var_95_object = Obj(); var_96_object = Obj(); // 0xfd7 PushV
	var_95_object = var_1_object; // 0xfd8 MovT
	var_96_object = var_0_object; // 0xfd9 MovT
	func_6660(); // 0xfda NEW_2
	
Label_4060:
	var_97_int = 34750; // 0xfdc PushI
	var_98_bool = var_56_bool == var_97_int; // 0xfdd Eq
	if(var_98_bool == 0) goto Label_4093; // 0xfde JumpB
	var_99_string = ""; // 0xfdf PushV
	var_99_string = "Mysterious"; // 0xfe0 MovS
	func_4008(var_57_cvector, var_99_string); // 0xfe1 NEW_2
	var_116_int = 533236; // 0xfe3 PushI
	SetMessage(var_116_int); // 0xfe4 TObjFunc
	ClearReplies(); // 0xfe6 TObjFunc
	var_117_bool = 0; var_118_object = Obj(); // 0xfe8 PushV
	var_118_object = var_1_object; // 0xfe9 MovT
	func_6884(var_118_object); // 0xfea NEW_2
	if(var_117_bool == 0) goto Label_4082; // 0xfec JumpB
	var_125_int = 533237; // 0xfed PushI
	var_126_int = 34752; // 0xfee PushI
	var_127_int = 34751; // 0xfef PushI
	AddReply(var_125_int, var_126_int, var_127_int); // 0xff0 TObjFunc
	
Label_4082:
	var_128_int = 533244; // 0xff2 PushI
	var_129_int = -1; // 0xff3 PushI
	var_130_int = 34758; // 0xff4 PushI
	AddReply(var_128_int, var_129_int, var_130_int); // 0xff5 TObjFunc
	var_131_int = 535757; // 0xff7 PushI
	var_132_int = -1; // 0xff8 PushI
	var_133_int = 37438; // 0xff9 PushI
	AddReply(var_131_int, var_132_int, var_133_int); // 0xffa TObjFunc
	return 0; // 0xffc Return
	
Label_4093:
	var_134_int = 34752; // 0xffd PushI
	var_135_bool = var_56_bool == var_134_int; // 0xffe Eq
	if(var_135_bool == 0) goto Label_4116; // 0xfff JumpB
	var_136_string = ""; // 0x1000 PushV
	var_136_string = "Mysterious"; // 0x1001 MovS
	func_4008(var_57_cvector, var_136_string); // 0x1002 NEW_2
	var_137_int = 533238; // 0x1004 PushI
	SetMessage(var_137_int); // 0x1005 TObjFunc
	ClearReplies(); // 0x1007 TObjFunc
	var_138_int = 535764; // 0x1009 PushI
	var_139_int = 37446; // 0x100a PushI
	var_140_int = 37445; // 0x100b PushI
	AddReply(var_138_int, var_139_int, var_140_int); // 0x100c TObjFunc
	var_141_int = 533239; // 0x100e PushI
	var_142_int = 37440; // 0x100f PushI
	var_143_int = 34753; // 0x1010 PushI
	AddReply(var_141_int, var_142_int, var_143_int); // 0x1011 TObjFunc
	return 0; // 0x1013 Return
	
Label_4116:
	var_144_int = 37446; // 0x1014 PushI
	var_145_bool = var_56_bool == var_144_int; // 0x1015 Eq
	if(var_145_bool == 0) goto Label_4134; // 0x1016 JumpB
	var_146_string = ""; // 0x1017 PushV
	var_146_string = "Angry"; // 0x1018 MovS
	func_4008(var_57_cvector, var_146_string); // 0x1019 NEW_2
	var_147_int = 535765; // 0x101b PushI
	SetMessage(var_147_int); // 0x101c TObjFunc
	ClearReplies(); // 0x101e TObjFunc
	var_148_int = 535766; // 0x1020 PushI
	var_149_int = 34754; // 0x1021 PushI
	var_150_int = 37447; // 0x1022 PushI
	AddReply(var_148_int, var_149_int, var_150_int); // 0x1023 TObjFunc
	return 0; // 0x1025 Return
	
Label_4134:
	var_151_int = 34754; // 0x1026 PushI
	var_152_bool = var_56_bool == var_151_int; // 0x1027 Eq
	if(var_152_bool == 0) goto Label_4157; // 0x1028 JumpB
	var_153_string = ""; // 0x1029 PushV
	var_153_string = "Rage"; // 0x102a MovS
	func_4008(var_57_cvector, var_153_string); // 0x102b NEW_2
	var_154_int = 533240; // 0x102d PushI
	SetMessage(var_154_int); // 0x102e TObjFunc
	ClearReplies(); // 0x1030 TObjFunc
	var_155_int = 533241; // 0x1032 PushI
	var_156_int = 34756; // 0x1033 PushI
	var_157_int = 34755; // 0x1034 PushI
	AddReply(var_155_int, var_156_int, var_157_int); // 0x1035 TObjFunc
	var_158_int = 535767; // 0x1037 PushI
	var_159_int = 37440; // 0x1038 PushI
	var_160_int = 37448; // 0x1039 PushI
	AddReply(var_158_int, var_159_int, var_160_int); // 0x103a TObjFunc
	return 0; // 0x103c Return
	
Label_4157:
	var_161_int = 34756; // 0x103d PushI
	var_162_bool = var_56_bool == var_161_int; // 0x103e Eq
	if(var_162_bool == 0) goto Label_4175; // 0x103f JumpB
	var_163_string = ""; // 0x1040 PushV
	var_163_string = "Rage"; // 0x1041 MovS
	func_4008(var_57_cvector, var_163_string); // 0x1042 NEW_2
	var_164_int = 533242; // 0x1044 PushI
	SetMessage(var_164_int); // 0x1045 TObjFunc
	ClearReplies(); // 0x1047 TObjFunc
	var_165_int = 535758; // 0x1049 PushI
	var_166_int = 37440; // 0x104a PushI
	var_167_int = 37439; // 0x104b PushI
	AddReply(var_165_int, var_166_int, var_167_int); // 0x104c TObjFunc
	return 0; // 0x104e Return
	
Label_4175:
	var_168_int = 37440; // 0x104f PushI
	var_169_bool = var_56_bool == var_168_int; // 0x1050 Eq
	if(var_169_bool == 0) goto Label_4198; // 0x1051 JumpB
	var_170_string = ""; // 0x1052 PushV
	var_170_string = "Rage"; // 0x1053 MovS
	func_4008(var_57_cvector, var_170_string); // 0x1054 NEW_2
	var_171_int = 535759; // 0x1056 PushI
	SetMessage(var_171_int); // 0x1057 TObjFunc
	ClearReplies(); // 0x1059 TObjFunc
	var_172_int = 535760; // 0x105b PushI
	var_173_int = 37442; // 0x105c PushI
	var_174_int = 37441; // 0x105d PushI
	AddReply(var_172_int, var_173_int, var_174_int); // 0x105e TObjFunc
	var_175_int = 535770; // 0x1060 PushI
	var_176_int = 37442; // 0x1061 PushI
	var_177_int = 37453; // 0x1062 PushI
	AddReply(var_175_int, var_176_int, var_177_int); // 0x1063 TObjFunc
	return 0; // 0x1065 Return
	
Label_4198:
	var_178_int = 37442; // 0x1066 PushI
	var_179_bool = var_56_bool == var_178_int; // 0x1067 Eq
	if(var_179_bool == 0) goto Label_4221; // 0x1068 JumpB
	var_180_string = ""; // 0x1069 PushV
	var_180_string = "Rage"; // 0x106a MovS
	func_4008(var_57_cvector, var_180_string); // 0x106b NEW_2
	var_181_int = 535761; // 0x106d PushI
	SetMessage(var_181_int); // 0x106e TObjFunc
	ClearReplies(); // 0x1070 TObjFunc
	var_182_int = 535762; // 0x1072 PushI
	var_183_int = 37444; // 0x1073 PushI
	var_184_int = 37443; // 0x1074 PushI
	AddReply(var_182_int, var_183_int, var_184_int); // 0x1075 TObjFunc
	var_185_int = 535771; // 0x1077 PushI
	var_186_int = -1; // 0x1078 PushI
	var_187_int = 37455; // 0x1079 PushI
	AddReply(var_185_int, var_186_int, var_187_int); // 0x107a TObjFunc
	return 0; // 0x107c Return
	
Label_4221:
	var_188_int = 37444; // 0x107d PushI
	var_189_bool = var_56_bool == var_188_int; // 0x107e Eq
	if(var_189_bool == 0) goto Label_4244; // 0x107f JumpB
	var_190_string = ""; // 0x1080 PushV
	var_190_string = "Staring"; // 0x1081 MovS
	func_4008(var_57_cvector, var_190_string); // 0x1082 NEW_2
	var_191_int = 535763; // 0x1084 PushI
	SetMessage(var_191_int); // 0x1085 TObjFunc
	ClearReplies(); // 0x1087 TObjFunc
	var_192_int = 535772; // 0x1089 PushI
	var_193_int = 37457; // 0x108a PushI
	var_194_int = 37456; // 0x108b PushI
	AddReply(var_192_int, var_193_int, var_194_int); // 0x108c TObjFunc
	var_195_int = 535774; // 0x108e PushI
	var_196_int = -1; // 0x108f PushI
	var_197_int = 37458; // 0x1090 PushI
	AddReply(var_195_int, var_196_int, var_197_int); // 0x1091 TObjFunc
	return 0; // 0x1093 Return
	
Label_4244:
	var_198_int = 37457; // 0x1094 PushI
	var_199_bool = var_56_bool == var_198_int; // 0x1095 Eq
	if(var_199_bool == 0) goto Label_4267; // 0x1096 JumpB
	var_200_string = ""; // 0x1097 PushV
	var_200_string = "Staring"; // 0x1098 MovS
	func_4008(var_57_cvector, var_200_string); // 0x1099 NEW_2
	var_201_int = 535773; // 0x109b PushI
	SetMessage(var_201_int); // 0x109c TObjFunc
	ClearReplies(); // 0x109e TObjFunc
	var_202_int = 533243; // 0x10a0 PushI
	var_203_int = -1; // 0x10a1 PushI
	var_204_int = 34757; // 0x10a2 PushI
	AddReply(var_202_int, var_203_int, var_204_int); // 0x10a3 TObjFunc
	var_205_int = 535775; // 0x10a5 PushI
	var_206_int = -1; // 0x10a6 PushI
	var_207_int = 37459; // 0x10a7 PushI
	AddReply(var_205_int, var_206_int, var_207_int); // 0x10a8 TObjFunc
	return 0; // 0x10aa Return
	
Label_4267:
	var_3_string = 1; // 0x10ab TMovB
	var_208_bool = 0; // 0x10ac PushV
	func_6611(var_208_bool); // 0x10ad NEW_2
	if(var_208_bool == 0) goto Label_4275; // 0x10af JumpB
	lshStopAnimation(); // 0x10b0 Func
	goto Label_4277; // 0x10b2 Jump
	
Label_4277:
	return 0; // 0x10b5 Return
	
Label_4275:
	StopAnimation(); // 0x10b3 Func
	
Label_4279:
	return 0; // 0x10b7 Return
}


task_15_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_int, var_41_int, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_cvector)
{
	var_58_int = 1; // 0x1178 PushI
	if(var_58_int == 0) goto Label_4686; // 0x1179 JumpB
	func_6488(); // 0x117b NEW_2
	var_60_int = 13469; // 0x117d PushI
	var_61_bool = var_56_bool == var_60_int; // 0x117e Eq
	if(var_61_bool == 0) goto Label_4530; // 0x117f JumpB
	var_62_bool = 0; var_63_object = Obj(); // 0x1180 PushV
	var_63_object = var_1_object; // 0x1181 MovT
	func_7088(var_63_object); // 0x1182 NEW_2
	if(var_62_bool == 0) goto Label_4510; // 0x1184 JumpB
	var_70_object = Obj(); var_71_object = Obj(); // 0x1185 PushV
	var_70_object = var_1_object; // 0x1186 MovT
	var_71_object = var_0_object; // 0x1187 MovT
	func_6774(); // 0x1188 NEW_2
	var_74_string = ""; // 0x118a PushV
	var_74_string = "Mysterious"; // 0x118b MovS
	func_4449(var_57_cvector, var_74_string); // 0x118c NEW_2
	var_91_int = 512310; // 0x118e PushI
	SetMessage(var_91_int); // 0x118f TObjFunc
	ClearReplies(); // 0x1191 TObjFunc
	var_92_int = 512311; // 0x1193 PushI
	var_93_int = 13471; // 0x1194 PushI
	var_94_int = 13470; // 0x1195 PushI
	AddReply(var_92_int, var_93_int, var_94_int); // 0x1196 TObjFunc
	var_95_int = 512313; // 0x1198 PushI
	var_96_int = 13473; // 0x1199 PushI
	var_97_int = 13472; // 0x119a PushI
	AddReply(var_95_int, var_96_int, var_97_int); // 0x119b TObjFunc
	return 0; // 0x119d Return
	
Label_4510:
	var_98_string = ""; // 0x119e PushV
	var_98_string = "Staring"; // 0x119f MovS
	func_4449(var_57_cvector, var_98_string); // 0x11a0 NEW_2
	var_99_int = 513777; // 0x11a2 PushI
	SetMessage(var_99_int); // 0x11a3 TObjFunc
	ClearReplies(); // 0x11a5 TObjFunc
	var_100_int = 513778; // 0x11a7 PushI
	var_101_int = -1; // 0x11a8 PushI
	var_102_int = 15014; // 0x11a9 PushI
	AddReply(var_100_int, var_101_int, var_102_int); // 0x11aa TObjFunc
	var_103_int = 541597; // 0x11ac PushI
	var_104_int = -1; // 0x11ad PushI
	var_105_int = 43761; // 0x11ae PushI
	AddReply(var_103_int, var_104_int, var_105_int); // 0x11af TObjFunc
	return 0; // 0x11b1 Return
	
Label_4530:
	var_106_int = 13473; // 0x11b2 PushI
	var_107_bool = var_56_bool == var_106_int; // 0x11b3 Eq
	if(var_107_bool == 0) goto Label_4548; // 0x11b4 JumpB
	var_108_string = ""; // 0x11b5 PushV
	var_108_string = "Staring"; // 0x11b6 MovS
	func_4449(var_57_cvector, var_108_string); // 0x11b7 NEW_2
	var_109_int = 512314; // 0x11b9 PushI
	SetMessage(var_109_int); // 0x11ba TObjFunc
	ClearReplies(); // 0x11bc TObjFunc
	var_110_int = 512315; // 0x11be PushI
	var_111_int = 13475; // 0x11bf PushI
	var_112_int = 13474; // 0x11c0 PushI
	AddReply(var_110_int, var_111_int, var_112_int); // 0x11c1 TObjFunc
	return 0; // 0x11c3 Return
	
Label_4548:
	var_113_int = 13475; // 0x11c4 PushI
	var_114_bool = var_56_bool == var_113_int; // 0x11c5 Eq
	if(var_114_bool == 0) goto Label_4566; // 0x11c6 JumpB
	var_115_string = ""; // 0x11c7 PushV
	var_115_string = "Rage"; // 0x11c8 MovS
	func_4449(var_57_cvector, var_115_string); // 0x11c9 NEW_2
	var_116_int = 512316; // 0x11cb PushI
	SetMessage(var_116_int); // 0x11cc TObjFunc
	ClearReplies(); // 0x11ce TObjFunc
	var_117_int = 512317; // 0x11d0 PushI
	var_118_int = 13477; // 0x11d1 PushI
	var_119_int = 13476; // 0x11d2 PushI
	AddReply(var_117_int, var_118_int, var_119_int); // 0x11d3 TObjFunc
	return 0; // 0x11d5 Return
	
Label_4566:
	var_120_int = 13477; // 0x11d6 PushI
	var_121_bool = var_56_bool == var_120_int; // 0x11d7 Eq
	if(var_121_bool == 0) goto Label_4584; // 0x11d8 JumpB
	var_122_string = ""; // 0x11d9 PushV
	var_122_string = "Rage"; // 0x11da MovS
	func_4449(var_57_cvector, var_122_string); // 0x11db NEW_2
	var_123_int = 512318; // 0x11dd PushI
	SetMessage(var_123_int); // 0x11de TObjFunc
	ClearReplies(); // 0x11e0 TObjFunc
	var_124_int = 512319; // 0x11e2 PushI
	var_125_int = 13482; // 0x11e3 PushI
	var_126_int = 13478; // 0x11e4 PushI
	AddReply(var_124_int, var_125_int, var_126_int); // 0x11e5 TObjFunc
	return 0; // 0x11e7 Return
	
Label_4584:
	var_127_int = 13482; // 0x11e8 PushI
	var_128_bool = var_56_bool == var_127_int; // 0x11e9 Eq
	if(var_128_bool == 0) goto Label_4602; // 0x11ea JumpB
	var_129_string = ""; // 0x11eb PushV
	var_129_string = "Rage"; // 0x11ec MovS
	func_4449(var_57_cvector, var_129_string); // 0x11ed NEW_2
	var_130_int = 512323; // 0x11ef PushI
	SetMessage(var_130_int); // 0x11f0 TObjFunc
	ClearReplies(); // 0x11f2 TObjFunc
	var_131_int = 512324; // 0x11f4 PushI
	var_132_int = 13484; // 0x11f5 PushI
	var_133_int = 13483; // 0x11f6 PushI
	AddReply(var_131_int, var_132_int, var_133_int); // 0x11f7 TObjFunc
	return 0; // 0x11f9 Return
	
Label_4602:
	var_134_int = 13484; // 0x11fa PushI
	var_135_bool = var_56_bool == var_134_int; // 0x11fb Eq
	if(var_135_bool == 0) goto Label_4620; // 0x11fc JumpB
	var_136_string = ""; // 0x11fd PushV
	var_136_string = "Rage"; // 0x11fe MovS
	func_4449(var_57_cvector, var_136_string); // 0x11ff NEW_2
	var_137_int = 512325; // 0x1201 PushI
	SetMessage(var_137_int); // 0x1202 TObjFunc
	ClearReplies(); // 0x1204 TObjFunc
	var_138_int = 512326; // 0x1206 PushI
	var_139_int = 13486; // 0x1207 PushI
	var_140_int = 13485; // 0x1208 PushI
	AddReply(var_138_int, var_139_int, var_140_int); // 0x1209 TObjFunc
	return 0; // 0x120b Return
	
Label_4620:
	var_141_int = 13486; // 0x120c PushI
	var_142_bool = var_56_bool == var_141_int; // 0x120d Eq
	if(var_142_bool == 0) goto Label_4638; // 0x120e JumpB
	var_143_string = ""; // 0x120f PushV
	var_143_string = "Rage"; // 0x1210 MovS
	func_4449(var_57_cvector, var_143_string); // 0x1211 NEW_2
	var_144_int = 512327; // 0x1213 PushI
	SetMessage(var_144_int); // 0x1214 TObjFunc
	ClearReplies(); // 0x1216 TObjFunc
	var_145_int = 512328; // 0x1218 PushI
	var_146_int = -1; // 0x1219 PushI
	var_147_int = 13487; // 0x121a PushI
	AddReply(var_145_int, var_146_int, var_147_int); // 0x121b TObjFunc
	return 0; // 0x121d Return
	
Label_4638:
	var_148_int = 13471; // 0x121e PushI
	var_149_bool = var_56_bool == var_148_int; // 0x121f Eq
	if(var_149_bool == 0) goto Label_4656; // 0x1220 JumpB
	var_150_string = ""; // 0x1221 PushV
	var_150_string = "Mysterious"; // 0x1222 MovS
	func_4449(var_57_cvector, var_150_string); // 0x1223 NEW_2
	var_151_int = 512312; // 0x1225 PushI
	SetMessage(var_151_int); // 0x1226 TObjFunc
	ClearReplies(); // 0x1228 TObjFunc
	var_152_int = 512320; // 0x122a PushI
	var_153_int = 13480; // 0x122b PushI
	var_154_int = 13479; // 0x122c PushI
	AddReply(var_152_int, var_153_int, var_154_int); // 0x122d TObjFunc
	return 0; // 0x122f Return
	
Label_4656:
	var_155_int = 13480; // 0x1230 PushI
	var_156_bool = var_56_bool == var_155_int; // 0x1231 Eq
	if(var_156_bool == 0) goto Label_4674; // 0x1232 JumpB
	var_157_string = ""; // 0x1233 PushV
	var_157_string = "Mysterious"; // 0x1234 MovS
	func_4449(var_57_cvector, var_157_string); // 0x1235 NEW_2
	var_158_int = 512321; // 0x1237 PushI
	SetMessage(var_158_int); // 0x1238 TObjFunc
	ClearReplies(); // 0x123a TObjFunc
	var_159_int = 512322; // 0x123c PushI
	var_160_int = -1; // 0x123d PushI
	var_161_int = 13481; // 0x123e PushI
	AddReply(var_159_int, var_160_int, var_161_int); // 0x123f TObjFunc
	return 0; // 0x1241 Return
	
Label_4674:
	var_3_string = 1; // 0x1242 TMovB
	var_162_bool = 0; // 0x1243 PushV
	func_6611(var_162_bool); // 0x1244 NEW_2
	if(var_162_bool == 0) goto Label_4682; // 0x1246 JumpB
	lshStopAnimation(); // 0x1247 Func
	goto Label_4684; // 0x1249 Jump
	
Label_4684:
	return 0; // 0x124c Return
	
Label_4682:
	StopAnimation(); // 0x124a Func
	
Label_4686:
	return 0; // 0x124e Return
}


task_17_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_int, var_46_int, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_cvector)
{
	var_58_int = 1; // 0x1336 PushI
	if(var_58_int == 0) goto Label_5361; // 0x1337 JumpB
	func_6488(); // 0x1339 NEW_2
	var_60_int = 14178; // 0x133b PushI
	var_61_bool = var_57_cvector == var_60_int; // 0x133c Eq
	if(var_61_bool == 0) goto Label_4931; // 0x133d JumpB
	var_62_object = Obj(); var_63_object = Obj(); // 0x133e PushV
	var_62_object = var_1_object; // 0x133f MovT
	var_63_object = var_0_object; // 0x1340 MovT
	func_6818(); // 0x1341 NEW_2
	
Label_4931:
	var_66_int = 41435; // 0x1343 PushI
	var_67_bool = var_57_cvector == var_66_int; // 0x1344 Eq
	if(var_67_bool == 0) goto Label_4939; // 0x1345 JumpB
	var_68_object = Obj(); var_69_object = Obj(); // 0x1346 PushV
	var_68_object = var_1_object; // 0x1347 MovT
	var_69_object = var_0_object; // 0x1348 MovT
	func_6818(); // 0x1349 NEW_2
	
Label_4939:
	var_70_int = 35690; // 0x134b PushI
	var_71_bool = var_57_cvector == var_70_int; // 0x134c Eq
	if(var_71_bool == 0) goto Label_4947; // 0x134d JumpB
	var_72_object = Obj(); var_73_object = Obj(); // 0x134e PushV
	var_72_object = var_1_object; // 0x134f MovT
	var_73_object = var_0_object; // 0x1350 MovT
	func_6669(); // 0x1351 NEW_2
	
Label_4947:
	var_76_int = 14094; // 0x1353 PushI
	var_77_bool = var_56_bool == var_76_int; // 0x1354 Eq
	if(var_77_bool == 0) goto Label_5039; // 0x1355 JumpB
	var_78_bool = 0; // 0x1356 PushV
	var_78_bool = 0; // 0x1357 MovB
	var_79_bool = 0; // 0x1358 PushV
	var_79_bool = 0; // 0x1359 MovB
	var_80_bool = 0; var_81_object = Obj(); // 0x135a PushV
	var_81_object = var_1_object; // 0x135b MovT
	func_7160(var_81_object); // 0x135c NEW_2
	if(var_80_bool == 0) goto Label_4966; // 0x135e JumpB
	var_88_bool = 0; var_89_object = Obj(); // 0x135f PushV
	var_89_object = var_1_object; // 0x1360 MovT
	func_7148(var_89_object); // 0x1361 NEW_2
	var_94_bool = var_88_bool == 0; // 0x1363 Not
	if(var_94_bool == 0) goto Label_4966; // 0x1364 JumpB
	var_79_bool = 1; // 0x1365 MovB
	
Label_4966:
	if(var_79_bool == 0) goto Label_4974; // 0x1366 JumpB
	var_95_bool = 0; var_96_object = Obj(); // 0x1367 PushV
	var_96_object = var_1_object; // 0x1368 MovT
	func_7136(var_96_object); // 0x1369 NEW_2
	var_101_bool = var_95_bool == 0; // 0x136b Not
	if(var_101_bool == 0) goto Label_4974; // 0x136c JumpB
	var_78_bool = 1; // 0x136d MovB
	
Label_4974:
	if(var_78_bool == 0) goto Label_5000; // 0x136e JumpB
	var_102_object = Obj(); var_103_object = Obj(); // 0x136f PushV
	var_102_object = var_1_object; // 0x1370 MovT
	var_103_object = var_0_object; // 0x1371 MovT
	func_6812(); // 0x1372 NEW_2
	var_106_string = ""; // 0x1374 PushV
	var_106_string = "Mysterious"; // 0x1375 MovS
	func_4895(var_57_cvector, var_106_string); // 0x1376 NEW_2
	var_123_int = 512892; // 0x1378 PushI
	SetMessage(var_123_int); // 0x1379 TObjFunc
	ClearReplies(); // 0x137b TObjFunc
	var_124_int = 539495; // 0x137d PushI
	var_125_int = 41421; // 0x137e PushI
	var_126_int = 41420; // 0x137f PushI
	AddReply(var_124_int, var_125_int, var_126_int); // 0x1380 TObjFunc
	var_127_int = 539501; // 0x1382 PushI
	var_128_int = 41427; // 0x1383 PushI
	var_129_int = 41426; // 0x1384 PushI
	AddReply(var_127_int, var_128_int, var_129_int); // 0x1385 TObjFunc
	return 0; // 0x1387 Return
	
Label_5000:
	var_130_string = ""; // 0x1388 PushV
	var_130_string = "Mysterious"; // 0x1389 MovS
	func_4895(var_57_cvector, var_130_string); // 0x138a NEW_2
	var_131_int = 512974; // 0x138c PushI
	SetMessage(var_131_int); // 0x138d TObjFunc
	ClearReplies(); // 0x138f TObjFunc
	var_132_bool = 0; // 0x1391 PushV
	var_132_bool = 0; // 0x1392 MovB
	var_133_bool = 0; var_134_object = Obj(); // 0x1393 PushV
	var_134_object = var_1_object; // 0x1394 MovT
	func_6896(var_134_object); // 0x1395 NEW_2
	if(var_133_bool == 0) goto Label_5022; // 0x1397 JumpB
	var_139_bool = 0; var_140_object = Obj(); // 0x1398 PushV
	var_140_object = var_1_object; // 0x1399 MovT
	func_6908(var_140_object); // 0x139a NEW_2
	if(var_139_bool == 0) goto Label_5022; // 0x139c JumpB
	var_132_bool = 1; // 0x139d MovB
	
Label_5022:
	if(var_132_bool == 0) goto Label_5028; // 0x139e JumpB
	var_145_int = 534097; // 0x139f PushI
	var_146_int = 38198; // 0x13a0 PushI
	var_147_int = 35690; // 0x13a1 PushI
	AddReply(var_145_int, var_146_int, var_147_int); // 0x13a2 TObjFunc
	
Label_5028:
	var_148_int = 536416; // 0x13a4 PushI
	var_149_int = -1; // 0x13a5 PushI
	var_150_int = 38196; // 0x13a6 PushI
	AddReply(var_148_int, var_149_int, var_150_int); // 0x13a7 TObjFunc
	var_151_int = 512975; // 0x13a9 PushI
	var_152_int = -1; // 0x13aa PushI
	var_153_int = 14180; // 0x13ab PushI
	AddReply(var_151_int, var_152_int, var_153_int); // 0x13ac TObjFunc
	return 0; // 0x13ae Return
	
Label_5039:
	var_154_int = 38198; // 0x13af PushI
	var_155_bool = var_56_bool == var_154_int; // 0x13b0 Eq
	if(var_155_bool == 0) goto Label_5062; // 0x13b1 JumpB
	var_156_string = ""; // 0x13b2 PushV
	var_156_string = "Mysterious"; // 0x13b3 MovS
	func_4895(var_57_cvector, var_156_string); // 0x13b4 NEW_2
	var_157_int = 536418; // 0x13b6 PushI
	SetMessage(var_157_int); // 0x13b7 TObjFunc
	ClearReplies(); // 0x13b9 TObjFunc
	var_158_int = 536419; // 0x13bb PushI
	var_159_int = 38200; // 0x13bc PushI
	var_160_int = 38199; // 0x13bd PushI
	AddReply(var_158_int, var_159_int, var_160_int); // 0x13be TObjFunc
	var_161_int = 536427; // 0x13c0 PushI
	var_162_int = 36081; // 0x13c1 PushI
	var_163_int = 38209; // 0x13c2 PushI
	AddReply(var_161_int, var_162_int, var_163_int); // 0x13c3 TObjFunc
	return 0; // 0x13c5 Return
	
Label_5062:
	var_164_int = 38200; // 0x13c6 PushI
	var_165_bool = var_56_bool == var_164_int; // 0x13c7 Eq
	if(var_165_bool == 0) goto Label_5080; // 0x13c8 JumpB
	var_166_string = ""; // 0x13c9 PushV
	var_166_string = "Staring"; // 0x13ca MovS
	func_4895(var_57_cvector, var_166_string); // 0x13cb NEW_2
	var_167_int = 536420; // 0x13cd PushI
	SetMessage(var_167_int); // 0x13ce TObjFunc
	ClearReplies(); // 0x13d0 TObjFunc
	var_168_int = 536421; // 0x13d2 PushI
	var_169_int = 38202; // 0x13d3 PushI
	var_170_int = 38201; // 0x13d4 PushI
	AddReply(var_168_int, var_169_int, var_170_int); // 0x13d5 TObjFunc
	return 0; // 0x13d7 Return
	
Label_5080:
	var_171_int = 38202; // 0x13d8 PushI
	var_172_bool = var_56_bool == var_171_int; // 0x13d9 Eq
	if(var_172_bool == 0) goto Label_5103; // 0x13da JumpB
	var_173_string = ""; // 0x13db PushV
	var_173_string = "Mysterious"; // 0x13dc MovS
	func_4895(var_57_cvector, var_173_string); // 0x13dd NEW_2
	var_174_int = 536422; // 0x13df PushI
	SetMessage(var_174_int); // 0x13e0 TObjFunc
	ClearReplies(); // 0x13e2 TObjFunc
	var_175_int = 536423; // 0x13e4 PushI
	var_176_int = 35691; // 0x13e5 PushI
	var_177_int = 38203; // 0x13e6 PushI
	AddReply(var_175_int, var_176_int, var_177_int); // 0x13e7 TObjFunc
	var_178_int = 536424; // 0x13e9 PushI
	var_179_int = 35691; // 0x13ea PushI
	var_180_int = 38204; // 0x13eb PushI
	AddReply(var_178_int, var_179_int, var_180_int); // 0x13ec TObjFunc
	return 0; // 0x13ee Return
	
Label_5103:
	var_181_int = 35691; // 0x13ef PushI
	var_182_bool = var_56_bool == var_181_int; // 0x13f0 Eq
	if(var_182_bool == 0) goto Label_5126; // 0x13f1 JumpB
	var_183_string = ""; // 0x13f2 PushV
	var_183_string = "Mysterious"; // 0x13f3 MovS
	func_4895(var_57_cvector, var_183_string); // 0x13f4 NEW_2
	var_184_int = 534098; // 0x13f6 PushI
	SetMessage(var_184_int); // 0x13f7 TObjFunc
	ClearReplies(); // 0x13f9 TObjFunc
	var_185_int = 534447; // 0x13fb PushI
	var_186_int = 36081; // 0x13fc PushI
	var_187_int = 36080; // 0x13fd PushI
	AddReply(var_185_int, var_186_int, var_187_int); // 0x13fe TObjFunc
	var_188_int = 536417; // 0x1400 PushI
	var_189_int = 38216; // 0x1401 PushI
	var_190_int = 38197; // 0x1402 PushI
	AddReply(var_188_int, var_189_int, var_190_int); // 0x1403 TObjFunc
	return 0; // 0x1405 Return
	
Label_5126:
	var_191_int = 38216; // 0x1406 PushI
	var_192_bool = var_56_bool == var_191_int; // 0x1407 Eq
	if(var_192_bool == 0) goto Label_5144; // 0x1408 JumpB
	var_193_string = ""; // 0x1409 PushV
	var_193_string = "Neutral"; // 0x140a MovS
	func_4895(var_57_cvector, var_193_string); // 0x140b NEW_2
	var_194_int = 536431; // 0x140d PushI
	SetMessage(var_194_int); // 0x140e TObjFunc
	ClearReplies(); // 0x1410 TObjFunc
	var_195_int = 536432; // 0x1412 PushI
	var_196_int = 38212; // 0x1413 PushI
	var_197_int = 38217; // 0x1414 PushI
	AddReply(var_195_int, var_196_int, var_197_int); // 0x1415 TObjFunc
	return 0; // 0x1417 Return
	
Label_5144:
	var_198_int = 36081; // 0x1418 PushI
	var_199_bool = var_56_bool == var_198_int; // 0x1419 Eq
	if(var_199_bool == 0) goto Label_5162; // 0x141a JumpB
	var_200_string = ""; // 0x141b PushV
	var_200_string = "Mysterious"; // 0x141c MovS
	func_4895(var_57_cvector, var_200_string); // 0x141d NEW_2
	var_201_int = 534448; // 0x141f PushI
	SetMessage(var_201_int); // 0x1420 TObjFunc
	ClearReplies(); // 0x1422 TObjFunc
	var_202_int = 534099; // 0x1424 PushI
	var_203_int = 38212; // 0x1425 PushI
	var_204_int = 35692; // 0x1426 PushI
	AddReply(var_202_int, var_203_int, var_204_int); // 0x1427 TObjFunc
	return 0; // 0x1429 Return
	
Label_5162:
	var_205_int = 38212; // 0x142a PushI
	var_206_bool = var_56_bool == var_205_int; // 0x142b Eq
	if(var_206_bool == 0) goto Label_5185; // 0x142c JumpB
	var_207_string = ""; // 0x142d PushV
	var_207_string = "Mysterious"; // 0x142e MovS
	func_4895(var_57_cvector, var_207_string); // 0x142f NEW_2
	var_208_int = 536429; // 0x1431 PushI
	SetMessage(var_208_int); // 0x1432 TObjFunc
	ClearReplies(); // 0x1434 TObjFunc
	var_209_int = 536428; // 0x1436 PushI
	var_210_int = 38206; // 0x1437 PushI
	var_211_int = 38211; // 0x1438 PushI
	AddReply(var_209_int, var_210_int, var_211_int); // 0x1439 TObjFunc
	var_212_int = 536430; // 0x143b PushI
	var_213_int = 38206; // 0x143c PushI
	var_214_int = 38214; // 0x143d PushI
	AddReply(var_212_int, var_213_int, var_214_int); // 0x143e TObjFunc
	return 0; // 0x1440 Return
	
Label_5185:
	var_215_int = 38206; // 0x1441 PushI
	var_216_bool = var_56_bool == var_215_int; // 0x1442 Eq
	if(var_216_bool == 0) goto Label_5203; // 0x1443 JumpB
	var_217_string = ""; // 0x1444 PushV
	var_217_string = "Mysterious"; // 0x1445 MovS
	func_4895(var_57_cvector, var_217_string); // 0x1446 NEW_2
	var_218_int = 536425; // 0x1448 PushI
	SetMessage(var_218_int); // 0x1449 TObjFunc
	ClearReplies(); // 0x144b TObjFunc
	var_219_int = 536426; // 0x144d PushI
	var_220_int = -1; // 0x144e PushI
	var_221_int = 38207; // 0x144f PushI
	AddReply(var_219_int, var_220_int, var_221_int); // 0x1450 TObjFunc
	return 0; // 0x1452 Return
	
Label_5203:
	var_222_int = 41427; // 0x1453 PushI
	var_223_bool = var_56_bool == var_222_int; // 0x1454 Eq
	if(var_223_bool == 0) goto Label_5221; // 0x1455 JumpB
	var_224_string = ""; // 0x1456 PushV
	var_224_string = "Mysterious"; // 0x1457 MovS
	func_4895(var_57_cvector, var_224_string); // 0x1458 NEW_2
	var_225_int = 539502; // 0x145a PushI
	SetMessage(var_225_int); // 0x145b TObjFunc
	ClearReplies(); // 0x145d TObjFunc
	var_226_int = 539503; // 0x145f PushI
	var_227_int = 41421; // 0x1460 PushI
	var_228_int = 41428; // 0x1461 PushI
	AddReply(var_226_int, var_227_int, var_228_int); // 0x1462 TObjFunc
	return 0; // 0x1464 Return
	
Label_5221:
	var_229_int = 41421; // 0x1465 PushI
	var_230_bool = var_56_bool == var_229_int; // 0x1466 Eq
	if(var_230_bool == 0) goto Label_5239; // 0x1467 JumpB
	var_231_string = ""; // 0x1468 PushV
	var_231_string = "Mysterious"; // 0x1469 MovS
	func_4895(var_57_cvector, var_231_string); // 0x146a NEW_2
	var_232_int = 539496; // 0x146c PushI
	SetMessage(var_232_int); // 0x146d TObjFunc
	ClearReplies(); // 0x146f TObjFunc
	var_233_int = 539497; // 0x1471 PushI
	var_234_int = 41423; // 0x1472 PushI
	var_235_int = 41422; // 0x1473 PushI
	AddReply(var_233_int, var_234_int, var_235_int); // 0x1474 TObjFunc
	return 0; // 0x1476 Return
	
Label_5239:
	var_236_int = 41423; // 0x1477 PushI
	var_237_bool = var_56_bool == var_236_int; // 0x1478 Eq
	if(var_237_bool == 0) goto Label_5262; // 0x1479 JumpB
	var_238_string = ""; // 0x147a PushV
	var_238_string = "Rage"; // 0x147b MovS
	func_4895(var_57_cvector, var_238_string); // 0x147c NEW_2
	var_239_int = 539498; // 0x147e PushI
	SetMessage(var_239_int); // 0x147f TObjFunc
	ClearReplies(); // 0x1481 TObjFunc
	var_240_int = 539499; // 0x1483 PushI
	var_241_int = 41425; // 0x1484 PushI
	var_242_int = 41424; // 0x1485 PushI
	AddReply(var_240_int, var_241_int, var_242_int); // 0x1486 TObjFunc
	var_243_int = 539504; // 0x1488 PushI
	var_244_int = 41431; // 0x1489 PushI
	var_245_int = 41430; // 0x148a PushI
	AddReply(var_243_int, var_244_int, var_245_int); // 0x148b TObjFunc
	return 0; // 0x148d Return
	
Label_5262:
	var_246_int = 41431; // 0x148e PushI
	var_247_bool = var_56_bool == var_246_int; // 0x148f Eq
	if(var_247_bool == 0) goto Label_5285; // 0x1490 JumpB
	var_248_string = ""; // 0x1491 PushV
	var_248_string = "Staring"; // 0x1492 MovS
	func_4895(var_57_cvector, var_248_string); // 0x1493 NEW_2
	var_249_int = 539505; // 0x1495 PushI
	SetMessage(var_249_int); // 0x1496 TObjFunc
	ClearReplies(); // 0x1498 TObjFunc
	var_250_int = 539506; // 0x149a PushI
	var_251_int = 14175; // 0x149b PushI
	var_252_int = 41432; // 0x149c PushI
	AddReply(var_250_int, var_251_int, var_252_int); // 0x149d TObjFunc
	var_253_int = 539507; // 0x149f PushI
	var_254_int = 14175; // 0x14a0 PushI
	var_255_int = 41433; // 0x14a1 PushI
	AddReply(var_253_int, var_254_int, var_255_int); // 0x14a2 TObjFunc
	return 0; // 0x14a4 Return
	
Label_5285:
	var_256_int = 41425; // 0x14a5 PushI
	var_257_bool = var_56_bool == var_256_int; // 0x14a6 Eq
	if(var_257_bool == 0) goto Label_5308; // 0x14a7 JumpB
	var_258_string = ""; // 0x14a8 PushV
	var_258_string = "Angry"; // 0x14a9 MovS
	func_4895(var_57_cvector, var_258_string); // 0x14aa NEW_2
	var_259_int = 539500; // 0x14ac PushI
	SetMessage(var_259_int); // 0x14ad TObjFunc
	ClearReplies(); // 0x14af TObjFunc
	var_260_int = 512893; // 0x14b1 PushI
	var_261_int = 14175; // 0x14b2 PushI
	var_262_int = 14095; // 0x14b3 PushI
	AddReply(var_260_int, var_261_int, var_262_int); // 0x14b4 TObjFunc
	var_263_int = 512969; // 0x14b6 PushI
	var_264_int = 14175; // 0x14b7 PushI
	var_265_int = 14174; // 0x14b8 PushI
	AddReply(var_263_int, var_264_int, var_265_int); // 0x14b9 TObjFunc
	return 0; // 0x14bb Return
	
Label_5308:
	var_266_int = 14175; // 0x14bc PushI
	var_267_bool = var_56_bool == var_266_int; // 0x14bd Eq
	if(var_267_bool == 0) goto Label_5326; // 0x14be JumpB
	var_268_string = ""; // 0x14bf PushV
	var_268_string = "Angry"; // 0x14c0 MovS
	func_4895(var_57_cvector, var_268_string); // 0x14c1 NEW_2
	var_269_int = 512970; // 0x14c3 PushI
	SetMessage(var_269_int); // 0x14c4 TObjFunc
	ClearReplies(); // 0x14c6 TObjFunc
	var_270_int = 512971; // 0x14c8 PushI
	var_271_int = 14177; // 0x14c9 PushI
	var_272_int = 14176; // 0x14ca PushI
	AddReply(var_270_int, var_271_int, var_272_int); // 0x14cb TObjFunc
	return 0; // 0x14cd Return
	
Label_5326:
	var_273_int = 14177; // 0x14ce PushI
	var_274_bool = var_56_bool == var_273_int; // 0x14cf Eq
	if(var_274_bool == 0) goto Label_5349; // 0x14d0 JumpB
	var_275_string = ""; // 0x14d1 PushV
	var_275_string = "Mysterious"; // 0x14d2 MovS
	func_4895(var_57_cvector, var_275_string); // 0x14d3 NEW_2
	var_276_int = 512972; // 0x14d5 PushI
	SetMessage(var_276_int); // 0x14d6 TObjFunc
	ClearReplies(); // 0x14d8 TObjFunc
	var_277_int = 512973; // 0x14da PushI
	var_278_int = -1; // 0x14db PushI
	var_279_int = 14178; // 0x14dc PushI
	AddReply(var_277_int, var_278_int, var_279_int); // 0x14dd TObjFunc
	var_280_int = 539508; // 0x14df PushI
	var_281_int = -1; // 0x14e0 PushI
	var_282_int = 41435; // 0x14e1 PushI
	AddReply(var_280_int, var_281_int, var_282_int); // 0x14e2 TObjFunc
	return 0; // 0x14e4 Return
	
Label_5349:
	var_3_string = 1; // 0x14e5 TMovB
	var_283_bool = 0; // 0x14e6 PushV
	func_6611(var_283_bool); // 0x14e7 NEW_2
	if(var_283_bool == 0) goto Label_5357; // 0x14e9 JumpB
	lshStopAnimation(); // 0x14ea Func
	goto Label_5359; // 0x14ec Jump
	
Label_5359:
	return 0; // 0x14ef Return
	
Label_5357:
	StopAnimation(); // 0x14ed Func
	
Label_5361:
	return 0; // 0x14f1 Return
}


task_19_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_int, var_51_int, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_cvector)
{
	var_58_int = 1; // 0x1594 PushI
	if(var_58_int == 0) goto Label_5715; // 0x1595 JumpB
	func_6488(); // 0x1597 NEW_2
	var_60_int = 37357; // 0x1599 PushI
	var_61_bool = var_56_bool == var_60_int; // 0x159a Eq
	if(var_61_bool == 0) goto Label_5552; // 0x159b JumpB
	var_62_string = ""; // 0x159c PushV
	var_62_string = "Staring"; // 0x159d MovS
	func_5501(var_57_cvector, var_62_string); // 0x159e NEW_2
	var_79_int = 535671; // 0x15a0 PushI
	SetMessage(var_79_int); // 0x15a1 TObjFunc
	ClearReplies(); // 0x15a3 TObjFunc
	var_80_int = 535672; // 0x15a5 PushI
	var_81_int = 42114; // 0x15a6 PushI
	var_82_int = 37358; // 0x15a7 PushI
	AddReply(var_80_int, var_81_int, var_82_int); // 0x15a8 TObjFunc
	var_83_int = 540141; // 0x15aa PushI
	var_84_int = -1; // 0x15ab PushI
	var_85_int = 42113; // 0x15ac PushI
	AddReply(var_83_int, var_84_int, var_85_int); // 0x15ad TObjFunc
	return 0; // 0x15af Return
	
Label_5552:
	var_86_int = 42114; // 0x15b0 PushI
	var_87_bool = var_56_bool == var_86_int; // 0x15b1 Eq
	if(var_87_bool == 0) goto Label_5575; // 0x15b2 JumpB
	var_88_string = ""; // 0x15b3 PushV
	var_88_string = "Mysterious"; // 0x15b4 MovS
	func_5501(var_57_cvector, var_88_string); // 0x15b5 NEW_2
	var_89_int = 540142; // 0x15b7 PushI
	SetMessage(var_89_int); // 0x15b8 TObjFunc
	ClearReplies(); // 0x15ba TObjFunc
	var_90_int = 540143; // 0x15bc PushI
	var_91_int = 42117; // 0x15bd PushI
	var_92_int = 42115; // 0x15be PushI
	AddReply(var_90_int, var_91_int, var_92_int); // 0x15bf TObjFunc
	var_93_int = 540144; // 0x15c1 PushI
	var_94_int = 42117; // 0x15c2 PushI
	var_95_int = 42116; // 0x15c3 PushI
	AddReply(var_93_int, var_94_int, var_95_int); // 0x15c4 TObjFunc
	return 0; // 0x15c6 Return
	
Label_5575:
	var_96_int = 42117; // 0x15c7 PushI
	var_97_bool = var_56_bool == var_96_int; // 0x15c8 Eq
	if(var_97_bool == 0) goto Label_5598; // 0x15c9 JumpB
	var_98_string = ""; // 0x15ca PushV
	var_98_string = "Mysterious"; // 0x15cb MovS
	func_5501(var_57_cvector, var_98_string); // 0x15cc NEW_2
	var_99_int = 540145; // 0x15ce PushI
	SetMessage(var_99_int); // 0x15cf TObjFunc
	ClearReplies(); // 0x15d1 TObjFunc
	var_100_int = 540146; // 0x15d3 PushI
	var_101_int = 42120; // 0x15d4 PushI
	var_102_int = 42119; // 0x15d5 PushI
	AddReply(var_100_int, var_101_int, var_102_int); // 0x15d6 TObjFunc
	var_103_int = 540150; // 0x15d8 PushI
	var_104_int = 42128; // 0x15d9 PushI
	var_105_int = 42123; // 0x15da PushI
	AddReply(var_103_int, var_104_int, var_105_int); // 0x15db TObjFunc
	return 0; // 0x15dd Return
	
Label_5598:
	var_106_int = 42120; // 0x15de PushI
	var_107_bool = var_56_bool == var_106_int; // 0x15df Eq
	if(var_107_bool == 0) goto Label_5616; // 0x15e0 JumpB
	var_108_string = ""; // 0x15e1 PushV
	var_108_string = "Neutral"; // 0x15e2 MovS
	func_5501(var_57_cvector, var_108_string); // 0x15e3 NEW_2
	var_109_int = 540147; // 0x15e5 PushI
	SetMessage(var_109_int); // 0x15e6 TObjFunc
	ClearReplies(); // 0x15e8 TObjFunc
	var_110_int = 540148; // 0x15ea PushI
	var_111_int = 42122; // 0x15eb PushI
	var_112_int = 42121; // 0x15ec PushI
	AddReply(var_110_int, var_111_int, var_112_int); // 0x15ed TObjFunc
	return 0; // 0x15ef Return
	
Label_5616:
	var_113_int = 42122; // 0x15f0 PushI
	var_114_bool = var_56_bool == var_113_int; // 0x15f1 Eq
	if(var_114_bool == 0) goto Label_5639; // 0x15f2 JumpB
	var_115_string = ""; // 0x15f3 PushV
	var_115_string = "Neutral"; // 0x15f4 MovS
	func_5501(var_57_cvector, var_115_string); // 0x15f5 NEW_2
	var_116_int = 540149; // 0x15f7 PushI
	SetMessage(var_116_int); // 0x15f8 TObjFunc
	ClearReplies(); // 0x15fa TObjFunc
	var_117_int = 540151; // 0x15fc PushI
	var_118_int = 42126; // 0x15fd PushI
	var_119_int = 42124; // 0x15fe PushI
	AddReply(var_117_int, var_118_int, var_119_int); // 0x15ff TObjFunc
	var_120_int = 540154; // 0x1601 PushI
	var_121_int = 42128; // 0x1602 PushI
	var_122_int = 42127; // 0x1603 PushI
	AddReply(var_120_int, var_121_int, var_122_int); // 0x1604 TObjFunc
	return 0; // 0x1606 Return
	
Label_5639:
	var_123_int = 42128; // 0x1607 PushI
	var_124_bool = var_56_bool == var_123_int; // 0x1608 Eq
	if(var_124_bool == 0) goto Label_5657; // 0x1609 JumpB
	var_125_string = ""; // 0x160a PushV
	var_125_string = "Neutral"; // 0x160b MovS
	func_5501(var_57_cvector, var_125_string); // 0x160c NEW_2
	var_126_int = 540155; // 0x160e PushI
	SetMessage(var_126_int); // 0x160f TObjFunc
	ClearReplies(); // 0x1611 TObjFunc
	var_127_int = 540156; // 0x1613 PushI
	var_128_int = 42132; // 0x1614 PushI
	var_129_int = 42130; // 0x1615 PushI
	AddReply(var_127_int, var_128_int, var_129_int); // 0x1616 TObjFunc
	return 0; // 0x1618 Return
	
Label_5657:
	var_130_int = 42126; // 0x1619 PushI
	var_131_bool = var_56_bool == var_130_int; // 0x161a Eq
	if(var_131_bool == 0) goto Label_5675; // 0x161b JumpB
	var_132_string = ""; // 0x161c PushV
	var_132_string = "Neutral"; // 0x161d MovS
	func_5501(var_57_cvector, var_132_string); // 0x161e NEW_2
	var_133_int = 540153; // 0x1620 PushI
	SetMessage(var_133_int); // 0x1621 TObjFunc
	ClearReplies(); // 0x1623 TObjFunc
	var_134_int = 540157; // 0x1625 PushI
	var_135_int = 42132; // 0x1626 PushI
	var_136_int = 42131; // 0x1627 PushI
	AddReply(var_134_int, var_135_int, var_136_int); // 0x1628 TObjFunc
	return 0; // 0x162a Return
	
Label_5675:
	var_137_int = 42132; // 0x162b PushI
	var_138_bool = var_56_bool == var_137_int; // 0x162c Eq
	if(var_138_bool == 0) goto Label_5703; // 0x162d JumpB
	var_139_string = ""; // 0x162e PushV
	var_139_string = "Staring"; // 0x162f MovS
	func_5501(var_57_cvector, var_139_string); // 0x1630 NEW_2
	var_140_int = 540158; // 0x1632 PushI
	SetMessage(var_140_int); // 0x1633 TObjFunc
	ClearReplies(); // 0x1635 TObjFunc
	var_141_int = 540159; // 0x1637 PushI
	var_142_int = -1; // 0x1638 PushI
	var_143_int = 42133; // 0x1639 PushI
	AddReply(var_141_int, var_142_int, var_143_int); // 0x163a TObjFunc
	var_144_int = 540160; // 0x163c PushI
	var_145_int = -1; // 0x163d PushI
	var_146_int = 42134; // 0x163e PushI
	AddReply(var_144_int, var_145_int, var_146_int); // 0x163f TObjFunc
	var_147_int = 540161; // 0x1641 PushI
	var_148_int = -1; // 0x1642 PushI
	var_149_int = 42136; // 0x1643 PushI
	AddReply(var_147_int, var_148_int, var_149_int); // 0x1644 TObjFunc
	return 0; // 0x1646 Return
	
Label_5703:
	var_3_string = 1; // 0x1647 TMovB
	var_150_bool = 0; // 0x1648 PushV
	func_6611(var_150_bool); // 0x1649 NEW_2
	if(var_150_bool == 0) goto Label_5711; // 0x164b JumpB
	lshStopAnimation(); // 0x164c Func
	goto Label_5713; // 0x164e Jump
	
Label_5713:
	return 0; // 0x1651 Return
	
Label_5711:
	StopAnimation(); // 0x164f Func
	
Label_5715:
	return 0; // 0x1653 Return
}


task_21_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_int, var_56_int, var_57_cvector)
{
	var_58_int = 1; // 0x16f6 PushI
	if(var_58_int == 0) goto Label_5918; // 0x16f7 JumpB
	func_6488(); // 0x16f9 NEW_2
	var_60_int = 42557; // 0x16fb PushI
	var_61_bool = var_56_int == var_60_int; // 0x16fc Eq
	if(var_61_bool == 0) goto Label_5906; // 0x16fd JumpB
	var_62_string = ""; // 0x16fe PushV
	var_62_string = "Neutral"; // 0x16ff MovS
	func_5855(var_57_cvector, var_62_string); // 0x1700 NEW_2
	var_79_int = 540548; // 0x1702 PushI
	SetMessage(var_79_int); // 0x1703 TObjFunc
	ClearReplies(); // 0x1705 TObjFunc
	var_80_int = 540549; // 0x1707 PushI
	var_81_int = -1; // 0x1708 PushI
	var_82_int = 42558; // 0x1709 PushI
	AddReply(var_80_int, var_81_int, var_82_int); // 0x170a TObjFunc
	var_83_int = 540797; // 0x170c PushI
	var_84_int = -1; // 0x170d PushI
	var_85_int = 42846; // 0x170e PushI
	AddReply(var_83_int, var_84_int, var_85_int); // 0x170f TObjFunc
	return 0; // 0x1711 Return
	
Label_5906:
	var_3_string = 1; // 0x1712 TMovB
	var_86_bool = 0; // 0x1713 PushV
	func_6611(var_86_bool); // 0x1714 NEW_2
	if(var_86_bool == 0) goto Label_5914; // 0x1716 JumpB
	lshStopAnimation(); // 0x1717 Func
	goto Label_5916; // 0x1719 Jump
	
Label_5916:
	return 0; // 0x171c Return
	
Label_5914:
	StopAnimation(); // 0x171a Func
	
Label_5918:
	return 0; // 0x171e Return
}


task_22_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_cvector, var_56_int)
{
	var_57_int = 10; // 0x176c PushI
	var_58_bool = var_56_int == var_57_int; // 0x176d Eq
	if(var_58_bool == 0) goto Label_6032; // 0x176e JumpB
	func_5991(); // 0x1770 NEW_2
	var_60_bool = 0; // 0x1772 PushV
	var_60_bool = 0; // 0x1773 MovB
	var_61_bool = 0; // 0x1774 PushV
	func_6212(var_61_bool); // 0x1775 NEW_2
	if(var_61_bool == 0) goto Label_6013; // 0x1777 JumpB
	var_64_bool = 0; // 0x1778 PushV
	func_5960(var_64_bool); // 0x1779 NEW_2
	if(var_64_bool == 0) goto Label_6013; // 0x177b JumpB
	var_60_bool = 1; // 0x177c MovB
	
Label_6013:
	if(var_60_bool == 0) goto Label_6026; // 0x177d JumpB
	var_81_bool = 0; // 0x177e PushV
	func_5940(var_81_bool); // 0x177f NEW_2
	if(var_81_bool == 0) goto Label_6025; // 0x1781 JumpB
	var_100_bool = 0; var_101_object = Obj(); // 0x1782 PushV
	var_102_object = Obj(); // 0x1783 PushV
	func_6495(var_102_object); // 0x1784 NEW_2
	var_101_object = var_102_object; // 0x1785 Mov
	func_6362(var_101_object); // 0x1787 NEW_2
	
Label_6025:
	goto Label_6032; // 0x1789 Jump
	
Label_6032:
	return 0; // 0x1790 Return
	
Label_6026:
	func_5955(var_56_int); // 0x178b NEW_2
	func_5982(); // 0x178e NEW_2
}


task_22_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_cvector)
{
	func_6173(); // 0x1792 NEW_2
	func_5991(); // 0x1795 NEW_2
	lshStopSpeech(); // 0x1797 Func
	lshStopAnimation(); // 0x1799 Func
	StopAsync(); // 0x179b Func
	Hold(); // 0x179d Func
	return 0; // 0x179f Return
}


task_22_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_cvector)
{
	StopGroup0(); // 0x17a0 Func
	func_5991(); // 0x17a3 NEW_2
	var_57_string = ""; // 0x17a5 PushV
	var_57_string = "Neutral"; // 0x17a6 MovS
	func_6442(var_57_string); // 0x17a7 NEW_2
	func_5982(); // 0x17aa NEW_2
	return 0; // 0x17ac Return
}


task_22_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_cvector, var_56_bool)
{
	var_57_bool = var_56_bool; // 0x17ae Push
	if(var_57_bool == 0) goto Label_6068; // 0x17af JumpB
	func_5982(); // 0x17b1 NEW_2
	goto Label_6072; // 0x17b3 Jump
	
Label_6072:
	return 0; // 0x17b8 Return
	
Label_6068:
	var_63_string = ""; // 0x17b4 PushV
	var_63_string = "Neutral"; // 0x17b5 MovS
	func_6442(var_63_string); // 0x17b6 NEW_2
}


task_22_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_cvector, var_56_object)
{
	var_57_bool = 0; var_58_bool = 0; // 0x17b9 PushV
	IsOverrideActive(var_58_bool); // 0x17ba Func
	var_59_bool = var_58_bool == 0; // 0x17bc Not
	if(var_59_bool == 0) goto Label_6101; // 0x17bd JumpB
	EventDisable(0); // 0x17be EventDisable
	func_6173(); // 0x17c0 NEW_2
	var_60_bool = 0; var_61_object = Obj(); // 0x17c2 PushV
	var_61_object = var_56_object; // 0x17c3 Mov
	func_6203(var_61_object); // 0x17c4 NEW_2
	EventEnable(0); // 0x17c6 EventEnable
	var_74_object = Obj(); // 0x17c7 PushV
	var_74_object = var_56_object; // 0x17c8 Mov
	func_7360(var_58_bool, var_74_object); // 0x17c9 NEW_2
	var_1172_string = ""; // 0x17cb PushV
	var_1172_string = "Neutral"; // 0x17cc MovS
	func_6442(var_1172_string); // 0x17cd NEW_2
	func_5991(); // 0x17d0 NEW_2
	func_5982(); // 0x17d3 NEW_2
	
Label_6101:
	return 2; // 0x17d5 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_cvector)
{
	var_56_bool = GlobalVars[1]; // 0x171f PushGE
	var_56_bool = 0; // 0x1720 MovB
	GlobalVars[1] = var_56_bool; // 0x1721 PopGE
	func_5926(var_55_cvector); // 0x1723 NEW_2
	return 0; // 0x1725 Return
}


func_0(var_0_object, var_77_int, var_78_object)
{
	var_80_object = Obj(); var_81_bool = 0; var_82_int = 0; var_83_bool = 0; var_84_object = Obj(); var_85_bool = 0; var_86_int = 0; var_87_bool = 0; // 0x0 PushV
	var_0_object = var_78_object; // 0x1 TMov
	var_88_bool = 0; var_89_object = Obj(); var_90_float = 0; // 0x2 PushV
	var_89_object = var_78_object; // 0x3 Mov
	var_90_float = 70.0; // 0x4 MovF
	func_6217(var_89_object, var_90_float); // 0x5 NEW_2
	var_135_bool = var_88_bool == 0; // 0x7 Not
	if(var_135_bool == 0) goto Label_11; // 0x8 JumpB
	var_77_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_84_object); // 0xb Func
	var_136_int = 0; // 0xd PushV
	func_6605(var_136_int); // 0xe NEW_2
	SetNPCName(var_136_int); // 0x10 ObjFunc
	var_137_int = 0; // 0x12 PushV
	func_6603(var_137_int); // 0x13 NEW_2
	SetNPCDescription(var_137_int); // 0x15 ObjFunc
	var_138_string = ""; // 0x17 PushV
	func_6607(var_138_string); // 0x18 NEW_2
	SetPhoto(var_138_string); // 0x1a ObjFunc
	var_139_string = ""; // 0x1c PushV
	func_6609(var_139_string); // 0x1d NEW_2
	SetPhoto2(var_139_string); // 0x1f ObjFunc
	var_140_int = 0; // 0x21 PushV
	func_7269(var_140_int); // 0x22 NEW_2
	SetPlayerName(var_140_int); // 0x24 ObjFunc
	var_86_int = -1; // 0x26 MovI
	IsOverrideActive(var_85_bool); // 0x27 Func
	var_148_bool = var_85_bool; // 0x29 Push
	if(var_148_bool == 0) goto Label_45; // 0x2a JumpB
	var_77_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_84_object); // 0x2d Func
	var_149_bool = 0; var_150_object = Obj(); // 0x2f PushV
	var_151_object = Obj(); // 0x30 PushV
	func_6495(var_151_object); // 0x31 NEW_2
	var_150_object = var_151_object; // 0x32 Mov
	func_6304(var_149_bool, var_150_object); // 0x34 NEW_2
	var_244_object = Obj(); var_245_object = Obj(); // 0x36 PushV
	var_244_object = var_78_object; // 0x37 Mov
	var_245_object = var_84_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_246_object, var_247_object, var_248_string, var_249_bool, var_244_object, var_245_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_87_bool); // 0x3d ObjFunc
	
Label_63:
	var_303_bool = var_87_bool == 0; // 0x3f Not
	if(var_303_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_87_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_304_object = Obj(); // 0x46 PushV
	var_304_object = var_78_object; // 0x47 Mov
	func_6286(); // 0x48 NEW_2
	StopDialog(var_84_object); // 0x4a Func
	GetReturnValue(var_86_int); // 0x4c ObjFunc
	var_77_int = var_86_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_513(var_2_object, var_766_string)
{
	var_767_bool = 0; // 0x202 PushV
	func_6611(var_767_bool); // 0x203 NEW_2
	var_768_bool = var_767_bool == 0; // 0x205 Not
	if(var_768_bool == 0) goto Label_520; // 0x206 JumpB
	return 0; // 0x207 Return
	
Label_520:
	var_769_bool = var_766_string == var_2_object; // 0x208 Eq
	if(var_769_bool == 0) goto Label_523; // 0x209 JumpB
	return 0; // 0x20a Return
	
Label_523:
	var_770_string = ""; var_771_bool = 0; // 0x20b PushV
	var_770_string = var_766_string; // 0x20c Mov
	var_772_string = ""; // 0x20d PushS
	var_773_bool = var_766_string == var_772_string; // 0x20e Eq
	if(var_773_bool == 0) goto Label_530; // 0x20f JumpB
	var_771_bool = 0; // 0x210 MovB
	goto Label_531; // 0x211 Jump
	
Label_531:
	func_6458(var_770_string, var_771_bool); // 0x213 NEW_2
	var_2_object = var_766_string; // 0x215 TMov
	return 0; // 0x216 Return
	
Label_530:
	var_771_bool = 1; // 0x212 MovB
}


func_1028(var_2_object, var_357_string)
{
	var_358_bool = 0; // 0x405 PushV
	func_6611(var_358_bool); // 0x406 NEW_2
	var_359_bool = var_358_bool == 0; // 0x408 Not
	if(var_359_bool == 0) goto Label_1035; // 0x409 JumpB
	return 0; // 0x40a Return
	
Label_1035:
	var_360_bool = var_357_string == var_2_object; // 0x40b Eq
	if(var_360_bool == 0) goto Label_1038; // 0x40c JumpB
	return 0; // 0x40d Return
	
Label_1038:
	var_361_string = ""; var_362_bool = 0; // 0x40e PushV
	var_361_string = var_357_string; // 0x40f Mov
	var_363_string = ""; // 0x410 PushS
	var_364_bool = var_357_string == var_363_string; // 0x411 Eq
	if(var_364_bool == 0) goto Label_1045; // 0x412 JumpB
	var_362_bool = 0; // 0x413 MovB
	goto Label_1046; // 0x414 Jump
	
Label_1046:
	func_6458(var_361_string, var_362_bool); // 0x416 NEW_2
	var_2_object = var_357_string; // 0x418 TMov
	return 0; // 0x419 Return
	
Label_1045:
	var_362_bool = 1; // 0x415 MovB
}


func_6660()
{
	var_64_string = "d7q03"; // 0x1a05 PushS
	var_65_int = 2; // 0x1a06 PushI
	SetVariable(var_64_string, var_65_int); // 0x1a07 Func
	func_7198(); // 0x1a0a NEW_2
	return 0; // 0x1a0c Return
}


func_7172()
{
	var_115_object = Obj(); var_116_object = Obj(); // 0x1c04 PushV
	var_117_int = 781; // 0x1c05 PushI
	var_118_int = 2; // 0x1c06 PushI
	var_119_int = 542086; // 0x1c07 PushI
	CreateDiaryEntry(var_116_object, var_117_int, var_118_int, var_119_int); // 0x1c08 Func
	var_120_bool = 0; var_121_object = Obj(); var_122_int = 0; // 0x1c0a PushV
	var_121_object = var_116_object; // 0x1c0b Mov
	var_122_int = 11; // 0x1c0c MovI
	func_7224(var_120_bool, var_121_object, var_122_int); // 0x1c0d NEW_2
	return 2; // 0x1c0f Return
}


func_6669()
{
	var_74_string = "ood10Maria2"; // 0x1a0e PushS
	var_75_int = 1; // 0x1a0f PushI
	SetVariable(var_74_string, var_75_int); // 0x1a10 Func
	return 0; // 0x1a12 Return
}


func_7185()
{
	var_88_object = Obj(); var_89_object = Obj(); // 0x1c11 PushV
	var_90_int = 134; // 0x1c12 PushI
	var_91_int = 2; // 0x1c13 PushI
	var_92_int = 515285; // 0x1c14 PushI
	CreateDiaryEntry(var_89_object, var_90_int, var_91_int, var_92_int); // 0x1c15 Func
	var_93_bool = 0; var_94_object = Obj(); var_95_int = 0; // 0x1c17 PushV
	var_94_object = var_89_object; // 0x1c18 Mov
	var_95_int = 11; // 0x1c19 MovI
	func_7224(var_93_bool, var_94_object, var_95_int); // 0x1c1a NEW_2
	return 2; // 0x1c1c Return
}


func_6675()
{
	var_64_string = "ood3Maria1"; // 0x1a14 PushS
	var_65_int = 1; // 0x1a15 PushI
	SetVariable(var_64_string, var_65_int); // 0x1a16 Func
	return 0; // 0x1a18 Return
}


func_6681()
{
	var_70_string = "ood3Maria2"; // 0x1a1a PushS
	var_71_int = 1; // 0x1a1b PushI
	SetVariable(var_70_string, var_71_int); // 0x1a1c Func
	return 0; // 0x1a1e Return
}


func_6171(var_95_bool)
{
	var_95_bool = 1; // 0x181b MovB
	return 0; // 0x181c Return
}


func_6173()
{
	StopAnimation(); // 0x181d Func
	StopGroup0(); // 0x181f Func
	return 0; // 0x1821 Return
}


func_7198()
{
	var_66_object = Obj(); var_67_object = Obj(); // 0x1c1e PushV
	var_68_int = 643; // 0x1c1f PushI
	var_69_int = 2; // 0x1c20 PushI
	var_70_int = 533277; // 0x1c21 PushI
	CreateDiaryEntry(var_67_object, var_68_int, var_69_int, var_70_int); // 0x1c22 Func
	var_71_bool = 0; var_72_object = Obj(); var_73_int = 0; // 0x1c24 PushV
	var_72_object = var_67_object; // 0x1c25 Mov
	var_73_int = 641; // 0x1c26 MovI
	func_7224(var_71_bool, var_72_object, var_73_int); // 0x1c27 NEW_2
	return 2; // 0x1c29 Return
}


func_6687()
{
	var_64_string = "ood4Maria1"; // 0x1a20 PushS
	var_65_int = 1; // 0x1a21 PushI
	SetVariable(var_64_string, var_65_int); // 0x1a22 Func
	return 0; // 0x1a24 Return
}


func_6178(var_71_float)
{
	var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); // 0x1822 PushV
	GetPosition(var_76_cvector); // 0x1823 Func
	GetPosition(var_77_cvector); // 0x1825 ObjFunc
	var_78_cvector = var_77_cvector - var_76_cvector; // 0x1827 Sub2
	var_71_float = var_78_cvector | var_78_cvector; // 0x1828 Or2
	return 6; // 0x1829 Return
}


func_6693()
{
	var_70_string = "ood4Maria2"; // 0x1a26 PushS
	var_71_int = 1; // 0x1a27 PushI
	SetVariable(var_70_string, var_71_int); // 0x1a28 Func
	return 0; // 0x1a2a Return
}


func_6186(var_151_string, var_152_int)
{
	var_153_int = 0; var_154_int = 0; // 0x182a PushV
	GetProperty(var_151_string, var_154_int); // 0x182b ObjFunc
	var_155_int = var_154_int + var_152_int; // 0x182d Add
	SetProperty(var_151_string, var_155_int); // 0x182e ObjFunc
	return 2; // 0x1830 Return
}


func_6699()
{
	func_7172(); // 0x1a2d NEW_2
	var_123_bool = 0; var_124_string = ""; var_125_string = ""; // 0x1a2f PushV
	var_124_string = "quest_d2_02"; // 0x1a30 MovS
	var_125_string = "fail"; // 0x1a31 MovS
	func_6547(var_123_bool, var_124_string, var_125_string); // 0x1a32 NEW_2
	return 0; // 0x1a34 Return
}


func_7211(var_80_object)
{
	var_81_object = Obj(); var_82_object = Obj(); // 0x1c2b PushV
	GetDiaryRoot(var_82_object); // 0x1c2c Func
	var_83_bool = var_82_object == 0; // 0x1c2e Not
	if(var_83_bool == 0) goto Label_7221; // 0x1c2f JumpB
	var_84_string = "Can't retrieve diary root"; // 0x1c30 PushS
	Trace(var_84_string); // 0x1c31 Func
	var_80_object = 0; // 0x1c33 MovB
	return 2; // 0x1c34 Return
	
Label_7221:
	var_80_object = var_82_object; // 0x1c35 Mov
	return 2; // 0x1c36 Return
}


func_6193(var_64_bool, var_65_cvector)
{
	var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_bool = 0; var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_bool = 0; // 0x1831 PushV
	GetPosition(var_69_cvector); // 0x1832 Func
	var_70_cvector = var_65_cvector - var_69_cvector; // 0x1834 Sub2
	var_72_float = GetByIndex(var_70_cvector, 0); // 0x1835 PushE
	var_73_float = GetByIndex(var_70_cvector, 2); // 0x1836 PushE
	Rotate(var_72_float, var_73_float, var_71_bool); // 0x1837 Func
	var_64_bool = var_71_bool; // 0x1839 Mov
	return 6; // 0x183a Return
}


func_6709()
{
	var_64_string = "ood2Maria1"; // 0x1a36 PushS
	var_65_int = 1; // 0x1a37 PushI
	SetVariable(var_64_string, var_65_int); // 0x1a38 Func
	return 0; // 0x1a3a Return
}


func_7224(var_71_bool, var_72_object, var_73_int)
{
	var_74_object = Obj(); var_75_object = Obj(); var_76_int = 0; var_77_object = Obj(); var_78_object = Obj(); var_79_int = 0; // 0x1c38 PushV
	var_80_object = Obj(); // 0x1c39 PushV
	func_7211(var_80_object); // 0x1c3a NEW_2
	var_77_object = var_80_object; // 0x1c3b Mov
	Find(var_73_int, var_78_object); // 0x1c3d ObjFunc
	var_85_bool = var_78_object == 0; // 0x1c3f Not
	if(var_85_bool == 0) goto Label_7239; // 0x1c40 JumpB
	var_86_string = "Can't find diary parent with id: "; // 0x1c41 PushS
	var_87_int = var_86_string + var_73_int; // 0x1c42 Add
	Trace(var_87_int); // 0x1c43 Func
	var_71_bool = 0; // 0x1c45 MovB
	return 6; // 0x1c46 Return
	
Label_7239:
	AddChild(var_72_object); // 0x1c47 ObjFunc
	var_88_int = 7; // 0x1c49 PushI
	SendWorldWndMessage(var_88_int); // 0x1c4a Func
	GetCategory(var_79_int); // 0x1c4c ObjFunc
	SetDiarySection(var_79_int); // 0x1c4e Func
	var_71_bool = 0; // 0x1c50 MovB
	return 6; // 0x1c51 Return
}


func_6715()
{
	var_133_string = "ood2Maria2"; // 0x1a3c PushS
	var_134_int = 1; // 0x1a3d PushI
	SetVariable(var_133_string, var_134_int); // 0x1a3e Func
	return 0; // 0x1a40 Return
}


func_6203(var_60_bool)
{
	var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); // 0x183b PushV
	GetPosition(var_63_cvector); // 0x183c ObjFunc
	var_64_bool = 0; var_65_cvector = CVector(0,0,0); // 0x183e PushV
	var_65_cvector = var_63_cvector; // 0x183f Mov
	func_6193(var_64_bool, var_65_cvector); // 0x1840 NEW_2
	var_60_bool = var_64_bool; // 0x1841 Mov
	return 2; // 0x1843 Return
}


func_2113(var_0_object, var_1_object, var_2_object, var_3_string, var_483_object, var_484_object)
{
	var_0_object = var_484_object; // 0x842 TMov
	var_1_object = var_483_object; // 0x843 TMov
	var_3_string = 0; // 0x844 TMovB
	var_489_int = 1; // 0x845 PushI
	if(var_489_int == 0) goto Label_2174; // 0x846 JumpB
	var_490_string = ""; // 0x847 PushV
	var_490_string = "Staring"; // 0x848 MovS
	func_2204(var_484_object, var_490_string); // 0x849 NEW_2
	var_498_int = 506887; // 0x84b PushI
	SetMessage(var_498_int); // 0x84c TObjFunc
	ClearReplies(); // 0x84e TObjFunc
	var_499_bool = 0; // 0x850 PushV
	var_499_bool = 0; // 0x851 MovB
	var_500_bool = 0; var_501_object = Obj(); // 0x852 PushV
	var_501_object = var_1_object; // 0x853 MovT
	func_6980(var_501_object); // 0x854 NEW_2
	if(var_500_bool == 0) goto Label_2141; // 0x856 JumpB
	var_506_bool = 0; var_507_object = Obj(); // 0x857 PushV
	var_507_object = var_1_object; // 0x858 MovT
	func_7004(var_507_object); // 0x859 NEW_2
	if(var_506_bool == 0) goto Label_2141; // 0x85b JumpB
	var_499_bool = 1; // 0x85c MovB
	
Label_2141:
	if(var_499_bool == 0) goto Label_2147; // 0x85d JumpB
	var_512_int = 506888; // 0x85e PushI
	var_513_int = 7595; // 0x85f PushI
	var_514_int = 7594; // 0x860 PushI
	AddReply(var_512_int, var_513_int, var_514_int); // 0x861 TObjFunc
	
Label_2147:
	var_515_bool = 0; // 0x863 PushV
	var_515_bool = 0; // 0x864 MovB
	var_516_bool = 0; var_517_object = Obj(); // 0x865 PushV
	var_517_object = var_1_object; // 0x866 MovT
	func_6992(var_517_object); // 0x867 NEW_2
	if(var_516_bool == 0) goto Label_2160; // 0x869 JumpB
	var_522_bool = 0; var_523_object = Obj(); // 0x86a PushV
	var_523_object = var_1_object; // 0x86b MovT
	func_7016(var_523_object); // 0x86c NEW_2
	if(var_522_bool == 0) goto Label_2160; // 0x86e JumpB
	var_515_bool = 1; // 0x86f MovB
	
Label_2160:
	if(var_515_bool == 0) goto Label_2166; // 0x870 JumpB
	var_528_int = 506918; // 0x871 PushI
	var_529_int = 7625; // 0x872 PushI
	var_530_int = 7624; // 0x873 PushI
	AddReply(var_528_int, var_529_int, var_530_int); // 0x874 TObjFunc
	
Label_2166:
	var_531_int = 507400; // 0x876 PushI
	var_532_int = -1; // 0x877 PushI
	var_533_int = 8166; // 0x878 PushI
	AddReply(var_531_int, var_532_int, var_533_int); // 0x879 TObjFunc
	goto Label_2174; // 0x87b Jump
	
Label_2174:
	var_534_bool = 0; // 0x87e PushV
	func_6611(var_534_bool); // 0x87f NEW_2
	if(var_534_bool == 0) goto Label_2189; // 0x881 JumpB
	
Label_2178:
	lshWaitForAnimEnd(); // 0x882 Func
	var_535_string = var_3_string; // 0x884 PushT
	if(var_535_string == 0) goto Label_2183; // 0x885 JumpB
	goto Label_2188; // 0x886 Jump
	
Label_2188:
	goto Label_2203; // 0x88c Jump
	
Label_2203:
	return 0; // 0x89b Return
	
Label_2183:
	var_536_string = ""; // 0x887 PushV
	var_536_string = var_2_object; // 0x888 MovT
	func_6442(var_536_string); // 0x889 NEW_2
	goto Label_2178; // 0x88b Jump
	
Label_2189:
	var_537_string = "all"; // 0x88d PushS
	var_538_string = "idle"; // 0x88e PushS
	PlayAnimation(var_537_string, var_538_string); // 0x88f Func
	
Label_2193:
	WaitForAnimEnd(); // 0x891 Func
	var_539_string = var_3_string; // 0x893 PushT
	if(var_539_string == 0) goto Label_2198; // 0x894 JumpB
	goto Label_2203; // 0x895 Jump
	
Label_2198:
	var_540_string = "all"; // 0x896 PushS
	var_541_string = "idle"; // 0x897 PushS
	PlayAnimation(var_540_string, var_541_string); // 0x898 Func
	goto Label_2193; // 0x89a Jump
}


func_6721()
{
	var_70_object = Obj(); var_71_object = Obj(); // 0x1a41 PushV
	var_72_string = "d2q02"; // 0x1a42 PushS
	var_73_int = 4; // 0x1a43 PushI
	SetVariable(var_72_string, var_73_int); // 0x1a44 Func
	var_74_object = Obj(); // 0x1a46 PushV
	func_7252(var_74_object); // 0x1a47 NEW_2
	var_71_object = var_74_object; // 0x1a48 Mov
	var_81_string = "d2q02MariaGotoPetr"; // 0x1a4a PushS
	var_82_string = "pt_map_petr"; // 0x1a4b PushS
	var_83_int = 0; // 0x1a4c PushI
	var_84_int = 515275; // 0x1a4d PushI
	var_85_float = 0; // 0x1a4e PushV
	func_6559(var_85_float); // 0x1a4f NEW_2
	AddMark(var_81_string, var_82_string, var_83_int, var_84_int, var_85_float); // 0x1a51 ObjFunc
	func_7185(); // 0x1a54 NEW_2
	return 2; // 0x1a56 Return
}


func_6212(var_57_bool)
{
	var_58_bool = 0; var_59_bool = 0; // 0x1844 PushV
	IsLoaded(var_59_bool); // 0x1845 Func
	var_57_bool = var_59_bool; // 0x1847 Mov
	return 2; // 0x1848 Return
}


func_6217(var_88_bool, var_90_float)
{
	var_91_float = 0; var_92_cvector = CVector(0,0,0); var_93_cvector = CVector(0,0,0); var_94_cvector = CVector(0,0,0); var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0); var_98_bool = 0; var_99_bool = 0; var_100_float = 0; var_101_cvector = CVector(0,0,0); var_102_cvector = CVector(0,0,0); var_103_cvector = CVector(0,0,0); var_104_cvector = CVector(0,0,0); var_105_cvector = CVector(0,0,0); var_106_cvector = CVector(0,0,0); var_107_bool = 0; var_108_bool = 0; // 0x1849 PushV
	GetPosition(var_101_cvector); // 0x184a ObjFunc
	GetEyesHeight(var_100_float); // 0x184c ObjFunc
	var_109_float = GetByIndex(var_101_cvector, 1); // 0x184e PushE
	var_109_float = var_109_float + var_100_float; // 0x184f Add2
	SetByIndex(var_101_cvector, 1) = var_109_float; // 0x1850 PopE
	GetPosition(var_102_cvector); // 0x1851 Func
	GetEyesHeight(var_100_float); // 0x1853 Func
	var_110_float = GetByIndex(var_102_cvector, 1); // 0x1855 PushE
	var_110_float = var_110_float + var_100_float; // 0x1856 Add2
	SetByIndex(var_102_cvector, 1) = var_110_float; // 0x1857 PopE
	var_103_cvector = var_101_cvector - var_102_cvector; // 0x1858 Sub2
	var_111_float = GetByIndex(var_103_cvector, 1); // 0x1859 PushE
	var_111_float = 0; // 0x185a MovI
	SetByIndex(var_103_cvector, 1) = var_111_float; // 0x185b PopE
	var_112_int = var_103_cvector | var_103_cvector; // 0x185c Or
	var_113_float = sqrt(var_112_int); // 0x185d Sqrt
	var_103_cvector = var_103_cvector / var_103_cvector; // 0x185e Div2
	var_104_cvector = -var_103_cvector; // 0x185f Neg2
	var_114_float = var_103_cvector * var_90_float; // 0x1860 Mult
	var_115_cvector = CVector(0,0,0); var_116_cvector = CVector(0,0,0); // 0x1861 PushV
	var_117_cvector = CVector(0.0, 1.0, 0.0); // 0x1862 PushVec
	var_116_cvector = var_104_cvector ^ var_117_cvector; // 0x1863 Xor2
	func_6501(var_115_cvector, var_116_cvector); // 0x1864 NEW_2
	var_123_int = 25; // 0x1866 PushI
	var_124_float = var_115_cvector * var_123_int; // 0x1867 Mult
	var_125_int = var_114_float + var_124_float; // 0x1868 Add
	var_126_cvector = CVector(0.0, 10.0, 0.0); // 0x1869 PushVec
	var_105_cvector = var_125_int - var_126_cvector; // 0x186a Sub2
	var_106_cvector = var_102_cvector + var_105_cvector; // 0x186b Add2
	IsOverrideActive(var_107_bool); // 0x186c Func
	var_127_bool = var_107_bool; // 0x186e Push
	if(var_127_bool == 0) goto Label_6258; // 0x186f JumpB
	var_88_bool = 0; // 0x1870 MovB
	return 18; // 0x1871 Return
	
Label_6258:
	StopWorld(); // 0x1872 Func
	var_128_bool = 1; // 0x1874 PushB
	CameraTransit(var_106_cvector, var_104_cvector, var_128_bool); // 0x1875 Func
	var_129_float = GetByIndex(var_105_cvector, 0); // 0x1877 PushE
	var_130_float = GetByIndex(var_105_cvector, 2); // 0x1878 PushE
	Rotate(var_129_float, var_130_float); // 0x1879 Func
	var_131_bool = 0; // 0x187b PushV
	func_6611(var_131_bool); // 0x187c NEW_2
	if(var_131_bool == 0) goto Label_6272; // 0x187e JumpB
	goto Label_6280; // 0x187f Jump
	
Label_6280:
	CameraWaitForPlayFinish(); // 0x1888 Func
	ResumeWorld(); // 0x188a Func
	var_88_bool = 1; // 0x188c MovB
	return 18; // 0x188d Return
	
Label_6272:
	var_132_string = "head"; // 0x1880 PushS
	HasAnimationTrack(var_108_bool, var_132_string); // 0x1881 Func
	var_133_bool = var_108_bool; // 0x1883 Push
	if(var_133_bool == 0) goto Label_6280; // 0x1884 JumpB
	var_134_string = "head"; // 0x1885 PushS
	LookAsyncCamera(var_134_string); // 0x1886 Func
}


func_4687(var_0_object, var_952_int, var_953_object)
{
	var_955_object = Obj(); var_956_bool = 0; var_957_int = 0; var_958_bool = 0; var_959_object = Obj(); var_960_bool = 0; var_961_int = 0; var_962_bool = 0; // 0x124f PushV
	var_0_object = var_953_object; // 0x1250 TMov
	var_963_bool = 0; var_964_object = Obj(); var_965_float = 0; // 0x1251 PushV
	var_964_object = var_953_object; // 0x1252 Mov
	var_965_float = 70.0; // 0x1253 MovF
	func_6217(var_964_object, var_965_float); // 0x1254 NEW_2
	var_966_bool = var_963_bool == 0; // 0x1256 Not
	if(var_966_bool == 0) goto Label_4698; // 0x1257 JumpB
	var_952_int = -2; // 0x1258 MovI
	return 8; // 0x1259 Return
	
Label_4698:
	CreateDialog(var_959_object); // 0x125a Func
	var_967_int = 0; // 0x125c PushV
	func_6605(var_967_int); // 0x125d NEW_2
	SetNPCName(var_967_int); // 0x125f ObjFunc
	var_968_int = 0; // 0x1261 PushV
	func_6603(var_968_int); // 0x1262 NEW_2
	SetNPCDescription(var_968_int); // 0x1264 ObjFunc
	var_969_string = ""; // 0x1266 PushV
	func_6607(var_969_string); // 0x1267 NEW_2
	SetPhoto(var_969_string); // 0x1269 ObjFunc
	var_970_string = ""; // 0x126b PushV
	func_6609(var_970_string); // 0x126c NEW_2
	SetPhoto2(var_970_string); // 0x126e ObjFunc
	var_971_int = 0; // 0x1270 PushV
	func_7269(var_971_int); // 0x1271 NEW_2
	SetPlayerName(var_971_int); // 0x1273 ObjFunc
	var_961_int = -1; // 0x1275 MovI
	IsOverrideActive(var_960_bool); // 0x1276 Func
	var_972_bool = var_960_bool; // 0x1278 Push
	if(var_972_bool == 0) goto Label_4732; // 0x1279 JumpB
	var_952_int = -2; // 0x127a MovI
	return 8; // 0x127b Return
	
Label_4732:
	DoDialog(var_959_object); // 0x127c Func
	var_973_bool = 0; var_974_object = Obj(); // 0x127e PushV
	var_975_object = Obj(); // 0x127f PushV
	func_6495(var_975_object); // 0x1280 NEW_2
	var_974_object = var_975_object; // 0x1281 Mov
	func_6304(var_973_bool, var_974_object); // 0x1283 NEW_2
	var_976_object = Obj(); var_977_object = Obj(); // 0x1285 PushV
	var_976_object = var_953_object; // 0x1286 Mov
	var_977_object = var_959_object; // 0x1287 Mov
	TaskCall(17); // 0x1288 TaskCall
	func_4768(var_978_object, var_979_object, var_980_string, var_981_bool, var_976_object, var_977_object); // 0x1289 NEW_2
	TaskReturn(); // 0x128a TaskReturn
	IsDialogEnd(var_962_bool); // 0x128c ObjFunc
	
Label_4750:
	var_1056_bool = var_962_bool == 0; // 0x128e Not
	if(var_1056_bool == 0) goto Label_4757; // 0x128f JumpB
	sync(); // 0x1290 Func
	IsDialogEnd(var_962_bool); // 0x1292 ObjFunc
	goto Label_4750; // 0x1294 Jump
	
Label_4757:
	var_1057_object = Obj(); // 0x1295 PushV
	var_1057_object = var_953_object; // 0x1296 Mov
	func_6286(); // 0x1297 NEW_2
	StopDialog(var_959_object); // 0x1299 Func
	GetReturnValue(var_961_int); // 0x129b ObjFunc
	var_952_int = var_961_int; // 0x129d Mov
	return 8; // 0x129e Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_244_object, var_245_object)
{
	var_0_object = var_245_object; // 0x52 TMov
	var_1_object = var_244_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_250_int = 1; // 0x55 PushI
	if(var_250_int == 0) goto Label_124; // 0x56 JumpB
	var_251_object = Obj(); var_252_object = Obj(); // 0x57 PushV
	var_251_object = var_1_object; // 0x58 MovT
	var_252_object = var_0_object; // 0x59 MovT
	func_6780(); // 0x5a NEW_2
	var_255_string = ""; // 0x5c PushV
	var_255_string = "Staring"; // 0x5d MovS
	func_154(var_245_object, var_255_string); // 0x5e NEW_2
	var_272_int = 500072; // 0x60 PushI
	SetMessage(var_272_int); // 0x61 TObjFunc
	ClearReplies(); // 0x63 TObjFunc
	var_273_int = 500073; // 0x65 PushI
	var_274_int = 87; // 0x66 PushI
	var_275_int = 85; // 0x67 PushI
	AddReply(var_273_int, var_274_int, var_275_int); // 0x68 TObjFunc
	var_276_int = 500074; // 0x6a PushI
	var_277_int = 88; // 0x6b PushI
	var_278_int = 86; // 0x6c PushI
	AddReply(var_276_int, var_277_int, var_278_int); // 0x6d TObjFunc
	var_279_int = 500086; // 0x6f PushI
	var_280_int = 87; // 0x70 PushI
	var_281_int = 98; // 0x71 PushI
	AddReply(var_279_int, var_280_int, var_281_int); // 0x72 TObjFunc
	var_282_int = 500087; // 0x74 PushI
	var_283_int = 87; // 0x75 PushI
	var_284_int = 99; // 0x76 PushI
	AddReply(var_282_int, var_283_int, var_284_int); // 0x77 TObjFunc
	goto Label_124; // 0x79 Jump
	
Label_124:
	var_285_bool = 0; // 0x7c PushV
	func_6611(var_285_bool); // 0x7d NEW_2
	if(var_285_bool == 0) goto Label_139; // 0x7f JumpB
	
Label_128:
	lshWaitForAnimEnd(); // 0x80 Func
	var_286_string = var_3_string; // 0x82 PushT
	if(var_286_string == 0) goto Label_133; // 0x83 JumpB
	goto Label_138; // 0x84 Jump
	
Label_138:
	goto Label_153; // 0x8a Jump
	
Label_153:
	return 0; // 0x99 Return
	
Label_133:
	var_287_string = ""; // 0x85 PushV
	var_287_string = var_2_object; // 0x86 MovT
	func_6442(var_287_string); // 0x87 NEW_2
	goto Label_128; // 0x89 Jump
	
Label_139:
	var_298_string = "all"; // 0x8b PushS
	var_299_string = "idle"; // 0x8c PushS
	PlayAnimation(var_298_string, var_299_string); // 0x8d Func
	
Label_143:
	WaitForAnimEnd(); // 0x8f Func
	var_300_string = var_3_string; // 0x91 PushT
	if(var_300_string == 0) goto Label_148; // 0x92 JumpB
	goto Label_153; // 0x93 Jump
	
Label_148:
	var_301_string = "all"; // 0x94 PushS
	var_302_string = "idle"; // 0x95 PushS
	PlayAnimation(var_301_string, var_302_string); // 0x96 Func
	goto Label_143; // 0x98 Jump
}


func_7252(var_74_object)
{
	var_75_object = Obj(); var_76_object = Obj(); var_77_object = Obj(); var_78_object = Obj(); // 0x1c54 PushV
	GetMainOutdoorScene(var_77_object); // 0x1c55 Func
	var_79_bool = var_77_object == 0; // 0x1c57 NullEq
	if(var_79_bool == 0) goto Label_7263; // 0x1c58 JumpB
	var_80_string = "Can't find main outdoor scene"; // 0x1c59 PushS
	Trace(var_80_string); // 0x1c5a Func
	var_78_object = 0; // 0x1c5c SetNull
	var_74_object = var_78_object; // 0x1c5d Mov
	return 4; // 0x1c5e Return
	
Label_7263:
	GetMap(var_78_object); // 0x1c5f ObjFunc
	var_74_object = var_78_object; // 0x1c61 Mov
	return 4; // 0x1c62 Return
}


func_5716(var_0_object, var_1116_int, var_1117_object)
{
	var_1119_object = Obj(); var_1120_bool = 0; var_1121_int = 0; var_1122_bool = 0; var_1123_object = Obj(); var_1124_bool = 0; var_1125_int = 0; var_1126_bool = 0; // 0x1654 PushV
	var_0_object = var_1117_object; // 0x1655 TMov
	var_1127_bool = 0; var_1128_object = Obj(); var_1129_float = 0; // 0x1656 PushV
	var_1128_object = var_1117_object; // 0x1657 Mov
	var_1129_float = 70.0; // 0x1658 MovF
	func_6217(var_1128_object, var_1129_float); // 0x1659 NEW_2
	var_1130_bool = var_1127_bool == 0; // 0x165b Not
	if(var_1130_bool == 0) goto Label_5727; // 0x165c JumpB
	var_1116_int = -2; // 0x165d MovI
	return 8; // 0x165e Return
	
Label_5727:
	CreateDialog(var_1123_object); // 0x165f Func
	var_1131_int = 0; // 0x1661 PushV
	func_6605(var_1131_int); // 0x1662 NEW_2
	SetNPCName(var_1131_int); // 0x1664 ObjFunc
	var_1132_int = 0; // 0x1666 PushV
	func_6603(var_1132_int); // 0x1667 NEW_2
	SetNPCDescription(var_1132_int); // 0x1669 ObjFunc
	var_1133_string = ""; // 0x166b PushV
	func_6607(var_1133_string); // 0x166c NEW_2
	SetPhoto(var_1133_string); // 0x166e ObjFunc
	var_1134_string = ""; // 0x1670 PushV
	func_6609(var_1134_string); // 0x1671 NEW_2
	SetPhoto2(var_1134_string); // 0x1673 ObjFunc
	var_1135_int = 0; // 0x1675 PushV
	func_7269(var_1135_int); // 0x1676 NEW_2
	SetPlayerName(var_1135_int); // 0x1678 ObjFunc
	var_1125_int = -1; // 0x167a MovI
	IsOverrideActive(var_1124_bool); // 0x167b Func
	var_1136_bool = var_1124_bool; // 0x167d Push
	if(var_1136_bool == 0) goto Label_5761; // 0x167e JumpB
	var_1116_int = -2; // 0x167f MovI
	return 8; // 0x1680 Return
	
Label_5761:
	DoDialog(var_1123_object); // 0x1681 Func
	var_1137_bool = 0; var_1138_object = Obj(); // 0x1683 PushV
	var_1139_object = Obj(); // 0x1684 PushV
	func_6495(var_1139_object); // 0x1685 NEW_2
	var_1138_object = var_1139_object; // 0x1686 Mov
	func_6304(var_1137_bool, var_1138_object); // 0x1688 NEW_2
	var_1140_object = Obj(); var_1141_object = Obj(); // 0x168a PushV
	var_1140_object = var_1117_object; // 0x168b Mov
	var_1141_object = var_1123_object; // 0x168c Mov
	TaskCall(21); // 0x168d TaskCall
	func_5797(var_1142_object, var_1143_object, var_1144_string, var_1145_bool, var_1140_object, var_1141_object); // 0x168e NEW_2
	TaskReturn(); // 0x168f TaskReturn
	IsDialogEnd(var_1126_bool); // 0x1691 ObjFunc
	
Label_5779:
	var_1170_bool = var_1126_bool == 0; // 0x1693 Not
	if(var_1170_bool == 0) goto Label_5786; // 0x1694 JumpB
	sync(); // 0x1695 Func
	IsDialogEnd(var_1126_bool); // 0x1697 ObjFunc
	goto Label_5779; // 0x1699 Jump
	
Label_5786:
	var_1171_object = Obj(); // 0x169a PushV
	var_1171_object = var_1117_object; // 0x169b Mov
	func_6286(); // 0x169c NEW_2
	StopDialog(var_1123_object); // 0x169e Func
	GetReturnValue(var_1125_int); // 0x16a0 ObjFunc
	var_1116_int = var_1125_int; // 0x16a2 Mov
	return 8; // 0x16a3 Return
}


func_6744()
{
	var_137_string = "d2q03MariaGotoViktor"; // 0x1a59 PushS
	var_138_int = 1; // 0x1a5a PushI
	SetVariable(var_137_string, var_138_int); // 0x1a5b Func
	return 0; // 0x1a5d Return
}


func_6750()
{
	var_100_string = "KnowViktor"; // 0x1a5f PushS
	var_101_int = 1; // 0x1a60 PushI
	SetVariable(var_100_string, var_101_int); // 0x1a61 Func
	return 0; // 0x1a63 Return
}


func_2655(var_0_object, var_546_int, var_547_object)
{
	var_549_object = Obj(); var_550_bool = 0; var_551_int = 0; var_552_bool = 0; var_553_object = Obj(); var_554_bool = 0; var_555_int = 0; var_556_bool = 0; // 0xa5f PushV
	var_0_object = var_547_object; // 0xa60 TMov
	var_557_bool = 0; var_558_object = Obj(); var_559_float = 0; // 0xa61 PushV
	var_558_object = var_547_object; // 0xa62 Mov
	var_559_float = 70.0; // 0xa63 MovF
	func_6217(var_558_object, var_559_float); // 0xa64 NEW_2
	var_560_bool = var_557_bool == 0; // 0xa66 Not
	if(var_560_bool == 0) goto Label_2666; // 0xa67 JumpB
	var_546_int = -2; // 0xa68 MovI
	return 8; // 0xa69 Return
	
Label_2666:
	CreateDialog(var_553_object); // 0xa6a Func
	var_561_int = 0; // 0xa6c PushV
	func_6605(var_561_int); // 0xa6d NEW_2
	SetNPCName(var_561_int); // 0xa6f ObjFunc
	var_562_int = 0; // 0xa71 PushV
	func_6603(var_562_int); // 0xa72 NEW_2
	SetNPCDescription(var_562_int); // 0xa74 ObjFunc
	var_563_string = ""; // 0xa76 PushV
	func_6607(var_563_string); // 0xa77 NEW_2
	SetPhoto(var_563_string); // 0xa79 ObjFunc
	var_564_string = ""; // 0xa7b PushV
	func_6609(var_564_string); // 0xa7c NEW_2
	SetPhoto2(var_564_string); // 0xa7e ObjFunc
	var_565_int = 0; // 0xa80 PushV
	func_7269(var_565_int); // 0xa81 NEW_2
	SetPlayerName(var_565_int); // 0xa83 ObjFunc
	var_555_int = -1; // 0xa85 MovI
	IsOverrideActive(var_554_bool); // 0xa86 Func
	var_566_bool = var_554_bool; // 0xa88 Push
	if(var_566_bool == 0) goto Label_2700; // 0xa89 JumpB
	var_546_int = -2; // 0xa8a MovI
	return 8; // 0xa8b Return
	
Label_2700:
	DoDialog(var_553_object); // 0xa8c Func
	var_567_bool = 0; var_568_object = Obj(); // 0xa8e PushV
	var_569_object = Obj(); // 0xa8f PushV
	func_6495(var_569_object); // 0xa90 NEW_2
	var_568_object = var_569_object; // 0xa91 Mov
	func_6304(var_567_bool, var_568_object); // 0xa93 NEW_2
	var_570_object = Obj(); var_571_object = Obj(); // 0xa95 PushV
	var_570_object = var_547_object; // 0xa96 Mov
	var_571_object = var_553_object; // 0xa97 Mov
	TaskCall(9); // 0xa98 TaskCall
	func_2736(var_572_object, var_573_object, var_574_string, var_575_bool, var_570_object, var_571_object); // 0xa99 NEW_2
	TaskReturn(); // 0xa9a TaskReturn
	IsDialogEnd(var_556_bool); // 0xa9c ObjFunc
	
Label_2718:
	var_629_bool = var_556_bool == 0; // 0xa9e Not
	if(var_629_bool == 0) goto Label_2725; // 0xa9f JumpB
	sync(); // 0xaa0 Func
	IsDialogEnd(var_556_bool); // 0xaa2 ObjFunc
	goto Label_2718; // 0xaa4 Jump
	
Label_2725:
	var_630_object = Obj(); // 0xaa5 PushV
	var_630_object = var_547_object; // 0xaa6 Mov
	func_6286(); // 0xaa7 NEW_2
	StopDialog(var_553_object); // 0xaa9 Func
	GetReturnValue(var_555_int); // 0xaab ObjFunc
	var_546_int = var_555_int; // 0xaad Mov
	return 8; // 0xaae Return
}


func_6756()
{
	var_277_string = "KnowAlexandr"; // 0x1a65 PushS
	var_278_int = 1; // 0x1a66 PushI
	SetVariable(var_277_string, var_278_int); // 0x1a67 Func
	return 0; // 0x1a69 Return
}


func_7269(var_140_int)
{
	var_141_int = 0; var_142_int = 0; // 0x1c65 PushV
	var_143_string = "branch"; // 0x1c66 PushS
	GetVariable(var_143_string, var_142_int); // 0x1c67 Func
	var_144_int = 0; // 0x1c69 PushI
	var_145_bool = var_142_int == var_144_int; // 0x1c6a Eq
	if(var_145_bool == 0) goto Label_7279; // 0x1c6b JumpB
	var_140_int = 1; // 0x1c6c MovI
	return 2; // 0x1c6d Return
	
Label_7279:
	var_146_int = 1; // 0x1c6f PushI
	var_147_bool = var_142_int == var_146_int; // 0x1c70 Eq
	if(var_147_bool == 0) goto Label_7284; // 0x1c71 JumpB
	var_140_int = 2; // 0x1c72 MovI
	return 2; // 0x1c73 Return
	
Label_7284:
	var_140_int = 3; // 0x1c74 MovI
	return 2; // 0x1c75 Return
}


func_6762()
{
	var_760_string = "ood6Maria1"; // 0x1a6b PushS
	var_761_int = 1; // 0x1a6c PushI
	SetVariable(var_760_string, var_761_int); // 0x1a6d Func
	return 0; // 0x1a6f Return
}


func_6768()
{
	var_64_string = "ood6Maria2"; // 0x1a71 PushS
	var_65_int = 1; // 0x1a72 PushI
	SetVariable(var_64_string, var_65_int); // 0x1a73 Func
	return 0; // 0x1a75 Return
}


func_6774()
{
	var_915_string = "ood8Maria1"; // 0x1a77 PushS
	var_916_int = 1; // 0x1a78 PushI
	SetVariable(var_915_string, var_916_int); // 0x1a79 Func
	return 0; // 0x1a7b Return
}


func_7286(var_75_bool, var_76_int)
{
	var_77_int = 6; // 0x1c77 PushI
	add(var_77_int); // 0x1c78 ObjFunc
	var_78_int = 26; // 0x1c7a PushI
	add(var_78_int); // 0x1c7b ObjFunc
	var_79_int = 2; // 0x1c7d PushI
	add(var_79_int); // 0x1c7e ObjFunc
	var_80_int = 22; // 0x1c80 PushI
	add(var_80_int); // 0x1c81 ObjFunc
	var_81_bool = 0; // 0x1c83 PushB
	var_82_bool = var_75_bool == var_81_bool; // 0x1c84 Eq
	if(var_82_bool == 0) goto Label_7312; // 0x1c85 JumpB
	var_83_int = 15; // 0x1c86 PushI
	add(var_83_int); // 0x1c87 ObjFunc
	var_84_int = 5; // 0x1c89 PushI
	add(var_84_int); // 0x1c8a ObjFunc
	var_85_int = 16; // 0x1c8c PushI
	add(var_85_int); // 0x1c8d ObjFunc
	goto Label_7318; // 0x1c8f Jump
	
Label_7318:
	return 0; // 0x1c96 Return
	
Label_7312:
	var_86_int = 0; // 0x1c90 PushI
	var_87_bool = var_76_int != var_86_int; // 0x1c91 Neq
	if(var_87_bool == 0) goto Label_7318; // 0x1c92 JumpB
	var_88_int = 15; // 0x1c93 PushI
	add(var_88_int); // 0x1c94 ObjFunc
}


func_6780()
{
	var_253_string = "KnowMaria"; // 0x1a7d PushS
	var_254_int = 1; // 0x1a7e PushI
	SetVariable(var_253_string, var_254_int); // 0x1a7f Func
	return 0; // 0x1a81 Return
}


func_6786()
{
	var_64_string = "resque_list"; // 0x1a83 PushS
	var_65_int = 1; // 0x1a84 PushI
	SetVariable(var_64_string, var_65_int); // 0x1a85 Func
	func_7356(); // 0x1a88 NEW_2
	return 0; // 0x1a8a Return
}


func_6795()
{
	var_102_int = 2000; // 0x1a8c PushI
	SetReturnValue(var_102_int); // 0x1a8d ObjFunc
	return 0; // 0x1a8f Return
}


func_6286()
{
	var_305_bool = 0; var_306_bool = 0; // 0x188e PushV
	var_307_bool = 1; // 0x188f PushB
	CameraSwitchToNormal(var_307_bool); // 0x1890 Func
	var_308_bool = 0; // 0x1892 PushV
	func_6611(var_308_bool); // 0x1893 NEW_2
	if(var_308_bool == 0) goto Label_6295; // 0x1895 JumpB
	goto Label_6303; // 0x1896 Jump
	
Label_6303:
	return 2; // 0x189f Return
	
Label_6295:
	var_309_string = "head"; // 0x1897 PushS
	HasAnimationTrack(var_306_bool, var_309_string); // 0x1898 Func
	var_310_bool = var_306_bool; // 0x189a Push
	if(var_310_bool == 0) goto Label_6303; // 0x189b JumpB
	var_311_string = "head"; // 0x189c PushS
	UnlookAsync(var_311_string); // 0x189d Func
}


func_6800()
{
	var_153_string = "ood1Maria5"; // 0x1a91 PushS
	var_154_int = 1; // 0x1a92 PushI
	SetVariable(var_153_string, var_154_int); // 0x1a93 Func
	return 0; // 0x1a95 Return
}


func_6806()
{
	var_764_string = "d6MariaVisit"; // 0x1a97 PushS
	var_765_int = 1; // 0x1a98 PushI
	SetVariable(var_764_string, var_765_int); // 0x1a99 Func
	return 0; // 0x1a9b Return
}


func_7319(var_90_int)
{
	var_91_int = 0; var_92_int = 0; // 0x1c97 PushV
	var_93_string = "vol_"; // 0x1c98 PushS
	var_94_int = var_93_string + var_90_int; // 0x1c99 Add
	GetVariable(var_94_int, var_92_int); // 0x1c9a Func
	var_95_string = "vol_"; // 0x1c9c PushS
	var_96_int = var_95_string + var_90_int; // 0x1c9d Add
	var_97_int = 8; // 0x1c9e PushI
	var_98_int = var_92_int | var_97_int; // 0x1c9f Or
	SetVariable(var_96_int, var_98_int); // 0x1ca0 Func
	return 2; // 0x1ca2 Return
}


func_154(var_2_object, var_255_string)
{
	var_256_bool = 0; // 0x9b PushV
	func_6611(var_256_bool); // 0x9c NEW_2
	var_257_bool = var_256_bool == 0; // 0x9e Not
	if(var_257_bool == 0) goto Label_161; // 0x9f JumpB
	return 0; // 0xa0 Return
	
Label_161:
	var_258_bool = var_255_string == var_2_object; // 0xa1 Eq
	if(var_258_bool == 0) goto Label_164; // 0xa2 JumpB
	return 0; // 0xa3 Return
	
Label_164:
	var_259_string = ""; var_260_bool = 0; // 0xa4 PushV
	var_259_string = var_255_string; // 0xa5 Mov
	var_261_string = ""; // 0xa6 PushS
	var_262_bool = var_255_string == var_261_string; // 0xa7 Eq
	if(var_262_bool == 0) goto Label_171; // 0xa8 JumpB
	var_260_bool = 0; // 0xa9 MovB
	goto Label_172; // 0xaa Jump
	
Label_172:
	func_6458(var_259_string, var_260_bool); // 0xac NEW_2
	var_2_object = var_255_string; // 0xae TMov
	return 0; // 0xaf Return
	
Label_171:
	var_260_bool = 1; // 0xab MovB
}


func_2204(var_2_object, var_490_string)
{
	var_491_bool = 0; // 0x89d PushV
	func_6611(var_491_bool); // 0x89e NEW_2
	var_492_bool = var_491_bool == 0; // 0x8a0 Not
	if(var_492_bool == 0) goto Label_2211; // 0x8a1 JumpB
	return 0; // 0x8a2 Return
	
Label_2211:
	var_493_bool = var_490_string == var_2_object; // 0x8a3 Eq
	if(var_493_bool == 0) goto Label_2214; // 0x8a4 JumpB
	return 0; // 0x8a5 Return
	
Label_2214:
	var_494_string = ""; var_495_bool = 0; // 0x8a6 PushV
	var_494_string = var_490_string; // 0x8a7 Mov
	var_496_string = ""; // 0x8a8 PushS
	var_497_bool = var_490_string == var_496_string; // 0x8a9 Eq
	if(var_497_bool == 0) goto Label_2221; // 0x8aa JumpB
	var_495_bool = 0; // 0x8ab MovB
	goto Label_2222; // 0x8ac Jump
	
Label_2222:
	func_6458(var_494_string, var_495_bool); // 0x8ae NEW_2
	var_2_object = var_490_string; // 0x8b0 TMov
	return 0; // 0x8b1 Return
	
Label_2221:
	var_495_bool = 1; // 0x8ad MovB
}


func_6812()
{
	var_1007_string = "ood10Maria1"; // 0x1a9d PushS
	var_1008_int = 1; // 0x1a9e PushI
	SetVariable(var_1007_string, var_1008_int); // 0x1a9f Func
	return 0; // 0x1aa1 Return
}


func_6304(var_149_bool, var_150_object)
{
	var_154_int = 0; var_155_int = 0; var_156_int = 0; var_157_int = 0; // 0x18a0 PushV
	var_158_string = "voice_common"; // 0x18a1 PushS
	GetVariable(var_158_string, var_156_int); // 0x18a2 Func
	var_159_int = var_156_int; // 0x18a4 Push
	if(var_159_int == 0) goto Label_6342; // 0x18a5 JumpB
	var_160_bool = 0; var_161_object = Obj(); // 0x18a6 PushV
	var_161_object = var_150_object; // 0x18a7 Mov
	func_6362(var_161_object); // 0x18a8 NEW_2
	var_190_bool = var_160_bool == 0; // 0x18aa Not
	if(var_190_bool == 0) goto Label_6324; // 0x18ab JumpB
	var_191_bool = 0; var_192_object = Obj(); // 0x18ac PushV
	var_192_object = var_150_object; // 0x18ad Mov
	func_6399(var_192_object); // 0x18ae NEW_2
	var_226_bool = var_191_bool == 0; // 0x18b0 Not
	if(var_226_bool == 0) goto Label_6324; // 0x18b1 JumpB
	var_149_bool = 0; // 0x18b2 MovB
	return 4; // 0x18b3 Return
	
Label_6324:
	var_227_int = 2; // 0x18b4 PushI
	irand(var_157_int, var_227_int); // 0x18b5 Func
	var_228_int = var_157_int; // 0x18b7 Push
	if(var_228_int == 0) goto Label_6337; // 0x18b8 JumpB
	var_229_string = "voice_common"; // 0x18b9 PushS
	var_230_int = 1; // 0x18ba PushI
	var_231_int = var_156_int + var_230_int; // 0x18bb Add
	var_232_int = 3; // 0x18bc PushI
	var_233_int = var_231_int / var_232_int; // 0x18bd Mod
	SetVariable(var_229_string, var_233_int); // 0x18be Func
	goto Label_6341; // 0x18c0 Jump
	
Label_6341:
	goto Label_6360; // 0x18c5 Jump
	
Label_6360:
	var_149_bool = 1; // 0x18d8 MovB
	return 4; // 0x18d9 Return
	
Label_6337:
	var_234_string = "voice_common"; // 0x18c1 PushS
	var_235_int = 0; // 0x18c2 PushI
	SetVariable(var_234_string, var_235_int); // 0x18c3 Func
	
Label_6342:
	var_236_bool = 0; var_237_object = Obj(); // 0x18c6 PushV
	var_237_object = var_150_object; // 0x18c7 Mov
	func_6399(var_237_object); // 0x18c8 NEW_2
	var_238_bool = var_236_bool == 0; // 0x18ca Not
	if(var_238_bool == 0) goto Label_6356; // 0x18cb JumpB
	var_239_bool = 0; var_240_object = Obj(); // 0x18cc PushV
	var_240_object = var_150_object; // 0x18cd Mov
	func_6362(var_240_object); // 0x18ce NEW_2
	var_241_bool = var_239_bool == 0; // 0x18d0 Not
	if(var_241_bool == 0) goto Label_6356; // 0x18d1 JumpB
	var_149_bool = 0; // 0x18d2 MovB
	return 4; // 0x18d3 Return
	
Label_6356:
	var_242_string = "voice_common"; // 0x18d4 PushS
	var_243_int = 1; // 0x18d5 PushI
	SetVariable(var_242_string, var_243_int); // 0x18d6 Func
}


func_4768(var_0_object, var_1_object, var_2_object, var_3_string, var_976_object, var_977_object)
{
	var_0_object = var_977_object; // 0x12a1 TMov
	var_1_object = var_976_object; // 0x12a2 TMov
	var_3_string = 0; // 0x12a3 TMovB
	var_982_int = 1; // 0x12a4 PushI
	if(var_982_int == 0) goto Label_4865; // 0x12a5 JumpB
	var_983_bool = 0; // 0x12a6 PushV
	var_983_bool = 0; // 0x12a7 MovB
	var_984_bool = 0; // 0x12a8 PushV
	var_984_bool = 0; // 0x12a9 MovB
	var_985_bool = 0; var_986_object = Obj(); // 0x12aa PushV
	var_986_object = var_1_object; // 0x12ab MovT
	func_7160(var_986_object); // 0x12ac NEW_2
	if(var_985_bool == 0) goto Label_4790; // 0x12ae JumpB
	var_991_bool = 0; var_992_object = Obj(); // 0x12af PushV
	var_992_object = var_1_object; // 0x12b0 MovT
	func_7148(var_992_object); // 0x12b1 NEW_2
	var_997_bool = var_991_bool == 0; // 0x12b3 Not
	if(var_997_bool == 0) goto Label_4790; // 0x12b4 JumpB
	var_984_bool = 1; // 0x12b5 MovB
	
Label_4790:
	if(var_984_bool == 0) goto Label_4798; // 0x12b6 JumpB
	var_998_bool = 0; var_999_object = Obj(); // 0x12b7 PushV
	var_999_object = var_1_object; // 0x12b8 MovT
	func_7136(var_999_object); // 0x12b9 NEW_2
	var_1004_bool = var_998_bool == 0; // 0x12bb Not
	if(var_1004_bool == 0) goto Label_4798; // 0x12bc JumpB
	var_983_bool = 1; // 0x12bd MovB
	
Label_4798:
	if(var_983_bool == 0) goto Label_4824; // 0x12be JumpB
	var_1005_object = Obj(); var_1006_object = Obj(); // 0x12bf PushV
	var_1005_object = var_1_object; // 0x12c0 MovT
	var_1006_object = var_0_object; // 0x12c1 MovT
	func_6812(); // 0x12c2 NEW_2
	var_1009_string = ""; // 0x12c4 PushV
	var_1009_string = "Mysterious"; // 0x12c5 MovS
	func_4895(var_977_object, var_1009_string); // 0x12c6 NEW_2
	var_1017_int = 512892; // 0x12c8 PushI
	SetMessage(var_1017_int); // 0x12c9 TObjFunc
	ClearReplies(); // 0x12cb TObjFunc
	var_1018_int = 539495; // 0x12cd PushI
	var_1019_int = 41421; // 0x12ce PushI
	var_1020_int = 41420; // 0x12cf PushI
	AddReply(var_1018_int, var_1019_int, var_1020_int); // 0x12d0 TObjFunc
	var_1021_int = 539501; // 0x12d2 PushI
	var_1022_int = 41427; // 0x12d3 PushI
	var_1023_int = 41426; // 0x12d4 PushI
	AddReply(var_1021_int, var_1022_int, var_1023_int); // 0x12d5 TObjFunc
	goto Label_4865; // 0x12d7 Jump
	
Label_4865:
	var_1024_bool = 0; // 0x1301 PushV
	func_6611(var_1024_bool); // 0x1302 NEW_2
	if(var_1024_bool == 0) goto Label_4880; // 0x1304 JumpB
	
Label_4869:
	lshWaitForAnimEnd(); // 0x1305 Func
	var_1025_string = var_3_string; // 0x1307 PushT
	if(var_1025_string == 0) goto Label_4874; // 0x1308 JumpB
	goto Label_4879; // 0x1309 Jump
	
Label_4879:
	goto Label_4894; // 0x130f Jump
	
Label_4894:
	return 0; // 0x131e Return
	
Label_4874:
	var_1026_string = ""; // 0x130a PushV
	var_1026_string = var_2_object; // 0x130b MovT
	func_6442(var_1026_string); // 0x130c NEW_2
	goto Label_4869; // 0x130e Jump
	
Label_4880:
	var_1027_string = "all"; // 0x1310 PushS
	var_1028_string = "idle"; // 0x1311 PushS
	PlayAnimation(var_1027_string, var_1028_string); // 0x1312 Func
	
Label_4884:
	WaitForAnimEnd(); // 0x1314 Func
	var_1029_string = var_3_string; // 0x1316 PushT
	if(var_1029_string == 0) goto Label_4889; // 0x1317 JumpB
	goto Label_4894; // 0x1318 Jump
	
Label_4889:
	var_1030_string = "all"; // 0x1319 PushS
	var_1031_string = "idle"; // 0x131a PushS
	PlayAnimation(var_1030_string, var_1031_string); // 0x131b Func
	goto Label_4884; // 0x131d Jump
	
Label_4824:
	var_1032_string = ""; // 0x12d8 PushV
	var_1032_string = "Mysterious"; // 0x12d9 MovS
	func_4895(var_977_object, var_1032_string); // 0x12da NEW_2
	var_1033_int = 512974; // 0x12dc PushI
	SetMessage(var_1033_int); // 0x12dd TObjFunc
	ClearReplies(); // 0x12df TObjFunc
	var_1034_bool = 0; // 0x12e1 PushV
	var_1034_bool = 0; // 0x12e2 MovB
	var_1035_bool = 0; var_1036_object = Obj(); // 0x12e3 PushV
	var_1036_object = var_1_object; // 0x12e4 MovT
	func_6896(var_1036_object); // 0x12e5 NEW_2
	if(var_1035_bool == 0) goto Label_4846; // 0x12e7 JumpB
	var_1041_bool = 0; var_1042_object = Obj(); // 0x12e8 PushV
	var_1042_object = var_1_object; // 0x12e9 MovT
	func_6908(var_1042_object); // 0x12ea NEW_2
	if(var_1041_bool == 0) goto Label_4846; // 0x12ec JumpB
	var_1034_bool = 1; // 0x12ed MovB
	
Label_4846:
	if(var_1034_bool == 0) goto Label_4852; // 0x12ee JumpB
	var_1047_int = 534097; // 0x12ef PushI
	var_1048_int = 38198; // 0x12f0 PushI
	var_1049_int = 35690; // 0x12f1 PushI
	AddReply(var_1047_int, var_1048_int, var_1049_int); // 0x12f2 TObjFunc
	
Label_4852:
	var_1050_int = 536416; // 0x12f4 PushI
	var_1051_int = -1; // 0x12f5 PushI
	var_1052_int = 38196; // 0x12f6 PushI
	AddReply(var_1050_int, var_1051_int, var_1052_int); // 0x12f7 TObjFunc
	var_1053_int = 512975; // 0x12f9 PushI
	var_1054_int = -1; // 0x12fa PushI
	var_1055_int = 14180; // 0x12fb PushI
	AddReply(var_1053_int, var_1054_int, var_1055_int); // 0x12fc TObjFunc
	goto Label_4865; // 0x12fe Jump
}


func_6818()
{
	var_64_string = "d10q01MariaSavePetr"; // 0x1aa3 PushS
	var_65_int = 1; // 0x1aa4 PushI
	SetVariable(var_64_string, var_65_int); // 0x1aa5 Func
	return 0; // 0x1aa7 Return
}


func_7331()
{
	var_66_object = Obj(); var_67_int = 0; var_68_int = 0; var_69_int = 0; var_70_object = Obj(); var_71_int = 0; var_72_int = 0; var_73_int = 0; // 0x1ca3 PushV
	CreateIntVector(var_70_object); // 0x1ca4 Func
	var_74_object = Obj(); var_75_bool = 0; var_76_int = 0; // 0x1ca6 PushV
	var_74_object = var_70_object; // 0x1ca7 Mov
	var_75_bool = 0; // 0x1ca8 MovB
	var_76_int = -1; // 0x1ca9 MovI
	func_7286(var_75_bool, var_76_int); // 0x1caa NEW_2
	size(var_71_int); // 0x1cac ObjFunc
	var_72_int = 0; // 0x1cae MovI
	
Label_7343:
	var_89_bool = var_72_int < var_71_int; // 0x1caf LT
	if(var_89_bool == 0) goto Label_7354; // 0x1cb0 JumpB
	get(var_73_int, var_72_int); // 0x1cb1 ObjFunc
	var_90_int = 0; // 0x1cb3 PushV
	var_90_int = var_73_int; // 0x1cb4 Mov
	func_7319(var_90_int); // 0x1cb5 NEW_2
	var_99_int = 1; // 0x1cb7 PushI
	var_72_int = var_72_int + var_99_int; // 0x1cb8 Add2
	goto Label_7343; // 0x1cb9 Jump
	
Label_7354:
	return 8; // 0x1cba Return
}


func_5797(var_0_object, var_1_object, var_2_object, var_3_string, var_1140_object, var_1141_object)
{
	var_0_object = var_1141_object; // 0x16a6 TMov
	var_1_object = var_1140_object; // 0x16a7 TMov
	var_3_string = 0; // 0x16a8 TMovB
	var_1146_int = 1; // 0x16a9 PushI
	if(var_1146_int == 0) goto Label_5825; // 0x16aa JumpB
	var_1147_string = ""; // 0x16ab PushV
	var_1147_string = "Neutral"; // 0x16ac MovS
	func_5855(var_1141_object, var_1147_string); // 0x16ad NEW_2
	var_1155_int = 540548; // 0x16af PushI
	SetMessage(var_1155_int); // 0x16b0 TObjFunc
	ClearReplies(); // 0x16b2 TObjFunc
	var_1156_int = 540549; // 0x16b4 PushI
	var_1157_int = -1; // 0x16b5 PushI
	var_1158_int = 42558; // 0x16b6 PushI
	AddReply(var_1156_int, var_1157_int, var_1158_int); // 0x16b7 TObjFunc
	var_1159_int = 540797; // 0x16b9 PushI
	var_1160_int = -1; // 0x16ba PushI
	var_1161_int = 42846; // 0x16bb PushI
	AddReply(var_1159_int, var_1160_int, var_1161_int); // 0x16bc TObjFunc
	goto Label_5825; // 0x16be Jump
	
Label_5825:
	var_1162_bool = 0; // 0x16c1 PushV
	func_6611(var_1162_bool); // 0x16c2 NEW_2
	if(var_1162_bool == 0) goto Label_5840; // 0x16c4 JumpB
	
Label_5829:
	lshWaitForAnimEnd(); // 0x16c5 Func
	var_1163_string = var_3_string; // 0x16c7 PushT
	if(var_1163_string == 0) goto Label_5834; // 0x16c8 JumpB
	goto Label_5839; // 0x16c9 Jump
	
Label_5839:
	goto Label_5854; // 0x16cf Jump
	
Label_5854:
	return 0; // 0x16de Return
	
Label_5834:
	var_1164_string = ""; // 0x16ca PushV
	var_1164_string = var_2_object; // 0x16cb MovT
	func_6442(var_1164_string); // 0x16cc NEW_2
	goto Label_5829; // 0x16ce Jump
	
Label_5840:
	var_1165_string = "all"; // 0x16d0 PushS
	var_1166_string = "idle"; // 0x16d1 PushS
	PlayAnimation(var_1165_string, var_1166_string); // 0x16d2 Func
	
Label_5844:
	WaitForAnimEnd(); // 0x16d4 Func
	var_1167_string = var_3_string; // 0x16d6 PushT
	if(var_1167_string == 0) goto Label_5849; // 0x16d7 JumpB
	goto Label_5854; // 0x16d8 Jump
	
Label_5849:
	var_1168_string = "all"; // 0x16d9 PushS
	var_1169_string = "idle"; // 0x16da PushS
	PlayAnimation(var_1168_string, var_1169_string); // 0x16db Func
	goto Label_5844; // 0x16dd Jump
}


func_6824(var_409_bool)
{
	var_411_int = 0; var_412_string = ""; // 0x1aa9 PushV
	var_412_string = "d1q01RescueListBadReply"; // 0x1aaa MovS
	func_6511(var_411_int, var_412_string); // 0x1aab NEW_2
	var_413_int = 0; // 0x1aad PushI
	var_414_bool = var_411_int != var_413_int; // 0x1aae Neq
	if(var_414_bool == 0) goto Label_6834; // 0x1aaf JumpB
	var_409_bool = 1; // 0x1ab0 MovB
	return 0; // 0x1ab1 Return
	
Label_6834:
	var_409_bool = 0; // 0x1ab2 MovB
	return 0; // 0x1ab3 Return
}


func_2736(var_0_object, var_1_object, var_2_object, var_3_string, var_570_object, var_571_object)
{
	var_0_object = var_571_object; // 0xab1 TMov
	var_1_object = var_570_object; // 0xab2 TMov
	var_3_string = 0; // 0xab3 TMovB
	var_576_int = 1; // 0xab4 PushI
	if(var_576_int == 0) goto Label_2797; // 0xab5 JumpB
	var_577_string = ""; // 0xab6 PushV
	var_577_string = "Mysterious"; // 0xab7 MovS
	func_2827(var_571_object, var_577_string); // 0xab8 NEW_2
	var_585_int = 510194; // 0xaba PushI
	SetMessage(var_585_int); // 0xabb TObjFunc
	ClearReplies(); // 0xabd TObjFunc
	var_586_bool = 0; // 0xabf PushV
	var_586_bool = 0; // 0xac0 MovB
	var_587_bool = 0; var_588_object = Obj(); // 0xac1 PushV
	var_588_object = var_1_object; // 0xac2 MovT
	func_7028(var_588_object); // 0xac3 NEW_2
	if(var_587_bool == 0) goto Label_2764; // 0xac5 JumpB
	var_593_bool = 0; var_594_object = Obj(); // 0xac6 PushV
	var_594_object = var_1_object; // 0xac7 MovT
	func_6932(var_594_object); // 0xac8 NEW_2
	if(var_593_bool == 0) goto Label_2764; // 0xaca JumpB
	var_586_bool = 1; // 0xacb MovB
	
Label_2764:
	if(var_586_bool == 0) goto Label_2770; // 0xacc JumpB
	var_599_int = 510401; // 0xacd PushI
	var_600_int = 11468; // 0xace PushI
	var_601_int = 11467; // 0xacf PushI
	AddReply(var_599_int, var_600_int, var_601_int); // 0xad0 TObjFunc
	
Label_2770:
	var_602_bool = 0; // 0xad2 PushV
	var_602_bool = 0; // 0xad3 MovB
	var_603_bool = 0; var_604_object = Obj(); // 0xad4 PushV
	var_604_object = var_1_object; // 0xad5 MovT
	func_6920(var_604_object); // 0xad6 NEW_2
	if(var_603_bool == 0) goto Label_2783; // 0xad8 JumpB
	var_609_bool = 0; var_610_object = Obj(); // 0xad9 PushV
	var_610_object = var_1_object; // 0xada MovT
	func_6944(var_610_object); // 0xadb NEW_2
	if(var_609_bool == 0) goto Label_2783; // 0xadd JumpB
	var_602_bool = 1; // 0xade MovB
	
Label_2783:
	if(var_602_bool == 0) goto Label_2789; // 0xadf JumpB
	var_615_int = 510195; // 0xae0 PushI
	var_616_int = 11242; // 0xae1 PushI
	var_617_int = 11241; // 0xae2 PushI
	AddReply(var_615_int, var_616_int, var_617_int); // 0xae3 TObjFunc
	
Label_2789:
	var_618_int = 534399; // 0xae5 PushI
	var_619_int = -1; // 0xae6 PushI
	var_620_int = 36018; // 0xae7 PushI
	AddReply(var_618_int, var_619_int, var_620_int); // 0xae8 TObjFunc
	goto Label_2797; // 0xaea Jump
	
Label_2797:
	var_621_bool = 0; // 0xaed PushV
	func_6611(var_621_bool); // 0xaee NEW_2
	if(var_621_bool == 0) goto Label_2812; // 0xaf0 JumpB
	
Label_2801:
	lshWaitForAnimEnd(); // 0xaf1 Func
	var_622_string = var_3_string; // 0xaf3 PushT
	if(var_622_string == 0) goto Label_2806; // 0xaf4 JumpB
	goto Label_2811; // 0xaf5 Jump
	
Label_2811:
	goto Label_2826; // 0xafb Jump
	
Label_2826:
	return 0; // 0xb0a Return
	
Label_2806:
	var_623_string = ""; // 0xaf6 PushV
	var_623_string = var_2_object; // 0xaf7 MovT
	func_6442(var_623_string); // 0xaf8 NEW_2
	goto Label_2801; // 0xafa Jump
	
Label_2812:
	var_624_string = "all"; // 0xafc PushS
	var_625_string = "idle"; // 0xafd PushS
	PlayAnimation(var_624_string, var_625_string); // 0xafe Func
	
Label_2816:
	WaitForAnimEnd(); // 0xb00 Func
	var_626_string = var_3_string; // 0xb02 PushT
	if(var_626_string == 0) goto Label_2821; // 0xb03 JumpB
	goto Label_2826; // 0xb04 Jump
	
Label_2821:
	var_627_string = "all"; // 0xb05 PushS
	var_628_string = "idle"; // 0xb06 PushS
	PlayAnimation(var_627_string, var_628_string); // 0xb07 Func
	goto Label_2816; // 0xb09 Jump
}


func_6836(var_424_bool)
{
	var_426_int = 0; var_427_string = ""; // 0x1ab5 PushV
	var_427_string = "ood1Maria1"; // 0x1ab6 MovS
	func_6511(var_426_int, var_427_string); // 0x1ab7 NEW_2
	var_428_int = 0; // 0x1ab9 PushI
	var_429_bool = var_426_int == var_428_int; // 0x1aba Eq
	if(var_429_bool == 0) goto Label_6846; // 0x1abb JumpB
	var_424_bool = 1; // 0x1abc MovB
	return 0; // 0x1abd Return
	
Label_6846:
	var_424_bool = 0; // 0x1abe MovB
	return 0; // 0x1abf Return
}


func_4280(var_0_object, var_876_int, var_877_object)
{
	var_879_object = Obj(); var_880_bool = 0; var_881_int = 0; var_882_bool = 0; var_883_object = Obj(); var_884_bool = 0; var_885_int = 0; var_886_bool = 0; // 0x10b8 PushV
	var_0_object = var_877_object; // 0x10b9 TMov
	var_887_bool = 0; var_888_object = Obj(); var_889_float = 0; // 0x10ba PushV
	var_888_object = var_877_object; // 0x10bb Mov
	var_889_float = 70.0; // 0x10bc MovF
	func_6217(var_888_object, var_889_float); // 0x10bd NEW_2
	var_890_bool = var_887_bool == 0; // 0x10bf Not
	if(var_890_bool == 0) goto Label_4291; // 0x10c0 JumpB
	var_876_int = -2; // 0x10c1 MovI
	return 8; // 0x10c2 Return
	
Label_4291:
	CreateDialog(var_883_object); // 0x10c3 Func
	var_891_int = 0; // 0x10c5 PushV
	func_6605(var_891_int); // 0x10c6 NEW_2
	SetNPCName(var_891_int); // 0x10c8 ObjFunc
	var_892_int = 0; // 0x10ca PushV
	func_6603(var_892_int); // 0x10cb NEW_2
	SetNPCDescription(var_892_int); // 0x10cd ObjFunc
	var_893_string = ""; // 0x10cf PushV
	func_6607(var_893_string); // 0x10d0 NEW_2
	SetPhoto(var_893_string); // 0x10d2 ObjFunc
	var_894_string = ""; // 0x10d4 PushV
	func_6609(var_894_string); // 0x10d5 NEW_2
	SetPhoto2(var_894_string); // 0x10d7 ObjFunc
	var_895_int = 0; // 0x10d9 PushV
	func_7269(var_895_int); // 0x10da NEW_2
	SetPlayerName(var_895_int); // 0x10dc ObjFunc
	var_885_int = -1; // 0x10de MovI
	IsOverrideActive(var_884_bool); // 0x10df Func
	var_896_bool = var_884_bool; // 0x10e1 Push
	if(var_896_bool == 0) goto Label_4325; // 0x10e2 JumpB
	var_876_int = -2; // 0x10e3 MovI
	return 8; // 0x10e4 Return
	
Label_4325:
	DoDialog(var_883_object); // 0x10e5 Func
	var_897_bool = 0; var_898_object = Obj(); // 0x10e7 PushV
	var_899_object = Obj(); // 0x10e8 PushV
	func_6495(var_899_object); // 0x10e9 NEW_2
	var_898_object = var_899_object; // 0x10ea Mov
	func_6304(var_897_bool, var_898_object); // 0x10ec NEW_2
	var_900_object = Obj(); var_901_object = Obj(); // 0x10ee PushV
	var_900_object = var_877_object; // 0x10ef Mov
	var_901_object = var_883_object; // 0x10f0 Mov
	TaskCall(15); // 0x10f1 TaskCall
	func_4361(var_902_object, var_903_object, var_904_string, var_905_bool, var_900_object, var_901_object); // 0x10f2 NEW_2
	TaskReturn(); // 0x10f3 TaskReturn
	IsDialogEnd(var_886_bool); // 0x10f5 ObjFunc
	
Label_4343:
	var_948_bool = var_886_bool == 0; // 0x10f7 Not
	if(var_948_bool == 0) goto Label_4350; // 0x10f8 JumpB
	sync(); // 0x10f9 Func
	IsDialogEnd(var_886_bool); // 0x10fb ObjFunc
	goto Label_4343; // 0x10fd Jump
	
Label_4350:
	var_949_object = Obj(); // 0x10fe PushV
	var_949_object = var_877_object; // 0x10ff Mov
	func_6286(); // 0x1100 NEW_2
	StopDialog(var_883_object); // 0x1102 Func
	GetReturnValue(var_885_int); // 0x1104 ObjFunc
	var_876_int = var_885_int; // 0x1106 Mov
	return 8; // 0x1107 Return
}


func_7356()
{
	func_7331(); // 0x1cbd NEW_2
	return 0; // 0x1cbf Return
}


func_6848(var_380_bool)
{
	var_382_int = 0; var_383_string = ""; // 0x1ac1 PushV
	var_383_string = "ood1Maria2"; // 0x1ac2 MovS
	func_6511(var_382_int, var_383_string); // 0x1ac3 NEW_2
	var_384_int = 0; // 0x1ac5 PushI
	var_385_bool = var_382_int == var_384_int; // 0x1ac6 Eq
	if(var_385_bool == 0) goto Label_6858; // 0x1ac7 JumpB
	var_380_bool = 1; // 0x1ac8 MovB
	return 0; // 0x1ac9 Return
	
Label_6858:
	var_380_bool = 0; // 0x1aca MovB
	return 0; // 0x1acb Return
}


func_7360(var_74_object, var_319_object)
{
	var_75_bool = GlobalVars[1]; // 0x1cc1 PushGE
	var_76_bool = var_75_bool == 0; // 0x1cc2 Not
	if(var_76_bool == 0) goto Label_7373; // 0x1cc3 JumpB
	var_77_int = 0; var_78_object = Obj(); // 0x1cc4 PushV
	var_78_object = var_74_object; // 0x1cc5 Mov
	TaskCall(0); // 0x1cc6 TaskCall
	func_0(var_79_object, var_77_int, var_78_object); // 0x1cc7 NEW_2
	TaskReturn(); // 0x1cc8 TaskReturn
	var_312_bool = GlobalVars[1]; // 0x1cca PushGE
	var_312_bool = 1; // 0x1ccb MovB
	GlobalVars[1] = var_312_bool; // 0x1ccc PopGE
	
Label_7373:
	var_313_bool = 0; var_314_int = 0; // 0x1ccd PushV
	var_314_int = 1; // 0x1cce MovI
	func_6573(var_313_bool, var_314_int); // 0x1ccf NEW_2
	if(var_313_bool == 0) goto Label_7392; // 0x1cd1 JumpB
	var_316_int = 2000; // 0x1cd2 PushI
	var_317_int = 0; var_318_object = Obj(); // 0x1cd3 PushV
	var_318_object = var_74_object; // 0x1cd4 Mov
	TaskCall(4); // 0x1cd5 TaskCall
	func_785(var_319_object, var_317_int, var_318_object); // 0x1cd6 NEW_2
	TaskReturn(); // 0x1cd7 TaskReturn
	var_454_bool = var_316_int == var_319_object; // 0x1cd9 Eq
	if(var_454_bool == 0) goto Label_7391; // 0x1cda JumpB
	var_455_string = "people.xml"; // 0x1cdb PushS
	var_456_bool = 1; // 0x1cdc PushB
	ShowWindow(var_455_string, var_456_bool); // 0x1cdd Func
	
Label_7391:
	return 0; // 0x1cdf Return
	
Label_7392:
	var_457_bool = 0; var_458_int = 0; // 0x1ce0 PushV
	var_458_int = 2; // 0x1ce1 MovI
	func_6573(var_457_bool, var_458_int); // 0x1ce2 NEW_2
	if(var_457_bool == 0) goto Label_7404; // 0x1ce4 JumpB
	var_459_int = 0; var_460_object = Obj(); // 0x1ce5 PushV
	var_460_object = var_74_object; // 0x1ce6 Mov
	TaskCall(6); // 0x1ce7 TaskCall
	func_2032(var_461_object, var_459_int, var_460_object); // 0x1ce8 NEW_2
	TaskReturn(); // 0x1ce9 TaskReturn
	return 0; // 0x1ceb Return
	
Label_7404:
	var_544_bool = 0; var_545_int = 0; // 0x1cec PushV
	var_545_int = 3; // 0x1ced MovI
	func_6573(var_544_bool, var_545_int); // 0x1cee NEW_2
	if(var_544_bool == 0) goto Label_7416; // 0x1cf0 JumpB
	var_546_int = 0; var_547_object = Obj(); // 0x1cf1 PushV
	var_547_object = var_74_object; // 0x1cf2 Mov
	TaskCall(8); // 0x1cf3 TaskCall
	func_2655(var_548_object, var_546_int, var_547_object); // 0x1cf4 NEW_2
	TaskReturn(); // 0x1cf5 TaskReturn
	return 0; // 0x1cf7 Return
	
Label_7416:
	var_631_bool = 0; var_632_int = 0; // 0x1cf8 PushV
	var_632_int = 4; // 0x1cf9 MovI
	func_6573(var_631_bool, var_632_int); // 0x1cfa NEW_2
	if(var_631_bool == 0) goto Label_7428; // 0x1cfc JumpB
	var_633_int = 0; var_634_object = Obj(); // 0x1cfd PushV
	var_634_object = var_74_object; // 0x1cfe Mov
	TaskCall(10); // 0x1cff TaskCall
	func_3273(var_635_object, var_633_int, var_634_object); // 0x1d00 NEW_2
	TaskReturn(); // 0x1d01 TaskReturn
	return 0; // 0x1d03 Return
	
Label_7428:
	var_712_bool = 0; var_713_int = 0; // 0x1d04 PushV
	var_713_int = 6; // 0x1d05 MovI
	func_6573(var_712_bool, var_713_int); // 0x1d06 NEW_2
	if(var_712_bool == 0) goto Label_7440; // 0x1d08 JumpB
	var_714_int = 0; var_715_object = Obj(); // 0x1d09 PushV
	var_715_object = var_74_object; // 0x1d0a Mov
	TaskCall(2); // 0x1d0b TaskCall
	func_320(var_716_object, var_714_int, var_715_object); // 0x1d0c NEW_2
	TaskReturn(); // 0x1d0d TaskReturn
	return 0; // 0x1d0f Return
	
Label_7440:
	var_807_bool = 0; var_808_int = 0; // 0x1d10 PushV
	var_808_int = 7; // 0x1d11 MovI
	func_6573(var_807_bool, var_808_int); // 0x1d12 NEW_2
	if(var_807_bool == 0) goto Label_7452; // 0x1d14 JumpB
	var_809_int = 0; var_810_object = Obj(); // 0x1d15 PushV
	var_810_object = var_74_object; // 0x1d16 Mov
	TaskCall(12); // 0x1d17 TaskCall
	func_3859(var_811_object, var_809_int, var_810_object); // 0x1d18 NEW_2
	TaskReturn(); // 0x1d19 TaskReturn
	return 0; // 0x1d1b Return
	
Label_7452:
	var_874_bool = 0; var_875_int = 0; // 0x1d1c PushV
	var_875_int = 8; // 0x1d1d MovI
	func_6573(var_874_bool, var_875_int); // 0x1d1e NEW_2
	if(var_874_bool == 0) goto Label_7464; // 0x1d20 JumpB
	var_876_int = 0; var_877_object = Obj(); // 0x1d21 PushV
	var_877_object = var_74_object; // 0x1d22 Mov
	TaskCall(14); // 0x1d23 TaskCall
	func_4280(var_878_object, var_876_int, var_877_object); // 0x1d24 NEW_2
	TaskReturn(); // 0x1d25 TaskReturn
	return 0; // 0x1d27 Return
	
Label_7464:
	var_950_bool = 0; var_951_int = 0; // 0x1d28 PushV
	var_951_int = 10; // 0x1d29 MovI
	func_6573(var_950_bool, var_951_int); // 0x1d2a NEW_2
	if(var_950_bool == 0) goto Label_7476; // 0x1d2c JumpB
	var_952_int = 0; var_953_object = Obj(); // 0x1d2d PushV
	var_953_object = var_74_object; // 0x1d2e Mov
	TaskCall(16); // 0x1d2f TaskCall
	func_4687(var_954_object, var_952_int, var_953_object); // 0x1d30 NEW_2
	TaskReturn(); // 0x1d31 TaskReturn
	return 0; // 0x1d33 Return
	
Label_7476:
	var_1058_bool = 0; var_1059_int = 0; // 0x1d34 PushV
	var_1059_int = 12; // 0x1d35 MovI
	func_6573(var_1058_bool, var_1059_int); // 0x1d36 NEW_2
	if(var_1058_bool == 0) goto Label_7488; // 0x1d38 JumpB
	var_1060_int = 0; var_1061_object = Obj(); // 0x1d39 PushV
	var_1061_object = var_74_object; // 0x1d3a Mov
	TaskCall(18); // 0x1d3b TaskCall
	func_5362(var_1062_object, var_1060_int, var_1061_object); // 0x1d3c NEW_2
	TaskReturn(); // 0x1d3d TaskReturn
	return 0; // 0x1d3f Return
	
Label_7488:
	var_1116_int = 0; var_1117_object = Obj(); // 0x1d40 PushV
	var_1117_object = var_74_object; // 0x1d41 Mov
	TaskCall(20); // 0x1d42 TaskCall
	func_5716(var_1118_object, var_1116_int, var_1117_object); // 0x1d43 NEW_2
	TaskReturn(); // 0x1d44 TaskReturn
	return 0; // 0x1d46 Return
}


func_3273(var_0_object, var_633_int, var_634_object)
{
	var_636_object = Obj(); var_637_bool = 0; var_638_int = 0; var_639_bool = 0; var_640_object = Obj(); var_641_bool = 0; var_642_int = 0; var_643_bool = 0; // 0xcc9 PushV
	var_0_object = var_634_object; // 0xcca TMov
	var_644_bool = 0; var_645_object = Obj(); var_646_float = 0; // 0xccb PushV
	var_645_object = var_634_object; // 0xccc Mov
	var_646_float = 70.0; // 0xccd MovF
	func_6217(var_645_object, var_646_float); // 0xcce NEW_2
	var_647_bool = var_644_bool == 0; // 0xcd0 Not
	if(var_647_bool == 0) goto Label_3284; // 0xcd1 JumpB
	var_633_int = -2; // 0xcd2 MovI
	return 8; // 0xcd3 Return
	
Label_3284:
	CreateDialog(var_640_object); // 0xcd4 Func
	var_648_int = 0; // 0xcd6 PushV
	func_6605(var_648_int); // 0xcd7 NEW_2
	SetNPCName(var_648_int); // 0xcd9 ObjFunc
	var_649_int = 0; // 0xcdb PushV
	func_6603(var_649_int); // 0xcdc NEW_2
	SetNPCDescription(var_649_int); // 0xcde ObjFunc
	var_650_string = ""; // 0xce0 PushV
	func_6607(var_650_string); // 0xce1 NEW_2
	SetPhoto(var_650_string); // 0xce3 ObjFunc
	var_651_string = ""; // 0xce5 PushV
	func_6609(var_651_string); // 0xce6 NEW_2
	SetPhoto2(var_651_string); // 0xce8 ObjFunc
	var_652_int = 0; // 0xcea PushV
	func_7269(var_652_int); // 0xceb NEW_2
	SetPlayerName(var_652_int); // 0xced ObjFunc
	var_642_int = -1; // 0xcef MovI
	IsOverrideActive(var_641_bool); // 0xcf0 Func
	var_653_bool = var_641_bool; // 0xcf2 Push
	if(var_653_bool == 0) goto Label_3318; // 0xcf3 JumpB
	var_633_int = -2; // 0xcf4 MovI
	return 8; // 0xcf5 Return
	
Label_3318:
	DoDialog(var_640_object); // 0xcf6 Func
	var_654_bool = 0; var_655_object = Obj(); // 0xcf8 PushV
	var_656_object = Obj(); // 0xcf9 PushV
	func_6495(var_656_object); // 0xcfa NEW_2
	var_655_object = var_656_object; // 0xcfb Mov
	func_6304(var_654_bool, var_655_object); // 0xcfd NEW_2
	var_657_object = Obj(); var_658_object = Obj(); // 0xcff PushV
	var_657_object = var_634_object; // 0xd00 Mov
	var_658_object = var_640_object; // 0xd01 Mov
	TaskCall(11); // 0xd02 TaskCall
	func_3354(var_659_object, var_660_object, var_661_string, var_662_bool, var_657_object, var_658_object); // 0xd03 NEW_2
	TaskReturn(); // 0xd04 TaskReturn
	IsDialogEnd(var_643_bool); // 0xd06 ObjFunc
	
Label_3336:
	var_710_bool = var_643_bool == 0; // 0xd08 Not
	if(var_710_bool == 0) goto Label_3343; // 0xd09 JumpB
	sync(); // 0xd0a Func
	IsDialogEnd(var_643_bool); // 0xd0c ObjFunc
	goto Label_3336; // 0xd0e Jump
	
Label_3343:
	var_711_object = Obj(); // 0xd0f PushV
	var_711_object = var_634_object; // 0xd10 Mov
	func_6286(); // 0xd11 NEW_2
	StopDialog(var_640_object); // 0xd13 Func
	GetReturnValue(var_642_int); // 0xd15 ObjFunc
	var_633_int = var_642_int; // 0xd17 Mov
	return 8; // 0xd18 Return
}


func_6860(var_415_bool)
{
	var_417_int = 0; var_418_string = ""; // 0x1acd PushV
	var_418_string = "ood1Maria3"; // 0x1ace MovS
	func_6511(var_417_int, var_418_string); // 0x1acf NEW_2
	var_419_int = 0; // 0x1ad1 PushI
	var_420_bool = var_417_int == var_419_int; // 0x1ad2 Eq
	if(var_420_bool == 0) goto Label_6870; // 0x1ad3 JumpB
	var_415_bool = 1; // 0x1ad4 MovB
	return 0; // 0x1ad5 Return
	
Label_6870:
	var_415_bool = 0; // 0x1ad6 MovB
	return 0; // 0x1ad7 Return
}


func_6872(var_348_bool)
{
	var_350_int = 0; var_351_string = ""; // 0x1ad9 PushV
	var_351_string = "d1q01FirstGeorgVisit"; // 0x1ada MovS
	func_6511(var_350_int, var_351_string); // 0x1adb NEW_2
	var_354_int = 1; // 0x1add PushI
	var_355_bool = var_350_int == var_354_int; // 0x1ade Eq
	if(var_355_bool == 0) goto Label_6882; // 0x1adf JumpB
	var_348_bool = 1; // 0x1ae0 MovB
	return 0; // 0x1ae1 Return
	
Label_6882:
	var_348_bool = 0; // 0x1ae2 MovB
	return 0; // 0x1ae3 Return
}


func_6362(var_160_bool)
{
	var_162_string = ""; var_163_int = 0; var_164_bool = 0; var_165_int = 0; var_166_string = ""; var_167_string = ""; var_168_int = 0; var_169_bool = 0; var_170_int = 0; var_171_string = ""; // 0x18da PushV
	var_167_string = "c"; // 0x18db MovS
	var_168_int = 0; // 0x18dc MovI
	
Label_6365:
	var_172_int = 1; // 0x18dd PushI
	if(var_172_int == 0) goto Label_6378; // 0x18de JumpB
	var_173_int = 1; // 0x18df PushI
	var_174_int = var_168_int + var_173_int; // 0x18e0 Add
	var_175_int = var_167_string + var_174_int; // 0x18e1 Add
	HasProperty(var_175_int, var_169_bool); // 0x18e2 ObjFunc
	var_176_bool = var_169_bool == 0; // 0x18e4 Not
	if(var_176_bool == 0) goto Label_6375; // 0x18e5 JumpB
	goto Label_6378; // 0x18e6 Jump
	
Label_6378:
	var_177_bool = var_168_int == 0; // 0x18ea Not
	if(var_177_bool == 0) goto Label_6382; // 0x18eb JumpB
	var_160_bool = 0; // 0x18ec MovB
	return 10; // 0x18ed Return
	
Label_6382:
	var_170_int = 0; // 0x18ee MovI
	var_178_int = 1; // 0x18ef PushI
	var_179_bool = var_168_int > var_178_int; // 0x18f0 GT
	if(var_179_bool == 0) goto Label_6388; // 0x18f1 JumpB
	irand(var_170_int, var_168_int); // 0x18f2 Func
	
Label_6388:
	var_180_int = 1; // 0x18f4 PushI
	var_181_int = var_170_int + var_180_int; // 0x18f5 Add
	var_182_int = var_167_string + var_181_int; // 0x18f6 Add
	GetProperty(var_182_int, var_171_string); // 0x18f7 ObjFunc
	var_183_bool = 0; var_184_string = ""; // 0x18f9 PushV
	var_184_string = var_171_string; // 0x18fa Mov
	func_6473(var_183_bool, var_184_string); // 0x18fb NEW_2
	var_160_bool = var_183_bool; // 0x18fc Mov
	return 10; // 0x18fe Return
	
Label_6375:
	var_189_int = 1; // 0x18e7 PushI
	var_168_int = var_168_int + var_189_int; // 0x18e8 Add2
	goto Label_6365; // 0x18e9 Jump
}


func_5855(var_2_object, var_1147_string)
{
	var_1148_bool = 0; // 0x16e0 PushV
	func_6611(var_1148_bool); // 0x16e1 NEW_2
	var_1149_bool = var_1148_bool == 0; // 0x16e3 Not
	if(var_1149_bool == 0) goto Label_5862; // 0x16e4 JumpB
	return 0; // 0x16e5 Return
	
Label_5862:
	var_1150_bool = var_1147_string == var_2_object; // 0x16e6 Eq
	if(var_1150_bool == 0) goto Label_5865; // 0x16e7 JumpB
	return 0; // 0x16e8 Return
	
Label_5865:
	var_1151_string = ""; var_1152_bool = 0; // 0x16e9 PushV
	var_1151_string = var_1147_string; // 0x16ea Mov
	var_1153_string = ""; // 0x16eb PushS
	var_1154_bool = var_1147_string == var_1153_string; // 0x16ec Eq
	if(var_1154_bool == 0) goto Label_5872; // 0x16ed JumpB
	var_1152_bool = 0; // 0x16ee MovB
	goto Label_5873; // 0x16ef Jump
	
Label_5873:
	func_6458(var_1151_string, var_1152_bool); // 0x16f1 NEW_2
	var_2_object = var_1147_string; // 0x16f3 TMov
	return 0; // 0x16f4 Return
	
Label_5872:
	var_1152_bool = 1; // 0x16f0 MovB
}


func_6884(var_849_bool)
{
	var_851_int = 0; var_852_string = ""; // 0x1ae5 PushV
	var_852_string = "d7q03"; // 0x1ae6 MovS
	func_6511(var_851_int, var_852_string); // 0x1ae7 NEW_2
	var_853_int = 1; // 0x1ae9 PushI
	var_854_bool = var_851_int == var_853_int; // 0x1aea Eq
	if(var_854_bool == 0) goto Label_6894; // 0x1aeb JumpB
	var_849_bool = 1; // 0x1aec MovB
	return 0; // 0x1aed Return
	
Label_6894:
	var_849_bool = 0; // 0x1aee MovB
	return 0; // 0x1aef Return
}


func_6896(var_1035_bool)
{
	var_1037_int = 0; var_1038_string = ""; // 0x1af1 PushV
	var_1038_string = "d10q02"; // 0x1af2 MovS
	func_6511(var_1037_int, var_1038_string); // 0x1af3 NEW_2
	var_1039_int = 2; // 0x1af5 PushI
	var_1040_bool = var_1037_int == var_1039_int; // 0x1af6 Eq
	if(var_1040_bool == 0) goto Label_6906; // 0x1af7 JumpB
	var_1035_bool = 1; // 0x1af8 MovB
	return 0; // 0x1af9 Return
	
Label_6906:
	var_1035_bool = 0; // 0x1afa MovB
	return 0; // 0x1afb Return
}


func_5362(var_0_object, var_1060_int, var_1061_object)
{
	var_1063_object = Obj(); var_1064_bool = 0; var_1065_int = 0; var_1066_bool = 0; var_1067_object = Obj(); var_1068_bool = 0; var_1069_int = 0; var_1070_bool = 0; // 0x14f2 PushV
	var_0_object = var_1061_object; // 0x14f3 TMov
	var_1071_bool = 0; var_1072_object = Obj(); var_1073_float = 0; // 0x14f4 PushV
	var_1072_object = var_1061_object; // 0x14f5 Mov
	var_1073_float = 70.0; // 0x14f6 MovF
	func_6217(var_1072_object, var_1073_float); // 0x14f7 NEW_2
	var_1074_bool = var_1071_bool == 0; // 0x14f9 Not
	if(var_1074_bool == 0) goto Label_5373; // 0x14fa JumpB
	var_1060_int = -2; // 0x14fb MovI
	return 8; // 0x14fc Return
	
Label_5373:
	CreateDialog(var_1067_object); // 0x14fd Func
	var_1075_int = 0; // 0x14ff PushV
	func_6605(var_1075_int); // 0x1500 NEW_2
	SetNPCName(var_1075_int); // 0x1502 ObjFunc
	var_1076_int = 0; // 0x1504 PushV
	func_6603(var_1076_int); // 0x1505 NEW_2
	SetNPCDescription(var_1076_int); // 0x1507 ObjFunc
	var_1077_string = ""; // 0x1509 PushV
	func_6607(var_1077_string); // 0x150a NEW_2
	SetPhoto(var_1077_string); // 0x150c ObjFunc
	var_1078_string = ""; // 0x150e PushV
	func_6609(var_1078_string); // 0x150f NEW_2
	SetPhoto2(var_1078_string); // 0x1511 ObjFunc
	var_1079_int = 0; // 0x1513 PushV
	func_7269(var_1079_int); // 0x1514 NEW_2
	SetPlayerName(var_1079_int); // 0x1516 ObjFunc
	var_1069_int = -1; // 0x1518 MovI
	IsOverrideActive(var_1068_bool); // 0x1519 Func
	var_1080_bool = var_1068_bool; // 0x151b Push
	if(var_1080_bool == 0) goto Label_5407; // 0x151c JumpB
	var_1060_int = -2; // 0x151d MovI
	return 8; // 0x151e Return
	
Label_5407:
	DoDialog(var_1067_object); // 0x151f Func
	var_1081_bool = 0; var_1082_object = Obj(); // 0x1521 PushV
	var_1083_object = Obj(); // 0x1522 PushV
	func_6495(var_1083_object); // 0x1523 NEW_2
	var_1082_object = var_1083_object; // 0x1524 Mov
	func_6304(var_1081_bool, var_1082_object); // 0x1526 NEW_2
	var_1084_object = Obj(); var_1085_object = Obj(); // 0x1528 PushV
	var_1084_object = var_1061_object; // 0x1529 Mov
	var_1085_object = var_1067_object; // 0x152a Mov
	TaskCall(19); // 0x152b TaskCall
	func_5443(var_1086_object, var_1087_object, var_1088_string, var_1089_bool, var_1084_object, var_1085_object); // 0x152c NEW_2
	TaskReturn(); // 0x152d TaskReturn
	IsDialogEnd(var_1070_bool); // 0x152f ObjFunc
	
Label_5425:
	var_1114_bool = var_1070_bool == 0; // 0x1531 Not
	if(var_1114_bool == 0) goto Label_5432; // 0x1532 JumpB
	sync(); // 0x1533 Func
	IsDialogEnd(var_1070_bool); // 0x1535 ObjFunc
	goto Label_5425; // 0x1537 Jump
	
Label_5432:
	var_1115_object = Obj(); // 0x1538 PushV
	var_1115_object = var_1061_object; // 0x1539 Mov
	func_6286(); // 0x153a NEW_2
	StopDialog(var_1067_object); // 0x153c Func
	GetReturnValue(var_1069_int); // 0x153e ObjFunc
	var_1060_int = var_1069_int; // 0x1540 Mov
	return 8; // 0x1541 Return
}


func_6908(var_1041_bool)
{
	var_1043_int = 0; var_1044_string = ""; // 0x1afd PushV
	var_1044_string = "ood10Maria2"; // 0x1afe MovS
	func_6511(var_1043_int, var_1044_string); // 0x1aff NEW_2
	var_1045_int = 0; // 0x1b01 PushI
	var_1046_bool = var_1043_int == var_1045_int; // 0x1b02 Eq
	if(var_1046_bool == 0) goto Label_6918; // 0x1b03 JumpB
	var_1041_bool = 1; // 0x1b04 MovB
	return 0; // 0x1b05 Return
	
Label_6918:
	var_1041_bool = 0; // 0x1b06 MovB
	return 0; // 0x1b07 Return
}


func_6399(var_191_bool)
{
	var_193_string = ""; var_194_int = 0; var_195_bool = 0; var_196_int = 0; var_197_string = ""; var_198_string = ""; var_199_int = 0; var_200_bool = 0; var_201_int = 0; var_202_string = ""; // 0x18ff PushV
	var_203_string = "d"; // 0x1900 PushS
	var_204_int = 0; // 0x1901 PushV
	func_6564(var_204_int); // 0x1902 NEW_2
	var_210_int = var_203_string + var_204_int; // 0x1904 Add
	var_211_string = "m"; // 0x1905 PushS
	var_198_string = var_210_int + var_211_string; // 0x1906 Add2
	var_199_int = 0; // 0x1907 MovI
	
Label_6408:
	var_212_int = 1; // 0x1908 PushI
	if(var_212_int == 0) goto Label_6421; // 0x1909 JumpB
	var_213_int = 1; // 0x190a PushI
	var_214_int = var_199_int + var_213_int; // 0x190b Add
	var_215_int = var_198_string + var_214_int; // 0x190c Add
	HasProperty(var_215_int, var_200_bool); // 0x190d ObjFunc
	var_216_bool = var_200_bool == 0; // 0x190f Not
	if(var_216_bool == 0) goto Label_6418; // 0x1910 JumpB
	goto Label_6421; // 0x1911 Jump
	
Label_6421:
	var_217_bool = var_199_int == 0; // 0x1915 Not
	if(var_217_bool == 0) goto Label_6425; // 0x1916 JumpB
	var_191_bool = 0; // 0x1917 MovB
	return 10; // 0x1918 Return
	
Label_6425:
	var_201_int = 0; // 0x1919 MovI
	var_218_int = 1; // 0x191a PushI
	var_219_bool = var_199_int > var_218_int; // 0x191b GT
	if(var_219_bool == 0) goto Label_6431; // 0x191c JumpB
	irand(var_201_int, var_199_int); // 0x191d Func
	
Label_6431:
	var_220_int = 1; // 0x191f PushI
	var_221_int = var_201_int + var_220_int; // 0x1920 Add
	var_222_int = var_198_string + var_221_int; // 0x1921 Add
	GetProperty(var_222_int, var_202_string); // 0x1922 ObjFunc
	var_223_bool = 0; var_224_string = ""; // 0x1924 PushV
	var_224_string = var_202_string; // 0x1925 Mov
	func_6473(var_223_bool, var_224_string); // 0x1926 NEW_2
	var_191_bool = var_223_bool; // 0x1927 Mov
	return 10; // 0x1929 Return
	
Label_6418:
	var_225_int = 1; // 0x1912 PushI
	var_199_int = var_199_int + var_225_int; // 0x1913 Add2
	goto Label_6408; // 0x1914 Jump
}


func_6920(var_603_bool)
{
	var_605_int = 0; var_606_string = ""; // 0x1b09 PushV
	var_606_string = "d3KaterinaAboutKills"; // 0x1b0a MovS
	func_6511(var_605_int, var_606_string); // 0x1b0b NEW_2
	var_607_int = 0; // 0x1b0d PushI
	var_608_bool = var_605_int != var_607_int; // 0x1b0e Neq
	if(var_608_bool == 0) goto Label_6930; // 0x1b0f JumpB
	var_603_bool = 1; // 0x1b10 MovB
	return 0; // 0x1b11 Return
	
Label_6930:
	var_603_bool = 0; // 0x1b12 MovB
	return 0; // 0x1b13 Return
}


func_4361(var_0_object, var_1_object, var_2_object, var_3_string, var_900_object, var_901_object)
{
	var_0_object = var_901_object; // 0x110a TMov
	var_1_object = var_900_object; // 0x110b TMov
	var_3_string = 0; // 0x110c TMovB
	var_906_int = 1; // 0x110d PushI
	if(var_906_int == 0) goto Label_4419; // 0x110e JumpB
	var_907_bool = 0; var_908_object = Obj(); // 0x110f PushV
	var_908_object = var_1_object; // 0x1110 MovT
	func_7088(var_908_object); // 0x1111 NEW_2
	if(var_907_bool == 0) goto Label_4397; // 0x1113 JumpB
	var_913_object = Obj(); var_914_object = Obj(); // 0x1114 PushV
	var_913_object = var_1_object; // 0x1115 MovT
	var_914_object = var_0_object; // 0x1116 MovT
	func_6774(); // 0x1117 NEW_2
	var_917_string = ""; // 0x1119 PushV
	var_917_string = "Mysterious"; // 0x111a MovS
	func_4449(var_901_object, var_917_string); // 0x111b NEW_2
	var_925_int = 512310; // 0x111d PushI
	SetMessage(var_925_int); // 0x111e TObjFunc
	ClearReplies(); // 0x1120 TObjFunc
	var_926_int = 512311; // 0x1122 PushI
	var_927_int = 13471; // 0x1123 PushI
	var_928_int = 13470; // 0x1124 PushI
	AddReply(var_926_int, var_927_int, var_928_int); // 0x1125 TObjFunc
	var_929_int = 512313; // 0x1127 PushI
	var_930_int = 13473; // 0x1128 PushI
	var_931_int = 13472; // 0x1129 PushI
	AddReply(var_929_int, var_930_int, var_931_int); // 0x112a TObjFunc
	goto Label_4419; // 0x112c Jump
	
Label_4419:
	var_932_bool = 0; // 0x1143 PushV
	func_6611(var_932_bool); // 0x1144 NEW_2
	if(var_932_bool == 0) goto Label_4434; // 0x1146 JumpB
	
Label_4423:
	lshWaitForAnimEnd(); // 0x1147 Func
	var_933_string = var_3_string; // 0x1149 PushT
	if(var_933_string == 0) goto Label_4428; // 0x114a JumpB
	goto Label_4433; // 0x114b Jump
	
Label_4433:
	goto Label_4448; // 0x1151 Jump
	
Label_4448:
	return 0; // 0x1160 Return
	
Label_4428:
	var_934_string = ""; // 0x114c PushV
	var_934_string = var_2_object; // 0x114d MovT
	func_6442(var_934_string); // 0x114e NEW_2
	goto Label_4423; // 0x1150 Jump
	
Label_4434:
	var_935_string = "all"; // 0x1152 PushS
	var_936_string = "idle"; // 0x1153 PushS
	PlayAnimation(var_935_string, var_936_string); // 0x1154 Func
	
Label_4438:
	WaitForAnimEnd(); // 0x1156 Func
	var_937_string = var_3_string; // 0x1158 PushT
	if(var_937_string == 0) goto Label_4443; // 0x1159 JumpB
	goto Label_4448; // 0x115a Jump
	
Label_4443:
	var_938_string = "all"; // 0x115b PushS
	var_939_string = "idle"; // 0x115c PushS
	PlayAnimation(var_938_string, var_939_string); // 0x115d Func
	goto Label_4438; // 0x115f Jump
	
Label_4397:
	var_940_string = ""; // 0x112d PushV
	var_940_string = "Staring"; // 0x112e MovS
	func_4449(var_901_object, var_940_string); // 0x112f NEW_2
	var_941_int = 513777; // 0x1131 PushI
	SetMessage(var_941_int); // 0x1132 TObjFunc
	ClearReplies(); // 0x1134 TObjFunc
	var_942_int = 513778; // 0x1136 PushI
	var_943_int = -1; // 0x1137 PushI
	var_944_int = 15014; // 0x1138 PushI
	AddReply(var_942_int, var_943_int, var_944_int); // 0x1139 TObjFunc
	var_945_int = 541597; // 0x113b PushI
	var_946_int = -1; // 0x113c PushI
	var_947_int = 43761; // 0x113d PushI
	AddReply(var_945_int, var_946_int, var_947_int); // 0x113e TObjFunc
	goto Label_4419; // 0x1140 Jump
}


func_2827(var_2_object, var_577_string)
{
	var_578_bool = 0; // 0xb0c PushV
	func_6611(var_578_bool); // 0xb0d NEW_2
	var_579_bool = var_578_bool == 0; // 0xb0f Not
	if(var_579_bool == 0) goto Label_2834; // 0xb10 JumpB
	return 0; // 0xb11 Return
	
Label_2834:
	var_580_bool = var_577_string == var_2_object; // 0xb12 Eq
	if(var_580_bool == 0) goto Label_2837; // 0xb13 JumpB
	return 0; // 0xb14 Return
	
Label_2837:
	var_581_string = ""; var_582_bool = 0; // 0xb15 PushV
	var_581_string = var_577_string; // 0xb16 Mov
	var_583_string = ""; // 0xb17 PushS
	var_584_bool = var_577_string == var_583_string; // 0xb18 Eq
	if(var_584_bool == 0) goto Label_2844; // 0xb19 JumpB
	var_582_bool = 0; // 0xb1a MovB
	goto Label_2845; // 0xb1b Jump
	
Label_2845:
	func_6458(var_581_string, var_582_bool); // 0xb1d NEW_2
	var_2_object = var_577_string; // 0xb1f TMov
	return 0; // 0xb20 Return
	
Label_2844:
	var_582_bool = 1; // 0xb1c MovB
}


func_785(var_0_object, var_317_int, var_318_object)
{
	var_320_object = Obj(); var_321_bool = 0; var_322_int = 0; var_323_bool = 0; var_324_object = Obj(); var_325_bool = 0; var_326_int = 0; var_327_bool = 0; // 0x311 PushV
	var_0_object = var_318_object; // 0x312 TMov
	var_328_bool = 0; var_329_object = Obj(); var_330_float = 0; // 0x313 PushV
	var_329_object = var_318_object; // 0x314 Mov
	var_330_float = 70.0; // 0x315 MovF
	func_6217(var_329_object, var_330_float); // 0x316 NEW_2
	var_331_bool = var_328_bool == 0; // 0x318 Not
	if(var_331_bool == 0) goto Label_796; // 0x319 JumpB
	var_317_int = -2; // 0x31a MovI
	return 8; // 0x31b Return
	
Label_796:
	CreateDialog(var_324_object); // 0x31c Func
	var_332_int = 0; // 0x31e PushV
	func_6605(var_332_int); // 0x31f NEW_2
	SetNPCName(var_332_int); // 0x321 ObjFunc
	var_333_int = 0; // 0x323 PushV
	func_6603(var_333_int); // 0x324 NEW_2
	SetNPCDescription(var_333_int); // 0x326 ObjFunc
	var_334_string = ""; // 0x328 PushV
	func_6607(var_334_string); // 0x329 NEW_2
	SetPhoto(var_334_string); // 0x32b ObjFunc
	var_335_string = ""; // 0x32d PushV
	func_6609(var_335_string); // 0x32e NEW_2
	SetPhoto2(var_335_string); // 0x330 ObjFunc
	var_336_int = 0; // 0x332 PushV
	func_7269(var_336_int); // 0x333 NEW_2
	SetPlayerName(var_336_int); // 0x335 ObjFunc
	var_326_int = -1; // 0x337 MovI
	IsOverrideActive(var_325_bool); // 0x338 Func
	var_337_bool = var_325_bool; // 0x33a Push
	if(var_337_bool == 0) goto Label_830; // 0x33b JumpB
	var_317_int = -2; // 0x33c MovI
	return 8; // 0x33d Return
	
Label_830:
	DoDialog(var_324_object); // 0x33e Func
	var_338_bool = 0; var_339_object = Obj(); // 0x340 PushV
	var_340_object = Obj(); // 0x341 PushV
	func_6495(var_340_object); // 0x342 NEW_2
	var_339_object = var_340_object; // 0x343 Mov
	func_6304(var_338_bool, var_339_object); // 0x345 NEW_2
	var_341_object = Obj(); var_342_object = Obj(); // 0x347 PushV
	var_341_object = var_318_object; // 0x348 Mov
	var_342_object = var_324_object; // 0x349 Mov
	TaskCall(5); // 0x34a TaskCall
	func_866(var_343_object, var_344_object, var_345_string, var_346_bool, var_341_object, var_342_object); // 0x34b NEW_2
	TaskReturn(); // 0x34c TaskReturn
	IsDialogEnd(var_327_bool); // 0x34e ObjFunc
	
Label_848:
	var_452_bool = var_327_bool == 0; // 0x350 Not
	if(var_452_bool == 0) goto Label_855; // 0x351 JumpB
	sync(); // 0x352 Func
	IsDialogEnd(var_327_bool); // 0x354 ObjFunc
	goto Label_848; // 0x356 Jump
	
Label_855:
	var_453_object = Obj(); // 0x357 PushV
	var_453_object = var_318_object; // 0x358 Mov
	func_6286(); // 0x359 NEW_2
	StopDialog(var_324_object); // 0x35b Func
	GetReturnValue(var_326_int); // 0x35d ObjFunc
	var_317_int = var_326_int; // 0x35f Mov
	return 8; // 0x360 Return
}


func_3859(var_0_object, var_809_int, var_810_object)
{
	var_812_object = Obj(); var_813_bool = 0; var_814_int = 0; var_815_bool = 0; var_816_object = Obj(); var_817_bool = 0; var_818_int = 0; var_819_bool = 0; // 0xf13 PushV
	var_0_object = var_810_object; // 0xf14 TMov
	var_820_bool = 0; var_821_object = Obj(); var_822_float = 0; // 0xf15 PushV
	var_821_object = var_810_object; // 0xf16 Mov
	var_822_float = 70.0; // 0xf17 MovF
	func_6217(var_821_object, var_822_float); // 0xf18 NEW_2
	var_823_bool = var_820_bool == 0; // 0xf1a Not
	if(var_823_bool == 0) goto Label_3870; // 0xf1b JumpB
	var_809_int = -2; // 0xf1c MovI
	return 8; // 0xf1d Return
	
Label_3870:
	CreateDialog(var_816_object); // 0xf1e Func
	var_824_int = 0; // 0xf20 PushV
	func_6605(var_824_int); // 0xf21 NEW_2
	SetNPCName(var_824_int); // 0xf23 ObjFunc
	var_825_int = 0; // 0xf25 PushV
	func_6603(var_825_int); // 0xf26 NEW_2
	SetNPCDescription(var_825_int); // 0xf28 ObjFunc
	var_826_string = ""; // 0xf2a PushV
	func_6607(var_826_string); // 0xf2b NEW_2
	SetPhoto(var_826_string); // 0xf2d ObjFunc
	var_827_string = ""; // 0xf2f PushV
	func_6609(var_827_string); // 0xf30 NEW_2
	SetPhoto2(var_827_string); // 0xf32 ObjFunc
	var_828_int = 0; // 0xf34 PushV
	func_7269(var_828_int); // 0xf35 NEW_2
	SetPlayerName(var_828_int); // 0xf37 ObjFunc
	var_818_int = -1; // 0xf39 MovI
	IsOverrideActive(var_817_bool); // 0xf3a Func
	var_829_bool = var_817_bool; // 0xf3c Push
	if(var_829_bool == 0) goto Label_3904; // 0xf3d JumpB
	var_809_int = -2; // 0xf3e MovI
	return 8; // 0xf3f Return
	
Label_3904:
	DoDialog(var_816_object); // 0xf40 Func
	var_830_bool = 0; var_831_object = Obj(); // 0xf42 PushV
	var_832_object = Obj(); // 0xf43 PushV
	func_6495(var_832_object); // 0xf44 NEW_2
	var_831_object = var_832_object; // 0xf45 Mov
	func_6304(var_830_bool, var_831_object); // 0xf47 NEW_2
	var_833_object = Obj(); var_834_object = Obj(); // 0xf49 PushV
	var_833_object = var_810_object; // 0xf4a Mov
	var_834_object = var_816_object; // 0xf4b Mov
	TaskCall(13); // 0xf4c TaskCall
	func_3940(var_835_object, var_836_object, var_837_string, var_838_bool, var_833_object, var_834_object); // 0xf4d NEW_2
	TaskReturn(); // 0xf4e TaskReturn
	IsDialogEnd(var_819_bool); // 0xf50 ObjFunc
	
Label_3922:
	var_872_bool = var_819_bool == 0; // 0xf52 Not
	if(var_872_bool == 0) goto Label_3929; // 0xf53 JumpB
	sync(); // 0xf54 Func
	IsDialogEnd(var_819_bool); // 0xf56 ObjFunc
	goto Label_3922; // 0xf58 Jump
	
Label_3929:
	var_873_object = Obj(); // 0xf59 PushV
	var_873_object = var_810_object; // 0xf5a Mov
	func_6286(); // 0xf5b NEW_2
	StopDialog(var_816_object); // 0xf5d Func
	GetReturnValue(var_818_int); // 0xf5f ObjFunc
	var_809_int = var_818_int; // 0xf61 Mov
	return 8; // 0xf62 Return
}


func_6932(var_593_bool)
{
	var_595_int = 0; var_596_string = ""; // 0x1b15 PushV
	var_596_string = "ood3Maria1"; // 0x1b16 MovS
	func_6511(var_595_int, var_596_string); // 0x1b17 NEW_2
	var_597_int = 0; // 0x1b19 PushI
	var_598_bool = var_595_int == var_597_int; // 0x1b1a Eq
	if(var_598_bool == 0) goto Label_6942; // 0x1b1b JumpB
	var_593_bool = 1; // 0x1b1c MovB
	return 0; // 0x1b1d Return
	
Label_6942:
	var_593_bool = 0; // 0x1b1e MovB
	return 0; // 0x1b1f Return
}


func_3354(var_0_object, var_1_object, var_2_object, var_3_string, var_657_object, var_658_object)
{
	var_0_object = var_658_object; // 0xd1b TMov
	var_1_object = var_657_object; // 0xd1c TMov
	var_3_string = 0; // 0xd1d TMovB
	var_663_int = 1; // 0xd1e PushI
	if(var_663_int == 0) goto Label_3407; // 0xd1f JumpB
	var_664_string = ""; // 0xd20 PushV
	var_664_string = "Mysterious"; // 0xd21 MovS
	func_3437(var_658_object, var_664_string); // 0xd22 NEW_2
	var_672_int = 535203; // 0xd24 PushI
	SetMessage(var_672_int); // 0xd25 TObjFunc
	ClearReplies(); // 0xd27 TObjFunc
	var_673_bool = 0; var_674_object = Obj(); // 0xd29 PushV
	var_674_object = var_1_object; // 0xd2a MovT
	func_6956(var_674_object); // 0xd2b NEW_2
	if(var_673_bool == 0) goto Label_3379; // 0xd2d JumpB
	var_679_int = 536230; // 0xd2e PushI
	var_680_int = 38006; // 0xd2f PushI
	var_681_int = 38005; // 0xd30 PushI
	AddReply(var_679_int, var_680_int, var_681_int); // 0xd31 TObjFunc
	
Label_3379:
	var_682_bool = 0; // 0xd33 PushV
	var_682_bool = 0; // 0xd34 MovB
	var_683_bool = 0; var_684_object = Obj(); // 0xd35 PushV
	var_684_object = var_1_object; // 0xd36 MovT
	func_6968(var_684_object); // 0xd37 NEW_2
	if(var_683_bool == 0) goto Label_3393; // 0xd39 JumpB
	var_689_bool = 0; var_690_object = Obj(); // 0xd3a PushV
	var_690_object = var_1_object; // 0xd3b MovT
	func_7040(var_690_object); // 0xd3c NEW_2
	var_695_bool = var_689_bool == 0; // 0xd3e Not
	if(var_695_bool == 0) goto Label_3393; // 0xd3f JumpB
	var_682_bool = 1; // 0xd40 MovB
	
Label_3393:
	if(var_682_bool == 0) goto Label_3399; // 0xd41 JumpB
	var_696_int = 536233; // 0xd42 PushI
	var_697_int = 12417; // 0xd43 PushI
	var_698_int = 38008; // 0xd44 PushI
	AddReply(var_696_int, var_697_int, var_698_int); // 0xd45 TObjFunc
	
Label_3399:
	var_699_int = 536232; // 0xd47 PushI
	var_700_int = -1; // 0xd48 PushI
	var_701_int = 38007; // 0xd49 PushI
	AddReply(var_699_int, var_700_int, var_701_int); // 0xd4a TObjFunc
	goto Label_3407; // 0xd4c Jump
	
Label_3407:
	var_702_bool = 0; // 0xd4f PushV
	func_6611(var_702_bool); // 0xd50 NEW_2
	if(var_702_bool == 0) goto Label_3422; // 0xd52 JumpB
	
Label_3411:
	lshWaitForAnimEnd(); // 0xd53 Func
	var_703_string = var_3_string; // 0xd55 PushT
	if(var_703_string == 0) goto Label_3416; // 0xd56 JumpB
	goto Label_3421; // 0xd57 Jump
	
Label_3421:
	goto Label_3436; // 0xd5d Jump
	
Label_3436:
	return 0; // 0xd6c Return
	
Label_3416:
	var_704_string = ""; // 0xd58 PushV
	var_704_string = var_2_object; // 0xd59 MovT
	func_6442(var_704_string); // 0xd5a NEW_2
	goto Label_3411; // 0xd5c Jump
	
Label_3422:
	var_705_string = "all"; // 0xd5e PushS
	var_706_string = "idle"; // 0xd5f PushS
	PlayAnimation(var_705_string, var_706_string); // 0xd60 Func
	
Label_3426:
	WaitForAnimEnd(); // 0xd62 Func
	var_707_string = var_3_string; // 0xd64 PushT
	if(var_707_string == 0) goto Label_3431; // 0xd65 JumpB
	goto Label_3436; // 0xd66 Jump
	
Label_3431:
	var_708_string = "all"; // 0xd67 PushS
	var_709_string = "idle"; // 0xd68 PushS
	PlayAnimation(var_708_string, var_709_string); // 0xd69 Func
	goto Label_3426; // 0xd6b Jump
}


func_4895(var_2_object, var_1009_string)
{
	var_1010_bool = 0; // 0x1320 PushV
	func_6611(var_1010_bool); // 0x1321 NEW_2
	var_1011_bool = var_1010_bool == 0; // 0x1323 Not
	if(var_1011_bool == 0) goto Label_4902; // 0x1324 JumpB
	return 0; // 0x1325 Return
	
Label_4902:
	var_1012_bool = var_1009_string == var_2_object; // 0x1326 Eq
	if(var_1012_bool == 0) goto Label_4905; // 0x1327 JumpB
	return 0; // 0x1328 Return
	
Label_4905:
	var_1013_string = ""; var_1014_bool = 0; // 0x1329 PushV
	var_1013_string = var_1009_string; // 0x132a Mov
	var_1015_string = ""; // 0x132b PushS
	var_1016_bool = var_1009_string == var_1015_string; // 0x132c Eq
	if(var_1016_bool == 0) goto Label_4912; // 0x132d JumpB
	var_1014_bool = 0; // 0x132e MovB
	goto Label_4913; // 0x132f Jump
	
Label_4913:
	func_6458(var_1013_string, var_1014_bool); // 0x1331 NEW_2
	var_2_object = var_1009_string; // 0x1333 TMov
	return 0; // 0x1334 Return
	
Label_4912:
	var_1014_bool = 1; // 0x1330 MovB
}


func_6944(var_609_bool)
{
	var_611_int = 0; var_612_string = ""; // 0x1b21 PushV
	var_612_string = "ood3Maria2"; // 0x1b22 MovS
	func_6511(var_611_int, var_612_string); // 0x1b23 NEW_2
	var_613_int = 0; // 0x1b25 PushI
	var_614_bool = var_611_int == var_613_int; // 0x1b26 Eq
	if(var_614_bool == 0) goto Label_6954; // 0x1b27 JumpB
	var_609_bool = 1; // 0x1b28 MovB
	return 0; // 0x1b29 Return
	
Label_6954:
	var_609_bool = 0; // 0x1b2a MovB
	return 0; // 0x1b2b Return
}


func_5926(var_0_object)
{
	var_57_bool = 0; // 0x1726 PushV
	func_6212(var_57_bool); // 0x1727 NEW_2
	var_60_bool = var_57_bool == 0; // 0x1729 Not
	if(var_60_bool == 0) goto Label_5933; // 0x172a JumpB
	Hold(); // 0x172b Func
	
Label_5933:
	GetDirection(var_0_object); // 0x172d Func
	
Label_5935:
	func_6102(); // 0x1730 NEW_2
	goto Label_5935; // 0x1732 Jump
}


func_6442(var_287_string)
{
	var_288_bool = 0; var_289_float = 0; var_290_float = 0; var_291_bool = 0; var_292_float = 0; var_293_float = 0; // 0x192a PushV
	lshHasAnimation(var_291_bool, var_287_string); // 0x192b Func
	var_294_bool = var_291_bool; // 0x192d Push
	if(var_294_bool == 0) goto Label_6453; // 0x192e JumpB
	lshGetAnimTimes(var_287_string, var_292_float, var_293_float); // 0x192f Func
	var_295_bool = 0; // 0x1931 PushB
	lshPlayAnimation(var_292_float, var_293_float, var_295_bool); // 0x1932 Func
	goto Label_6457; // 0x1934 Jump
	
Label_6457:
	return 6; // 0x1939 Return
	
Label_6453:
	var_296_string = "Can't find lsh animation : "; // 0x1935 PushS
	var_297_int = var_296_string + var_287_string; // 0x1936 Add
	Trace(var_297_int); // 0x1937 Func
}


func_6956(var_673_bool)
{
	var_675_int = 0; var_676_string = ""; // 0x1b2d PushV
	var_676_string = "ood4Maria1"; // 0x1b2e MovS
	func_6511(var_675_int, var_676_string); // 0x1b2f NEW_2
	var_677_int = 1; // 0x1b31 PushI
	var_678_bool = var_675_int == var_677_int; // 0x1b32 Eq
	if(var_678_bool == 0) goto Label_6966; // 0x1b33 JumpB
	var_673_bool = 1; // 0x1b34 MovB
	return 0; // 0x1b35 Return
	
Label_6966:
	var_673_bool = 0; // 0x1b36 MovB
	return 0; // 0x1b37 Return
}


func_5940(var_81_bool)
{
	var_82_object = Obj(); var_83_object = Obj(); // 0x1734 PushV
	var_84_string = "player"; // 0x1735 PushS
	FindActor(var_83_object, var_84_string); // 0x1736 Func
	var_85_bool = var_83_object == 0; // 0x1738 Not
	if(var_85_bool == 0) goto Label_5948; // 0x1739 JumpB
	var_81_bool = 0; // 0x173a MovB
	return 2; // 0x173b Return
	
Label_5948:
	var_86_bool = 0; var_87_object = Obj(); // 0x173c PushV
	var_87_object = var_83_object; // 0x173d Mov
	func_6203(var_87_object); // 0x173e NEW_2
	var_81_bool = var_86_bool; // 0x173f Mov
	return 2; // 0x1741 Return
}


func_6968(var_683_bool)
{
	var_685_int = 0; var_686_string = ""; // 0x1b39 PushV
	var_686_string = "ood4Maria2"; // 0x1b3a MovS
	func_6511(var_685_int, var_686_string); // 0x1b3b NEW_2
	var_687_int = 0; // 0x1b3d PushI
	var_688_bool = var_685_int == var_687_int; // 0x1b3e Eq
	if(var_688_bool == 0) goto Label_6978; // 0x1b3f JumpB
	var_683_bool = 1; // 0x1b40 MovB
	return 0; // 0x1b41 Return
	
Label_6978:
	var_683_bool = 0; // 0x1b42 MovB
	return 0; // 0x1b43 Return
}


func_6458(var_259_string, var_260_bool)
{
	var_263_bool = 0; var_264_float = 0; var_265_float = 0; var_266_bool = 0; var_267_float = 0; var_268_float = 0; // 0x193a PushV
	lshHasAnimation(var_266_bool, var_259_string); // 0x193b Func
	var_269_bool = var_266_bool; // 0x193d Push
	if(var_269_bool == 0) goto Label_6468; // 0x193e JumpB
	lshGetAnimTimes(var_259_string, var_267_float, var_268_float); // 0x193f Func
	lshPlayAnimation(var_267_float, var_268_float, var_260_bool); // 0x1941 Func
	goto Label_6472; // 0x1943 Jump
	
Label_6472:
	return 6; // 0x1948 Return
	
Label_6468:
	var_270_string = "Can't find lsh animation : "; // 0x1944 PushS
	var_271_int = var_270_string + var_259_string; // 0x1945 Add
	Trace(var_271_int); // 0x1946 Func
}


func_320(var_0_object, var_714_int, var_715_object)
{
	var_717_object = Obj(); var_718_bool = 0; var_719_int = 0; var_720_bool = 0; var_721_object = Obj(); var_722_bool = 0; var_723_int = 0; var_724_bool = 0; // 0x140 PushV
	var_0_object = var_715_object; // 0x141 TMov
	var_725_bool = 0; var_726_object = Obj(); var_727_float = 0; // 0x142 PushV
	var_726_object = var_715_object; // 0x143 Mov
	var_727_float = 70.0; // 0x144 MovF
	func_6217(var_726_object, var_727_float); // 0x145 NEW_2
	var_728_bool = var_725_bool == 0; // 0x147 Not
	if(var_728_bool == 0) goto Label_331; // 0x148 JumpB
	var_714_int = -2; // 0x149 MovI
	return 8; // 0x14a Return
	
Label_331:
	CreateDialog(var_721_object); // 0x14b Func
	var_729_int = 0; // 0x14d PushV
	func_6605(var_729_int); // 0x14e NEW_2
	SetNPCName(var_729_int); // 0x150 ObjFunc
	var_730_int = 0; // 0x152 PushV
	func_6603(var_730_int); // 0x153 NEW_2
	SetNPCDescription(var_730_int); // 0x155 ObjFunc
	var_731_string = ""; // 0x157 PushV
	func_6607(var_731_string); // 0x158 NEW_2
	SetPhoto(var_731_string); // 0x15a ObjFunc
	var_732_string = ""; // 0x15c PushV
	func_6609(var_732_string); // 0x15d NEW_2
	SetPhoto2(var_732_string); // 0x15f ObjFunc
	var_733_int = 0; // 0x161 PushV
	func_7269(var_733_int); // 0x162 NEW_2
	SetPlayerName(var_733_int); // 0x164 ObjFunc
	var_723_int = -1; // 0x166 MovI
	IsOverrideActive(var_722_bool); // 0x167 Func
	var_734_bool = var_722_bool; // 0x169 Push
	if(var_734_bool == 0) goto Label_365; // 0x16a JumpB
	var_714_int = -2; // 0x16b MovI
	return 8; // 0x16c Return
	
Label_365:
	DoDialog(var_721_object); // 0x16d Func
	var_735_bool = 0; var_736_object = Obj(); // 0x16f PushV
	var_737_object = Obj(); // 0x170 PushV
	func_6495(var_737_object); // 0x171 NEW_2
	var_736_object = var_737_object; // 0x172 Mov
	func_6304(var_735_bool, var_736_object); // 0x174 NEW_2
	var_738_object = Obj(); var_739_object = Obj(); // 0x176 PushV
	var_738_object = var_715_object; // 0x177 Mov
	var_739_object = var_721_object; // 0x178 Mov
	TaskCall(3); // 0x179 TaskCall
	func_401(var_740_object, var_741_object, var_742_string, var_743_bool, var_738_object, var_739_object); // 0x17a NEW_2
	TaskReturn(); // 0x17b TaskReturn
	IsDialogEnd(var_724_bool); // 0x17d ObjFunc
	
Label_383:
	var_805_bool = var_724_bool == 0; // 0x17f Not
	if(var_805_bool == 0) goto Label_390; // 0x180 JumpB
	sync(); // 0x181 Func
	IsDialogEnd(var_724_bool); // 0x183 ObjFunc
	goto Label_383; // 0x185 Jump
	
Label_390:
	var_806_object = Obj(); // 0x186 PushV
	var_806_object = var_715_object; // 0x187 Mov
	func_6286(); // 0x188 NEW_2
	StopDialog(var_721_object); // 0x18a Func
	GetReturnValue(var_723_int); // 0x18c ObjFunc
	var_714_int = var_723_int; // 0x18e Mov
	return 8; // 0x18f Return
}


func_5443(var_0_object, var_1_object, var_2_object, var_3_string, var_1084_object, var_1085_object)
{
	var_0_object = var_1085_object; // 0x1544 TMov
	var_1_object = var_1084_object; // 0x1545 TMov
	var_3_string = 0; // 0x1546 TMovB
	var_1090_int = 1; // 0x1547 PushI
	if(var_1090_int == 0) goto Label_5471; // 0x1548 JumpB
	var_1091_string = ""; // 0x1549 PushV
	var_1091_string = "Staring"; // 0x154a MovS
	func_5501(var_1085_object, var_1091_string); // 0x154b NEW_2
	var_1099_int = 535671; // 0x154d PushI
	SetMessage(var_1099_int); // 0x154e TObjFunc
	ClearReplies(); // 0x1550 TObjFunc
	var_1100_int = 535672; // 0x1552 PushI
	var_1101_int = 42114; // 0x1553 PushI
	var_1102_int = 37358; // 0x1554 PushI
	AddReply(var_1100_int, var_1101_int, var_1102_int); // 0x1555 TObjFunc
	var_1103_int = 540141; // 0x1557 PushI
	var_1104_int = -1; // 0x1558 PushI
	var_1105_int = 42113; // 0x1559 PushI
	AddReply(var_1103_int, var_1104_int, var_1105_int); // 0x155a TObjFunc
	goto Label_5471; // 0x155c Jump
	
Label_5471:
	var_1106_bool = 0; // 0x155f PushV
	func_6611(var_1106_bool); // 0x1560 NEW_2
	if(var_1106_bool == 0) goto Label_5486; // 0x1562 JumpB
	
Label_5475:
	lshWaitForAnimEnd(); // 0x1563 Func
	var_1107_string = var_3_string; // 0x1565 PushT
	if(var_1107_string == 0) goto Label_5480; // 0x1566 JumpB
	goto Label_5485; // 0x1567 Jump
	
Label_5485:
	goto Label_5500; // 0x156d Jump
	
Label_5500:
	return 0; // 0x157c Return
	
Label_5480:
	var_1108_string = ""; // 0x1568 PushV
	var_1108_string = var_2_object; // 0x1569 MovT
	func_6442(var_1108_string); // 0x156a NEW_2
	goto Label_5475; // 0x156c Jump
	
Label_5486:
	var_1109_string = "all"; // 0x156e PushS
	var_1110_string = "idle"; // 0x156f PushS
	PlayAnimation(var_1109_string, var_1110_string); // 0x1570 Func
	
Label_5490:
	WaitForAnimEnd(); // 0x1572 Func
	var_1111_string = var_3_string; // 0x1574 PushT
	if(var_1111_string == 0) goto Label_5495; // 0x1575 JumpB
	goto Label_5500; // 0x1576 Jump
	
Label_5495:
	var_1112_string = "all"; // 0x1577 PushS
	var_1113_string = "idle"; // 0x1578 PushS
	PlayAnimation(var_1112_string, var_1113_string); // 0x1579 Func
	goto Label_5490; // 0x157b Jump
}


func_6980(var_500_bool)
{
	var_502_int = 0; var_503_string = ""; // 0x1b45 PushV
	var_503_string = "ood2Maria1"; // 0x1b46 MovS
	func_6511(var_502_int, var_503_string); // 0x1b47 NEW_2
	var_504_int = 0; // 0x1b49 PushI
	var_505_bool = var_502_int == var_504_int; // 0x1b4a Eq
	if(var_505_bool == 0) goto Label_6990; // 0x1b4b JumpB
	var_500_bool = 1; // 0x1b4c MovB
	return 0; // 0x1b4d Return
	
Label_6990:
	var_500_bool = 0; // 0x1b4e MovB
	return 0; // 0x1b4f Return
}


func_5955(var_0_object)
{
	var_133_float = GetByIndex(var_0_object, 0); // 0x1743 PushE
	var_134_float = GetByIndex(var_0_object, 2); // 0x1744 PushE
	RotateAsync(var_133_float, var_134_float); // 0x1745 Func
	return 0; // 0x1747 Return
}


func_5960(var_64_bool)
{
	var_65_object = Obj(); var_66_bool = 0; var_67_object = Obj(); var_68_bool = 0; // 0x1748 PushV
	var_69_string = "player"; // 0x1749 PushS
	FindActor(var_67_object, var_69_string); // 0x174a Func
	var_70_bool = var_67_object == 0; // 0x174c Not
	if(var_70_bool == 0) goto Label_5968; // 0x174d JumpB
	var_64_bool = 0; // 0x174e MovB
	return 4; // 0x174f Return
	
Label_5968:
	var_71_float = 0; var_72_object = Obj(); // 0x1750 PushV
	var_72_object = var_67_object; // 0x1751 Mov
	func_6178(var_72_object); // 0x1752 NEW_2
	var_79_float = 90000.0; // 0x1754 PushF
	var_80_bool = var_71_float > var_79_float; // 0x1755 GT
	if(var_80_bool == 0) goto Label_5977; // 0x1756 JumpB
	var_64_bool = 0; // 0x1757 MovB
	return 4; // 0x1758 Return
	
Label_5977:
	CanSee(var_68_bool, var_67_object); // 0x1759 Func
	var_64_bool = var_68_bool; // 0x175b Mov
	return 4; // 0x175c Return
}


func_6473(var_183_bool, var_184_string)
{
	var_185_bool = 0; var_186_bool = 0; // 0x1949 PushV
	var_187_bool = 0; // 0x194a PushV
	func_6611(var_187_bool); // 0x194b NEW_2
	if(var_187_bool == 0) goto Label_6486; // 0x194d JumpB
	lshHasSpeech(var_186_bool, var_184_string); // 0x194e Func
	var_188_bool = var_186_bool; // 0x1950 Push
	if(var_188_bool == 0) goto Label_6486; // 0x1951 JumpB
	lshPlaySpeech(var_184_string); // 0x1952 Func
	var_183_bool = 1; // 0x1954 MovB
	return 2; // 0x1955 Return
	
Label_6486:
	var_183_bool = 0; // 0x1956 MovB
	return 2; // 0x1957 Return
}


func_6992(var_516_bool)
{
	var_518_int = 0; var_519_string = ""; // 0x1b51 PushV
	var_519_string = "ood2Maria2"; // 0x1b52 MovS
	func_6511(var_518_int, var_519_string); // 0x1b53 NEW_2
	var_520_int = 0; // 0x1b55 PushI
	var_521_bool = var_518_int == var_520_int; // 0x1b56 Eq
	if(var_521_bool == 0) goto Label_7002; // 0x1b57 JumpB
	var_516_bool = 1; // 0x1b58 MovB
	return 0; // 0x1b59 Return
	
Label_7002:
	var_516_bool = 0; // 0x1b5a MovB
	return 0; // 0x1b5b Return
}


func_6488()
{
	var_59_bool = 0; // 0x1958 PushV
	func_6611(var_59_bool); // 0x1959 NEW_2
	if(var_59_bool == 0) goto Label_6494; // 0x195b JumpB
	lshStopSpeech(); // 0x195c Func
	
Label_6494:
	return 0; // 0x195e Return
}


func_7004(var_506_bool)
{
	var_508_int = 0; var_509_string = ""; // 0x1b5d PushV
	var_509_string = "d2q02"; // 0x1b5e MovS
	func_6511(var_508_int, var_509_string); // 0x1b5f NEW_2
	var_510_int = 3; // 0x1b61 PushI
	var_511_bool = var_508_int == var_510_int; // 0x1b62 Eq
	if(var_511_bool == 0) goto Label_7014; // 0x1b63 JumpB
	var_506_bool = 1; // 0x1b64 MovB
	return 0; // 0x1b65 Return
	
Label_7014:
	var_506_bool = 0; // 0x1b66 MovB
	return 0; // 0x1b67 Return
}


func_5982()
{
	var_1174_float = 0; var_1175_float = 0; // 0x175e PushV
	var_1176_int = 8; // 0x175f PushI
	var_1177_int = 16; // 0x1760 PushI
	rand(var_1175_float, var_1176_int, var_1177_int); // 0x1761 Func
	var_1178_int = 10; // 0x1763 PushI
	SetTimer(var_1178_int, var_1175_float); // 0x1764 Func
	return 2; // 0x1766 Return
}


func_6495(var_151_object)
{
	var_152_object = Obj(); var_153_object = Obj(); // 0x195f PushV
	self(var_153_object); // 0x1960 Func
	var_151_object = var_153_object; // 0x1962 Mov
	return 2; // 0x1963 Return
}


func_4449(var_2_object, var_917_string)
{
	var_918_bool = 0; // 0x1162 PushV
	func_6611(var_918_bool); // 0x1163 NEW_2
	var_919_bool = var_918_bool == 0; // 0x1165 Not
	if(var_919_bool == 0) goto Label_4456; // 0x1166 JumpB
	return 0; // 0x1167 Return
	
Label_4456:
	var_920_bool = var_917_string == var_2_object; // 0x1168 Eq
	if(var_920_bool == 0) goto Label_4459; // 0x1169 JumpB
	return 0; // 0x116a Return
	
Label_4459:
	var_921_string = ""; var_922_bool = 0; // 0x116b PushV
	var_921_string = var_917_string; // 0x116c Mov
	var_923_string = ""; // 0x116d PushS
	var_924_bool = var_917_string == var_923_string; // 0x116e Eq
	if(var_924_bool == 0) goto Label_4466; // 0x116f JumpB
	var_922_bool = 0; // 0x1170 MovB
	goto Label_4467; // 0x1171 Jump
	
Label_4467:
	func_6458(var_921_string, var_922_bool); // 0x1173 NEW_2
	var_2_object = var_917_string; // 0x1175 TMov
	return 0; // 0x1176 Return
	
Label_4466:
	var_922_bool = 1; // 0x1172 MovB
}


func_866(var_0_object, var_1_object, var_2_object, var_3_string, var_341_object, var_342_object)
{
	var_0_object = var_342_object; // 0x363 TMov
	var_1_object = var_341_object; // 0x364 TMov
	var_3_string = 0; // 0x365 TMovB
	var_347_int = 1; // 0x366 PushI
	if(var_347_int == 0) goto Label_998; // 0x367 JumpB
	var_348_bool = 0; var_349_object = Obj(); // 0x368 PushV
	var_349_object = var_1_object; // 0x369 MovT
	func_6872(var_349_object); // 0x36a NEW_2
	var_356_bool = var_348_bool == 0; // 0x36c Not
	if(var_356_bool == 0) goto Label_898; // 0x36d JumpB
	var_357_string = ""; // 0x36e PushV
	var_357_string = "Staring"; // 0x36f MovS
	func_1028(var_342_object, var_357_string); // 0x370 NEW_2
	var_365_int = 506253; // 0x372 PushI
	SetMessage(var_365_int); // 0x373 TObjFunc
	ClearReplies(); // 0x375 TObjFunc
	var_366_int = 506254; // 0x377 PushI
	var_367_int = 6921; // 0x378 PushI
	var_368_int = 6920; // 0x379 PushI
	AddReply(var_366_int, var_367_int, var_368_int); // 0x37a TObjFunc
	var_369_int = 506259; // 0x37c PushI
	var_370_int = 6926; // 0x37d PushI
	var_371_int = 6925; // 0x37e PushI
	AddReply(var_369_int, var_370_int, var_371_int); // 0x37f TObjFunc
	goto Label_998; // 0x381 Jump
	
Label_998:
	var_372_bool = 0; // 0x3e6 PushV
	func_6611(var_372_bool); // 0x3e7 NEW_2
	if(var_372_bool == 0) goto Label_1013; // 0x3e9 JumpB
	
Label_1002:
	lshWaitForAnimEnd(); // 0x3ea Func
	var_373_string = var_3_string; // 0x3ec PushT
	if(var_373_string == 0) goto Label_1007; // 0x3ed JumpB
	goto Label_1012; // 0x3ee Jump
	
Label_1012:
	goto Label_1027; // 0x3f4 Jump
	
Label_1027:
	return 0; // 0x403 Return
	
Label_1007:
	var_374_string = ""; // 0x3ef PushV
	var_374_string = var_2_object; // 0x3f0 MovT
	func_6442(var_374_string); // 0x3f1 NEW_2
	goto Label_1002; // 0x3f3 Jump
	
Label_1013:
	var_375_string = "all"; // 0x3f5 PushS
	var_376_string = "idle"; // 0x3f6 PushS
	PlayAnimation(var_375_string, var_376_string); // 0x3f7 Func
	
Label_1017:
	WaitForAnimEnd(); // 0x3f9 Func
	var_377_string = var_3_string; // 0x3fb PushT
	if(var_377_string == 0) goto Label_1022; // 0x3fc JumpB
	goto Label_1027; // 0x3fd Jump
	
Label_1022:
	var_378_string = "all"; // 0x3fe PushS
	var_379_string = "idle"; // 0x3ff PushS
	PlayAnimation(var_378_string, var_379_string); // 0x400 Func
	goto Label_1017; // 0x402 Jump
	
Label_898:
	var_380_bool = 0; var_381_object = Obj(); // 0x382 PushV
	var_381_object = var_1_object; // 0x383 MovT
	func_6848(var_381_object); // 0x384 NEW_2
	if(var_380_bool == 0) goto Label_933; // 0x386 JumpB
	var_386_object = Obj(); var_387_object = Obj(); // 0x387 PushV
	var_386_object = var_1_object; // 0x388 MovT
	var_387_object = var_0_object; // 0x389 MovT
	func_6632(); // 0x38a NEW_2
	var_390_object = Obj(); var_391_object = Obj(); // 0x38c PushV
	var_390_object = var_1_object; // 0x38d MovT
	var_391_object = var_0_object; // 0x38e MovT
	func_6625(); // 0x38f NEW_2
	var_398_string = ""; // 0x391 PushV
	var_398_string = "Mysterious"; // 0x392 MovS
	func_1028(var_342_object, var_398_string); // 0x393 NEW_2
	var_399_int = 524928; // 0x395 PushI
	SetMessage(var_399_int); // 0x396 TObjFunc
	ClearReplies(); // 0x398 TObjFunc
	var_400_int = 524944; // 0x39a PushI
	var_401_int = 26279; // 0x39b PushI
	var_402_int = 26278; // 0x39c PushI
	AddReply(var_400_int, var_401_int, var_402_int); // 0x39d TObjFunc
	var_403_int = 524952; // 0x39f PushI
	var_404_int = 26279; // 0x3a0 PushI
	var_405_int = 26286; // 0x3a1 PushI
	AddReply(var_403_int, var_404_int, var_405_int); // 0x3a2 TObjFunc
	goto Label_998; // 0x3a4 Jump
	
Label_933:
	var_406_string = ""; // 0x3a5 PushV
	var_406_string = "Mysterious"; // 0x3a6 MovS
	func_1028(var_342_object, var_406_string); // 0x3a7 NEW_2
	var_407_int = 508097; // 0x3a9 PushI
	SetMessage(var_407_int); // 0x3aa TObjFunc
	ClearReplies(); // 0x3ac TObjFunc
	var_408_bool = 0; // 0x3ae PushV
	var_408_bool = 0; // 0x3af MovB
	var_409_bool = 0; var_410_object = Obj(); // 0x3b0 PushV
	var_410_object = var_1_object; // 0x3b1 MovT
	func_6824(var_410_object); // 0x3b2 NEW_2
	if(var_409_bool == 0) goto Label_955; // 0x3b4 JumpB
	var_415_bool = 0; var_416_object = Obj(); // 0x3b5 PushV
	var_416_object = var_1_object; // 0x3b6 MovT
	func_6860(var_416_object); // 0x3b7 NEW_2
	if(var_415_bool == 0) goto Label_955; // 0x3b9 JumpB
	var_408_bool = 1; // 0x3ba MovB
	
Label_955:
	if(var_408_bool == 0) goto Label_961; // 0x3bb JumpB
	var_421_int = 521832; // 0x3bc PushI
	var_422_int = 23004; // 0x3bd PushI
	var_423_int = 23003; // 0x3be PushI
	AddReply(var_421_int, var_422_int, var_423_int); // 0x3bf TObjFunc
	
Label_961:
	var_424_bool = 0; var_425_object = Obj(); // 0x3c1 PushV
	var_425_object = var_1_object; // 0x3c2 MovT
	func_6836(var_425_object); // 0x3c3 NEW_2
	if(var_424_bool == 0) goto Label_971; // 0x3c5 JumpB
	var_430_int = 505605; // 0x3c6 PushI
	var_431_int = 6180; // 0x3c7 PushI
	var_432_int = 6179; // 0x3c8 PushI
	AddReply(var_430_int, var_431_int, var_432_int); // 0x3c9 TObjFunc
	
Label_971:
	var_433_bool = 0; // 0x3cb PushV
	var_433_bool = 0; // 0x3cc MovB
	var_434_bool = 0; var_435_object = Obj(); // 0x3cd PushV
	var_435_object = var_1_object; // 0x3ce MovT
	func_7100(var_435_object); // 0x3cf NEW_2
	if(var_434_bool == 0) goto Label_984; // 0x3d1 JumpB
	var_440_bool = 0; var_441_object = Obj(); // 0x3d2 PushV
	var_441_object = var_1_object; // 0x3d3 MovT
	func_7124(var_441_object); // 0x3d4 NEW_2
	if(var_440_bool == 0) goto Label_984; // 0x3d6 JumpB
	var_433_bool = 1; // 0x3d7 MovB
	
Label_984:
	if(var_433_bool == 0) goto Label_990; // 0x3d8 JumpB
	var_446_int = 508111; // 0x3d9 PushI
	var_447_int = 23011; // 0x3da PushI
	var_448_int = 8934; // 0x3db PushI
	AddReply(var_446_int, var_447_int, var_448_int); // 0x3dc TObjFunc
	
Label_990:
	var_449_int = 505611; // 0x3de PushI
	var_450_int = -1; // 0x3df PushI
	var_451_int = 6185; // 0x3e0 PushI
	AddReply(var_449_int, var_450_int, var_451_int); // 0x3e1 TObjFunc
	goto Label_998; // 0x3e3 Jump
}


func_3940(var_0_object, var_1_object, var_2_object, var_3_string, var_833_object, var_834_object)
{
	var_0_object = var_834_object; // 0xf65 TMov
	var_1_object = var_833_object; // 0xf66 TMov
	var_3_string = 0; // 0xf67 TMovB
	var_839_int = 1; // 0xf68 PushI
	if(var_839_int == 0) goto Label_3978; // 0xf69 JumpB
	var_840_string = ""; // 0xf6a PushV
	var_840_string = "Mysterious"; // 0xf6b MovS
	func_4008(var_834_object, var_840_string); // 0xf6c NEW_2
	var_848_int = 533236; // 0xf6e PushI
	SetMessage(var_848_int); // 0xf6f TObjFunc
	ClearReplies(); // 0xf71 TObjFunc
	var_849_bool = 0; var_850_object = Obj(); // 0xf73 PushV
	var_850_object = var_1_object; // 0xf74 MovT
	func_6884(var_850_object); // 0xf75 NEW_2
	if(var_849_bool == 0) goto Label_3965; // 0xf77 JumpB
	var_855_int = 533237; // 0xf78 PushI
	var_856_int = 34752; // 0xf79 PushI
	var_857_int = 34751; // 0xf7a PushI
	AddReply(var_855_int, var_856_int, var_857_int); // 0xf7b TObjFunc
	
Label_3965:
	var_858_int = 533244; // 0xf7d PushI
	var_859_int = -1; // 0xf7e PushI
	var_860_int = 34758; // 0xf7f PushI
	AddReply(var_858_int, var_859_int, var_860_int); // 0xf80 TObjFunc
	var_861_int = 535757; // 0xf82 PushI
	var_862_int = -1; // 0xf83 PushI
	var_863_int = 37438; // 0xf84 PushI
	AddReply(var_861_int, var_862_int, var_863_int); // 0xf85 TObjFunc
	goto Label_3978; // 0xf87 Jump
	
Label_3978:
	var_864_bool = 0; // 0xf8a PushV
	func_6611(var_864_bool); // 0xf8b NEW_2
	if(var_864_bool == 0) goto Label_3993; // 0xf8d JumpB
	
Label_3982:
	lshWaitForAnimEnd(); // 0xf8e Func
	var_865_string = var_3_string; // 0xf90 PushT
	if(var_865_string == 0) goto Label_3987; // 0xf91 JumpB
	goto Label_3992; // 0xf92 Jump
	
Label_3992:
	goto Label_4007; // 0xf98 Jump
	
Label_4007:
	return 0; // 0xfa7 Return
	
Label_3987:
	var_866_string = ""; // 0xf93 PushV
	var_866_string = var_2_object; // 0xf94 MovT
	func_6442(var_866_string); // 0xf95 NEW_2
	goto Label_3982; // 0xf97 Jump
	
Label_3993:
	var_867_string = "all"; // 0xf99 PushS
	var_868_string = "idle"; // 0xf9a PushS
	PlayAnimation(var_867_string, var_868_string); // 0xf9b Func
	
Label_3997:
	WaitForAnimEnd(); // 0xf9d Func
	var_869_string = var_3_string; // 0xf9f PushT
	if(var_869_string == 0) goto Label_4002; // 0xfa0 JumpB
	goto Label_4007; // 0xfa1 Jump
	
Label_4002:
	var_870_string = "all"; // 0xfa2 PushS
	var_871_string = "idle"; // 0xfa3 PushS
	PlayAnimation(var_870_string, var_871_string); // 0xfa4 Func
	goto Label_3997; // 0xfa6 Jump
}


func_6501(var_115_cvector, var_116_cvector)
{
	var_118_float = 0; var_119_float = 0; // 0x1965 PushV
	var_120_int = var_116_cvector | var_116_cvector; // 0x1966 Or
	var_119_float = sqrt(var_120_int); // 0x1967 Sqrt2
	var_121_float = 0.0; // 0x1968 PushF
	var_122_bool = var_119_float < var_121_float; // 0x1969 LT
	if(var_122_bool == 0) goto Label_6509; // 0x196a JumpB
	var_115_cvector = CVector(0.0, 0.0, 0.0); // 0x196b MovV
	return 2; // 0x196c Return
	
Label_6509:
	var_115_cvector = var_116_cvector / var_116_cvector; // 0x196d Div2
	return 2; // 0x196e Return
}


func_5991()
{
	var_1173_int = 10; // 0x1767 PushI
	KillTimer(var_1173_int); // 0x1768 Func
	return 0; // 0x176a Return
}


func_7016(var_522_bool)
{
	var_524_int = 0; var_525_string = ""; // 0x1b69 PushV
	var_525_string = "d2q03"; // 0x1b6a MovS
	func_6511(var_524_int, var_525_string); // 0x1b6b NEW_2
	var_526_int = 1; // 0x1b6d PushI
	var_527_bool = var_524_int == var_526_int; // 0x1b6e Eq
	if(var_527_bool == 0) goto Label_7026; // 0x1b6f JumpB
	var_522_bool = 1; // 0x1b70 MovB
	return 0; // 0x1b71 Return
	
Label_7026:
	var_522_bool = 0; // 0x1b72 MovB
	return 0; // 0x1b73 Return
}


func_3437(var_2_object, var_664_string)
{
	var_665_bool = 0; // 0xd6e PushV
	func_6611(var_665_bool); // 0xd6f NEW_2
	var_666_bool = var_665_bool == 0; // 0xd71 Not
	if(var_666_bool == 0) goto Label_3444; // 0xd72 JumpB
	return 0; // 0xd73 Return
	
Label_3444:
	var_667_bool = var_664_string == var_2_object; // 0xd74 Eq
	if(var_667_bool == 0) goto Label_3447; // 0xd75 JumpB
	return 0; // 0xd76 Return
	
Label_3447:
	var_668_string = ""; var_669_bool = 0; // 0xd77 PushV
	var_668_string = var_664_string; // 0xd78 Mov
	var_670_string = ""; // 0xd79 PushS
	var_671_bool = var_664_string == var_670_string; // 0xd7a Eq
	if(var_671_bool == 0) goto Label_3454; // 0xd7b JumpB
	var_669_bool = 0; // 0xd7c MovB
	goto Label_3455; // 0xd7d Jump
	
Label_3455:
	func_6458(var_668_string, var_669_bool); // 0xd7f NEW_2
	var_2_object = var_664_string; // 0xd81 TMov
	return 0; // 0xd82 Return
	
Label_3454:
	var_669_bool = 1; // 0xd7e MovB
}


func_6511(var_350_int, var_351_string)
{
	var_352_int = 0; var_353_int = 0; // 0x196f PushV
	GetVariable(var_351_string, var_353_int); // 0x1970 Func
	var_350_int = var_353_int; // 0x1972 Mov
	return 2; // 0x1973 Return
}


func_7028(var_587_bool)
{
	var_589_int = 0; var_590_string = ""; // 0x1b75 PushV
	var_590_string = "d3q02"; // 0x1b76 MovS
	func_6511(var_589_int, var_590_string); // 0x1b77 NEW_2
	var_591_int = 3; // 0x1b79 PushI
	var_592_bool = var_589_int == var_591_int; // 0x1b7a Eq
	if(var_592_bool == 0) goto Label_7038; // 0x1b7b JumpB
	var_587_bool = 1; // 0x1b7c MovB
	return 0; // 0x1b7d Return
	
Label_7038:
	var_587_bool = 0; // 0x1b7e MovB
	return 0; // 0x1b7f Return
}


func_6516(var_159_int, var_160_int)
{
	var_161_object = Obj(); var_162_object = Obj(); // 0x1974 PushV
	CreateIntVector(var_162_object); // 0x1975 Func
	add(var_159_int); // 0x1977 ObjFunc
	add(var_160_int); // 0x1979 ObjFunc
	var_163_int = 3; // 0x197b PushI
	SendWorldWndMessage(var_163_int, var_162_object); // 0x197c Func
	return 2; // 0x197e Return
}


func_5501(var_2_object, var_1091_string)
{
	var_1092_bool = 0; // 0x157e PushV
	func_6611(var_1092_bool); // 0x157f NEW_2
	var_1093_bool = var_1092_bool == 0; // 0x1581 Not
	if(var_1093_bool == 0) goto Label_5508; // 0x1582 JumpB
	return 0; // 0x1583 Return
	
Label_5508:
	var_1094_bool = var_1091_string == var_2_object; // 0x1584 Eq
	if(var_1094_bool == 0) goto Label_5511; // 0x1585 JumpB
	return 0; // 0x1586 Return
	
Label_5511:
	var_1095_string = ""; var_1096_bool = 0; // 0x1587 PushV
	var_1095_string = var_1091_string; // 0x1588 Mov
	var_1097_string = ""; // 0x1589 PushS
	var_1098_bool = var_1091_string == var_1097_string; // 0x158a Eq
	if(var_1098_bool == 0) goto Label_5518; // 0x158b JumpB
	var_1096_bool = 0; // 0x158c MovB
	goto Label_5519; // 0x158d Jump
	
Label_5519:
	func_6458(var_1095_string, var_1096_bool); // 0x158f NEW_2
	var_2_object = var_1091_string; // 0x1591 TMov
	return 0; // 0x1592 Return
	
Label_5518:
	var_1096_bool = 1; // 0x158e MovB
}


func_7040(var_689_bool)
{
	var_691_int = 0; var_692_string = ""; // 0x1b81 PushV
	var_692_string = "d4q03"; // 0x1b82 MovS
	func_6511(var_691_int, var_692_string); // 0x1b83 NEW_2
	var_693_int = 0; // 0x1b85 PushI
	var_694_bool = var_691_int == var_693_int; // 0x1b86 Eq
	if(var_694_bool == 0) goto Label_7050; // 0x1b87 JumpB
	var_689_bool = 1; // 0x1b88 MovB
	return 0; // 0x1b89 Return
	
Label_7050:
	var_689_bool = 0; // 0x1b8a MovB
	return 0; // 0x1b8b Return
}


func_6528(var_146_object, var_147_int)
{
	var_148_int = 0; var_149_int = 0; // 0x1980 PushV
	var_150_object = Obj(); var_151_string = ""; var_152_int = 0; // 0x1981 PushV
	var_150_object = var_146_object; // 0x1982 Mov
	var_151_string = "money"; // 0x1983 MovS
	var_152_int = var_147_int; // 0x1984 Mov
	func_6186(var_151_string, var_152_int); // 0x1985 NEW_2
	var_156_int = 0; // 0x1987 PushI
	var_157_bool = var_147_int > var_156_int; // 0x1988 GT
	if(var_157_bool == 0) goto Label_6546; // 0x1989 JumpB
	var_158_string = "Money"; // 0x198a PushS
	GetInvItemByName(var_149_int, var_158_string); // 0x198b Func
	var_159_int = 0; var_160_int = 0; // 0x198d PushV
	var_159_int = var_149_int; // 0x198e Mov
	var_160_int = var_147_int; // 0x198f Mov
	func_6516(var_159_int, var_160_int); // 0x1990 NEW_2
	
Label_6546:
	return 2; // 0x1992 Return
}


func_7052(var_746_bool)
{
	var_748_int = 0; var_749_string = ""; // 0x1b8d PushV
	var_749_string = "d6q01"; // 0x1b8e MovS
	func_6511(var_748_int, var_749_string); // 0x1b8f NEW_2
	var_750_int = 0; // 0x1b91 PushI
	var_751_bool = var_748_int == var_750_int; // 0x1b92 Eq
	if(var_751_bool == 0) goto Label_7062; // 0x1b93 JumpB
	var_746_bool = 1; // 0x1b94 MovB
	return 0; // 0x1b95 Return
	
Label_7062:
	var_746_bool = 0; // 0x1b96 MovB
	return 0; // 0x1b97 Return
}


func_401(var_0_object, var_1_object, var_2_object, var_3_string, var_738_object, var_739_object)
{
	var_0_object = var_739_object; // 0x192 TMov
	var_1_object = var_738_object; // 0x193 TMov
	var_3_string = 0; // 0x194 TMovB
	var_744_int = 1; // 0x195 PushI
	if(var_744_int == 0) goto Label_483; // 0x196 JumpB
	var_745_bool = 0; // 0x197 PushV
	var_745_bool = 0; // 0x198 MovB
	var_746_bool = 0; var_747_object = Obj(); // 0x199 PushV
	var_747_object = var_1_object; // 0x19a MovT
	func_7052(var_747_object); // 0x19b NEW_2
	if(var_746_bool == 0) goto Label_420; // 0x19d JumpB
	var_752_bool = 0; var_753_object = Obj(); // 0x19e PushV
	var_753_object = var_1_object; // 0x19f MovT
	func_7064(var_753_object); // 0x1a0 NEW_2
	if(var_752_bool == 0) goto Label_420; // 0x1a2 JumpB
	var_745_bool = 1; // 0x1a3 MovB
	
Label_420:
	if(var_745_bool == 0) goto Label_451; // 0x1a4 JumpB
	var_758_object = Obj(); var_759_object = Obj(); // 0x1a5 PushV
	var_758_object = var_1_object; // 0x1a6 MovT
	var_759_object = var_0_object; // 0x1a7 MovT
	func_6762(); // 0x1a8 NEW_2
	var_762_object = Obj(); var_763_object = Obj(); // 0x1aa PushV
	var_762_object = var_1_object; // 0x1ab MovT
	var_763_object = var_0_object; // 0x1ac MovT
	func_6806(); // 0x1ad NEW_2
	var_766_string = ""; // 0x1af PushV
	var_766_string = "Angry"; // 0x1b0 MovS
	func_513(var_739_object, var_766_string); // 0x1b1 NEW_2
	var_774_int = 503206; // 0x1b3 PushI
	SetMessage(var_774_int); // 0x1b4 TObjFunc
	ClearReplies(); // 0x1b6 TObjFunc
	var_775_int = 503207; // 0x1b8 PushI
	var_776_int = 3543; // 0x1b9 PushI
	var_777_int = 3540; // 0x1ba PushI
	AddReply(var_775_int, var_776_int, var_777_int); // 0x1bb TObjFunc
	var_778_int = 503208; // 0x1bd PushI
	var_779_int = 3542; // 0x1be PushI
	var_780_int = 3541; // 0x1bf PushI
	AddReply(var_778_int, var_779_int, var_780_int); // 0x1c0 TObjFunc
	goto Label_483; // 0x1c2 Jump
	
Label_483:
	var_781_bool = 0; // 0x1e3 PushV
	func_6611(var_781_bool); // 0x1e4 NEW_2
	if(var_781_bool == 0) goto Label_498; // 0x1e6 JumpB
	
Label_487:
	lshWaitForAnimEnd(); // 0x1e7 Func
	var_782_string = var_3_string; // 0x1e9 PushT
	if(var_782_string == 0) goto Label_492; // 0x1ea JumpB
	goto Label_497; // 0x1eb Jump
	
Label_497:
	goto Label_512; // 0x1f1 Jump
	
Label_512:
	return 0; // 0x200 Return
	
Label_492:
	var_783_string = ""; // 0x1ec PushV
	var_783_string = var_2_object; // 0x1ed MovT
	func_6442(var_783_string); // 0x1ee NEW_2
	goto Label_487; // 0x1f0 Jump
	
Label_498:
	var_784_string = "all"; // 0x1f2 PushS
	var_785_string = "idle"; // 0x1f3 PushS
	PlayAnimation(var_784_string, var_785_string); // 0x1f4 Func
	
Label_502:
	WaitForAnimEnd(); // 0x1f6 Func
	var_786_string = var_3_string; // 0x1f8 PushT
	if(var_786_string == 0) goto Label_507; // 0x1f9 JumpB
	goto Label_512; // 0x1fa Jump
	
Label_507:
	var_787_string = "all"; // 0x1fb PushS
	var_788_string = "idle"; // 0x1fc PushS
	PlayAnimation(var_787_string, var_788_string); // 0x1fd Func
	goto Label_502; // 0x1ff Jump
	
Label_451:
	var_789_object = Obj(); var_790_object = Obj(); // 0x1c3 PushV
	var_789_object = var_1_object; // 0x1c4 MovT
	var_790_object = var_0_object; // 0x1c5 MovT
	func_6806(); // 0x1c6 NEW_2
	var_791_string = ""; // 0x1c8 PushV
	var_791_string = "Mysterious"; // 0x1c9 MovS
	func_513(var_739_object, var_791_string); // 0x1ca NEW_2
	var_792_int = 512086; // 0x1cc PushI
	SetMessage(var_792_int); // 0x1cd TObjFunc
	ClearReplies(); // 0x1cf TObjFunc
	var_793_bool = 0; var_794_object = Obj(); // 0x1d1 PushV
	var_794_object = var_1_object; // 0x1d2 MovT
	func_7076(var_794_object); // 0x1d3 NEW_2
	if(var_793_bool == 0) goto Label_475; // 0x1d5 JumpB
	var_799_int = 512087; // 0x1d6 PushI
	var_800_int = 13314; // 0x1d7 PushI
	var_801_int = 13313; // 0x1d8 PushI
	AddReply(var_799_int, var_800_int, var_801_int); // 0x1d9 TObjFunc
	
Label_475:
	var_802_int = 512094; // 0x1db PushI
	var_803_int = -1; // 0x1dc PushI
	var_804_int = 13320; // 0x1dd PushI
	AddReply(var_802_int, var_803_int, var_804_int); // 0x1de TObjFunc
	goto Label_483; // 0x1e0 Jump
}


func_6547(var_392_bool, var_393_string, var_394_string)
{
	var_395_object = Obj(); var_396_object = Obj(); // 0x1993 PushV
	FindActor(var_396_object, var_393_string); // 0x1994 Func
	var_397_bool = var_396_object == 0; // 0x1996 NullEq
	if(var_397_bool == 0) goto Label_6554; // 0x1997 JumpB
	var_392_bool = 0; // 0x1998 MovB
	return 2; // 0x1999 Return
	
Label_6554:
	Trigger(var_396_object, var_394_string); // 0x199a Func
	var_392_bool = 1; // 0x199c MovB
	return 2; // 0x199d Return
}


func_7064(var_752_bool)
{
	var_754_int = 0; var_755_string = ""; // 0x1b99 PushV
	var_755_string = "ood6Maria1"; // 0x1b9a MovS
	func_6511(var_754_int, var_755_string); // 0x1b9b NEW_2
	var_756_int = 0; // 0x1b9d PushI
	var_757_bool = var_754_int == var_756_int; // 0x1b9e Eq
	if(var_757_bool == 0) goto Label_7074; // 0x1b9f JumpB
	var_752_bool = 1; // 0x1ba0 MovB
	return 0; // 0x1ba1 Return
	
Label_7074:
	var_752_bool = 0; // 0x1ba2 MovB
	return 0; // 0x1ba3 Return
}


func_6559(var_85_float)
{
	var_86_float = 0; var_87_float = 0; // 0x199f PushV
	GetGameTime(var_87_float); // 0x19a0 Func
	var_85_float = var_87_float; // 0x19a2 Mov
	return 2; // 0x19a3 Return
}


func_7076(var_793_bool)
{
	var_795_int = 0; var_796_string = ""; // 0x1ba5 PushV
	var_796_string = "ood6Maria2"; // 0x1ba6 MovS
	func_6511(var_795_int, var_796_string); // 0x1ba7 NEW_2
	var_797_int = 0; // 0x1ba9 PushI
	var_798_bool = var_795_int == var_797_int; // 0x1baa Eq
	if(var_798_bool == 0) goto Label_7086; // 0x1bab JumpB
	var_793_bool = 1; // 0x1bac MovB
	return 0; // 0x1bad Return
	
Label_7086:
	var_793_bool = 0; // 0x1bae MovB
	return 0; // 0x1baf Return
}


func_6564(var_204_int)
{
	var_205_float = 0; var_206_float = 0; // 0x19a4 PushV
	GetGameTime(var_206_float); // 0x19a5 Func
	var_207_int = 1; // 0x19a7 PushI
	var_208_int = 0; // 0x19a8 PushV
	var_209_int = 24; // 0x19a9 PushI
	var_208_int = var_206_float / var_206_float; // 0x19aa Div2
	var_204_int = var_207_int + var_208_int; // 0x19ab Add2
	return 2; // 0x19ac Return
}


func_4008(var_2_object, var_840_string)
{
	var_841_bool = 0; // 0xfa9 PushV
	func_6611(var_841_bool); // 0xfaa NEW_2
	var_842_bool = var_841_bool == 0; // 0xfac Not
	if(var_842_bool == 0) goto Label_4015; // 0xfad JumpB
	return 0; // 0xfae Return
	
Label_4015:
	var_843_bool = var_840_string == var_2_object; // 0xfaf Eq
	if(var_843_bool == 0) goto Label_4018; // 0xfb0 JumpB
	return 0; // 0xfb1 Return
	
Label_4018:
	var_844_string = ""; var_845_bool = 0; // 0xfb2 PushV
	var_844_string = var_840_string; // 0xfb3 Mov
	var_846_string = ""; // 0xfb4 PushS
	var_847_bool = var_840_string == var_846_string; // 0xfb5 Eq
	if(var_847_bool == 0) goto Label_4025; // 0xfb6 JumpB
	var_845_bool = 0; // 0xfb7 MovB
	goto Label_4026; // 0xfb8 Jump
	
Label_4026:
	func_6458(var_844_string, var_845_bool); // 0xfba NEW_2
	var_2_object = var_840_string; // 0xfbc TMov
	return 0; // 0xfbd Return
	
Label_4025:
	var_845_bool = 1; // 0xfb9 MovB
}


func_6573(var_313_bool, var_314_int)
{
	var_315_int = 0; // 0x19ae PushV
	func_6564(var_315_int); // 0x19af NEW_2
	var_313_bool = var_315_int == var_314_int; // 0x19b1 Eq2
	return 0; // 0x19b2 Return
}


func_7088(var_907_bool)
{
	var_909_int = 0; var_910_string = ""; // 0x1bb1 PushV
	var_910_string = "ood8Maria1"; // 0x1bb2 MovS
	func_6511(var_909_int, var_910_string); // 0x1bb3 NEW_2
	var_911_int = 0; // 0x1bb5 PushI
	var_912_bool = var_909_int == var_911_int; // 0x1bb6 Eq
	if(var_912_bool == 0) goto Label_7098; // 0x1bb7 JumpB
	var_907_bool = 1; // 0x1bb8 MovB
	return 0; // 0x1bb9 Return
	
Label_7098:
	var_907_bool = 0; // 0x1bba MovB
	return 0; // 0x1bbb Return
}


func_6579(var_81_string, var_82_int)
{
	var_83_string = ""; var_84_string = ""; // 0x19b3 PushV
	var_84_string = "idle"; // 0x19b4 MovS
	var_85_int = var_82_int; // 0x19b5 Push
	if(var_85_int == 0) goto Label_6584; // 0x19b6 JumpB
	var_84_string = var_84_string + var_82_int; // 0x19b7 Add2
	
Label_6584:
	var_81_string = var_84_string; // 0x19b8 Mov
	return 2; // 0x19b9 Return
}


func_6586(var_75_int)
{
	var_76_int = 0; var_77_bool = 0; var_78_int = 0; var_79_bool = 0; // 0x19ba PushV
	var_78_int = 0; // 0x19bb MovI
	
Label_6588:
	var_80_string = "all"; // 0x19bc PushS
	var_81_string = ""; var_82_int = 0; // 0x19bd PushV
	var_82_int = var_78_int; // 0x19be Mov
	func_6579(var_81_string, var_82_int); // 0x19bf NEW_2
	HasAnimation(var_79_bool, var_80_string, var_81_string); // 0x19c1 Func
	var_86_bool = var_79_bool == 0; // 0x19c3 Not
	if(var_86_bool == 0) goto Label_6598; // 0x19c4 JumpB
	goto Label_6601; // 0x19c5 Jump
	
Label_6601:
	var_75_int = var_78_int; // 0x19c9 Mov
	return 4; // 0x19ca Return
	
Label_6598:
	var_87_int = 1; // 0x19c6 PushI
	var_78_int = var_78_int + var_87_int; // 0x19c7 Add2
	goto Label_6588; // 0x19c8 Jump
}


func_7100(var_434_bool)
{
	var_436_int = 0; var_437_string = ""; // 0x1bbd PushV
	var_437_string = "KnowGeorg"; // 0x1bbe MovS
	func_6511(var_436_int, var_437_string); // 0x1bbf NEW_2
	var_438_int = 1; // 0x1bc1 PushI
	var_439_bool = var_436_int == var_438_int; // 0x1bc2 Eq
	if(var_439_bool == 0) goto Label_7110; // 0x1bc3 JumpB
	var_434_bool = 1; // 0x1bc4 MovB
	return 0; // 0x1bc5 Return
	
Label_7110:
	var_434_bool = 0; // 0x1bc6 MovB
	return 0; // 0x1bc7 Return
}


func_7112(var_240_bool)
{
	var_242_int = 0; var_243_string = ""; // 0x1bc9 PushV
	var_243_string = "d2q01"; // 0x1bca MovS
	func_6511(var_242_int, var_243_string); // 0x1bcb NEW_2
	var_244_int = 5; // 0x1bcd PushI
	var_245_bool = var_242_int >= var_244_int; // 0x1bce GE
	if(var_245_bool == 0) goto Label_7122; // 0x1bcf JumpB
	var_240_bool = 1; // 0x1bd0 MovB
	return 0; // 0x1bd1 Return
	
Label_7122:
	var_240_bool = 0; // 0x1bd2 MovB
	return 0; // 0x1bd3 Return
}


func_6603(var_137_int)
{
	var_137_int = 515543; // 0x19cb MovI
	return 0; // 0x19cc Return
}


func_6605(var_136_int)
{
	var_136_int = 502868; // 0x19cd MovI
	return 0; // 0x19ce Return
}


func_6607(var_138_string)
{
	var_138_string = "ui/NPC_Maria.png"; // 0x19cf MovS
	return 0; // 0x19d0 Return
}


func_6609(var_139_string)
{
	var_139_string = "ui/NPC_Maria_b.png"; // 0x19d1 MovS
	return 0; // 0x19d2 Return
}


func_6611(var_131_bool)
{
	var_131_bool = 1; // 0x19d3 MovB
	return 0; // 0x19d4 Return
}


func_7124(var_440_bool)
{
	var_442_int = 0; var_443_string = ""; // 0x1bd5 PushV
	var_443_string = "ood1Maria5"; // 0x1bd6 MovS
	func_6511(var_442_int, var_443_string); // 0x1bd7 NEW_2
	var_444_int = 0; // 0x1bd9 PushI
	var_445_bool = var_442_int == var_444_int; // 0x1bda Eq
	if(var_445_bool == 0) goto Label_7134; // 0x1bdb JumpB
	var_440_bool = 1; // 0x1bdc MovB
	return 0; // 0x1bdd Return
	
Label_7134:
	var_440_bool = 0; // 0x1bde MovB
	return 0; // 0x1bdf Return
}


func_6613()
{
	var_143_string = "ood1Maria1"; // 0x19d6 PushS
	var_144_int = 1; // 0x19d7 PushI
	SetVariable(var_143_string, var_144_int); // 0x19d8 Func
	return 0; // 0x19da Return
}


func_6102()
{
	var_61_int = 0; var_62_int = 0; var_63_bool = 0; var_64_int = 0; var_65_int = 0; var_66_bool = 0; var_67_int = 0; var_68_int = 0; var_69_bool = 0; var_70_int = 0; var_71_int = 0; var_72_bool = 0; // 0x17d6 PushV
	WaitForAnimEnd(); // 0x17d7 Func
	var_73_bool = 0; // 0x17d9 PushV
	func_6212(var_73_bool); // 0x17da NEW_2
	var_74_bool = var_73_bool == 0; // 0x17dc Not
	if(var_74_bool == 0) goto Label_6111; // 0x17dd JumpB
	return 12; // 0x17de Return
	
Label_6111:
	var_75_int = 0; // 0x17df PushV
	func_6586(var_75_int); // 0x17e0 NEW_2
	var_67_int = var_75_int; // 0x17e1 Mov
	var_68_int = 0; // 0x17e3 MovI
	
Label_6116:
	var_88_bool = 0; // 0x17e4 PushV
	var_88_bool = 0; // 0x17e5 MovB
	var_89_int = 5; // 0x17e6 PushI
	var_90_bool = var_68_int < var_89_int; // 0x17e7 LT
	if(var_90_bool == 0) goto Label_6126; // 0x17e8 JumpB
	var_91_bool = 0; // 0x17e9 PushV
	func_6212(var_91_bool); // 0x17ea NEW_2
	if(var_91_bool == 0) goto Label_6126; // 0x17ec JumpB
	var_88_bool = 1; // 0x17ed MovB
	
Label_6126:
	if(var_88_bool == 0) goto Label_6168; // 0x17ee JumpB
	var_92_bool = var_67_int == 0; // 0x17ef Not
	if(var_92_bool == 0) goto Label_6136; // 0x17f0 JumpB
	var_93_int = 3; // 0x17f1 PushI
	Sleep(var_93_int, var_69_bool); // 0x17f2 Func
	var_94_bool = var_69_bool == 0; // 0x17f4 Not
	if(var_94_bool == 0) goto Label_6135; // 0x17f5 JumpB
	goto Label_6168; // 0x17f6 Jump
	
Label_6168:
	ResetAAS(); // 0x1818 Func
	return 12; // 0x181a Return
	
Label_6135:
	goto Label_6157; // 0x17f7 Jump
	
Label_6157:
	var_95_bool = 0; // 0x180d PushV
	func_6171(var_95_bool); // 0x180e NEW_2
	var_96_bool = var_95_bool == 0; // 0x1810 Not
	if(var_96_bool == 0) goto Label_6163; // 0x1811 JumpB
	goto Label_6168; // 0x1812 Jump
	
Label_6163:
	ResetAAS(); // 0x1813 Func
	var_97_int = 1; // 0x1815 PushI
	var_68_int = var_68_int + var_97_int; // 0x1816 Add2
	goto Label_6116; // 0x1817 Jump
	
Label_6136:
	irand(var_70_int, var_67_int); // 0x17f8 Func
	var_98_int = 5; // 0x17fa PushI
	irand(var_71_int, var_98_int); // 0x17fb Func
	var_99_int = 0; // 0x17fd PushI
	var_100_bool = var_71_int != var_99_int; // 0x17fe Neq
	if(var_100_bool == 0) goto Label_6145; // 0x17ff JumpB
	var_70_int = 0; // 0x1800 MovI
	
Label_6145:
	var_101_string = "all"; // 0x1801 PushS
	var_102_string = ""; var_103_int = 0; // 0x1802 PushV
	var_103_int = var_70_int; // 0x1803 Mov
	func_6579(var_102_string, var_103_int); // 0x1804 NEW_2
	PlayAnimation(var_101_string, var_102_string); // 0x1806 Func
	WaitForAnimEnd(var_72_bool); // 0x1808 Func
	var_104_bool = var_72_bool == 0; // 0x180a Not
	if(var_104_bool == 0) goto Label_6157; // 0x180b JumpB
	goto Label_6168; // 0x180c Jump
}


func_6619()
{
	var_117_string = "d1q01RescueListBadReply"; // 0x19dc PushS
	var_118_int = 1; // 0x19dd PushI
	SetVariable(var_117_string, var_118_int); // 0x19de Func
	return 0; // 0x19e0 Return
}


func_7136(var_998_bool)
{
	var_1000_int = 0; var_1001_string = ""; // 0x1be1 PushV
	var_1001_string = "d10q01"; // 0x1be2 MovS
	func_6511(var_1000_int, var_1001_string); // 0x1be3 NEW_2
	var_1002_int = 0; // 0x1be5 PushI
	var_1003_bool = var_1000_int == var_1002_int; // 0x1be6 Eq
	if(var_1003_bool == 0) goto Label_7146; // 0x1be7 JumpB
	var_998_bool = 1; // 0x1be8 MovB
	return 0; // 0x1be9 Return
	
Label_7146:
	var_998_bool = 0; // 0x1bea MovB
	return 0; // 0x1beb Return
}


func_6625()
{
	var_392_bool = 0; var_393_string = ""; var_394_string = ""; // 0x19e2 PushV
	var_393_string = "quest_d1_01"; // 0x19e3 MovS
	var_394_string = "place_masks"; // 0x19e4 MovS
	func_6547(var_392_bool, var_393_string, var_394_string); // 0x19e5 NEW_2
	return 0; // 0x19e7 Return
}


func_6632()
{
	var_388_string = "ood1Maria2"; // 0x19e9 PushS
	var_389_int = 1; // 0x19ea PushI
	SetVariable(var_388_string, var_389_int); // 0x19eb Func
	return 0; // 0x19ed Return
}


func_7148(var_991_bool)
{
	var_993_int = 0; var_994_string = ""; // 0x1bed PushV
	var_994_string = "d10q01"; // 0x1bee MovS
	func_6511(var_993_int, var_994_string); // 0x1bef NEW_2
	var_995_int = 1000; // 0x1bf1 PushI
	var_996_bool = var_993_int == var_995_int; // 0x1bf2 Eq
	if(var_996_bool == 0) goto Label_7158; // 0x1bf3 JumpB
	var_991_bool = 1; // 0x1bf4 MovB
	return 0; // 0x1bf5 Return
	
Label_7158:
	var_991_bool = 0; // 0x1bf6 MovB
	return 0; // 0x1bf7 Return
}


func_6638()
{
	var_137_string = "ood1Maria3"; // 0x19ef PushS
	var_138_int = 1; // 0x19f0 PushI
	SetVariable(var_137_string, var_138_int); // 0x19f1 Func
	return 0; // 0x19f3 Return
}


func_2032(var_0_object, var_459_int, var_460_object)
{
	var_462_object = Obj(); var_463_bool = 0; var_464_int = 0; var_465_bool = 0; var_466_object = Obj(); var_467_bool = 0; var_468_int = 0; var_469_bool = 0; // 0x7f0 PushV
	var_0_object = var_460_object; // 0x7f1 TMov
	var_470_bool = 0; var_471_object = Obj(); var_472_float = 0; // 0x7f2 PushV
	var_471_object = var_460_object; // 0x7f3 Mov
	var_472_float = 70.0; // 0x7f4 MovF
	func_6217(var_471_object, var_472_float); // 0x7f5 NEW_2
	var_473_bool = var_470_bool == 0; // 0x7f7 Not
	if(var_473_bool == 0) goto Label_2043; // 0x7f8 JumpB
	var_459_int = -2; // 0x7f9 MovI
	return 8; // 0x7fa Return
	
Label_2043:
	CreateDialog(var_466_object); // 0x7fb Func
	var_474_int = 0; // 0x7fd PushV
	func_6605(var_474_int); // 0x7fe NEW_2
	SetNPCName(var_474_int); // 0x800 ObjFunc
	var_475_int = 0; // 0x802 PushV
	func_6603(var_475_int); // 0x803 NEW_2
	SetNPCDescription(var_475_int); // 0x805 ObjFunc
	var_476_string = ""; // 0x807 PushV
	func_6607(var_476_string); // 0x808 NEW_2
	SetPhoto(var_476_string); // 0x80a ObjFunc
	var_477_string = ""; // 0x80c PushV
	func_6609(var_477_string); // 0x80d NEW_2
	SetPhoto2(var_477_string); // 0x80f ObjFunc
	var_478_int = 0; // 0x811 PushV
	func_7269(var_478_int); // 0x812 NEW_2
	SetPlayerName(var_478_int); // 0x814 ObjFunc
	var_468_int = -1; // 0x816 MovI
	IsOverrideActive(var_467_bool); // 0x817 Func
	var_479_bool = var_467_bool; // 0x819 Push
	if(var_479_bool == 0) goto Label_2077; // 0x81a JumpB
	var_459_int = -2; // 0x81b MovI
	return 8; // 0x81c Return
	
Label_2077:
	DoDialog(var_466_object); // 0x81d Func
	var_480_bool = 0; var_481_object = Obj(); // 0x81f PushV
	var_482_object = Obj(); // 0x820 PushV
	func_6495(var_482_object); // 0x821 NEW_2
	var_481_object = var_482_object; // 0x822 Mov
	func_6304(var_480_bool, var_481_object); // 0x824 NEW_2
	var_483_object = Obj(); var_484_object = Obj(); // 0x826 PushV
	var_483_object = var_460_object; // 0x827 Mov
	var_484_object = var_466_object; // 0x828 Mov
	TaskCall(7); // 0x829 TaskCall
	func_2113(var_485_object, var_486_object, var_487_string, var_488_bool, var_483_object, var_484_object); // 0x82a NEW_2
	TaskReturn(); // 0x82b TaskReturn
	IsDialogEnd(var_469_bool); // 0x82d ObjFunc
	
Label_2095:
	var_542_bool = var_469_bool == 0; // 0x82f Not
	if(var_542_bool == 0) goto Label_2102; // 0x830 JumpB
	sync(); // 0x831 Func
	IsDialogEnd(var_469_bool); // 0x833 ObjFunc
	goto Label_2095; // 0x835 Jump
	
Label_2102:
	var_543_object = Obj(); // 0x836 PushV
	var_543_object = var_460_object; // 0x837 Mov
	func_6286(); // 0x838 NEW_2
	StopDialog(var_466_object); // 0x83a Func
	GetReturnValue(var_468_int); // 0x83c ObjFunc
	var_459_int = var_468_int; // 0x83e Mov
	return 8; // 0x83f Return
}


func_6644(var_143_object)
{
	var_145_string = "money2000 is given"; // 0x19f5 PushS
	Trace(var_145_string); // 0x19f6 Func
	var_146_object = Obj(); var_147_int = 0; // 0x19f8 PushV
	var_146_object = var_143_object; // 0x19f9 Mov
	var_147_int = 2000; // 0x19fa MovI
	func_6528(var_146_object, var_147_int); // 0x19fb NEW_2
	return 0; // 0x19fd Return
}


func_7160(var_985_bool)
{
	var_987_int = 0; var_988_string = ""; // 0x1bf9 PushV
	var_988_string = "ood10Maria1"; // 0x1bfa MovS
	func_6511(var_987_int, var_988_string); // 0x1bfb NEW_2
	var_989_int = 0; // 0x1bfd PushI
	var_990_bool = var_987_int == var_989_int; // 0x1bfe Eq
	if(var_990_bool == 0) goto Label_7170; // 0x1bff JumpB
	var_985_bool = 1; // 0x1c00 MovB
	return 0; // 0x1c01 Return
	
Label_7170:
	var_985_bool = 0; // 0x1c02 MovB
	return 0; // 0x1c03 Return
}


func_6654()
{
	var_141_string = "playsound"; // 0x19ff PushS
	var_142_string = "givemoney"; // 0x1a00 PushS
	TriggerWorld(var_141_string, var_142_string); // 0x1a01 Func
	return 0; // 0x1a03 Return
}


