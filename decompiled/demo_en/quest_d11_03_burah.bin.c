task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_cvector, var_8_bool)
{
	var_9_int = 1; // 0xbb PushI
	if(var_9_int == 0) goto Label_540; // 0xbc JumpB
	func_1143(); // 0xbe NEW_2
	var_11_int = 15565; // 0xc0 PushI
	var_12_bool = var_8_bool == var_11_int; // 0xc1 Eq
	if(var_12_bool == 0) goto Label_205; // 0xc2 JumpB
	var_13_object = Obj(); var_14_object = Obj(); // 0xc3 PushV
	var_13_object = var_1_object; // 0xc4 MovT
	var_14_object = var_0_object; // 0xc5 MovT
	func_1204(); // 0xc6 NEW_2
	var_25_object = Obj(); var_26_object = Obj(); // 0xc8 PushV
	var_25_object = var_1_object; // 0xc9 MovT
	var_26_object = var_0_object; // 0xca MovT
	func_1221(); // 0xcb NEW_2
	
Label_205:
	var_57_int = 41689; // 0xcd PushI
	var_58_bool = var_8_bool == var_57_int; // 0xce Eq
	if(var_58_bool == 0) goto Label_218; // 0xcf JumpB
	var_59_object = Obj(); var_60_object = Obj(); // 0xd0 PushV
	var_59_object = var_1_object; // 0xd1 MovT
	var_60_object = var_0_object; // 0xd2 MovT
	func_1204(); // 0xd3 NEW_2
	var_61_object = Obj(); var_62_object = Obj(); // 0xd5 PushV
	var_61_object = var_1_object; // 0xd6 MovT
	var_62_object = var_0_object; // 0xd7 MovT
	func_1221(); // 0xd8 NEW_2
	
Label_218:
	var_63_int = 15548; // 0xda PushI
	var_64_bool = var_7_cvector == var_63_int; // 0xdb Eq
	if(var_64_bool == 0) goto Label_266; // 0xdc JumpB
	var_65_bool = 0; var_66_object = Obj(); // 0xdd PushV
	var_66_object = var_1_object; // 0xde MovT
	func_1243(var_66_object); // 0xdf NEW_2
	if(var_65_bool == 0) goto Label_246; // 0xe1 JumpB
	var_71_object = Obj(); var_72_object = Obj(); // 0xe2 PushV
	var_71_object = var_1_object; // 0xe3 MovT
	var_72_object = var_0_object; // 0xe4 MovT
	func_1237(); // 0xe5 NEW_2
	var_75_string = ""; // 0xe7 PushV
	var_75_string = "Neutral"; // 0xe8 MovS
	func_164(var_8_bool, var_75_string); // 0xe9 NEW_2
	var_92_int = 514326; // 0xeb PushI
	SetMessage(var_92_int); // 0xec TObjFunc
	ClearReplies(); // 0xee TObjFunc
	var_93_int = 514327; // 0xf0 PushI
	var_94_int = 15550; // 0xf1 PushI
	var_95_int = 15549; // 0xf2 PushI
	AddReply(var_93_int, var_94_int, var_95_int); // 0xf3 TObjFunc
	return 0; // 0xf5 Return
	
Label_246:
	var_96_string = ""; // 0xf6 PushV
	var_96_string = "Neutral"; // 0xf7 MovS
	func_164(var_8_bool, var_96_string); // 0xf8 NEW_2
	var_97_int = 514532; // 0xfa PushI
	SetMessage(var_97_int); // 0xfb TObjFunc
	ClearReplies(); // 0xfd TObjFunc
	var_98_int = 514533; // 0xff PushI
	var_99_int = -1; // 0x100 PushI
	var_100_int = 15764; // 0x101 PushI
	AddReply(var_98_int, var_99_int, var_100_int); // 0x102 TObjFunc
	var_101_int = 539713; // 0x104 PushI
	var_102_int = -1; // 0x105 PushI
	var_103_int = 41672; // 0x106 PushI
	AddReply(var_101_int, var_102_int, var_103_int); // 0x107 TObjFunc
	return 0; // 0x109 Return
	
Label_266:
	var_104_int = 15550; // 0x10a PushI
	var_105_bool = var_7_cvector == var_104_int; // 0x10b Eq
	if(var_105_bool == 0) goto Label_289; // 0x10c JumpB
	var_106_string = ""; // 0x10d PushV
	var_106_string = "Sorrow"; // 0x10e MovS
	func_164(var_8_bool, var_106_string); // 0x10f NEW_2
	var_107_int = 514328; // 0x111 PushI
	SetMessage(var_107_int); // 0x112 TObjFunc
	ClearReplies(); // 0x114 TObjFunc
	var_108_int = 514329; // 0x116 PushI
	var_109_int = 15552; // 0x117 PushI
	var_110_int = 15551; // 0x118 PushI
	AddReply(var_108_int, var_109_int, var_110_int); // 0x119 TObjFunc
	var_111_int = 539714; // 0x11b PushI
	var_112_int = 41674; // 0x11c PushI
	var_113_int = 41673; // 0x11d PushI
	AddReply(var_111_int, var_112_int, var_113_int); // 0x11e TObjFunc
	return 0; // 0x120 Return
	
Label_289:
	var_114_int = 41674; // 0x121 PushI
	var_115_bool = var_7_cvector == var_114_int; // 0x122 Eq
	if(var_115_bool == 0) goto Label_307; // 0x123 JumpB
	var_116_string = ""; // 0x124 PushV
	var_116_string = "Neutral"; // 0x125 MovS
	func_164(var_8_bool, var_116_string); // 0x126 NEW_2
	var_117_int = 539715; // 0x128 PushI
	SetMessage(var_117_int); // 0x129 TObjFunc
	ClearReplies(); // 0x12b TObjFunc
	var_118_int = 539716; // 0x12d PushI
	var_119_int = 15552; // 0x12e PushI
	var_120_int = 41675; // 0x12f PushI
	AddReply(var_118_int, var_119_int, var_120_int); // 0x130 TObjFunc
	return 0; // 0x132 Return
	
Label_307:
	var_121_int = 15552; // 0x133 PushI
	var_122_bool = var_7_cvector == var_121_int; // 0x134 Eq
	if(var_122_bool == 0) goto Label_330; // 0x135 JumpB
	var_123_string = ""; // 0x136 PushV
	var_123_string = "Sorrow"; // 0x137 MovS
	func_164(var_8_bool, var_123_string); // 0x138 NEW_2
	var_124_int = 514330; // 0x13a PushI
	SetMessage(var_124_int); // 0x13b TObjFunc
	ClearReplies(); // 0x13d TObjFunc
	var_125_int = 514331; // 0x13f PushI
	var_126_int = 15554; // 0x140 PushI
	var_127_int = 15553; // 0x141 PushI
	AddReply(var_125_int, var_126_int, var_127_int); // 0x142 TObjFunc
	var_128_int = 514344; // 0x144 PushI
	var_129_int = 15567; // 0x145 PushI
	var_130_int = 15566; // 0x146 PushI
	AddReply(var_128_int, var_129_int, var_130_int); // 0x147 TObjFunc
	return 0; // 0x149 Return
	
Label_330:
	var_131_int = 15567; // 0x14a PushI
	var_132_bool = var_7_cvector == var_131_int; // 0x14b Eq
	if(var_132_bool == 0) goto Label_348; // 0x14c JumpB
	var_133_string = ""; // 0x14d PushV
	var_133_string = "Sorrow"; // 0x14e MovS
	func_164(var_8_bool, var_133_string); // 0x14f NEW_2
	var_134_int = 514345; // 0x151 PushI
	SetMessage(var_134_int); // 0x152 TObjFunc
	ClearReplies(); // 0x154 TObjFunc
	var_135_int = 514346; // 0x156 PushI
	var_136_int = 15569; // 0x157 PushI
	var_137_int = 15568; // 0x158 PushI
	AddReply(var_135_int, var_136_int, var_137_int); // 0x159 TObjFunc
	return 0; // 0x15b Return
	
Label_348:
	var_138_int = 15569; // 0x15c PushI
	var_139_bool = var_7_cvector == var_138_int; // 0x15d Eq
	if(var_139_bool == 0) goto Label_366; // 0x15e JumpB
	var_140_string = ""; // 0x15f PushV
	var_140_string = "Sorrow"; // 0x160 MovS
	func_164(var_8_bool, var_140_string); // 0x161 NEW_2
	var_141_int = 514347; // 0x163 PushI
	SetMessage(var_141_int); // 0x164 TObjFunc
	ClearReplies(); // 0x166 TObjFunc
	var_142_int = 514348; // 0x168 PushI
	var_143_int = 15554; // 0x169 PushI
	var_144_int = 15570; // 0x16a PushI
	AddReply(var_142_int, var_143_int, var_144_int); // 0x16b TObjFunc
	return 0; // 0x16d Return
	
Label_366:
	var_145_int = 15554; // 0x16e PushI
	var_146_bool = var_7_cvector == var_145_int; // 0x16f Eq
	if(var_146_bool == 0) goto Label_384; // 0x170 JumpB
	var_147_string = ""; // 0x171 PushV
	var_147_string = "Sorrow"; // 0x172 MovS
	func_164(var_8_bool, var_147_string); // 0x173 NEW_2
	var_148_int = 514332; // 0x175 PushI
	SetMessage(var_148_int); // 0x176 TObjFunc
	ClearReplies(); // 0x178 TObjFunc
	var_149_int = 514333; // 0x17a PushI
	var_150_int = 15556; // 0x17b PushI
	var_151_int = 15555; // 0x17c PushI
	AddReply(var_149_int, var_150_int, var_151_int); // 0x17d TObjFunc
	return 0; // 0x17f Return
	
Label_384:
	var_152_int = 41678; // 0x180 PushI
	var_153_bool = var_7_cvector == var_152_int; // 0x181 Eq
	if(var_153_bool == 0) goto Label_387; // 0x182 JumpB
	
Label_387:
	var_154_int = 41680; // 0x183 PushI
	var_155_bool = var_7_cvector == var_154_int; // 0x184 Eq
	if(var_155_bool == 0) goto Label_405; // 0x185 JumpB
	var_156_string = ""; // 0x186 PushV
	var_156_string = "Neutral"; // 0x187 MovS
	func_164(var_8_bool, var_156_string); // 0x188 NEW_2
	var_157_int = 539720; // 0x18a PushI
	SetMessage(var_157_int); // 0x18b TObjFunc
	ClearReplies(); // 0x18d TObjFunc
	var_158_int = 539721; // 0x18f PushI
	var_159_int = 15560; // 0x190 PushI
	var_160_int = 41681; // 0x191 PushI
	AddReply(var_158_int, var_159_int, var_160_int); // 0x192 TObjFunc
	return 0; // 0x194 Return
	
Label_405:
	var_161_int = 15556; // 0x195 PushI
	var_162_bool = var_7_cvector == var_161_int; // 0x196 Eq
	if(var_162_bool == 0) goto Label_423; // 0x197 JumpB
	var_163_string = ""; // 0x198 PushV
	var_163_string = "Smile"; // 0x199 MovS
	func_164(var_8_bool, var_163_string); // 0x19a NEW_2
	var_164_int = 514334; // 0x19c PushI
	SetMessage(var_164_int); // 0x19d TObjFunc
	ClearReplies(); // 0x19f TObjFunc
	var_165_int = 514335; // 0x1a1 PushI
	var_166_int = 15558; // 0x1a2 PushI
	var_167_int = 15557; // 0x1a3 PushI
	AddReply(var_165_int, var_166_int, var_167_int); // 0x1a4 TObjFunc
	return 0; // 0x1a6 Return
	
Label_423:
	var_168_int = 15558; // 0x1a7 PushI
	var_169_bool = var_7_cvector == var_168_int; // 0x1a8 Eq
	if(var_169_bool == 0) goto Label_441; // 0x1a9 JumpB
	var_170_string = ""; // 0x1aa PushV
	var_170_string = "Neutral"; // 0x1ab MovS
	func_164(var_8_bool, var_170_string); // 0x1ac NEW_2
	var_171_int = 514336; // 0x1ae PushI
	SetMessage(var_171_int); // 0x1af TObjFunc
	ClearReplies(); // 0x1b1 TObjFunc
	var_172_int = 514337; // 0x1b3 PushI
	var_173_int = 15560; // 0x1b4 PushI
	var_174_int = 15559; // 0x1b5 PushI
	AddReply(var_172_int, var_173_int, var_174_int); // 0x1b6 TObjFunc
	return 0; // 0x1b8 Return
	
Label_441:
	var_175_int = 15560; // 0x1b9 PushI
	var_176_bool = var_7_cvector == var_175_int; // 0x1ba Eq
	if(var_176_bool == 0) goto Label_464; // 0x1bb JumpB
	var_177_string = ""; // 0x1bc PushV
	var_177_string = "Doubt"; // 0x1bd MovS
	func_164(var_8_bool, var_177_string); // 0x1be NEW_2
	var_178_int = 514338; // 0x1c0 PushI
	SetMessage(var_178_int); // 0x1c1 TObjFunc
	ClearReplies(); // 0x1c3 TObjFunc
	var_179_int = 514339; // 0x1c5 PushI
	var_180_int = 15562; // 0x1c6 PushI
	var_181_int = 15561; // 0x1c7 PushI
	AddReply(var_179_int, var_180_int, var_181_int); // 0x1c8 TObjFunc
	var_182_int = 539722; // 0x1ca PushI
	var_183_int = 41684; // 0x1cb PushI
	var_184_int = 41683; // 0x1cc PushI
	AddReply(var_182_int, var_183_int, var_184_int); // 0x1cd TObjFunc
	return 0; // 0x1cf Return
	
Label_464:
	var_185_int = 41684; // 0x1d0 PushI
	var_186_bool = var_7_cvector == var_185_int; // 0x1d1 Eq
	if(var_186_bool == 0) goto Label_482; // 0x1d2 JumpB
	var_187_string = ""; // 0x1d3 PushV
	var_187_string = "Neutral"; // 0x1d4 MovS
	func_164(var_8_bool, var_187_string); // 0x1d5 NEW_2
	var_188_int = 539723; // 0x1d7 PushI
	SetMessage(var_188_int); // 0x1d8 TObjFunc
	ClearReplies(); // 0x1da TObjFunc
	var_189_int = 539724; // 0x1dc PushI
	var_190_int = 15562; // 0x1dd PushI
	var_191_int = 41685; // 0x1de PushI
	AddReply(var_189_int, var_190_int, var_191_int); // 0x1df TObjFunc
	return 0; // 0x1e1 Return
	
Label_482:
	var_192_int = 15562; // 0x1e2 PushI
	var_193_bool = var_7_cvector == var_192_int; // 0x1e3 Eq
	if(var_193_bool == 0) goto Label_505; // 0x1e4 JumpB
	var_194_string = ""; // 0x1e5 PushV
	var_194_string = "Agression"; // 0x1e6 MovS
	func_164(var_8_bool, var_194_string); // 0x1e7 NEW_2
	var_195_int = 514340; // 0x1e9 PushI
	SetMessage(var_195_int); // 0x1ea TObjFunc
	ClearReplies(); // 0x1ec TObjFunc
	var_196_int = 514341; // 0x1ee PushI
	var_197_int = 15564; // 0x1ef PushI
	var_198_int = 15563; // 0x1f0 PushI
	AddReply(var_196_int, var_197_int, var_198_int); // 0x1f1 TObjFunc
	var_199_int = 539725; // 0x1f3 PushI
	var_200_int = 15564; // 0x1f4 PushI
	var_201_int = 41687; // 0x1f5 PushI
	AddReply(var_199_int, var_200_int, var_201_int); // 0x1f6 TObjFunc
	return 0; // 0x1f8 Return
	
Label_505:
	var_202_int = 15564; // 0x1f9 PushI
	var_203_bool = var_7_cvector == var_202_int; // 0x1fa Eq
	if(var_203_bool == 0) goto Label_528; // 0x1fb JumpB
	var_204_string = ""; // 0x1fc PushV
	var_204_string = "Neutral"; // 0x1fd MovS
	func_164(var_8_bool, var_204_string); // 0x1fe NEW_2
	var_205_int = 514342; // 0x200 PushI
	SetMessage(var_205_int); // 0x201 TObjFunc
	ClearReplies(); // 0x203 TObjFunc
	var_206_int = 514343; // 0x205 PushI
	var_207_int = -1; // 0x206 PushI
	var_208_int = 15565; // 0x207 PushI
	AddReply(var_206_int, var_207_int, var_208_int); // 0x208 TObjFunc
	var_209_int = 539726; // 0x20a PushI
	var_210_int = -1; // 0x20b PushI
	var_211_int = 41689; // 0x20c PushI
	AddReply(var_209_int, var_210_int, var_211_int); // 0x20d TObjFunc
	return 0; // 0x20f Return
	
Label_528:
	var_3_string = 1; // 0x210 TMovB
	var_212_bool = 0; // 0x211 PushV
	func_1330(var_212_bool); // 0x212 NEW_2
	if(var_212_bool == 0) goto Label_536; // 0x214 JumpB
	lshStopAnimation(); // 0x215 Func
	goto Label_538; // 0x217 Jump
	
Label_538:
	return 0; // 0x21a Return
	
Label_536:
	StopAnimation(); // 0x218 Func
	
Label_540:
	return 0; // 0x21c Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_string)
{
	var_8_bool = 0; var_9_bool = 0; // 0x229 PushV
	var_10_string = "cleanup"; // 0x22a PushS
	var_11_bool = var_7_string == var_10_string; // 0x22b Eq
	if(var_11_bool == 0) goto Label_568; // 0x22c JumpB
	var_1_object = 1; // 0x22d TMovB
	IsLoaded(var_9_bool); // 0x22e Func
	var_12_bool = var_9_bool == 0; // 0x230 Not
	if(var_12_bool == 0) goto Label_567; // 0x231 JumpB
	var_13_object = Obj(); // 0x232 PushV
	func_1150(var_13_object); // 0x233 NEW_2
	RemoveActor(var_13_object); // 0x235 Func
	
Label_567:
	goto Label_572; // 0x237 Jump
	
Label_572:
	return 2; // 0x23c Return
	
Label_568:
	var_16_string = "restore"; // 0x238 PushS
	var_17_bool = var_7_string == var_16_string; // 0x239 Eq
	if(var_17_bool == 0) goto Label_572; // 0x23a JumpB
	var_1_object = 0; // 0x23b TMovB
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	var_7_object = var_1_object; // 0x23d PushT
	if(var_7_object == 0) goto Label_582; // 0x23e JumpB
	var_8_object = Obj(); // 0x23f PushV
	func_1150(var_8_object); // 0x240 NEW_2
	RemoveActor(var_8_object); // 0x242 Func
	Hold(); // 0x244 Func
	
Label_582:
	func_697(); // 0x247 NEW_2
	return 0; // 0x249 Return
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_712(); // 0x24b NEW_2
	return 0; // 0x24d Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_int)
{
	var_8_int = 10; // 0x294 PushI
	var_9_bool = var_7_int == var_8_int; // 0x295 Eq
	if(var_9_bool == 0) goto Label_696; // 0x296 JumpB
	func_655(); // 0x298 NEW_2
	var_11_bool = 0; // 0x29a PushV
	var_11_bool = 0; // 0x29b MovB
	var_12_bool = 0; // 0x29c PushV
	func_869(var_12_bool); // 0x29d NEW_2
	if(var_12_bool == 0) goto Label_677; // 0x29f JumpB
	var_15_bool = 0; // 0x2a0 PushV
	func_624(var_15_bool); // 0x2a1 NEW_2
	if(var_15_bool == 0) goto Label_677; // 0x2a3 JumpB
	var_11_bool = 1; // 0x2a4 MovB
	
Label_677:
	if(var_11_bool == 0) goto Label_690; // 0x2a5 JumpB
	var_32_bool = 0; // 0x2a6 PushV
	func_604(var_32_bool); // 0x2a7 NEW_2
	if(var_32_bool == 0) goto Label_689; // 0x2a9 JumpB
	var_51_bool = 0; var_52_object = Obj(); // 0x2aa PushV
	var_53_object = Obj(); // 0x2ab PushV
	func_1150(var_53_object); // 0x2ac NEW_2
	var_52_object = var_53_object; // 0x2ad Mov
	func_1017(var_52_object); // 0x2af NEW_2
	
Label_689:
	goto Label_696; // 0x2b1 Jump
	
Label_696:
	return 0; // 0x2b8 Return
	
Label_690:
	func_619(var_7_int); // 0x2b3 NEW_2
	func_646(); // 0x2b6 NEW_2
}


task_2_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_bool)
{
	var_8_bool = var_7_bool; // 0x2d6 Push
	if(var_8_bool == 0) goto Label_732; // 0x2d7 JumpB
	func_646(); // 0x2d9 NEW_2
	goto Label_736; // 0x2db Jump
	
Label_736:
	return 0; // 0x2e0 Return
	
Label_732:
	var_14_string = ""; // 0x2dc PushV
	var_14_string = "Neutral"; // 0x2dd MovS
	func_1097(var_14_string); // 0x2de NEW_2
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_object)
{
	var_8_bool = 0; var_9_bool = 0; // 0x2e1 PushV
	IsOverrideActive(var_9_bool); // 0x2e2 Func
	var_10_bool = var_9_bool == 0; // 0x2e4 Not
	if(var_10_bool == 0) goto Label_765; // 0x2e5 JumpB
	EventDisable(0); // 0x2e6 EventDisable
	func_837(); // 0x2e8 NEW_2
	var_11_bool = 0; var_12_object = Obj(); // 0x2ea PushV
	var_12_object = var_7_object; // 0x2eb Mov
	func_860(var_12_object); // 0x2ec NEW_2
	EventEnable(0); // 0x2ee EventEnable
	var_25_object = Obj(); // 0x2ef PushV
	var_25_object = var_7_object; // 0x2f0 Mov
	func_541(var_25_object); // 0x2f1 NEW_2
	var_266_string = ""; // 0x2f3 PushV
	var_266_string = "Neutral"; // 0x2f4 MovS
	func_1097(var_266_string); // 0x2f5 NEW_2
	func_655(); // 0x2f8 NEW_2
	func_646(); // 0x2fb NEW_2
	
Label_765:
	return 2; // 0x2fd Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_590(var_6_bool); // 0x226 NEW_2
	return 0; // 0x228 Return
}


func_0(var_0_object, var_26_int, var_27_object)
{
	var_29_object = Obj(); var_30_bool = 0; var_31_int = 0; var_32_bool = 0; var_33_object = Obj(); var_34_bool = 0; var_35_int = 0; var_36_bool = 0; // 0x0 PushV
	var_0_object = var_27_object; // 0x1 TMov
	var_37_bool = 0; var_38_object = Obj(); var_39_float = 0; // 0x2 PushV
	var_38_object = var_27_object; // 0x3 Mov
	var_39_float = 70.0; // 0x4 MovF
	func_874(var_38_object, var_39_float); // 0x5 NEW_2
	var_83_bool = var_37_bool == 0; // 0x7 Not
	if(var_83_bool == 0) goto Label_11; // 0x8 JumpB
	var_26_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_33_object); // 0xb Func
	var_84_int = 0; // 0xd PushV
	func_1324(var_84_int); // 0xe NEW_2
	SetNPCName(var_84_int); // 0x10 ObjFunc
	var_85_int = 0; // 0x12 PushV
	func_1322(var_85_int); // 0x13 NEW_2
	SetNPCDescription(var_85_int); // 0x15 ObjFunc
	var_86_string = ""; // 0x17 PushV
	func_1326(var_86_string); // 0x18 NEW_2
	SetPhoto(var_86_string); // 0x1a ObjFunc
	var_87_string = ""; // 0x1c PushV
	func_1328(var_87_string); // 0x1d NEW_2
	SetPhoto2(var_87_string); // 0x1f ObjFunc
	var_88_int = 0; // 0x21 PushV
	func_1305(var_88_int); // 0x22 NEW_2
	SetPlayerName(var_88_int); // 0x24 ObjFunc
	var_35_int = -1; // 0x26 MovI
	IsOverrideActive(var_34_bool); // 0x27 Func
	var_96_bool = var_34_bool; // 0x29 Push
	if(var_96_bool == 0) goto Label_45; // 0x2a JumpB
	var_26_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_33_object); // 0x2d Func
	var_97_bool = 0; var_98_object = Obj(); // 0x2f PushV
	var_99_object = Obj(); // 0x30 PushV
	func_1150(var_99_object); // 0x31 NEW_2
	var_98_object = var_99_object; // 0x32 Mov
	func_959(var_97_bool, var_98_object); // 0x34 NEW_2
	var_192_object = Obj(); var_193_object = Obj(); // 0x36 PushV
	var_192_object = var_27_object; // 0x37 Mov
	var_193_object = var_33_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_194_object, var_195_object, var_196_string, var_197_bool, var_192_object, var_193_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_36_bool); // 0x3d ObjFunc
	
