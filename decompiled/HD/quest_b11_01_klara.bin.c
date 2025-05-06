task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_cvector, var_8_bool)
{
	var_9_int = 1; // 0xe3 PushI
	if(var_9_int == 0) goto Label_611; // 0xe4 JumpB
	func_1216(); // 0xe6 NEW_2
	var_11_int = 23179; // 0xe8 PushI
	var_12_bool = var_7_cvector == var_11_int; // 0xe9 Eq
	if(var_12_bool == 0) goto Label_320; // 0xea JumpB
	var_13_bool = 0; // 0xeb PushV
	var_13_bool = 0; // 0xec MovB
	var_14_bool = 0; var_15_object = Obj(); // 0xed PushV
	var_15_object = var_1_object; // 0xee MovT
	func_1293(var_15_object); // 0xef NEW_2
	var_22_bool = var_14_bool == 0; // 0xf1 Not
	if(var_22_bool == 0) goto Label_249; // 0xf2 JumpB
	var_23_bool = 0; var_24_object = Obj(); // 0xf3 PushV
	var_24_object = var_1_object; // 0xf4 MovT
	func_1305(var_24_object); // 0xf5 NEW_2
	if(var_23_bool == 0) goto Label_249; // 0xf7 JumpB
	var_13_bool = 1; // 0xf8 MovB
	
Label_249:
	if(var_13_bool == 0) goto Label_300; // 0xf9 JumpB
	var_29_object = Obj(); var_30_object = Obj(); // 0xfa PushV
	var_29_object = var_1_object; // 0xfb MovT
	var_30_object = var_0_object; // 0xfc MovT
	func_1287(); // 0xfd NEW_2
	var_33_string = ""; // 0xff PushV
	var_33_string = "Neutral"; // 0x100 MovS
	func_204(var_8_bool, var_33_string); // 0x101 NEW_2
	var_50_int = 522009; // 0x103 PushI
	SetMessage(var_50_int); // 0x104 TObjFunc
	ClearReplies(); // 0x106 TObjFunc
	var_51_int = 523279; // 0x108 PushI
	var_52_int = 24484; // 0x109 PushI
	var_53_int = 24483; // 0x10a PushI
	AddReply(var_51_int, var_52_int, var_53_int); // 0x10b TObjFunc
	var_54_int = 522010; // 0x10d PushI
	var_55_int = 24503; // 0x10e PushI
	var_56_int = 23180; // 0x10f PushI
	AddReply(var_54_int, var_55_int, var_56_int); // 0x110 TObjFunc
	var_57_int = 523284; // 0x112 PushI
	var_58_int = 24490; // 0x113 PushI
	var_59_int = 24489; // 0x114 PushI
	AddReply(var_57_int, var_58_int, var_59_int); // 0x115 TObjFunc
	var_60_int = 523286; // 0x117 PushI
	var_61_int = 24492; // 0x118 PushI
	var_62_int = 24491; // 0x119 PushI
	AddReply(var_60_int, var_61_int, var_62_int); // 0x11a TObjFunc
	var_63_int = 523305; // 0x11c PushI
	var_64_int = 24514; // 0x11d PushI
	var_65_int = 24513; // 0x11e PushI
	AddReply(var_63_int, var_64_int, var_65_int); // 0x11f TObjFunc
	var_66_int = 523278; // 0x121 PushI
	var_67_int = 24486; // 0x122 PushI
	var_68_int = 24482; // 0x123 PushI
	AddReply(var_66_int, var_67_int, var_68_int); // 0x124 TObjFunc
	var_69_int = 523304; // 0x126 PushI
	var_70_int = -1; // 0x127 PushI
	var_71_int = 24512; // 0x128 PushI
	AddReply(var_69_int, var_70_int, var_71_int); // 0x129 TObjFunc
	return 0; // 0x12b Return
	
Label_300:
	var_72_string = ""; // 0x12c PushV
	var_72_string = "Fear"; // 0x12d MovS
	func_204(var_8_bool, var_72_string); // 0x12e NEW_2
	var_73_int = 522096; // 0x130 PushI
	SetMessage(var_73_int); // 0x131 TObjFunc
	ClearReplies(); // 0x133 TObjFunc
	var_74_int = 522097; // 0x135 PushI
	var_75_int = -1; // 0x136 PushI
	var_76_int = 23266; // 0x137 PushI
	AddReply(var_74_int, var_75_int, var_76_int); // 0x138 TObjFunc
	var_77_int = 523318; // 0x13a PushI
	var_78_int = 24533; // 0x13b PushI
	var_79_int = 24532; // 0x13c PushI
	AddReply(var_77_int, var_78_int, var_79_int); // 0x13d TObjFunc
	return 0; // 0x13f Return
	
Label_320:
	var_80_int = 24533; // 0x140 PushI
	var_81_bool = var_7_cvector == var_80_int; // 0x141 Eq
	if(var_81_bool == 0) goto Label_338; // 0x142 JumpB
	var_82_string = ""; // 0x143 PushV
	var_82_string = "Fear"; // 0x144 MovS
	func_204(var_8_bool, var_82_string); // 0x145 NEW_2
	var_83_int = 523319; // 0x147 PushI
	SetMessage(var_83_int); // 0x148 TObjFunc
	ClearReplies(); // 0x14a TObjFunc
	var_84_int = 523320; // 0x14c PushI
	var_85_int = -1; // 0x14d PushI
	var_86_int = 24534; // 0x14e PushI
	AddReply(var_84_int, var_85_int, var_86_int); // 0x14f TObjFunc
	return 0; // 0x151 Return
	
Label_338:
	var_87_int = 24514; // 0x152 PushI
	var_88_bool = var_7_cvector == var_87_int; // 0x153 Eq
	if(var_88_bool == 0) goto Label_361; // 0x154 JumpB
	var_89_string = ""; // 0x155 PushV
	var_89_string = "Fear"; // 0x156 MovS
	func_204(var_8_bool, var_89_string); // 0x157 NEW_2
	var_90_int = 523306; // 0x159 PushI
	SetMessage(var_90_int); // 0x15a TObjFunc
	ClearReplies(); // 0x15c TObjFunc
	var_91_int = 523307; // 0x15e PushI
	var_92_int = 24516; // 0x15f PushI
	var_93_int = 24515; // 0x160 PushI
	AddReply(var_91_int, var_92_int, var_93_int); // 0x161 TObjFunc
	var_94_int = 523309; // 0x163 PushI
	var_95_int = 24518; // 0x164 PushI
	var_96_int = 24517; // 0x165 PushI
	AddReply(var_94_int, var_95_int, var_96_int); // 0x166 TObjFunc
	return 0; // 0x168 Return
	
Label_361:
	var_97_int = 24518; // 0x169 PushI
	var_98_bool = var_7_cvector == var_97_int; // 0x16a Eq
	if(var_98_bool == 0) goto Label_384; // 0x16b JumpB
	var_99_string = ""; // 0x16c PushV
	var_99_string = "Fear"; // 0x16d MovS
	func_204(var_8_bool, var_99_string); // 0x16e NEW_2
	var_100_int = 523310; // 0x170 PushI
	SetMessage(var_100_int); // 0x171 TObjFunc
	ClearReplies(); // 0x173 TObjFunc
	var_101_int = 523312; // 0x175 PushI
	var_102_int = 24508; // 0x176 PushI
	var_103_int = 24521; // 0x177 PushI
	AddReply(var_101_int, var_102_int, var_103_int); // 0x178 TObjFunc
	var_104_int = 523314; // 0x17a PushI
	var_105_int = 24484; // 0x17b PushI
	var_106_int = 24524; // 0x17c PushI
	AddReply(var_104_int, var_105_int, var_106_int); // 0x17d TObjFunc
	return 0; // 0x17f Return
	
Label_384:
	var_107_int = 24516; // 0x180 PushI
	var_108_bool = var_7_cvector == var_107_int; // 0x181 Eq
	if(var_108_bool == 0) goto Label_407; // 0x182 JumpB
	var_109_string = ""; // 0x183 PushV
	var_109_string = "Fear"; // 0x184 MovS
	func_204(var_8_bool, var_109_string); // 0x185 NEW_2
	var_110_int = 523308; // 0x187 PushI
	SetMessage(var_110_int); // 0x188 TObjFunc
	ClearReplies(); // 0x18a TObjFunc
	var_111_int = 523311; // 0x18c PushI
	var_112_int = 24508; // 0x18d PushI
	var_113_int = 24519; // 0x18e PushI
	AddReply(var_111_int, var_112_int, var_113_int); // 0x18f TObjFunc
	var_114_int = 523313; // 0x191 PushI
	var_115_int = 24484; // 0x192 PushI
	var_116_int = 24523; // 0x193 PushI
	AddReply(var_114_int, var_115_int, var_116_int); // 0x194 TObjFunc
	return 0; // 0x196 Return
	
Label_407:
	var_117_int = 24492; // 0x197 PushI
	var_118_bool = var_7_cvector == var_117_int; // 0x198 Eq
	if(var_118_bool == 0) goto Label_425; // 0x199 JumpB
	var_119_string = ""; // 0x19a PushV
	var_119_string = "Fear"; // 0x19b MovS
	func_204(var_8_bool, var_119_string); // 0x19c NEW_2
	var_120_int = 523287; // 0x19e PushI
	SetMessage(var_120_int); // 0x19f TObjFunc
	ClearReplies(); // 0x1a1 TObjFunc
	var_121_int = 523300; // 0x1a3 PushI
	var_122_int = 24508; // 0x1a4 PushI
	var_123_int = 24506; // 0x1a5 PushI
	AddReply(var_121_int, var_122_int, var_123_int); // 0x1a6 TObjFunc
	return 0; // 0x1a8 Return
	
Label_425:
	var_124_int = 24490; // 0x1a9 PushI
	var_125_bool = var_7_cvector == var_124_int; // 0x1aa Eq
	if(var_125_bool == 0) goto Label_448; // 0x1ab JumpB
	var_126_string = ""; // 0x1ac PushV
	var_126_string = "Fear"; // 0x1ad MovS
	func_204(var_8_bool, var_126_string); // 0x1ae NEW_2
	var_127_int = 523285; // 0x1b0 PushI
	SetMessage(var_127_int); // 0x1b1 TObjFunc
	ClearReplies(); // 0x1b3 TObjFunc
	var_128_int = 523290; // 0x1b5 PushI
	var_129_int = -1; // 0x1b6 PushI
	var_130_int = 24495; // 0x1b7 PushI
	AddReply(var_128_int, var_129_int, var_130_int); // 0x1b8 TObjFunc
	var_131_int = 523291; // 0x1ba PushI
	var_132_int = -1; // 0x1bb PushI
	var_133_int = 24496; // 0x1bc PushI
	AddReply(var_131_int, var_132_int, var_133_int); // 0x1bd TObjFunc
	return 0; // 0x1bf Return
	
Label_448:
	var_134_int = 24503; // 0x1c0 PushI
	var_135_bool = var_7_cvector == var_134_int; // 0x1c1 Eq
	if(var_135_bool == 0) goto Label_466; // 0x1c2 JumpB
	var_136_string = ""; // 0x1c3 PushV
	var_136_string = "Fear"; // 0x1c4 MovS
	func_204(var_8_bool, var_136_string); // 0x1c5 NEW_2
	var_137_int = 523298; // 0x1c7 PushI
	SetMessage(var_137_int); // 0x1c8 TObjFunc
	ClearReplies(); // 0x1ca TObjFunc
	var_138_int = 523299; // 0x1cc PushI
	var_139_int = 24494; // 0x1cd PushI
	var_140_int = 24504; // 0x1ce PushI
	AddReply(var_138_int, var_139_int, var_140_int); // 0x1cf TObjFunc
	return 0; // 0x1d1 Return
	
Label_466:
	var_141_int = 24484; // 0x1d2 PushI
	var_142_bool = var_7_cvector == var_141_int; // 0x1d3 Eq
	if(var_142_bool == 0) goto Label_489; // 0x1d4 JumpB
	var_143_string = ""; // 0x1d5 PushV
	var_143_string = "Neutral"; // 0x1d6 MovS
	func_204(var_8_bool, var_143_string); // 0x1d7 NEW_2
	var_144_int = 523280; // 0x1d9 PushI
	SetMessage(var_144_int); // 0x1da TObjFunc
	ClearReplies(); // 0x1dc TObjFunc
	var_145_int = 523281; // 0x1de PushI
	var_146_int = 24486; // 0x1df PushI
	var_147_int = 24485; // 0x1e0 PushI
	AddReply(var_145_int, var_146_int, var_147_int); // 0x1e1 TObjFunc
	var_148_int = 523315; // 0x1e3 PushI
	var_149_int = 24494; // 0x1e4 PushI
	var_150_int = 24527; // 0x1e5 PushI
	AddReply(var_148_int, var_149_int, var_150_int); // 0x1e6 TObjFunc
	return 0; // 0x1e8 Return
	
Label_489:
	var_151_int = 24486; // 0x1e9 PushI
	var_152_bool = var_7_cvector == var_151_int; // 0x1ea Eq
	if(var_152_bool == 0) goto Label_512; // 0x1eb JumpB
	var_153_string = ""; // 0x1ec PushV
	var_153_string = "Fear"; // 0x1ed MovS
	func_204(var_8_bool, var_153_string); // 0x1ee NEW_2
	var_154_int = 523282; // 0x1f0 PushI
	SetMessage(var_154_int); // 0x1f1 TObjFunc
	ClearReplies(); // 0x1f3 TObjFunc
	var_155_int = 523288; // 0x1f5 PushI
	var_156_int = 24494; // 0x1f6 PushI
	var_157_int = 24493; // 0x1f7 PushI
	AddReply(var_155_int, var_156_int, var_157_int); // 0x1f8 TObjFunc
	var_158_int = 523316; // 0x1fa PushI
	var_159_int = 24498; // 0x1fb PushI
	var_160_int = 24529; // 0x1fc PushI
	AddReply(var_158_int, var_159_int, var_160_int); // 0x1fd TObjFunc
	return 0; // 0x1ff Return
	
Label_512:
	var_161_int = 24494; // 0x200 PushI
	var_162_bool = var_7_cvector == var_161_int; // 0x201 Eq
	if(var_162_bool == 0) goto Label_530; // 0x202 JumpB
	var_163_string = ""; // 0x203 PushV
	var_163_string = "Neutral"; // 0x204 MovS
	func_204(var_8_bool, var_163_string); // 0x205 NEW_2
	var_164_int = 523289; // 0x207 PushI
	SetMessage(var_164_int); // 0x208 TObjFunc
	ClearReplies(); // 0x20a TObjFunc
	var_165_int = 523292; // 0x20c PushI
	var_166_int = 24498; // 0x20d PushI
	var_167_int = 24497; // 0x20e PushI
	AddReply(var_165_int, var_166_int, var_167_int); // 0x20f TObjFunc
	return 0; // 0x211 Return
	
Label_530:
	var_168_int = 24498; // 0x212 PushI
	var_169_bool = var_7_cvector == var_168_int; // 0x213 Eq
	if(var_169_bool == 0) goto Label_553; // 0x214 JumpB
	var_170_string = ""; // 0x215 PushV
	var_170_string = "Neutral"; // 0x216 MovS
	func_204(var_8_bool, var_170_string); // 0x217 NEW_2
	var_171_int = 523293; // 0x219 PushI
	SetMessage(var_171_int); // 0x21a TObjFunc
	ClearReplies(); // 0x21c TObjFunc
	var_172_int = 523294; // 0x21e PushI
	var_173_int = 24508; // 0x21f PushI
	var_174_int = 24499; // 0x220 PushI
	AddReply(var_172_int, var_173_int, var_174_int); // 0x221 TObjFunc
	var_175_int = 523295; // 0x223 PushI
	var_176_int = 24501; // 0x224 PushI
	var_177_int = 24500; // 0x225 PushI
	AddReply(var_175_int, var_176_int, var_177_int); // 0x226 TObjFunc
	return 0; // 0x228 Return
	
Label_553:
	var_178_int = 24501; // 0x229 PushI
	var_179_bool = var_7_cvector == var_178_int; // 0x22a Eq
	if(var_179_bool == 0) goto Label_576; // 0x22b JumpB
	var_180_string = ""; // 0x22c PushV
	var_180_string = "Neutral"; // 0x22d MovS
	func_204(var_8_bool, var_180_string); // 0x22e NEW_2
	var_181_int = 523296; // 0x230 PushI
	SetMessage(var_181_int); // 0x231 TObjFunc
	ClearReplies(); // 0x233 TObjFunc
	var_182_int = 523301; // 0x235 PushI
	var_183_int = 24508; // 0x236 PushI
	var_184_int = 24507; // 0x237 PushI
	AddReply(var_182_int, var_183_int, var_184_int); // 0x238 TObjFunc
	var_185_int = 523297; // 0x23a PushI
	var_186_int = -1; // 0x23b PushI
	var_187_int = 24502; // 0x23c PushI
	AddReply(var_185_int, var_186_int, var_187_int); // 0x23d TObjFunc
	return 0; // 0x23f Return
	
Label_576:
	var_188_int = 24508; // 0x240 PushI
	var_189_bool = var_7_cvector == var_188_int; // 0x241 Eq
	if(var_189_bool == 0) goto Label_599; // 0x242 JumpB
	var_190_string = ""; // 0x243 PushV
	var_190_string = "Neutral"; // 0x244 MovS
	func_204(var_8_bool, var_190_string); // 0x245 NEW_2
	var_191_int = 523302; // 0x247 PushI
	SetMessage(var_191_int); // 0x248 TObjFunc
	ClearReplies(); // 0x24a TObjFunc
	var_192_int = 523303; // 0x24c PushI
	var_193_int = -1; // 0x24d PushI
	var_194_int = 24509; // 0x24e PushI
	AddReply(var_192_int, var_193_int, var_194_int); // 0x24f TObjFunc
	var_195_int = 523317; // 0x251 PushI
	var_196_int = -1; // 0x252 PushI
	var_197_int = 24531; // 0x253 PushI
	AddReply(var_195_int, var_196_int, var_197_int); // 0x254 TObjFunc
	return 0; // 0x256 Return
	
Label_599:
	var_3_string = 1; // 0x257 TMovB
	var_198_bool = 0; // 0x258 PushV
	func_1285(var_198_bool); // 0x259 NEW_2
	if(var_198_bool == 0) goto Label_607; // 0x25b JumpB
	lshStopAnimation(); // 0x25c Func
	goto Label_609; // 0x25e Jump
	
Label_609:
	return 0; // 0x261 Return
	
Label_607:
	StopAnimation(); // 0x25f Func
	
Label_611:
	return 0; // 0x263 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_string)
{
	var_8_bool = 0; var_9_bool = 0; // 0x270 PushV
	var_10_string = "cleanup"; // 0x271 PushS
	var_11_bool = var_7_string == var_10_string; // 0x272 Eq
	if(var_11_bool == 0) goto Label_639; // 0x273 JumpB
	var_1_object = 1; // 0x274 TMovB
	IsLoaded(var_9_bool); // 0x275 Func
	var_12_bool = var_9_bool == 0; // 0x277 Not
	if(var_12_bool == 0) goto Label_638; // 0x278 JumpB
	var_13_object = Obj(); // 0x279 PushV
	func_1223(var_13_object); // 0x27a NEW_2
	RemoveActor(var_13_object); // 0x27c Func
	
Label_638:
	goto Label_643; // 0x27e Jump
	
Label_643:
	return 2; // 0x283 Return
	
Label_639:
	var_16_string = "restore"; // 0x27f PushS
	var_17_bool = var_7_string == var_16_string; // 0x280 Eq
	if(var_17_bool == 0) goto Label_643; // 0x281 JumpB
	var_1_object = 0; // 0x282 TMovB
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	var_7_object = var_1_object; // 0x284 PushT
	if(var_7_object == 0) goto Label_653; // 0x285 JumpB
	var_8_object = Obj(); // 0x286 PushV
	func_1223(var_8_object); // 0x287 NEW_2
	RemoveActor(var_8_object); // 0x289 Func
	Hold(); // 0x28b Func
	
Label_653:
	func_768(); // 0x28e NEW_2
	return 0; // 0x290 Return
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_783(); // 0x292 NEW_2
	return 0; // 0x294 Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_int)
{
	var_8_int = 10; // 0x2db PushI
	var_9_bool = var_7_int == var_8_int; // 0x2dc Eq
	if(var_9_bool == 0) goto Label_767; // 0x2dd JumpB
	func_726(); // 0x2df NEW_2
	var_11_bool = 0; // 0x2e1 PushV
	var_11_bool = 0; // 0x2e2 MovB
	var_12_bool = 0; // 0x2e3 PushV
	func_940(var_12_bool); // 0x2e4 NEW_2
	if(var_12_bool == 0) goto Label_748; // 0x2e6 JumpB
	var_15_bool = 0; // 0x2e7 PushV
	func_695(var_15_bool); // 0x2e8 NEW_2
	if(var_15_bool == 0) goto Label_748; // 0x2ea JumpB
	var_11_bool = 1; // 0x2eb MovB
	
Label_748:
	if(var_11_bool == 0) goto Label_761; // 0x2ec JumpB
	var_32_bool = 0; // 0x2ed PushV
	func_675(var_32_bool); // 0x2ee NEW_2
	if(var_32_bool == 0) goto Label_760; // 0x2f0 JumpB
	var_51_bool = 0; var_52_object = Obj(); // 0x2f1 PushV
	var_53_object = Obj(); // 0x2f2 PushV
	func_1223(var_53_object); // 0x2f3 NEW_2
	var_52_object = var_53_object; // 0x2f4 Mov
	func_1090(var_52_object); // 0x2f6 NEW_2
	
Label_760:
	goto Label_767; // 0x2f8 Jump
	
Label_767:
	return 0; // 0x2ff Return
	
Label_761:
	func_690(var_7_int); // 0x2fa NEW_2
	func_717(); // 0x2fd NEW_2
}


task_2_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_bool)
{
	var_8_bool = var_7_bool; // 0x31d Push
	if(var_8_bool == 0) goto Label_803; // 0x31e JumpB
	func_717(); // 0x320 NEW_2
	goto Label_807; // 0x322 Jump
	
Label_807:
	return 0; // 0x327 Return
	
Label_803:
	var_14_string = ""; // 0x323 PushV
	var_14_string = "Neutral"; // 0x324 MovS
	func_1170(var_14_string); // 0x325 NEW_2
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_object)
{
	var_8_bool = 0; var_9_bool = 0; // 0x328 PushV
	IsOverrideActive(var_9_bool); // 0x329 Func
	var_10_bool = var_9_bool == 0; // 0x32b Not
	if(var_10_bool == 0) goto Label_836; // 0x32c JumpB
	EventDisable(0); // 0x32d EventDisable
	func_908(); // 0x32f NEW_2
	var_11_bool = 0; var_12_object = Obj(); // 0x331 PushV
	var_12_object = var_7_object; // 0x332 Mov
	func_931(var_12_object); // 0x333 NEW_2
	EventEnable(0); // 0x335 EventEnable
	var_25_object = Obj(); // 0x336 PushV
	var_25_object = var_7_object; // 0x337 Mov
	func_612(var_25_object); // 0x338 NEW_2
	var_294_string = ""; // 0x33a PushV
	var_294_string = "Neutral"; // 0x33b MovS
	func_1170(var_294_string); // 0x33c NEW_2
	func_726(); // 0x33f NEW_2
	func_717(); // 0x342 NEW_2
	
Label_836:
	return 2; // 0x344 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_661(var_6_bool); // 0x26d NEW_2
	return 0; // 0x26f Return
}


func_0(var_0_object, var_26_int, var_27_object)
{
	var_29_object = Obj(); var_30_bool = 0; var_31_int = 0; var_32_bool = 0; var_33_object = Obj(); var_34_bool = 0; var_35_int = 0; var_36_bool = 0; // 0x0 PushV
	var_0_object = var_27_object; // 0x1 TMov
	var_37_bool = 0; var_38_object = Obj(); var_39_float = 0; // 0x2 PushV
	var_38_object = var_27_object; // 0x3 Mov
	var_39_float = 70.0; // 0x4 MovF
	func_945(var_38_object, var_39_float); // 0x5 NEW_2
	var_84_bool = var_37_bool == 0; // 0x7 Not
	if(var_84_bool == 0) goto Label_11; // 0x8 JumpB
	var_26_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_33_object); // 0xb Func
	var_85_int = 0; // 0xd PushV
	func_1279(var_85_int); // 0xe NEW_2
	SetNPCName(var_85_int); // 0x10 ObjFunc
	var_86_int = 0; // 0x12 PushV
	func_1277(var_86_int); // 0x13 NEW_2
	SetNPCDescription(var_86_int); // 0x15 ObjFunc
	var_87_string = ""; // 0x17 PushV
	func_1281(var_87_string); // 0x18 NEW_2
	SetPhoto(var_87_string); // 0x1a ObjFunc
	var_88_string = ""; // 0x1c PushV
	func_1283(var_88_string); // 0x1d NEW_2
	SetPhoto2(var_88_string); // 0x1f ObjFunc
	var_89_int = 0; // 0x21 PushV
	func_1317(var_89_int); // 0x22 NEW_2
	SetPlayerName(var_89_int); // 0x24 ObjFunc
	var_35_int = -1; // 0x26 MovI
	IsOverrideActive(var_34_bool); // 0x27 Func
	var_97_bool = var_34_bool; // 0x29 Push
	if(var_97_bool == 0) goto Label_45; // 0x2a JumpB
	var_26_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_33_object); // 0x2d Func
	var_98_bool = 0; var_99_object = Obj(); // 0x2f PushV
	var_100_object = Obj(); // 0x30 PushV
	func_1223(var_100_object); // 0x31 NEW_2
	var_99_object = var_100_object; // 0x32 Mov
	func_1032(var_98_bool, var_99_object); // 0x34 NEW_2
	var_193_object = Obj(); var_194_object = Obj(); // 0x36 PushV
	var_193_object = var_27_object; // 0x37 Mov
	var_194_object = var_33_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_195_object, var_196_object, var_197_string, var_198_bool, var_193_object, var_194_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_36_bool); // 0x3d ObjFunc
	
