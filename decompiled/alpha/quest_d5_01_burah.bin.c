task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	var_8_int = 1; // 0xbc PushI
	if(var_8_int == 0) goto Label_501; // 0xbd JumpB
	func_638(); // 0xbf Call
	var_10_int = 13708; // 0xc1 PushI
	var_11_bool = var_7_bool == var_10_int; // 0xc2 Eq
	if(var_11_bool == 0) goto Label_206; // 0xc3 JumpB
	var_12_object = Obj(); var_13_object = Obj(); // 0xc4 PushV
	var_12_object = var_1_object; // 0xc5 MovT
	var_13_object = var_0_object; // 0xc6 MovT
	func_720(); // 0xc7 Call
	var_16_object = Obj(); var_17_object = Obj(); // 0xc9 PushV
	var_16_object = var_1_object; // 0xca MovT
	var_17_object = var_0_object; // 0xcb MovT
	func_683(); // 0xcc Call
	
Label_206:
	var_72_int = 11632; // 0xce PushI
	var_73_bool = var_6_int == var_72_int; // 0xcf Eq
	if(var_73_bool == 0) goto Label_279; // 0xd0 JumpB
	var_74_bool = 0; var_75_object = Obj(); // 0xd1 PushV
	var_75_object = var_1_object; // 0xd2 MovT
	func_726(var_74_bool, var_75_object); // 0xd3 Call
	if(var_74_bool == 0) goto Label_239; // 0xd5 JumpB
	var_78_string = ""; // 0xd6 PushV
	var_78_string = "Neutral"; // 0xd7 MovS
	func_171(var_7_bool, var_78_string); // 0xd8 Call
	var_93_int = 10543; // 0xda PushI
	SetMessage(var_93_int); // 0xdb TObjFunc
	ClearReplies(); // 0xdd TObjFunc
	var_94_int = 10544; // 0xdf PushI
	var_95_int = 11634; // 0xe0 PushI
	var_96_int = 11633; // 0xe1 PushI
	AddReply(var_94_int, var_95_int, var_96_int); // 0xe2 TObjFunc
	var_97_int = 10560; // 0xe4 PushI
	var_98_int = 11650; // 0xe5 PushI
	var_99_int = 11649; // 0xe6 PushI
	AddReply(var_97_int, var_98_int, var_99_int); // 0xe7 TObjFunc
	var_100_int = 10566; // 0xe9 PushI
	var_101_int = 11634; // 0xea PushI
	var_102_int = 11655; // 0xeb PushI
	AddReply(var_100_int, var_101_int, var_102_int); // 0xec TObjFunc
	return 0; // 0xee Return
	
Label_239:
	var_103_bool = 0; var_104_object = Obj(); // 0xef PushV
	var_104_object = var_1_object; // 0xf0 MovT
	func_726(var_103_bool, var_104_object); // 0xf1 Call
	if(var_103_bool == 0) goto Label_259; // 0xf3 JumpB
	var_105_string = ""; // 0xf4 PushV
	var_105_string = "Neutral"; // 0xf5 MovS
	func_171(var_7_bool, var_105_string); // 0xf6 Call
	var_106_int = 11865; // 0xf8 PushI
	SetMessage(var_106_int); // 0xf9 TObjFunc
	ClearReplies(); // 0xfb TObjFunc
	var_107_int = 11866; // 0xfd PushI
	var_108_int = 13080; // 0xfe PushI
	var_109_int = 13079; // 0xff PushI
	AddReply(var_107_int, var_108_int, var_109_int); // 0x100 TObjFunc
	return 0; // 0x102 Return
	
Label_259:
	var_110_bool = 0; var_111_object = Obj(); // 0x103 PushV
	var_111_object = var_1_object; // 0x104 MovT
	func_736(var_111_object); // 0x105 Call
	if(var_110_bool == 0) goto Label_279; // 0x107 JumpB
	var_118_string = ""; // 0x108 PushV
	var_118_string = "Neutral"; // 0x109 MovS
	func_171(var_7_bool, var_118_string); // 0x10a Call
	var_119_int = 12536; // 0x10c PushI
	SetMessage(var_119_int); // 0x10d TObjFunc
	ClearReplies(); // 0x10f TObjFunc
	var_120_int = 12537; // 0x111 PushI
	var_121_int = 13707; // 0x112 PushI
	var_122_int = 13706; // 0x113 PushI
	AddReply(var_120_int, var_121_int, var_122_int); // 0x114 TObjFunc
	return 0; // 0x116 Return
	
Label_279:
	var_123_int = 13707; // 0x117 PushI
	var_124_bool = var_6_int == var_123_int; // 0x118 Eq
	if(var_124_bool == 0) goto Label_297; // 0x119 JumpB
	var_125_string = ""; // 0x11a PushV
	var_125_string = "Neutral"; // 0x11b MovS
	func_171(var_7_bool, var_125_string); // 0x11c Call
	var_126_int = 12538; // 0x11e PushI
	SetMessage(var_126_int); // 0x11f TObjFunc
	ClearReplies(); // 0x121 TObjFunc
	var_127_int = 12539; // 0x123 PushI
	var_128_int = -1; // 0x124 PushI
	var_129_int = 13708; // 0x125 PushI
	AddReply(var_127_int, var_128_int, var_129_int); // 0x126 TObjFunc
	return 0; // 0x128 Return
	