Label_63:
	var_258_bool = var_36_bool == 0; // 0x3f Not
	if(var_258_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_36_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_259_object = Obj(); // 0x46 PushV
	var_259_object = var_27_object; // 0x47 Mov
	func_942(); // 0x48 NEW_2
	StopDialog(var_33_object); // 0x4a Func
	GetReturnValue(var_35_int); // 0x4c ObjFunc
	var_26_int = var_35_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_1156(var_64_cvector, var_65_cvector)
{
	var_67_float = 0; var_68_float = 0; // 0x484 PushV
	var_69_int = var_65_cvector | var_65_cvector; // 0x485 Or
	var_68_float = sqrt(var_69_int); // 0x486 Sqrt2
	var_70_float = 0.0; // 0x487 PushF
	var_71_bool = var_68_float < var_70_float; // 0x488 LT
	if(var_71_bool == 0) goto Label_1164; // 0x489 JumpB
	var_64_cvector = CVector(0.0, 0.0, 0.0); // 0x48a MovV
	return 2; // 0x48b Return
	
Label_1164:
	var_64_cvector = var_65_cvector / var_65_cvector; // 0x48c Div2
	return 2; // 0x48d Return
}


func_646()
{
	var_268_float = 0; var_269_float = 0; // 0x286 PushV
	var_270_int = 8; // 0x287 PushI
	var_271_int = 16; // 0x288 PushI
	rand(var_269_float, var_270_int, var_271_int); // 0x289 Func
	var_272_int = 10; // 0x28b PushI
	SetTimer(var_272_int, var_269_float); // 0x28c Func
	return 2; // 0x28e Return
}


func_1166(var_201_int, var_202_string)
{
	var_203_int = 0; var_204_int = 0; // 0x48e PushV
	GetVariable(var_202_string, var_204_int); // 0x48f Func
	var_201_int = var_204_int; // 0x491 Mov
	return 2; // 0x492 Return
}


func_655()
{
	var_267_int = 10; // 0x28f PushI
	KillTimer(var_267_int); // 0x290 Func
	return 0; // 0x292 Return
}


func_1171(var_152_int)
{
	var_153_float = 0; var_154_float = 0; // 0x493 PushV
	GetGameTime(var_154_float); // 0x494 Func
	var_155_int = 1; // 0x496 PushI
	var_156_int = 0; // 0x497 PushV
	var_157_int = 24; // 0x498 PushI
	var_156_int = var_154_float / var_154_float; // 0x499 Div2
	var_152_int = var_155_int + var_156_int; // 0x49a Add2
	return 2; // 0x49b Return
}


func_1305(var_88_int)
{
	var_89_int = 0; var_90_int = 0; // 0x519 PushV
	var_91_string = "branch"; // 0x51a PushS
	GetVariable(var_91_string, var_90_int); // 0x51b Func
	var_92_int = 0; // 0x51d PushI
	var_93_bool = var_90_int == var_92_int; // 0x51e Eq
	if(var_93_bool == 0) goto Label_1315; // 0x51f JumpB
	var_88_int = 1; // 0x520 MovI
	return 2; // 0x521 Return
	
Label_1315:
	var_94_int = 1; // 0x523 PushI
	var_95_bool = var_90_int == var_94_int; // 0x524 Eq
	if(var_95_bool == 0) goto Label_1320; // 0x525 JumpB
	var_88_int = 2; // 0x526 MovI
	return 2; // 0x527 Return
	
Label_1320:
	var_88_int = 3; // 0x528 MovI
	return 2; // 0x529 Return
}


func_1150(var_99_object)
{
	var_100_object = Obj(); var_101_object = Obj(); // 0x47e PushV
	self(var_101_object); // 0x47f Func
	var_99_object = var_101_object; // 0x481 Mov
	return 2; // 0x482 Return
}


func_1180(var_31_string, var_32_int)
{
	var_33_string = ""; var_34_string = ""; // 0x49c PushV
	var_34_string = "idle"; // 0x49d MovS
	var_35_int = var_32_int; // 0x49e Push
	if(var_35_int == 0) goto Label_1185; // 0x49f JumpB
	var_34_string = var_34_string + var_32_int; // 0x4a0 Add2
	
Label_1185:
	var_31_string = var_34_string; // 0x4a1 Mov
	return 2; // 0x4a2 Return
}


func_541(var_25_object)
{
	var_26_int = 0; var_27_object = Obj(); // 0x21e PushV
	var_27_object = var_25_object; // 0x21f Mov
	TaskCall(0); // 0x220 TaskCall
	func_0(var_28_object, var_26_int, var_27_object); // 0x221 NEW_2
	TaskReturn(); // 0x222 TaskReturn
	return 0; // 0x224 Return
}


func_1054(var_139_bool)
{
	var_141_string = ""; var_142_int = 0; var_143_bool = 0; var_144_int = 0; var_145_string = ""; var_146_string = ""; var_147_int = 0; var_148_bool = 0; var_149_int = 0; var_150_string = ""; // 0x41e PushV
	var_151_string = "d"; // 0x41f PushS
	var_152_int = 0; // 0x420 PushV
	func_1171(var_152_int); // 0x421 NEW_2
	var_158_int = var_151_string + var_152_int; // 0x423 Add
	var_159_string = "m"; // 0x424 PushS
	var_146_string = var_158_int + var_159_string; // 0x425 Add2
	var_147_int = 0; // 0x426 MovI
	
Label_1063:
	var_160_int = 1; // 0x427 PushI
	if(var_160_int == 0) goto Label_1076; // 0x428 JumpB
	var_161_int = 1; // 0x429 PushI
	var_162_int = var_147_int + var_161_int; // 0x42a Add
	var_163_int = var_146_string + var_162_int; // 0x42b Add
	HasProperty(var_163_int, var_148_bool); // 0x42c ObjFunc
	var_164_bool = var_148_bool == 0; // 0x42e Not
	if(var_164_bool == 0) goto Label_1073; // 0x42f JumpB
	goto Label_1076; // 0x430 Jump
	
Label_1076:
	var_165_bool = var_147_int == 0; // 0x434 Not
	if(var_165_bool == 0) goto Label_1080; // 0x435 JumpB
	var_139_bool = 0; // 0x436 MovB
	return 10; // 0x437 Return
	
Label_1080:
	var_149_int = 0; // 0x438 MovI
	var_166_int = 1; // 0x439 PushI
	var_167_bool = var_147_int > var_166_int; // 0x43a GT
	if(var_167_bool == 0) goto Label_1086; // 0x43b JumpB
	irand(var_149_int, var_147_int); // 0x43c Func
	
Label_1086:
	var_168_int = 1; // 0x43e PushI
	var_169_int = var_149_int + var_168_int; // 0x43f Add
	var_170_int = var_146_string + var_169_int; // 0x440 Add
	GetProperty(var_170_int, var_150_string); // 0x441 ObjFunc
	var_171_bool = 0; var_172_string = ""; // 0x443 PushV
	var_172_string = var_150_string; // 0x444 Mov
	func_1128(var_171_bool, var_172_string); // 0x445 NEW_2
	var_139_bool = var_171_bool; // 0x446 Mov
	return 10; // 0x448 Return
	
Label_1073:
	var_173_int = 1; // 0x431 PushI
	var_147_int = var_147_int + var_173_int; // 0x432 Add2
	goto Label_1063; // 0x433 Jump
}


func_1187(var_25_int)
{
	var_26_int = 0; var_27_bool = 0; var_28_int = 0; var_29_bool = 0; // 0x4a3 PushV
	var_28_int = 0; // 0x4a4 MovI
	
Label_1189:
	var_30_string = "all"; // 0x4a5 PushS
	var_31_string = ""; var_32_int = 0; // 0x4a6 PushV
	var_32_int = var_28_int; // 0x4a7 Mov
	func_1180(var_31_string, var_32_int); // 0x4a8 NEW_2
	HasAnimation(var_29_bool, var_30_string, var_31_string); // 0x4aa Func
	var_36_bool = var_29_bool == 0; // 0x4ac Not
	if(var_36_bool == 0) goto Label_1199; // 0x4ad JumpB
	goto Label_1202; // 0x4ae Jump
	
Label_1202:
	var_25_int = var_28_int; // 0x4b2 Mov
	return 4; // 0x4b3 Return
	
Label_1199:
	var_37_int = 1; // 0x4af PushI
	var_28_int = var_28_int + var_37_int; // 0x4b0 Add2
	goto Label_1189; // 0x4b1 Jump
}


func_164(var_2_object, var_211_string)
{
	var_212_bool = 0; // 0xa5 PushV
	func_1330(var_212_bool); // 0xa6 NEW_2
	var_213_bool = var_212_bool == 0; // 0xa8 Not
	if(var_213_bool == 0) goto Label_171; // 0xa9 JumpB
	return 0; // 0xaa Return
	
Label_171:
	var_214_bool = var_211_string == var_2_object; // 0xab Eq
	if(var_214_bool == 0) goto Label_174; // 0xac JumpB
	return 0; // 0xad Return
	
Label_174:
	var_215_string = ""; var_216_bool = 0; // 0xae PushV
	var_215_string = var_211_string; // 0xaf Mov
	var_217_string = ""; // 0xb0 PushS
	var_218_bool = var_211_string == var_217_string; // 0xb1 Eq
	if(var_218_bool == 0) goto Label_181; // 0xb2 JumpB
	var_216_bool = 0; // 0xb3 MovB
	goto Label_182; // 0xb4 Jump
	
Label_182:
	func_1113(var_215_string, var_216_bool); // 0xb6 NEW_2
	var_2_object = var_211_string; // 0xb8 TMov
	return 0; // 0xb9 Return
	
Label_181:
	var_216_bool = 1; // 0xb5 MovB
}


func_1322(var_85_int)
{
	var_85_int = 515592; // 0x52a MovI
	return 0; // 0x52b Return
}


func_1324(var_84_int)
{
	var_84_int = 511961; // 0x52c MovI
	return 0; // 0x52d Return
}


func_1326(var_86_string)
{
	var_86_string = "ui/NPC_Burah.png"; // 0x52e MovS
	return 0; // 0x52f Return
}


func_942()
{
	var_260_bool = 0; var_261_bool = 0; // 0x3ae PushV
	CameraSwitchToNormal(); // 0x3af Func
	var_262_bool = 0; // 0x3b1 PushV
	func_1330(var_262_bool); // 0x3b2 NEW_2
	if(var_262_bool == 0) goto Label_950; // 0x3b4 JumpB
	goto Label_958; // 0x3b5 Jump
	
Label_958:
	return 2; // 0x3be Return
	
Label_950:
	var_263_string = "head"; // 0x3b6 PushS
	HasAnimationTrack(var_261_bool, var_263_string); // 0x3b7 Func
	var_264_bool = var_261_bool; // 0x3b9 Push
	if(var_264_bool == 0) goto Label_958; // 0x3ba JumpB
	var_265_string = "head"; // 0x3bb PushS
	UnlookAsync(var_265_string); // 0x3bc Func
}


func_1328(var_87_string)
{
	var_87_string = "ui/NPC_Burah_b.png"; // 0x530 MovS
	return 0; // 0x531 Return
}


func_1330(var_79_bool)
{
	var_79_bool = 1; // 0x532 MovB
	return 0; // 0x533 Return
}


func_1204()
{
	var_15_int = 0; var_16_string = ""; // 0x4b5 PushV
	var_16_string = "map_chertez_state"; // 0x4b6 MovS
	func_1166(var_15_int, var_16_string); // 0x4b7 NEW_2
	var_19_int = 5; // 0x4b9 PushI
	var_20_bool = var_15_int <= var_19_int; // 0x4ba LE
	if(var_20_bool == 0) goto Label_1220; // 0x4bb JumpB
	var_21_string = "map_chertez_state"; // 0x4bc PushS
	var_22_int = 5; // 0x4bd PushI
	SetVariable(var_21_string, var_22_int); // 0x4be Func
	var_23_string = "map_chertez_force"; // 0x4c0 PushS
	var_24_int = 1; // 0x4c1 PushI
	SetVariable(var_23_string, var_24_int); // 0x4c2 Func
	
Label_1220:
	return 0; // 0x4c4 Return
}


func_697()
{
	func_837(); // 0x2ba NEW_2
	func_655(); // 0x2bd NEW_2
	lshStopSpeech(); // 0x2bf Func
	lshStopAnimation(); // 0x2c1 Func
	StopAsync(); // 0x2c3 Func
	Hold(); // 0x2c5 Func
	return 0; // 0x2c7 Return
}


func_959(var_97_bool, var_98_object)
{
	var_102_int = 0; var_103_int = 0; var_104_int = 0; var_105_int = 0; // 0x3bf PushV
	var_106_string = "voice_common"; // 0x3c0 PushS
	GetVariable(var_106_string, var_104_int); // 0x3c1 Func
	var_107_int = var_104_int; // 0x3c3 Push
	if(var_107_int == 0) goto Label_997; // 0x3c4 JumpB
	var_108_bool = 0; var_109_object = Obj(); // 0x3c5 PushV
	var_109_object = var_98_object; // 0x3c6 Mov
	func_1017(var_109_object); // 0x3c7 NEW_2
	var_138_bool = var_108_bool == 0; // 0x3c9 Not
	if(var_138_bool == 0) goto Label_979; // 0x3ca JumpB
	var_139_bool = 0; var_140_object = Obj(); // 0x3cb PushV
	var_140_object = var_98_object; // 0x3cc Mov
	func_1054(var_140_object); // 0x3cd NEW_2
	var_174_bool = var_139_bool == 0; // 0x3cf Not
	if(var_174_bool == 0) goto Label_979; // 0x3d0 JumpB
	var_97_bool = 0; // 0x3d1 MovB
	return 4; // 0x3d2 Return
	
Label_979:
	var_175_int = 2; // 0x3d3 PushI
	irand(var_105_int, var_175_int); // 0x3d4 Func
	var_176_int = var_105_int; // 0x3d6 Push
	if(var_176_int == 0) goto Label_992; // 0x3d7 JumpB
	var_177_string = "voice_common"; // 0x3d8 PushS
	var_178_int = 1; // 0x3d9 PushI
	var_179_int = var_104_int + var_178_int; // 0x3da Add
	var_180_int = 3; // 0x3db PushI
	var_181_int = var_179_int / var_180_int; // 0x3dc Mod
	SetVariable(var_177_string, var_181_int); // 0x3dd Func
	goto Label_996; // 0x3df Jump
	
Label_996:
	goto Label_1015; // 0x3e4 Jump
	
Label_1015:
	var_97_bool = 1; // 0x3f7 MovB
	return 4; // 0x3f8 Return
	
Label_992:
	var_182_string = "voice_common"; // 0x3e0 PushS
	var_183_int = 0; // 0x3e1 PushI
	SetVariable(var_182_string, var_183_int); // 0x3e2 Func
	
Label_997:
	var_184_bool = 0; var_185_object = Obj(); // 0x3e5 PushV
	var_185_object = var_98_object; // 0x3e6 Mov
	func_1054(var_185_object); // 0x3e7 NEW_2
	var_186_bool = var_184_bool == 0; // 0x3e9 Not
	if(var_186_bool == 0) goto Label_1011; // 0x3ea JumpB
	var_187_bool = 0; var_188_object = Obj(); // 0x3eb PushV
	var_188_object = var_98_object; // 0x3ec Mov
	func_1017(var_188_object); // 0x3ed NEW_2
	var_189_bool = var_187_bool == 0; // 0x3ef Not
	if(var_189_bool == 0) goto Label_1011; // 0x3f0 JumpB
	var_97_bool = 0; // 0x3f1 MovB
	return 4; // 0x3f2 Return
	
Label_1011:
	var_190_string = "voice_common"; // 0x3f3 PushS
	var_191_int = 1; // 0x3f4 PushI
	SetVariable(var_190_string, var_191_int); // 0x3f5 Func
}


func_835(var_45_bool)
{
	var_45_bool = 1; // 0x343 MovB
	return 0; // 0x344 Return
}


func_1221()
{
	var_27_object = Obj(); var_28_string = ""; var_29_float = 0; // 0x4c6 PushV
	var_30_object = Obj(); // 0x4c7 PushV
	func_1255(var_30_object); // 0x4c8 NEW_2
	var_27_object = var_30_object; // 0x4c9 Mov
	var_28_string = "pt_map_aglaja"; // 0x4cb MovS
	var_29_float = -1; // 0x4cc MovI
	func_1272(var_27_object, var_28_string, var_29_float); // 0x4cd NEW_2
	var_56_object = Obj(); // 0x4cf PushV
	func_1255(var_56_object); // 0x4d0 NEW_2
	ShowMap(var_56_object); // 0x4d2 ObjFunc
	return 0; // 0x4d4 Return
}


func_837()
{
	StopAnimation(); // 0x345 Func
	StopGroup0(); // 0x347 Func
	return 0; // 0x349 Return
}


func_712()
{
	StopGroup0(); // 0x2c8 Func
	func_655(); // 0x2cb NEW_2
	var_8_string = ""; // 0x2cd PushV
	var_8_string = "Neutral"; // 0x2ce MovS
	func_1097(var_8_string); // 0x2cf NEW_2
	func_646(); // 0x2d2 NEW_2
	return 0; // 0x2d4 Return
}


func_1097(var_234_string)
{
	var_235_bool = 0; var_236_float = 0; var_237_float = 0; var_238_bool = 0; var_239_float = 0; var_240_float = 0; // 0x449 PushV
	lshHasAnimation(var_238_bool, var_234_string); // 0x44a Func
	var_241_bool = var_238_bool; // 0x44c Push
	if(var_241_bool == 0) goto Label_1108; // 0x44d JumpB
	lshGetAnimTimes(var_234_string, var_239_float, var_240_float); // 0x44e Func
	var_242_bool = 0; // 0x450 PushB
	lshPlayAnimation(var_239_float, var_240_float, var_242_bool); // 0x451 Func
	goto Label_1112; // 0x453 Jump
	
Label_1112:
	return 6; // 0x458 Return
	
Label_1108:
	var_243_string = "Can't find lsh animation : "; // 0x454 PushS
	var_244_int = var_243_string + var_234_string; // 0x455 Add
	Trace(var_244_int); // 0x456 Func
}


func_842(var_22_float)
{
	var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); // 0x34a PushV
	GetPosition(var_27_cvector); // 0x34b Func
	GetPosition(var_28_cvector); // 0x34d ObjFunc
	var_29_cvector = var_28_cvector - var_27_cvector; // 0x34f Sub2
	var_22_float = var_29_cvector | var_29_cvector; // 0x350 Or2
	return 6; // 0x351 Return
}


