task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	var_8_int = 1; // 0xbb PushI
	if(var_8_int == 0) goto Label_552; // 0xbc JumpB
	func_886(); // 0xbe NEW_2
	var_10_int = 43835; // 0xc0 PushI
	var_11_bool = var_7_bool == var_10_int; // 0xc1 Eq
	if(var_11_bool == 0) goto Label_200; // 0xc2 JumpB
	var_12_object = Obj(); var_13_object = Obj(); // 0xc3 PushV
	var_12_object = var_1_object; // 0xc4 MovT
	var_13_object = var_0_object; // 0xc5 MovT
	func_923(); // 0xc6 NEW_2
	
Label_200:
	var_16_int = 43839; // 0xc8 PushI
	var_17_bool = var_7_bool == var_16_int; // 0xc9 Eq
	if(var_17_bool == 0) goto Label_208; // 0xca JumpB
	var_18_object = Obj(); var_19_object = Obj(); // 0xcb PushV
	var_18_object = var_1_object; // 0xcc MovT
	var_19_object = var_0_object; // 0xcd MovT
	func_923(); // 0xce NEW_2
	
Label_208:
	var_20_int = 43844; // 0xd0 PushI
	var_21_bool = var_7_bool == var_20_int; // 0xd1 Eq
	if(var_21_bool == 0) goto Label_216; // 0xd2 JumpB
	var_22_object = Obj(); var_23_object = Obj(); // 0xd3 PushV
	var_22_object = var_1_object; // 0xd4 MovT
	var_23_object = var_0_object; // 0xd5 MovT
	func_923(); // 0xd6 NEW_2
	
Label_216:
	var_24_int = 43834; // 0xd8 PushI
	var_25_bool = var_6_int == var_24_int; // 0xd9 Eq
	if(var_25_bool == 0) goto Label_264; // 0xda JumpB
	var_26_string = ""; // 0xdb PushV
	var_26_string = "Sexy"; // 0xdc MovS
	func_164(var_7_bool, var_26_string); // 0xdd NEW_2
	var_43_int = 541659; // 0xdf PushI
	SetMessage(var_43_int); // 0xe0 TObjFunc
	ClearReplies(); // 0xe2 TObjFunc
	var_44_bool = 0; var_45_object = Obj(); // 0xe4 PushV
	var_45_object = var_1_object; // 0xe5 MovT
	func_929(var_45_object); // 0xe6 NEW_2
	if(var_44_bool == 0) goto Label_238; // 0xe8 JumpB
	var_52_int = 541660; // 0xe9 PushI
	var_53_int = 43852; // 0xea PushI
	var_54_int = 43835; // 0xeb PushI
	AddReply(var_52_int, var_53_int, var_54_int); // 0xec TObjFunc
	
Label_238:
	var_55_bool = 0; var_56_object = Obj(); // 0xee PushV
	var_56_object = var_1_object; // 0xef MovT
	func_929(var_56_object); // 0xf0 NEW_2
	if(var_55_bool == 0) goto Label_248; // 0xf2 JumpB
	var_57_int = 541664; // 0xf3 PushI
	var_58_int = 43840; // 0xf4 PushI
	var_59_int = 43839; // 0xf5 PushI
	AddReply(var_57_int, var_58_int, var_59_int); // 0xf6 TObjFunc
	
Label_248:
	var_60_bool = 0; var_61_object = Obj(); // 0xf8 PushV
	var_61_object = var_1_object; // 0xf9 MovT
	func_929(var_61_object); // 0xfa NEW_2
	if(var_60_bool == 0) goto Label_258; // 0xfc JumpB
	var_62_int = 541668; // 0xfd PushI
	var_63_int = 43845; // 0xfe PushI
	var_64_int = 43844; // 0xff PushI
	AddReply(var_62_int, var_63_int, var_64_int); // 0x100 TObjFunc
	
Label_258:
	var_65_int = 541661; // 0x102 PushI
	var_66_int = -1; // 0x103 PushI
	var_67_int = 43836; // 0x104 PushI
	AddReply(var_65_int, var_66_int, var_67_int); // 0x105 TObjFunc
	return 0; // 0x107 Return
	
Label_264:
	var_68_int = 43845; // 0x108 PushI
	var_69_bool = var_6_int == var_68_int; // 0x109 Eq
	if(var_69_bool == 0) goto Label_287; // 0x10a JumpB
	var_70_string = ""; // 0x10b PushV
	var_70_string = "Love"; // 0x10c MovS
	func_164(var_7_bool, var_70_string); // 0x10d NEW_2
	var_71_int = 541669; // 0x10f PushI
	SetMessage(var_71_int); // 0x110 TObjFunc
	ClearReplies(); // 0x112 TObjFunc
	var_72_int = 541670; // 0x114 PushI
	var_73_int = 43840; // 0x115 PushI
	var_74_int = 43846; // 0x116 PushI
	AddReply(var_72_int, var_73_int, var_74_int); // 0x117 TObjFunc
	var_75_int = 541682; // 0x119 PushI
	var_76_int = 43860; // 0x11a PushI
	var_77_int = 43859; // 0x11b PushI
	AddReply(var_75_int, var_76_int, var_77_int); // 0x11c TObjFunc
	return 0; // 0x11e Return
	
Label_287:
	var_78_int = 43860; // 0x11f PushI
	var_79_bool = var_6_int == var_78_int; // 0x120 Eq
	if(var_79_bool == 0) goto Label_310; // 0x121 JumpB
	var_80_string = ""; // 0x122 PushV
	var_80_string = "Love"; // 0x123 MovS
	func_164(var_7_bool, var_80_string); // 0x124 NEW_2
	var_81_int = 541683; // 0x126 PushI
	SetMessage(var_81_int); // 0x127 TObjFunc
	ClearReplies(); // 0x129 TObjFunc
	var_82_int = 541684; // 0x12b PushI
	var_83_int = 43863; // 0x12c PushI
	var_84_int = 43861; // 0x12d PushI
	AddReply(var_82_int, var_83_int, var_84_int); // 0x12e TObjFunc
	var_85_int = 541685; // 0x130 PushI
	var_86_int = -1; // 0x131 PushI
	var_87_int = 43862; // 0x132 PushI
	AddReply(var_85_int, var_86_int, var_87_int); // 0x133 TObjFunc
	return 0; // 0x135 Return
	