Label_63:
	var_285_bool = var_36_bool == 0; // 0x3f Not
	if(var_285_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_36_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_286_object = Obj(); // 0x46 PushV
	var_286_object = var_27_object; // 0x47 Mov
	func_1014(); // 0x48 NEW_2
	StopDialog(var_33_object); // 0x4a Func
	GetReturnValue(var_35_int); // 0x4c ObjFunc
	var_26_int = var_35_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_1281(var_87_string)
{
	var_87_string = "ui/NPC_Klara.png"; // 0x501 MovS
	return 0; // 0x502 Return
}


func_768()
{
	func_908(); // 0x301 NEW_2
	func_726(); // 0x304 NEW_2
	lshStopSpeech(); // 0x306 Func
	lshStopAnimation(); // 0x308 Func
	StopAsync(); // 0x30a Func
	Hold(); // 0x30c Func
	return 0; // 0x30e Return
}


func_1283(var_88_string)
{
	var_88_string = "ui/NPC_Klara_b.png"; // 0x503 MovS
	return 0; // 0x504 Return
}


func_1285(var_80_bool)
{
	var_80_bool = 1; // 0x505 MovB
	return 0; // 0x506 Return
}


func_1287()
{
	var_218_string = "oob11KlaraD1"; // 0x508 PushS
	var_219_int = 1; // 0x509 PushI
	SetVariable(var_218_string, var_219_int); // 0x50a Func
	return 0; // 0x50c Return
}


func_1032(var_98_bool, var_99_object)
{
	var_103_int = 0; var_104_int = 0; var_105_int = 0; var_106_int = 0; // 0x408 PushV
	var_107_string = "voice_common"; // 0x409 PushS
	GetVariable(var_107_string, var_105_int); // 0x40a Func
	var_108_int = var_105_int; // 0x40c Push
	if(var_108_int == 0) goto Label_1070; // 0x40d JumpB
	var_109_bool = 0; var_110_object = Obj(); // 0x40e PushV
	var_110_object = var_99_object; // 0x40f Mov
	func_1090(var_110_object); // 0x410 NEW_2
	var_139_bool = var_109_bool == 0; // 0x412 Not
	if(var_139_bool == 0) goto Label_1052; // 0x413 JumpB
	var_140_bool = 0; var_141_object = Obj(); // 0x414 PushV
	var_141_object = var_99_object; // 0x415 Mov
	func_1127(var_141_object); // 0x416 NEW_2
	var_175_bool = var_140_bool == 0; // 0x418 Not
	if(var_175_bool == 0) goto Label_1052; // 0x419 JumpB
	var_98_bool = 0; // 0x41a MovB
	return 4; // 0x41b Return
	
Label_1052:
	var_176_int = 2; // 0x41c PushI
	irand(var_106_int, var_176_int); // 0x41d Func
	var_177_int = var_106_int; // 0x41f Push
	if(var_177_int == 0) goto Label_1065; // 0x420 JumpB
	var_178_string = "voice_common"; // 0x421 PushS
	var_179_int = 1; // 0x422 PushI
	var_180_int = var_105_int + var_179_int; // 0x423 Add
	var_181_int = 3; // 0x424 PushI
	var_182_int = var_180_int / var_181_int; // 0x425 Mod
	SetVariable(var_178_string, var_182_int); // 0x426 Func
	goto Label_1069; // 0x428 Jump
	
Label_1069:
	goto Label_1088; // 0x42d Jump
	
Label_1088:
	var_98_bool = 1; // 0x440 MovB
	return 4; // 0x441 Return
	
Label_1065:
	var_183_string = "voice_common"; // 0x429 PushS
	var_184_int = 0; // 0x42a PushI
	SetVariable(var_183_string, var_184_int); // 0x42b Func
	
Label_1070:
	var_185_bool = 0; var_186_object = Obj(); // 0x42e PushV
	var_186_object = var_99_object; // 0x42f Mov
	func_1127(var_186_object); // 0x430 NEW_2
	var_187_bool = var_185_bool == 0; // 0x432 Not
	if(var_187_bool == 0) goto Label_1084; // 0x433 JumpB
	var_188_bool = 0; var_189_object = Obj(); // 0x434 PushV
	var_189_object = var_99_object; // 0x435 Mov
	func_1090(var_189_object); // 0x436 NEW_2
	var_190_bool = var_188_bool == 0; // 0x438 Not
	if(var_190_bool == 0) goto Label_1084; // 0x439 JumpB
	var_98_bool = 0; // 0x43a MovB
	return 4; // 0x43b Return
	
Label_1084:
	var_191_string = "voice_common"; // 0x43c PushS
	var_192_int = 1; // 0x43d PushI
	SetVariable(var_191_string, var_192_int); // 0x43e Func
}


func_906(var_45_bool)
{
	var_45_bool = 1; // 0x38a MovB
	return 0; // 0x38b Return
}


func_908()
{
	StopAnimation(); // 0x38c Func
	StopGroup0(); // 0x38e Func
	return 0; // 0x390 Return
}


func_1293(var_201_bool)
{
	var_203_int = 0; var_204_string = ""; // 0x50e PushV
	var_204_string = "b11q01VictimChoosed"; // 0x50f MovS
	func_1239(var_203_int, var_204_string); // 0x510 NEW_2
	var_207_int = 0; // 0x512 PushI
	var_208_bool = var_203_int != var_207_int; // 0x513 Neq
	if(var_208_bool == 0) goto Label_1303; // 0x514 JumpB
	var_201_bool = 1; // 0x515 MovB
	return 0; // 0x516 Return
	
Label_1303:
	var_201_bool = 0; // 0x517 MovB
	return 0; // 0x518 Return
}


func_783()
{
	StopGroup0(); // 0x30f Func
	func_726(); // 0x312 NEW_2
	var_8_string = ""; // 0x314 PushV
	var_8_string = "Neutral"; // 0x315 MovS
	func_1170(var_8_string); // 0x316 NEW_2
	func_717(); // 0x319 NEW_2
	return 0; // 0x31b Return
}


func_913(var_22_float)
{
	var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); // 0x391 PushV
	GetPosition(var_27_cvector); // 0x392 Func
	GetPosition(var_28_cvector); // 0x394 ObjFunc
	var_29_cvector = var_28_cvector - var_27_cvector; // 0x396 Sub2
	var_22_float = var_29_cvector | var_29_cvector; // 0x397 Or2
	return 6; // 0x398 Return
}