Label_297:
	var_130_int = 13080; // 0x129 PushI
	var_131_bool = var_6_int == var_130_int; // 0x12a Eq
	if(var_131_bool == 0) goto Label_315; // 0x12b JumpB
	var_132_string = ""; // 0x12c PushV
	var_132_string = "Neutral"; // 0x12d MovS
	func_171(var_7_bool, var_132_string); // 0x12e Call
	var_133_int = 11867; // 0x130 PushI
	SetMessage(var_133_int); // 0x131 TObjFunc
	ClearReplies(); // 0x133 TObjFunc
	var_134_int = 11868; // 0x135 PushI
	var_135_int = 13082; // 0x136 PushI
	var_136_int = 13081; // 0x137 PushI
	AddReply(var_134_int, var_135_int, var_136_int); // 0x138 TObjFunc
	return 0; // 0x13a Return
	
Label_315:
	var_137_int = 13082; // 0x13b PushI
	var_138_bool = var_6_int == var_137_int; // 0x13c Eq
	if(var_138_bool == 0) goto Label_333; // 0x13d JumpB
	var_139_string = ""; // 0x13e PushV
	var_139_string = "Neutral"; // 0x13f MovS
	func_171(var_7_bool, var_139_string); // 0x140 Call
	var_140_int = 11869; // 0x142 PushI
	SetMessage(var_140_int); // 0x143 TObjFunc
	ClearReplies(); // 0x145 TObjFunc
	var_141_int = 11870; // 0x147 PushI
	var_142_int = -1; // 0x148 PushI
	var_143_int = 13083; // 0x149 PushI
	AddReply(var_141_int, var_142_int, var_143_int); // 0x14a TObjFunc
	return 0; // 0x14c Return
	
Label_333:
	var_144_int = 11650; // 0x14d PushI
	var_145_bool = var_6_int == var_144_int; // 0x14e Eq
	if(var_145_bool == 0) goto Label_351; // 0x14f JumpB
	var_146_string = ""; // 0x150 PushV
	var_146_string = "Neutral"; // 0x151 MovS
	func_171(var_7_bool, var_146_string); // 0x152 Call
	var_147_int = 10561; // 0x154 PushI
	SetMessage(var_147_int); // 0x155 TObjFunc
	ClearReplies(); // 0x157 TObjFunc
	var_148_int = 10562; // 0x159 PushI
	var_149_int = 11652; // 0x15a PushI
	var_150_int = 11651; // 0x15b PushI
	AddReply(var_148_int, var_149_int, var_150_int); // 0x15c TObjFunc
	return 0; // 0x15e Return
	
Label_351:
	var_151_int = 11652; // 0x15f PushI
	var_152_bool = var_6_int == var_151_int; // 0x160 Eq
	if(var_152_bool == 0) goto Label_374; // 0x161 JumpB
	var_153_string = ""; // 0x162 PushV
	var_153_string = "Neutral"; // 0x163 MovS
	func_171(var_7_bool, var_153_string); // 0x164 Call
	var_154_int = 10563; // 0x166 PushI
	SetMessage(var_154_int); // 0x167 TObjFunc
	ClearReplies(); // 0x169 TObjFunc
	var_155_int = 10564; // 0x16b PushI
	var_156_int = -1; // 0x16c PushI
	var_157_int = 11653; // 0x16d PushI
	AddReply(var_155_int, var_156_int, var_157_int); // 0x16e TObjFunc
	var_158_int = 10565; // 0x170 PushI
	var_159_int = -1; // 0x171 PushI
	var_160_int = 11654; // 0x172 PushI
	AddReply(var_158_int, var_159_int, var_160_int); // 0x173 TObjFunc
	return 0; // 0x175 Return
	
Label_374:
	var_161_int = 11634; // 0x176 PushI
	var_162_bool = var_6_int == var_161_int; // 0x177 Eq
	if(var_162_bool == 0) goto Label_402; // 0x178 JumpB
	var_163_string = ""; // 0x179 PushV
	var_163_string = "Neutral"; // 0x17a MovS
	func_171(var_7_bool, var_163_string); // 0x17b Call
	var_164_int = 10545; // 0x17d PushI
	SetMessage(var_164_int); // 0x17e TObjFunc
	ClearReplies(); // 0x180 TObjFunc
	var_165_int = 10546; // 0x182 PushI
	var_166_int = 11636; // 0x183 PushI
	var_167_int = 11635; // 0x184 PushI
	AddReply(var_165_int, var_166_int, var_167_int); // 0x185 TObjFunc
	var_168_int = 10553; // 0x187 PushI
	var_169_int = 11643; // 0x188 PushI
	var_170_int = 11642; // 0x189 PushI
	AddReply(var_168_int, var_169_int, var_170_int); // 0x18a TObjFunc
	var_171_int = 10557; // 0x18c PushI
	var_172_int = 11647; // 0x18d PushI
	var_173_int = 11646; // 0x18e PushI
	AddReply(var_171_int, var_172_int, var_173_int); // 0x18f TObjFunc
	return 0; // 0x191 Return
	