Label_310:
	var_88_int = 43863; // 0x136 PushI
	var_89_bool = var_6_int == var_88_int; // 0x137 Eq
	if(var_89_bool == 0) goto Label_333; // 0x138 JumpB
	var_90_string = ""; // 0x139 PushV
	var_90_string = "Neutral"; // 0x13a MovS
	func_164(var_7_bool, var_90_string); // 0x13b NEW_2
	var_91_int = 541686; // 0x13d PushI
	SetMessage(var_91_int); // 0x13e TObjFunc
	ClearReplies(); // 0x140 TObjFunc
	var_92_int = 541687; // 0x142 PushI
	var_93_int = -1; // 0x143 PushI
	var_94_int = 43864; // 0x144 PushI
	AddReply(var_92_int, var_93_int, var_94_int); // 0x145 TObjFunc
	var_95_int = 541688; // 0x147 PushI
	var_96_int = -1; // 0x148 PushI
	var_97_int = 43865; // 0x149 PushI
	AddReply(var_95_int, var_96_int, var_97_int); // 0x14a TObjFunc
	return 0; // 0x14c Return
	
Label_333:
	var_98_int = 43840; // 0x14d PushI
	var_99_bool = var_6_int == var_98_int; // 0x14e Eq
	if(var_99_bool == 0) goto Label_356; // 0x14f JumpB
	var_100_string = ""; // 0x150 PushV
	var_100_string = "Sexy"; // 0x151 MovS
	func_164(var_7_bool, var_100_string); // 0x152 NEW_2
	var_101_int = 541665; // 0x154 PushI
	SetMessage(var_101_int); // 0x155 TObjFunc
	ClearReplies(); // 0x157 TObjFunc
	var_102_int = 541666; // 0x159 PushI
	var_103_int = 43852; // 0x15a PushI
	var_104_int = 43841; // 0x15b PushI
	AddReply(var_102_int, var_103_int, var_104_int); // 0x15c TObjFunc
	var_105_int = 541667; // 0x15e PushI
	var_106_int = 43851; // 0x15f PushI
	var_107_int = 43842; // 0x160 PushI
	AddReply(var_105_int, var_106_int, var_107_int); // 0x161 TObjFunc
	return 0; // 0x163 Return
	
Label_356:
	var_108_int = 43851; // 0x164 PushI
	var_109_bool = var_6_int == var_108_int; // 0x165 Eq
	if(var_109_bool == 0) goto Label_379; // 0x166 JumpB
	var_110_string = ""; // 0x167 PushV
	var_110_string = "Fear"; // 0x168 MovS
	func_164(var_7_bool, var_110_string); // 0x169 NEW_2
	var_111_int = 541675; // 0x16b PushI
	SetMessage(var_111_int); // 0x16c TObjFunc
	ClearReplies(); // 0x16e TObjFunc
	var_112_int = 541680; // 0x170 PushI
	var_113_int = 43838; // 0x171 PushI
	var_114_int = 43856; // 0x172 PushI
	AddReply(var_112_int, var_113_int, var_114_int); // 0x173 TObjFunc
	var_115_int = 541681; // 0x175 PushI
	var_116_int = -1; // 0x176 PushI
	var_117_int = 43857; // 0x177 PushI
	AddReply(var_115_int, var_116_int, var_117_int); // 0x178 TObjFunc
	return 0; // 0x17a Return
	
Label_379:
	var_118_int = 43852; // 0x17b PushI
	var_119_bool = var_6_int == var_118_int; // 0x17c Eq
	if(var_119_bool == 0) goto Label_402; // 0x17d JumpB
	var_120_string = ""; // 0x17e PushV
	var_120_string = "Sexy"; // 0x17f MovS
	func_164(var_7_bool, var_120_string); // 0x180 NEW_2
	var_121_int = 541676; // 0x182 PushI
	SetMessage(var_121_int); // 0x183 TObjFunc
	ClearReplies(); // 0x185 TObjFunc
	var_122_int = 541677; // 0x187 PushI
	var_123_int = 43854; // 0x188 PushI
	var_124_int = 43853; // 0x189 PushI
	AddReply(var_122_int, var_123_int, var_124_int); // 0x18a TObjFunc
	var_125_int = 541689; // 0x18c PushI
	var_126_int = -1; // 0x18d PushI
	var_127_int = 43867; // 0x18e PushI
	AddReply(var_125_int, var_126_int, var_127_int); // 0x18f TObjFunc
	return 0; // 0x191 Return
	
Label_402:
	var_128_int = 43854; // 0x192 PushI
	var_129_bool = var_6_int == var_128_int; // 0x193 Eq
	if(var_129_bool == 0) goto Label_425; // 0x194 JumpB
	var_130_string = ""; // 0x195 PushV
	var_130_string = "Sexy"; // 0x196 MovS
	func_164(var_7_bool, var_130_string); // 0x197 NEW_2
	var_131_int = 541678; // 0x199 PushI
	SetMessage(var_131_int); // 0x19a TObjFunc
	ClearReplies(); // 0x19c TObjFunc
	var_132_int = 541679; // 0x19e PushI
	var_133_int = 43838; // 0x19f PushI
	var_134_int = 43855; // 0x1a0 PushI
	AddReply(var_132_int, var_133_int, var_134_int); // 0x1a1 TObjFunc
	var_135_int = 541690; // 0x1a3 PushI
	var_136_int = 43850; // 0x1a4 PushI
	var_137_int = 43869; // 0x1a5 PushI
	AddReply(var_135_int, var_136_int, var_137_int); // 0x1a6 TObjFunc
	return 0; // 0x1a8 Return
	
Label_425:
	var_138_int = 43838; // 0x1a9 PushI
	var_139_bool = var_6_int == var_138_int; // 0x1aa Eq
	if(var_139_bool == 0) goto Label_448; // 0x1ab JumpB
	var_140_string = ""; // 0x1ac PushV
	var_140_string = "Fear"; // 0x1ad MovS
	func_164(var_7_bool, var_140_string); // 0x1ae NEW_2
	var_141_int = 541663; // 0x1b0 PushI
	SetMessage(var_141_int); // 0x1b1 TObjFunc
	ClearReplies(); // 0x1b3 TObjFunc
	var_142_int = 541671; // 0x1b5 PushI
	var_143_int = 43848; // 0x1b6 PushI
	var_144_int = 43847; // 0x1b7 PushI
	AddReply(var_142_int, var_143_int, var_144_int); // 0x1b8 TObjFunc
	var_145_int = 541691; // 0x1ba PushI
	var_146_int = 43871; // 0x1bb PushI
	var_147_int = 43870; // 0x1bc PushI
	AddReply(var_145_int, var_146_int, var_147_int); // 0x1bd TObjFunc
	return 0; // 0x1bf Return
	
