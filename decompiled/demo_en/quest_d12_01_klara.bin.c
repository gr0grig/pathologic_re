task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	var_8_int = 1; // 0xcb PushI
	if(var_8_int == 0) goto Label_576; // 0xcc JumpB
	func_908(); // 0xce NEW_2
	var_10_int = 42263; // 0xd0 PushI
	var_11_bool = var_7_bool == var_10_int; // 0xd1 Eq
	if(var_11_bool == 0) goto Label_216; // 0xd2 JumpB
	var_12_object = Obj(); var_13_object = Obj(); // 0xd3 PushV
	var_12_object = var_1_object; // 0xd4 MovT
	var_13_object = var_0_object; // 0xd5 MovT
	func_945(); // 0xd6 NEW_2
	
Label_216:
	var_16_int = 42277; // 0xd8 PushI
	var_17_bool = var_7_bool == var_16_int; // 0xd9 Eq
	if(var_17_bool == 0) goto Label_224; // 0xda JumpB
	var_18_object = Obj(); var_19_object = Obj(); // 0xdb PushV
	var_18_object = var_1_object; // 0xdc MovT
	var_19_object = var_0_object; // 0xdd MovT
	func_951(); // 0xde NEW_2
	
Label_224:
	var_22_int = 42262; // 0xe0 PushI
	var_23_bool = var_6_int == var_22_int; // 0xe1 Eq
	if(var_23_bool == 0) goto Label_288; // 0xe2 JumpB
	var_24_bool = 0; var_25_object = Obj(); // 0xe3 PushV
	var_25_object = var_1_object; // 0xe4 MovT
	func_957(var_25_object); // 0xe5 NEW_2
	var_32_bool = var_24_bool == 0; // 0xe7 Not
	if(var_32_bool == 0) goto Label_268; // 0xe8 JumpB
	var_33_string = ""; // 0xe9 PushV
	var_33_string = "Saveyouall"; // 0xea MovS
	func_180(var_7_bool, var_33_string); // 0xeb NEW_2
	var_50_int = 540282; // 0xed PushI
	SetMessage(var_50_int); // 0xee TObjFunc
	ClearReplies(); // 0xf0 TObjFunc
	var_51_bool = 0; var_52_object = Obj(); // 0xf2 PushV
	var_52_object = var_1_object; // 0xf3 MovT
	func_969(var_52_object); // 0xf4 NEW_2
	if(var_51_bool == 0) goto Label_252; // 0xf6 JumpB
	var_57_int = 540283; // 0xf7 PushI
	var_58_int = 42264; // 0xf8 PushI
	var_59_int = 42263; // 0xf9 PushI
	AddReply(var_57_int, var_58_int, var_59_int); // 0xfa TObjFunc
	
Label_252:
	var_60_bool = 0; var_61_object = Obj(); // 0xfc PushV
	var_61_object = var_1_object; // 0xfd MovT
	func_981(var_61_object); // 0xfe NEW_2
	if(var_60_bool == 0) goto Label_262; // 0x100 JumpB
	var_66_int = 540296; // 0x101 PushI
	var_67_int = 42278; // 0x102 PushI
	var_68_int = 42277; // 0x103 PushI
	AddReply(var_66_int, var_67_int, var_68_int); // 0x104 TObjFunc
	
Label_262:
	var_69_int = 540305; // 0x106 PushI
	var_70_int = -1; // 0x107 PushI
	var_71_int = 42286; // 0x108 PushI
	AddReply(var_69_int, var_70_int, var_71_int); // 0x109 TObjFunc
	return 0; // 0x10b Return
	
Label_268:
	var_72_string = ""; // 0x10c PushV
	var_72_string = "Neutral"; // 0x10d MovS
	func_180(var_7_bool, var_72_string); // 0x10e NEW_2
	var_73_int = 541639; // 0x110 PushI
	SetMessage(var_73_int); // 0x111 TObjFunc
	ClearReplies(); // 0x113 TObjFunc
	var_74_int = 541640; // 0x115 PushI
	var_75_int = -1; // 0x116 PushI
	var_76_int = 43812; // 0x117 PushI
	AddReply(var_74_int, var_75_int, var_76_int); // 0x118 TObjFunc
	var_77_int = 541641; // 0x11a PushI
	var_78_int = -1; // 0x11b PushI
	var_79_int = 43813; // 0x11c PushI
	AddReply(var_77_int, var_78_int, var_79_int); // 0x11d TObjFunc
	return 0; // 0x11f Return
	
Label_288:
	var_80_int = 42278; // 0x120 PushI
	var_81_bool = var_6_int == var_80_int; // 0x121 Eq
	if(var_81_bool == 0) goto Label_311; // 0x122 JumpB
	var_82_string = ""; // 0x123 PushV
	var_82_string = "Saveyouall"; // 0x124 MovS
	func_180(var_7_bool, var_82_string); // 0x125 NEW_2
	var_83_int = 540297; // 0x127 PushI
	SetMessage(var_83_int); // 0x128 TObjFunc
	ClearReplies(); // 0x12a TObjFunc
	var_84_int = 540298; // 0x12c PushI
	var_85_int = 42280; // 0x12d PushI
	var_86_int = 42279; // 0x12e PushI
	AddReply(var_84_int, var_85_int, var_86_int); // 0x12f TObjFunc
	var_87_int = 540479; // 0x131 PushI
	var_88_int = 42283; // 0x132 PushI
	var_89_int = 42474; // 0x133 PushI
	AddReply(var_87_int, var_88_int, var_89_int); // 0x134 TObjFunc
	return 0; // 0x136 Return
	
Label_311:
	var_90_int = 42280; // 0x137 PushI
	var_91_bool = var_6_int == var_90_int; // 0x138 Eq
	if(var_91_bool == 0) goto Label_334; // 0x139 JumpB
	var_92_string = ""; // 0x13a PushV
	var_92_string = "Smile"; // 0x13b MovS
	func_180(var_7_bool, var_92_string); // 0x13c NEW_2
	var_93_int = 540299; // 0x13e PushI
	SetMessage(var_93_int); // 0x13f TObjFunc
	ClearReplies(); // 0x141 TObjFunc
	var_94_int = 540300; // 0x143 PushI
	var_95_int = 42476; // 0x144 PushI
	var_96_int = 42281; // 0x145 PushI
	AddReply(var_94_int, var_95_int, var_96_int); // 0x146 TObjFunc
	var_97_int = 540301; // 0x148 PushI
	var_98_int = 42283; // 0x149 PushI
	var_99_int = 42282; // 0x14a PushI
	AddReply(var_97_int, var_98_int, var_99_int); // 0x14b TObjFunc
	return 0; // 0x14d Return
	