Label_402:
	var_174_int = 11647; // 0x192 PushI
	var_175_bool = var_6_int == var_174_int; // 0x193 Eq
	if(var_175_bool == 0) goto Label_420; // 0x194 JumpB
	var_176_string = ""; // 0x195 PushV
	var_176_string = "Neutral"; // 0x196 MovS
	func_171(var_7_bool, var_176_string); // 0x197 Call
	var_177_int = 10558; // 0x199 PushI
	SetMessage(var_177_int); // 0x19a TObjFunc
	ClearReplies(); // 0x19c TObjFunc
	var_178_int = 10559; // 0x19e PushI
	var_179_int = -1; // 0x19f PushI
	var_180_int = 11648; // 0x1a0 PushI
	AddReply(var_178_int, var_179_int, var_180_int); // 0x1a1 TObjFunc
	return 0; // 0x1a3 Return
	
Label_420:
	var_181_int = 11643; // 0x1a4 PushI
	var_182_bool = var_6_int == var_181_int; // 0x1a5 Eq
	if(var_182_bool == 0) goto Label_443; // 0x1a6 JumpB
	var_183_string = ""; // 0x1a7 PushV
	var_183_string = "Neutral"; // 0x1a8 MovS
	func_171(var_7_bool, var_183_string); // 0x1a9 Call
	var_184_int = 10554; // 0x1ab PushI
	SetMessage(var_184_int); // 0x1ac TObjFunc
	ClearReplies(); // 0x1ae TObjFunc
	var_185_int = 10555; // 0x1b0 PushI
	var_186_int = -1; // 0x1b1 PushI
	var_187_int = 11644; // 0x1b2 PushI
	AddReply(var_185_int, var_186_int, var_187_int); // 0x1b3 TObjFunc
	var_188_int = 10556; // 0x1b5 PushI
	var_189_int = -1; // 0x1b6 PushI
	var_190_int = 11645; // 0x1b7 PushI
	AddReply(var_188_int, var_189_int, var_190_int); // 0x1b8 TObjFunc
	return 0; // 0x1ba Return
	
Label_443:
	var_191_int = 11636; // 0x1bb PushI
	var_192_bool = var_6_int == var_191_int; // 0x1bc Eq
	if(var_192_bool == 0) goto Label_466; // 0x1bd JumpB
	var_193_string = ""; // 0x1be PushV
	var_193_string = "Neutral"; // 0x1bf MovS
	func_171(var_7_bool, var_193_string); // 0x1c0 Call
	var_194_int = 10547; // 0x1c2 PushI
	SetMessage(var_194_int); // 0x1c3 TObjFunc
	ClearReplies(); // 0x1c5 TObjFunc
	var_195_int = 10548; // 0x1c7 PushI
	var_196_int = -1; // 0x1c8 PushI
	var_197_int = 11637; // 0x1c9 PushI
	AddReply(var_195_int, var_196_int, var_197_int); // 0x1ca TObjFunc
	var_198_int = 10549; // 0x1cc PushI
	var_199_int = 11639; // 0x1cd PushI
	var_200_int = 11638; // 0x1ce PushI
	AddReply(var_198_int, var_199_int, var_200_int); // 0x1cf TObjFunc
	return 0; // 0x1d1 Return
	
Label_466:
	var_201_int = 11639; // 0x1d2 PushI
	var_202_bool = var_6_int == var_201_int; // 0x1d3 Eq
	if(var_202_bool == 0) goto Label_489; // 0x1d4 JumpB
	var_203_string = ""; // 0x1d5 PushV
	var_203_string = "Neutral"; // 0x1d6 MovS
	func_171(var_7_bool, var_203_string); // 0x1d7 Call
	var_204_int = 10550; // 0x1d9 PushI
	SetMessage(var_204_int); // 0x1da TObjFunc
	ClearReplies(); // 0x1dc TObjFunc
	var_205_int = 10551; // 0x1de PushI
	var_206_int = -1; // 0x1df PushI
	var_207_int = 11640; // 0x1e0 PushI
	AddReply(var_205_int, var_206_int, var_207_int); // 0x1e1 TObjFunc
	var_208_int = 10552; // 0x1e3 PushI
	var_209_int = -1; // 0x1e4 PushI
	var_210_int = 11641; // 0x1e5 PushI
	AddReply(var_208_int, var_209_int, var_210_int); // 0x1e6 TObjFunc
	return 0; // 0x1e8 Return
	
Label_489:
	var_3_string = 1; // 0x1e9 TMovB
	var_211_bool = 0; // 0x1ea PushV
	func_847(var_211_bool); // 0x1eb Call
	if(var_211_bool == 0) goto Label_497; // 0x1ed JumpB
	lshStopAnimation(); // 0x1ee Func
	goto Label_499; // 0x1f0 Jump
	
Label_499:
	return 0; // 0x1f3 Return
	
Label_497:
	StopAnimation(); // 0x1f1 Func
	