func_1170(var_261_string)
{
	var_262_bool = 0; var_263_float = 0; var_264_float = 0; var_265_bool = 0; var_266_float = 0; var_267_float = 0; // 0x492 PushV
	lshHasAnimation(var_265_bool, var_261_string); // 0x493 Func
	var_268_bool = var_265_bool; // 0x495 Push
	if(var_268_bool == 0) goto Label_1181; // 0x496 JumpB
	lshGetAnimTimes(var_261_string, var_266_float, var_267_float); // 0x497 Func
	var_269_bool = 0; // 0x499 PushB
	lshPlayAnimation(var_266_float, var_267_float, var_269_bool); // 0x49a Func
	goto Label_1185; // 0x49c Jump
	
Label_1185:
	return 6; // 0x4a1 Return
	
Label_1181:
	var_270_string = "Can't find lsh animation : "; // 0x49d PushS
	var_271_int = var_270_string + var_261_string; // 0x49e Add
	Trace(var_271_int); // 0x49f Func
}


func_661(var_0_object)
{
	var_7_bool = 0; // 0x295 PushV
	func_940(var_7_bool); // 0x296 NEW_2
	var_10_bool = var_7_bool == 0; // 0x298 Not
	if(var_10_bool == 0) goto Label_668; // 0x299 JumpB
	Hold(); // 0x29a Func
	
Label_668:
	GetDirection(var_0_object); // 0x29c Func
	
Label_670:
	func_837(); // 0x29f NEW_2
	goto Label_670; // 0x2a1 Jump
}