func_590(var_0_object)
{
	var_7_bool = 0; // 0x24e PushV
	func_869(var_7_bool); // 0x24f NEW_2
	var_10_bool = var_7_bool == 0; // 0x251 Not
	if(var_10_bool == 0) goto Label_597; // 0x252 JumpB
	Hold(); // 0x253 Func
	
Label_597:
	GetDirection(var_0_object); // 0x255 Func
	
Label_599:
	func_766(); // 0x258 NEW_2
	goto Label_599; // 0x25a Jump
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_192_object, var_193_object)
{
	var_0_object = var_193_object; // 0x52 TMov
	var_1_object = var_192_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_198_int = 1; // 0x55 PushI
	if(var_198_int == 0) goto Label_134; // 0x56 JumpB
	var_199_bool = 0; var_200_object = Obj(); // 0x57 PushV
	var_200_object = var_1_object; // 0x58 MovT
	func_1243(var_200_object); // 0x59 NEW_2
	if(var_199_bool == 0) goto Label_112; // 0x5b JumpB
	var_207_object = Obj(); var_208_object = Obj(); // 0x5c PushV
	var_207_object = var_1_object; // 0x5d MovT
	var_208_object = var_0_object; // 0x5e MovT
	func_1237(); // 0x5f NEW_2
	var_211_string = ""; // 0x61 PushV
	var_211_string = "Neutral"; // 0x62 MovS
	func_164(var_193_object, var_211_string); // 0x63 NEW_2
	var_228_int = 514326; // 0x65 PushI
	SetMessage(var_228_int); // 0x66 TObjFunc
	ClearReplies(); // 0x68 TObjFunc
	var_229_int = 514327; // 0x6a PushI
	var_230_int = 15550; // 0x6b PushI
	var_231_int = 15549; // 0x6c PushI
	AddReply(var_229_int, var_230_int, var_231_int); // 0x6d TObjFunc
	goto Label_134; // 0x6f Jump
	
Label_134:
	var_232_bool = 0; // 0x86 PushV
	func_1330(var_232_bool); // 0x87 NEW_2
	if(var_232_bool == 0) goto Label_149; // 0x89 JumpB
	
Label_138:
	lshWaitForAnimEnd(); // 0x8a Func
	var_233_string = var_3_string; // 0x8c PushT
	if(var_233_string == 0) goto Label_143; // 0x8d JumpB
	goto Label_148; // 0x8e Jump
	
Label_148:
	goto Label_163; // 0x94 Jump
	
Label_163:
	return 0; // 0xa3 Return
	
Label_143:
	var_234_string = ""; // 0x8f PushV
	var_234_string = var_2_object; // 0x90 MovT
	func_1097(var_234_string); // 0x91 NEW_2
	goto Label_138; // 0x93 Jump
	
Label_149:
	var_245_string = "all"; // 0x95 PushS
	var_246_string = "idle"; // 0x96 PushS
	PlayAnimation(var_245_string, var_246_string); // 0x97 Func
	
Label_153:
	WaitForAnimEnd(); // 0x99 Func
	var_247_string = var_3_string; // 0x9b PushT
	if(var_247_string == 0) goto Label_158; // 0x9c JumpB
	goto Label_163; // 0x9d Jump
	
Label_158:
	var_248_string = "all"; // 0x9e PushS
	var_249_string = "idle"; // 0x9f PushS
	PlayAnimation(var_248_string, var_249_string); // 0xa0 Func
	goto Label_153; // 0xa2 Jump
	
Label_112:
	var_250_string = ""; // 0x70 PushV
	var_250_string = "Neutral"; // 0x71 MovS
	func_164(var_193_object, var_250_string); // 0x72 NEW_2
	var_251_int = 514532; // 0x74 PushI
	SetMessage(var_251_int); // 0x75 TObjFunc
	ClearReplies(); // 0x77 TObjFunc
	var_252_int = 514533; // 0x79 PushI
	var_253_int = -1; // 0x7a PushI
	var_254_int = 15764; // 0x7b PushI
	AddReply(var_252_int, var_253_int, var_254_int); // 0x7c TObjFunc
	var_255_int = 539713; // 0x7e PushI
	var_256_int = -1; // 0x7f PushI
	var_257_int = 41672; // 0x80 PushI
	AddReply(var_255_int, var_256_int, var_257_int); // 0x81 TObjFunc
	goto Label_134; // 0x83 Jump
}