Label_501:
	return 0; // 0x1f5 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object)
{
	var_7_int = 0; var_8_object = Obj(); // 0x1f7 PushV
	var_8_object = var_6_object; // 0x1f8 Mov
	TaskCall(0); // 0x1f9 TaskCall
	func_0(var_9_object, var_7_int, var_8_object); // 0x1fa Call
	TaskReturn(); // 0x1fb TaskReturn
	return 0; // 0x1fd Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string)
{
	var_7_bool = 0; var_8_bool = 0; // 0x202 PushV
	var_9_string = "cleanup"; // 0x203 PushS
	var_10_bool = var_6_string == var_9_string; // 0x204 Eq
	if(var_10_bool == 0) goto Label_537; // 0x205 JumpB
	var_0_object = 1; // 0x206 TMovB
	IsLoaded(var_8_bool); // 0x207 Func
	var_11_bool = 0; // 0x209 PushV
	var_11_bool = 0; // 0x20a MovB
	var_12_bool = var_8_bool == 0; // 0x20b Not
	if(var_12_bool == 0) goto Label_530; // 0x20c JumpB
	var_13_bool = 0; // 0x20d PushV
	func_558(var_13_bool); // 0x20e Call
	if(var_13_bool == 0) goto Label_530; // 0x210 JumpB
	var_11_bool = 1; // 0x211 MovB
	
Label_530:
	if(var_11_bool == 0) goto Label_536; // 0x212 JumpB
	var_14_object = Obj(); // 0x213 PushV
	func_645(var_14_object); // 0x214 Call
	RemoveActor(var_14_object); // 0x216 Func
	
Label_536:
	goto Label_541; // 0x218 Jump
	
Label_541:
	return 2; // 0x21d Return
	
Label_537:
	var_17_string = "restore"; // 0x219 PushS
	var_18_bool = var_6_string == var_17_string; // 0x21a Eq
	if(var_18_bool == 0) goto Label_541; // 0x21b JumpB
	var_0_object = 0; // 0x21c TMovB
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_bool = 0; // 0x21e PushV
	var_6_bool = 0; // 0x21f MovB
	var_7_object = var_0_object; // 0x220 PushT
	if(var_7_object == 0) goto Label_551; // 0x221 JumpB
	var_8_bool = 0; // 0x222 PushV
	func_558(var_8_bool); // 0x223 Call
	if(var_8_bool == 0) goto Label_551; // 0x225 JumpB
	var_6_bool = 1; // 0x226 MovB
	
Label_551:
	if(var_6_bool == 0) goto Label_557; // 0x227 JumpB
	var_9_object = Obj(); // 0x228 PushV
	func_645(var_9_object); // 0x229 Call
	RemoveActor(var_9_object); // 0x22b Func
	
Label_557:
	return 0; // 0x22d Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	
Label_510:
	Hold(); // 0x1fe Func
	goto Label_510; // 0x200 Jump
}


func_0(var_0_object, var_7_int, var_8_object)
{
	var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_bool = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0; // 0x0 PushV
	var_0_object = var_8_object; // 0x1 TMov
	var_18_bool = 0; var_19_object = Obj(); // 0x2 PushV
	var_19_object = var_8_object; // 0x3 Mov
	func_560(var_19_object); // 0x4 Call
	var_58_bool = var_18_bool == 0; // 0x6 Not
	if(var_58_bool == 0) goto Label_10; // 0x7 JumpB
	var_7_int = -2; // 0x8 MovI
	return 8; // 0x9 Return
	
Label_10:
	CreateDialog(var_14_object); // 0xa Func
	var_59_int = 0; // 0xc PushV
	func_843(var_59_int); // 0xd Call
	SetNPCName(var_59_int); // 0xf ObjFunc
	var_60_string = ""; // 0x11 PushV
	func_845(var_60_string); // 0x12 Call
	SetPhoto(var_60_string); // 0x14 ObjFunc
	var_61_int = 0; // 0x16 PushV
	func_810(var_61_int); // 0x17 Call
	SetPlayerName(var_61_int); // 0x19 ObjFunc
	var_16_int = -1; // 0x1b MovI
	IsOverrideActive(var_15_bool); // 0x1c Func
	var_69_bool = var_15_bool; // 0x1e Push
	if(var_69_bool == 0) goto Label_34; // 0x1f JumpB
	var_7_int = -2; // 0x20 MovI
	return 8; // 0x21 Return
	
Label_34:
	DoDialog(var_14_object); // 0x22 Func
	var_70_object = Obj(); var_71_object = Obj(); // 0x24 PushV
	var_70_object = var_8_object; // 0x25 Mov
	var_71_object = var_14_object; // 0x26 Mov
	TaskCall(1); // 0x27 TaskCall
	func_63(var_72_object, var_73_object, var_74_string, var_75_bool, var_70_object, var_71_object); // 0x28 Call
	TaskReturn(); // 0x29 TaskReturn
	IsDialogEnd(var_17_bool); // 0x2b ObjFunc
	
Label_45:
	var_134_bool = var_17_bool == 0; // 0x2d Not
	if(var_134_bool == 0) goto Label_52; // 0x2e JumpB
	sync(); // 0x2f Func
	IsDialogEnd(var_17_bool); // 0x31 ObjFunc
	goto Label_45; // 0x33 Jump
	
Label_52:
	var_135_object = Obj(); // 0x34 PushV
	var_135_object = var_8_object; // 0x35 Mov
	func_616(); // 0x36 Call
	StopDialog(var_14_object); // 0x38 Func
	GetReturnValue(var_16_int); // 0x3a ObjFunc
	var_7_int = var_16_int; // 0x3c Mov
	return 8; // 0x3d Return
}


func_645(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x285 PushV
	self(var_11_object); // 0x286 Func
	var_9_object = var_11_object; // 0x288 Mov
	return 2; // 0x289 Return
}


func_651(var_43_cvector, var_44_cvector)
{
	var_46_float = 0; var_47_float = 0; // 0x28b PushV
	var_48_int = var_44_cvector | var_44_cvector; // 0x28c Or
	var_47_float = sqrt(var_48_int); // 0x28d Sqrt2
	var_49_float = 0.0; // 0x28e PushF
	var_50_bool = var_47_float < var_49_float; // 0x28f LT
	if(var_50_bool == 0) goto Label_659; // 0x290 JumpB
	var_43_cvector = CVector(0.0, 0.0, 0.0); // 0x291 MovV
	return 2; // 0x292 Return
	
Label_659:
	var_43_cvector = var_44_cvector / var_44_cvector; // 0x293 Div2
	return 2; // 0x294 Return
}


func_843(var_59_int)
{
	var_59_int = 11961; // 0x34b MovI
	return 0; // 0x34c Return
}


func_845(var_60_string)
{
	var_60_string = "ui/NPC_Burah.png"; // 0x34d MovS
	return 0; // 0x34e Return
}


func_847(var_82_bool)
{
	var_82_bool = 1; // 0x34f MovB
	return 0; // 0x350 Return
}


func_720()
{
	var_14_string = "ood5Burah1"; // 0x2d1 PushS
	var_15_int = 1; // 0x2d2 PushI
	SetVariable(var_14_string, var_15_int); // 0x2d3 Func
	return 0; // 0x2d5 Return
}


func_661(var_123_int, var_124_string)
{
	var_125_int = 0; var_126_int = 0; // 0x295 PushV
	GetVariable(var_124_string, var_126_int); // 0x296 Func
	var_123_int = var_126_int; // 0x298 Mov
	return 2; // 0x299 Return
}


func_726(var_77_bool, var_78_object)
{
	var_79_bool = 0; var_80_object = Obj(); // 0x2d7 PushV
	var_80_object = var_78_object; // 0x2d8 Mov
	func_748(var_80_object); // 0x2d9 Call
	if(var_79_bool == 0) goto Label_734; // 0x2db JumpB
	var_77_bool = 1; // 0x2dc MovB
	return 0; // 0x2dd Return
	
Label_734:
	var_77_bool = 0; // 0x2de MovB
	return 0; // 0x2df Return
}


func_793(var_22_object)
{
	var_23_object = Obj(); var_24_object = Obj(); var_25_object = Obj(); var_26_object = Obj(); // 0x319 PushV
	GetMainOutdoorScene(var_25_object); // 0x31a Func
	var_27_bool = var_25_object == 0; // 0x31c NullEq
	if(var_27_bool == 0) goto Label_804; // 0x31d JumpB
	var_28_string = "Can't find main outdoor scene"; // 0x31e PushS
	Trace(var_28_string); // 0x31f Func
	var_26_object = 0; // 0x321 SetNull
	var_22_object = var_26_object; // 0x322 Mov
	return 4; // 0x323 Return
	
Label_804:
	GetMap(var_26_object); // 0x324 ObjFunc
	var_22_object = var_26_object; // 0x326 Mov
	return 4; // 0x327 Return
}


func_666(var_66_bool, var_67_string, var_68_string)
{
	var_69_object = Obj(); var_70_object = Obj(); // 0x29a PushV
	FindActor(var_70_object, var_67_string); // 0x29b Func
	var_71_bool = var_70_object == 0; // 0x29d NullEq
	if(var_71_bool == 0) goto Label_673; // 0x29e JumpB
	var_66_bool = 0; // 0x29f MovB
	return 2; // 0x2a0 Return
	
Label_673:
	Trigger(var_70_object, var_68_string); // 0x2a1 Func
	var_66_bool = 1; // 0x2a3 MovB
	return 2; // 0x2a4 Return
}


func_736(var_121_bool)
{
	var_123_int = 0; var_124_string = ""; // 0x2e1 PushV
	var_124_string = "ood5Burah1"; // 0x2e2 MovS
	func_661(var_123_int, var_124_string); // 0x2e3 Call
	var_127_int = 0; // 0x2e5 PushI
	var_128_bool = var_123_int == var_127_int; // 0x2e6 Eq
	if(var_128_bool == 0) goto Label_746; // 0x2e7 JumpB
	var_121_bool = 1; // 0x2e8 MovB
	return 0; // 0x2e9 Return
	
Label_746:
	var_121_bool = 0; // 0x2ea MovB
	return 0; // 0x2eb Return
}


func_678(var_33_float)
{
	var_34_float = 0; var_35_float = 0; // 0x2a6 PushV
	GetGameTime(var_35_float); // 0x2a7 Func
	var_33_float = var_35_float; // 0x2a9 Mov
	return 2; // 0x2aa Return
}


func_616()
{
	CameraSwitchToNormal(); // 0x269 Func
	return 0; // 0x26b Return
}


func_810(var_61_int)
{
	var_62_int = 0; var_63_int = 0; // 0x32a PushV
	var_64_string = "player"; // 0x32b PushS
	GetVariable(var_64_string, var_63_int); // 0x32c Func
	var_65_int = 0; // 0x32e PushI
	var_66_bool = var_63_int == var_65_int; // 0x32f Eq
	if(var_66_bool == 0) goto Label_820; // 0x330 JumpB
	var_61_int = 200001; // 0x331 MovI
	return 2; // 0x332 Return
	
Label_820:
	var_67_int = 1; // 0x334 PushI
	var_68_bool = var_63_int == var_67_int; // 0x335 Eq
	if(var_68_bool == 0) goto Label_825; // 0x336 JumpB
	var_61_int = 200002; // 0x337 MovI
	return 2; // 0x338 Return
	
Label_825:
	var_61_int = 200003; // 0x339 MovI
	return 2; // 0x33a Return
}


func_171(var_2_object, var_81_string)
{
	var_82_bool = 0; // 0xac PushV
	func_847(var_82_bool); // 0xad Call
	var_83_bool = var_82_bool == 0; // 0xaf Not
	if(var_83_bool == 0) goto Label_178; // 0xb0 JumpB
	return 0; // 0xb1 Return
	
Label_178:
	var_84_bool = var_81_string == var_2_object; // 0xb2 Eq
	if(var_84_bool == 0) goto Label_181; // 0xb3 JumpB
	return 0; // 0xb4 Return
	
Label_181:
	var_85_string = ""; // 0xb5 PushV
	var_85_string = var_81_string; // 0xb6 Mov
	func_620(var_85_string); // 0xb7 Call
	var_2_object = var_81_string; // 0xb9 TMov
	return 0; // 0xba Return
}


func_683()
{
	var_18_object = Obj(); var_19_object = Obj(); // 0x2ab PushV
	var_20_string = "d5q01"; // 0x2ac PushS
	var_21_int = 7; // 0x2ad PushI
	SetVariable(var_20_string, var_21_int); // 0x2ae Func
	var_22_object = Obj(); // 0x2b0 PushV
	func_793(var_22_object); // 0x2b1 Call
	var_19_object = var_22_object; // 0x2b2 Mov
	var_29_string = "d5q01BurahMeeting1"; // 0x2b4 PushS
	var_30_string = "pt_d5q01_girl_corpse1"; // 0x2b5 PushS
	var_31_int = 1; // 0x2b6 PushI
	var_32_int = 15351; // 0x2b7 PushI
	var_33_float = 0; // 0x2b8 PushV
	func_678(var_33_float); // 0x2b9 Call
	AddMark(var_29_string, var_30_string, var_31_int, var_32_int, var_33_float); // 0x2bb ObjFunc
	var_36_string = "d5q01BurahMeeting2"; // 0x2bd PushS
	var_37_string = "pt_d5q01_girl_corpse2"; // 0x2be PushS
	var_38_int = 1; // 0x2bf PushI
	var_39_int = 15352; // 0x2c0 PushI
	var_40_float = 0; // 0x2c1 PushV
	func_678(var_40_float); // 0x2c2 Call
	AddMark(var_36_string, var_37_string, var_38_int, var_39_int, var_40_float); // 0x2c4 ObjFunc
	func_827(); // 0x2c7 Call
	var_66_bool = 0; var_67_string = ""; var_68_string = ""; // 0x2c9 PushV
	var_67_string = "quest_d5_01"; // 0x2ca MovS
	var_68_string = "burah_free"; // 0x2cb MovS
	func_666(var_66_bool, var_67_string, var_68_string); // 0x2cc Call
	return 2; // 0x2ce Return
}


func_620(var_85_string)
{
	var_86_float = 0; var_87_float = 0; var_88_float = 0; var_89_float = 0; // 0x26c PushV
	var_90_string = "playing "; // 0x26d PushS
	var_91_int = var_90_string + var_85_string; // 0x26e Add
	Trace(var_91_int); // 0x26f Func
	lshGetAnimTimes(var_85_string, var_88_float, var_89_float); // 0x271 Func
	lshPlayAnimation(var_88_float, var_89_float); // 0x273 Func
	var_92_string = "start: "; // 0x275 PushS
	var_93_int = var_92_string + var_88_float; // 0x276 Add
	Trace(var_93_int); // 0x277 Func
	var_94_string = "end: "; // 0x279 PushS
	var_95_int = var_94_string + var_89_float; // 0x27a Add
	Trace(var_95_int); // 0x27b Func
	return 4; // 0x27d Return
}


func_558(var_8_bool)
{
	var_8_bool = 1; // 0x22e MovB
	return 0; // 0x22f Return
}


func_748(var_79_bool)
{
	var_79_bool = 0; // 0x2ed MovB
	return 0; // 0x2ee Return
}


func_560(var_18_bool)
{
	var_20_float = 0; var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_bool = 0; var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_bool = 0; // 0x230 PushV
	GetPosition(var_29_cvector); // 0x231 ObjFunc
	GetEyesHeight(var_28_float); // 0x233 ObjFunc
	var_36_float = GetByIndex(var_29_cvector, 1); // 0x235 PushE
	var_36_float = var_36_float + var_28_float; // 0x236 Add2
	SetByIndex(var_29_cvector, 1) = var_36_float; // 0x237 PopE
	GetPosition(var_30_cvector); // 0x238 Func
	GetEyesHeight(var_28_float); // 0x23a Func
	var_37_float = GetByIndex(var_30_cvector, 1); // 0x23c PushE
	var_37_float = var_37_float + var_28_float; // 0x23d Add2
	SetByIndex(var_30_cvector, 1) = var_37_float; // 0x23e PopE
	var_31_cvector = var_29_cvector - var_30_cvector; // 0x23f Sub2
	var_38_float = GetByIndex(var_31_cvector, 1); // 0x240 PushE
	var_38_float = 0; // 0x241 MovI
	SetByIndex(var_31_cvector, 1) = var_38_float; // 0x242 PopE
	var_39_int = var_31_cvector | var_31_cvector; // 0x243 Or
	var_40_float = sqrt(var_39_int); // 0x244 Sqrt
	var_31_cvector = var_31_cvector / var_31_cvector; // 0x245 Div2
	var_32_cvector = -var_31_cvector; // 0x246 Neg2
	var_41_int = 70; // 0x247 PushI
	var_42_float = var_31_cvector * var_41_int; // 0x248 Mult
	var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); // 0x249 PushV
	var_45_cvector = CVector(0.0, 1.0, 0.0); // 0x24a PushVec
	var_44_cvector = var_32_cvector ^ var_45_cvector; // 0x24b Xor2
	func_651(var_43_cvector, var_44_cvector); // 0x24c Call
	var_51_int = 25; // 0x24e PushI
	var_52_float = var_43_cvector * var_51_int; // 0x24f Mult
	var_53_int = var_42_float + var_52_float; // 0x250 Add
	var_54_cvector = CVector(0.0, 10.0, 0.0); // 0x251 PushVec
	var_33_cvector = var_53_int - var_54_cvector; // 0x252 Sub2
	var_34_cvector = var_30_cvector + var_33_cvector; // 0x253 Add2
	IsOverrideActive(var_35_bool); // 0x254 Func
	var_55_bool = var_35_bool; // 0x256 Push
	if(var_55_bool == 0) goto Label_602; // 0x257 JumpB
	var_18_bool = 0; // 0x258 MovB
	return 16; // 0x259 Return
	
Label_602:
	StopWorld(); // 0x25a Func
	CameraTransit(var_34_cvector, var_32_cvector); // 0x25c Func
	var_56_float = GetByIndex(var_33_cvector, 0); // 0x25e PushE
	var_57_float = GetByIndex(var_33_cvector, 2); // 0x25f PushE
	Rotate(var_56_float, var_57_float); // 0x260 Func
	CameraWaitForPlayFinish(); // 0x262 Func
	ResumeWorld(); // 0x264 Func
	var_18_bool = 1; // 0x266 MovB
	return 16; // 0x267 Return
}