Label_334:
	var_100_int = 42283; // 0x14e PushI
	var_101_bool = var_6_int == var_100_int; // 0x14f Eq
	if(var_101_bool == 0) goto Label_357; // 0x150 JumpB
	var_102_string = ""; // 0x151 PushV
	var_102_string = "Saveyouall"; // 0x152 MovS
	func_180(var_7_bool, var_102_string); // 0x153 NEW_2
	var_103_int = 540302; // 0x155 PushI
	SetMessage(var_103_int); // 0x156 TObjFunc
	ClearReplies(); // 0x158 TObjFunc
	var_104_int = 540303; // 0x15a PushI
	var_105_int = 42476; // 0x15b PushI
	var_106_int = 42284; // 0x15c PushI
	AddReply(var_104_int, var_105_int, var_106_int); // 0x15d TObjFunc
	var_107_int = 540304; // 0x15f PushI
	var_108_int = 42478; // 0x160 PushI
	var_109_int = 42285; // 0x161 PushI
	AddReply(var_107_int, var_108_int, var_109_int); // 0x162 TObjFunc
	return 0; // 0x164 Return
	
Label_357:
	var_110_int = 42478; // 0x165 PushI
	var_111_bool = var_6_int == var_110_int; // 0x166 Eq
	if(var_111_bool == 0) goto Label_380; // 0x167 JumpB
	var_112_string = ""; // 0x168 PushV
	var_112_string = "Neutral"; // 0x169 MovS
	func_180(var_7_bool, var_112_string); // 0x16a NEW_2
	var_113_int = 540481; // 0x16c PushI
	SetMessage(var_113_int); // 0x16d TObjFunc
	ClearReplies(); // 0x16f TObjFunc
	var_114_int = 540482; // 0x171 PushI
	var_115_int = -1; // 0x172 PushI
	var_116_int = 42479; // 0x173 PushI
	AddReply(var_114_int, var_115_int, var_116_int); // 0x174 TObjFunc
	var_117_int = 540483; // 0x176 PushI
	var_118_int = 42476; // 0x177 PushI
	var_119_int = 42480; // 0x178 PushI
	AddReply(var_117_int, var_118_int, var_119_int); // 0x179 TObjFunc
	return 0; // 0x17b Return
	
Label_380:
	var_120_int = 42476; // 0x17c PushI
	var_121_bool = var_6_int == var_120_int; // 0x17d Eq
	if(var_121_bool == 0) goto Label_403; // 0x17e JumpB
	var_122_string = ""; // 0x17f PushV
	var_122_string = "Fear"; // 0x180 MovS
	func_180(var_7_bool, var_122_string); // 0x181 NEW_2
	var_123_int = 540480; // 0x183 PushI
	SetMessage(var_123_int); // 0x184 TObjFunc
	ClearReplies(); // 0x186 TObjFunc
	var_124_int = 540484; // 0x188 PushI
	var_125_int = -1; // 0x189 PushI
	var_126_int = 42482; // 0x18a PushI
	AddReply(var_124_int, var_125_int, var_126_int); // 0x18b TObjFunc
	var_127_int = 540485; // 0x18d PushI
	var_128_int = 42484; // 0x18e PushI
	var_129_int = 42483; // 0x18f PushI
	AddReply(var_127_int, var_128_int, var_129_int); // 0x190 TObjFunc
	return 0; // 0x192 Return
	
Label_403:
	var_130_int = 42484; // 0x193 PushI
	var_131_bool = var_6_int == var_130_int; // 0x194 Eq
	if(var_131_bool == 0) goto Label_426; // 0x195 JumpB
	var_132_string = ""; // 0x196 PushV
	var_132_string = "Fear"; // 0x197 MovS
	func_180(var_7_bool, var_132_string); // 0x198 NEW_2
	var_133_int = 540486; // 0x19a PushI
	SetMessage(var_133_int); // 0x19b TObjFunc
	ClearReplies(); // 0x19d TObjFunc
	var_134_int = 540487; // 0x19f PushI
	var_135_int = -1; // 0x1a0 PushI
	var_136_int = 42485; // 0x1a1 PushI
	AddReply(var_134_int, var_135_int, var_136_int); // 0x1a2 TObjFunc
	var_137_int = 540488; // 0x1a4 PushI
	var_138_int = -1; // 0x1a5 PushI
	var_139_int = 42486; // 0x1a6 PushI
	AddReply(var_137_int, var_138_int, var_139_int); // 0x1a7 TObjFunc
	return 0; // 0x1a9 Return
	
Label_426:
	var_140_int = 42264; // 0x1aa PushI
	var_141_bool = var_6_int == var_140_int; // 0x1ab Eq
	if(var_141_bool == 0) goto Label_449; // 0x1ac JumpB
	var_142_string = ""; // 0x1ad PushV
	var_142_string = "Saveyouall"; // 0x1ae MovS
	func_180(var_7_bool, var_142_string); // 0x1af NEW_2
	var_143_int = 540284; // 0x1b1 PushI
	SetMessage(var_143_int); // 0x1b2 TObjFunc
	ClearReplies(); // 0x1b4 TObjFunc
	var_144_int = 540285; // 0x1b6 PushI
	var_145_int = 42266; // 0x1b7 PushI
	var_146_int = 42265; // 0x1b8 PushI
	AddReply(var_144_int, var_145_int, var_146_int); // 0x1b9 TObjFunc
	var_147_int = 540489; // 0x1bb PushI
	var_148_int = 42266; // 0x1bc PushI
	var_149_int = 42487; // 0x1bd PushI
	AddReply(var_147_int, var_148_int, var_149_int); // 0x1be TObjFunc
	return 0; // 0x1c0 Return
	
Label_449:
	var_150_int = 42266; // 0x1c1 PushI
	var_151_bool = var_6_int == var_150_int; // 0x1c2 Eq
	if(var_151_bool == 0) goto Label_472; // 0x1c3 JumpB
	var_152_string = ""; // 0x1c4 PushV
	var_152_string = "Saveyouall"; // 0x1c5 MovS
	func_180(var_7_bool, var_152_string); // 0x1c6 NEW_2
	var_153_int = 540286; // 0x1c8 PushI
	SetMessage(var_153_int); // 0x1c9 TObjFunc
	ClearReplies(); // 0x1cb TObjFunc
	var_154_int = 540287; // 0x1cd PushI
	var_155_int = 42268; // 0x1ce PushI
	var_156_int = 42267; // 0x1cf PushI
	AddReply(var_154_int, var_155_int, var_156_int); // 0x1d0 TObjFunc
	var_157_int = 540295; // 0x1d2 PushI
	var_158_int = 42270; // 0x1d3 PushI
	var_159_int = 42275; // 0x1d4 PushI
	AddReply(var_157_int, var_158_int, var_159_int); // 0x1d5 TObjFunc
	return 0; // 0x1d7 Return
	
