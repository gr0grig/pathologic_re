task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	var_8_int = 1; // 0xbb PushI
	if(var_8_int == 0) goto Label_552; // 0xbc JumpB
	func_884(); // 0xbe NEW_2
	var_10_int = 43835; // 0xc0 PushI
	var_11_bool = var_7_bool == var_10_int; // 0xc1 Eq
	if(var_11_bool == 0) goto Label_200; // 0xc2 JumpB
	var_12_object = Obj(); var_13_object = Obj(); // 0xc3 PushV
	var_12_object = var_1_object; // 0xc4 MovT
	var_13_object = var_0_object; // 0xc5 MovT
	func_921(); // 0xc6 NEW_2
	
Label_200:
	var_16_int = 43839; // 0xc8 PushI
	var_17_bool = var_7_bool == var_16_int; // 0xc9 Eq
	if(var_17_bool == 0) goto Label_208; // 0xca JumpB
	var_18_object = Obj(); var_19_object = Obj(); // 0xcb PushV
	var_18_object = var_1_object; // 0xcc MovT
	var_19_object = var_0_object; // 0xcd MovT
	func_921(); // 0xce NEW_2
	
Label_208:
	var_20_int = 43844; // 0xd0 PushI
	var_21_bool = var_7_bool == var_20_int; // 0xd1 Eq
	if(var_21_bool == 0) goto Label_216; // 0xd2 JumpB
	var_22_object = Obj(); var_23_object = Obj(); // 0xd3 PushV
	var_22_object = var_1_object; // 0xd4 MovT
	var_23_object = var_0_object; // 0xd5 MovT
	func_921(); // 0xd6 NEW_2
	
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
	func_927(var_45_object); // 0xe6 NEW_2
	if(var_44_bool == 0) goto Label_238; // 0xe8 JumpB
	var_52_int = 541660; // 0xe9 PushI
	var_53_int = 43852; // 0xea PushI
	var_54_int = 43835; // 0xeb PushI
	AddReply(var_52_int, var_53_int, var_54_int); // 0xec TObjFunc
	
Label_238:
	var_55_bool = 0; var_56_object = Obj(); // 0xee PushV
	var_56_object = var_1_object; // 0xef MovT
	func_927(var_56_object); // 0xf0 NEW_2
	if(var_55_bool == 0) goto Label_248; // 0xf2 JumpB
	var_57_int = 541664; // 0xf3 PushI
	var_58_int = 43840; // 0xf4 PushI
	var_59_int = 43839; // 0xf5 PushI
	AddReply(var_57_int, var_58_int, var_59_int); // 0xf6 TObjFunc
	
Label_248:
	var_60_bool = 0; var_61_object = Obj(); // 0xf8 PushV
	var_61_object = var_1_object; // 0xf9 MovT
	func_927(var_61_object); // 0xfa NEW_2
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
	func_964(var_188_bool); // 0x21e NEW_2
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
	func_891(var_14_object); // 0x24b NEW_2
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
	func_891(var_9_object); // 0x260 NEW_2
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
	var_64_bool = var_18_bool == 0; // 0x7 Not
	if(var_64_bool == 0) goto Label_11; // 0x8 JumpB
	var_7_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_14_object); // 0xb Func
	var_65_int = 0; // 0xd PushV
	func_958(var_65_int); // 0xe NEW_2
	SetNPCName(var_65_int); // 0x10 ObjFunc
	var_66_int = 0; // 0x12 PushV
	func_956(var_66_int); // 0x13 NEW_2
	SetNPCDescription(var_66_int); // 0x15 ObjFunc
	var_67_string = ""; // 0x17 PushV
	func_960(var_67_string); // 0x18 NEW_2
	SetPhoto(var_67_string); // 0x1a ObjFunc
	var_68_string = ""; // 0x1c PushV
	func_962(var_68_string); // 0x1d NEW_2
	SetPhoto2(var_68_string); // 0x1f ObjFunc
	var_69_int = 0; // 0x21 PushV
	func_939(var_69_int); // 0x22 NEW_2
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
	func_891(var_80_object); // 0x31 NEW_2
	var_79_object = var_80_object; // 0x32 Mov
	func_700(var_78_bool, var_79_object); // 0x34 NEW_2
	var_173_object = Obj(); var_174_object = Obj(); // 0x36 PushV
	var_173_object = var_8_object; // 0x37 Mov
	var_174_object = var_14_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_175_object, var_176_object, var_177_string, var_178_bool, var_173_object, var_174_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_17_bool); // 0x3d ObjFunc
	