func_751(var_56_object)
{
	var_57_object = Obj(); var_58_object = Obj(); // 0x2ef PushV
	GetDiaryRoot(var_58_object); // 0x2f0 Func
	var_59_bool = var_58_object == 0; // 0x2f2 Not
	if(var_59_bool == 0) goto Label_761; // 0x2f3 JumpB
	var_60_string = "Can't retrieve diary root"; // 0x2f4 PushS
	Trace(var_60_string); // 0x2f5 Func
	var_56_object = 0; // 0x2f7 MovB
	return 2; // 0x2f8 Return
	
Label_761:
	var_56_object = var_58_object; // 0x2f9 Mov
	return 2; // 0x2fa Return
}


func_827()
{
	var_41_object = Obj(); var_42_object = Obj(); // 0x33b PushV
	var_43_string = "Adding diary entry"; // 0x33c PushS
	Trace(var_43_string); // 0x33d Func
	var_44_int = 146; // 0x33f PushI
	var_45_int = 1; // 0x340 PushI
	var_46_int = 15346; // 0x341 PushI
	CreateDiaryEntry(var_42_object, var_44_int, var_45_int, var_46_int); // 0x342 Func
	var_47_bool = 0; var_48_object = Obj(); var_49_int = 0; // 0x344 PushV
	var_48_object = var_42_object; // 0x345 Mov
	var_49_int = 139; // 0x346 MovI
	func_764(var_47_bool, var_48_object, var_49_int); // 0x347 Call
	return 2; // 0x349 Return
}