Label_472:
	var_160_int = 42268; // 0x1d8 PushI
	var_161_bool = var_6_int == var_160_int; // 0x1d9 Eq
	if(var_161_bool == 0) goto Label_495; // 0x1da JumpB
	var_162_string = ""; // 0x1db PushV
	var_162_string = "Smile"; // 0x1dc MovS
	func_180(var_7_bool, var_162_string); // 0x1dd NEW_2
	var_163_int = 540288; // 0x1df PushI
	SetMessage(var_163_int); // 0x1e0 TObjFunc
	ClearReplies(); // 0x1e2 TObjFunc
	var_164_int = 540289; // 0x1e4 PushI
	var_165_int = 42270; // 0x1e5 PushI
	var_166_int = 42269; // 0x1e6 PushI
	AddReply(var_164_int, var_165_int, var_166_int); // 0x1e7 TObjFunc
	var_167_int = 540490; // 0x1e9 PushI
	var_168_int = 42490; // 0x1ea PushI
	var_169_int = 42489; // 0x1eb PushI
	AddReply(var_167_int, var_168_int, var_169_int); // 0x1ec TObjFunc
	return 0; // 0x1ee Return
	
Label_495:
	var_170_int = 42490; // 0x1ef PushI
	var_171_bool = var_6_int == var_170_int; // 0x1f0 Eq
	if(var_171_bool == 0) goto Label_518; // 0x1f1 JumpB
	var_172_string = ""; // 0x1f2 PushV
	var_172_string = "Sly"; // 0x1f3 MovS
	func_180(var_7_bool, var_172_string); // 0x1f4 NEW_2
	var_173_int = 540491; // 0x1f6 PushI
	SetMessage(var_173_int); // 0x1f7 TObjFunc
	ClearReplies(); // 0x1f9 TObjFunc
	var_174_int = 540492; // 0x1fb PushI
	var_175_int = -1; // 0x1fc PushI
	var_176_int = 42491; // 0x1fd PushI
	AddReply(var_174_int, var_175_int, var_176_int); // 0x1fe TObjFunc
	var_177_int = 540493; // 0x200 PushI
	var_178_int = -1; // 0x201 PushI
	var_179_int = 42492; // 0x202 PushI
	AddReply(var_177_int, var_178_int, var_179_int); // 0x203 TObjFunc
	return 0; // 0x205 Return
	
Label_518:
	var_180_int = 42270; // 0x206 PushI
	var_181_bool = var_6_int == var_180_int; // 0x207 Eq
	if(var_181_bool == 0) goto Label_541; // 0x208 JumpB
	var_182_string = ""; // 0x209 PushV
	var_182_string = "Smile"; // 0x20a MovS
	func_180(var_7_bool, var_182_string); // 0x20b NEW_2
	var_183_int = 540290; // 0x20d PushI
	SetMessage(var_183_int); // 0x20e TObjFunc
	ClearReplies(); // 0x210 TObjFunc
	var_184_int = 540291; // 0x212 PushI
	var_185_int = 42272; // 0x213 PushI
	var_186_int = 42271; // 0x214 PushI
	AddReply(var_184_int, var_185_int, var_186_int); // 0x215 TObjFunc
	var_187_int = 540494; // 0x217 PushI
	var_188_int = -1; // 0x218 PushI
	var_189_int = 42493; // 0x219 PushI
	AddReply(var_187_int, var_188_int, var_189_int); // 0x21a TObjFunc
	return 0; // 0x21c Return
	
Label_541:
	var_190_int = 42272; // 0x21d PushI
	var_191_bool = var_6_int == var_190_int; // 0x21e Eq
	if(var_191_bool == 0) goto Label_564; // 0x21f JumpB
	var_192_string = ""; // 0x220 PushV
	var_192_string = "Sly"; // 0x221 MovS
	func_180(var_7_bool, var_192_string); // 0x222 NEW_2
	var_193_int = 540292; // 0x224 PushI
	SetMessage(var_193_int); // 0x225 TObjFunc
	ClearReplies(); // 0x227 TObjFunc
	var_194_int = 540293; // 0x229 PushI
	var_195_int = -1; // 0x22a PushI
	var_196_int = 42273; // 0x22b PushI
	AddReply(var_194_int, var_195_int, var_196_int); // 0x22c TObjFunc
	var_197_int = 540294; // 0x22e PushI
	var_198_int = -1; // 0x22f PushI
	var_199_int = 42274; // 0x230 PushI
	AddReply(var_197_int, var_198_int, var_199_int); // 0x231 TObjFunc
	return 0; // 0x233 Return
	
Label_564:
	var_3_string = 1; // 0x234 TMovB
	var_200_bool = 0; // 0x235 PushV
	func_1018(var_200_bool); // 0x236 NEW_2
	if(var_200_bool == 0) goto Label_572; // 0x238 JumpB
	lshStopAnimation(); // 0x239 Func
	goto Label_574; // 0x23b Jump
	
Label_574:
	return 0; // 0x23e Return
	
Label_572:
	StopAnimation(); // 0x23c Func
	