Label_63:
	var_240_bool = var_17_bool == 0; // 0x3f Not
	if(var_240_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_17_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_241_object = Obj(); // 0x46 PushV
	var_241_object = var_8_object; // 0x47 Mov
	func_683(); // 0x48 NEW_2
	StopDialog(var_14_object); // 0x4a Func
	GetReturnValue(var_16_int); // 0x4c ObjFunc
	var_7_int = var_16_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_897(var_45_cvector, var_46_cvector)
{
	var_48_float = 0; var_49_float = 0; // 0x381 PushV
	var_50_int = var_46_cvector | var_46_cvector; // 0x382 Or
	var_49_float = sqrt(var_50_int); // 0x383 Sqrt2
	var_51_float = 0.0; // 0x384 PushF
	var_52_bool = var_49_float < var_51_float; // 0x385 LT
	if(var_52_bool == 0) goto Label_905; // 0x386 JumpB
	var_45_cvector = CVector(0.0, 0.0, 0.0); // 0x387 MovV
	return 2; // 0x388 Return
	
Label_905:
	var_45_cvector = var_46_cvector / var_46_cvector; // 0x389 Div2
	return 2; // 0x38a Return
}


func_700(var_78_bool, var_79_object)
{
	var_83_int = 0; var_84_int = 0; var_85_int = 0; var_86_int = 0; // 0x2bc PushV
	var_87_string = "voice_common"; // 0x2bd PushS
	GetVariable(var_87_string, var_85_int); // 0x2be Func
	var_88_int = var_85_int; // 0x2c0 Push
	if(var_88_int == 0) goto Label_738; // 0x2c1 JumpB
	var_89_bool = 0; var_90_object = Obj(); // 0x2c2 PushV
	var_90_object = var_79_object; // 0x2c3 Mov
	func_758(var_90_object); // 0x2c4 NEW_2
	var_119_bool = var_89_bool == 0; // 0x2c6 Not
	if(var_119_bool == 0) goto Label_720; // 0x2c7 JumpB
	var_120_bool = 0; var_121_object = Obj(); // 0x2c8 PushV
	var_121_object = var_79_object; // 0x2c9 Mov
	func_795(var_121_object); // 0x2ca NEW_2
	var_155_bool = var_120_bool == 0; // 0x2cc Not
	if(var_155_bool == 0) goto Label_720; // 0x2cd JumpB
	var_78_bool = 0; // 0x2ce MovB
	return 4; // 0x2cf Return
	
Label_720:
	var_156_int = 2; // 0x2d0 PushI
	irand(var_86_int, var_156_int); // 0x2d1 Func
	var_157_int = var_86_int; // 0x2d3 Push
	if(var_157_int == 0) goto Label_733; // 0x2d4 JumpB
	var_158_string = "voice_common"; // 0x2d5 PushS
	var_159_int = 1; // 0x2d6 PushI
	var_160_int = var_85_int + var_159_int; // 0x2d7 Add
	var_161_int = 3; // 0x2d8 PushI
	var_162_int = var_160_int / var_161_int; // 0x2d9 Mod
	SetVariable(var_158_string, var_162_int); // 0x2da Func
	goto Label_737; // 0x2dc Jump
	
Label_737:
	goto Label_756; // 0x2e1 Jump
	
Label_756:
	var_78_bool = 1; // 0x2f4 MovB
	return 4; // 0x2f5 Return
	
Label_733:
	var_163_string = "voice_common"; // 0x2dd PushS
	var_164_int = 0; // 0x2de PushI
	SetVariable(var_163_string, var_164_int); // 0x2df Func
	
Label_738:
	var_165_bool = 0; var_166_object = Obj(); // 0x2e2 PushV
	var_166_object = var_79_object; // 0x2e3 Mov
	func_795(var_166_object); // 0x2e4 NEW_2
	var_167_bool = var_165_bool == 0; // 0x2e6 Not
	if(var_167_bool == 0) goto Label_752; // 0x2e7 JumpB
	var_168_bool = 0; var_169_object = Obj(); // 0x2e8 PushV
	var_169_object = var_79_object; // 0x2e9 Mov
	func_758(var_169_object); // 0x2ea NEW_2
	var_170_bool = var_168_bool == 0; // 0x2ec Not
	if(var_170_bool == 0) goto Label_752; // 0x2ed JumpB
	var_78_bool = 0; // 0x2ee MovB
	return 4; // 0x2ef Return
	
Label_752:
	var_171_string = "voice_common"; // 0x2f0 PushS
	var_172_int = 1; // 0x2f1 PushI
	SetVariable(var_171_string, var_172_int); // 0x2f2 Func
}


func_960(var_67_string)
{
	var_67_string = "ui/NPC_Eva.png"; // 0x3c0 MovS
	return 0; // 0x3c1 Return
}


func_962(var_68_string)
{
	var_68_string = "ui/NPC_Eva_b.png"; // 0x3c2 MovS
	return 0; // 0x3c3 Return
}


func_964(var_60_bool)
{
	var_60_bool = 1; // 0x3c4 MovB
	return 0; // 0x3c5 Return
}


func_838(var_224_string)
{
	var_225_bool = 0; var_226_float = 0; var_227_float = 0; var_228_bool = 0; var_229_float = 0; var_230_float = 0; // 0x346 PushV
	lshHasAnimation(var_228_bool, var_224_string); // 0x347 Func
	var_231_bool = var_228_bool; // 0x349 Push
	if(var_231_bool == 0) goto Label_849; // 0x34a JumpB
	lshGetAnimTimes(var_224_string, var_229_float, var_230_float); // 0x34b Func
	var_232_bool = 0; // 0x34d PushB
	lshPlayAnimation(var_229_float, var_230_float, var_232_bool); // 0x34e Func
	goto Label_853; // 0x350 Jump
	
Label_853:
	return 6; // 0x355 Return
	
Label_849:
	var_233_string = "Can't find lsh animation : "; // 0x351 PushS
	var_234_int = var_233_string + var_224_string; // 0x352 Add
	Trace(var_234_int); // 0x353 Func
}


func_907(var_200_int, var_201_string)
{
	var_202_int = 0; var_203_int = 0; // 0x38b PushV
	GetVariable(var_201_string, var_203_int); // 0x38c Func
	var_200_int = var_203_int; // 0x38e Mov
	return 2; // 0x38f Return
}


func_912(var_133_int)
{
	var_134_float = 0; var_135_float = 0; // 0x390 PushV
	GetGameTime(var_135_float); // 0x391 Func
	var_136_int = 1; // 0x393 PushI
	var_137_int = 0; // 0x394 PushV
	var_138_int = 24; // 0x395 PushI
	var_137_int = var_135_float / var_135_float; // 0x396 Div2
	var_133_int = var_136_int + var_137_int; // 0x397 Add2
	return 2; // 0x398 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_173_object, var_174_object)
{
	var_0_object = var_174_object; // 0x52 TMov
	var_1_object = var_173_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_179_int = 1; // 0x55 PushI
	if(var_179_int == 0) goto Label_134; // 0x56 JumpB
	var_180_string = ""; // 0x57 PushV
	var_180_string = "Sexy"; // 0x58 MovS
	func_164(var_174_object, var_180_string); // 0x59 NEW_2
	var_197_int = 541659; // 0x5b PushI
	SetMessage(var_197_int); // 0x5c TObjFunc
	ClearReplies(); // 0x5e TObjFunc
	var_198_bool = 0; var_199_object = Obj(); // 0x60 PushV
	var_199_object = var_1_object; // 0x61 MovT
	func_927(var_199_object); // 0x62 NEW_2
	if(var_198_bool == 0) goto Label_106; // 0x64 JumpB
	var_206_int = 541660; // 0x65 PushI
	var_207_int = 43852; // 0x66 PushI
	var_208_int = 43835; // 0x67 PushI
	AddReply(var_206_int, var_207_int, var_208_int); // 0x68 TObjFunc
	
Label_106:
	var_209_bool = 0; var_210_object = Obj(); // 0x6a PushV
	var_210_object = var_1_object; // 0x6b MovT
	func_927(var_210_object); // 0x6c NEW_2
	if(var_209_bool == 0) goto Label_116; // 0x6e JumpB
	var_211_int = 541664; // 0x6f PushI
	var_212_int = 43840; // 0x70 PushI
	var_213_int = 43839; // 0x71 PushI
	AddReply(var_211_int, var_212_int, var_213_int); // 0x72 TObjFunc
	
Label_116:
	var_214_bool = 0; var_215_object = Obj(); // 0x74 PushV
	var_215_object = var_1_object; // 0x75 MovT
	func_927(var_215_object); // 0x76 NEW_2
	if(var_214_bool == 0) goto Label_126; // 0x78 JumpB
	var_216_int = 541668; // 0x79 PushI
	var_217_int = 43845; // 0x7a PushI
	var_218_int = 43844; // 0x7b PushI
	AddReply(var_216_int, var_217_int, var_218_int); // 0x7c TObjFunc
	
Label_126:
	var_219_int = 541661; // 0x7e PushI
	var_220_int = -1; // 0x7f PushI
	var_221_int = 43836; // 0x80 PushI
	AddReply(var_219_int, var_220_int, var_221_int); // 0x81 TObjFunc
	goto Label_134; // 0x83 Jump
	
Label_134:
	var_222_bool = 0; // 0x86 PushV
	func_964(var_222_bool); // 0x87 NEW_2
	if(var_222_bool == 0) goto Label_149; // 0x89 JumpB
	
Label_138:
	lshWaitForAnimEnd(); // 0x8a Func
	var_223_string = var_3_string; // 0x8c PushT
	if(var_223_string == 0) goto Label_143; // 0x8d JumpB
	goto Label_148; // 0x8e Jump
	
Label_148:
	goto Label_163; // 0x94 Jump
	
Label_163:
	return 0; // 0xa3 Return
	
Label_143:
	var_224_string = ""; // 0x8f PushV
	var_224_string = var_2_object; // 0x90 MovT
	func_838(var_224_string); // 0x91 NEW_2
	goto Label_138; // 0x93 Jump
	
Label_149:
	var_235_string = "all"; // 0x95 PushS
	var_236_string = "idle"; // 0x96 PushS
	PlayAnimation(var_235_string, var_236_string); // 0x97 Func
	
Label_153:
	WaitForAnimEnd(); // 0x99 Func
	var_237_string = var_3_string; // 0x9b PushT
	if(var_237_string == 0) goto Label_158; // 0x9c JumpB
	goto Label_163; // 0x9d Jump
	
Label_158:
	var_238_string = "all"; // 0x9e PushS
	var_239_string = "idle"; // 0x9f PushS
	PlayAnimation(var_238_string, var_239_string); // 0xa0 Func
	goto Label_153; // 0xa2 Jump
}


func_854(var_184_string, var_185_bool)
{
	var_188_bool = 0; var_189_float = 0; var_190_float = 0; var_191_bool = 0; var_192_float = 0; var_193_float = 0; // 0x356 PushV
	lshHasAnimation(var_191_bool, var_184_string); // 0x357 Func
	var_194_bool = var_191_bool; // 0x359 Push
	if(var_194_bool == 0) goto Label_864; // 0x35a JumpB
	lshGetAnimTimes(var_184_string, var_192_float, var_193_float); // 0x35b Func
	lshPlayAnimation(var_192_float, var_193_float, var_185_bool); // 0x35d Func
	goto Label_868; // 0x35f Jump
	
Label_868:
	return 6; // 0x364 Return
	
Label_864:
	var_195_string = "Can't find lsh animation : "; // 0x360 PushS
	var_196_int = var_195_string + var_184_string; // 0x361 Add
	Trace(var_196_int); // 0x362 Func
}


func_921()
{
	var_14_string = "ood12EvaRevenant1"; // 0x39a PushS
	var_15_int = 1; // 0x39b PushI
	SetVariable(var_14_string, var_15_int); // 0x39c Func
	return 0; // 0x39e Return
}


func_795(var_120_bool)
{
	var_122_string = ""; var_123_int = 0; var_124_bool = 0; var_125_int = 0; var_126_string = ""; var_127_string = ""; var_128_int = 0; var_129_bool = 0; var_130_int = 0; var_131_string = ""; // 0x31b PushV
	var_132_string = "d"; // 0x31c PushS
	var_133_int = 0; // 0x31d PushV
	func_912(var_133_int); // 0x31e NEW_2
	var_139_int = var_132_string + var_133_int; // 0x320 Add
	var_140_string = "m"; // 0x321 PushS
	var_127_string = var_139_int + var_140_string; // 0x322 Add2
	var_128_int = 0; // 0x323 MovI
	
Label_804:
	var_141_int = 1; // 0x324 PushI
	if(var_141_int == 0) goto Label_817; // 0x325 JumpB
	var_142_int = 1; // 0x326 PushI
	var_143_int = var_128_int + var_142_int; // 0x327 Add
	var_144_int = var_127_string + var_143_int; // 0x328 Add
	HasProperty(var_144_int, var_129_bool); // 0x329 ObjFunc
	var_145_bool = var_129_bool == 0; // 0x32b Not
	if(var_145_bool == 0) goto Label_814; // 0x32c JumpB
	goto Label_817; // 0x32d Jump
	
Label_817:
	var_146_bool = var_128_int == 0; // 0x331 Not
	if(var_146_bool == 0) goto Label_821; // 0x332 JumpB
	var_120_bool = 0; // 0x333 MovB
	return 10; // 0x334 Return
	
Label_821:
	var_130_int = 0; // 0x335 MovI
	var_147_int = 1; // 0x336 PushI
	var_148_bool = var_128_int > var_147_int; // 0x337 GT
	if(var_148_bool == 0) goto Label_827; // 0x338 JumpB
	irand(var_130_int, var_128_int); // 0x339 Func
	
Label_827:
	var_149_int = 1; // 0x33b PushI
	var_150_int = var_130_int + var_149_int; // 0x33c Add
	var_151_int = var_127_string + var_150_int; // 0x33d Add
	GetProperty(var_151_int, var_131_string); // 0x33e ObjFunc
	var_152_bool = 0; var_153_string = ""; // 0x340 PushV
	var_153_string = var_131_string; // 0x341 Mov
	func_869(var_152_bool, var_153_string); // 0x342 NEW_2
	var_120_bool = var_152_bool; // 0x343 Mov
	return 10; // 0x345 Return
	
Label_814:
	var_154_int = 1; // 0x32e PushI
	var_128_int = var_128_int + var_154_int; // 0x32f Add2
	goto Label_804; // 0x330 Jump
}


func_927(var_198_bool)
{
	var_200_int = 0; var_201_string = ""; // 0x3a0 PushV
	var_201_string = "ood12EvaRevenant1"; // 0x3a1 MovS
	func_907(var_200_int, var_201_string); // 0x3a2 NEW_2
	var_204_int = 0; // 0x3a4 PushI
	var_205_bool = var_200_int == var_204_int; // 0x3a5 Eq
	if(var_205_bool == 0) goto Label_937; // 0x3a6 JumpB
	var_198_bool = 1; // 0x3a7 MovB
	return 0; // 0x3a8 Return
	
Label_937:
	var_198_bool = 0; // 0x3a9 MovB
	return 0; // 0x3aa Return
}


func_164(var_2_object, var_180_string)
{
	var_181_bool = 0; // 0xa5 PushV
	func_964(var_181_bool); // 0xa6 NEW_2
	var_182_bool = var_181_bool == 0; // 0xa8 Not
	if(var_182_bool == 0) goto Label_171; // 0xa9 JumpB
	return 0; // 0xaa Return
	
Label_171:
	var_183_bool = var_180_string == var_2_object; // 0xab Eq
	if(var_183_bool == 0) goto Label_174; // 0xac JumpB
	return 0; // 0xad Return
	
Label_174:
	var_184_string = ""; var_185_bool = 0; // 0xae PushV
	var_184_string = var_180_string; // 0xaf Mov
	var_186_string = ""; // 0xb0 PushS
	var_187_bool = var_180_string == var_186_string; // 0xb1 Eq
	if(var_187_bool == 0) goto Label_181; // 0xb2 JumpB
	var_185_bool = 0; // 0xb3 MovB
	goto Label_182; // 0xb4 Jump
	
Label_182:
	func_854(var_184_string, var_185_bool); // 0xb6 NEW_2
	var_2_object = var_180_string; // 0xb8 TMov
	return 0; // 0xb9 Return
	
Label_181:
	var_185_bool = 1; // 0xb5 MovB
}


func_613(var_8_bool)
{
	var_8_bool = 1; // 0x265 MovB
	return 0; // 0x266 Return
}


func_869(var_112_bool, var_113_string)
{
	var_114_bool = 0; var_115_bool = 0; // 0x365 PushV
	var_116_bool = 0; // 0x366 PushV
	func_964(var_116_bool); // 0x367 NEW_2
	if(var_116_bool == 0) goto Label_882; // 0x369 JumpB
	lshHasSpeech(var_115_bool, var_113_string); // 0x36a Func
	var_117_bool = var_115_bool; // 0x36c Push
	if(var_117_bool == 0) goto Label_882; // 0x36d JumpB
	lshPlaySpeech(var_113_string); // 0x36e Func
	var_112_bool = 1; // 0x370 MovB
	return 2; // 0x371 Return
	
Label_882:
	var_112_bool = 0; // 0x372 MovB
	return 2; // 0x373 Return
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
	func_897(var_45_cvector, var_46_cvector); // 0x282 NEW_2
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
	CameraTransit(var_36_cvector, var_34_cvector); // 0x292 Func
	var_58_float = GetByIndex(var_35_cvector, 0); // 0x294 PushE
	var_59_float = GetByIndex(var_35_cvector, 2); // 0x295 PushE
	Rotate(var_58_float, var_59_float); // 0x296 Func
	var_60_bool = 0; // 0x298 PushV
	func_964(var_60_bool); // 0x299 NEW_2
	if(var_60_bool == 0) goto Label_669; // 0x29b JumpB
	goto Label_677; // 0x29c Jump
	
Label_677:
	CameraWaitForPlayFinish(); // 0x2a5 Func
	ResumeWorld(); // 0x2a7 Func
	var_18_bool = 1; // 0x2a9 MovB
	return 18; // 0x2aa Return
	
Label_669:
	var_61_string = "head"; // 0x29d PushS
	HasAnimationTrack(var_38_bool, var_61_string); // 0x29e Func
	var_62_bool = var_38_bool; // 0x2a0 Push
	if(var_62_bool == 0) goto Label_677; // 0x2a1 JumpB
	var_63_string = "head"; // 0x2a2 PushS
	LookAsyncCamera(var_63_string); // 0x2a3 Func
}


func_939(var_69_int)
{
	var_70_int = 0; var_71_int = 0; // 0x3ab PushV
	var_72_string = "branch"; // 0x3ac PushS
	GetVariable(var_72_string, var_71_int); // 0x3ad Func
	var_73_int = 0; // 0x3af PushI
	var_74_bool = var_71_int == var_73_int; // 0x3b0 Eq
	if(var_74_bool == 0) goto Label_949; // 0x3b1 JumpB
	var_69_int = 1; // 0x3b2 MovI
	return 2; // 0x3b3 Return
	
Label_949:
	var_75_int = 1; // 0x3b5 PushI
	var_76_bool = var_71_int == var_75_int; // 0x3b6 Eq
	if(var_76_bool == 0) goto Label_954; // 0x3b7 JumpB
	var_69_int = 2; // 0x3b8 MovI
	return 2; // 0x3b9 Return
	
Label_954:
	var_69_int = 3; // 0x3ba MovI
	return 2; // 0x3bb Return
}


func_683()
{
	var_242_bool = 0; var_243_bool = 0; // 0x2ab PushV
	CameraSwitchToNormal(); // 0x2ac Func
	var_244_bool = 0; // 0x2ae PushV
	func_964(var_244_bool); // 0x2af NEW_2
	if(var_244_bool == 0) goto Label_691; // 0x2b1 JumpB
	goto Label_699; // 0x2b2 Jump
	
Label_699:
	return 2; // 0x2bb Return
	
Label_691:
	var_245_string = "head"; // 0x2b3 PushS
	HasAnimationTrack(var_243_bool, var_245_string); // 0x2b4 Func
	var_246_bool = var_243_bool; // 0x2b6 Push
	if(var_246_bool == 0) goto Label_699; // 0x2b7 JumpB
	var_247_string = "head"; // 0x2b8 PushS
	UnlookAsync(var_247_string); // 0x2b9 Func
}


func_884()
{
	var_9_bool = 0; // 0x374 PushV
	func_964(var_9_bool); // 0x375 NEW_2
	if(var_9_bool == 0) goto Label_890; // 0x377 JumpB
	lshStopSpeech(); // 0x378 Func
	
Label_890:
	return 0; // 0x37a Return
}


func_565()
{
	
Label_565:
	Hold(); // 0x235 Func
	goto Label_565; // 0x237 Jump
}


func_758(var_89_bool)
{
	var_91_string = ""; var_92_int = 0; var_93_bool = 0; var_94_int = 0; var_95_string = ""; var_96_string = ""; var_97_int = 0; var_98_bool = 0; var_99_int = 0; var_100_string = ""; // 0x2f6 PushV
	var_96_string = "c"; // 0x2f7 MovS
	var_97_int = 0; // 0x2f8 MovI
	
Label_761:
	var_101_int = 1; // 0x2f9 PushI
	if(var_101_int == 0) goto Label_774; // 0x2fa JumpB
	var_102_int = 1; // 0x2fb PushI
	var_103_int = var_97_int + var_102_int; // 0x2fc Add
	var_104_int = var_96_string + var_103_int; // 0x2fd Add
	HasProperty(var_104_int, var_98_bool); // 0x2fe ObjFunc
	var_105_bool = var_98_bool == 0; // 0x300 Not
	if(var_105_bool == 0) goto Label_771; // 0x301 JumpB
	goto Label_774; // 0x302 Jump
	
Label_774:
	var_106_bool = var_97_int == 0; // 0x306 Not
	if(var_106_bool == 0) goto Label_778; // 0x307 JumpB
	var_89_bool = 0; // 0x308 MovB
	return 10; // 0x309 Return
	
Label_778:
	var_99_int = 0; // 0x30a MovI
	var_107_int = 1; // 0x30b PushI
	var_108_bool = var_97_int > var_107_int; // 0x30c GT
	if(var_108_bool == 0) goto Label_784; // 0x30d JumpB
	irand(var_99_int, var_97_int); // 0x30e Func
	
Label_784:
	var_109_int = 1; // 0x310 PushI
	var_110_int = var_99_int + var_109_int; // 0x311 Add
	var_111_int = var_96_string + var_110_int; // 0x312 Add
	GetProperty(var_111_int, var_100_string); // 0x313 ObjFunc
	var_112_bool = 0; var_113_string = ""; // 0x315 PushV
	var_113_string = var_100_string; // 0x316 Mov
	func_869(var_112_bool, var_113_string); // 0x317 NEW_2
	var_89_bool = var_112_bool; // 0x318 Mov
	return 10; // 0x31a Return
	
Label_771:
	var_118_int = 1; // 0x303 PushI
	var_97_int = var_97_int + var_118_int; // 0x304 Add2
	goto Label_761; // 0x305 Jump
}


func_891(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x37b PushV
	self(var_11_object); // 0x37c Func
	var_9_object = var_11_object; // 0x37e Mov
	return 2; // 0x37f Return
}


func_956(var_66_int)
{
	var_66_int = 515533; // 0x3bc MovI
	return 0; // 0x3bd Return
}


func_958(var_65_int)
{
	var_65_int = 502858; // 0x3be MovI
	return 0; // 0x3bf Return
}


