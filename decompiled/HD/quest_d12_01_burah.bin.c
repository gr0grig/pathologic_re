task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	var_8_int = 1; // 0xd5 PushI
	if(var_8_int == 0) goto Label_561; // 0xd6 JumpB
	func_895(); // 0xd8 NEW_2
	var_10_int = 42288; // 0xda PushI
	var_11_bool = var_7_bool == var_10_int; // 0xdb Eq
	if(var_11_bool == 0) goto Label_226; // 0xdc JumpB
	var_12_object = Obj(); var_13_object = Obj(); // 0xdd PushV
	var_12_object = var_1_object; // 0xde MovT
	var_13_object = var_0_object; // 0xdf MovT
	func_932(); // 0xe0 NEW_2
	
Label_226:
	var_16_int = 42302; // 0xe2 PushI
	var_17_bool = var_7_bool == var_16_int; // 0xe3 Eq
	if(var_17_bool == 0) goto Label_234; // 0xe4 JumpB
	var_18_object = Obj(); var_19_object = Obj(); // 0xe5 PushV
	var_18_object = var_1_object; // 0xe6 MovT
	var_19_object = var_0_object; // 0xe7 MovT
	func_938(); // 0xe8 NEW_2
	
Label_234:
	var_22_int = 42305; // 0xea PushI
	var_23_bool = var_7_bool == var_22_int; // 0xeb Eq
	if(var_23_bool == 0) goto Label_242; // 0xec JumpB
	var_24_object = Obj(); var_25_object = Obj(); // 0xed PushV
	var_24_object = var_1_object; // 0xee MovT
	var_25_object = var_0_object; // 0xef MovT
	func_944(); // 0xf0 NEW_2
	
Label_242:
	var_28_int = 42287; // 0xf2 PushI
	var_29_bool = var_6_int == var_28_int; // 0xf3 Eq
	if(var_29_bool == 0) goto Label_316; // 0xf4 JumpB
	var_30_bool = 0; var_31_object = Obj(); // 0xf5 PushV
	var_31_object = var_1_object; // 0xf6 MovT
	func_950(var_31_object); // 0xf7 NEW_2
	var_38_bool = var_30_bool == 0; // 0xf9 Not
	if(var_38_bool == 0) goto Label_296; // 0xfa JumpB
	var_39_string = ""; // 0xfb PushV
	var_39_string = "Neutral"; // 0xfc MovS
	func_190(var_7_bool, var_39_string); // 0xfd NEW_2
	var_56_int = 540306; // 0xff PushI
	SetMessage(var_56_int); // 0x100 TObjFunc
	ClearReplies(); // 0x102 TObjFunc
	var_57_bool = 0; var_58_object = Obj(); // 0x104 PushV
	var_58_object = var_1_object; // 0x105 MovT
	func_962(var_58_object); // 0x106 NEW_2
	if(var_57_bool == 0) goto Label_270; // 0x108 JumpB
	var_63_int = 540307; // 0x109 PushI
	var_64_int = 42289; // 0x10a PushI
	var_65_int = 42288; // 0x10b PushI
	AddReply(var_63_int, var_64_int, var_65_int); // 0x10c TObjFunc
	
Label_270:
	var_66_bool = 0; var_67_object = Obj(); // 0x10e PushV
	var_67_object = var_1_object; // 0x10f MovT
	func_974(var_67_object); // 0x110 NEW_2
	if(var_66_bool == 0) goto Label_280; // 0x112 JumpB
	var_72_int = 540320; // 0x113 PushI
	var_73_int = 42303; // 0x114 PushI
	var_74_int = 42302; // 0x115 PushI
	AddReply(var_72_int, var_73_int, var_74_int); // 0x116 TObjFunc
	
Label_280:
	var_75_bool = 0; var_76_object = Obj(); // 0x118 PushV
	var_76_object = var_1_object; // 0x119 MovT
	func_986(var_76_object); // 0x11a NEW_2
	if(var_75_bool == 0) goto Label_290; // 0x11c JumpB
	var_81_int = 540323; // 0x11d PushI
	var_82_int = 42306; // 0x11e PushI
	var_83_int = 42305; // 0x11f PushI
	AddReply(var_81_int, var_82_int, var_83_int); // 0x120 TObjFunc
	
Label_290:
	var_84_int = 540333; // 0x122 PushI
	var_85_int = -1; // 0x123 PushI
	var_86_int = 42315; // 0x124 PushI
	AddReply(var_84_int, var_85_int, var_86_int); // 0x125 TObjFunc
	return 0; // 0x127 Return
	
Label_296:
	var_87_string = ""; // 0x128 PushV
	var_87_string = "Neutral"; // 0x129 MovS
	func_190(var_7_bool, var_87_string); // 0x12a NEW_2
	var_88_int = 541636; // 0x12c PushI
	SetMessage(var_88_int); // 0x12d TObjFunc
	ClearReplies(); // 0x12f TObjFunc
	var_89_int = 541637; // 0x131 PushI
	var_90_int = -1; // 0x132 PushI
	var_91_int = 43809; // 0x133 PushI
	AddReply(var_89_int, var_90_int, var_91_int); // 0x134 TObjFunc
	var_92_int = 541638; // 0x136 PushI
	var_93_int = -1; // 0x137 PushI
	var_94_int = 43810; // 0x138 PushI
	AddReply(var_92_int, var_93_int, var_94_int); // 0x139 TObjFunc
	return 0; // 0x13b Return
	
Label_316:
	var_95_int = 42306; // 0x13c PushI
	var_96_bool = var_6_int == var_95_int; // 0x13d Eq
	if(var_96_bool == 0) goto Label_339; // 0x13e JumpB
	var_97_string = ""; // 0x13f PushV
	var_97_string = "Neutral"; // 0x140 MovS
	func_190(var_7_bool, var_97_string); // 0x141 NEW_2
	var_98_int = 540324; // 0x143 PushI
	SetMessage(var_98_int); // 0x144 TObjFunc
	ClearReplies(); // 0x146 TObjFunc
	var_99_int = 540325; // 0x148 PushI
	var_100_int = 42308; // 0x149 PushI
	var_101_int = 42307; // 0x14a PushI
	AddReply(var_99_int, var_100_int, var_101_int); // 0x14b TObjFunc
	var_102_int = 540384; // 0x14d PushI
	var_103_int = -1; // 0x14e PushI
	var_104_int = 42370; // 0x14f PushI
	AddReply(var_102_int, var_103_int, var_104_int); // 0x150 TObjFunc
	return 0; // 0x152 Return
	