func_1305(var_210_bool)
{
	var_212_int = 0; var_213_string = ""; // 0x51a PushV
	var_213_string = "oob11KlaraD1"; // 0x51b MovS
	func_1239(var_212_int, var_213_string); // 0x51c NEW_2
	var_214_int = 0; // 0x51e PushI
	var_215_bool = var_212_int == var_214_int; // 0x51f Eq
	if(var_215_bool == 0) goto Label_1315; // 0x520 JumpB
	var_210_bool = 1; // 0x521 MovB
	return 0; // 0x522 Return
	
Label_1315:
	var_210_bool = 0; // 0x523 MovB
	return 0; // 0x524 Return
}


func_921(var_15_bool, var_16_cvector)
{
	var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_bool = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_bool = 0; // 0x399 PushV
	GetPosition(var_20_cvector); // 0x39a Func
	var_21_cvector = var_16_cvector - var_20_cvector; // 0x39c Sub2
	var_23_float = GetByIndex(var_21_cvector, 0); // 0x39d PushE
	var_24_float = GetByIndex(var_21_cvector, 2); // 0x39e PushE
	Rotate(var_23_float, var_24_float, var_22_bool); // 0x39f Func
	var_15_bool = var_22_bool; // 0x3a1 Mov
	return 6; // 0x3a2 Return
}