func_764(var_47_bool, var_48_object, var_49_int)
{
	var_50_object = Obj(); var_51_object = Obj(); var_52_int = 0; var_53_object = Obj(); var_54_object = Obj(); var_55_int = 0; // 0x2fc PushV
	var_56_object = Obj(); // 0x2fd PushV
	func_751(var_56_object); // 0x2fe Call
	var_53_object = var_56_object; // 0x2ff Mov
	Find(var_49_int, var_54_object); // 0x301 ObjFunc
	var_61_bool = var_54_object == 0; // 0x303 Not
	if(var_61_bool == 0) goto Label_779; // 0x304 JumpB
	var_62_string = "Can't find diary parent with id: "; // 0x305 PushS
	var_63_int = var_62_string + var_49_int; // 0x306 Add
	Trace(var_63_int); // 0x307 Func
	var_47_bool = 0; // 0x309 MovB
	return 6; // 0x30a Return
	
Label_779:
	AddChild(var_48_object); // 0x30b ObjFunc
	var_64_string = "player_diary"; // 0x30d PushS
	var_65_int = 1; // 0x30e PushI
	SetVariable(var_64_string, var_65_int); // 0x30f Func
	GetCategory(var_55_int); // 0x311 ObjFunc
	SetDiarySection(var_55_int); // 0x313 Func
	var_47_bool = 0; // 0x315 MovB
	return 6; // 0x316 Return
}