func_850(var_15_bool, var_16_cvector)
{
	var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_bool = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_bool = 0; // 0x352 PushV
	GetPosition(var_20_cvector); // 0x353 Func
	var_21_cvector = var_16_cvector - var_20_cvector; // 0x355 Sub2
	var_23_float = GetByIndex(var_21_cvector, 0); // 0x356 PushE
	var_24_float = GetByIndex(var_21_cvector, 2); // 0x357 PushE
	Rotate(var_23_float, var_24_float, var_22_bool); // 0x358 Func
	var_15_bool = var_22_bool; // 0x35a Mov
	return 6; // 0x35b Return
}


func_1237()
{
	var_209_string = "ood11Burah1"; // 0x4d6 PushS
	var_210_int = 1; // 0x4d7 PushI
	SetVariable(var_209_string, var_210_int); // 0x4d8 Func
	return 0; // 0x4da Return
}


func_1113(var_215_string, var_216_bool)
{
	var_219_bool = 0; var_220_float = 0; var_221_float = 0; var_222_bool = 0; var_223_float = 0; var_224_float = 0; // 0x459 PushV
	lshHasAnimation(var_222_bool, var_215_string); // 0x45a Func
	var_225_bool = var_222_bool; // 0x45c Push
	if(var_225_bool == 0) goto Label_1123; // 0x45d JumpB
	lshGetAnimTimes(var_215_string, var_223_float, var_224_float); // 0x45e Func
	lshPlayAnimation(var_223_float, var_224_float, var_216_bool); // 0x460 Func
	goto Label_1127; // 0x462 Jump
	
Label_1127:
	return 6; // 0x467 Return
	
Label_1123:
	var_226_string = "Can't find lsh animation : "; // 0x463 PushS
	var_227_int = var_226_string + var_215_string; // 0x464 Add
	Trace(var_227_int); // 0x465 Func
}