func_1186(var_224_string, var_225_bool)
{
	var_228_bool = 0; var_229_float = 0; var_230_float = 0; var_231_bool = 0; var_232_float = 0; var_233_float = 0; // 0x4a2 PushV
	lshHasAnimation(var_231_bool, var_224_string); // 0x4a3 Func
	var_234_bool = var_231_bool; // 0x4a5 Push
	if(var_234_bool == 0) goto Label_1196; // 0x4a6 JumpB
	lshGetAnimTimes(var_224_string, var_232_float, var_233_float); // 0x4a7 Func
	lshPlayAnimation(var_232_float, var_233_float, var_225_bool); // 0x4a9 Func
	goto Label_1200; // 0x4ab Jump
	
Label_1200:
	return 6; // 0x4b0 Return
	
Label_1196:
	var_235_string = "Can't find lsh animation : "; // 0x4ac PushS
	var_236_int = var_235_string + var_224_string; // 0x4ad Add
	Trace(var_236_int); // 0x4ae Func
}


func_931(var_11_bool)
{
	var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0); // 0x3a3 PushV
	GetPosition(var_14_cvector); // 0x3a4 ObjFunc
	var_15_bool = 0; var_16_cvector = CVector(0,0,0); // 0x3a6 PushV
	var_16_cvector = var_14_cvector; // 0x3a7 Mov
	func_921(var_15_bool, var_16_cvector); // 0x3a8 NEW_2
	var_11_bool = var_15_bool; // 0x3a9 Mov
	return 2; // 0x3ab Return
}


func_675(var_32_bool)
{
	var_33_object = Obj(); var_34_object = Obj(); // 0x2a3 PushV
	var_35_string = "player"; // 0x2a4 PushS
	FindActor(var_34_object, var_35_string); // 0x2a5 Func
	var_36_bool = var_34_object == 0; // 0x2a7 Not
	if(var_36_bool == 0) goto Label_683; // 0x2a8 JumpB
	var_32_bool = 0; // 0x2a9 MovB
	return 2; // 0x2aa Return
	
Label_683:
	var_37_bool = 0; var_38_object = Obj(); // 0x2ab PushV
	var_38_object = var_34_object; // 0x2ac Mov
	func_931(var_38_object); // 0x2ad NEW_2
	var_32_bool = var_37_bool; // 0x2ae Mov
	return 2; // 0x2b0 Return
}


func_1317(var_89_int)
{
	var_90_int = 0; var_91_int = 0; // 0x525 PushV
	var_92_string = "branch"; // 0x526 PushS
	GetVariable(var_92_string, var_91_int); // 0x527 Func
	var_93_int = 0; // 0x529 PushI
	var_94_bool = var_91_int == var_93_int; // 0x52a Eq
	if(var_94_bool == 0) goto Label_1327; // 0x52b JumpB
	var_89_int = 1; // 0x52c MovI
	return 2; // 0x52d Return
	
Label_1327:
	var_95_int = 1; // 0x52f PushI
	var_96_bool = var_91_int == var_95_int; // 0x530 Eq
	if(var_96_bool == 0) goto Label_1332; // 0x531 JumpB
	var_89_int = 2; // 0x532 MovI
	return 2; // 0x533 Return
	
Label_1332:
	var_89_int = 3; // 0x534 MovI
	return 2; // 0x535 Return
}


func_940(var_7_bool)
{
	var_8_bool = 0; var_9_bool = 0; // 0x3ac PushV
	IsLoaded(var_9_bool); // 0x3ad Func
	var_7_bool = var_9_bool; // 0x3af Mov
	return 2; // 0x3b0 Return
}


func_945(var_37_bool, var_39_float)
{
	var_40_float = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_bool = 0; var_48_bool = 0; var_49_float = 0; var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_bool = 0; var_57_bool = 0; // 0x3b1 PushV
	GetPosition(var_50_cvector); // 0x3b2 ObjFunc
	GetEyesHeight(var_49_float); // 0x3b4 ObjFunc
	var_58_float = GetByIndex(var_50_cvector, 1); // 0x3b6 PushE
	var_58_float = var_58_float + var_49_float; // 0x3b7 Add2
	SetByIndex(var_50_cvector, 1) = var_58_float; // 0x3b8 PopE
	GetPosition(var_51_cvector); // 0x3b9 Func
	GetEyesHeight(var_49_float); // 0x3bb Func
	var_59_float = GetByIndex(var_51_cvector, 1); // 0x3bd PushE
	var_59_float = var_59_float + var_49_float; // 0x3be Add2
	SetByIndex(var_51_cvector, 1) = var_59_float; // 0x3bf PopE
	var_52_cvector = var_50_cvector - var_51_cvector; // 0x3c0 Sub2
	var_60_float = GetByIndex(var_52_cvector, 1); // 0x3c1 PushE
	var_60_float = 0; // 0x3c2 MovI
	SetByIndex(var_52_cvector, 1) = var_60_float; // 0x3c3 PopE
	var_61_int = var_52_cvector | var_52_cvector; // 0x3c4 Or
	var_62_float = sqrt(var_61_int); // 0x3c5 Sqrt
	var_52_cvector = var_52_cvector / var_52_cvector; // 0x3c6 Div2
	var_53_cvector = -var_52_cvector; // 0x3c7 Neg2
	var_63_float = var_52_cvector * var_39_float; // 0x3c8 Mult
	var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); // 0x3c9 PushV
	var_66_cvector = CVector(0.0, 1.0, 0.0); // 0x3ca PushVec
	var_65_cvector = var_53_cvector ^ var_66_cvector; // 0x3cb Xor2
	func_1229(var_64_cvector, var_65_cvector); // 0x3cc NEW_2
	var_72_int = 25; // 0x3ce PushI
	var_73_float = var_64_cvector * var_72_int; // 0x3cf Mult
	var_74_int = var_63_float + var_73_float; // 0x3d0 Add
	var_75_cvector = CVector(0.0, 10.0, 0.0); // 0x3d1 PushVec
	var_54_cvector = var_74_int - var_75_cvector; // 0x3d2 Sub2
	var_55_cvector = var_51_cvector + var_54_cvector; // 0x3d3 Add2
	IsOverrideActive(var_56_bool); // 0x3d4 Func
	var_76_bool = var_56_bool; // 0x3d6 Push
	if(var_76_bool == 0) goto Label_986; // 0x3d7 JumpB
	var_37_bool = 0; // 0x3d8 MovB
	return 18; // 0x3d9 Return
	