func_638()
{
	var_9_bool = 0; // 0x27e PushV
	func_847(var_9_bool); // 0x27f Call
	if(var_9_bool == 0) goto Label_644; // 0x281 JumpB
	lshStopSpeech(); // 0x282 Func
	
Label_644:
	return 0; // 0x284 Return
}


func_63(var_0_object, var_1_object, var_2_object, var_3_string, var_70_object, var_71_object)
{
	var_0_object = var_71_object; // 0x40 TMov
	var_1_object = var_70_object; // 0x41 TMov
	var_3_string = 0; // 0x42 TMovB
	var_76_int = 1; // 0x43 PushI
	if(var_76_int == 0) goto Label_141; // 0x44 JumpB
	var_77_bool = 0; var_78_object = Obj(); // 0x45 PushV
	var_78_object = var_1_object; // 0x46 MovT
	func_726(var_77_bool, var_78_object); // 0x47 Call
	if(var_77_bool == 0) goto Label_99; // 0x49 JumpB
	var_81_string = ""; // 0x4a PushV
	var_81_string = "Neutral"; // 0x4b MovS
	func_171(var_71_object, var_81_string); // 0x4c Call
	var_96_int = 10543; // 0x4e PushI
	SetMessage(var_96_int); // 0x4f TObjFunc
	ClearReplies(); // 0x51 TObjFunc
	var_97_int = 10544; // 0x53 PushI
	var_98_int = 11634; // 0x54 PushI
	var_99_int = 11633; // 0x55 PushI
	AddReply(var_97_int, var_98_int, var_99_int); // 0x56 TObjFunc
	var_100_int = 10560; // 0x58 PushI
	var_101_int = 11650; // 0x59 PushI
	var_102_int = 11649; // 0x5a PushI
	AddReply(var_100_int, var_101_int, var_102_int); // 0x5b TObjFunc
	var_103_int = 10566; // 0x5d PushI
	var_104_int = 11634; // 0x5e PushI
	var_105_int = 11655; // 0x5f PushI
	AddReply(var_103_int, var_104_int, var_105_int); // 0x60 TObjFunc
	goto Label_141; // 0x62 Jump
	
Label_141:
	var_106_bool = 0; // 0x8d PushV
	func_847(var_106_bool); // 0x8e Call
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
	func_620(var_108_string); // 0x98 Call
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
	
Label_99:
	var_114_bool = 0; var_115_object = Obj(); // 0x63 PushV
	var_115_object = var_1_object; // 0x64 MovT
	func_726(var_114_bool, var_115_object); // 0x65 Call
	if(var_114_bool == 0) goto Label_119; // 0x67 JumpB
	var_116_string = ""; // 0x68 PushV
	var_116_string = "Neutral"; // 0x69 MovS
	func_171(var_71_object, var_116_string); // 0x6a Call
	var_117_int = 11865; // 0x6c PushI
	SetMessage(var_117_int); // 0x6d TObjFunc
	ClearReplies(); // 0x6f TObjFunc
	var_118_int = 11866; // 0x71 PushI
	var_119_int = 13080; // 0x72 PushI
	var_120_int = 13079; // 0x73 PushI
	AddReply(var_118_int, var_119_int, var_120_int); // 0x74 TObjFunc
	goto Label_141; // 0x76 Jump
	
Label_119:
	var_121_bool = 0; var_122_object = Obj(); // 0x77 PushV
	var_122_object = var_1_object; // 0x78 MovT
	func_736(var_122_object); // 0x79 Call
	if(var_121_bool == 0) goto Label_139; // 0x7b JumpB
	var_129_string = ""; // 0x7c PushV
	var_129_string = "Neutral"; // 0x7d MovS
	func_171(var_71_object, var_129_string); // 0x7e Call
	var_130_int = 12536; // 0x80 PushI
	SetMessage(var_130_int); // 0x81 TObjFunc
	ClearReplies(); // 0x83 TObjFunc
	var_131_int = 12537; // 0x85 PushI
	var_132_int = 13707; // 0x86 PushI
	var_133_int = 13706; // 0x87 PushI
	AddReply(var_131_int, var_132_int, var_133_int); // 0x88 TObjFunc
	goto Label_141; // 0x8a Jump
	
Label_139:
	return 0; // 0x8b Return
}


