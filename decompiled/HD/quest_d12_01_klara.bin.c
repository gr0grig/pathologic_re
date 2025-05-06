task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	var_8_int = 1; // 0xcb PushI
	if(var_8_int == 0) goto Label_576; // 0xcc JumpB
	func_910(); // 0xce NEW_2
	var_10_int = 42263; // 0xd0 PushI
	var_11_bool = var_7_bool == var_10_int; // 0xd1 Eq
	if(var_11_bool == 0) goto Label_216; // 0xd2 JumpB
	var_12_object = Obj(); var_13_object = Obj(); // 0xd3 PushV
	var_12_object = var_1_object; // 0xd4 MovT
	var_13_object = var_0_object; // 0xd5 MovT
	func_947(); // 0xd6 NEW_2
	
Label_216:
	var_16_int = 42277; // 0xd8 PushI
	var_17_bool = var_7_bool == var_16_int; // 0xd9 Eq
	if(var_17_bool == 0) goto Label_224; // 0xda JumpB
	var_18_object = Obj(); var_19_object = Obj(); // 0xdb PushV
	var_18_object = var_1_object; // 0xdc MovT
	var_19_object = var_0_object; // 0xdd MovT
	func_953(); // 0xde NEW_2
	
Label_224:
	var_22_int = 42262; // 0xe0 PushI
	var_23_bool = var_6_int == var_22_int; // 0xe1 Eq
	if(var_23_bool == 0) goto Label_288; // 0xe2 JumpB
	var_24_bool = 0; var_25_object = Obj(); // 0xe3 PushV
	var_25_object = var_1_object; // 0xe4 MovT
	func_959(var_25_object); // 0xe5 NEW_2
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
	func_971(var_52_object); // 0xf4 NEW_2
	if(var_51_bool == 0) goto Label_252; // 0xf6 JumpB
	var_57_int = 540283; // 0xf7 PushI
	var_58_int = 42264; // 0xf8 PushI
	var_59_int = 42263; // 0xf9 PushI
	AddReply(var_57_int, var_58_int, var_59_int); // 0xfa TObjFunc
	
Label_252:
	var_60_bool = 0; var_61_object = Obj(); // 0xfc PushV
	var_61_object = var_1_object; // 0xfd MovT
	func_983(var_61_object); // 0xfe NEW_2
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
	func_1020(var_200_bool); // 0x236 NEW_2
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
	func_917(var_14_object); // 0x263 NEW_2
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
	func_917(var_9_object); // 0x278 NEW_2
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
	var_65_bool = var_18_bool == 0; // 0x7 Not
	if(var_65_bool == 0) goto Label_11; // 0x8 JumpB
	var_7_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_14_object); // 0xb Func
	var_66_int = 0; // 0xd PushV
	func_1014(var_66_int); // 0xe NEW_2
	SetNPCName(var_66_int); // 0x10 ObjFunc
	var_67_int = 0; // 0x12 PushV
	func_1012(var_67_int); // 0x13 NEW_2
	SetNPCDescription(var_67_int); // 0x15 ObjFunc
	var_68_string = ""; // 0x17 PushV
	func_1016(var_68_string); // 0x18 NEW_2
	SetPhoto(var_68_string); // 0x1a ObjFunc
	var_69_string = ""; // 0x1c PushV
	func_1018(var_69_string); // 0x1d NEW_2
	SetPhoto2(var_69_string); // 0x1f ObjFunc
	var_70_int = 0; // 0x21 PushV
	func_995(var_70_int); // 0x22 NEW_2
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
	func_917(var_81_object); // 0x31 NEW_2
	var_80_object = var_81_object; // 0x32 Mov
	func_726(var_79_bool, var_80_object); // 0x34 NEW_2
	var_174_object = Obj(); var_175_object = Obj(); // 0x36 PushV
	var_174_object = var_8_object; // 0x37 Mov
	var_175_object = var_14_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_176_object, var_177_object, var_178_string, var_179_bool, var_174_object, var_175_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_17_bool); // 0x3d ObjFunc
	