func_1243(var_199_bool)
{
	var_201_int = 0; var_202_string = ""; // 0x4dc PushV
	var_202_string = "ood11Burah1"; // 0x4dd MovS
	func_1166(var_201_int, var_202_string); // 0x4de NEW_2
	var_205_int = 0; // 0x4e0 PushI
	var_206_bool = var_201_int == var_205_int; // 0x4e1 Eq
	if(var_206_bool == 0) goto Label_1253; // 0x4e2 JumpB
	var_199_bool = 1; // 0x4e3 MovB
	return 0; // 0x4e4 Return
	
Label_1253:
	var_199_bool = 0; // 0x4e5 MovB
	return 0; // 0x4e6 Return
}


func_860(var_11_bool)
{
	var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0); // 0x35c PushV
	GetPosition(var_14_cvector); // 0x35d ObjFunc
	var_15_bool = 0; var_16_cvector = CVector(0,0,0); // 0x35f PushV
	var_16_cvector = var_14_cvector; // 0x360 Mov
	func_850(var_15_bool, var_16_cvector); // 0x361 NEW_2
	var_11_bool = var_15_bool; // 0x362 Mov
	return 2; // 0x364 Return
}


func_604(var_32_bool)
{
	var_33_object = Obj(); var_34_object = Obj(); // 0x25c PushV
	var_35_string = "player"; // 0x25d PushS
	FindActor(var_34_object, var_35_string); // 0x25e Func
	var_36_bool = var_34_object == 0; // 0x260 Not
	if(var_36_bool == 0) goto Label_612; // 0x261 JumpB
	var_32_bool = 0; // 0x262 MovB
	return 2; // 0x263 Return
	
Label_612:
	var_37_bool = 0; var_38_object = Obj(); // 0x264 PushV
	var_38_object = var_34_object; // 0x265 Mov
	func_860(var_38_object); // 0x266 NEW_2
	var_32_bool = var_37_bool; // 0x267 Mov
	return 2; // 0x269 Return
}