Label_448:
	var_148_int = 43871; // 0x1c0 PushI
	var_149_bool = var_6_int == var_148_int; // 0x1c1 Eq
	if(var_149_bool == 0) goto Label_471; // 0x1c2 JumpB
	var_150_string = ""; // 0x1c3 PushV
	var_150_string = "Love"; // 0x1c4 MovS
	func_164(var_7_bool, var_150_string); // 0x1c5 NEW_2
	var_151_int = 541692; // 0x1c7 PushI
	SetMessage(var_151_int); // 0x1c8 TObjFunc
	ClearReplies(); // 0x1ca TObjFunc
	var_152_int = 541694; // 0x1cc PushI
	var_153_int = 43875; // 0x1cd PushI
	var_154_int = 43873; // 0x1ce PushI
	AddReply(var_152_int, var_153_int, var_154_int); // 0x1cf TObjFunc
	var_155_int = 541858; // 0x1d1 PushI
	var_156_int = 43875; // 0x1d2 PushI
	var_157_int = 44083; // 0x1d3 PushI
	AddReply(var_155_int, var_156_int, var_157_int); // 0x1d4 TObjFunc
	return 0; // 0x1d6 Return
	
Label_471:
	var_158_int = 43848; // 0x1d7 PushI
	var_159_bool = var_6_int == var_158_int; // 0x1d8 Eq
	if(var_159_bool == 0) goto Label_494; // 0x1d9 JumpB
	var_160_string = ""; // 0x1da PushV
	var_160_string = "Fear"; // 0x1db MovS
	func_164(var_7_bool, var_160_string); // 0x1dc NEW_2
	var_161_int = 541672; // 0x1de PushI
	SetMessage(var_161_int); // 0x1df TObjFunc
	ClearReplies(); // 0x1e1 TObjFunc
	var_162_int = 541673; // 0x1e3 PushI
	var_163_int = 43875; // 0x1e4 PushI
	var_164_int = 43849; // 0x1e5 PushI
	AddReply(var_162_int, var_163_int, var_164_int); // 0x1e6 TObjFunc
	var_165_int = 541693; // 0x1e8 PushI
	var_166_int = 43850; // 0x1e9 PushI
	var_167_int = 43872; // 0x1ea PushI
	AddReply(var_165_int, var_166_int, var_167_int); // 0x1eb TObjFunc
	return 0; // 0x1ed Return
	
Label_494:
	var_168_int = 43850; // 0x1ee PushI
	var_169_bool = var_6_int == var_168_int; // 0x1ef Eq
	if(var_169_bool == 0) goto Label_517; // 0x1f0 JumpB
	var_170_string = ""; // 0x1f1 PushV
	var_170_string = "Fear"; // 0x1f2 MovS
	func_164(var_7_bool, var_170_string); // 0x1f3 NEW_2
	var_171_int = 541674; // 0x1f5 PushI
	SetMessage(var_171_int); // 0x1f6 TObjFunc
	ClearReplies(); // 0x1f8 TObjFunc
	var_172_int = 541698; // 0x1fa PushI
	var_173_int = 43875; // 0x1fb PushI
	var_174_int = 43879; // 0x1fc PushI
	AddReply(var_172_int, var_173_int, var_174_int); // 0x1fd TObjFunc
	var_175_int = 541699; // 0x1ff PushI
	var_176_int = -1; // 0x200 PushI
	var_177_int = 43881; // 0x201 PushI
	AddReply(var_175_int, var_176_int, var_177_int); // 0x202 TObjFunc
	return 0; // 0x204 Return
	
Label_517:
	var_178_int = 43875; // 0x205 PushI
	var_179_bool = var_6_int == var_178_int; // 0x206 Eq
	if(var_179_bool == 0) goto Label_540; // 0x207 JumpB
	var_180_string = ""; // 0x208 PushV
	var_180_string = "Love"; // 0x209 MovS
	func_164(var_7_bool, var_180_string); // 0x20a NEW_2
	var_181_int = 541695; // 0x20c PushI
	SetMessage(var_181_int); // 0x20d TObjFunc
	ClearReplies(); // 0x20f TObjFunc
	var_182_int = 541696; // 0x211 PushI
	var_183_int = -1; // 0x212 PushI
	var_184_int = 43876; // 0x213 PushI
	AddReply(var_182_int, var_183_int, var_184_int); // 0x214 TObjFunc
	var_185_int = 541697; // 0x216 PushI
	var_186_int = -1; // 0x217 PushI
	var_187_int = 43877; // 0x218 PushI
	AddReply(var_185_int, var_186_int, var_187_int); // 0x219 TObjFunc
	return 0; // 0x21b Return
	
Label_540:
	var_3_string = 1; // 0x21c TMovB
	var_188_bool = 0; // 0x21d PushV
	func_966(var_188_bool); // 0x21e NEW_2
	if(var_188_bool == 0) goto Label_548; // 0x220 JumpB
	lshStopAnimation(); // 0x221 Func
	goto Label_550; // 0x223 Jump
	
Label_550:
	return 0; // 0x226 Return
	
Label_548:
	StopAnimation(); // 0x224 Func
	