Label_576:
	return 0; // 0x240 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object)
{
	var_7_int = 0; var_8_object = Obj(); // 0x246 PushV
	var_8_object = var_6_object; // 0x247 Mov
	TaskCall(0); // 0x248 TaskCall
	func_0(var_9_object, var_7_int, var_8_object); // 0x249 NEW_2
	TaskReturn(); // 0x24a TaskReturn
	return 0; // 0x24c Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string)
{
	var_7_bool = 0; var_8_bool = 0; // 0x251 PushV
	var_9_string = "cleanup"; // 0x252 PushS
	var_10_bool = var_6_string == var_9_string; // 0x253 Eq
	if(var_10_bool == 0) goto Label_616; // 0x254 JumpB
	var_0_object = 1; // 0x255 TMovB
	IsLoaded(var_8_bool); // 0x256 Func
	var_11_bool = 0; // 0x258 PushV
	var_11_bool = 0; // 0x259 MovB
	var_12_bool = var_8_bool == 0; // 0x25a Not
	if(var_12_bool == 0) goto Label_609; // 0x25b JumpB
	var_13_bool = 0; // 0x25c PushV
	func_637(var_13_bool); // 0x25d NEW_2
	if(var_13_bool == 0) goto Label_609; // 0x25f JumpB
	var_11_bool = 1; // 0x260 MovB
	
Label_609:
	if(var_11_bool == 0) goto Label_615; // 0x261 JumpB
	var_14_object = Obj(); // 0x262 PushV
	func_915(var_14_object); // 0x263 NEW_2
	RemoveActor(var_14_object); // 0x265 Func
	
Label_615:
	goto Label_620; // 0x267 Jump
	
Label_620:
	return 2; // 0x26c Return
	
Label_616:
	var_17_string = "restore"; // 0x268 PushS
	var_18_bool = var_6_string == var_17_string; // 0x269 Eq
	if(var_18_bool == 0) goto Label_620; // 0x26a JumpB
	var_0_object = 0; // 0x26b TMovB
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_bool = 0; // 0x26d PushV
	var_6_bool = 0; // 0x26e MovB
	var_7_object = var_0_object; // 0x26f PushT
	if(var_7_object == 0) goto Label_630; // 0x270 JumpB
	var_8_bool = 0; // 0x271 PushV
	func_637(var_8_bool); // 0x272 NEW_2
	if(var_8_bool == 0) goto Label_630; // 0x274 JumpB
	var_6_bool = 1; // 0x275 MovB
	
Label_630:
	if(var_6_bool == 0) goto Label_636; // 0x276 JumpB
	var_9_object = Obj(); // 0x277 PushV
	func_915(var_9_object); // 0x278 NEW_2
	RemoveActor(var_9_object); // 0x27a Func
	
Label_636:
	return 0; // 0x27c Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	func_589(); // 0x242 NEW_2
	return 0; // 0x244 Return
}


func_0(var_0_object, var_7_int, var_8_object)
{
	var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_bool = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0; // 0x0 PushV
	var_0_object = var_8_object; // 0x1 TMov
	var_18_bool = 0; var_19_object = Obj(); var_20_float = 0; // 0x2 PushV
	var_19_object = var_8_object; // 0x3 Mov
	var_20_float = 70.0; // 0x4 MovF
	func_639(var_19_object, var_20_float); // 0x5 NEW_2
	var_64_bool = var_18_bool == 0; // 0x7 Not
	if(var_64_bool == 0) goto Label_11; // 0x8 JumpB
	var_7_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_14_object); // 0xb Func
	var_65_int = 0; // 0xd PushV
	func_1012(var_65_int); // 0xe NEW_2
	SetNPCName(var_65_int); // 0x10 ObjFunc
	var_66_int = 0; // 0x12 PushV
	func_1010(var_66_int); // 0x13 NEW_2
	SetNPCDescription(var_66_int); // 0x15 ObjFunc
	var_67_string = ""; // 0x17 PushV
	func_1014(var_67_string); // 0x18 NEW_2
	SetPhoto(var_67_string); // 0x1a ObjFunc
	var_68_string = ""; // 0x1c PushV
	func_1016(var_68_string); // 0x1d NEW_2
	SetPhoto2(var_68_string); // 0x1f ObjFunc
	var_69_int = 0; // 0x21 PushV
	func_993(var_69_int); // 0x22 NEW_2
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
	func_915(var_80_object); // 0x31 NEW_2
	var_79_object = var_80_object; // 0x32 Mov
	func_724(var_78_bool, var_79_object); // 0x34 NEW_2
	var_173_object = Obj(); var_174_object = Obj(); // 0x36 PushV
	var_173_object = var_8_object; // 0x37 Mov
	var_174_object = var_14_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_175_object, var_176_object, var_177_string, var_178_bool, var_173_object, var_174_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_17_bool); // 0x3d ObjFunc
	