func_869(var_7_bool)
{
	var_8_bool = 0; var_9_bool = 0; // 0x365 PushV
	IsLoaded(var_9_bool); // 0x366 Func
	var_7_bool = var_9_bool; // 0x368 Mov
	return 2; // 0x369 Return
}


func_1255(var_30_object)
{
	var_31_object = Obj(); var_32_object = Obj(); var_33_object = Obj(); var_34_object = Obj(); // 0x4e7 PushV
	GetMainOutdoorScene(var_33_object); // 0x4e8 Func
	var_35_bool = var_33_object == 0; // 0x4ea NullEq
	if(var_35_bool == 0) goto Label_1266; // 0x4eb JumpB
	var_36_string = "Can't find main outdoor scene"; // 0x4ec PushS
	Trace(var_36_string); // 0x4ed Func
	var_34_object = 0; // 0x4ef SetNull
	var_30_object = var_34_object; // 0x4f0 Mov
	return 4; // 0x4f1 Return
	
Label_1266:
	GetMap(var_34_object); // 0x4f2 ObjFunc
	var_30_object = var_34_object; // 0x4f4 Mov
	return 4; // 0x4f5 Return
}


func_1128(var_131_bool, var_132_string)
{
	var_133_bool = 0; var_134_bool = 0; // 0x468 PushV
	var_135_bool = 0; // 0x469 PushV
	func_1330(var_135_bool); // 0x46a NEW_2
	if(var_135_bool == 0) goto Label_1141; // 0x46c JumpB
	lshHasSpeech(var_134_bool, var_132_string); // 0x46d Func
	var_136_bool = var_134_bool; // 0x46f Push
	if(var_136_bool == 0) goto Label_1141; // 0x470 JumpB
	lshPlaySpeech(var_132_string); // 0x471 Func
	var_131_bool = 1; // 0x473 MovB
	return 2; // 0x474 Return
	
Label_1141:
	var_131_bool = 0; // 0x475 MovB
	return 2; // 0x476 Return
}