Label_986:
	StopWorld(); // 0x3da Func
	var_77_bool = 1; // 0x3dc PushB
	CameraTransit(var_55_cvector, var_53_cvector, var_77_bool); // 0x3dd Func
	var_78_float = GetByIndex(var_54_cvector, 0); // 0x3df PushE
	var_79_float = GetByIndex(var_54_cvector, 2); // 0x3e0 PushE
	Rotate(var_78_float, var_79_float); // 0x3e1 Func
	var_80_bool = 0; // 0x3e3 PushV
	func_1285(var_80_bool); // 0x3e4 NEW_2
	if(var_80_bool == 0) goto Label_1000; // 0x3e6 JumpB
	goto Label_1008; // 0x3e7 Jump
	
Label_1008:
	CameraWaitForPlayFinish(); // 0x3f0 Func
	ResumeWorld(); // 0x3f2 Func
	var_37_bool = 1; // 0x3f4 MovB
	return 18; // 0x3f5 Return
	
Label_1000:
	var_81_string = "head"; // 0x3e8 PushS
	HasAnimationTrack(var_57_bool, var_81_string); // 0x3e9 Func
	var_82_bool = var_57_bool; // 0x3eb Push
	if(var_82_bool == 0) goto Label_1008; // 0x3ec JumpB
	var_83_string = "head"; // 0x3ed PushS
	LookAsyncCamera(var_83_string); // 0x3ee Func
}


func_690(var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0); // 0x2b2 PushE
	var_85_float = GetByIndex(var_0_object, 2); // 0x2b3 PushE
	RotateAsync(var_84_float, var_85_float); // 0x2b4 Func
	return 0; // 0x2b6 Return
}


func_1201(var_132_bool, var_133_string)
{
	var_134_bool = 0; var_135_bool = 0; // 0x4b1 PushV
	var_136_bool = 0; // 0x4b2 PushV
	func_1285(var_136_bool); // 0x4b3 NEW_2
	if(var_136_bool == 0) goto Label_1214; // 0x4b5 JumpB
	lshHasSpeech(var_135_bool, var_133_string); // 0x4b6 Func
	var_137_bool = var_135_bool; // 0x4b8 Push
	if(var_137_bool == 0) goto Label_1214; // 0x4b9 JumpB
	lshPlaySpeech(var_133_string); // 0x4ba Func
	var_132_bool = 1; // 0x4bc MovB
	return 2; // 0x4bd Return
	
Label_1214:
	var_132_bool = 0; // 0x4be MovB
	return 2; // 0x4bf Return
}


func_695(var_15_bool)
{
	var_16_object = Obj(); var_17_bool = 0; var_18_object = Obj(); var_19_bool = 0; // 0x2b7 PushV
	var_20_string = "player"; // 0x2b8 PushS
	FindActor(var_18_object, var_20_string); // 0x2b9 Func
	var_21_bool = var_18_object == 0; // 0x2bb Not
	if(var_21_bool == 0) goto Label_703; // 0x2bc JumpB
	var_15_bool = 0; // 0x2bd MovB
	return 4; // 0x2be Return
	
Label_703:
	var_22_float = 0; var_23_object = Obj(); // 0x2bf PushV
	var_23_object = var_18_object; // 0x2c0 Mov
	func_913(var_23_object); // 0x2c1 NEW_2
	var_30_float = 90000.0; // 0x2c3 PushF
	var_31_bool = var_22_float > var_30_float; // 0x2c4 GT
	if(var_31_bool == 0) goto Label_712; // 0x2c5 JumpB
	var_15_bool = 0; // 0x2c6 MovB
	return 4; // 0x2c7 Return
	
Label_712:
	CanSee(var_19_bool, var_18_object); // 0x2c8 Func
	var_15_bool = var_19_bool; // 0x2ca Mov
	return 4; // 0x2cb Return
}


func_1216()
{
	var_10_bool = 0; // 0x4c0 PushV
	func_1285(var_10_bool); // 0x4c1 NEW_2
	if(var_10_bool == 0) goto Label_1222; // 0x4c3 JumpB
	lshStopSpeech(); // 0x4c4 Func
	
Label_1222:
	return 0; // 0x4c6 Return
}


func_1090(var_109_bool)
{
	var_111_string = ""; var_112_int = 0; var_113_bool = 0; var_114_int = 0; var_115_string = ""; var_116_string = ""; var_117_int = 0; var_118_bool = 0; var_119_int = 0; var_120_string = ""; // 0x442 PushV
	var_116_string = "c"; // 0x443 MovS
	var_117_int = 0; // 0x444 MovI
	
Label_1093:
	var_121_int = 1; // 0x445 PushI
	if(var_121_int == 0) goto Label_1106; // 0x446 JumpB
	var_122_int = 1; // 0x447 PushI
	var_123_int = var_117_int + var_122_int; // 0x448 Add
	var_124_int = var_116_string + var_123_int; // 0x449 Add
	HasProperty(var_124_int, var_118_bool); // 0x44a ObjFunc
	var_125_bool = var_118_bool == 0; // 0x44c Not
	if(var_125_bool == 0) goto Label_1103; // 0x44d JumpB
	goto Label_1106; // 0x44e Jump
	
Label_1106:
	var_126_bool = var_117_int == 0; // 0x452 Not
	if(var_126_bool == 0) goto Label_1110; // 0x453 JumpB
	var_109_bool = 0; // 0x454 MovB
	return 10; // 0x455 Return
	
Label_1110:
	var_119_int = 0; // 0x456 MovI
	var_127_int = 1; // 0x457 PushI
	var_128_bool = var_117_int > var_127_int; // 0x458 GT
	if(var_128_bool == 0) goto Label_1116; // 0x459 JumpB
	irand(var_119_int, var_117_int); // 0x45a Func
	
Label_1116:
	var_129_int = 1; // 0x45c PushI
	var_130_int = var_119_int + var_129_int; // 0x45d Add
	var_131_int = var_116_string + var_130_int; // 0x45e Add
	GetProperty(var_131_int, var_120_string); // 0x45f ObjFunc
	var_132_bool = 0; var_133_string = ""; // 0x461 PushV
	var_133_string = var_120_string; // 0x462 Mov
	func_1201(var_132_bool, var_133_string); // 0x463 NEW_2
	var_109_bool = var_132_bool; // 0x464 Mov
	return 10; // 0x466 Return
	
Label_1103:
	var_138_int = 1; // 0x44f PushI
	var_117_int = var_117_int + var_138_int; // 0x450 Add2
	goto Label_1093; // 0x451 Jump
}


func_837()
{
	var_11_int = 0; var_12_int = 0; var_13_bool = 0; var_14_int = 0; var_15_int = 0; var_16_bool = 0; var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_int = 0; var_21_int = 0; var_22_bool = 0; // 0x345 PushV
	WaitForAnimEnd(); // 0x346 Func
	var_23_bool = 0; // 0x348 PushV
	func_940(var_23_bool); // 0x349 NEW_2
	var_24_bool = var_23_bool == 0; // 0x34b Not
	if(var_24_bool == 0) goto Label_846; // 0x34c JumpB
	return 12; // 0x34d Return
	
Label_846:
	var_25_int = 0; // 0x34e PushV
	func_1260(var_25_int); // 0x34f NEW_2
	var_17_int = var_25_int; // 0x350 Mov
	var_18_int = 0; // 0x352 MovI
	
Label_851:
	var_38_bool = 0; // 0x353 PushV
	var_38_bool = 0; // 0x354 MovB
	var_39_int = 5; // 0x355 PushI
	var_40_bool = var_18_int < var_39_int; // 0x356 LT
	if(var_40_bool == 0) goto Label_861; // 0x357 JumpB
	var_41_bool = 0; // 0x358 PushV
	func_940(var_41_bool); // 0x359 NEW_2
	if(var_41_bool == 0) goto Label_861; // 0x35b JumpB
	var_38_bool = 1; // 0x35c MovB
	
Label_861:
	if(var_38_bool == 0) goto Label_903; // 0x35d JumpB
	var_42_bool = var_17_int == 0; // 0x35e Not
	if(var_42_bool == 0) goto Label_871; // 0x35f JumpB
	var_43_int = 3; // 0x360 PushI
	Sleep(var_43_int, var_19_bool); // 0x361 Func
	var_44_bool = var_19_bool == 0; // 0x363 Not
	if(var_44_bool == 0) goto Label_870; // 0x364 JumpB
	goto Label_903; // 0x365 Jump
	
Label_903:
	ResetAAS(); // 0x387 Func
	return 12; // 0x389 Return
	
Label_870:
	goto Label_892; // 0x366 Jump
	
Label_892:
	var_45_bool = 0; // 0x37c PushV
	func_906(var_45_bool); // 0x37d NEW_2
	var_46_bool = var_45_bool == 0; // 0x37f Not
	if(var_46_bool == 0) goto Label_898; // 0x380 JumpB
	goto Label_903; // 0x381 Jump
	
Label_898:
	ResetAAS(); // 0x382 Func
	var_47_int = 1; // 0x384 PushI
	var_18_int = var_18_int + var_47_int; // 0x385 Add2
	goto Label_851; // 0x386 Jump
	
Label_871:
	irand(var_20_int, var_17_int); // 0x367 Func
	var_48_int = 5; // 0x369 PushI
	irand(var_21_int, var_48_int); // 0x36a Func
	var_49_int = 0; // 0x36c PushI
	var_50_bool = var_21_int != var_49_int; // 0x36d Neq
	if(var_50_bool == 0) goto Label_880; // 0x36e JumpB
	var_20_int = 0; // 0x36f MovI
	
Label_880:
	var_51_string = "all"; // 0x370 PushS
	var_52_string = ""; var_53_int = 0; // 0x371 PushV
	var_53_int = var_20_int; // 0x372 Mov
	func_1253(var_52_string, var_53_int); // 0x373 NEW_2
	PlayAnimation(var_51_string, var_52_string); // 0x375 Func
	WaitForAnimEnd(var_22_bool); // 0x377 Func
	var_54_bool = var_22_bool == 0; // 0x379 Not
	if(var_54_bool == 0) goto Label_892; // 0x37a JumpB
	goto Label_903; // 0x37b Jump
}