Label_63:
	var_254_bool = var_17_bool == 0; // 0x3f Not
	if(var_254_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_17_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_255_object = Obj(); // 0x46 PushV
	var_255_object = var_8_object; // 0x47 Mov
	func_707(); // 0x48 NEW_2
	StopDialog(var_14_object); // 0x4a Func
	GetReturnValue(var_16_int); // 0x4c ObjFunc
	var_7_int = var_16_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_707()
{
	var_256_bool = 0; var_257_bool = 0; // 0x2c3 PushV
	CameraSwitchToNormal(); // 0x2c4 Func
	var_258_bool = 0; // 0x2c6 PushV
	func_1018(var_258_bool); // 0x2c7 NEW_2
	if(var_258_bool == 0) goto Label_715; // 0x2c9 JumpB
	goto Label_723; // 0x2ca Jump
	
Label_723:
	return 2; // 0x2d3 Return
	
Label_715:
	var_259_string = "head"; // 0x2cb PushS
	HasAnimationTrack(var_257_bool, var_259_string); // 0x2cc Func
	var_260_bool = var_257_bool; // 0x2ce Push
	if(var_260_bool == 0) goto Label_723; // 0x2cf JumpB
	var_261_string = "head"; // 0x2d0 PushS
	UnlookAsync(var_261_string); // 0x2d1 Func
}


func_969(var_207_bool)
{
	var_209_int = 0; var_210_string = ""; // 0x3ca PushV
	var_210_string = "ood12KlaraSobor1"; // 0x3cb MovS
	func_931(var_209_int, var_210_string); // 0x3cc NEW_2
	var_211_int = 0; // 0x3ce PushI
	var_212_bool = var_209_int == var_211_int; // 0x3cf Eq
	if(var_212_bool == 0) goto Label_979; // 0x3d0 JumpB
	var_207_bool = 1; // 0x3d1 MovB
	return 0; // 0x3d2 Return
	
Label_979:
	var_207_bool = 0; // 0x3d3 MovB
	return 0; // 0x3d4 Return
}


func_908()
{
	var_9_bool = 0; // 0x38c PushV
	func_1018(var_9_bool); // 0x38d NEW_2
	if(var_9_bool == 0) goto Label_914; // 0x38f JumpB
	lshStopSpeech(); // 0x390 Func
	
Label_914:
	return 0; // 0x392 Return
}


func_589()
{
	
Label_589:
	Hold(); // 0x24d Func
	goto Label_589; // 0x24f Jump
}


func_782(var_89_bool)
{
	var_91_string = ""; var_92_int = 0; var_93_bool = 0; var_94_int = 0; var_95_string = ""; var_96_string = ""; var_97_int = 0; var_98_bool = 0; var_99_int = 0; var_100_string = ""; // 0x30e PushV
	var_96_string = "c"; // 0x30f MovS
	var_97_int = 0; // 0x310 MovI
	
Label_785:
	var_101_int = 1; // 0x311 PushI
	if(var_101_int == 0) goto Label_798; // 0x312 JumpB
	var_102_int = 1; // 0x313 PushI
	var_103_int = var_97_int + var_102_int; // 0x314 Add
	var_104_int = var_96_string + var_103_int; // 0x315 Add
	HasProperty(var_104_int, var_98_bool); // 0x316 ObjFunc
	var_105_bool = var_98_bool == 0; // 0x318 Not
	if(var_105_bool == 0) goto Label_795; // 0x319 JumpB
	goto Label_798; // 0x31a Jump
	
Label_798:
	var_106_bool = var_97_int == 0; // 0x31e Not
	if(var_106_bool == 0) goto Label_802; // 0x31f JumpB
	var_89_bool = 0; // 0x320 MovB
	return 10; // 0x321 Return
	
Label_802:
	var_99_int = 0; // 0x322 MovI
	var_107_int = 1; // 0x323 PushI
	var_108_bool = var_97_int > var_107_int; // 0x324 GT
	if(var_108_bool == 0) goto Label_808; // 0x325 JumpB
	irand(var_99_int, var_97_int); // 0x326 Func
	
Label_808:
	var_109_int = 1; // 0x328 PushI
	var_110_int = var_99_int + var_109_int; // 0x329 Add
	var_111_int = var_96_string + var_110_int; // 0x32a Add
	GetProperty(var_111_int, var_100_string); // 0x32b ObjFunc
	var_112_bool = 0; var_113_string = ""; // 0x32d PushV
	var_113_string = var_100_string; // 0x32e Mov
	func_893(var_112_bool, var_113_string); // 0x32f NEW_2
	var_89_bool = var_112_bool; // 0x330 Mov
	return 10; // 0x332 Return
	
Label_795:
	var_118_int = 1; // 0x31b PushI
	var_97_int = var_97_int + var_118_int; // 0x31c Add2
	goto Label_785; // 0x31d Jump
}


func_957(var_180_bool)
{
	var_182_int = 0; var_183_string = ""; // 0x3be PushV
	var_183_string = "game_final"; // 0x3bf MovS
	func_931(var_182_int, var_183_string); // 0x3c0 NEW_2
	var_186_int = 0; // 0x3c2 PushI
	var_187_bool = var_182_int != var_186_int; // 0x3c3 Neq
	if(var_187_bool == 0) goto Label_967; // 0x3c4 JumpB
	var_180_bool = 1; // 0x3c5 MovB
	return 0; // 0x3c6 Return
	
Label_967:
	var_180_bool = 0; // 0x3c7 MovB
	return 0; // 0x3c8 Return
}


func_893(var_112_bool, var_113_string)
{
	var_114_bool = 0; var_115_bool = 0; // 0x37d PushV
	var_116_bool = 0; // 0x37e PushV
	func_1018(var_116_bool); // 0x37f NEW_2
	if(var_116_bool == 0) goto Label_906; // 0x381 JumpB
	lshHasSpeech(var_115_bool, var_113_string); // 0x382 Func
	var_117_bool = var_115_bool; // 0x384 Push
	if(var_117_bool == 0) goto Label_906; // 0x385 JumpB
	lshPlaySpeech(var_113_string); // 0x386 Func
	var_112_bool = 1; // 0x388 MovB
	return 2; // 0x389 Return
	
Label_906:
	var_112_bool = 0; // 0x38a MovB
	return 2; // 0x38b Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_173_object, var_174_object)
{
	var_0_object = var_174_object; // 0x52 TMov
	var_1_object = var_173_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_179_int = 1; // 0x55 PushI
	if(var_179_int == 0) goto Label_150; // 0x56 JumpB
	var_180_bool = 0; var_181_object = Obj(); // 0x57 PushV
	var_181_object = var_1_object; // 0x58 MovT
	func_957(var_181_object); // 0x59 NEW_2
	var_188_bool = var_180_bool == 0; // 0x5b Not
	if(var_188_bool == 0) goto Label_128; // 0x5c JumpB
	var_189_string = ""; // 0x5d PushV
	var_189_string = "Saveyouall"; // 0x5e MovS
	func_180(var_174_object, var_189_string); // 0x5f NEW_2
	var_206_int = 540282; // 0x61 PushI
	SetMessage(var_206_int); // 0x62 TObjFunc
	ClearReplies(); // 0x64 TObjFunc
	var_207_bool = 0; var_208_object = Obj(); // 0x66 PushV
	var_208_object = var_1_object; // 0x67 MovT
	func_969(var_208_object); // 0x68 NEW_2
	if(var_207_bool == 0) goto Label_112; // 0x6a JumpB
	var_213_int = 540283; // 0x6b PushI
	var_214_int = 42264; // 0x6c PushI
	var_215_int = 42263; // 0x6d PushI
	AddReply(var_213_int, var_214_int, var_215_int); // 0x6e TObjFunc
	
Label_112:
	var_216_bool = 0; var_217_object = Obj(); // 0x70 PushV
	var_217_object = var_1_object; // 0x71 MovT
	func_981(var_217_object); // 0x72 NEW_2
	if(var_216_bool == 0) goto Label_122; // 0x74 JumpB
	var_222_int = 540296; // 0x75 PushI
	var_223_int = 42278; // 0x76 PushI
	var_224_int = 42277; // 0x77 PushI
	AddReply(var_222_int, var_223_int, var_224_int); // 0x78 TObjFunc
	
Label_122:
	var_225_int = 540305; // 0x7a PushI
	var_226_int = -1; // 0x7b PushI
	var_227_int = 42286; // 0x7c PushI
	AddReply(var_225_int, var_226_int, var_227_int); // 0x7d TObjFunc
	goto Label_150; // 0x7f Jump
	
Label_150:
	var_228_bool = 0; // 0x96 PushV
	func_1018(var_228_bool); // 0x97 NEW_2
	if(var_228_bool == 0) goto Label_165; // 0x99 JumpB
	
Label_154:
	lshWaitForAnimEnd(); // 0x9a Func
	var_229_string = var_3_string; // 0x9c PushT
	if(var_229_string == 0) goto Label_159; // 0x9d JumpB
	goto Label_164; // 0x9e Jump
	
Label_164:
	goto Label_179; // 0xa4 Jump
	
Label_179:
	return 0; // 0xb3 Return
	
Label_159:
	var_230_string = ""; // 0x9f PushV
	var_230_string = var_2_object; // 0xa0 MovT
	func_862(var_230_string); // 0xa1 NEW_2
	goto Label_154; // 0xa3 Jump
	
Label_165:
	var_241_string = "all"; // 0xa5 PushS
	var_242_string = "idle"; // 0xa6 PushS
	PlayAnimation(var_241_string, var_242_string); // 0xa7 Func
	
Label_169:
	WaitForAnimEnd(); // 0xa9 Func
	var_243_string = var_3_string; // 0xab PushT
	if(var_243_string == 0) goto Label_174; // 0xac JumpB
	goto Label_179; // 0xad Jump
	
Label_174:
	var_244_string = "all"; // 0xae PushS
	var_245_string = "idle"; // 0xaf PushS
	PlayAnimation(var_244_string, var_245_string); // 0xb0 Func
	goto Label_169; // 0xb2 Jump
	
Label_128:
	var_246_string = ""; // 0x80 PushV
	var_246_string = "Neutral"; // 0x81 MovS
	func_180(var_174_object, var_246_string); // 0x82 NEW_2
	var_247_int = 541639; // 0x84 PushI
	SetMessage(var_247_int); // 0x85 TObjFunc
	ClearReplies(); // 0x87 TObjFunc
	var_248_int = 541640; // 0x89 PushI
	var_249_int = -1; // 0x8a PushI
	var_250_int = 43812; // 0x8b PushI
	AddReply(var_248_int, var_249_int, var_250_int); // 0x8c TObjFunc
	var_251_int = 541641; // 0x8e PushI
	var_252_int = -1; // 0x8f PushI
	var_253_int = 43813; // 0x90 PushI
	AddReply(var_251_int, var_252_int, var_253_int); // 0x91 TObjFunc
	goto Label_150; // 0x93 Jump
}


func_915(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x393 PushV
	self(var_11_object); // 0x394 Func
	var_9_object = var_11_object; // 0x396 Mov
	return 2; // 0x397 Return
}


func_724(var_78_bool, var_79_object)
{
	var_83_int = 0; var_84_int = 0; var_85_int = 0; var_86_int = 0; // 0x2d4 PushV
	var_87_string = "voice_common"; // 0x2d5 PushS
	GetVariable(var_87_string, var_85_int); // 0x2d6 Func
	var_88_int = var_85_int; // 0x2d8 Push
	if(var_88_int == 0) goto Label_762; // 0x2d9 JumpB
	var_89_bool = 0; var_90_object = Obj(); // 0x2da PushV
	var_90_object = var_79_object; // 0x2db Mov
	func_782(var_90_object); // 0x2dc NEW_2
	var_119_bool = var_89_bool == 0; // 0x2de Not
	if(var_119_bool == 0) goto Label_744; // 0x2df JumpB
	var_120_bool = 0; var_121_object = Obj(); // 0x2e0 PushV
	var_121_object = var_79_object; // 0x2e1 Mov
	func_819(var_121_object); // 0x2e2 NEW_2
	var_155_bool = var_120_bool == 0; // 0x2e4 Not
	if(var_155_bool == 0) goto Label_744; // 0x2e5 JumpB
	var_78_bool = 0; // 0x2e6 MovB
	return 4; // 0x2e7 Return
	
Label_744:
	var_156_int = 2; // 0x2e8 PushI
	irand(var_86_int, var_156_int); // 0x2e9 Func
	var_157_int = var_86_int; // 0x2eb Push
	if(var_157_int == 0) goto Label_757; // 0x2ec JumpB
	var_158_string = "voice_common"; // 0x2ed PushS
	var_159_int = 1; // 0x2ee PushI
	var_160_int = var_85_int + var_159_int; // 0x2ef Add
	var_161_int = 3; // 0x2f0 PushI
	var_162_int = var_160_int / var_161_int; // 0x2f1 Mod
	SetVariable(var_158_string, var_162_int); // 0x2f2 Func
	goto Label_761; // 0x2f4 Jump
	
Label_761:
	goto Label_780; // 0x2f9 Jump
	
Label_780:
	var_78_bool = 1; // 0x30c MovB
	return 4; // 0x30d Return
	
Label_757:
	var_163_string = "voice_common"; // 0x2f5 PushS
	var_164_int = 0; // 0x2f6 PushI
	SetVariable(var_163_string, var_164_int); // 0x2f7 Func
	
Label_762:
	var_165_bool = 0; var_166_object = Obj(); // 0x2fa PushV
	var_166_object = var_79_object; // 0x2fb Mov
	func_819(var_166_object); // 0x2fc NEW_2
	var_167_bool = var_165_bool == 0; // 0x2fe Not
	if(var_167_bool == 0) goto Label_776; // 0x2ff JumpB
	var_168_bool = 0; var_169_object = Obj(); // 0x300 PushV
	var_169_object = var_79_object; // 0x301 Mov
	func_782(var_169_object); // 0x302 NEW_2
	var_170_bool = var_168_bool == 0; // 0x304 Not
	if(var_170_bool == 0) goto Label_776; // 0x305 JumpB
	var_78_bool = 0; // 0x306 MovB
	return 4; // 0x307 Return
	
Label_776:
	var_171_string = "voice_common"; // 0x308 PushS
	var_172_int = 1; // 0x309 PushI
	SetVariable(var_171_string, var_172_int); // 0x30a Func
}


func_981(var_216_bool)
{
	var_218_int = 0; var_219_string = ""; // 0x3d6 PushV
	var_219_string = "ood12KlaraSobor2"; // 0x3d7 MovS
	func_931(var_218_int, var_219_string); // 0x3d8 NEW_2
	var_220_int = 0; // 0x3da PushI
	var_221_bool = var_218_int == var_220_int; // 0x3db Eq
	if(var_221_bool == 0) goto Label_991; // 0x3dc JumpB
	var_216_bool = 1; // 0x3dd MovB
	return 0; // 0x3de Return
	
Label_991:
	var_216_bool = 0; // 0x3df MovB
	return 0; // 0x3e0 Return
}


func_921(var_45_cvector, var_46_cvector)
{
	var_48_float = 0; var_49_float = 0; // 0x399 PushV
	var_50_int = var_46_cvector | var_46_cvector; // 0x39a Or
	var_49_float = sqrt(var_50_int); // 0x39b Sqrt2
	var_51_float = 0.0; // 0x39c PushF
	var_52_bool = var_49_float < var_51_float; // 0x39d LT
	if(var_52_bool == 0) goto Label_929; // 0x39e JumpB
	var_45_cvector = CVector(0.0, 0.0, 0.0); // 0x39f MovV
	return 2; // 0x3a0 Return
	
Label_929:
	var_45_cvector = var_46_cvector / var_46_cvector; // 0x3a1 Div2
	return 2; // 0x3a2 Return
}


func_862(var_230_string)
{
	var_231_bool = 0; var_232_float = 0; var_233_float = 0; var_234_bool = 0; var_235_float = 0; var_236_float = 0; // 0x35e PushV
	lshHasAnimation(var_234_bool, var_230_string); // 0x35f Func
	var_237_bool = var_234_bool; // 0x361 Push
	if(var_237_bool == 0) goto Label_873; // 0x362 JumpB
	lshGetAnimTimes(var_230_string, var_235_float, var_236_float); // 0x363 Func
	var_238_bool = 0; // 0x365 PushB
	lshPlayAnimation(var_235_float, var_236_float, var_238_bool); // 0x366 Func
	goto Label_877; // 0x368 Jump
	
Label_877:
	return 6; // 0x36d Return
	
Label_873:
	var_239_string = "Can't find lsh animation : "; // 0x369 PushS
	var_240_int = var_239_string + var_230_string; // 0x36a Add
	Trace(var_240_int); // 0x36b Func
}


func_993(var_69_int)
{
	var_70_int = 0; var_71_int = 0; // 0x3e1 PushV
	var_72_string = "branch"; // 0x3e2 PushS
	GetVariable(var_72_string, var_71_int); // 0x3e3 Func
	var_73_int = 0; // 0x3e5 PushI
	var_74_bool = var_71_int == var_73_int; // 0x3e6 Eq
	if(var_74_bool == 0) goto Label_1003; // 0x3e7 JumpB
	var_69_int = 1; // 0x3e8 MovI
	return 2; // 0x3e9 Return
	
Label_1003:
	var_75_int = 1; // 0x3eb PushI
	var_76_bool = var_71_int == var_75_int; // 0x3ec Eq
	if(var_76_bool == 0) goto Label_1008; // 0x3ed JumpB
	var_69_int = 2; // 0x3ee MovI
	return 2; // 0x3ef Return
	
Label_1008:
	var_69_int = 3; // 0x3f0 MovI
	return 2; // 0x3f1 Return
}


func_931(var_182_int, var_183_string)
{
	var_184_int = 0; var_185_int = 0; // 0x3a3 PushV
	GetVariable(var_183_string, var_185_int); // 0x3a4 Func
	var_182_int = var_185_int; // 0x3a6 Mov
	return 2; // 0x3a7 Return
}


func_936(var_133_int)
{
	var_134_float = 0; var_135_float = 0; // 0x3a8 PushV
	GetGameTime(var_135_float); // 0x3a9 Func
	var_136_int = 1; // 0x3ab PushI
	var_137_int = 0; // 0x3ac PushV
	var_138_int = 24; // 0x3ad PushI
	var_137_int = var_135_float / var_135_float; // 0x3ae Div2
	var_133_int = var_136_int + var_137_int; // 0x3af Add2
	return 2; // 0x3b0 Return
}


func_878(var_193_string, var_194_bool)
{
	var_197_bool = 0; var_198_float = 0; var_199_float = 0; var_200_bool = 0; var_201_float = 0; var_202_float = 0; // 0x36e PushV
	lshHasAnimation(var_200_bool, var_193_string); // 0x36f Func
	var_203_bool = var_200_bool; // 0x371 Push
	if(var_203_bool == 0) goto Label_888; // 0x372 JumpB
	lshGetAnimTimes(var_193_string, var_201_float, var_202_float); // 0x373 Func
	lshPlayAnimation(var_201_float, var_202_float, var_194_bool); // 0x375 Func
	goto Label_892; // 0x377 Jump
	
Label_892:
	return 6; // 0x37c Return
	
Label_888:
	var_204_string = "Can't find lsh animation : "; // 0x378 PushS
	var_205_int = var_204_string + var_193_string; // 0x379 Add
	Trace(var_205_int); // 0x37a Func
}


func_945()
{
	var_14_string = "ood12KlaraSobor1"; // 0x3b2 PushS
	var_15_int = 1; // 0x3b3 PushI
	SetVariable(var_14_string, var_15_int); // 0x3b4 Func
	return 0; // 0x3b6 Return
}


func_1010(var_66_int)
{
	var_66_int = 515540; // 0x3f2 MovI
	return 0; // 0x3f3 Return
}


func_819(var_120_bool)
{
	var_122_string = ""; var_123_int = 0; var_124_bool = 0; var_125_int = 0; var_126_string = ""; var_127_string = ""; var_128_int = 0; var_129_bool = 0; var_130_int = 0; var_131_string = ""; // 0x333 PushV
	var_132_string = "d"; // 0x334 PushS
	var_133_int = 0; // 0x335 PushV
	func_936(var_133_int); // 0x336 NEW_2
	var_139_int = var_132_string + var_133_int; // 0x338 Add
	var_140_string = "m"; // 0x339 PushS
	var_127_string = var_139_int + var_140_string; // 0x33a Add2
	var_128_int = 0; // 0x33b MovI
	
Label_828:
	var_141_int = 1; // 0x33c PushI
	if(var_141_int == 0) goto Label_841; // 0x33d JumpB
	var_142_int = 1; // 0x33e PushI
	var_143_int = var_128_int + var_142_int; // 0x33f Add
	var_144_int = var_127_string + var_143_int; // 0x340 Add
	HasProperty(var_144_int, var_129_bool); // 0x341 ObjFunc
	var_145_bool = var_129_bool == 0; // 0x343 Not
	if(var_145_bool == 0) goto Label_838; // 0x344 JumpB
	goto Label_841; // 0x345 Jump
	
Label_841:
	var_146_bool = var_128_int == 0; // 0x349 Not
	if(var_146_bool == 0) goto Label_845; // 0x34a JumpB
	var_120_bool = 0; // 0x34b MovB
	return 10; // 0x34c Return
	
Label_845:
	var_130_int = 0; // 0x34d MovI
	var_147_int = 1; // 0x34e PushI
	var_148_bool = var_128_int > var_147_int; // 0x34f GT
	if(var_148_bool == 0) goto Label_851; // 0x350 JumpB
	irand(var_130_int, var_128_int); // 0x351 Func
	
Label_851:
	var_149_int = 1; // 0x353 PushI
	var_150_int = var_130_int + var_149_int; // 0x354 Add
	var_151_int = var_127_string + var_150_int; // 0x355 Add
	GetProperty(var_151_int, var_131_string); // 0x356 ObjFunc
	var_152_bool = 0; var_153_string = ""; // 0x358 PushV
	var_153_string = var_131_string; // 0x359 Mov
	func_893(var_152_bool, var_153_string); // 0x35a NEW_2
	var_120_bool = var_152_bool; // 0x35b Mov
	return 10; // 0x35d Return
	
Label_838:
	var_154_int = 1; // 0x346 PushI
	var_128_int = var_128_int + var_154_int; // 0x347 Add2
	goto Label_828; // 0x348 Jump
}


func_180(var_2_object, var_189_string)
{
	var_190_bool = 0; // 0xb5 PushV
	func_1018(var_190_bool); // 0xb6 NEW_2
	var_191_bool = var_190_bool == 0; // 0xb8 Not
	if(var_191_bool == 0) goto Label_187; // 0xb9 JumpB
	return 0; // 0xba Return
	
Label_187:
	var_192_bool = var_189_string == var_2_object; // 0xbb Eq
	if(var_192_bool == 0) goto Label_190; // 0xbc JumpB
	return 0; // 0xbd Return
	
Label_190:
	var_193_string = ""; var_194_bool = 0; // 0xbe PushV
	var_193_string = var_189_string; // 0xbf Mov
	var_195_string = ""; // 0xc0 PushS
	var_196_bool = var_189_string == var_195_string; // 0xc1 Eq
	if(var_196_bool == 0) goto Label_197; // 0xc2 JumpB
	var_194_bool = 0; // 0xc3 MovB
	goto Label_198; // 0xc4 Jump
	
Label_198:
	func_878(var_193_string, var_194_bool); // 0xc6 NEW_2
	var_2_object = var_189_string; // 0xc8 TMov
	return 0; // 0xc9 Return
	
Label_197:
	var_194_bool = 1; // 0xc5 MovB
}


func_1012(var_65_int)
{
	var_65_int = 502865; // 0x3f4 MovI
	return 0; // 0x3f5 Return
}


func_1014(var_67_string)
{
	var_67_string = "ui/NPC_Klara.png"; // 0x3f6 MovS
	return 0; // 0x3f7 Return
}


func_951()
{
	var_20_string = "ood12KlaraSobor2"; // 0x3b8 PushS
	var_21_int = 1; // 0x3b9 PushI
	SetVariable(var_20_string, var_21_int); // 0x3ba Func
	return 0; // 0x3bc Return
}


func_1016(var_68_string)
{
	var_68_string = "ui/NPC_Klara_b.png"; // 0x3f8 MovS
	return 0; // 0x3f9 Return
}


func_1018(var_60_bool)
{
	var_60_bool = 1; // 0x3fa MovB
	return 0; // 0x3fb Return
}


func_637(var_8_bool)
{
	var_8_bool = 1; // 0x27d MovB
	return 0; // 0x27e Return
}


func_639(var_18_bool, var_20_float)
{
	var_21_float = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_bool = 0; var_29_bool = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; // 0x27f PushV
	GetPosition(var_31_cvector); // 0x280 ObjFunc
	GetEyesHeight(var_30_float); // 0x282 ObjFunc
	var_39_float = GetByIndex(var_31_cvector, 1); // 0x284 PushE
	var_39_float = var_39_float + var_30_float; // 0x285 Add2
	SetByIndex(var_31_cvector, 1) = var_39_float; // 0x286 PopE
	GetPosition(var_32_cvector); // 0x287 Func
	GetEyesHeight(var_30_float); // 0x289 Func
	var_40_float = GetByIndex(var_32_cvector, 1); // 0x28b PushE
	var_40_float = var_40_float + var_30_float; // 0x28c Add2
	SetByIndex(var_32_cvector, 1) = var_40_float; // 0x28d PopE
	var_33_cvector = var_31_cvector - var_32_cvector; // 0x28e Sub2
	var_41_float = GetByIndex(var_33_cvector, 1); // 0x28f PushE
	var_41_float = 0; // 0x290 MovI
	SetByIndex(var_33_cvector, 1) = var_41_float; // 0x291 PopE
	var_42_int = var_33_cvector | var_33_cvector; // 0x292 Or
	var_43_float = sqrt(var_42_int); // 0x293 Sqrt
	var_33_cvector = var_33_cvector / var_33_cvector; // 0x294 Div2
	var_34_cvector = -var_33_cvector; // 0x295 Neg2
	var_44_float = var_33_cvector * var_20_float; // 0x296 Mult
	var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); // 0x297 PushV
	var_47_cvector = CVector(0.0, 1.0, 0.0); // 0x298 PushVec
	var_46_cvector = var_34_cvector ^ var_47_cvector; // 0x299 Xor2
	func_921(var_45_cvector, var_46_cvector); // 0x29a NEW_2
	var_53_int = 25; // 0x29c PushI
	var_54_float = var_45_cvector * var_53_int; // 0x29d Mult
	var_55_int = var_44_float + var_54_float; // 0x29e Add
	var_56_cvector = CVector(0.0, 10.0, 0.0); // 0x29f PushVec
	var_35_cvector = var_55_int - var_56_cvector; // 0x2a0 Sub2
	var_36_cvector = var_32_cvector + var_35_cvector; // 0x2a1 Add2
	IsOverrideActive(var_37_bool); // 0x2a2 Func
	var_57_bool = var_37_bool; // 0x2a4 Push
	if(var_57_bool == 0) goto Label_680; // 0x2a5 JumpB
	var_18_bool = 0; // 0x2a6 MovB
	return 18; // 0x2a7 Return
	
Label_680:
	StopWorld(); // 0x2a8 Func
	CameraTransit(var_36_cvector, var_34_cvector); // 0x2aa Func
	var_58_float = GetByIndex(var_35_cvector, 0); // 0x2ac PushE
	var_59_float = GetByIndex(var_35_cvector, 2); // 0x2ad PushE
	Rotate(var_58_float, var_59_float); // 0x2ae Func
	var_60_bool = 0; // 0x2b0 PushV
	func_1018(var_60_bool); // 0x2b1 NEW_2
	if(var_60_bool == 0) goto Label_693; // 0x2b3 JumpB
	goto Label_701; // 0x2b4 Jump
	
Label_701:
	CameraWaitForPlayFinish(); // 0x2bd Func
	ResumeWorld(); // 0x2bf Func
	var_18_bool = 1; // 0x2c1 MovB
	return 18; // 0x2c2 Return
	
Label_693:
	var_61_string = "head"; // 0x2b5 PushS
	HasAnimationTrack(var_38_bool, var_61_string); // 0x2b6 Func
	var_62_bool = var_38_bool; // 0x2b8 Push
	if(var_62_bool == 0) goto Label_701; // 0x2b9 JumpB
	var_63_string = "head"; // 0x2ba PushS
	LookAsyncCamera(var_63_string); // 0x2bb Func
}