Label_552:
	return 0; // 0x228 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object)
{
	var_7_int = 0; var_8_object = Obj(); // 0x22e PushV
	var_8_object = var_6_object; // 0x22f Mov
	TaskCall(0); // 0x230 TaskCall
	func_0(var_9_object, var_7_int, var_8_object); // 0x231 NEW_2
	TaskReturn(); // 0x232 TaskReturn
	return 0; // 0x234 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string)
{
	var_7_bool = 0; var_8_bool = 0; // 0x239 PushV
	var_9_string = "cleanup"; // 0x23a PushS
	var_10_bool = var_6_string == var_9_string; // 0x23b Eq
	if(var_10_bool == 0) goto Label_592; // 0x23c JumpB
	var_0_object = 1; // 0x23d TMovB
	IsLoaded(var_8_bool); // 0x23e Func
	var_11_bool = 0; // 0x240 PushV
	var_11_bool = 0; // 0x241 MovB
	var_12_bool = var_8_bool == 0; // 0x242 Not
	if(var_12_bool == 0) goto Label_585; // 0x243 JumpB
	var_13_bool = 0; // 0x244 PushV
	func_613(var_13_bool); // 0x245 NEW_2
	if(var_13_bool == 0) goto Label_585; // 0x247 JumpB
	var_11_bool = 1; // 0x248 MovB
	
Label_585:
	if(var_11_bool == 0) goto Label_591; // 0x249 JumpB
	var_14_object = Obj(); // 0x24a PushV
	func_893(var_14_object); // 0x24b NEW_2
	RemoveActor(var_14_object); // 0x24d Func
	
Label_591:
	goto Label_596; // 0x24f Jump
	
Label_596:
	return 2; // 0x254 Return
	
Label_592:
	var_17_string = "restore"; // 0x250 PushS
	var_18_bool = var_6_string == var_17_string; // 0x251 Eq
	if(var_18_bool == 0) goto Label_596; // 0x252 JumpB
	var_0_object = 0; // 0x253 TMovB
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_bool = 0; // 0x255 PushV
	var_6_bool = 0; // 0x256 MovB
	var_7_object = var_0_object; // 0x257 PushT
	if(var_7_object == 0) goto Label_606; // 0x258 JumpB
	var_8_bool = 0; // 0x259 PushV
	func_613(var_8_bool); // 0x25a NEW_2
	if(var_8_bool == 0) goto Label_606; // 0x25c JumpB
	var_6_bool = 1; // 0x25d MovB
	
Label_606:
	if(var_6_bool == 0) goto Label_612; // 0x25e JumpB
	var_9_object = Obj(); // 0x25f PushV
	func_893(var_9_object); // 0x260 NEW_2
	RemoveActor(var_9_object); // 0x262 Func
	
Label_612:
	return 0; // 0x264 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	func_565(); // 0x22a NEW_2
	return 0; // 0x22c Return
}


func_0(var_0_object, var_7_int, var_8_object)
{
	var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_bool = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0; // 0x0 PushV
	var_0_object = var_8_object; // 0x1 TMov
	var_18_bool = 0; var_19_object = Obj(); var_20_float = 0; // 0x2 PushV
	var_19_object = var_8_object; // 0x3 Mov
	var_20_float = 70.0; // 0x4 MovF
	func_615(var_19_object, var_20_float); // 0x5 NEW_2
	var_65_bool = var_18_bool == 0; // 0x7 Not
	if(var_65_bool == 0) goto Label_11; // 0x8 JumpB
	var_7_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_14_object); // 0xb Func
	var_66_int = 0; // 0xd PushV
	func_960(var_66_int); // 0xe NEW_2
	SetNPCName(var_66_int); // 0x10 ObjFunc
	var_67_int = 0; // 0x12 PushV
	func_958(var_67_int); // 0x13 NEW_2
	SetNPCDescription(var_67_int); // 0x15 ObjFunc
	var_68_string = ""; // 0x17 PushV
	func_962(var_68_string); // 0x18 NEW_2
	SetPhoto(var_68_string); // 0x1a ObjFunc
	var_69_string = ""; // 0x1c PushV
	func_964(var_69_string); // 0x1d NEW_2
	SetPhoto2(var_69_string); // 0x1f ObjFunc
	var_70_int = 0; // 0x21 PushV
	func_941(var_70_int); // 0x22 NEW_2
	SetPlayerName(var_70_int); // 0x24 ObjFunc
	var_16_int = -1; // 0x26 MovI
	IsOverrideActive(var_15_bool); // 0x27 Func
	var_78_bool = var_15_bool; // 0x29 Push
	if(var_78_bool == 0) goto Label_45; // 0x2a JumpB
	var_7_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_14_object); // 0x2d Func
	var_79_bool = 0; var_80_object = Obj(); // 0x2f PushV
	var_81_object = Obj(); // 0x30 PushV
	func_893(var_81_object); // 0x31 NEW_2
	var_80_object = var_81_object; // 0x32 Mov
	func_702(var_79_bool, var_80_object); // 0x34 NEW_2
	var_174_object = Obj(); var_175_object = Obj(); // 0x36 PushV
	var_174_object = var_8_object; // 0x37 Mov
	var_175_object = var_14_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_176_object, var_177_object, var_178_string, var_179_bool, var_174_object, var_175_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_17_bool); // 0x3d ObjFunc
	