Label_63:
	var_255_bool = var_17_bool == 0; // 0x3f Not
	if(var_255_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_17_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_256_object = Obj(); // 0x46 PushV
	var_256_object = var_8_object; // 0x47 Mov
	func_708(); // 0x48 NEW_2
	StopDialog(var_14_object); // 0x4a Func
	GetReturnValue(var_16_int); // 0x4c ObjFunc
	var_7_int = var_16_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_708()
{
	var_257_bool = 0; var_258_bool = 0; // 0x2c4 PushV
	var_259_bool = 1; // 0x2c5 PushB
	CameraSwitchToNormal(var_259_bool); // 0x2c6 Func
	var_260_bool = 0; // 0x2c8 PushV
	func_1020(var_260_bool); // 0x2c9 NEW_2
	if(var_260_bool == 0) goto Label_717; // 0x2cb JumpB
	goto Label_725; // 0x2cc Jump
	
Label_725:
	return 2; // 0x2d5 Return
	
Label_717:
	var_261_string = "head"; // 0x2cd PushS
	HasAnimationTrack(var_258_bool, var_261_string); // 0x2ce Func
	var_262_bool = var_258_bool; // 0x2d0 Push
	if(var_262_bool == 0) goto Label_725; // 0x2d1 JumpB
	var_263_string = "head"; // 0x2d2 PushS
	UnlookAsync(var_263_string); // 0x2d3 Func
}


func_971(var_208_bool)
{
	var_210_int = 0; var_211_string = ""; // 0x3cc PushV
	var_211_string = "ood12KlaraSobor1"; // 0x3cd MovS
	func_933(var_210_int, var_211_string); // 0x3ce NEW_2
	var_212_int = 0; // 0x3d0 PushI
	var_213_bool = var_210_int == var_212_int; // 0x3d1 Eq
	if(var_213_bool == 0) goto Label_981; // 0x3d2 JumpB
	var_208_bool = 1; // 0x3d3 MovB
	return 0; // 0x3d4 Return
	
Label_981:
	var_208_bool = 0; // 0x3d5 MovB
	return 0; // 0x3d6 Return
}


func_589()
{
	
Label_589:
	Hold(); // 0x24d Func
	goto Label_589; // 0x24f Jump
}


func_910()
{
	var_9_bool = 0; // 0x38e PushV
	func_1020(var_9_bool); // 0x38f NEW_2
	if(var_9_bool == 0) goto Label_916; // 0x391 JumpB
	lshStopSpeech(); // 0x392 Func
	
Label_916:
	return 0; // 0x394 Return
}


func_784(var_90_bool)
{
	var_92_string = ""; var_93_int = 0; var_94_bool = 0; var_95_int = 0; var_96_string = ""; var_97_string = ""; var_98_int = 0; var_99_bool = 0; var_100_int = 0; var_101_string = ""; // 0x310 PushV
	var_97_string = "c"; // 0x311 MovS
	var_98_int = 0; // 0x312 MovI
	
Label_787:
	var_102_int = 1; // 0x313 PushI
	if(var_102_int == 0) goto Label_800; // 0x314 JumpB
	var_103_int = 1; // 0x315 PushI
	var_104_int = var_98_int + var_103_int; // 0x316 Add
	var_105_int = var_97_string + var_104_int; // 0x317 Add
	HasProperty(var_105_int, var_99_bool); // 0x318 ObjFunc
	var_106_bool = var_99_bool == 0; // 0x31a Not
	if(var_106_bool == 0) goto Label_797; // 0x31b JumpB
	goto Label_800; // 0x31c Jump
	
Label_800:
	var_107_bool = var_98_int == 0; // 0x320 Not
	if(var_107_bool == 0) goto Label_804; // 0x321 JumpB
	var_90_bool = 0; // 0x322 MovB
	return 10; // 0x323 Return
	
Label_804:
	var_100_int = 0; // 0x324 MovI
	var_108_int = 1; // 0x325 PushI
	var_109_bool = var_98_int > var_108_int; // 0x326 GT
	if(var_109_bool == 0) goto Label_810; // 0x327 JumpB
	irand(var_100_int, var_98_int); // 0x328 Func
	
Label_810:
	var_110_int = 1; // 0x32a PushI
	var_111_int = var_100_int + var_110_int; // 0x32b Add
	var_112_int = var_97_string + var_111_int; // 0x32c Add
	GetProperty(var_112_int, var_101_string); // 0x32d ObjFunc
	var_113_bool = 0; var_114_string = ""; // 0x32f PushV
	var_114_string = var_101_string; // 0x330 Mov
	func_895(var_113_bool, var_114_string); // 0x331 NEW_2
	var_90_bool = var_113_bool; // 0x332 Mov
	return 10; // 0x334 Return
	
Label_797:
	var_119_int = 1; // 0x31d PushI
	var_98_int = var_98_int + var_119_int; // 0x31e Add2
	goto Label_787; // 0x31f Jump
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_174_object, var_175_object)
{
	var_0_object = var_175_object; // 0x52 TMov
	var_1_object = var_174_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_180_int = 1; // 0x55 PushI
	if(var_180_int == 0) goto Label_150; // 0x56 JumpB
	var_181_bool = 0; var_182_object = Obj(); // 0x57 PushV
	var_182_object = var_1_object; // 0x58 MovT
	func_959(var_182_object); // 0x59 NEW_2
	var_189_bool = var_181_bool == 0; // 0x5b Not
	if(var_189_bool == 0) goto Label_128; // 0x5c JumpB
	var_190_string = ""; // 0x5d PushV
	var_190_string = "Saveyouall"; // 0x5e MovS
	func_180(var_175_object, var_190_string); // 0x5f NEW_2
	var_207_int = 540282; // 0x61 PushI
	SetMessage(var_207_int); // 0x62 TObjFunc
	ClearReplies(); // 0x64 TObjFunc
	var_208_bool = 0; var_209_object = Obj(); // 0x66 PushV
	var_209_object = var_1_object; // 0x67 MovT
	func_971(var_209_object); // 0x68 NEW_2
	if(var_208_bool == 0) goto Label_112; // 0x6a JumpB
	var_214_int = 540283; // 0x6b PushI
	var_215_int = 42264; // 0x6c PushI
	var_216_int = 42263; // 0x6d PushI
	AddReply(var_214_int, var_215_int, var_216_int); // 0x6e TObjFunc
	
Label_112:
	var_217_bool = 0; var_218_object = Obj(); // 0x70 PushV
	var_218_object = var_1_object; // 0x71 MovT
	func_983(var_218_object); // 0x72 NEW_2
	if(var_217_bool == 0) goto Label_122; // 0x74 JumpB
	var_223_int = 540296; // 0x75 PushI
	var_224_int = 42278; // 0x76 PushI
	var_225_int = 42277; // 0x77 PushI
	AddReply(var_223_int, var_224_int, var_225_int); // 0x78 TObjFunc
	
Label_122:
	var_226_int = 540305; // 0x7a PushI
	var_227_int = -1; // 0x7b PushI
	var_228_int = 42286; // 0x7c PushI
	AddReply(var_226_int, var_227_int, var_228_int); // 0x7d TObjFunc
	goto Label_150; // 0x7f Jump
	
Label_150:
	var_229_bool = 0; // 0x96 PushV
	func_1020(var_229_bool); // 0x97 NEW_2
	if(var_229_bool == 0) goto Label_165; // 0x99 JumpB
	
Label_154:
	lshWaitForAnimEnd(); // 0x9a Func
	var_230_string = var_3_string; // 0x9c PushT
	if(var_230_string == 0) goto Label_159; // 0x9d JumpB
	goto Label_164; // 0x9e Jump
	
Label_164:
	goto Label_179; // 0xa4 Jump
	
Label_179:
	return 0; // 0xb3 Return
	
Label_159:
	var_231_string = ""; // 0x9f PushV
	var_231_string = var_2_object; // 0xa0 MovT
	func_864(var_231_string); // 0xa1 NEW_2
	goto Label_154; // 0xa3 Jump
	
Label_165:
	var_242_string = "all"; // 0xa5 PushS
	var_243_string = "idle"; // 0xa6 PushS
	PlayAnimation(var_242_string, var_243_string); // 0xa7 Func
	
Label_169:
	WaitForAnimEnd(); // 0xa9 Func
	var_244_string = var_3_string; // 0xab PushT
	if(var_244_string == 0) goto Label_174; // 0xac JumpB
	goto Label_179; // 0xad Jump
	
Label_174:
	var_245_string = "all"; // 0xae PushS
	var_246_string = "idle"; // 0xaf PushS
	PlayAnimation(var_245_string, var_246_string); // 0xb0 Func
	goto Label_169; // 0xb2 Jump
	
Label_128:
	var_247_string = ""; // 0x80 PushV
	var_247_string = "Neutral"; // 0x81 MovS
	func_180(var_175_object, var_247_string); // 0x82 NEW_2
	var_248_int = 541639; // 0x84 PushI
	SetMessage(var_248_int); // 0x85 TObjFunc
	ClearReplies(); // 0x87 TObjFunc
	var_249_int = 541640; // 0x89 PushI
	var_250_int = -1; // 0x8a PushI
	var_251_int = 43812; // 0x8b PushI
	AddReply(var_249_int, var_250_int, var_251_int); // 0x8c TObjFunc
	var_252_int = 541641; // 0x8e PushI
	var_253_int = -1; // 0x8f PushI
	var_254_int = 43813; // 0x90 PushI
	AddReply(var_252_int, var_253_int, var_254_int); // 0x91 TObjFunc
	goto Label_150; // 0x93 Jump
}


func_917(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x395 PushV
	self(var_11_object); // 0x396 Func
	var_9_object = var_11_object; // 0x398 Mov
	return 2; // 0x399 Return
}


func_726(var_79_bool, var_80_object)
{
	var_84_int = 0; var_85_int = 0; var_86_int = 0; var_87_int = 0; // 0x2d6 PushV
	var_88_string = "voice_common"; // 0x2d7 PushS
	GetVariable(var_88_string, var_86_int); // 0x2d8 Func
	var_89_int = var_86_int; // 0x2da Push
	if(var_89_int == 0) goto Label_764; // 0x2db JumpB
	var_90_bool = 0; var_91_object = Obj(); // 0x2dc PushV
	var_91_object = var_80_object; // 0x2dd Mov
	func_784(var_91_object); // 0x2de NEW_2
	var_120_bool = var_90_bool == 0; // 0x2e0 Not
	if(var_120_bool == 0) goto Label_746; // 0x2e1 JumpB
	var_121_bool = 0; var_122_object = Obj(); // 0x2e2 PushV
	var_122_object = var_80_object; // 0x2e3 Mov
	func_821(var_122_object); // 0x2e4 NEW_2
	var_156_bool = var_121_bool == 0; // 0x2e6 Not
	if(var_156_bool == 0) goto Label_746; // 0x2e7 JumpB
	var_79_bool = 0; // 0x2e8 MovB
	return 4; // 0x2e9 Return
	
Label_746:
	var_157_int = 2; // 0x2ea PushI
	irand(var_87_int, var_157_int); // 0x2eb Func
	var_158_int = var_87_int; // 0x2ed Push
	if(var_158_int == 0) goto Label_759; // 0x2ee JumpB
	var_159_string = "voice_common"; // 0x2ef PushS
	var_160_int = 1; // 0x2f0 PushI
	var_161_int = var_86_int + var_160_int; // 0x2f1 Add
	var_162_int = 3; // 0x2f2 PushI
	var_163_int = var_161_int / var_162_int; // 0x2f3 Mod
	SetVariable(var_159_string, var_163_int); // 0x2f4 Func
	goto Label_763; // 0x2f6 Jump
	
Label_763:
	goto Label_782; // 0x2fb Jump
	
Label_782:
	var_79_bool = 1; // 0x30e MovB
	return 4; // 0x30f Return
	
Label_759:
	var_164_string = "voice_common"; // 0x2f7 PushS
	var_165_int = 0; // 0x2f8 PushI
	SetVariable(var_164_string, var_165_int); // 0x2f9 Func
	
Label_764:
	var_166_bool = 0; var_167_object = Obj(); // 0x2fc PushV
	var_167_object = var_80_object; // 0x2fd Mov
	func_821(var_167_object); // 0x2fe NEW_2
	var_168_bool = var_166_bool == 0; // 0x300 Not
	if(var_168_bool == 0) goto Label_778; // 0x301 JumpB
	var_169_bool = 0; var_170_object = Obj(); // 0x302 PushV
	var_170_object = var_80_object; // 0x303 Mov
	func_784(var_170_object); // 0x304 NEW_2
	var_171_bool = var_169_bool == 0; // 0x306 Not
	if(var_171_bool == 0) goto Label_778; // 0x307 JumpB
	var_79_bool = 0; // 0x308 MovB
	return 4; // 0x309 Return
	
Label_778:
	var_172_string = "voice_common"; // 0x30a PushS
	var_173_int = 1; // 0x30b PushI
	SetVariable(var_172_string, var_173_int); // 0x30c Func
}


func_983(var_217_bool)
{
	var_219_int = 0; var_220_string = ""; // 0x3d8 PushV
	var_220_string = "ood12KlaraSobor2"; // 0x3d9 MovS
	func_933(var_219_int, var_220_string); // 0x3da NEW_2
	var_221_int = 0; // 0x3dc PushI
	var_222_bool = var_219_int == var_221_int; // 0x3dd Eq
	if(var_222_bool == 0) goto Label_993; // 0x3de JumpB
	var_217_bool = 1; // 0x3df MovB
	return 0; // 0x3e0 Return
	
Label_993:
	var_217_bool = 0; // 0x3e1 MovB
	return 0; // 0x3e2 Return
}


func_895(var_113_bool, var_114_string)
{
	var_115_bool = 0; var_116_bool = 0; // 0x37f PushV
	var_117_bool = 0; // 0x380 PushV
	func_1020(var_117_bool); // 0x381 NEW_2
	if(var_117_bool == 0) goto Label_908; // 0x383 JumpB
	lshHasSpeech(var_116_bool, var_114_string); // 0x384 Func
	var_118_bool = var_116_bool; // 0x386 Push
	if(var_118_bool == 0) goto Label_908; // 0x387 JumpB
	lshPlaySpeech(var_114_string); // 0x388 Func
	var_113_bool = 1; // 0x38a MovB
	return 2; // 0x38b Return
	
Label_908:
	var_113_bool = 0; // 0x38c MovB
	return 2; // 0x38d Return
}


func_959(var_181_bool)
{
	var_183_int = 0; var_184_string = ""; // 0x3c0 PushV
	var_184_string = "game_final"; // 0x3c1 MovS
	func_933(var_183_int, var_184_string); // 0x3c2 NEW_2
	var_187_int = 0; // 0x3c4 PushI
	var_188_bool = var_183_int != var_187_int; // 0x3c5 Neq
	if(var_188_bool == 0) goto Label_969; // 0x3c6 JumpB
	var_181_bool = 1; // 0x3c7 MovB
	return 0; // 0x3c8 Return
	
Label_969:
	var_181_bool = 0; // 0x3c9 MovB
	return 0; // 0x3ca Return
}


func_923(var_45_cvector, var_46_cvector)
{
	var_48_float = 0; var_49_float = 0; // 0x39b PushV
	var_50_int = var_46_cvector | var_46_cvector; // 0x39c Or
	var_49_float = sqrt(var_50_int); // 0x39d Sqrt2
	var_51_float = 0.0; // 0x39e PushF
	var_52_bool = var_49_float < var_51_float; // 0x39f LT
	if(var_52_bool == 0) goto Label_931; // 0x3a0 JumpB
	var_45_cvector = CVector(0.0, 0.0, 0.0); // 0x3a1 MovV
	return 2; // 0x3a2 Return
	
Label_931:
	var_45_cvector = var_46_cvector / var_46_cvector; // 0x3a3 Div2
	return 2; // 0x3a4 Return
}


func_864(var_231_string)
{
	var_232_bool = 0; var_233_float = 0; var_234_float = 0; var_235_bool = 0; var_236_float = 0; var_237_float = 0; // 0x360 PushV
	lshHasAnimation(var_235_bool, var_231_string); // 0x361 Func
	var_238_bool = var_235_bool; // 0x363 Push
	if(var_238_bool == 0) goto Label_875; // 0x364 JumpB
	lshGetAnimTimes(var_231_string, var_236_float, var_237_float); // 0x365 Func
	var_239_bool = 0; // 0x367 PushB
	lshPlayAnimation(var_236_float, var_237_float, var_239_bool); // 0x368 Func
	goto Label_879; // 0x36a Jump
	
Label_879:
	return 6; // 0x36f Return
	
Label_875:
	var_240_string = "Can't find lsh animation : "; // 0x36b PushS
	var_241_int = var_240_string + var_231_string; // 0x36c Add
	Trace(var_241_int); // 0x36d Func
}


func_995(var_70_int)
{
	var_71_int = 0; var_72_int = 0; // 0x3e3 PushV
	var_73_string = "branch"; // 0x3e4 PushS
	GetVariable(var_73_string, var_72_int); // 0x3e5 Func
	var_74_int = 0; // 0x3e7 PushI
	var_75_bool = var_72_int == var_74_int; // 0x3e8 Eq
	if(var_75_bool == 0) goto Label_1005; // 0x3e9 JumpB
	var_70_int = 1; // 0x3ea MovI
	return 2; // 0x3eb Return
	
Label_1005:
	var_76_int = 1; // 0x3ed PushI
	var_77_bool = var_72_int == var_76_int; // 0x3ee Eq
	if(var_77_bool == 0) goto Label_1010; // 0x3ef JumpB
	var_70_int = 2; // 0x3f0 MovI
	return 2; // 0x3f1 Return
	
Label_1010:
	var_70_int = 3; // 0x3f2 MovI
	return 2; // 0x3f3 Return
}


func_933(var_183_int, var_184_string)
{
	var_185_int = 0; var_186_int = 0; // 0x3a5 PushV
	GetVariable(var_184_string, var_186_int); // 0x3a6 Func
	var_183_int = var_186_int; // 0x3a8 Mov
	return 2; // 0x3a9 Return
}


func_938(var_134_int)
{
	var_135_float = 0; var_136_float = 0; // 0x3aa PushV
	GetGameTime(var_136_float); // 0x3ab Func
	var_137_int = 1; // 0x3ad PushI
	var_138_int = 0; // 0x3ae PushV
	var_139_int = 24; // 0x3af PushI
	var_138_int = var_136_float / var_136_float; // 0x3b0 Div2
	var_134_int = var_137_int + var_138_int; // 0x3b1 Add2
	return 2; // 0x3b2 Return
}


func_880(var_194_string, var_195_bool)
{
	var_198_bool = 0; var_199_float = 0; var_200_float = 0; var_201_bool = 0; var_202_float = 0; var_203_float = 0; // 0x370 PushV
	lshHasAnimation(var_201_bool, var_194_string); // 0x371 Func
	var_204_bool = var_201_bool; // 0x373 Push
	if(var_204_bool == 0) goto Label_890; // 0x374 JumpB
	lshGetAnimTimes(var_194_string, var_202_float, var_203_float); // 0x375 Func
	lshPlayAnimation(var_202_float, var_203_float, var_195_bool); // 0x377 Func
	goto Label_894; // 0x379 Jump
	
Label_894:
	return 6; // 0x37e Return
	
Label_890:
	var_205_string = "Can't find lsh animation : "; // 0x37a PushS
	var_206_int = var_205_string + var_194_string; // 0x37b Add
	Trace(var_206_int); // 0x37c Func
}


func_947()
{
	var_14_string = "ood12KlaraSobor1"; // 0x3b4 PushS
	var_15_int = 1; // 0x3b5 PushI
	SetVariable(var_14_string, var_15_int); // 0x3b6 Func
	return 0; // 0x3b8 Return
}


func_180(var_2_object, var_190_string)
{
	var_191_bool = 0; // 0xb5 PushV
	func_1020(var_191_bool); // 0xb6 NEW_2
	var_192_bool = var_191_bool == 0; // 0xb8 Not
	if(var_192_bool == 0) goto Label_187; // 0xb9 JumpB
	return 0; // 0xba Return
	
Label_187:
	var_193_bool = var_190_string == var_2_object; // 0xbb Eq
	if(var_193_bool == 0) goto Label_190; // 0xbc JumpB
	return 0; // 0xbd Return
	
Label_190:
	var_194_string = ""; var_195_bool = 0; // 0xbe PushV
	var_194_string = var_190_string; // 0xbf Mov
	var_196_string = ""; // 0xc0 PushS
	var_197_bool = var_190_string == var_196_string; // 0xc1 Eq
	if(var_197_bool == 0) goto Label_197; // 0xc2 JumpB
	var_195_bool = 0; // 0xc3 MovB
	goto Label_198; // 0xc4 Jump
	
Label_198:
	func_880(var_194_string, var_195_bool); // 0xc6 NEW_2
	var_2_object = var_190_string; // 0xc8 TMov
	return 0; // 0xc9 Return
	
Label_197:
	var_195_bool = 1; // 0xc5 MovB
}


func_821(var_121_bool)
{
	var_123_string = ""; var_124_int = 0; var_125_bool = 0; var_126_int = 0; var_127_string = ""; var_128_string = ""; var_129_int = 0; var_130_bool = 0; var_131_int = 0; var_132_string = ""; // 0x335 PushV
	var_133_string = "d"; // 0x336 PushS
	var_134_int = 0; // 0x337 PushV
	func_938(var_134_int); // 0x338 NEW_2
	var_140_int = var_133_string + var_134_int; // 0x33a Add
	var_141_string = "m"; // 0x33b PushS
	var_128_string = var_140_int + var_141_string; // 0x33c Add2
	var_129_int = 0; // 0x33d MovI
	
Label_830:
	var_142_int = 1; // 0x33e PushI
	if(var_142_int == 0) goto Label_843; // 0x33f JumpB
	var_143_int = 1; // 0x340 PushI
	var_144_int = var_129_int + var_143_int; // 0x341 Add
	var_145_int = var_128_string + var_144_int; // 0x342 Add
	HasProperty(var_145_int, var_130_bool); // 0x343 ObjFunc
	var_146_bool = var_130_bool == 0; // 0x345 Not
	if(var_146_bool == 0) goto Label_840; // 0x346 JumpB
	goto Label_843; // 0x347 Jump
	
Label_843:
	var_147_bool = var_129_int == 0; // 0x34b Not
	if(var_147_bool == 0) goto Label_847; // 0x34c JumpB
	var_121_bool = 0; // 0x34d MovB
	return 10; // 0x34e Return
	
Label_847:
	var_131_int = 0; // 0x34f MovI
	var_148_int = 1; // 0x350 PushI
	var_149_bool = var_129_int > var_148_int; // 0x351 GT
	if(var_149_bool == 0) goto Label_853; // 0x352 JumpB
	irand(var_131_int, var_129_int); // 0x353 Func
	
Label_853:
	var_150_int = 1; // 0x355 PushI
	var_151_int = var_131_int + var_150_int; // 0x356 Add
	var_152_int = var_128_string + var_151_int; // 0x357 Add
	GetProperty(var_152_int, var_132_string); // 0x358 ObjFunc
	var_153_bool = 0; var_154_string = ""; // 0x35a PushV
	var_154_string = var_132_string; // 0x35b Mov
	func_895(var_153_bool, var_154_string); // 0x35c NEW_2
	var_121_bool = var_153_bool; // 0x35d Mov
	return 10; // 0x35f Return
	
Label_840:
	var_155_int = 1; // 0x348 PushI
	var_129_int = var_129_int + var_155_int; // 0x349 Add2
	goto Label_830; // 0x34a Jump
}


func_1012(var_67_int)
{
	var_67_int = 515540; // 0x3f4 MovI
	return 0; // 0x3f5 Return
}


func_1014(var_66_int)
{
	var_66_int = 502865; // 0x3f6 MovI
	return 0; // 0x3f7 Return
}


func_1016(var_68_string)
{
	var_68_string = "ui/NPC_Klara.png"; // 0x3f8 MovS
	return 0; // 0x3f9 Return
}


func_953()
{
	var_20_string = "ood12KlaraSobor2"; // 0x3ba PushS
	var_21_int = 1; // 0x3bb PushI
	SetVariable(var_20_string, var_21_int); // 0x3bc Func
	return 0; // 0x3be Return
}


func_1018(var_69_string)
{
	var_69_string = "ui/NPC_Klara_b.png"; // 0x3fa MovS
	return 0; // 0x3fb Return
}


func_1020(var_61_bool)
{
	var_61_bool = 1; // 0x3fc MovB
	return 0; // 0x3fd Return
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
	func_923(var_45_cvector, var_46_cvector); // 0x29a NEW_2
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
	var_58_bool = 1; // 0x2aa PushB
	CameraTransit(var_36_cvector, var_34_cvector, var_58_bool); // 0x2ab Func
	var_59_float = GetByIndex(var_35_cvector, 0); // 0x2ad PushE
	var_60_float = GetByIndex(var_35_cvector, 2); // 0x2ae PushE
	Rotate(var_59_float, var_60_float); // 0x2af Func
	var_61_bool = 0; // 0x2b1 PushV
	func_1020(var_61_bool); // 0x2b2 NEW_2
	if(var_61_bool == 0) goto Label_694; // 0x2b4 JumpB
	goto Label_702; // 0x2b5 Jump
	
Label_702:
	CameraWaitForPlayFinish(); // 0x2be Func
	ResumeWorld(); // 0x2c0 Func
	var_18_bool = 1; // 0x2c2 MovB
	return 18; // 0x2c3 Return
	
Label_694:
	var_62_string = "head"; // 0x2b6 PushS
	HasAnimationTrack(var_38_bool, var_62_string); // 0x2b7 Func
	var_63_bool = var_38_bool; // 0x2b9 Push
	if(var_63_bool == 0) goto Label_702; // 0x2ba JumpB
	var_64_string = "head"; // 0x2bb PushS
	LookAsyncCamera(var_64_string); // 0x2bc Func
}