Label_339:
	var_105_int = 42308; // 0x153 PushI
	var_106_bool = var_6_int == var_105_int; // 0x154 Eq
	if(var_106_bool == 0) goto Label_357; // 0x155 JumpB
	var_107_string = ""; // 0x156 PushV
	var_107_string = "Neutral"; // 0x157 MovS
	func_190(var_7_bool, var_107_string); // 0x158 NEW_2
	var_108_int = 540326; // 0x15a PushI
	SetMessage(var_108_int); // 0x15b TObjFunc
	ClearReplies(); // 0x15d TObjFunc
	var_109_int = 540327; // 0x15f PushI
	var_110_int = 42310; // 0x160 PushI
	var_111_int = 42309; // 0x161 PushI
	AddReply(var_109_int, var_110_int, var_111_int); // 0x162 TObjFunc
	return 0; // 0x164 Return
	
Label_357:
	var_112_int = 42310; // 0x165 PushI
	var_113_bool = var_6_int == var_112_int; // 0x166 Eq
	if(var_113_bool == 0) goto Label_380; // 0x167 JumpB
	var_114_string = ""; // 0x168 PushV
	var_114_string = "Sorrow"; // 0x169 MovS
	func_190(var_7_bool, var_114_string); // 0x16a NEW_2
	var_115_int = 540328; // 0x16c PushI
	SetMessage(var_115_int); // 0x16d TObjFunc
	ClearReplies(); // 0x16f TObjFunc
	var_116_int = 540329; // 0x171 PushI
	var_117_int = -1; // 0x172 PushI
	var_118_int = 42311; // 0x173 PushI
	AddReply(var_116_int, var_117_int, var_118_int); // 0x174 TObjFunc
	var_119_int = 540385; // 0x176 PushI
	var_120_int = -1; // 0x177 PushI
	var_121_int = 42371; // 0x178 PushI
	AddReply(var_119_int, var_120_int, var_121_int); // 0x179 TObjFunc
	return 0; // 0x17b Return
	
Label_380:
	var_122_int = 42303; // 0x17c PushI
	var_123_bool = var_6_int == var_122_int; // 0x17d Eq
	if(var_123_bool == 0) goto Label_403; // 0x17e JumpB
	var_124_string = ""; // 0x17f PushV
	var_124_string = "Agression"; // 0x180 MovS
	func_190(var_7_bool, var_124_string); // 0x181 NEW_2
	var_125_int = 540321; // 0x183 PushI
	SetMessage(var_125_int); // 0x184 TObjFunc
	ClearReplies(); // 0x186 TObjFunc
	var_126_int = 540322; // 0x188 PushI
	var_127_int = -1; // 0x189 PushI
	var_128_int = 42304; // 0x18a PushI
	AddReply(var_126_int, var_127_int, var_128_int); // 0x18b TObjFunc
	var_129_int = 540372; // 0x18d PushI
	var_130_int = -1; // 0x18e PushI
	var_131_int = 42355; // 0x18f PushI
	AddReply(var_129_int, var_130_int, var_131_int); // 0x190 TObjFunc
	return 0; // 0x192 Return
	
Label_403:
	var_132_int = 42289; // 0x193 PushI
	var_133_bool = var_6_int == var_132_int; // 0x194 Eq
	if(var_133_bool == 0) goto Label_426; // 0x195 JumpB
	var_134_string = ""; // 0x196 PushV
	var_134_string = "Doubt"; // 0x197 MovS
	func_190(var_7_bool, var_134_string); // 0x198 NEW_2
	var_135_int = 540308; // 0x19a PushI
	SetMessage(var_135_int); // 0x19b TObjFunc
	ClearReplies(); // 0x19d TObjFunc
	var_136_int = 540309; // 0x19f PushI
	var_137_int = 42356; // 0x1a0 PushI
	var_138_int = 42290; // 0x1a1 PushI
	AddReply(var_136_int, var_137_int, var_138_int); // 0x1a2 TObjFunc
	var_139_int = 540319; // 0x1a4 PushI
	var_140_int = 42351; // 0x1a5 PushI
	var_141_int = 42300; // 0x1a6 PushI
	AddReply(var_139_int, var_140_int, var_141_int); // 0x1a7 TObjFunc
	return 0; // 0x1a9 Return
	
Label_426:
	var_142_int = 42351; // 0x1aa PushI
	var_143_bool = var_6_int == var_142_int; // 0x1ab Eq
	if(var_143_bool == 0) goto Label_449; // 0x1ac JumpB
	var_144_string = ""; // 0x1ad PushV
	var_144_string = "Doubt"; // 0x1ae MovS
	func_190(var_7_bool, var_144_string); // 0x1af NEW_2
	var_145_int = 540368; // 0x1b1 PushI
	SetMessage(var_145_int); // 0x1b2 TObjFunc
	ClearReplies(); // 0x1b4 TObjFunc
	var_146_int = 540369; // 0x1b6 PushI
	var_147_int = 42354; // 0x1b7 PushI
	var_148_int = 42352; // 0x1b8 PushI
	AddReply(var_146_int, var_147_int, var_148_int); // 0x1b9 TObjFunc
	var_149_int = 540370; // 0x1bb PushI
	var_150_int = 42356; // 0x1bc PushI
	var_151_int = 42353; // 0x1bd PushI
	AddReply(var_149_int, var_150_int, var_151_int); // 0x1be TObjFunc
	return 0; // 0x1c0 Return
	
Label_449:
	var_152_int = 42354; // 0x1c1 PushI
	var_153_bool = var_6_int == var_152_int; // 0x1c2 Eq
	if(var_153_bool == 0) goto Label_467; // 0x1c3 JumpB
	var_154_string = ""; // 0x1c4 PushV
	var_154_string = "Doubt"; // 0x1c5 MovS
	func_190(var_7_bool, var_154_string); // 0x1c6 NEW_2
	var_155_int = 540371; // 0x1c8 PushI
	SetMessage(var_155_int); // 0x1c9 TObjFunc
	ClearReplies(); // 0x1cb TObjFunc
	var_156_int = 540375; // 0x1cd PushI
	var_157_int = 42360; // 0x1ce PushI
	var_158_int = 42359; // 0x1cf PushI
	AddReply(var_156_int, var_157_int, var_158_int); // 0x1d0 TObjFunc
	return 0; // 0x1d2 Return
	
