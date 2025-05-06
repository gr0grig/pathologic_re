task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int)
{
	var_7_int = 1; // 0xbc PushI
	if(var_7_int == 0) goto Label_555; // 0xbd JumpB
	func_646(); // 0xbf Call
	var_9_int = 16592; // 0xc1 PushI
	var_10_bool = var_6_int == var_9_int; // 0xc2 Eq
	if(var_10_bool == 0) goto Label_206; // 0xc3 JumpB
	var_11_object = Obj(); var_12_object = Obj(); // 0xc4 PushV
	var_11_object = var_1_object; // 0xc5 MovT
	var_12_object = var_0_object; // 0xc6 MovT
	func_699(); // 0xc7 Call
	var_23_object = Obj(); var_24_object = Obj(); // 0xc9 PushV
	var_23_object = var_1_object; // 0xca MovT
	var_24_object = var_0_object; // 0xcb MovT
	func_706(); // 0xcc Call
	
Label_206:
	var_31_int = 16093; // 0xce PushI
	var_32_bool = var_5_int == var_31_int; // 0xcf Eq
	if(var_32_bool == 0) goto Label_279; // 0xd0 JumpB
	var_33_bool = 0; var_34_object = Obj(); // 0xd1 PushV
	var_34_object = var_1_object; // 0xd2 MovT
	func_723(var_33_bool, var_34_object); // 0xd3 Call
	if(var_33_bool == 0) goto Label_229; // 0xd5 JumpB
	var_44_string = ""; // 0xd6 PushV
	var_44_string = "Neutral"; // 0xd7 MovS
	func_171(var_6_int, var_44_string); // 0xd8 Call
	var_59_int = 14847; // 0xda PushI
	SetMessage(var_59_int); // 0xdb TObjFunc
	ClearReplies(); // 0xdd TObjFunc
	var_60_int = 14848; // 0xdf PushI
	var_61_int = -1; // 0xe0 PushI
	var_62_int = 16094; // 0xe1 PushI
	AddReply(var_60_int, var_61_int, var_62_int); // 0xe2 TObjFunc
	return 0; // 0xe4 Return
	
Label_229:
	var_63_string = ""; // 0xe5 PushV
	var_63_string = "Neutral"; // 0xe6 MovS
	func_171(var_6_int, var_63_string); // 0xe7 Call
	var_64_int = 14849; // 0xe9 PushI
	SetMessage(var_64_int); // 0xea TObjFunc
	ClearReplies(); // 0xec TObjFunc
	var_65_bool = 0; var_66_object = Obj(); // 0xee PushV
	var_66_object = var_1_object; // 0xef MovT
	func_713(var_65_bool, var_66_object); // 0xf0 Call
	if(var_65_bool == 0) goto Label_248; // 0xf2 JumpB
	var_69_int = 14850; // 0xf3 PushI
	var_70_int = 16097; // 0xf4 PushI
	var_71_int = 16096; // 0xf5 PushI
	AddReply(var_69_int, var_70_int, var_71_int); // 0xf6 TObjFunc
	
Label_248:
	var_72_bool = 0; var_73_object = Obj(); // 0xf8 PushV
	var_73_object = var_1_object; // 0xf9 MovT
	func_713(var_72_bool, var_73_object); // 0xfa Call
	if(var_72_bool == 0) goto Label_258; // 0xfc JumpB
	var_74_int = 14852; // 0xfd PushI
	var_75_int = 16099; // 0xfe PushI
	var_76_int = 16098; // 0xff PushI
	AddReply(var_74_int, var_75_int, var_76_int); // 0x100 TObjFunc
	
Label_258:
	var_77_int = 15494; // 0x102 PushI
	var_78_int = 16591; // 0x103 PushI
	var_79_int = 16590; // 0x104 PushI
	AddReply(var_77_int, var_78_int, var_79_int); // 0x105 TObjFunc
	return 0; // 0x107 Return
	
Label_279:
	var_80_int = 16103; // 0x117 PushI
	var_81_bool = var_5_int == var_80_int; // 0x118 Eq
	if(var_81_bool == 0) goto Label_302; // 0x119 JumpB
	var_82_string = ""; // 0x11a PushV
	var_82_string = "Neutral"; // 0x11b MovS
	func_171(var_6_int, var_82_string); // 0x11c Call
	var_83_int = 14857; // 0x11e PushI
	SetMessage(var_83_int); // 0x11f TObjFunc
	ClearReplies(); // 0x121 TObjFunc
	var_84_int = 14858; // 0x123 PushI
	var_85_int = 16105; // 0x124 PushI
	var_86_int = 16104; // 0x125 PushI
	AddReply(var_84_int, var_85_int, var_86_int); // 0x126 TObjFunc
	var_87_int = 14880; // 0x128 PushI
	var_88_int = 16127; // 0x129 PushI
	var_89_int = 16126; // 0x12a PushI
	AddReply(var_87_int, var_88_int, var_89_int); // 0x12b TObjFunc
	return 0; // 0x12d Return
	
Label_302:
	var_90_int = 16127; // 0x12e PushI
	var_91_bool = var_5_int == var_90_int; // 0x12f Eq
	if(var_91_bool == 0) goto Label_320; // 0x130 JumpB
	var_92_string = ""; // 0x131 PushV
	var_92_string = "Neutral"; // 0x132 MovS
	func_171(var_6_int, var_92_string); // 0x133 Call
	var_93_int = 14881; // 0x135 PushI
	SetMessage(var_93_int); // 0x136 TObjFunc
	ClearReplies(); // 0x138 TObjFunc
	var_94_int = 14882; // 0x13a PushI
	var_95_int = -1; // 0x13b PushI
	var_96_int = 16128; // 0x13c PushI
	AddReply(var_94_int, var_95_int, var_96_int); // 0x13d TObjFunc
	return 0; // 0x13f Return
	
Label_320:
	var_97_int = 16105; // 0x140 PushI
	var_98_bool = var_5_int == var_97_int; // 0x141 Eq
	if(var_98_bool == 0) goto Label_343; // 0x142 JumpB
	var_99_string = ""; // 0x143 PushV
	var_99_string = "Neutral"; // 0x144 MovS
	func_171(var_6_int, var_99_string); // 0x145 Call
	var_100_int = 14859; // 0x147 PushI
	SetMessage(var_100_int); // 0x148 TObjFunc
	ClearReplies(); // 0x14a TObjFunc
	var_101_int = 14860; // 0x14c PushI
	var_102_int = 16107; // 0x14d PushI
	var_103_int = 16106; // 0x14e PushI
	AddReply(var_101_int, var_102_int, var_103_int); // 0x14f TObjFunc
	var_104_int = 14879; // 0x151 PushI
	var_105_int = -1; // 0x152 PushI
	var_106_int = 16125; // 0x153 PushI
	AddReply(var_104_int, var_105_int, var_106_int); // 0x154 TObjFunc
	return 0; // 0x156 Return
	
Label_343:
	var_107_int = 16107; // 0x157 PushI
	var_108_bool = var_5_int == var_107_int; // 0x158 Eq
	if(var_108_bool == 0) goto Label_361; // 0x159 JumpB
	var_109_string = ""; // 0x15a PushV
	var_109_string = "Neutral"; // 0x15b MovS
	func_171(var_6_int, var_109_string); // 0x15c Call
	var_110_int = 14861; // 0x15e PushI
	SetMessage(var_110_int); // 0x15f TObjFunc
	ClearReplies(); // 0x161 TObjFunc
	var_111_int = 14862; // 0x163 PushI
	var_112_int = 16109; // 0x164 PushI
	var_113_int = 16108; // 0x165 PushI
	AddReply(var_111_int, var_112_int, var_113_int); // 0x166 TObjFunc
	return 0; // 0x168 Return
	
Label_361:
	var_114_int = 16109; // 0x169 PushI
	var_115_bool = var_5_int == var_114_int; // 0x16a Eq
	if(var_115_bool == 0) goto Label_384; // 0x16b JumpB
	var_116_string = ""; // 0x16c PushV
	var_116_string = "Neutral"; // 0x16d MovS
	func_171(var_6_int, var_116_string); // 0x16e Call
	var_117_int = 14863; // 0x170 PushI
	SetMessage(var_117_int); // 0x171 TObjFunc
	ClearReplies(); // 0x173 TObjFunc
	var_118_int = 14864; // 0x175 PushI
	var_119_int = 16111; // 0x176 PushI
	var_120_int = 16110; // 0x177 PushI
	AddReply(var_118_int, var_119_int, var_120_int); // 0x178 TObjFunc
	var_121_int = 14870; // 0x17a PushI
	var_122_int = 16117; // 0x17b PushI
	var_123_int = 16116; // 0x17c PushI
	AddReply(var_121_int, var_122_int, var_123_int); // 0x17d TObjFunc
	return 0; // 0x17f Return
	
Label_384:
	var_124_int = 16117; // 0x180 PushI
	var_125_bool = var_5_int == var_124_int; // 0x181 Eq
	if(var_125_bool == 0) goto Label_407; // 0x182 JumpB
	var_126_string = ""; // 0x183 PushV
	var_126_string = "Neutral"; // 0x184 MovS
	func_171(var_6_int, var_126_string); // 0x185 Call
	var_127_int = 14871; // 0x187 PushI
	SetMessage(var_127_int); // 0x188 TObjFunc
	ClearReplies(); // 0x18a TObjFunc
	var_128_int = 14872; // 0x18c PushI
	var_129_int = -1; // 0x18d PushI
	var_130_int = 16118; // 0x18e PushI
	AddReply(var_128_int, var_129_int, var_130_int); // 0x18f TObjFunc
	var_131_int = 14873; // 0x191 PushI
	var_132_int = 16120; // 0x192 PushI
	var_133_int = 16119; // 0x193 PushI
	AddReply(var_131_int, var_132_int, var_133_int); // 0x194 TObjFunc
	return 0; // 0x196 Return
	
Label_407:
	var_134_int = 16120; // 0x197 PushI
	var_135_bool = var_5_int == var_134_int; // 0x198 Eq
	if(var_135_bool == 0) goto Label_430; // 0x199 JumpB
	var_136_string = ""; // 0x19a PushV
	var_136_string = "Neutral"; // 0x19b MovS
	func_171(var_6_int, var_136_string); // 0x19c Call
	var_137_int = 14874; // 0x19e PushI
	SetMessage(var_137_int); // 0x19f TObjFunc
	ClearReplies(); // 0x1a1 TObjFunc
	var_138_int = 14875; // 0x1a3 PushI
	var_139_int = -1; // 0x1a4 PushI
	var_140_int = 16121; // 0x1a5 PushI
	AddReply(var_138_int, var_139_int, var_140_int); // 0x1a6 TObjFunc
	var_141_int = 14876; // 0x1a8 PushI
	var_142_int = 16123; // 0x1a9 PushI
	var_143_int = 16122; // 0x1aa PushI
	AddReply(var_141_int, var_142_int, var_143_int); // 0x1ab TObjFunc
	return 0; // 0x1ad Return
	
Label_430:
	var_144_int = 16123; // 0x1ae PushI
	var_145_bool = var_5_int == var_144_int; // 0x1af Eq
	if(var_145_bool == 0) goto Label_448; // 0x1b0 JumpB
	var_146_string = ""; // 0x1b1 PushV
	var_146_string = "Neutral"; // 0x1b2 MovS
	func_171(var_6_int, var_146_string); // 0x1b3 Call
	var_147_int = 14877; // 0x1b5 PushI
	SetMessage(var_147_int); // 0x1b6 TObjFunc
	ClearReplies(); // 0x1b8 TObjFunc
	var_148_int = 14878; // 0x1ba PushI
	var_149_int = -1; // 0x1bb PushI
	var_150_int = 16124; // 0x1bc PushI
	AddReply(var_148_int, var_149_int, var_150_int); // 0x1bd TObjFunc
	return 0; // 0x1bf Return
	
Label_448:
	var_151_int = 16111; // 0x1c0 PushI
	var_152_bool = var_5_int == var_151_int; // 0x1c1 Eq
	if(var_152_bool == 0) goto Label_471; // 0x1c2 JumpB
	var_153_string = ""; // 0x1c3 PushV
	var_153_string = "Neutral"; // 0x1c4 MovS
	func_171(var_6_int, var_153_string); // 0x1c5 Call
	var_154_int = 14865; // 0x1c7 PushI
	SetMessage(var_154_int); // 0x1c8 TObjFunc
	ClearReplies(); // 0x1ca TObjFunc
	var_155_int = 14866; // 0x1cc PushI
	var_156_int = 16113; // 0x1cd PushI
	var_157_int = 16112; // 0x1ce PushI
	AddReply(var_155_int, var_156_int, var_157_int); // 0x1cf TObjFunc
	var_158_int = 14869; // 0x1d1 PushI
	var_159_int = -1; // 0x1d2 PushI
	var_160_int = 16115; // 0x1d3 PushI
	AddReply(var_158_int, var_159_int, var_160_int); // 0x1d4 TObjFunc
	return 0; // 0x1d6 Return
	
Label_471:
	var_161_int = 16113; // 0x1d7 PushI
	var_162_bool = var_5_int == var_161_int; // 0x1d8 Eq
	if(var_162_bool == 0) goto Label_489; // 0x1d9 JumpB
	var_163_string = ""; // 0x1da PushV
	var_163_string = "Neutral"; // 0x1db MovS
	func_171(var_6_int, var_163_string); // 0x1dc Call
	var_164_int = 14867; // 0x1de PushI
	SetMessage(var_164_int); // 0x1df TObjFunc
	ClearReplies(); // 0x1e1 TObjFunc
	var_165_int = 14868; // 0x1e3 PushI
	var_166_int = -1; // 0x1e4 PushI
	var_167_int = 16114; // 0x1e5 PushI
	AddReply(var_165_int, var_166_int, var_167_int); // 0x1e6 TObjFunc
	return 0; // 0x1e8 Return
	
Label_489:
	var_168_int = 16591; // 0x1e9 PushI
	var_169_bool = var_5_int == var_168_int; // 0x1ea Eq
	if(var_169_bool == 0) goto Label_507; // 0x1eb JumpB
	var_170_string = ""; // 0x1ec PushV
	var_170_string = "Neutral"; // 0x1ed MovS
	func_171(var_6_int, var_170_string); // 0x1ee Call
	var_171_int = 15495; // 0x1f0 PushI
	SetMessage(var_171_int); // 0x1f1 TObjFunc
	ClearReplies(); // 0x1f3 TObjFunc
	var_172_int = 15496; // 0x1f5 PushI
	var_173_int = -1; // 0x1f6 PushI
	var_174_int = 16592; // 0x1f7 PushI
	AddReply(var_172_int, var_173_int, var_174_int); // 0x1f8 TObjFunc
	return 0; // 0x1fa Return
	
Label_507:
	var_175_int = 16099; // 0x1fb PushI
	var_176_bool = var_5_int == var_175_int; // 0x1fc Eq
	if(var_176_bool == 0) goto Label_525; // 0x1fd JumpB
	var_177_string = ""; // 0x1fe PushV
	var_177_string = "Neutral"; // 0x1ff MovS
	func_171(var_6_int, var_177_string); // 0x200 Call
	var_178_int = 14853; // 0x202 PushI
	SetMessage(var_178_int); // 0x203 TObjFunc
	ClearReplies(); // 0x205 TObjFunc
	var_179_int = 14854; // 0x207 PushI
	var_180_int = -1; // 0x208 PushI
	var_181_int = 16100; // 0x209 PushI
	AddReply(var_179_int, var_180_int, var_181_int); // 0x20a TObjFunc
	return 0; // 0x20c Return
	
Label_525:
	var_182_int = 16097; // 0x20d PushI
	var_183_bool = var_5_int == var_182_int; // 0x20e Eq
	if(var_183_bool == 0) goto Label_543; // 0x20f JumpB
	var_184_string = ""; // 0x210 PushV
	var_184_string = "Neutral"; // 0x211 MovS
	func_171(var_6_int, var_184_string); // 0x212 Call
	var_185_int = 14851; // 0x214 PushI
	SetMessage(var_185_int); // 0x215 TObjFunc
	ClearReplies(); // 0x217 TObjFunc
	var_186_int = 15337; // 0x219 PushI
	var_187_int = -1; // 0x21a PushI
	var_188_int = 16560; // 0x21b PushI
	AddReply(var_186_int, var_187_int, var_188_int); // 0x21c TObjFunc
	return 0; // 0x21e Return
	
Label_543:
	var_3_string = 1; // 0x21f TMovB
	var_189_bool = 0; // 0x220 PushV
	func_768(var_189_bool); // 0x221 Call
	if(var_189_bool == 0) goto Label_551; // 0x223 JumpB
	lshStopAnimation(); // 0x224 Func
	goto Label_553; // 0x226 Jump
	
Label_553:
	return 0; // 0x229 Return
	
Label_551:
	StopAnimation(); // 0x227 Func
	
Label_555:
	return 0; // 0x22b Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object)
{
	var_6_int = 0; var_7_object = Obj(); // 0x231 PushV
	var_7_object = var_5_object; // 0x232 Mov
	TaskCall(0); // 0x233 TaskCall
	func_0(var_8_object, var_6_int, var_7_object); // 0x234 Call
	TaskReturn(); // 0x235 TaskReturn
	return 0; // 0x237 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool)
{
	
Label_556:
	Hold(); // 0x22c Func
	goto Label_556; // 0x22e Jump
}


func_768(var_88_bool)
{
	var_88_bool = 0; // 0x300 MovB
	return 0; // 0x301 Return
}


func_0(var_0_object, var_6_int, var_7_object)
{
	var_9_object = Obj(); var_10_bool = 0; var_11_int = 0; var_12_bool = 0; var_13_object = Obj(); var_14_bool = 0; var_15_int = 0; var_16_bool = 0; // 0x0 PushV
	var_0_object = var_7_object; // 0x1 TMov
	var_17_bool = 0; var_18_object = Obj(); // 0x2 PushV
	var_18_object = var_7_object; // 0x3 Mov
	func_568(var_18_object); // 0x4 Call
	var_57_bool = var_17_bool == 0; // 0x6 Not
	if(var_57_bool == 0) goto Label_10; // 0x7 JumpB
	var_6_int = -2; // 0x8 MovI
	return 8; // 0x9 Return
	
Label_10:
	CreateDialog(var_13_object); // 0xa Func
	var_58_int = 0; // 0xc PushV
	func_764(var_58_int); // 0xd Call
	SetNPCName(var_58_int); // 0xf ObjFunc
	var_59_string = ""; // 0x11 PushV
	func_766(var_59_string); // 0x12 Call
	SetPhoto(var_59_string); // 0x14 ObjFunc
	var_60_int = 0; // 0x16 PushV
	func_747(var_60_int); // 0x17 Call
	SetPlayerName(var_60_int); // 0x19 ObjFunc
	var_15_int = -1; // 0x1b MovI
	IsOverrideActive(var_14_bool); // 0x1c Func
	var_68_bool = var_14_bool; // 0x1e Push
	if(var_68_bool == 0) goto Label_34; // 0x1f JumpB
	var_6_int = -2; // 0x20 MovI
	return 8; // 0x21 Return
	
Label_34:
	DoDialog(var_13_object); // 0x22 Func
	var_69_object = Obj(); var_70_object = Obj(); // 0x24 PushV
	var_69_object = var_7_object; // 0x25 Mov
	var_70_object = var_13_object; // 0x26 Mov
	TaskCall(1); // 0x27 TaskCall
	func_63(var_71_object, var_72_object, var_73_string, var_74_bool, var_69_object, var_70_object); // 0x28 Call
	TaskReturn(); // 0x29 TaskReturn
	IsDialogEnd(var_16_bool); // 0x2b ObjFunc
	
Label_45:
	var_131_bool = var_16_bool == 0; // 0x2d Not
	if(var_131_bool == 0) goto Label_52; // 0x2e JumpB
	sync(); // 0x2f Func
	IsDialogEnd(var_16_bool); // 0x31 ObjFunc
	goto Label_45; // 0x33 Jump
	
Label_52:
	var_132_object = Obj(); // 0x34 PushV
	var_132_object = var_7_object; // 0x35 Mov
	func_624(); // 0x36 Call
	StopDialog(var_13_object); // 0x38 Func
	GetReturnValue(var_15_int); // 0x3a ObjFunc
	var_6_int = var_15_int; // 0x3c Mov
	return 8; // 0x3d Return
}


func_706()
{
	var_25_bool = 0; var_26_string = ""; var_27_string = ""; // 0x2c3 PushV
	var_26_string = "quest_d12_01"; // 0x2c4 MovS
	var_27_string = "init_sobor"; // 0x2c5 MovS
	func_679(var_25_bool, var_26_string, var_27_string); // 0x2c6 Call
	return 0; // 0x2c8 Return
}


func_646()
{
	var_8_bool = 0; // 0x286 PushV
	func_768(var_8_bool); // 0x287 Call
	if(var_8_bool == 0) goto Label_652; // 0x289 JumpB
	lshStopSpeech(); // 0x28a Func
	
Label_652:
	return 0; // 0x28c Return
}


func_713(var_116_bool, var_117_object)
{
	var_118_bool = 0; var_119_object = Obj(); // 0x2ca PushV
	var_119_object = var_117_object; // 0x2cb Mov
	func_733(var_119_object); // 0x2cc Call
	if(var_118_bool == 0) goto Label_721; // 0x2ce JumpB
	var_116_bool = 1; // 0x2cf MovB
	return 0; // 0x2d0 Return
	
Label_721:
	var_116_bool = 0; // 0x2d1 MovB
	return 0; // 0x2d2 Return
}


func_653(var_42_cvector, var_43_cvector)
{
	var_45_float = 0; var_46_float = 0; // 0x28d PushV
	var_47_int = var_43_cvector | var_43_cvector; // 0x28e Or
	var_46_float = sqrt(var_47_int); // 0x28f Sqrt2
	var_48_float = 0.0; // 0x290 PushF
	var_49_bool = var_46_float < var_48_float; // 0x291 LT
	if(var_49_bool == 0) goto Label_661; // 0x292 JumpB
	var_42_cvector = CVector(0.0, 0.0, 0.0); // 0x293 MovV
	return 2; // 0x294 Return
	
Label_661:
	var_42_cvector = var_43_cvector / var_43_cvector; // 0x295 Div2
	return 2; // 0x296 Return
}


func_723(var_76_bool, var_77_object)
{
	var_78_bool = 0; var_79_object = Obj(); // 0x2d4 PushV
	var_79_object = var_77_object; // 0x2d5 Mov
	func_736(var_79_object); // 0x2d6 Call
	if(var_78_bool == 0) goto Label_731; // 0x2d8 JumpB
	var_76_bool = 1; // 0x2d9 MovB
	return 0; // 0x2da Return
	
Label_731:
	var_76_bool = 0; // 0x2db MovB
	return 0; // 0x2dc Return
}


func_663(var_13_string, var_14_bool)
{
	var_15_object = Obj(); var_16_object = Obj(); // 0x297 PushV
	FindActor(var_16_object, var_13_string); // 0x298 Func
	var_17_bool = var_16_object == 0; // 0x29a Not
	if(var_17_bool == 0) goto Label_674; // 0x29b JumpB
	var_18_string = "Door "; // 0x29c PushS
	var_19_int = var_18_string + var_13_string; // 0x29d Add
	var_20_string = " not found"; // 0x29e PushS
	var_21_int = var_19_int + var_20_string; // 0x29f Add
	Trace(var_21_int); // 0x2a0 Func
	
Label_674:
	var_22_string = "locked"; // 0x2a2 PushS
	SetProperty(var_22_string, var_14_bool); // 0x2a3 ObjFunc
	return 2; // 0x2a5 Return
}


func_733(var_118_bool)
{
	var_118_bool = 0; // 0x2de MovB
	return 0; // 0x2df Return
}


func_736(var_78_bool)
{
	var_80_int = 0; // 0x2e1 PushV
	func_691(var_80_int); // 0x2e2 Call
	var_85_int = 19; // 0x2e4 PushI
	var_86_bool = var_80_int < var_85_int; // 0x2e5 LT
	if(var_86_bool == 0) goto Label_745; // 0x2e6 JumpB
	var_78_bool = 1; // 0x2e7 MovB
	return 0; // 0x2e8 Return
	
Label_745:
	var_78_bool = 0; // 0x2e9 MovB
	return 0; // 0x2ea Return
}


func_679(var_25_bool, var_26_string, var_27_string)
{
	var_28_object = Obj(); var_29_object = Obj(); // 0x2a7 PushV
	FindActor(var_29_object, var_26_string); // 0x2a8 Func
	var_30_bool = var_29_object == 0; // 0x2aa NullEq
	if(var_30_bool == 0) goto Label_686; // 0x2ab JumpB
	var_25_bool = 0; // 0x2ac MovB
	return 2; // 0x2ad Return
	
Label_686:
	Trigger(var_29_object, var_27_string); // 0x2ae Func
	var_25_bool = 1; // 0x2b0 MovB
	return 2; // 0x2b1 Return
}


func_171(var_2_object, var_87_string)
{
	var_88_bool = 0; // 0xac PushV
	func_768(var_88_bool); // 0xad Call
	var_89_bool = var_88_bool == 0; // 0xaf Not
	if(var_89_bool == 0) goto Label_178; // 0xb0 JumpB
	return 0; // 0xb1 Return
	
Label_178:
	var_90_bool = var_87_string == var_2_object; // 0xb2 Eq
	if(var_90_bool == 0) goto Label_181; // 0xb3 JumpB
	return 0; // 0xb4 Return
	
Label_181:
	var_91_string = ""; // 0xb5 PushV
	var_91_string = var_87_string; // 0xb6 Mov
	func_628(var_91_string); // 0xb7 Call
	var_2_object = var_87_string; // 0xb9 TMov
	return 0; // 0xba Return
}


func_747(var_60_int)
{
	var_61_int = 0; var_62_int = 0; // 0x2eb PushV
	var_63_string = "player"; // 0x2ec PushS
	GetVariable(var_63_string, var_62_int); // 0x2ed Func
	var_64_int = 0; // 0x2ef PushI
	var_65_bool = var_62_int == var_64_int; // 0x2f0 Eq
	if(var_65_bool == 0) goto Label_757; // 0x2f1 JumpB
	var_60_int = 200001; // 0x2f2 MovI
	return 2; // 0x2f3 Return
	
Label_757:
	var_66_int = 1; // 0x2f5 PushI
	var_67_bool = var_62_int == var_66_int; // 0x2f6 Eq
	if(var_67_bool == 0) goto Label_762; // 0x2f7 JumpB
	var_60_int = 200002; // 0x2f8 MovI
	return 2; // 0x2f9 Return
	
Label_762:
	var_60_int = 200003; // 0x2fa MovI
	return 2; // 0x2fb Return
}


func_624()
{
	CameraSwitchToNormal(); // 0x271 Func
	return 0; // 0x273 Return
}


func_691(var_80_int)
{
	var_81_float = 0; var_82_float = 0; // 0x2b3 PushV
	GetGameTime(var_82_float); // 0x2b4 Func
	var_83_int = 0; // 0x2b6 PushV
	var_83_int = var_82_float; // 0x2b7 Mov
	var_84_int = 24; // 0x2b8 PushI
	var_80_int = var_83_int % var_84_int; // 0x2b9 Mod2
	return 2; // 0x2ba Return
}


func_628(var_91_string)
{
	var_92_float = 0; var_93_float = 0; var_94_float = 0; var_95_float = 0; // 0x274 PushV
	var_96_string = "playing "; // 0x275 PushS
	var_97_int = var_96_string + var_91_string; // 0x276 Add
	Trace(var_97_int); // 0x277 Func
	lshGetAnimTimes(var_91_string, var_94_float, var_95_float); // 0x279 Func
	lshPlayAnimation(var_94_float, var_95_float); // 0x27b Func
	var_98_string = "start: "; // 0x27d PushS
	var_99_int = var_98_string + var_94_float; // 0x27e Add
	Trace(var_99_int); // 0x27f Func
	var_100_string = "end: "; // 0x281 PushS
	var_101_int = var_100_string + var_95_float; // 0x282 Add
	Trace(var_101_int); // 0x283 Func
	return 4; // 0x285 Return
}


func_568(var_17_bool)
{
	var_19_float = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_bool = 0; var_27_float = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_bool = 0; // 0x238 PushV
	GetPosition(var_28_cvector); // 0x239 ObjFunc
	GetEyesHeight(var_27_float); // 0x23b ObjFunc
	var_35_float = GetByIndex(var_28_cvector, 1); // 0x23d PushE
	var_35_float = var_35_float + var_27_float; // 0x23e Add2
	SetByIndex(var_28_cvector, 1) = var_35_float; // 0x23f PopE
	GetPosition(var_29_cvector); // 0x240 Func
	GetEyesHeight(var_27_float); // 0x242 Func
	var_36_float = GetByIndex(var_29_cvector, 1); // 0x244 PushE
	var_36_float = var_36_float + var_27_float; // 0x245 Add2
	SetByIndex(var_29_cvector, 1) = var_36_float; // 0x246 PopE
	var_30_cvector = var_28_cvector - var_29_cvector; // 0x247 Sub2
	var_37_float = GetByIndex(var_30_cvector, 1); // 0x248 PushE
	var_37_float = 0; // 0x249 MovI
	SetByIndex(var_30_cvector, 1) = var_37_float; // 0x24a PopE
	var_38_int = var_30_cvector | var_30_cvector; // 0x24b Or
	var_39_float = sqrt(var_38_int); // 0x24c Sqrt
	var_30_cvector = var_30_cvector / var_30_cvector; // 0x24d Div2
	var_31_cvector = -var_30_cvector; // 0x24e Neg2
	var_40_int = 70; // 0x24f PushI
	var_41_float = var_30_cvector * var_40_int; // 0x250 Mult
	var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); // 0x251 PushV
	var_44_cvector = CVector(0.0, 1.0, 0.0); // 0x252 PushVec
	var_43_cvector = var_31_cvector ^ var_44_cvector; // 0x253 Xor2
	func_653(var_42_cvector, var_43_cvector); // 0x254 Call
	var_50_int = 25; // 0x256 PushI
	var_51_float = var_42_cvector * var_50_int; // 0x257 Mult
	var_52_int = var_41_float + var_51_float; // 0x258 Add
	var_53_cvector = CVector(0.0, 10.0, 0.0); // 0x259 PushVec
	var_32_cvector = var_52_int - var_53_cvector; // 0x25a Sub2
	var_33_cvector = var_29_cvector + var_32_cvector; // 0x25b Add2
	IsOverrideActive(var_34_bool); // 0x25c Func
	var_54_bool = var_34_bool; // 0x25e Push
	if(var_54_bool == 0) goto Label_610; // 0x25f JumpB
	var_17_bool = 0; // 0x260 MovB
	return 16; // 0x261 Return
	
Label_610:
	StopWorld(); // 0x262 Func
	CameraTransit(var_33_cvector, var_31_cvector); // 0x264 Func
	var_55_float = GetByIndex(var_32_cvector, 0); // 0x266 PushE
	var_56_float = GetByIndex(var_32_cvector, 2); // 0x267 PushE
	Rotate(var_55_float, var_56_float); // 0x268 Func
	CameraWaitForPlayFinish(); // 0x26a Func
	ResumeWorld(); // 0x26c Func
	var_17_bool = 1; // 0x26e MovB
	return 16; // 0x26f Return
}


func_699()
{
	var_13_string = ""; var_14_bool = 0; // 0x2bc PushV
	var_13_string = "sobor@door1"; // 0x2bd MovS
	var_14_bool = 0; // 0x2be MovB
	func_663(var_13_string, var_14_bool); // 0x2bf Call
	return 0; // 0x2c1 Return
}


func_764(var_58_int)
{
	var_58_int = 4029; // 0x2fc MovI
	return 0; // 0x2fd Return
}


func_766(var_59_string)
{
	var_59_string = "ui/NPC_Black.png"; // 0x2fe MovS
	return 0; // 0x2ff Return
}


func_63(var_0_object, var_1_object, var_2_object, var_3_string, var_69_object, var_70_object)
{
	var_0_object = var_70_object; // 0x40 TMov
	var_1_object = var_69_object; // 0x41 TMov
	var_3_string = 0; // 0x42 TMovB
	var_75_int = 1; // 0x43 PushI
	if(var_75_int == 0) goto Label_141; // 0x44 JumpB
	var_76_bool = 0; var_77_object = Obj(); // 0x45 PushV
	var_77_object = var_1_object; // 0x46 MovT
	func_723(var_76_bool, var_77_object); // 0x47 Call
	if(var_76_bool == 0) goto Label_89; // 0x49 JumpB
	var_87_string = ""; // 0x4a PushV
	var_87_string = "Neutral"; // 0x4b MovS
	func_171(var_70_object, var_87_string); // 0x4c Call
	var_102_int = 14847; // 0x4e PushI
	SetMessage(var_102_int); // 0x4f TObjFunc
	ClearReplies(); // 0x51 TObjFunc
	var_103_int = 14848; // 0x53 PushI
	var_104_int = -1; // 0x54 PushI
	var_105_int = 16094; // 0x55 PushI
	AddReply(var_103_int, var_104_int, var_105_int); // 0x56 TObjFunc
	goto Label_141; // 0x58 Jump
	
Label_141:
	var_106_bool = 0; // 0x8d PushV
	func_768(var_106_bool); // 0x8e Call
	if(var_106_bool == 0) goto Label_156; // 0x90 JumpB
	
Label_145:
	lshWaitForAnimEnd(); // 0x91 Func
	var_107_string = var_3_string; // 0x93 PushT
	if(var_107_string == 0) goto Label_150; // 0x94 JumpB
	goto Label_155; // 0x95 Jump
	
Label_155:
	goto Label_170; // 0x9b Jump
	
Label_170:
	return 0; // 0xaa Return
	
Label_150:
	var_108_string = ""; // 0x96 PushV
	var_108_string = var_2_object; // 0x97 MovT
	func_628(var_108_string); // 0x98 Call
	goto Label_145; // 0x9a Jump
	
Label_156:
	var_109_string = "all"; // 0x9c PushS
	var_110_string = "idle"; // 0x9d PushS
	PlayAnimation(var_109_string, var_110_string); // 0x9e Func
	
Label_160:
	WaitForAnimEnd(); // 0xa0 Func
	var_111_string = var_3_string; // 0xa2 PushT
	if(var_111_string == 0) goto Label_165; // 0xa3 JumpB
	goto Label_170; // 0xa4 Jump
	
Label_165:
	var_112_string = "all"; // 0xa5 PushS
	var_113_string = "idle"; // 0xa6 PushS
	PlayAnimation(var_112_string, var_113_string); // 0xa7 Func
	goto Label_160; // 0xa9 Jump
	
Label_89:
	var_114_string = ""; // 0x59 PushV
	var_114_string = "Neutral"; // 0x5a MovS
	func_171(var_70_object, var_114_string); // 0x5b Call
	var_115_int = 14849; // 0x5d PushI
	SetMessage(var_115_int); // 0x5e TObjFunc
	ClearReplies(); // 0x60 TObjFunc
	var_116_bool = 0; var_117_object = Obj(); // 0x62 PushV
	var_117_object = var_1_object; // 0x63 MovT
	func_713(var_116_bool, var_117_object); // 0x64 Call
	if(var_116_bool == 0) goto Label_108; // 0x66 JumpB
	var_120_int = 14850; // 0x67 PushI
	var_121_int = 16097; // 0x68 PushI
	var_122_int = 16096; // 0x69 PushI
	AddReply(var_120_int, var_121_int, var_122_int); // 0x6a TObjFunc
	
Label_108:
	var_123_bool = 0; var_124_object = Obj(); // 0x6c PushV
	var_124_object = var_1_object; // 0x6d MovT
	func_713(var_123_bool, var_124_object); // 0x6e Call
	if(var_123_bool == 0) goto Label_118; // 0x70 JumpB
	var_125_int = 14852; // 0x71 PushI
	var_126_int = 16099; // 0x72 PushI
	var_127_int = 16098; // 0x73 PushI
	AddReply(var_125_int, var_126_int, var_127_int); // 0x74 TObjFunc
	
Label_118:
	var_128_int = 15494; // 0x76 PushI
	var_129_int = 16591; // 0x77 PushI
	var_130_int = 16590; // 0x78 PushI
	AddReply(var_128_int, var_129_int, var_130_int); // 0x79 TObjFunc
	goto Label_141; // 0x7b Jump
}