func_1223(var_100_object)
{
	var_101_object = Obj(); var_102_object = Obj(); // 0x4c7 PushV
	self(var_102_object); // 0x4c8 Func
	var_100_object = var_102_object; // 0x4ca Mov
	return 2; // 0x4cb Return
}


func_204(var_2_object, var_220_string)
{
	var_221_bool = 0; // 0xcd PushV
	func_1285(var_221_bool); // 0xce NEW_2
	var_222_bool = var_221_bool == 0; // 0xd0 Not
	if(var_222_bool == 0) goto Label_211; // 0xd1 JumpB
	return 0; // 0xd2 Return
	
Label_211:
	var_223_bool = var_220_string == var_2_object; // 0xd3 Eq
	if(var_223_bool == 0) goto Label_214; // 0xd4 JumpB
	return 0; // 0xd5 Return
	
Label_214:
	var_224_string = ""; var_225_bool = 0; // 0xd6 PushV
	var_224_string = var_220_string; // 0xd7 Mov
	var_226_string = ""; // 0xd8 PushS
	var_227_bool = var_220_string == var_226_string; // 0xd9 Eq
	if(var_227_bool == 0) goto Label_221; // 0xda JumpB
	var_225_bool = 0; // 0xdb MovB
	goto Label_222; // 0xdc Jump
	
Label_222:
	func_1186(var_224_string, var_225_bool); // 0xde NEW_2
	var_2_object = var_220_string; // 0xe0 TMov
	return 0; // 0xe1 Return
	
Label_221:
	var_225_bool = 1; // 0xdd MovB
}


func_717()
{
	var_296_float = 0; var_297_float = 0; // 0x2cd PushV
	var_298_int = 8; // 0x2ce PushI
	var_299_int = 16; // 0x2cf PushI
	rand(var_297_float, var_298_int, var_299_int); // 0x2d0 Func
	var_300_int = 10; // 0x2d2 PushI
	SetTimer(var_300_int, var_297_float); // 0x2d3 Func
	return 2; // 0x2d5 Return
}