Label_467:
	var_159_int = 42356; // 0x1d3 PushI
	var_160_bool = var_6_int == var_159_int; // 0x1d4 Eq
	if(var_160_bool == 0) goto Label_485; // 0x1d5 JumpB
	var_161_string = ""; // 0x1d6 PushV
	var_161_string = "Doubt"; // 0x1d7 MovS
	func_190(var_7_bool, var_161_string); // 0x1d8 NEW_2
	var_162_int = 540373; // 0x1da PushI
	SetMessage(var_162_int); // 0x1db TObjFunc
	ClearReplies(); // 0x1dd TObjFunc
	var_163_int = 540374; // 0x1df PushI
	var_164_int = 42360; // 0x1e0 PushI
	var_165_int = 42358; // 0x1e1 PushI
	AddReply(var_163_int, var_164_int, var_165_int); // 0x1e2 TObjFunc
	return 0; // 0x1e4 Return
	
Label_485:
	var_166_int = 42360; // 0x1e5 PushI
	var_167_bool = var_6_int == var_166_int; // 0x1e6 Eq
	if(var_167_bool == 0) goto Label_508; // 0x1e7 JumpB
	var_168_string = ""; // 0x1e8 PushV
	var_168_string = "Agression"; // 0x1e9 MovS
	func_190(var_7_bool, var_168_string); // 0x1ea NEW_2
	var_169_int = 540376; // 0x1ec PushI
	SetMessage(var_169_int); // 0x1ed TObjFunc
	ClearReplies(); // 0x1ef TObjFunc
	var_170_int = 540377; // 0x1f1 PushI
	var_171_int = 42363; // 0x1f2 PushI
	var_172_int = 42362; // 0x1f3 PushI
	AddReply(var_170_int, var_171_int, var_172_int); // 0x1f4 TObjFunc
	var_173_int = 540379; // 0x1f6 PushI
	var_174_int = 42365; // 0x1f7 PushI
	var_175_int = 42364; // 0x1f8 PushI
	AddReply(var_173_int, var_174_int, var_175_int); // 0x1f9 TObjFunc
	return 0; // 0x1fb Return
	
Label_508:
	var_176_int = 42365; // 0x1fc PushI
	var_177_bool = var_6_int == var_176_int; // 0x1fd Eq
	if(var_177_bool == 0) goto Label_526; // 0x1fe JumpB
	var_178_string = ""; // 0x1ff PushV
	var_178_string = "Sorrow"; // 0x200 MovS
	func_190(var_7_bool, var_178_string); // 0x201 NEW_2
	var_179_int = 540380; // 0x203 PushI
	SetMessage(var_179_int); // 0x204 TObjFunc
	ClearReplies(); // 0x206 TObjFunc
	var_180_int = 540381; // 0x208 PushI
	var_181_int = 42363; // 0x209 PushI
	var_182_int = 42366; // 0x20a PushI
	AddReply(var_180_int, var_181_int, var_182_int); // 0x20b TObjFunc
	return 0; // 0x20d Return
	
Label_526:
	var_183_int = 42363; // 0x20e PushI
	var_184_bool = var_6_int == var_183_int; // 0x20f Eq
	if(var_184_bool == 0) goto Label_549; // 0x210 JumpB
	var_185_string = ""; // 0x211 PushV
	var_185_string = "Agression"; // 0x212 MovS
	func_190(var_7_bool, var_185_string); // 0x213 NEW_2
	var_186_int = 540378; // 0x215 PushI
	SetMessage(var_186_int); // 0x216 TObjFunc
	ClearReplies(); // 0x218 TObjFunc
	var_187_int = 540382; // 0x21a PushI
	var_188_int = -1; // 0x21b PushI
	var_189_int = 42368; // 0x21c PushI
	AddReply(var_187_int, var_188_int, var_189_int); // 0x21d TObjFunc
	var_190_int = 540383; // 0x21f PushI
	var_191_int = -1; // 0x220 PushI
	var_192_int = 42369; // 0x221 PushI
	AddReply(var_190_int, var_191_int, var_192_int); // 0x222 TObjFunc
	return 0; // 0x224 Return
	
Label_549:
	var_3_string = 1; // 0x225 TMovB
	var_193_bool = 0; // 0x226 PushV
	func_1023(var_193_bool); // 0x227 NEW_2
	if(var_193_bool == 0) goto Label_557; // 0x229 JumpB
	lshStopAnimation(); // 0x22a Func
	goto Label_559; // 0x22c Jump
	
Label_559:
	return 0; // 0x22f Return
	
Label_557:
	StopAnimation(); // 0x22d Func
	
Label_561:
	return 0; // 0x231 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object)
{
	var_7_int = 0; var_8_object = Obj(); // 0x237 PushV
	var_8_object = var_6_object; // 0x238 Mov
	TaskCall(0); // 0x239 TaskCall
	func_0(var_9_object, var_7_int, var_8_object); // 0x23a NEW_2
	TaskReturn(); // 0x23b TaskReturn
	return 0; // 0x23d Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string)
{
	var_7_bool = 0; var_8_bool = 0; // 0x242 PushV
	var_9_string = "cleanup"; // 0x243 PushS
	var_10_bool = var_6_string == var_9_string; // 0x244 Eq
	if(var_10_bool == 0) goto Label_601; // 0x245 JumpB
	var_0_object = 1; // 0x246 TMovB
	IsLoaded(var_8_bool); // 0x247 Func
	var_11_bool = 0; // 0x249 PushV
	var_11_bool = 0; // 0x24a MovB
	var_12_bool = var_8_bool == 0; // 0x24b Not
	if(var_12_bool == 0) goto Label_594; // 0x24c JumpB
	var_13_bool = 0; // 0x24d PushV
	func_622(var_13_bool); // 0x24e NEW_2
	if(var_13_bool == 0) goto Label_594; // 0x250 JumpB
	var_11_bool = 1; // 0x251 MovB
	
Label_594:
	if(var_11_bool == 0) goto Label_600; // 0x252 JumpB
	var_14_object = Obj(); // 0x253 PushV
	func_902(var_14_object); // 0x254 NEW_2
	RemoveActor(var_14_object); // 0x256 Func
	
Label_600:
	goto Label_605; // 0x258 Jump
	
Label_605:
	return 2; // 0x25d Return
	
Label_601:
	var_17_string = "restore"; // 0x259 PushS
	var_18_bool = var_6_string == var_17_string; // 0x25a Eq
	if(var_18_bool == 0) goto Label_605; // 0x25b JumpB
	var_0_object = 0; // 0x25c TMovB
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_bool = 0; // 0x25e PushV
	var_6_bool = 0; // 0x25f MovB
	var_7_object = var_0_object; // 0x260 PushT
	if(var_7_object == 0) goto Label_615; // 0x261 JumpB
	var_8_bool = 0; // 0x262 PushV
	func_622(var_8_bool); // 0x263 NEW_2
	if(var_8_bool == 0) goto Label_615; // 0x265 JumpB
	var_6_bool = 1; // 0x266 MovB
	
Label_615:
	if(var_6_bool == 0) goto Label_621; // 0x267 JumpB
	var_9_object = Obj(); // 0x268 PushV
	func_902(var_9_object); // 0x269 NEW_2
	RemoveActor(var_9_object); // 0x26b Func
	
Label_621:
	return 0; // 0x26d Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	func_574(); // 0x233 NEW_2
	return 0; // 0x235 Return
}


func_0(var_0_object, var_7_int, var_8_object)
{
	var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_bool = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0; // 0x0 PushV
	var_0_object = var_8_object; // 0x1 TMov
	var_18_bool = 0; var_19_object = Obj(); var_20_float = 0; // 0x2 PushV
	var_19_object = var_8_object; // 0x3 Mov
	var_20_float = 70.0; // 0x4 MovF
	func_624(var_19_object, var_20_float); // 0x5 NEW_2
	var_65_bool = var_18_bool == 0; // 0x7 Not
	if(var_65_bool == 0) goto Label_11; // 0x8 JumpB
	var_7_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_14_object); // 0xb Func
	var_66_int = 0; // 0xd PushV
	func_1017(var_66_int); // 0xe NEW_2
	SetNPCName(var_66_int); // 0x10 ObjFunc
	var_67_int = 0; // 0x12 PushV
	func_1015(var_67_int); // 0x13 NEW_2
	SetNPCDescription(var_67_int); // 0x15 ObjFunc
	var_68_string = ""; // 0x17 PushV
	func_1019(var_68_string); // 0x18 NEW_2
	SetPhoto(var_68_string); // 0x1a ObjFunc
	var_69_string = ""; // 0x1c PushV
	func_1021(var_69_string); // 0x1d NEW_2
	SetPhoto2(var_69_string); // 0x1f ObjFunc
	var_70_int = 0; // 0x21 PushV
	func_998(var_70_int); // 0x22 NEW_2
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
	func_902(var_81_object); // 0x31 NEW_2
	var_80_object = var_81_object; // 0x32 Mov
	func_711(var_79_bool, var_80_object); // 0x34 NEW_2
	var_174_object = Obj(); var_175_object = Obj(); // 0x36 PushV
	var_174_object = var_8_object; // 0x37 Mov
	var_175_object = var_14_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_176_object, var_177_object, var_178_string, var_179_bool, var_174_object, var_175_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_17_bool); // 0x3d ObjFunc
	