func_874(var_37_bool, var_39_float)
{
	var_40_float = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_bool = 0; var_48_bool = 0; var_49_float = 0; var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_bool = 0; var_57_bool = 0; // 0x36a PushV
	GetPosition(var_50_cvector); // 0x36b ObjFunc
	GetEyesHeight(var_49_float); // 0x36d ObjFunc
	var_58_float = GetByIndex(var_50_cvector, 1); // 0x36f PushE
	var_58_float = var_58_float + var_49_float; // 0x370 Add2
	SetByIndex(var_50_cvector, 1) = var_58_float; // 0x371 PopE
	GetPosition(var_51_cvector); // 0x372 Func
	GetEyesHeight(var_49_float); // 0x374 Func
	var_59_float = GetByIndex(var_51_cvector, 1); // 0x376 PushE
	var_59_float = var_59_float + var_49_float; // 0x377 Add2
	SetByIndex(var_51_cvector, 1) = var_59_float; // 0x378 PopE
	var_52_cvector = var_50_cvector - var_51_cvector; // 0x379 Sub2
	var_60_float = GetByIndex(var_52_cvector, 1); // 0x37a PushE
	var_60_float = 0; // 0x37b MovI
	SetByIndex(var_52_cvector, 1) = var_60_float; // 0x37c PopE
	var_61_int = var_52_cvector | var_52_cvector; // 0x37d Or
	var_62_float = sqrt(var_61_int); // 0x37e Sqrt
	var_52_cvector = var_52_cvector / var_52_cvector; // 0x37f Div2
	var_53_cvector = -var_52_cvector; // 0x380 Neg2
	var_63_float = var_52_cvector * var_39_float; // 0x381 Mult
	var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); // 0x382 PushV
	var_66_cvector = CVector(0.0, 1.0, 0.0); // 0x383 PushVec
	var_65_cvector = var_53_cvector ^ var_66_cvector; // 0x384 Xor2
	func_1156(var_64_cvector, var_65_cvector); // 0x385 NEW_2
	var_72_int = 25; // 0x387 PushI
	var_73_float = var_64_cvector * var_72_int; // 0x388 Mult
	var_74_int = var_63_float + var_73_float; // 0x389 Add
	var_75_cvector = CVector(0.0, 10.0, 0.0); // 0x38a PushVec
	var_54_cvector = var_74_int - var_75_cvector; // 0x38b Sub2
	var_55_cvector = var_51_cvector + var_54_cvector; // 0x38c Add2
	IsOverrideActive(var_56_bool); // 0x38d Func
	var_76_bool = var_56_bool; // 0x38f Push
	if(var_76_bool == 0) goto Label_915; // 0x390 JumpB
	var_37_bool = 0; // 0x391 MovB
	return 18; // 0x392 Return
	
Label_915:
	StopWorld(); // 0x393 Func
	CameraTransit(var_55_cvector, var_53_cvector); // 0x395 Func
	var_77_float = GetByIndex(var_54_cvector, 0); // 0x397 PushE
	var_78_float = GetByIndex(var_54_cvector, 2); // 0x398 PushE
	Rotate(var_77_float, var_78_float); // 0x399 Func
	var_79_bool = 0; // 0x39b PushV
	func_1330(var_79_bool); // 0x39c NEW_2
	if(var_79_bool == 0) goto Label_928; // 0x39e JumpB
	goto Label_936; // 0x39f Jump
	
Label_936:
	CameraWaitForPlayFinish(); // 0x3a8 Func
	ResumeWorld(); // 0x3aa Func
	var_37_bool = 1; // 0x3ac MovB
	return 18; // 0x3ad Return
	
Label_928:
	var_80_string = "head"; // 0x3a0 PushS
	HasAnimationTrack(var_57_bool, var_80_string); // 0x3a1 Func
	var_81_bool = var_57_bool; // 0x3a3 Push
	if(var_81_bool == 0) goto Label_936; // 0x3a4 JumpB
	var_82_string = "head"; // 0x3a5 PushS
	LookAsyncCamera(var_82_string); // 0x3a6 Func
}


func_619(var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0); // 0x26b PushE
	var_85_float = GetByIndex(var_0_object, 2); // 0x26c PushE
	RotateAsync(var_84_float, var_85_float); // 0x26d Func
	return 0; // 0x26f Return
}


func_624(var_15_bool)
{
	var_16_object = Obj(); var_17_bool = 0; var_18_object = Obj(); var_19_bool = 0; // 0x270 PushV
	var_20_string = "player"; // 0x271 PushS
	FindActor(var_18_object, var_20_string); // 0x272 Func
	var_21_bool = var_18_object == 0; // 0x274 Not
	if(var_21_bool == 0) goto Label_632; // 0x275 JumpB
	var_15_bool = 0; // 0x276 MovB
	return 4; // 0x277 Return
	
Label_632:
	var_22_float = 0; var_23_object = Obj(); // 0x278 PushV
	var_23_object = var_18_object; // 0x279 Mov
	func_842(var_23_object); // 0x27a NEW_2
	var_30_float = 90000.0; // 0x27c PushF
	var_31_bool = var_22_float > var_30_float; // 0x27d GT
	if(var_31_bool == 0) goto Label_641; // 0x27e JumpB
	var_15_bool = 0; // 0x27f MovB
	return 4; // 0x280 Return
	
Label_641:
	CanSee(var_19_bool, var_18_object); // 0x281 Func
	var_15_bool = var_19_bool; // 0x283 Mov
	return 4; // 0x284 Return
}