func_1229(var_64_cvector, var_65_cvector)
{
	var_67_float = 0; var_68_float = 0; // 0x4cd PushV
	var_69_int = var_65_cvector | var_65_cvector; // 0x4ce Or
	var_68_float = sqrt(var_69_int); // 0x4cf Sqrt2
	var_70_float = 0.0; // 0x4d0 PushF
	var_71_bool = var_68_float < var_70_float; // 0x4d1 LT
	if(var_71_bool == 0) goto Label_1237; // 0x4d2 JumpB
	var_64_cvector = CVector(0.0, 0.0, 0.0); // 0x4d3 MovV
	return 2; // 0x4d4 Return
	
Label_1237:
	var_64_cvector = var_65_cvector / var_65_cvector; // 0x4d5 Div2
	return 2; // 0x4d6 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_193_object, var_194_object)
{
	var_0_object = var_194_object; // 0x52 TMov
	var_1_object = var_193_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_199_int = 1; // 0x55 PushI
	if(var_199_int == 0) goto Label_174; // 0x56 JumpB
	var_200_bool = 0; // 0x57 PushV
	var_200_bool = 0; // 0x58 MovB
	var_201_bool = 0; var_202_object = Obj(); // 0x59 PushV
	var_202_object = var_1_object; // 0x5a MovT
	func_1293(var_202_object); // 0x5b NEW_2
	var_209_bool = var_201_bool == 0; // 0x5d Not
	if(var_209_bool == 0) goto Label_101; // 0x5e JumpB
	var_210_bool = 0; var_211_object = Obj(); // 0x5f PushV
	var_211_object = var_1_object; // 0x60 MovT
	func_1305(var_211_object); // 0x61 NEW_2
	if(var_210_bool == 0) goto Label_101; // 0x63 JumpB
	var_200_bool = 1; // 0x64 MovB
	
Label_101:
	if(var_200_bool == 0) goto Label_152; // 0x65 JumpB
	var_216_object = Obj(); var_217_object = Obj(); // 0x66 PushV
	var_216_object = var_1_object; // 0x67 MovT
	var_217_object = var_0_object; // 0x68 MovT
	func_1287(); // 0x69 NEW_2
	var_220_string = ""; // 0x6b PushV
	var_220_string = "Neutral"; // 0x6c MovS
	func_204(var_194_object, var_220_string); // 0x6d NEW_2
	var_237_int = 522009; // 0x6f PushI
	SetMessage(var_237_int); // 0x70 TObjFunc
	ClearReplies(); // 0x72 TObjFunc
	var_238_int = 523279; // 0x74 PushI
	var_239_int = 24484; // 0x75 PushI
	var_240_int = 24483; // 0x76 PushI
	AddReply(var_238_int, var_239_int, var_240_int); // 0x77 TObjFunc
	var_241_int = 522010; // 0x79 PushI
	var_242_int = 24503; // 0x7a PushI
	var_243_int = 23180; // 0x7b PushI
	AddReply(var_241_int, var_242_int, var_243_int); // 0x7c TObjFunc
	var_244_int = 523284; // 0x7e PushI
	var_245_int = 24490; // 0x7f PushI
	var_246_int = 24489; // 0x80 PushI
	AddReply(var_244_int, var_245_int, var_246_int); // 0x81 TObjFunc
	var_247_int = 523286; // 0x83 PushI
	var_248_int = 24492; // 0x84 PushI
	var_249_int = 24491; // 0x85 PushI
	AddReply(var_247_int, var_248_int, var_249_int); // 0x86 TObjFunc
	var_250_int = 523305; // 0x88 PushI
	var_251_int = 24514; // 0x89 PushI
	var_252_int = 24513; // 0x8a PushI
	AddReply(var_250_int, var_251_int, var_252_int); // 0x8b TObjFunc
	var_253_int = 523278; // 0x8d PushI
	var_254_int = 24486; // 0x8e PushI
	var_255_int = 24482; // 0x8f PushI
	AddReply(var_253_int, var_254_int, var_255_int); // 0x90 TObjFunc
	var_256_int = 523304; // 0x92 PushI
	var_257_int = -1; // 0x93 PushI
	var_258_int = 24512; // 0x94 PushI
	AddReply(var_256_int, var_257_int, var_258_int); // 0x95 TObjFunc
	goto Label_174; // 0x97 Jump
	
Label_174:
	var_259_bool = 0; // 0xae PushV
	func_1285(var_259_bool); // 0xaf NEW_2
	if(var_259_bool == 0) goto Label_189; // 0xb1 JumpB
	
Label_178:
	lshWaitForAnimEnd(); // 0xb2 Func
	var_260_string = var_3_string; // 0xb4 PushT
	if(var_260_string == 0) goto Label_183; // 0xb5 JumpB
	goto Label_188; // 0xb6 Jump
	
Label_188:
	goto Label_203; // 0xbc Jump
	
Label_203:
	return 0; // 0xcb Return
	
Label_183:
	var_261_string = ""; // 0xb7 PushV
	var_261_string = var_2_object; // 0xb8 MovT
	func_1170(var_261_string); // 0xb9 NEW_2
	goto Label_178; // 0xbb Jump
	
Label_189:
	var_272_string = "all"; // 0xbd PushS
	var_273_string = "idle"; // 0xbe PushS
	PlayAnimation(var_272_string, var_273_string); // 0xbf Func
	
Label_193:
	WaitForAnimEnd(); // 0xc1 Func
	var_274_string = var_3_string; // 0xc3 PushT
	if(var_274_string == 0) goto Label_198; // 0xc4 JumpB
	goto Label_203; // 0xc5 Jump
	
Label_198:
	var_275_string = "all"; // 0xc6 PushS
	var_276_string = "idle"; // 0xc7 PushS
	PlayAnimation(var_275_string, var_276_string); // 0xc8 Func
	goto Label_193; // 0xca Jump
	
Label_152:
	var_277_string = ""; // 0x98 PushV
	var_277_string = "Fear"; // 0x99 MovS
	func_204(var_194_object, var_277_string); // 0x9a NEW_2
	var_278_int = 522096; // 0x9c PushI
	SetMessage(var_278_int); // 0x9d TObjFunc
	ClearReplies(); // 0x9f TObjFunc
	var_279_int = 522097; // 0xa1 PushI
	var_280_int = -1; // 0xa2 PushI
	var_281_int = 23266; // 0xa3 PushI
	AddReply(var_279_int, var_280_int, var_281_int); // 0xa4 TObjFunc
	var_282_int = 523318; // 0xa6 PushI
	var_283_int = 24533; // 0xa7 PushI
	var_284_int = 24532; // 0xa8 PushI
	AddReply(var_282_int, var_283_int, var_284_int); // 0xa9 TObjFunc
	goto Label_174; // 0xab Jump
}


func_726()
{
	var_295_int = 10; // 0x2d6 PushI
	KillTimer(var_295_int); // 0x2d7 Func
	return 0; // 0x2d9 Return
}


func_1239(var_203_int, var_204_string)
{
	var_205_int = 0; var_206_int = 0; // 0x4d7 PushV
	GetVariable(var_204_string, var_206_int); // 0x4d8 Func
	var_203_int = var_206_int; // 0x4da Mov
	return 2; // 0x4db Return
}


func_1244(var_153_int)
{
	var_154_float = 0; var_155_float = 0; // 0x4dc PushV
	GetGameTime(var_155_float); // 0x4dd Func
	var_156_int = 1; // 0x4df PushI
	var_157_int = 0; // 0x4e0 PushV
	var_158_int = 24; // 0x4e1 PushI
	var_157_int = var_155_float / var_155_float; // 0x4e2 Div2
	var_153_int = var_156_int + var_157_int; // 0x4e3 Add2
	return 2; // 0x4e4 Return
}


func_612(var_25_object)
{
	var_26_int = 0; var_27_object = Obj(); // 0x265 PushV
	var_27_object = var_25_object; // 0x266 Mov
	TaskCall(0); // 0x267 TaskCall
	func_0(var_28_object, var_26_int, var_27_object); // 0x268 NEW_2
	TaskReturn(); // 0x269 TaskReturn
	return 0; // 0x26b Return
}


func_1253(var_31_string, var_32_int)
{
	var_33_string = ""; var_34_string = ""; // 0x4e5 PushV
	var_34_string = "idle"; // 0x4e6 MovS
	var_35_int = var_32_int; // 0x4e7 Push
	if(var_35_int == 0) goto Label_1258; // 0x4e8 JumpB
	var_34_string = var_34_string + var_32_int; // 0x4e9 Add2
	
Label_1258:
	var_31_string = var_34_string; // 0x4ea Mov
	return 2; // 0x4eb Return
}


func_1127(var_140_bool)
{
	var_142_string = ""; var_143_int = 0; var_144_bool = 0; var_145_int = 0; var_146_string = ""; var_147_string = ""; var_148_int = 0; var_149_bool = 0; var_150_int = 0; var_151_string = ""; // 0x467 PushV
	var_152_string = "d"; // 0x468 PushS
	var_153_int = 0; // 0x469 PushV
	func_1244(var_153_int); // 0x46a NEW_2
	var_159_int = var_152_string + var_153_int; // 0x46c Add
	var_160_string = "m"; // 0x46d PushS
	var_147_string = var_159_int + var_160_string; // 0x46e Add2
	var_148_int = 0; // 0x46f MovI
	
Label_1136:
	var_161_int = 1; // 0x470 PushI
	if(var_161_int == 0) goto Label_1149; // 0x471 JumpB
	var_162_int = 1; // 0x472 PushI
	var_163_int = var_148_int + var_162_int; // 0x473 Add
	var_164_int = var_147_string + var_163_int; // 0x474 Add
	HasProperty(var_164_int, var_149_bool); // 0x475 ObjFunc
	var_165_bool = var_149_bool == 0; // 0x477 Not
	if(var_165_bool == 0) goto Label_1146; // 0x478 JumpB
	goto Label_1149; // 0x479 Jump
	
Label_1149:
	var_166_bool = var_148_int == 0; // 0x47d Not
	if(var_166_bool == 0) goto Label_1153; // 0x47e JumpB
	var_140_bool = 0; // 0x47f MovB
	return 10; // 0x480 Return
	
Label_1153:
	var_150_int = 0; // 0x481 MovI
	var_167_int = 1; // 0x482 PushI
	var_168_bool = var_148_int > var_167_int; // 0x483 GT
	if(var_168_bool == 0) goto Label_1159; // 0x484 JumpB
	irand(var_150_int, var_148_int); // 0x485 Func
	
Label_1159:
	var_169_int = 1; // 0x487 PushI
	var_170_int = var_150_int + var_169_int; // 0x488 Add
	var_171_int = var_147_string + var_170_int; // 0x489 Add
	GetProperty(var_171_int, var_151_string); // 0x48a ObjFunc
	var_172_bool = 0; var_173_string = ""; // 0x48c PushV
	var_173_string = var_151_string; // 0x48d Mov
	func_1201(var_172_bool, var_173_string); // 0x48e NEW_2
	var_140_bool = var_172_bool; // 0x48f Mov
	return 10; // 0x491 Return
	
Label_1146:
	var_174_int = 1; // 0x47a PushI
	var_148_int = var_148_int + var_174_int; // 0x47b Add2
	goto Label_1136; // 0x47c Jump
}


func_1260(var_25_int)
{
	var_26_int = 0; var_27_bool = 0; var_28_int = 0; var_29_bool = 0; // 0x4ec PushV
	var_28_int = 0; // 0x4ed MovI
	
Label_1262:
	var_30_string = "all"; // 0x4ee PushS
	var_31_string = ""; var_32_int = 0; // 0x4ef PushV
	var_32_int = var_28_int; // 0x4f0 Mov
	func_1253(var_31_string, var_32_int); // 0x4f1 NEW_2
	HasAnimation(var_29_bool, var_30_string, var_31_string); // 0x4f3 Func
	var_36_bool = var_29_bool == 0; // 0x4f5 Not
	if(var_36_bool == 0) goto Label_1272; // 0x4f6 JumpB
	goto Label_1275; // 0x4f7 Jump
	
Label_1275:
	var_25_int = var_28_int; // 0x4fb Mov
	return 4; // 0x4fc Return
	
Label_1272:
	var_37_int = 1; // 0x4f8 PushI
	var_28_int = var_28_int + var_37_int; // 0x4f9 Add2
	goto Label_1262; // 0x4fa Jump
}


func_1014()
{
	var_287_bool = 0; var_288_bool = 0; // 0x3f6 PushV
	var_289_bool = 1; // 0x3f7 PushB
	CameraSwitchToNormal(var_289_bool); // 0x3f8 Func
	var_290_bool = 0; // 0x3fa PushV
	func_1285(var_290_bool); // 0x3fb NEW_2
	if(var_290_bool == 0) goto Label_1023; // 0x3fd JumpB
	goto Label_1031; // 0x3fe Jump
	
Label_1031:
	return 2; // 0x407 Return
	
Label_1023:
	var_291_string = "head"; // 0x3ff PushS
	HasAnimationTrack(var_288_bool, var_291_string); // 0x400 Func
	var_292_bool = var_288_bool; // 0x402 Push
	if(var_292_bool == 0) goto Label_1031; // 0x403 JumpB
	var_293_string = "head"; // 0x404 PushS
	UnlookAsync(var_293_string); // 0x405 Func
}


func_1277(var_86_int)
{
	var_86_int = 515540; // 0x4fd MovI
	return 0; // 0x4fe Return
}


func_1279(var_85_int)
{
	var_85_int = 502865; // 0x4ff MovI
	return 0; // 0x500 Return
}