Label_63:
	var_264_bool = var_17_bool == 0; // 0x3f Not
	if(var_264_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_17_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_265_object = Obj(); // 0x46 PushV
	var_265_object = var_8_object; // 0x47 Mov
	func_693(); // 0x48 NEW_2
	StopDialog(var_14_object); // 0x4a Func
	GetReturnValue(var_16_int); // 0x4c ObjFunc
	var_7_int = var_16_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_769(var_90_bool)
{
	var_92_string = ""; var_93_int = 0; var_94_bool = 0; var_95_int = 0; var_96_string = ""; var_97_string = ""; var_98_int = 0; var_99_bool = 0; var_100_int = 0; var_101_string = ""; // 0x301 PushV
	var_97_string = "c"; // 0x302 MovS
	var_98_int = 0; // 0x303 MovI
	
Label_772:
	var_102_int = 1; // 0x304 PushI
	if(var_102_int == 0) goto Label_785; // 0x305 JumpB
	var_103_int = 1; // 0x306 PushI
	var_104_int = var_98_int + var_103_int; // 0x307 Add
	var_105_int = var_97_string + var_104_int; // 0x308 Add
	HasProperty(var_105_int, var_99_bool); // 0x309 ObjFunc
	var_106_bool = var_99_bool == 0; // 0x30b Not
	if(var_106_bool == 0) goto Label_782; // 0x30c JumpB
	goto Label_785; // 0x30d Jump
	
Label_785:
	var_107_bool = var_98_int == 0; // 0x311 Not
	if(var_107_bool == 0) goto Label_789; // 0x312 JumpB
	var_90_bool = 0; // 0x313 MovB
	return 10; // 0x314 Return
	
Label_789:
	var_100_int = 0; // 0x315 MovI
	var_108_int = 1; // 0x316 PushI
	var_109_bool = var_98_int > var_108_int; // 0x317 GT
	if(var_109_bool == 0) goto Label_795; // 0x318 JumpB
	irand(var_100_int, var_98_int); // 0x319 Func
	
Label_795:
	var_110_int = 1; // 0x31b PushI
	var_111_int = var_100_int + var_110_int; // 0x31c Add
	var_112_int = var_97_string + var_111_int; // 0x31d Add
	GetProperty(var_112_int, var_101_string); // 0x31e ObjFunc
	var_113_bool = 0; var_114_string = ""; // 0x320 PushV
	var_114_string = var_101_string; // 0x321 Mov
	func_880(var_113_bool, var_114_string); // 0x322 NEW_2
	var_90_bool = var_113_bool; // 0x323 Mov
	return 10; // 0x325 Return
	
Label_782:
	var_119_int = 1; // 0x30e PushI
	var_98_int = var_98_int + var_119_int; // 0x30f Add2
	goto Label_772; // 0x310 Jump
}


func_962(var_208_bool)
{
	var_210_int = 0; var_211_string = ""; // 0x3c3 PushV
	var_211_string = "ood12BurahSobor1"; // 0x3c4 MovS
	func_918(var_210_int, var_211_string); // 0x3c5 NEW_2
	var_212_int = 0; // 0x3c7 PushI
	var_213_bool = var_210_int == var_212_int; // 0x3c8 Eq
	if(var_213_bool == 0) goto Label_972; // 0x3c9 JumpB
	var_208_bool = 1; // 0x3ca MovB
	return 0; // 0x3cb Return
	
Label_972:
	var_208_bool = 0; // 0x3cc MovB
	return 0; // 0x3cd Return
}


func_902(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x386 PushV
	self(var_11_object); // 0x387 Func
	var_9_object = var_11_object; // 0x389 Mov
	return 2; // 0x38a Return
}


func_711(var_79_bool, var_80_object)
{
	var_84_int = 0; var_85_int = 0; var_86_int = 0; var_87_int = 0; // 0x2c7 PushV
	var_88_string = "voice_common"; // 0x2c8 PushS
	GetVariable(var_88_string, var_86_int); // 0x2c9 Func
	var_89_int = var_86_int; // 0x2cb Push
	if(var_89_int == 0) goto Label_749; // 0x2cc JumpB
	var_90_bool = 0; var_91_object = Obj(); // 0x2cd PushV
	var_91_object = var_80_object; // 0x2ce Mov
	func_769(var_91_object); // 0x2cf NEW_2
	var_120_bool = var_90_bool == 0; // 0x2d1 Not
	if(var_120_bool == 0) goto Label_731; // 0x2d2 JumpB
	var_121_bool = 0; var_122_object = Obj(); // 0x2d3 PushV
	var_122_object = var_80_object; // 0x2d4 Mov
	func_806(var_122_object); // 0x2d5 NEW_2
	var_156_bool = var_121_bool == 0; // 0x2d7 Not
	if(var_156_bool == 0) goto Label_731; // 0x2d8 JumpB
	var_79_bool = 0; // 0x2d9 MovB
	return 4; // 0x2da Return
	
Label_731:
	var_157_int = 2; // 0x2db PushI
	irand(var_87_int, var_157_int); // 0x2dc Func
	var_158_int = var_87_int; // 0x2de Push
	if(var_158_int == 0) goto Label_744; // 0x2df JumpB
	var_159_string = "voice_common"; // 0x2e0 PushS
	var_160_int = 1; // 0x2e1 PushI
	var_161_int = var_86_int + var_160_int; // 0x2e2 Add
	var_162_int = 3; // 0x2e3 PushI
	var_163_int = var_161_int / var_162_int; // 0x2e4 Mod
	SetVariable(var_159_string, var_163_int); // 0x2e5 Func
	goto Label_748; // 0x2e7 Jump
	
Label_748:
	goto Label_767; // 0x2ec Jump
	
Label_767:
	var_79_bool = 1; // 0x2ff MovB
	return 4; // 0x300 Return
	
Label_744:
	var_164_string = "voice_common"; // 0x2e8 PushS
	var_165_int = 0; // 0x2e9 PushI
	SetVariable(var_164_string, var_165_int); // 0x2ea Func
	
Label_749:
	var_166_bool = 0; var_167_object = Obj(); // 0x2ed PushV
	var_167_object = var_80_object; // 0x2ee Mov
	func_806(var_167_object); // 0x2ef NEW_2
	var_168_bool = var_166_bool == 0; // 0x2f1 Not
	if(var_168_bool == 0) goto Label_763; // 0x2f2 JumpB
	var_169_bool = 0; var_170_object = Obj(); // 0x2f3 PushV
	var_170_object = var_80_object; // 0x2f4 Mov
	func_769(var_170_object); // 0x2f5 NEW_2
	var_171_bool = var_169_bool == 0; // 0x2f7 Not
	if(var_171_bool == 0) goto Label_763; // 0x2f8 JumpB
	var_79_bool = 0; // 0x2f9 MovB
	return 4; // 0x2fa Return
	
Label_763:
	var_172_string = "voice_common"; // 0x2fb PushS
	var_173_int = 1; // 0x2fc PushI
	SetVariable(var_172_string, var_173_int); // 0x2fd Func
}


func_908(var_45_cvector, var_46_cvector)
{
	var_48_float = 0; var_49_float = 0; // 0x38c PushV
	var_50_int = var_46_cvector | var_46_cvector; // 0x38d Or
	var_49_float = sqrt(var_50_int); // 0x38e Sqrt2
	var_51_float = 0.0; // 0x38f PushF
	var_52_bool = var_49_float < var_51_float; // 0x390 LT
	if(var_52_bool == 0) goto Label_916; // 0x391 JumpB
	var_45_cvector = CVector(0.0, 0.0, 0.0); // 0x392 MovV
	return 2; // 0x393 Return
	
Label_916:
	var_45_cvector = var_46_cvector / var_46_cvector; // 0x394 Div2
	return 2; // 0x395 Return
}


func_974(var_217_bool)
{
	var_219_int = 0; var_220_string = ""; // 0x3cf PushV
	var_220_string = "ood12BurahSobor2"; // 0x3d0 MovS
	func_918(var_219_int, var_220_string); // 0x3d1 NEW_2
	var_221_int = 0; // 0x3d3 PushI
	var_222_bool = var_219_int == var_221_int; // 0x3d4 Eq
	if(var_222_bool == 0) goto Label_984; // 0x3d5 JumpB
	var_217_bool = 1; // 0x3d6 MovB
	return 0; // 0x3d7 Return
	
Label_984:
	var_217_bool = 0; // 0x3d8 MovB
	return 0; // 0x3d9 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_174_object, var_175_object)
{
	var_0_object = var_175_object; // 0x52 TMov
	var_1_object = var_174_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_180_int = 1; // 0x55 PushI
	if(var_180_int == 0) goto Label_160; // 0x56 JumpB
	var_181_bool = 0; var_182_object = Obj(); // 0x57 PushV
	var_182_object = var_1_object; // 0x58 MovT
	func_950(var_182_object); // 0x59 NEW_2
	var_189_bool = var_181_bool == 0; // 0x5b Not
	if(var_189_bool == 0) goto Label_138; // 0x5c JumpB
	var_190_string = ""; // 0x5d PushV
	var_190_string = "Neutral"; // 0x5e MovS
	func_190(var_175_object, var_190_string); // 0x5f NEW_2
	var_207_int = 540306; // 0x61 PushI
	SetMessage(var_207_int); // 0x62 TObjFunc
	ClearReplies(); // 0x64 TObjFunc
	var_208_bool = 0; var_209_object = Obj(); // 0x66 PushV
	var_209_object = var_1_object; // 0x67 MovT
	func_962(var_209_object); // 0x68 NEW_2
	if(var_208_bool == 0) goto Label_112; // 0x6a JumpB
	var_214_int = 540307; // 0x6b PushI
	var_215_int = 42289; // 0x6c PushI
	var_216_int = 42288; // 0x6d PushI
	AddReply(var_214_int, var_215_int, var_216_int); // 0x6e TObjFunc
	
Label_112:
	var_217_bool = 0; var_218_object = Obj(); // 0x70 PushV
	var_218_object = var_1_object; // 0x71 MovT
	func_974(var_218_object); // 0x72 NEW_2
	if(var_217_bool == 0) goto Label_122; // 0x74 JumpB
	var_223_int = 540320; // 0x75 PushI
	var_224_int = 42303; // 0x76 PushI
	var_225_int = 42302; // 0x77 PushI
	AddReply(var_223_int, var_224_int, var_225_int); // 0x78 TObjFunc
	
Label_122:
	var_226_bool = 0; var_227_object = Obj(); // 0x7a PushV
	var_227_object = var_1_object; // 0x7b MovT
	func_986(var_227_object); // 0x7c NEW_2
	if(var_226_bool == 0) goto Label_132; // 0x7e JumpB
	var_232_int = 540323; // 0x7f PushI
	var_233_int = 42306; // 0x80 PushI
	var_234_int = 42305; // 0x81 PushI
	AddReply(var_232_int, var_233_int, var_234_int); // 0x82 TObjFunc
	
Label_132:
	var_235_int = 540333; // 0x84 PushI
	var_236_int = -1; // 0x85 PushI
	var_237_int = 42315; // 0x86 PushI
	AddReply(var_235_int, var_236_int, var_237_int); // 0x87 TObjFunc
	goto Label_160; // 0x89 Jump
	
Label_160:
	var_238_bool = 0; // 0xa0 PushV
	func_1023(var_238_bool); // 0xa1 NEW_2
	if(var_238_bool == 0) goto Label_175; // 0xa3 JumpB
	
Label_164:
	lshWaitForAnimEnd(); // 0xa4 Func
	var_239_string = var_3_string; // 0xa6 PushT
	if(var_239_string == 0) goto Label_169; // 0xa7 JumpB
	goto Label_174; // 0xa8 Jump
	
Label_174:
	goto Label_189; // 0xae Jump
	
Label_189:
	return 0; // 0xbd Return
	
Label_169:
	var_240_string = ""; // 0xa9 PushV
	var_240_string = var_2_object; // 0xaa MovT
	func_849(var_240_string); // 0xab NEW_2
	goto Label_164; // 0xad Jump
	
Label_175:
	var_251_string = "all"; // 0xaf PushS
	var_252_string = "idle"; // 0xb0 PushS
	PlayAnimation(var_251_string, var_252_string); // 0xb1 Func
	
Label_179:
	WaitForAnimEnd(); // 0xb3 Func
	var_253_string = var_3_string; // 0xb5 PushT
	if(var_253_string == 0) goto Label_184; // 0xb6 JumpB
	goto Label_189; // 0xb7 Jump
	
Label_184:
	var_254_string = "all"; // 0xb8 PushS
	var_255_string = "idle"; // 0xb9 PushS
	PlayAnimation(var_254_string, var_255_string); // 0xba Func
	goto Label_179; // 0xbc Jump
	
Label_138:
	var_256_string = ""; // 0x8a PushV
	var_256_string = "Neutral"; // 0x8b MovS
	func_190(var_175_object, var_256_string); // 0x8c NEW_2
	var_257_int = 541636; // 0x8e PushI
	SetMessage(var_257_int); // 0x8f TObjFunc
	ClearReplies(); // 0x91 TObjFunc
	var_258_int = 541637; // 0x93 PushI
	var_259_int = -1; // 0x94 PushI
	var_260_int = 43809; // 0x95 PushI
	AddReply(var_258_int, var_259_int, var_260_int); // 0x96 TObjFunc
	var_261_int = 541638; // 0x98 PushI
	var_262_int = -1; // 0x99 PushI
	var_263_int = 43810; // 0x9a PushI
	AddReply(var_261_int, var_262_int, var_263_int); // 0x9b TObjFunc
	goto Label_160; // 0x9d Jump
}


func_849(var_240_string)
{
	var_241_bool = 0; var_242_float = 0; var_243_float = 0; var_244_bool = 0; var_245_float = 0; var_246_float = 0; // 0x351 PushV
	lshHasAnimation(var_244_bool, var_240_string); // 0x352 Func
	var_247_bool = var_244_bool; // 0x354 Push
	if(var_247_bool == 0) goto Label_860; // 0x355 JumpB
	lshGetAnimTimes(var_240_string, var_245_float, var_246_float); // 0x356 Func
	var_248_bool = 0; // 0x358 PushB
	lshPlayAnimation(var_245_float, var_246_float, var_248_bool); // 0x359 Func
	goto Label_864; // 0x35b Jump
	
Label_864:
	return 6; // 0x360 Return
	
Label_860:
	var_249_string = "Can't find lsh animation : "; // 0x35c PushS
	var_250_int = var_249_string + var_240_string; // 0x35d Add
	Trace(var_250_int); // 0x35e Func
}


func_918(var_183_int, var_184_string)
{
	var_185_int = 0; var_186_int = 0; // 0x396 PushV
	GetVariable(var_184_string, var_186_int); // 0x397 Func
	var_183_int = var_186_int; // 0x399 Mov
	return 2; // 0x39a Return
}


func_986(var_226_bool)
{
	var_228_int = 0; var_229_string = ""; // 0x3db PushV
	var_229_string = "ood12BurahSobor3"; // 0x3dc MovS
	func_918(var_228_int, var_229_string); // 0x3dd NEW_2
	var_230_int = 0; // 0x3df PushI
	var_231_bool = var_228_int == var_230_int; // 0x3e0 Eq
	if(var_231_bool == 0) goto Label_996; // 0x3e1 JumpB
	var_226_bool = 1; // 0x3e2 MovB
	return 0; // 0x3e3 Return
	
Label_996:
	var_226_bool = 0; // 0x3e4 MovB
	return 0; // 0x3e5 Return
}


func_923(var_134_int)
{
	var_135_float = 0; var_136_float = 0; // 0x39b PushV
	GetGameTime(var_136_float); // 0x39c Func
	var_137_int = 1; // 0x39e PushI
	var_138_int = 0; // 0x39f PushV
	var_139_int = 24; // 0x3a0 PushI
	var_138_int = var_136_float / var_136_float; // 0x3a1 Div2
	var_134_int = var_137_int + var_138_int; // 0x3a2 Add2
	return 2; // 0x3a3 Return
}


func_1023(var_61_bool)
{
	var_61_bool = 1; // 0x3ff MovB
	return 0; // 0x400 Return
}


func_865(var_194_string, var_195_bool)
{
	var_198_bool = 0; var_199_float = 0; var_200_float = 0; var_201_bool = 0; var_202_float = 0; var_203_float = 0; // 0x361 PushV
	lshHasAnimation(var_201_bool, var_194_string); // 0x362 Func
	var_204_bool = var_201_bool; // 0x364 Push
	if(var_204_bool == 0) goto Label_875; // 0x365 JumpB
	lshGetAnimTimes(var_194_string, var_202_float, var_203_float); // 0x366 Func
	lshPlayAnimation(var_202_float, var_203_float, var_195_bool); // 0x368 Func
	goto Label_879; // 0x36a Jump
	
Label_879:
	return 6; // 0x36f Return
	
Label_875:
	var_205_string = "Can't find lsh animation : "; // 0x36b PushS
	var_206_int = var_205_string + var_194_string; // 0x36c Add
	Trace(var_206_int); // 0x36d Func
}


func_932()
{
	var_14_string = "ood12BurahSobor1"; // 0x3a5 PushS
	var_15_int = 1; // 0x3a6 PushI
	SetVariable(var_14_string, var_15_int); // 0x3a7 Func
	return 0; // 0x3a9 Return
}


func_806(var_121_bool)
{
	var_123_string = ""; var_124_int = 0; var_125_bool = 0; var_126_int = 0; var_127_string = ""; var_128_string = ""; var_129_int = 0; var_130_bool = 0; var_131_int = 0; var_132_string = ""; // 0x326 PushV
	var_133_string = "d"; // 0x327 PushS
	var_134_int = 0; // 0x328 PushV
	func_923(var_134_int); // 0x329 NEW_2
	var_140_int = var_133_string + var_134_int; // 0x32b Add
	var_141_string = "m"; // 0x32c PushS
	var_128_string = var_140_int + var_141_string; // 0x32d Add2
	var_129_int = 0; // 0x32e MovI
	
Label_815:
	var_142_int = 1; // 0x32f PushI
	if(var_142_int == 0) goto Label_828; // 0x330 JumpB
	var_143_int = 1; // 0x331 PushI
	var_144_int = var_129_int + var_143_int; // 0x332 Add
	var_145_int = var_128_string + var_144_int; // 0x333 Add
	HasProperty(var_145_int, var_130_bool); // 0x334 ObjFunc
	var_146_bool = var_130_bool == 0; // 0x336 Not
	if(var_146_bool == 0) goto Label_825; // 0x337 JumpB
	goto Label_828; // 0x338 Jump
	
Label_828:
	var_147_bool = var_129_int == 0; // 0x33c Not
	if(var_147_bool == 0) goto Label_832; // 0x33d JumpB
	var_121_bool = 0; // 0x33e MovB
	return 10; // 0x33f Return
	
Label_832:
	var_131_int = 0; // 0x340 MovI
	var_148_int = 1; // 0x341 PushI
	var_149_bool = var_129_int > var_148_int; // 0x342 GT
	if(var_149_bool == 0) goto Label_838; // 0x343 JumpB
	irand(var_131_int, var_129_int); // 0x344 Func
	
Label_838:
	var_150_int = 1; // 0x346 PushI
	var_151_int = var_131_int + var_150_int; // 0x347 Add
	var_152_int = var_128_string + var_151_int; // 0x348 Add
	GetProperty(var_152_int, var_132_string); // 0x349 ObjFunc
	var_153_bool = 0; var_154_string = ""; // 0x34b PushV
	var_154_string = var_132_string; // 0x34c Mov
	func_880(var_153_bool, var_154_string); // 0x34d NEW_2
	var_121_bool = var_153_bool; // 0x34e Mov
	return 10; // 0x350 Return
	
Label_825:
	var_155_int = 1; // 0x339 PushI
	var_129_int = var_129_int + var_155_int; // 0x33a Add2
	goto Label_815; // 0x33b Jump
}


func_998(var_70_int)
{
	var_71_int = 0; var_72_int = 0; // 0x3e6 PushV
	var_73_string = "branch"; // 0x3e7 PushS
	GetVariable(var_73_string, var_72_int); // 0x3e8 Func
	var_74_int = 0; // 0x3ea PushI
	var_75_bool = var_72_int == var_74_int; // 0x3eb Eq
	if(var_75_bool == 0) goto Label_1008; // 0x3ec JumpB
	var_70_int = 1; // 0x3ed MovI
	return 2; // 0x3ee Return
	
Label_1008:
	var_76_int = 1; // 0x3f0 PushI
	var_77_bool = var_72_int == var_76_int; // 0x3f1 Eq
	if(var_77_bool == 0) goto Label_1013; // 0x3f2 JumpB
	var_70_int = 2; // 0x3f3 MovI
	return 2; // 0x3f4 Return
	
Label_1013:
	var_70_int = 3; // 0x3f5 MovI
	return 2; // 0x3f6 Return
}


func_938()
{
	var_20_string = "ood12BurahSobor2"; // 0x3ab PushS
	var_21_int = 1; // 0x3ac PushI
	SetVariable(var_20_string, var_21_int); // 0x3ad Func
	return 0; // 0x3af Return
}


func_622(var_8_bool)
{
	var_8_bool = 1; // 0x26e MovB
	return 0; // 0x26f Return
}


func_944()
{
	var_26_string = "ood12BurahSobor3"; // 0x3b1 PushS
	var_27_int = 1; // 0x3b2 PushI
	SetVariable(var_26_string, var_27_int); // 0x3b3 Func
	return 0; // 0x3b5 Return
}


func_624(var_18_bool, var_20_float)
{
	var_21_float = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_bool = 0; var_29_bool = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; // 0x270 PushV
	GetPosition(var_31_cvector); // 0x271 ObjFunc
	GetEyesHeight(var_30_float); // 0x273 ObjFunc
	var_39_float = GetByIndex(var_31_cvector, 1); // 0x275 PushE
	var_39_float = var_39_float + var_30_float; // 0x276 Add2
	SetByIndex(var_31_cvector, 1) = var_39_float; // 0x277 PopE
	GetPosition(var_32_cvector); // 0x278 Func
	GetEyesHeight(var_30_float); // 0x27a Func
	var_40_float = GetByIndex(var_32_cvector, 1); // 0x27c PushE
	var_40_float = var_40_float + var_30_float; // 0x27d Add2
	SetByIndex(var_32_cvector, 1) = var_40_float; // 0x27e PopE
	var_33_cvector = var_31_cvector - var_32_cvector; // 0x27f Sub2
	var_41_float = GetByIndex(var_33_cvector, 1); // 0x280 PushE
	var_41_float = 0; // 0x281 MovI
	SetByIndex(var_33_cvector, 1) = var_41_float; // 0x282 PopE
	var_42_int = var_33_cvector | var_33_cvector; // 0x283 Or
	var_43_float = sqrt(var_42_int); // 0x284 Sqrt
	var_33_cvector = var_33_cvector / var_33_cvector; // 0x285 Div2
	var_34_cvector = -var_33_cvector; // 0x286 Neg2
	var_44_float = var_33_cvector * var_20_float; // 0x287 Mult
	var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); // 0x288 PushV
	var_47_cvector = CVector(0.0, 1.0, 0.0); // 0x289 PushVec
	var_46_cvector = var_34_cvector ^ var_47_cvector; // 0x28a Xor2
	func_908(var_45_cvector, var_46_cvector); // 0x28b NEW_2
	var_53_int = 25; // 0x28d PushI
	var_54_float = var_45_cvector * var_53_int; // 0x28e Mult
	var_55_int = var_44_float + var_54_float; // 0x28f Add
	var_56_cvector = CVector(0.0, 10.0, 0.0); // 0x290 PushVec
	var_35_cvector = var_55_int - var_56_cvector; // 0x291 Sub2
	var_36_cvector = var_32_cvector + var_35_cvector; // 0x292 Add2
	IsOverrideActive(var_37_bool); // 0x293 Func
	var_57_bool = var_37_bool; // 0x295 Push
	if(var_57_bool == 0) goto Label_665; // 0x296 JumpB
	var_18_bool = 0; // 0x297 MovB
	return 18; // 0x298 Return
	
Label_665:
	StopWorld(); // 0x299 Func
	var_58_bool = 1; // 0x29b PushB
	CameraTransit(var_36_cvector, var_34_cvector, var_58_bool); // 0x29c Func
	var_59_float = GetByIndex(var_35_cvector, 0); // 0x29e PushE
	var_60_float = GetByIndex(var_35_cvector, 2); // 0x29f PushE
	Rotate(var_59_float, var_60_float); // 0x2a0 Func
	var_61_bool = 0; // 0x2a2 PushV
	func_1023(var_61_bool); // 0x2a3 NEW_2
	if(var_61_bool == 0) goto Label_679; // 0x2a5 JumpB
	goto Label_687; // 0x2a6 Jump
	
Label_687:
	CameraWaitForPlayFinish(); // 0x2af Func
	ResumeWorld(); // 0x2b1 Func
	var_18_bool = 1; // 0x2b3 MovB
	return 18; // 0x2b4 Return
	
Label_679:
	var_62_string = "head"; // 0x2a7 PushS
	HasAnimationTrack(var_38_bool, var_62_string); // 0x2a8 Func
	var_63_bool = var_38_bool; // 0x2aa Push
	if(var_63_bool == 0) goto Label_687; // 0x2ab JumpB
	var_64_string = "head"; // 0x2ac PushS
	LookAsyncCamera(var_64_string); // 0x2ad Func
}


func_880(var_113_bool, var_114_string)
{
	var_115_bool = 0; var_116_bool = 0; // 0x370 PushV
	var_117_bool = 0; // 0x371 PushV
	func_1023(var_117_bool); // 0x372 NEW_2
	if(var_117_bool == 0) goto Label_893; // 0x374 JumpB
	lshHasSpeech(var_116_bool, var_114_string); // 0x375 Func
	var_118_bool = var_116_bool; // 0x377 Push
	if(var_118_bool == 0) goto Label_893; // 0x378 JumpB
	lshPlaySpeech(var_114_string); // 0x379 Func
	var_113_bool = 1; // 0x37b MovB
	return 2; // 0x37c Return
	
Label_893:
	var_113_bool = 0; // 0x37d MovB
	return 2; // 0x37e Return
}


func_693()
{
	var_266_bool = 0; var_267_bool = 0; // 0x2b5 PushV
	var_268_bool = 1; // 0x2b6 PushB
	CameraSwitchToNormal(var_268_bool); // 0x2b7 Func
	var_269_bool = 0; // 0x2b9 PushV
	func_1023(var_269_bool); // 0x2ba NEW_2
	if(var_269_bool == 0) goto Label_702; // 0x2bc JumpB
	goto Label_710; // 0x2bd Jump
	
Label_710:
	return 2; // 0x2c6 Return
	
Label_702:
	var_270_string = "head"; // 0x2be PushS
	HasAnimationTrack(var_267_bool, var_270_string); // 0x2bf Func
	var_271_bool = var_267_bool; // 0x2c1 Push
	if(var_271_bool == 0) goto Label_710; // 0x2c2 JumpB
	var_272_string = "head"; // 0x2c3 PushS
	UnlookAsync(var_272_string); // 0x2c4 Func
}


func_950(var_181_bool)
{
	var_183_int = 0; var_184_string = ""; // 0x3b7 PushV
	var_184_string = "game_final"; // 0x3b8 MovS
	func_918(var_183_int, var_184_string); // 0x3b9 NEW_2
	var_187_int = 0; // 0x3bb PushI
	var_188_bool = var_183_int != var_187_int; // 0x3bc Neq
	if(var_188_bool == 0) goto Label_960; // 0x3bd JumpB
	var_181_bool = 1; // 0x3be MovB
	return 0; // 0x3bf Return
	
Label_960:
	var_181_bool = 0; // 0x3c0 MovB
	return 0; // 0x3c1 Return
}


func_1015(var_67_int)
{
	var_67_int = 515592; // 0x3f7 MovI
	return 0; // 0x3f8 Return
}


func_1017(var_66_int)
{
	var_66_int = 511961; // 0x3f9 MovI
	return 0; // 0x3fa Return
}


func_1019(var_68_string)
{
	var_68_string = "ui/NPC_Burah.png"; // 0x3fb MovS
	return 0; // 0x3fc Return
}


func_190(var_2_object, var_190_string)
{
	var_191_bool = 0; // 0xbf PushV
	func_1023(var_191_bool); // 0xc0 NEW_2
	var_192_bool = var_191_bool == 0; // 0xc2 Not
	if(var_192_bool == 0) goto Label_197; // 0xc3 JumpB
	return 0; // 0xc4 Return
	
Label_197:
	var_193_bool = var_190_string == var_2_object; // 0xc5 Eq
	if(var_193_bool == 0) goto Label_200; // 0xc6 JumpB
	return 0; // 0xc7 Return
	
Label_200:
	var_194_string = ""; var_195_bool = 0; // 0xc8 PushV
	var_194_string = var_190_string; // 0xc9 Mov
	var_196_string = ""; // 0xca PushS
	var_197_bool = var_190_string == var_196_string; // 0xcb Eq
	if(var_197_bool == 0) goto Label_207; // 0xcc JumpB
	var_195_bool = 0; // 0xcd MovB
	goto Label_208; // 0xce Jump
	
Label_208:
	func_865(var_194_string, var_195_bool); // 0xd0 NEW_2
	var_2_object = var_190_string; // 0xd2 TMov
	return 0; // 0xd3 Return
	
Label_207:
	var_195_bool = 1; // 0xcf MovB
}


func_1021(var_69_string)
{
	var_69_string = "ui/NPC_Burah_b.png"; // 0x3fd MovS
	return 0; // 0x3fe Return
}


func_574()
{
	
Label_574:
	Hold(); // 0x23e Func
	goto Label_574; // 0x240 Jump
}


func_895()
{
	var_9_bool = 0; // 0x37f PushV
	func_1023(var_9_bool); // 0x380 NEW_2
	if(var_9_bool == 0) goto Label_901; // 0x382 JumpB
	lshStopSpeech(); // 0x383 Func
	
Label_901:
	return 0; // 0x385 Return
}