Label_63:
	var_241_bool = var_17_bool == 0; // 0x3f Not
	if(var_241_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_17_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_242_object = Obj(); // 0x46 PushV
	var_242_object = var_8_object; // 0x47 Mov
	func_684(); // 0x48 NEW_2
	StopDialog(var_14_object); // 0x4a Func
	GetReturnValue(var_16_int); // 0x4c ObjFunc
	var_7_int = var_16_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_960(var_66_int)
{
	var_66_int = 502858; // 0x3c0 MovI
	return 0; // 0x3c1 Return
}


func_962(var_68_string)
{
	var_68_string = "ui/NPC_Eva.png"; // 0x3c2 MovS
	return 0; // 0x3c3 Return
}


func_899(var_45_cvector, var_46_cvector)
{
	var_48_float = 0; var_49_float = 0; // 0x383 PushV
	var_50_int = var_46_cvector | var_46_cvector; // 0x384 Or
	var_49_float = sqrt(var_50_int); // 0x385 Sqrt2
	var_51_float = 0.0; // 0x386 PushF
	var_52_bool = var_49_float < var_51_float; // 0x387 LT
	if(var_52_bool == 0) goto Label_907; // 0x388 JumpB
	var_45_cvector = CVector(0.0, 0.0, 0.0); // 0x389 MovV
	return 2; // 0x38a Return
	
Label_907:
	var_45_cvector = var_46_cvector / var_46_cvector; // 0x38b Div2
	return 2; // 0x38c Return
}


func_964(var_69_string)
{
	var_69_string = "ui/NPC_Eva_b.png"; // 0x3c4 MovS
	return 0; // 0x3c5 Return
}


func_966(var_61_bool)
{
	var_61_bool = 1; // 0x3c6 MovB
	return 0; // 0x3c7 Return
}


func_840(var_225_string)
{
	var_226_bool = 0; var_227_float = 0; var_228_float = 0; var_229_bool = 0; var_230_float = 0; var_231_float = 0; // 0x348 PushV
	lshHasAnimation(var_229_bool, var_225_string); // 0x349 Func
	var_232_bool = var_229_bool; // 0x34b Push
	if(var_232_bool == 0) goto Label_851; // 0x34c JumpB
	lshGetAnimTimes(var_225_string, var_230_float, var_231_float); // 0x34d Func
	var_233_bool = 0; // 0x34f PushB
	lshPlayAnimation(var_230_float, var_231_float, var_233_bool); // 0x350 Func
	goto Label_855; // 0x352 Jump
	
Label_855:
	return 6; // 0x357 Return
	
Label_851:
	var_234_string = "Can't find lsh animation : "; // 0x353 PushS
	var_235_int = var_234_string + var_225_string; // 0x354 Add
	Trace(var_235_int); // 0x355 Func
}


func_702(var_79_bool, var_80_object)
{
	var_84_int = 0; var_85_int = 0; var_86_int = 0; var_87_int = 0; // 0x2be PushV
	var_88_string = "voice_common"; // 0x2bf PushS
	GetVariable(var_88_string, var_86_int); // 0x2c0 Func
	var_89_int = var_86_int; // 0x2c2 Push
	if(var_89_int == 0) goto Label_740; // 0x2c3 JumpB
	var_90_bool = 0; var_91_object = Obj(); // 0x2c4 PushV
	var_91_object = var_80_object; // 0x2c5 Mov
	func_760(var_91_object); // 0x2c6 NEW_2
	var_120_bool = var_90_bool == 0; // 0x2c8 Not
	if(var_120_bool == 0) goto Label_722; // 0x2c9 JumpB
	var_121_bool = 0; var_122_object = Obj(); // 0x2ca PushV
	var_122_object = var_80_object; // 0x2cb Mov
	func_797(var_122_object); // 0x2cc NEW_2
	var_156_bool = var_121_bool == 0; // 0x2ce Not
	if(var_156_bool == 0) goto Label_722; // 0x2cf JumpB
	var_79_bool = 0; // 0x2d0 MovB
	return 4; // 0x2d1 Return
	
Label_722:
	var_157_int = 2; // 0x2d2 PushI
	irand(var_87_int, var_157_int); // 0x2d3 Func
	var_158_int = var_87_int; // 0x2d5 Push
	if(var_158_int == 0) goto Label_735; // 0x2d6 JumpB
	var_159_string = "voice_common"; // 0x2d7 PushS
	var_160_int = 1; // 0x2d8 PushI
	var_161_int = var_86_int + var_160_int; // 0x2d9 Add
	var_162_int = 3; // 0x2da PushI
	var_163_int = var_161_int / var_162_int; // 0x2db Mod
	SetVariable(var_159_string, var_163_int); // 0x2dc Func
	goto Label_739; // 0x2de Jump
	
Label_739:
	goto Label_758; // 0x2e3 Jump
	
Label_758:
	var_79_bool = 1; // 0x2f6 MovB
	return 4; // 0x2f7 Return
	
Label_735:
	var_164_string = "voice_common"; // 0x2df PushS
	var_165_int = 0; // 0x2e0 PushI
	SetVariable(var_164_string, var_165_int); // 0x2e1 Func
	
Label_740:
	var_166_bool = 0; var_167_object = Obj(); // 0x2e4 PushV
	var_167_object = var_80_object; // 0x2e5 Mov
	func_797(var_167_object); // 0x2e6 NEW_2
	var_168_bool = var_166_bool == 0; // 0x2e8 Not
	if(var_168_bool == 0) goto Label_754; // 0x2e9 JumpB
	var_169_bool = 0; var_170_object = Obj(); // 0x2ea PushV
	var_170_object = var_80_object; // 0x2eb Mov
	func_760(var_170_object); // 0x2ec NEW_2
	var_171_bool = var_169_bool == 0; // 0x2ee Not
	if(var_171_bool == 0) goto Label_754; // 0x2ef JumpB
	var_79_bool = 0; // 0x2f0 MovB
	return 4; // 0x2f1 Return
	
Label_754:
	var_172_string = "voice_common"; // 0x2f2 PushS
	var_173_int = 1; // 0x2f3 PushI
	SetVariable(var_172_string, var_173_int); // 0x2f4 Func
}


func_909(var_201_int, var_202_string)
{
	var_203_int = 0; var_204_int = 0; // 0x38d PushV
	GetVariable(var_202_string, var_204_int); // 0x38e Func
	var_201_int = var_204_int; // 0x390 Mov
	return 2; // 0x391 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_174_object, var_175_object)
{
	var_0_object = var_175_object; // 0x52 TMov
	var_1_object = var_174_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_180_int = 1; // 0x55 PushI
	if(var_180_int == 0) goto Label_134; // 0x56 JumpB
	var_181_string = ""; // 0x57 PushV
	var_181_string = "Sexy"; // 0x58 MovS
	func_164(var_175_object, var_181_string); // 0x59 NEW_2
	var_198_int = 541659; // 0x5b PushI
	SetMessage(var_198_int); // 0x5c TObjFunc
	ClearReplies(); // 0x5e TObjFunc
	var_199_bool = 0; var_200_object = Obj(); // 0x60 PushV
	var_200_object = var_1_object; // 0x61 MovT
	func_929(var_200_object); // 0x62 NEW_2
	if(var_199_bool == 0) goto Label_106; // 0x64 JumpB
	var_207_int = 541660; // 0x65 PushI
	var_208_int = 43852; // 0x66 PushI
	var_209_int = 43835; // 0x67 PushI
	AddReply(var_207_int, var_208_int, var_209_int); // 0x68 TObjFunc
	
Label_106:
	var_210_bool = 0; var_211_object = Obj(); // 0x6a PushV
	var_211_object = var_1_object; // 0x6b MovT
	func_929(var_211_object); // 0x6c NEW_2
	if(var_210_bool == 0) goto Label_116; // 0x6e JumpB
	var_212_int = 541664; // 0x6f PushI
	var_213_int = 43840; // 0x70 PushI
	var_214_int = 43839; // 0x71 PushI
	AddReply(var_212_int, var_213_int, var_214_int); // 0x72 TObjFunc
	
Label_116:
	var_215_bool = 0; var_216_object = Obj(); // 0x74 PushV
	var_216_object = var_1_object; // 0x75 MovT
	func_929(var_216_object); // 0x76 NEW_2
	if(var_215_bool == 0) goto Label_126; // 0x78 JumpB
	var_217_int = 541668; // 0x79 PushI
	var_218_int = 43845; // 0x7a PushI
	var_219_int = 43844; // 0x7b PushI
	AddReply(var_217_int, var_218_int, var_219_int); // 0x7c TObjFunc
	
Label_126:
	var_220_int = 541661; // 0x7e PushI
	var_221_int = -1; // 0x7f PushI
	var_222_int = 43836; // 0x80 PushI
	AddReply(var_220_int, var_221_int, var_222_int); // 0x81 TObjFunc
	goto Label_134; // 0x83 Jump
	
Label_134:
	var_223_bool = 0; // 0x86 PushV
	func_966(var_223_bool); // 0x87 NEW_2
	if(var_223_bool == 0) goto Label_149; // 0x89 JumpB
	
Label_138:
	lshWaitForAnimEnd(); // 0x8a Func
	var_224_string = var_3_string; // 0x8c PushT
	if(var_224_string == 0) goto Label_143; // 0x8d JumpB
	goto Label_148; // 0x8e Jump
	
Label_148:
	goto Label_163; // 0x94 Jump
	
Label_163:
	return 0; // 0xa3 Return
	
Label_143:
	var_225_string = ""; // 0x8f PushV
	var_225_string = var_2_object; // 0x90 MovT
	func_840(var_225_string); // 0x91 NEW_2
	goto Label_138; // 0x93 Jump
	
Label_149:
	var_236_string = "all"; // 0x95 PushS
	var_237_string = "idle"; // 0x96 PushS
	PlayAnimation(var_236_string, var_237_string); // 0x97 Func
	
Label_153:
	WaitForAnimEnd(); // 0x99 Func
	var_238_string = var_3_string; // 0x9b PushT
	if(var_238_string == 0) goto Label_158; // 0x9c JumpB
	goto Label_163; // 0x9d Jump
	
Label_158:
	var_239_string = "all"; // 0x9e PushS
	var_240_string = "idle"; // 0x9f PushS
	PlayAnimation(var_239_string, var_240_string); // 0xa0 Func
	goto Label_153; // 0xa2 Jump
}


func_914(var_134_int)
{
	var_135_float = 0; var_136_float = 0; // 0x392 PushV
	GetGameTime(var_136_float); // 0x393 Func
	var_137_int = 1; // 0x395 PushI
	var_138_int = 0; // 0x396 PushV
	var_139_int = 24; // 0x397 PushI
	var_138_int = var_136_float / var_136_float; // 0x398 Div2
	var_134_int = var_137_int + var_138_int; // 0x399 Add2
	return 2; // 0x39a Return
}


func_856(var_185_string, var_186_bool)
{
	var_189_bool = 0; var_190_float = 0; var_191_float = 0; var_192_bool = 0; var_193_float = 0; var_194_float = 0; // 0x358 PushV
	lshHasAnimation(var_192_bool, var_185_string); // 0x359 Func
	var_195_bool = var_192_bool; // 0x35b Push
	if(var_195_bool == 0) goto Label_866; // 0x35c JumpB
	lshGetAnimTimes(var_185_string, var_193_float, var_194_float); // 0x35d Func
	lshPlayAnimation(var_193_float, var_194_float, var_186_bool); // 0x35f Func
	goto Label_870; // 0x361 Jump
	
Label_870:
	return 6; // 0x366 Return
	
Label_866:
	var_196_string = "Can't find lsh animation : "; // 0x362 PushS
	var_197_int = var_196_string + var_185_string; // 0x363 Add
	Trace(var_197_int); // 0x364 Func
}


func_923()
{
	var_14_string = "ood12EvaRevenant1"; // 0x39c PushS
	var_15_int = 1; // 0x39d PushI
	SetVariable(var_14_string, var_15_int); // 0x39e Func
	return 0; // 0x3a0 Return
}


func_797(var_121_bool)
{
	var_123_string = ""; var_124_int = 0; var_125_bool = 0; var_126_int = 0; var_127_string = ""; var_128_string = ""; var_129_int = 0; var_130_bool = 0; var_131_int = 0; var_132_string = ""; // 0x31d PushV
	var_133_string = "d"; // 0x31e PushS
	var_134_int = 0; // 0x31f PushV
	func_914(var_134_int); // 0x320 NEW_2
	var_140_int = var_133_string + var_134_int; // 0x322 Add
	var_141_string = "m"; // 0x323 PushS
	var_128_string = var_140_int + var_141_string; // 0x324 Add2
	var_129_int = 0; // 0x325 MovI
	
Label_806:
	var_142_int = 1; // 0x326 PushI
	if(var_142_int == 0) goto Label_819; // 0x327 JumpB
	var_143_int = 1; // 0x328 PushI
	var_144_int = var_129_int + var_143_int; // 0x329 Add
	var_145_int = var_128_string + var_144_int; // 0x32a Add
	HasProperty(var_145_int, var_130_bool); // 0x32b ObjFunc
	var_146_bool = var_130_bool == 0; // 0x32d Not
	if(var_146_bool == 0) goto Label_816; // 0x32e JumpB
	goto Label_819; // 0x32f Jump
	
Label_819:
	var_147_bool = var_129_int == 0; // 0x333 Not
	if(var_147_bool == 0) goto Label_823; // 0x334 JumpB
	var_121_bool = 0; // 0x335 MovB
	return 10; // 0x336 Return
	
Label_823:
	var_131_int = 0; // 0x337 MovI
	var_148_int = 1; // 0x338 PushI
	var_149_bool = var_129_int > var_148_int; // 0x339 GT
	if(var_149_bool == 0) goto Label_829; // 0x33a JumpB
	irand(var_131_int, var_129_int); // 0x33b Func
	
Label_829:
	var_150_int = 1; // 0x33d PushI
	var_151_int = var_131_int + var_150_int; // 0x33e Add
	var_152_int = var_128_string + var_151_int; // 0x33f Add
	GetProperty(var_152_int, var_132_string); // 0x340 ObjFunc
	var_153_bool = 0; var_154_string = ""; // 0x342 PushV
	var_154_string = var_132_string; // 0x343 Mov
	func_871(var_153_bool, var_154_string); // 0x344 NEW_2
	var_121_bool = var_153_bool; // 0x345 Mov
	return 10; // 0x347 Return
	
Label_816:
	var_155_int = 1; // 0x330 PushI
	var_129_int = var_129_int + var_155_int; // 0x331 Add2
	goto Label_806; // 0x332 Jump
}


func_929(var_199_bool)
{
	var_201_int = 0; var_202_string = ""; // 0x3a2 PushV
	var_202_string = "ood12EvaRevenant1"; // 0x3a3 MovS
	func_909(var_201_int, var_202_string); // 0x3a4 NEW_2
	var_205_int = 0; // 0x3a6 PushI
	var_206_bool = var_201_int == var_205_int; // 0x3a7 Eq
	if(var_206_bool == 0) goto Label_939; // 0x3a8 JumpB
	var_199_bool = 1; // 0x3a9 MovB
	return 0; // 0x3aa Return
	
Label_939:
	var_199_bool = 0; // 0x3ab MovB
	return 0; // 0x3ac Return
}


func_164(var_2_object, var_181_string)
{
	var_182_bool = 0; // 0xa5 PushV
	func_966(var_182_bool); // 0xa6 NEW_2
	var_183_bool = var_182_bool == 0; // 0xa8 Not
	if(var_183_bool == 0) goto Label_171; // 0xa9 JumpB
	return 0; // 0xaa Return
	
Label_171:
	var_184_bool = var_181_string == var_2_object; // 0xab Eq
	if(var_184_bool == 0) goto Label_174; // 0xac JumpB
	return 0; // 0xad Return
	
Label_174:
	var_185_string = ""; var_186_bool = 0; // 0xae PushV
	var_185_string = var_181_string; // 0xaf Mov
	var_187_string = ""; // 0xb0 PushS
	var_188_bool = var_181_string == var_187_string; // 0xb1 Eq
	if(var_188_bool == 0) goto Label_181; // 0xb2 JumpB
	var_186_bool = 0; // 0xb3 MovB
	goto Label_182; // 0xb4 Jump
	
Label_182:
	func_856(var_185_string, var_186_bool); // 0xb6 NEW_2
	var_2_object = var_181_string; // 0xb8 TMov
	return 0; // 0xb9 Return
	
Label_181:
	var_186_bool = 1; // 0xb5 MovB
}


func_613(var_8_bool)
{
	var_8_bool = 1; // 0x265 MovB
	return 0; // 0x266 Return
}


func_615(var_18_bool, var_20_float)
{
	var_21_float = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_bool = 0; var_29_bool = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; // 0x267 PushV
	GetPosition(var_31_cvector); // 0x268 ObjFunc
	GetEyesHeight(var_30_float); // 0x26a ObjFunc
	var_39_float = GetByIndex(var_31_cvector, 1); // 0x26c PushE
	var_39_float = var_39_float + var_30_float; // 0x26d Add2
	SetByIndex(var_31_cvector, 1) = var_39_float; // 0x26e PopE
	GetPosition(var_32_cvector); // 0x26f Func
	GetEyesHeight(var_30_float); // 0x271 Func
	var_40_float = GetByIndex(var_32_cvector, 1); // 0x273 PushE
	var_40_float = var_40_float + var_30_float; // 0x274 Add2
	SetByIndex(var_32_cvector, 1) = var_40_float; // 0x275 PopE
	var_33_cvector = var_31_cvector - var_32_cvector; // 0x276 Sub2
	var_41_float = GetByIndex(var_33_cvector, 1); // 0x277 PushE
	var_41_float = 0; // 0x278 MovI
	SetByIndex(var_33_cvector, 1) = var_41_float; // 0x279 PopE
	var_42_int = var_33_cvector | var_33_cvector; // 0x27a Or
	var_43_float = sqrt(var_42_int); // 0x27b Sqrt
	var_33_cvector = var_33_cvector / var_33_cvector; // 0x27c Div2
	var_34_cvector = -var_33_cvector; // 0x27d Neg2
	var_44_float = var_33_cvector * var_20_float; // 0x27e Mult
	var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); // 0x27f PushV
	var_47_cvector = CVector(0.0, 1.0, 0.0); // 0x280 PushVec
	var_46_cvector = var_34_cvector ^ var_47_cvector; // 0x281 Xor2
	func_899(var_45_cvector, var_46_cvector); // 0x282 NEW_2
	var_53_int = 25; // 0x284 PushI
	var_54_float = var_45_cvector * var_53_int; // 0x285 Mult
	var_55_int = var_44_float + var_54_float; // 0x286 Add
	var_56_cvector = CVector(0.0, 10.0, 0.0); // 0x287 PushVec
	var_35_cvector = var_55_int - var_56_cvector; // 0x288 Sub2
	var_36_cvector = var_32_cvector + var_35_cvector; // 0x289 Add2
	IsOverrideActive(var_37_bool); // 0x28a Func
	var_57_bool = var_37_bool; // 0x28c Push
	if(var_57_bool == 0) goto Label_656; // 0x28d JumpB
	var_18_bool = 0; // 0x28e MovB
	return 18; // 0x28f Return
	
Label_656:
	StopWorld(); // 0x290 Func
	var_58_bool = 1; // 0x292 PushB
	CameraTransit(var_36_cvector, var_34_cvector, var_58_bool); // 0x293 Func
	var_59_float = GetByIndex(var_35_cvector, 0); // 0x295 PushE
	var_60_float = GetByIndex(var_35_cvector, 2); // 0x296 PushE
	Rotate(var_59_float, var_60_float); // 0x297 Func
	var_61_bool = 0; // 0x299 PushV
	func_966(var_61_bool); // 0x29a NEW_2
	if(var_61_bool == 0) goto Label_670; // 0x29c JumpB
	goto Label_678; // 0x29d Jump
	
Label_678:
	CameraWaitForPlayFinish(); // 0x2a6 Func
	ResumeWorld(); // 0x2a8 Func
	var_18_bool = 1; // 0x2aa MovB
	return 18; // 0x2ab Return
	
Label_670:
	var_62_string = "head"; // 0x29e PushS
	HasAnimationTrack(var_38_bool, var_62_string); // 0x29f Func
	var_63_bool = var_38_bool; // 0x2a1 Push
	if(var_63_bool == 0) goto Label_678; // 0x2a2 JumpB
	var_64_string = "head"; // 0x2a3 PushS
	LookAsyncCamera(var_64_string); // 0x2a4 Func
}


func_871(var_113_bool, var_114_string)
{
	var_115_bool = 0; var_116_bool = 0; // 0x367 PushV
	var_117_bool = 0; // 0x368 PushV
	func_966(var_117_bool); // 0x369 NEW_2
	if(var_117_bool == 0) goto Label_884; // 0x36b JumpB
	lshHasSpeech(var_116_bool, var_114_string); // 0x36c Func
	var_118_bool = var_116_bool; // 0x36e Push
	if(var_118_bool == 0) goto Label_884; // 0x36f JumpB
	lshPlaySpeech(var_114_string); // 0x370 Func
	var_113_bool = 1; // 0x372 MovB
	return 2; // 0x373 Return
	
Label_884:
	var_113_bool = 0; // 0x374 MovB
	return 2; // 0x375 Return
}


func_684()
{
	var_243_bool = 0; var_244_bool = 0; // 0x2ac PushV
	var_245_bool = 1; // 0x2ad PushB
	CameraSwitchToNormal(var_245_bool); // 0x2ae Func
	var_246_bool = 0; // 0x2b0 PushV
	func_966(var_246_bool); // 0x2b1 NEW_2
	if(var_246_bool == 0) goto Label_693; // 0x2b3 JumpB
	goto Label_701; // 0x2b4 Jump
	
Label_701:
	return 2; // 0x2bd Return
	
Label_693:
	var_247_string = "head"; // 0x2b5 PushS
	HasAnimationTrack(var_244_bool, var_247_string); // 0x2b6 Func
	var_248_bool = var_244_bool; // 0x2b8 Push
	if(var_248_bool == 0) goto Label_701; // 0x2b9 JumpB
	var_249_string = "head"; // 0x2ba PushS
	UnlookAsync(var_249_string); // 0x2bb Func
}


func_941(var_70_int)
{
	var_71_int = 0; var_72_int = 0; // 0x3ad PushV
	var_73_string = "branch"; // 0x3ae PushS
	GetVariable(var_73_string, var_72_int); // 0x3af Func
	var_74_int = 0; // 0x3b1 PushI
	var_75_bool = var_72_int == var_74_int; // 0x3b2 Eq
	if(var_75_bool == 0) goto Label_951; // 0x3b3 JumpB
	var_70_int = 1; // 0x3b4 MovI
	return 2; // 0x3b5 Return
	
Label_951:
	var_76_int = 1; // 0x3b7 PushI
	var_77_bool = var_72_int == var_76_int; // 0x3b8 Eq
	if(var_77_bool == 0) goto Label_956; // 0x3b9 JumpB
	var_70_int = 2; // 0x3ba MovI
	return 2; // 0x3bb Return
	
Label_956:
	var_70_int = 3; // 0x3bc MovI
	return 2; // 0x3bd Return
}


func_565()
{
	
Label_565:
	Hold(); // 0x235 Func
	goto Label_565; // 0x237 Jump
}


func_886()
{
	var_9_bool = 0; // 0x376 PushV
	func_966(var_9_bool); // 0x377 NEW_2
	if(var_9_bool == 0) goto Label_892; // 0x379 JumpB
	lshStopSpeech(); // 0x37a Func
	
Label_892:
	return 0; // 0x37c Return
}


func_760(var_90_bool)
{
	var_92_string = ""; var_93_int = 0; var_94_bool = 0; var_95_int = 0; var_96_string = ""; var_97_string = ""; var_98_int = 0; var_99_bool = 0; var_100_int = 0; var_101_string = ""; // 0x2f8 PushV
	var_97_string = "c"; // 0x2f9 MovS
	var_98_int = 0; // 0x2fa MovI
	
Label_763:
	var_102_int = 1; // 0x2fb PushI
	if(var_102_int == 0) goto Label_776; // 0x2fc JumpB
	var_103_int = 1; // 0x2fd PushI
	var_104_int = var_98_int + var_103_int; // 0x2fe Add
	var_105_int = var_97_string + var_104_int; // 0x2ff Add
	HasProperty(var_105_int, var_99_bool); // 0x300 ObjFunc
	var_106_bool = var_99_bool == 0; // 0x302 Not
	if(var_106_bool == 0) goto Label_773; // 0x303 JumpB
	goto Label_776; // 0x304 Jump
	
Label_776:
	var_107_bool = var_98_int == 0; // 0x308 Not
	if(var_107_bool == 0) goto Label_780; // 0x309 JumpB
	var_90_bool = 0; // 0x30a MovB
	return 10; // 0x30b Return
	
Label_780:
	var_100_int = 0; // 0x30c MovI
	var_108_int = 1; // 0x30d PushI
	var_109_bool = var_98_int > var_108_int; // 0x30e GT
	if(var_109_bool == 0) goto Label_786; // 0x30f JumpB
	irand(var_100_int, var_98_int); // 0x310 Func
	
Label_786:
	var_110_int = 1; // 0x312 PushI
	var_111_int = var_100_int + var_110_int; // 0x313 Add
	var_112_int = var_97_string + var_111_int; // 0x314 Add
	GetProperty(var_112_int, var_101_string); // 0x315 ObjFunc
	var_113_bool = 0; var_114_string = ""; // 0x317 PushV
	var_114_string = var_101_string; // 0x318 Mov
	func_871(var_113_bool, var_114_string); // 0x319 NEW_2
	var_90_bool = var_113_bool; // 0x31a Mov
	return 10; // 0x31c Return
	
Label_773:
	var_119_int = 1; // 0x305 PushI
	var_98_int = var_98_int + var_119_int; // 0x306 Add2
	goto Label_763; // 0x307 Jump
}


func_893(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x37d PushV
	self(var_11_object); // 0x37e Func
	var_9_object = var_11_object; // 0x380 Mov
	return 2; // 0x381 Return
}


func_958(var_67_int)
{
	var_67_int = 515533; // 0x3be MovI
	return 0; // 0x3bf Return
}