func_1143()
{
	var_10_bool = 0; // 0x477 PushV
	func_1330(var_10_bool); // 0x478 NEW_2
	if(var_10_bool == 0) goto Label_1149; // 0x47a JumpB
	lshStopSpeech(); // 0x47b Func
	
Label_1149:
	return 0; // 0x47d Return
}


func_1272(var_27_object, var_28_string, var_29_float)
{
	var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_object = Obj(); var_40_bool = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_object = Obj(); var_44_bool = 0; // 0x4f8 PushV
	GetMainOutdoorScene(var_43_object); // 0x4f9 Func
	var_45_bool = var_43_object == 0; // 0x4fb NullEq
	if(var_45_bool == 0) goto Label_1281; // 0x4fc JumpB
	var_46_string = "Can't find main outdoor scene"; // 0x4fd PushS
	Trace(var_46_string); // 0x4fe Func
	return 8; // 0x500 Return
	
Label_1281:
	GetLocator(var_28_string, var_44_bool, var_41_cvector, var_42_cvector); // 0x501 ObjFunc
	var_47_bool = var_44_bool == 0; // 0x503 Not
	if(var_47_bool == 0) goto Label_1291; // 0x504 JumpB
	var_48_string = "Warning: outdoor scene locator "; // 0x505 PushS
	var_49_int = var_48_string + var_28_string; // 0x506 Add
	var_50_string = " doesnt exist"; // 0x507 PushS
	var_51_int = var_49_int + var_50_string; // 0x508 Add
	Trace(var_51_int); // 0x509 Func
	
Label_1291:
	GetMap(var_27_object); // 0x50b ObjFunc
	var_52_bool = var_27_object == 0; // 0x50d NullEq
	if(var_52_bool == 0) goto Label_1299; // 0x50e JumpB
	var_53_string = "Can't find map"; // 0x50f PushS
	Trace(var_53_string); // 0x510 Func
	return 8; // 0x512 Return
	
Label_1299:
	var_54_float = GetByIndex(var_41_cvector, 0); // 0x513 PushE
	var_55_float = GetByIndex(var_41_cvector, 2); // 0x514 PushE
	SetMapParams(var_54_float, var_55_float, var_29_float); // 0x515 ObjFunc
	return 8; // 0x517 Return
}


func_1017(var_108_bool)
{
	var_110_string = ""; var_111_int = 0; var_112_bool = 0; var_113_int = 0; var_114_string = ""; var_115_string = ""; var_116_int = 0; var_117_bool = 0; var_118_int = 0; var_119_string = ""; // 0x3f9 PushV
	var_115_string = "c"; // 0x3fa MovS
	var_116_int = 0; // 0x3fb MovI
	
Label_1020:
	var_120_int = 1; // 0x3fc PushI
	if(var_120_int == 0) goto Label_1033; // 0x3fd JumpB
	var_121_int = 1; // 0x3fe PushI
	var_122_int = var_116_int + var_121_int; // 0x3ff Add
	var_123_int = var_115_string + var_122_int; // 0x400 Add
	HasProperty(var_123_int, var_117_bool); // 0x401 ObjFunc
	var_124_bool = var_117_bool == 0; // 0x403 Not
	if(var_124_bool == 0) goto Label_1030; // 0x404 JumpB
	goto Label_1033; // 0x405 Jump
	
Label_1033:
	var_125_bool = var_116_int == 0; // 0x409 Not
	if(var_125_bool == 0) goto Label_1037; // 0x40a JumpB
	var_108_bool = 0; // 0x40b MovB
	return 10; // 0x40c Return
	
Label_1037:
	var_118_int = 0; // 0x40d MovI
	var_126_int = 1; // 0x40e PushI
	var_127_bool = var_116_int > var_126_int; // 0x40f GT
	if(var_127_bool == 0) goto Label_1043; // 0x410 JumpB
	irand(var_118_int, var_116_int); // 0x411 Func
	
Label_1043:
	var_128_int = 1; // 0x413 PushI
	var_129_int = var_118_int + var_128_int; // 0x414 Add
	var_130_int = var_115_string + var_129_int; // 0x415 Add
	GetProperty(var_130_int, var_119_string); // 0x416 ObjFunc
	var_131_bool = 0; var_132_string = ""; // 0x418 PushV
	var_132_string = var_119_string; // 0x419 Mov
	func_1128(var_131_bool, var_132_string); // 0x41a NEW_2
	var_108_bool = var_131_bool; // 0x41b Mov
	return 10; // 0x41d Return
	
Label_1030:
	var_137_int = 1; // 0x406 PushI
	var_116_int = var_116_int + var_137_int; // 0x407 Add2
	goto Label_1020; // 0x408 Jump
}


func_766()
{
	var_11_int = 0; var_12_int = 0; var_13_bool = 0; var_14_int = 0; var_15_int = 0; var_16_bool = 0; var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_int = 0; var_21_int = 0; var_22_bool = 0; // 0x2fe PushV
	WaitForAnimEnd(); // 0x2ff Func
	var_23_bool = 0; // 0x301 PushV
	func_869(var_23_bool); // 0x302 NEW_2
	var_24_bool = var_23_bool == 0; // 0x304 Not
	if(var_24_bool == 0) goto Label_775; // 0x305 JumpB
	return 12; // 0x306 Return
	
Label_775:
	var_25_int = 0; // 0x307 PushV
	func_1187(var_25_int); // 0x308 NEW_2
	var_17_int = var_25_int; // 0x309 Mov
	var_18_int = 0; // 0x30b MovI
	
Label_780:
	var_38_bool = 0; // 0x30c PushV
	var_38_bool = 0; // 0x30d MovB
	var_39_int = 5; // 0x30e PushI
	var_40_bool = var_18_int < var_39_int; // 0x30f LT
	if(var_40_bool == 0) goto Label_790; // 0x310 JumpB
	var_41_bool = 0; // 0x311 PushV
	func_869(var_41_bool); // 0x312 NEW_2
	if(var_41_bool == 0) goto Label_790; // 0x314 JumpB
	var_38_bool = 1; // 0x315 MovB
	
Label_790:
	if(var_38_bool == 0) goto Label_832; // 0x316 JumpB
	var_42_bool = var_17_int == 0; // 0x317 Not
	if(var_42_bool == 0) goto Label_800; // 0x318 JumpB
	var_43_int = 3; // 0x319 PushI
	Sleep(var_43_int, var_19_bool); // 0x31a Func
	var_44_bool = var_19_bool == 0; // 0x31c Not
	if(var_44_bool == 0) goto Label_799; // 0x31d JumpB
	goto Label_832; // 0x31e Jump
	
Label_832:
	ResetAAS(); // 0x340 Func
	return 12; // 0x342 Return
	
Label_799:
	goto Label_821; // 0x31f Jump
	
Label_821:
	var_45_bool = 0; // 0x335 PushV
	func_835(var_45_bool); // 0x336 NEW_2
	var_46_bool = var_45_bool == 0; // 0x338 Not
	if(var_46_bool == 0) goto Label_827; // 0x339 JumpB
	goto Label_832; // 0x33a Jump
	
Label_827:
	ResetAAS(); // 0x33b Func
	var_47_int = 1; // 0x33d PushI
	var_18_int = var_18_int + var_47_int; // 0x33e Add2
	goto Label_780; // 0x33f Jump
	
Label_800:
	irand(var_20_int, var_17_int); // 0x320 Func
	var_48_int = 5; // 0x322 PushI
	irand(var_21_int, var_48_int); // 0x323 Func
	var_49_int = 0; // 0x325 PushI
	var_50_bool = var_21_int != var_49_int; // 0x326 Neq
	if(var_50_bool == 0) goto Label_809; // 0x327 JumpB
	var_20_int = 0; // 0x328 MovI
	
Label_809:
	var_51_string = "all"; // 0x329 PushS
	var_52_string = ""; var_53_int = 0; // 0x32a PushV
	var_53_int = var_20_int; // 0x32b Mov
	func_1180(var_52_string, var_53_int); // 0x32c NEW_2
	PlayAnimation(var_51_string, var_52_string); // 0x32e Func
	WaitForAnimEnd(var_22_bool); // 0x330 Func
	var_54_bool = var_22_bool == 0; // 0x332 Not
	if(var_54_bool == 0) goto Label_821; // 0x333 JumpB
	goto Label_832; // 0x334 Jump
}


