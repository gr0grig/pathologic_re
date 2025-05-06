task_0_event_9(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_object, var_16_object, var_17_int, var_18_float)
{
	var_19_float = 0; var_20_float = 0; // 0x92 PushV
	EventDisable(26); // 0x93 EventDisable
	EventDisable(9); // 0x94 EventDisable
	var_21_int = 0; // 0x95 PushI
	var_22_bool = var_17_int == var_21_int; // 0x96 Eq
	if(var_22_bool == 0) goto Label_184; // 0x97 JumpB
	var_23_string = "final 0"; // 0x98 PushS
	Trace(var_23_string); // 0x99 Func
	var_24_bool = 0; // 0x9b PushV
	var_24_bool = 1; // 0x9c MovB
	var_25_bool = var_3_bool; // 0x9d PushT
	if(var_25_bool == 0) goto Label_165; // 0x9e JumpB
	var_26_bool = 0; // 0x9f PushV
	func_1311(var_26_bool); // 0xa0 NEW_2
	var_29_bool = var_26_bool == 0; // 0xa2 Not
	if(var_29_bool == 0) goto Label_165; // 0xa3 JumpB
	var_24_bool = 0; // 0xa4 MovB
	
Label_165:
	if(var_24_bool == 0) goto Label_180; // 0xa5 JumpB
	var_30_string = "final 1 locked: "; // 0xa6 PushS
	var_31_int = var_30_string + var_3_bool; // 0xa7 Add
	Trace(var_31_int); // 0xa8 Func
	GetGameTime(var_20_float); // 0xaa Func
	var_32_float = 0.00833; // 0xac PushF
	var_20_float = var_20_float + var_32_float; // 0xad Add2
	var_33_int = 0; // 0xae PushI
	SetTimeEvent(var_33_int, var_20_float); // 0xaf Func
	EventEnable(26); // 0xb1 EventEnable
	EventEnable(9); // 0xb2 EventEnable
	return 2; // 0xb3 Return
	
Label_180:
	func_1088(); // 0xb5 NEW_2
	goto Label_208; // 0xb7 Jump
	
Label_208:
	return 2; // 0xd0 Return
	
Label_184:
	var_150_int = 1; // 0xb8 PushI
	var_151_bool = var_17_int == var_150_int; // 0xb9 Eq
	if(var_151_bool == 0) goto Label_200; // 0xba JumpB
	var_152_bool = 0; // 0xbb PushV
	func_1035(var_152_bool); // 0xbc NEW_2
	if(var_152_bool == 0) goto Label_197; // 0xbe JumpB
	var_265_bool = 0; var_266_string = ""; var_267_string = ""; var_268_string = ""; // 0xbf PushV
	var_266_string = "volonteers_danko"; // 0xc0 MovS
	var_267_string = "childs_letter"; // 0xc1 MovS
	var_268_string = ""; // 0xc2 MovS
	func_665(var_265_bool, var_266_string, var_267_string, var_268_string); // 0xc3 NEW_2
	
Label_197:
	EventEnable(26); // 0xc5 EventEnable
	EventEnable(9); // 0xc6 EventEnable
	goto Label_208; // 0xc7 Jump
	
Label_200:
	var_272_int = 2; // 0xc8 PushI
	var_273_bool = var_17_int == var_272_int; // 0xc9 Eq
	if(var_273_bool == 0) goto Label_208; // 0xca JumpB
	func_0(var_20_float); // 0xcc NEW_2
	EventEnable(26); // 0xce EventEnable
	EventEnable(9); // 0xcf EventEnable
}


task_0_event_26(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_object, var_16_object, var_17_string)
{
	var_18_object = Obj(); var_19_object = Obj(); var_20_object = Obj(); var_21_object = Obj(); var_22_int = 0; var_23_object = Obj(); var_24_object = Obj(); var_25_object = Obj(); var_26_object = Obj(); var_27_int = 0; // 0xd1 PushV
	Trace(var_17_string); // 0xd2 Func
	var_28_string = "init_sobor"; // 0xd4 PushS
	var_29_bool = var_17_string == var_28_string; // 0xd5 Eq
	if(var_29_bool == 0) goto Label_244; // 0xd6 JumpB
	var_30_string = "sobor"; // 0xd7 PushS
	GetSceneByName(var_23_object, var_30_string); // 0xd8 Func
	var_31_string = "noaglaja"; // 0xda PushS
	Trigger(var_23_object, var_31_string); // 0xdb Func
	var_32_object = var_9_object; // 0xdd PushT
	if(var_32_object == 0) goto Label_226; // 0xde JumpB
	var_33_string = "cleanup"; // 0xdf PushS
	Trigger(var_20_object, var_33_string); // 0xe0 Func
	
Label_226:
	var_34_object = var_11_object; // 0xe2 PushT
	if(var_34_object == 0) goto Label_231; // 0xe3 JumpB
	var_35_string = "cleanup"; // 0xe4 PushS
	Trigger(var_18_object, var_35_string); // 0xe5 Func
	
Label_231:
	var_36_string = ""; var_37_bool = 0; // 0xe7 PushV
	var_36_string = "isobor@door1"; // 0xe8 MovS
	var_37_bool = 1; // 0xe9 MovB
	func_648(var_36_string, var_37_bool); // 0xea NEW_2
	var_46_string = ""; var_47_bool = 0; // 0xec PushV
	var_46_string = "sobor@door1"; // 0xed MovS
	var_47_bool = 0; // 0xee MovB
	func_648(var_46_string, var_47_bool); // 0xef NEW_2
	var_1_bool = 1; // 0xf1 TMovB
	var_23_object = 0; // 0xf2 SetNull
	goto Label_571; // 0xf3 Jump
	
Label_571:
	return 10; // 0x23b Return
	
Label_244:
	var_48_string = "sobor_load"; // 0xf4 PushS
	var_49_bool = var_17_string == var_48_string; // 0xf5 Eq
	if(var_49_bool == 0) goto Label_255; // 0xf6 JumpB
	var_50_bool = var_1_bool; // 0xf7 PushT
	if(var_50_bool == 0) goto Label_254; // 0xf8 JumpB
	var_3_bool = 1; // 0xf9 TMovB
	var_51_object = Obj(); var_52_string = ""; // 0xfa PushV
	var_52_string = "quest_d12_01_sobor_cutscene"; // 0xfb MovS
	func_601(var_51_object, var_52_string); // 0xfc NEW_2
	
Label_254:
	goto Label_571; // 0xfe Jump
	
Label_255:
	var_59_string = "sobor_cutscene_end"; // 0xff PushS
	var_60_bool = var_17_string == var_59_string; // 0x100 Eq
	if(var_60_bool == 0) goto Label_319; // 0x101 JumpB
	var_61_string = "sobor"; // 0x102 PushS
	GetSceneByName(var_24_object, var_61_string); // 0x103 Func
	var_62_object = Obj(); var_63_object = Obj(); var_64_string = ""; var_65_string = ""; var_66_string = ""; // 0x105 PushV
	var_63_object = var_24_object; // 0x106 Mov
	var_64_string = "pt_b12q01_block"; // 0x107 MovS
	var_65_string = "NPC_Block"; // 0x108 MovS
	var_66_string = "d12q01_Block.xml"; // 0x109 MovS
	func_612(var_62_object, var_63_object, var_64_string, var_65_string, var_66_string); // 0x10a NEW_2
	var_5_object = var_62_object; // 0x10b TMov
	var_80_object = Obj(); var_81_object = Obj(); var_82_string = ""; var_83_string = ""; var_84_string = ""; // 0x10d PushV
	var_81_object = var_24_object; // 0x10e Mov
	var_82_string = "pt_b12q01_aglaja"; // 0x10f MovS
	var_83_string = "NPC_Aglaja"; // 0x110 MovS
	var_84_string = "d12q01_Aglaja.xml"; // 0x111 MovS
	func_612(var_80_object, var_81_object, var_82_string, var_83_string, var_84_string); // 0x112 NEW_2
	var_6_object = var_80_object; // 0x113 TMov
	var_85_object = Obj(); var_86_object = Obj(); var_87_string = ""; var_88_string = ""; var_89_string = ""; // 0x115 PushV
	var_86_object = var_24_object; // 0x116 Mov
	var_87_string = "pt_b12q01_kapella"; // 0x117 MovS
	var_88_string = "NPC_Maria"; // 0x118 MovS
	var_89_string = "d12q01_maria.xml"; // 0x119 MovS
	func_612(var_85_object, var_86_object, var_87_string, var_88_string, var_89_string); // 0x11a NEW_2
	var_7_object = var_85_object; // 0x11b TMov
	var_90_bool = 0; // 0x11d PushV
	func_1297(var_90_bool); // 0x11e NEW_2
	if(var_90_bool == 0) goto Label_297; // 0x120 JumpB
	var_95_object = Obj(); var_96_object = Obj(); var_97_string = ""; var_98_string = ""; var_99_string = ""; // 0x121 PushV
	var_96_object = var_24_object; // 0x122 Mov
	var_97_string = "pt_b12q01_klara"; // 0x123 MovS
	var_98_string = "NPC_Klara"; // 0x124 MovS
	var_99_string = "d12q01_Klara.xml"; // 0x125 MovS
	func_612(var_95_object, var_96_object, var_97_string, var_98_string, var_99_string); // 0x126 NEW_2
	var_8_object = var_95_object; // 0x127 TMov
	
Label_297:
	var_100_bool = 0; // 0x129 PushV
	func_1304(var_100_bool); // 0x12a NEW_2
	if(var_100_bool == 0) goto Label_309; // 0x12c JumpB
	var_105_object = Obj(); var_106_object = Obj(); var_107_string = ""; var_108_string = ""; var_109_string = ""; // 0x12d PushV
	var_106_object = var_24_object; // 0x12e Mov
	var_107_string = "pt_d12q01_burah"; // 0x12f MovS
	var_108_string = "NPC_Burah"; // 0x130 MovS
	var_109_string = "d12q01_Burah.xml"; // 0x131 MovS
	func_612(var_105_object, var_106_object, var_107_string, var_108_string, var_109_string); // 0x132 NEW_2
	var_10_object = var_105_object; // 0x133 TMov
	
Label_309:
	var_110_object = Obj(); var_111_object = Obj(); var_112_string = ""; var_113_string = ""; var_114_string = ""; // 0x135 PushV
	var_111_object = var_24_object; // 0x136 Mov
	var_112_string = "pt_d12q01_eva"; // 0x137 MovS
	var_113_string = "NPC_Eva"; // 0x138 MovS
	var_114_string = "d12q01_Eva.xml"; // 0x139 MovS
	func_612(var_110_object, var_111_object, var_112_string, var_113_string, var_114_string); // 0x13a NEW_2
	var_12_object = var_110_object; // 0x13b TMov
	var_24_object = 0; // 0x13d SetNull
	goto Label_571; // 0x13e Jump
	
Label_319:
	var_115_string = "sobor_unload"; // 0x13f PushS
	var_116_bool = var_17_string == var_115_string; // 0x140 Eq
	if(var_116_bool == 0) goto Label_365; // 0x141 JumpB
	var_117_bool = var_1_bool; // 0x142 PushT
	if(var_117_bool == 0) goto Label_364; // 0x143 JumpB
	var_118_object = var_4_object; // 0x144 PushT
	if(var_118_object == 0) goto Label_328; // 0x145 JumpB
	Remove(); // 0x146 TObjFunc
	
Label_328:
	var_119_object = var_5_object; // 0x148 PushT
	if(var_119_object == 0) goto Label_333; // 0x149 JumpB
	var_120_string = "cleanup"; // 0x14a PushS
	Trigger(var_24_object, var_120_string); // 0x14b Func
	
Label_333:
	var_121_object = var_6_object; // 0x14d PushT
	if(var_121_object == 0) goto Label_338; // 0x14e JumpB
	var_122_string = "cleanup"; // 0x14f PushS
	Trigger(var_23_object, var_122_string); // 0x150 Func
	
Label_338:
	var_123_object = var_7_object; // 0x152 PushT
	if(var_123_object == 0) goto Label_343; // 0x153 JumpB
	var_124_string = "cleanup"; // 0x154 PushS
	Trigger(var_22_int, var_124_string); // 0x155 Func
	
Label_343:
	var_125_object = var_8_object; // 0x157 PushT
	if(var_125_object == 0) goto Label_348; // 0x158 JumpB
	var_126_string = "cleanup"; // 0x159 PushS
	Trigger(var_21_object, var_126_string); // 0x15a Func
	
Label_348:
	var_127_object = var_10_object; // 0x15c PushT
	if(var_127_object == 0) goto Label_353; // 0x15d JumpB
	var_128_string = "cleanup"; // 0x15e PushS
	Trigger(var_19_object, var_128_string); // 0x15f Func
	
Label_353:
	var_129_object = var_12_object; // 0x161 PushT
	if(var_129_object == 0) goto Label_358; // 0x162 JumpB
	var_130_string = "cleanup"; // 0x163 PushS
	Trigger(var_17_string, var_130_string); // 0x164 Func
	
Label_358:
	var_131_string = ""; var_132_bool = 0; // 0x166 PushV
	var_131_string = "sobor@door1"; // 0x167 MovS
	var_132_bool = 1; // 0x168 MovB
	func_648(var_131_string, var_132_bool); // 0x169 NEW_2
	var_3_bool = 0; // 0x16b TMovB
	
Label_364:
	goto Label_571; // 0x16c Jump
	
Label_365:
	var_133_string = "init_theater"; // 0x16d PushS
	var_134_bool = var_17_string == var_133_string; // 0x16e Eq
	if(var_134_bool == 0) goto Label_384; // 0x16f JumpB
	var_135_bool = 0; var_136_string = ""; // 0x170 PushV
	var_136_string = "NPC_Mark"; // 0x171 MovS
	func_677(var_135_bool, var_136_string); // 0x172 NEW_2
	var_140_string = ""; var_141_bool = 0; // 0x174 PushV
	var_140_string = "itheater@door1"; // 0x175 MovS
	var_141_bool = 1; // 0x176 MovB
	func_648(var_140_string, var_141_bool); // 0x177 NEW_2
	var_142_string = ""; var_143_bool = 0; // 0x179 PushV
	var_142_string = "theater@door1"; // 0x17a MovS
	var_143_bool = 0; // 0x17b MovB
	func_648(var_142_string, var_143_bool); // 0x17c NEW_2
	var_0_bool = 1; // 0x17e TMovB
	goto Label_571; // 0x17f Jump
	
Label_384:
	var_144_string = "theater_load"; // 0x180 PushS
	var_145_bool = var_17_string == var_144_string; // 0x181 Eq
	if(var_145_bool == 0) goto Label_399; // 0x182 JumpB
	var_146_bool = var_0_bool; // 0x183 PushT
	if(var_146_bool == 0) goto Label_398; // 0x184 JumpB
	var_3_bool = 1; // 0x185 TMovB
	var_147_object = Obj(); var_148_string = ""; // 0x186 PushV
	var_148_string = "quest_d12_01_theater_cutscene"; // 0x187 MovS
	func_601(var_147_object, var_148_string); // 0x188 NEW_2
	var_149_string = "d12q01TheaterIsVisited"; // 0x18a PushS
	var_150_int = 1; // 0x18b PushI
	SetVariable(var_149_string, var_150_int); // 0x18c Func
	
Label_398:
	goto Label_571; // 0x18e Jump
	
Label_399:
	var_151_string = "theater_cutscene_end"; // 0x18f PushS
	var_152_bool = var_17_string == var_151_string; // 0x190 Eq
	if(var_152_bool == 0) goto Label_423; // 0x191 JumpB
	var_153_string = "theater"; // 0x192 PushS
	GetSceneByName(var_25_object, var_153_string); // 0x193 Func
	var_154_object = Obj(); var_155_object = Obj(); var_156_string = ""; var_157_string = ""; var_158_string = ""; // 0x195 PushV
	var_155_object = var_25_object; // 0x196 Mov
	var_156_string = "pt_b12q01_birdmask"; // 0x197 MovS
	var_157_string = "pers_birdmask"; // 0x198 MovS
	var_158_string = "d12q01_tbirdmask.xml"; // 0x199 MovS
	func_612(var_154_object, var_155_object, var_156_string, var_157_string, var_158_string); // 0x19a NEW_2
	var_13_object = var_154_object; // 0x19b TMov
	var_159_object = Obj(); var_160_object = Obj(); var_161_string = ""; var_162_string = ""; var_163_string = ""; // 0x19d PushV
	var_160_object = var_25_object; // 0x19e Mov
	var_161_string = "pt_b12q01_whitemask"; // 0x19f MovS
	var_162_string = "pers_whitemask"; // 0x1a0 MovS
	var_163_string = "d12q01_twhitemask.xml"; // 0x1a1 MovS
	func_612(var_159_object, var_160_object, var_161_string, var_162_string, var_163_string); // 0x1a2 NEW_2
	var_14_object = var_159_object; // 0x1a3 TMov
	var_25_object = 0; // 0x1a5 SetNull
	goto Label_571; // 0x1a6 Jump
	
Label_423:
	var_164_string = "theater_unload"; // 0x1a7 PushS
	var_165_bool = var_17_string == var_164_string; // 0x1a8 Eq
	if(var_165_bool == 0) goto Label_445; // 0x1a9 JumpB
	var_166_bool = var_0_bool; // 0x1aa PushT
	if(var_166_bool == 0) goto Label_444; // 0x1ab JumpB
	var_167_object = var_13_object; // 0x1ac PushT
	if(var_167_object == 0) goto Label_433; // 0x1ad JumpB
	var_168_string = "cleanup"; // 0x1ae PushS
	Trigger(var_16_object, var_168_string); // 0x1af Func
	
Label_433:
	var_169_object = var_14_object; // 0x1b1 PushT
	if(var_169_object == 0) goto Label_438; // 0x1b2 JumpB
	var_170_string = "cleanup"; // 0x1b3 PushS
	Trigger(var_15_object, var_170_string); // 0x1b4 Func
	
Label_438:
	var_171_string = ""; var_172_bool = 0; // 0x1b6 PushV
	var_171_string = "theater@door1"; // 0x1b7 MovS
	var_172_bool = 1; // 0x1b8 MovB
	func_648(var_171_string, var_172_bool); // 0x1b9 NEW_2
	var_3_bool = 0; // 0x1bb TMovB
	
Label_444:
	goto Label_571; // 0x1bc Jump
	
Label_445:
	var_173_string = "init_hidden_room"; // 0x1bd PushS
	var_174_bool = var_17_string == var_173_string; // 0x1be Eq
	if(var_174_bool == 0) goto Label_475; // 0x1bf JumpB
	var_175_string = ""; var_176_bool = 0; // 0x1c0 PushV
	var_175_string = "mnogogrannik_han@door1"; // 0x1c1 MovS
	var_176_bool = 0; // 0x1c2 MovB
	func_648(var_175_string, var_176_bool); // 0x1c3 NEW_2
	var_177_string = ""; var_178_bool = 0; // 0x1c5 PushV
	var_177_string = "mnogogrannik_han@door2"; // 0x1c6 MovS
	var_178_bool = 0; // 0x1c7 MovB
	func_648(var_177_string, var_178_bool); // 0x1c8 NEW_2
	var_179_string = ""; var_180_bool = 0; // 0x1ca PushV
	var_179_string = "hidden_room@door1"; // 0x1cb MovS
	var_180_bool = 0; // 0x1cc MovB
	func_648(var_179_string, var_180_bool); // 0x1cd NEW_2
	var_181_string = ""; var_182_bool = 0; // 0x1cf PushV
	var_181_string = "imnogogrannik_han@door1"; // 0x1d0 MovS
	var_182_bool = 0; // 0x1d1 MovB
	func_648(var_181_string, var_182_bool); // 0x1d2 NEW_2
	var_183_string = ""; var_184_bool = 0; // 0x1d4 PushV
	var_183_string = "mnogogrannik@door1"; // 0x1d5 MovS
	var_184_bool = 0; // 0x1d6 MovB
	func_648(var_183_string, var_184_bool); // 0x1d7 NEW_2
	var_2_bool = 1; // 0x1d9 TMovB
	goto Label_571; // 0x1da Jump
	
Label_475:
	var_185_string = "hidden_room_load"; // 0x1db PushS
	var_186_bool = var_17_string == var_185_string; // 0x1dc Eq
	if(var_186_bool == 0) goto Label_490; // 0x1dd JumpB
	var_187_bool = var_2_bool; // 0x1de PushT
	if(var_187_bool == 0) goto Label_489; // 0x1df JumpB
	var_3_bool = 1; // 0x1e0 TMovB
	var_188_string = "d12q01ChildsAreVisited"; // 0x1e1 PushS
	var_189_int = 1; // 0x1e2 PushI
	SetVariable(var_188_string, var_189_int); // 0x1e3 Func
	var_190_object = Obj(); var_191_string = ""; // 0x1e5 PushV
	var_191_string = "quest_d12_01_hidden_room_cutscene"; // 0x1e6 MovS
	func_601(var_190_object, var_191_string); // 0x1e7 NEW_2
	
Label_489:
	goto Label_571; // 0x1e9 Jump
	
Label_490:
	var_192_string = "hidden_room_cutscene_end"; // 0x1ea PushS
	var_193_bool = var_17_string == var_192_string; // 0x1eb Eq
	if(var_193_bool == 0) goto Label_514; // 0x1ec JumpB
	var_194_string = "hidden_room"; // 0x1ed PushS
	GetSceneByName(var_26_object, var_194_string); // 0x1ee Func
	var_195_object = Obj(); var_196_object = Obj(); var_197_string = ""; var_198_string = ""; var_199_string = ""; // 0x1f0 PushV
	var_196_object = var_26_object; // 0x1f1 Mov
	var_197_string = "pt_girl"; // 0x1f2 MovS
	var_198_string = "pers_littlegirl2"; // 0x1f3 MovS
	var_199_string = "d12q01_littlegirl.xml"; // 0x1f4 MovS
	func_612(var_195_object, var_196_object, var_197_string, var_198_string, var_199_string); // 0x1f5 NEW_2
	var_15_object = var_195_object; // 0x1f6 TMov
	var_200_object = Obj(); var_201_object = Obj(); var_202_string = ""; var_203_string = ""; var_204_string = ""; // 0x1f8 PushV
	var_201_object = var_26_object; // 0x1f9 Mov
	var_202_string = "pt_boy"; // 0x1fa MovS
	var_203_string = "pers_littleboy2"; // 0x1fb MovS
	var_204_string = "d12q01_littleboy.xml"; // 0x1fc MovS
	func_612(var_200_object, var_201_object, var_202_string, var_203_string, var_204_string); // 0x1fd NEW_2
	var_16_object = var_200_object; // 0x1fe TMov
	var_26_object = 0; // 0x200 SetNull
	goto Label_571; // 0x201 Jump
	
Label_514:
	var_205_string = "hidden_room_unload"; // 0x202 PushS
	var_206_bool = var_17_string == var_205_string; // 0x203 Eq
	if(var_206_bool == 0) goto Label_541; // 0x204 JumpB
	var_207_bool = var_2_bool; // 0x205 PushT
	if(var_207_bool == 0) goto Label_540; // 0x206 JumpB
	var_208_string = ""; var_209_bool = 0; // 0x207 PushV
	var_208_string = "hidden_room@door1"; // 0x208 MovS
	var_209_bool = 1; // 0x209 MovB
	func_648(var_208_string, var_209_bool); // 0x20a NEW_2
	var_210_string = ""; var_211_bool = 0; // 0x20c PushV
	var_210_string = "mnogogrannik@door1"; // 0x20d MovS
	var_211_bool = 1; // 0x20e MovB
	func_648(var_210_string, var_211_bool); // 0x20f NEW_2
	var_3_bool = 0; // 0x211 TMovB
	var_212_bool = 0; // 0x212 PushV
	func_1058(var_212_bool); // 0x213 NEW_2
	if(var_212_bool == 0) goto Label_540; // 0x215 JumpB
	var_320_bool = 0; var_321_string = ""; var_322_string = ""; var_323_string = ""; // 0x216 PushV
	var_321_string = "volonteers_danko"; // 0x217 MovS
	var_322_string = "theater_letter"; // 0x218 MovS
	var_323_string = ""; // 0x219 MovS
	func_665(var_320_bool, var_321_string, var_322_string, var_323_string); // 0x21a NEW_2
	
Label_540:
	goto Label_571; // 0x21c Jump
	
Label_541:
	var_327_string = "cleanup"; // 0x21d PushS
	var_328_bool = var_17_string == var_327_string; // 0x21e Eq
	if(var_328_bool == 0) goto Label_558; // 0x21f JumpB
	var_329_string = "d12q01"; // 0x220 PushS
	GetVariable(var_329_string, var_27_int); // 0x221 Func
	var_330_int = 1000; // 0x223 PushI
	var_331_bool = var_27_int != var_330_int; // 0x224 Neq
	if(var_331_bool == 0) goto Label_554; // 0x225 JumpB
	func_572(); // 0x227 NEW_2
	goto Label_557; // 0x229 Jump
	
Label_557:
	goto Label_571; // 0x22d Jump
	
Label_554:
	func_588(); // 0x22b NEW_2
	
Label_558:
	var_337_string = "fail"; // 0x22e PushS
	var_338_bool = var_17_string == var_337_string; // 0x22f Eq
	if(var_338_bool == 0) goto Label_565; // 0x230 JumpB
	func_572(); // 0x232 NEW_2
	goto Label_571; // 0x234 Jump
	
Label_565:
	var_339_string = "completed"; // 0x235 PushS
	var_340_bool = var_17_string == var_339_string; // 0x236 Eq
	if(var_340_bool == 0) goto Label_571; // 0x237 JumpB
	func_580(); // 0x239 NEW_2
}


main(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_object, var_16_object)
{
	var_17_object = Obj(); var_18_float = 0; var_19_object = Obj(); var_20_float = 0; // 0x12 PushV
	var_1_bool = 0; // 0x13 TMovB
	var_0_bool = 0; // 0x14 TMovB
	var_2_bool = 0; // 0x15 TMovB
	var_3_bool = 0; // 0x16 TMovB
	func_1316(); // 0x18 NEW_2
	var_35_int = 0; // 0x1a PushI
	var_36_int = 288; // 0x1b PushI
	SetTimeEvent(var_35_int, var_36_int); // 0x1c Func
	var_37_int = 0; // 0x1e PushV
	func_689(var_37_int); // 0x1f NEW_2
	var_42_int = 8; // 0x21 PushI
	var_43_bool = var_37_int >= var_42_int; // 0x22 GE
	if(var_43_bool == 0) goto Label_47; // 0x23 JumpB
	var_44_bool = 0; // 0x24 PushV
	func_1035(var_44_bool); // 0x25 NEW_2
	if(var_44_bool == 0) goto Label_46; // 0x27 JumpB
	var_157_bool = 0; var_158_string = ""; var_159_string = ""; var_160_string = ""; // 0x28 PushV
	var_158_string = "volonteers_danko"; // 0x29 MovS
	var_159_string = "childs_letter"; // 0x2a MovS
	var_160_string = ""; // 0x2b MovS
	func_665(var_157_bool, var_158_string, var_159_string, var_160_string); // 0x2c NEW_2
	
Label_46:
	goto Label_51; // 0x2e Jump
	
Label_51:
	var_164_int = 0; // 0x33 PushV
	var_164_int = 0; // 0x34 MovI
	func_1077(var_164_int); // 0x35 NEW_2
	func_697(); // 0x38 NEW_2
	func_710(); // 0x3b NEW_2
	GetMainOutdoorScene(var_19_object); // 0x3d Func
	var_197_object = Obj(); var_198_object = Obj(); var_199_string = ""; var_200_string = ""; var_201_string = ""; // 0x3f PushV
	var_198_object = var_19_object; // 0x40 Mov
	var_199_string = "pt_b12q01_birdmask_s"; // 0x41 MovS
	var_200_string = "pers_birdmask"; // 0x42 MovS
	var_201_string = "d12q01_birdmask_s.xml"; // 0x43 MovS
	func_630(var_198_object, var_199_string, var_200_string, var_201_string); // 0x44 NEW_2
	var_4_object = var_197_object; // 0x45 TMov
	var_215_string = "termitnik2"; // 0x47 PushS
	GetSceneByName(var_19_object, var_215_string); // 0x48 Func
	var_216_object = Obj(); var_217_object = Obj(); var_218_string = ""; var_219_string = ""; var_220_string = ""; // 0x4a PushV
	var_217_object = var_19_object; // 0x4b Mov
	var_218_string = "pt_b12q01_klara"; // 0x4c MovS
	var_219_string = "NPC_Klara"; // 0x4d MovS
	var_220_string = "d12q01_klara_t2.xml"; // 0x4e MovS
	func_612(var_216_object, var_217_object, var_218_string, var_219_string, var_220_string); // 0x4f NEW_2
	var_9_object = var_216_object; // 0x50 TMov
	var_234_string = "factory"; // 0x52 PushS
	GetSceneByName(var_19_object, var_234_string); // 0x53 Func
	var_235_object = Obj(); var_236_object = Obj(); var_237_string = ""; var_238_string = ""; var_239_string = ""; // 0x55 PushV
	var_236_object = var_19_object; // 0x56 Mov
	var_237_string = "pt_d12q01_burah"; // 0x57 MovS
	var_238_string = "NPC_Burah"; // 0x58 MovS
	var_239_string = "d12q01_burah_factory.xml"; // 0x59 MovS
	func_612(var_235_object, var_236_object, var_237_string, var_238_string, var_239_string); // 0x5a NEW_2
	var_11_object = var_235_object; // 0x5b TMov
	var_240_string = ""; var_241_bool = 0; // 0x5d PushV
	var_240_string = "sobor@door1"; // 0x5e MovS
	var_241_bool = 1; // 0x5f MovB
	func_648(var_240_string, var_241_bool); // 0x60 NEW_2
	var_242_string = ""; var_243_bool = 0; // 0x62 PushV
	var_242_string = "hidden_room@door1"; // 0x63 MovS
	var_243_bool = 1; // 0x64 MovB
	func_648(var_242_string, var_243_bool); // 0x65 NEW_2
	var_244_string = ""; var_245_bool = 0; // 0x67 PushV
	var_244_string = "mnogogrannik@door1"; // 0x68 MovS
	var_245_bool = 1; // 0x69 MovB
	func_648(var_244_string, var_245_bool); // 0x6a NEW_2
	var_246_string = ""; var_247_bool = 0; // 0x6c PushV
	var_246_string = "cot_eva@door1"; // 0x6d MovS
	var_247_bool = 0; // 0x6e MovB
	func_648(var_246_string, var_247_bool); // 0x6f NEW_2
	var_248_string = ""; var_249_bool = 0; // 0x71 PushV
	var_248_string = "termitnik2@door1"; // 0x72 MovS
	var_249_bool = 0; // 0x73 MovB
	func_648(var_248_string, var_249_bool); // 0x74 NEW_2
	var_250_string = ""; var_251_bool = 0; // 0x76 PushV
	var_250_string = "uprava_admin@door1"; // 0x77 MovS
	var_251_bool = 0; // 0x78 MovB
	func_648(var_250_string, var_251_bool); // 0x79 NEW_2
	GetGameTime(var_20_float); // 0x7b Func
	var_252_int = 271; // 0x7d PushI
	var_253_bool = var_20_float < var_252_int; // 0x7e LT
	if(var_253_bool == 0) goto Label_138; // 0x7f JumpB
	var_254_int = 2; // 0x80 PushI
	var_255_int = 271; // 0x81 PushI
	SetTimeEvent(var_254_int, var_255_int); // 0x82 Func
	var_256_string = ""; var_257_bool = 0; // 0x84 PushV
	var_256_string = "theater@door1"; // 0x85 MovS
	var_257_bool = 0; // 0x86 MovB
	func_648(var_256_string, var_257_bool); // 0x87 NEW_2
	goto Label_141; // 0x89 Jump
	
Label_141:
	Hold(); // 0x8d Func
	goto Label_141; // 0x8f Jump
	
Label_138:
	func_0(var_20_float); // 0x8b NEW_2
	
Label_47:
	var_267_int = 1; // 0x2f PushI
	var_268_int = 272; // 0x30 PushI
	SetTimeEvent(var_267_int, var_268_int); // 0x31 Func
}


func_0(var_13_object)
{
	var_258_object = Obj(); var_259_object = Obj(); // 0x0 PushV
	GetMainOutdoorScene(var_259_object); // 0x1 Func
	var_260_string = ""; var_261_bool = 0; // 0x3 PushV
	var_260_string = "theater@door1"; // 0x4 MovS
	var_261_bool = 1; // 0x5 MovB
	func_648(var_260_string, var_261_bool); // 0x6 NEW_2
	var_262_object = Obj(); var_263_object = Obj(); var_264_string = ""; var_265_string = ""; var_266_string = ""; // 0x8 PushV
	var_263_object = var_259_object; // 0x9 Mov
	var_264_string = "pt_b12q01_birdmask_t"; // 0xa MovS
	var_265_string = "pers_birdmask"; // 0xb MovS
	var_266_string = "d12q01_birdmask_t.xml"; // 0xc MovS
	func_630(var_263_object, var_264_string, var_265_string, var_266_string); // 0xd NEW_2
	var_13_object = var_262_object; // 0xe TMov
	return 2; // 0x10 Return
}


func_770()
{
	var_52_int = 0; // 0x302 PushV
	func_764(var_52_int); // 0x303 NEW_2
	var_56_int = 1; // 0x305 PushI
	var_57_bool = var_52_int == var_56_int; // 0x306 Eq
	if(var_57_bool == 0) goto Label_781; // 0x307 JumpB
	var_58_string = "BurahCompleted"; // 0x308 PushS
	var_59_int = 1; // 0x309 PushI
	SetRegistryData(var_58_string, var_59_int); // 0x30a Func
	goto Label_802; // 0x30c Jump
	
Label_802:
	return 0; // 0x322 Return
	
Label_781:
	var_60_int = 0; // 0x30d PushV
	func_764(var_60_int); // 0x30e NEW_2
	var_61_int = 0; // 0x310 PushI
	var_62_bool = var_60_int == var_61_int; // 0x311 Eq
	if(var_62_bool == 0) goto Label_792; // 0x312 JumpB
	var_63_string = "DankoCompleted"; // 0x313 PushS
	var_64_int = 1; // 0x314 PushI
	SetRegistryData(var_63_string, var_64_int); // 0x315 Func
	goto Label_802; // 0x317 Jump
	
Label_792:
	var_65_int = 0; // 0x318 PushV
	func_764(var_65_int); // 0x319 NEW_2
	var_66_int = 2; // 0x31b PushI
	var_67_bool = var_65_int == var_66_int; // 0x31c Eq
	if(var_67_bool == 0) goto Label_802; // 0x31d JumpB
	var_68_string = "KlaraCompleted"; // 0x31e PushS
	var_69_int = 1; // 0x31f PushI
	SetRegistryData(var_68_string, var_69_int); // 0x320 Func
}


func_901(var_81_bool, var_82_int)
{
	var_83_int = 0; var_84_int = 0; // 0x385 PushV
	var_85_string = "vol_"; // 0x386 PushS
	var_86_int = var_85_string + var_82_int; // 0x387 Add
	GetVariable(var_86_int, var_84_int); // 0x388 Func
	var_87_int = 4; // 0x38a PushI
	var_88_int = var_84_int & var_87_int; // 0x38b And
	var_89_int = 0; // 0x38c PushI
	var_81_bool = var_88_int != var_89_int; // 0x38d Neq2
	return 2; // 0x38e Return
}


func_648(var_25_string, var_26_bool)
{
	var_27_object = Obj(); var_28_object = Obj(); // 0x288 PushV
	FindActor(var_28_object, var_25_string); // 0x289 Func
	var_29_bool = var_28_object == 0; // 0x28b Not
	if(var_29_bool == 0) goto Label_660; // 0x28c JumpB
	var_30_string = "Door "; // 0x28d PushS
	var_31_int = var_30_string + var_25_string; // 0x28e Add
	var_32_string = " not found"; // 0x28f PushS
	var_33_int = var_31_int + var_32_string; // 0x290 Add
	Trace(var_33_int); // 0x291 Func
	goto Label_663; // 0x293 Jump
	
Label_663:
	return 2; // 0x297 Return
	
Label_660:
	var_34_string = "locked"; // 0x294 PushS
	SetProperty(var_34_string, var_26_bool); // 0x295 ObjFunc
}


func_1035(var_44_bool)
{
	var_45_int = 0; var_46_int = 0; // 0x40b PushV
	var_46_int = 0; // 0x40c MovI
	var_47_bool = 0; // 0x40d PushV
	func_997(var_47_bool); // 0x40e NEW_2
	if(var_47_bool == 0) goto Label_1043; // 0x410 JumpB
	var_91_int = 1; // 0x411 PushI
	var_46_int = var_46_int + var_91_int; // 0x412 Add2
	
Label_1043:
	var_92_bool = 0; // 0x413 PushV
	func_959(var_92_bool); // 0x414 NEW_2
	if(var_92_bool == 0) goto Label_1049; // 0x416 JumpB
	var_123_int = 1; // 0x417 PushI
	var_46_int = var_46_int + var_123_int; // 0x418 Add2
	
Label_1049:
	var_124_bool = 0; // 0x419 PushV
	func_921(var_124_bool); // 0x41a NEW_2
	if(var_124_bool == 0) goto Label_1055; // 0x41c JumpB
	var_155_int = 1; // 0x41d PushI
	var_46_int = var_46_int + var_155_int; // 0x41e Add2
	
Label_1055:
	var_156_int = 2; // 0x41f PushI
	var_44_bool = var_46_int >= var_156_int; // 0x420 GE2
	return 2; // 0x421 Return
}


func_911(var_72_bool, var_73_int)
{
	var_74_int = 0; var_75_int = 0; // 0x38f PushV
	var_76_string = "vol_"; // 0x390 PushS
	var_77_int = var_76_string + var_73_int; // 0x391 Add
	GetVariable(var_77_int, var_75_int); // 0x392 Func
	var_78_int = 16; // 0x394 PushI
	var_79_int = var_75_int & var_78_int; // 0x395 And
	var_80_int = 0; // 0x396 PushI
	var_72_bool = var_79_int != var_80_int; // 0x397 Neq2
	return 2; // 0x398 Return
}


func_1297(var_90_bool)
{
	var_91_int = 0; var_92_int = 0; // 0x511 PushV
	var_93_string = "d12q01KlaraInSobor"; // 0x512 PushS
	GetVariable(var_93_string, var_92_int); // 0x513 Func
	var_94_int = 0; // 0x515 PushI
	var_90_bool = var_92_int != var_94_int; // 0x516 Neq2
	return 2; // 0x517 Return
}


func_1304(var_100_bool)
{
	var_101_int = 0; var_102_int = 0; // 0x518 PushV
	var_103_string = "d12q01BurahInSobor"; // 0x519 PushS
	GetVariable(var_103_string, var_102_int); // 0x51a Func
	var_104_int = 0; // 0x51c PushI
	var_100_bool = var_102_int != var_104_int; // 0x51d Neq2
	return 2; // 0x51e Return
}


func_665(var_157_bool, var_158_string, var_159_string, var_160_string)
{
	var_161_object = Obj(); var_162_object = Obj(); // 0x299 PushV
	FindActor(var_162_object, var_158_string); // 0x29a Func
	var_163_bool = var_162_object == 0; // 0x29c NullEq
	if(var_163_bool == 0) goto Label_672; // 0x29d JumpB
	var_157_bool = 0; // 0x29e MovB
	return 2; // 0x29f Return
	
Label_672:
	Trigger(var_162_object, var_159_string, var_160_string); // 0x2a0 Func
	var_157_bool = 1; // 0x2a2 MovB
	return 2; // 0x2a3 Return
}


func_921(var_124_bool)
{
	var_125_object = Obj(); var_126_int = 0; var_127_int = 0; var_128_int = 0; var_129_object = Obj(); var_130_int = 0; var_131_int = 0; var_132_int = 0; // 0x399 PushV
	CreateIntVector(var_129_object); // 0x39a Func
	var_133_object = Obj(); var_134_bool = 0; var_135_int = 0; // 0x39c PushV
	var_133_object = var_129_object; // 0x39d Mov
	var_134_bool = 0; // 0x39e MovB
	var_135_int = -1; // 0x39f MovI
	func_803(var_134_bool, var_135_int); // 0x3a0 NEW_2
	size(var_130_int); // 0x3a2 ObjFunc
	var_131_int = 0; // 0x3a4 MovI
	
Label_933:
	var_148_bool = var_131_int < var_130_int; // 0x3a5 LT
	if(var_148_bool == 0) goto Label_956; // 0x3a6 JumpB
	get(var_132_int, var_131_int); // 0x3a7 ObjFunc
	var_149_bool = 0; // 0x3a9 PushV
	var_149_bool = 1; // 0x3aa MovB
	var_150_bool = 0; var_151_int = 0; // 0x3ab PushV
	var_151_int = var_132_int; // 0x3ac Mov
	func_911(var_150_bool, var_151_int); // 0x3ad NEW_2
	if(var_150_bool == 0) goto Label_950; // 0x3af JumpB
	var_152_bool = 0; var_153_int = 0; // 0x3b0 PushV
	var_153_int = var_132_int; // 0x3b1 Mov
	func_901(var_152_bool, var_153_int); // 0x3b2 NEW_2
	if(var_152_bool == 0) goto Label_950; // 0x3b4 JumpB
	var_149_bool = 0; // 0x3b5 MovB
	
Label_950:
	if(var_149_bool == 0) goto Label_953; // 0x3b6 JumpB
	var_124_bool = 0; // 0x3b7 MovB
	return 8; // 0x3b8 Return
	
Label_953:
	var_154_int = 1; // 0x3b9 PushI
	var_131_int = var_131_int + var_154_int; // 0x3ba Add2
	goto Label_933; // 0x3bb Jump
	
Label_956:
	var_124_bool = 1; // 0x3bc MovB
	return 8; // 0x3bd Return
}


func_1311(var_26_bool)
{
	var_27_bool = 0; var_28_bool = 0; // 0x51f PushV
	IsOverrideActive(var_28_bool); // 0x520 Func
	var_26_bool = !var_28_bool; // 0x522 Not2
	return 2; // 0x523 Return
}


func_1058(var_212_bool)
{
	var_212_bool = 0; // 0x422 MovB
	var_213_bool = 0; // 0x423 PushV
	var_213_bool = 0; // 0x424 MovB
	var_214_bool = 0; // 0x425 PushV
	func_997(var_214_bool); // 0x426 NEW_2
	if(var_214_bool == 0) goto Label_1070; // 0x428 JumpB
	var_258_bool = 0; // 0x429 PushV
	func_959(var_258_bool); // 0x42a NEW_2
	if(var_258_bool == 0) goto Label_1070; // 0x42c JumpB
	var_213_bool = 1; // 0x42d MovB
	
Label_1070:
	if(var_213_bool == 0) goto Label_1076; // 0x42e JumpB
	var_289_bool = 0; // 0x42f PushV
	func_921(var_289_bool); // 0x430 NEW_2
	if(var_289_bool == 0) goto Label_1076; // 0x432 JumpB
	var_212_bool = 1; // 0x433 MovB
	
Label_1076:
	return 0; // 0x434 Return
}


func_803(var_134_bool, var_135_int)
{
	var_136_int = 18; // 0x324 PushI
	add(var_136_int); // 0x325 ObjFunc
	var_137_int = 24; // 0x327 PushI
	add(var_137_int); // 0x328 ObjFunc
	var_138_int = 20; // 0x32a PushI
	add(var_138_int); // 0x32b ObjFunc
	var_139_int = 14; // 0x32d PushI
	add(var_139_int); // 0x32e ObjFunc
	var_140_bool = 0; // 0x330 PushB
	var_141_bool = var_134_bool == var_140_bool; // 0x331 Eq
	if(var_141_bool == 0) goto Label_829; // 0x332 JumpB
	var_142_int = 10; // 0x333 PushI
	add(var_142_int); // 0x334 ObjFunc
	var_143_int = 17; // 0x336 PushI
	add(var_143_int); // 0x337 ObjFunc
	var_144_int = 8; // 0x339 PushI
	add(var_144_int); // 0x33a ObjFunc
	goto Label_835; // 0x33c Jump
	
Label_835:
	return 0; // 0x343 Return
	
Label_829:
	var_145_int = 1; // 0x33d PushI
	var_146_bool = var_135_int != var_145_int; // 0x33e Neq
	if(var_146_bool == 0) goto Label_835; // 0x33f JumpB
	var_147_int = 10; // 0x340 PushI
	add(var_147_int); // 0x341 ObjFunc
}


func_1316()
{
	var_21_object = Obj(); var_22_object = Obj(); // 0x524 PushV
	var_23_string = "warehouse_rubin"; // 0x525 PushS
	GetSceneByName(var_22_object, var_23_string); // 0x526 Func
	var_24_string = "rubin"; // 0x528 PushS
	Trigger(var_22_object, var_24_string); // 0x529 Func
	var_25_string = ""; var_26_bool = 0; // 0x52b PushV
	var_25_string = "warehouse_rubin@door1"; // 0x52c MovS
	var_26_bool = 0; // 0x52d MovB
	func_648(var_25_string, var_26_bool); // 0x52e NEW_2
	return 2; // 0x530 Return
}


func_677(var_135_bool, var_136_string)
{
	var_137_object = Obj(); var_138_object = Obj(); // 0x2a5 PushV
	FindActor(var_138_object, var_136_string); // 0x2a6 Func
	var_139_bool = var_138_object == 0; // 0x2a8 Not
	if(var_139_bool == 0) goto Label_684; // 0x2a9 JumpB
	var_135_bool = 0; // 0x2aa MovB
	return 2; // 0x2ab Return
	
Label_684:
	RemoveActor(var_138_object); // 0x2ac Func
	var_135_bool = 1; // 0x2ae MovB
	return 2; // 0x2af Return
}


func_689(var_37_int)
{
	var_38_float = 0; var_39_float = 0; // 0x2b1 PushV
	GetGameTime(var_39_float); // 0x2b2 Func
	var_40_int = 0; // 0x2b4 PushV
	var_40_int = var_39_float; // 0x2b5 Mov
	var_41_int = 24; // 0x2b6 PushI
	var_37_int = var_40_int % var_41_int; // 0x2b7 Mod2
	return 2; // 0x2b8 Return
}


func_1077(var_164_int)
{
	var_165_string = "game_final"; // 0x436 PushS
	SetVariable(var_165_string, var_164_int); // 0x437 Func
	return 0; // 0x439 Return
}


func_697()
{
	var_166_object = Obj(); var_167_object = Obj(); // 0x2b9 PushV
	var_168_int = 699; // 0x2ba PushI
	var_169_int = 1; // 0x2bb PushI
	var_170_int = 535682; // 0x2bc PushI
	CreateDiaryEntry(var_167_object, var_168_int, var_169_int, var_170_int); // 0x2bd Func
	var_171_bool = 0; var_172_object = Obj(); var_173_int = 0; // 0x2bf PushV
	var_172_object = var_167_object; // 0x2c0 Mov
	var_173_int = -1; // 0x2c1 MovI
	func_736(var_171_bool, var_172_object, var_173_int); // 0x2c2 NEW_2
	return 2; // 0x2c4 Return
}


func_1082(var_71_int)
{
	var_72_int = 0; var_73_int = 0; // 0x43a PushV
	var_74_string = "game_final"; // 0x43b PushS
	GetVariable(var_74_string, var_73_int); // 0x43c Func
	var_71_int = var_73_int; // 0x43e Mov
	return 2; // 0x43f Return
}


func_572()
{
	var_332_string = "d12q01"; // 0x23c PushS
	var_333_int = -1; // 0x23d PushI
	SetVariable(var_332_string, var_333_int); // 0x23e Func
	func_588(); // 0x241 NEW_2
	return 0; // 0x243 Return
}


func_959(var_92_bool)
{
	var_93_object = Obj(); var_94_int = 0; var_95_int = 0; var_96_int = 0; var_97_object = Obj(); var_98_int = 0; var_99_int = 0; var_100_int = 0; // 0x3bf PushV
	CreateIntVector(var_97_object); // 0x3c0 Func
	var_101_object = Obj(); var_102_bool = 0; var_103_int = 0; // 0x3c2 PushV
	var_101_object = var_97_object; // 0x3c3 Mov
	var_102_bool = 0; // 0x3c4 MovB
	var_103_int = -1; // 0x3c5 MovI
	func_836(var_102_bool, var_103_int); // 0x3c6 NEW_2
	size(var_98_int); // 0x3c8 ObjFunc
	var_99_int = 0; // 0x3ca MovI
	
Label_971:
	var_116_bool = var_99_int < var_98_int; // 0x3cb LT
	if(var_116_bool == 0) goto Label_994; // 0x3cc JumpB
	get(var_100_int, var_99_int); // 0x3cd ObjFunc
	var_117_bool = 0; // 0x3cf PushV
	var_117_bool = 1; // 0x3d0 MovB
	var_118_bool = 0; var_119_int = 0; // 0x3d1 PushV
	var_119_int = var_100_int; // 0x3d2 Mov
	func_911(var_118_bool, var_119_int); // 0x3d3 NEW_2
	if(var_118_bool == 0) goto Label_988; // 0x3d5 JumpB
	var_120_bool = 0; var_121_int = 0; // 0x3d6 PushV
	var_121_int = var_100_int; // 0x3d7 Mov
	func_901(var_120_bool, var_121_int); // 0x3d8 NEW_2
	if(var_120_bool == 0) goto Label_988; // 0x3da JumpB
	var_117_bool = 0; // 0x3db MovB
	
Label_988:
	if(var_117_bool == 0) goto Label_991; // 0x3dc JumpB
	var_92_bool = 0; // 0x3dd MovB
	return 8; // 0x3de Return
	
Label_991:
	var_122_int = 1; // 0x3df PushI
	var_99_int = var_99_int + var_122_int; // 0x3e0 Add2
	goto Label_971; // 0x3e1 Jump
	
Label_994:
	var_92_bool = 1; // 0x3e2 MovB
	return 8; // 0x3e3 Return
}


func_1088()
{
	var_34_int = 0; var_35_int = 0; var_36_bool = 0; var_37_bool = 0; var_38_int = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0; var_42_bool = 0; var_43_int = 0; var_44_int = 0; var_45_bool = 0; var_46_bool = 0; var_47_int = 0; var_48_int = 0; var_49_int = 0; var_50_bool = 0; var_51_bool = 0; // 0x440 PushV
	func_770(); // 0x442 NEW_2
	var_70_int = 0; // 0x444 PushV
	func_764(var_70_int); // 0x445 NEW_2
	var_43_int = var_70_int; // 0x446 Mov
	var_71_int = 0; // 0x448 PushV
	func_1082(var_71_int); // 0x449 NEW_2
	var_44_int = var_71_int; // 0x44a Mov
	var_45_bool = 0; // 0x44c MovB
	var_46_bool = 0; // 0x44d MovB
	var_75_int = 0; // 0x44e PushI
	var_76_bool = var_43_int == var_75_int; // 0x44f Eq
	if(var_76_bool == 0) goto Label_1116; // 0x450 JumpB
	var_77_string = "d12q01ChildsAreVisited"; // 0x451 PushS
	GetVariable(var_77_string, var_47_int); // 0x452 Func
	var_78_int = 0; // 0x454 PushI
	var_45_bool = var_47_int != var_78_int; // 0x455 Neq2
	var_79_string = "d12q01TheaterIsVisited"; // 0x456 PushS
	GetVariable(var_79_string, var_47_int); // 0x457 Func
	var_80_int = 0; // 0x459 PushI
	var_46_bool = var_47_int != var_80_int; // 0x45a Neq2
	goto Label_1143; // 0x45b Jump
	
Label_1143:
	var_50_bool = 0; // 0x477 MovB
	var_81_bool = 0; // 0x478 PushV
	var_81_bool = 0; // 0x479 MovB
	var_82_int = 0; // 0x47a PushI
	var_83_bool = var_43_int == var_82_int; // 0x47b Eq
	if(var_83_bool == 0) goto Label_1153; // 0x47c JumpB
	var_84_int = 2; // 0x47d PushI
	var_85_bool = var_44_int == var_84_int; // 0x47e Eq
	if(var_85_bool == 0) goto Label_1153; // 0x47f JumpB
	var_81_bool = 1; // 0x480 MovB
	
Label_1153:
	if(var_81_bool == 0) goto Label_1155; // 0x481 JumpB
	var_50_bool = 1; // 0x482 MovB
	
Label_1155:
	var_86_bool = 0; // 0x483 PushV
	var_86_bool = 0; // 0x484 MovB
	var_87_int = 1; // 0x485 PushI
	var_88_bool = var_43_int == var_87_int; // 0x486 Eq
	if(var_88_bool == 0) goto Label_1164; // 0x487 JumpB
	var_89_int = 1; // 0x488 PushI
	var_90_bool = var_44_int == var_89_int; // 0x489 Eq
	if(var_90_bool == 0) goto Label_1164; // 0x48a JumpB
	var_86_bool = 1; // 0x48b MovB
	
Label_1164:
	if(var_86_bool == 0) goto Label_1166; // 0x48c JumpB
	var_50_bool = 1; // 0x48d MovB
	
Label_1166:
	var_91_bool = 0; // 0x48e PushV
	var_91_bool = 0; // 0x48f MovB
	var_92_int = 2; // 0x490 PushI
	var_93_bool = var_43_int == var_92_int; // 0x491 Eq
	if(var_93_bool == 0) goto Label_1175; // 0x492 JumpB
	var_94_int = 3; // 0x493 PushI
	var_95_bool = var_44_int == var_94_int; // 0x494 Eq
	if(var_95_bool == 0) goto Label_1175; // 0x495 JumpB
	var_91_bool = 1; // 0x496 MovB
	
Label_1175:
	if(var_91_bool == 0) goto Label_1177; // 0x497 JumpB
	var_50_bool = 1; // 0x498 MovB
	
Label_1177:
	var_51_bool = 0; // 0x499 MovB
	var_96_bool = 0; // 0x49a PushV
	var_96_bool = 0; // 0x49b MovB
	var_97_bool = 0; // 0x49c PushV
	var_97_bool = 0; // 0x49d MovB
	var_98_int = 4; // 0x49e PushI
	var_99_bool = var_44_int == var_98_int; // 0x49f Eq
	if(var_99_bool == 0) goto Label_1188; // 0x4a0 JumpB
	var_100_bool = var_45_bool == 0; // 0x4a1 Not
	if(var_100_bool == 0) goto Label_1188; // 0x4a2 JumpB
	var_97_bool = 1; // 0x4a3 MovB
	
Label_1188:
	if(var_97_bool == 0) goto Label_1192; // 0x4a4 JumpB
	var_101_bool = var_46_bool == 0; // 0x4a5 Not
	if(var_101_bool == 0) goto Label_1192; // 0x4a6 JumpB
	var_96_bool = 1; // 0x4a7 MovB
	
Label_1192:
	if(var_96_bool == 0) goto Label_1194; // 0x4a8 JumpB
	var_51_bool = 1; // 0x4a9 MovB
	
Label_1194:
	var_102_bool = 0; // 0x4aa PushV
	var_102_bool = 0; // 0x4ab MovB
	var_103_bool = 0; // 0x4ac PushV
	var_103_bool = 0; // 0x4ad MovB
	var_104_bool = var_50_bool == 0; // 0x4ae Not
	if(var_104_bool == 0) goto Label_1203; // 0x4af JumpB
	var_105_bool = var_45_bool; // 0x4b0 Push
	if(var_105_bool == 0) goto Label_1203; // 0x4b1 JumpB
	var_103_bool = 1; // 0x4b2 MovB
	
Label_1203:
	if(var_103_bool == 0) goto Label_1207; // 0x4b3 JumpB
	var_106_bool = var_46_bool == 0; // 0x4b4 Not
	if(var_106_bool == 0) goto Label_1207; // 0x4b5 JumpB
	var_102_bool = 1; // 0x4b6 MovB
	
Label_1207:
	if(var_102_bool == 0) goto Label_1209; // 0x4b7 JumpB
	var_51_bool = 1; // 0x4b8 MovB
	
Label_1209:
	var_107_bool = 0; // 0x4b9 PushV
	var_107_bool = 0; // 0x4ba MovB
	var_108_bool = 0; // 0x4bb PushV
	var_108_bool = 0; // 0x4bc MovB
	var_109_bool = var_50_bool; // 0x4bd Push
	if(var_109_bool == 0) goto Label_1218; // 0x4be JumpB
	var_110_bool = var_45_bool; // 0x4bf Push
	if(var_110_bool == 0) goto Label_1218; // 0x4c0 JumpB
	var_108_bool = 1; // 0x4c1 MovB
	
Label_1218:
	if(var_108_bool == 0) goto Label_1222; // 0x4c2 JumpB
	var_111_bool = var_46_bool; // 0x4c3 Push
	if(var_111_bool == 0) goto Label_1222; // 0x4c4 JumpB
	var_107_bool = 1; // 0x4c5 MovB
	
Label_1222:
	if(var_107_bool == 0) goto Label_1224; // 0x4c6 JumpB
	var_51_bool = 1; // 0x4c7 MovB
	
Label_1224:
	var_112_string = "PlayFinalMovie"; // 0x4c8 PushS
	Trace(var_112_string); // 0x4c9 Func
	var_113_int = 0; // 0x4cb PushV
	func_1082(var_113_int); // 0x4cc NEW_2
	var_114_int = 1; // 0x4ce PushI
	var_115_bool = var_113_int == var_114_int; // 0x4cf Eq
	if(var_115_bool == 0) goto Label_1246; // 0x4d0 JumpB
	var_116_string = "fin_termit"; // 0x4d1 PushS
	Trace(var_116_string); // 0x4d2 Func
	var_117_bool = var_51_bool; // 0x4d4 Push
	if(var_117_bool == 0) goto Label_1242; // 0x4d5 JumpB
	var_118_string = "gameover_termit_chudo.xml"; // 0x4d6 PushS
	GameOver(var_118_string); // 0x4d7 Func
	goto Label_1245; // 0x4d9 Jump
	
Label_1245:
	goto Label_1296; // 0x4dd Jump
	
Label_1296:
	return 18; // 0x510 Return
	
Label_1242:
	var_119_string = "gameover_termit.xml"; // 0x4da PushS
	GameOver(var_119_string); // 0x4db Func
	
Label_1246:
	var_120_int = 0; // 0x4de PushV
	func_1082(var_120_int); // 0x4df NEW_2
	var_121_int = 2; // 0x4e1 PushI
	var_122_bool = var_120_int == var_121_int; // 0x4e2 Eq
	if(var_122_bool == 0) goto Label_1265; // 0x4e3 JumpB
	var_123_string = "fin_utop"; // 0x4e4 PushS
	Trace(var_123_string); // 0x4e5 Func
	var_124_bool = var_51_bool; // 0x4e7 Push
	if(var_124_bool == 0) goto Label_1261; // 0x4e8 JumpB
	var_125_string = "gameover_utopist_chudo.xml"; // 0x4e9 PushS
	GameOver(var_125_string); // 0x4ea Func
	goto Label_1264; // 0x4ec Jump
	
Label_1264:
	goto Label_1296; // 0x4f0 Jump
	
Label_1261:
	var_126_string = "gameover_utopist.xml"; // 0x4ed PushS
	GameOver(var_126_string); // 0x4ee Func
	
Label_1265:
	var_127_int = 0; // 0x4f1 PushV
	func_1082(var_127_int); // 0x4f2 NEW_2
	var_128_int = 3; // 0x4f4 PushI
	var_129_bool = var_127_int == var_128_int; // 0x4f5 Eq
	if(var_129_bool == 0) goto Label_1284; // 0x4f6 JumpB
	var_130_string = "fin_smiren"; // 0x4f7 PushS
	Trace(var_130_string); // 0x4f8 Func
	var_131_bool = var_51_bool; // 0x4fa Push
	if(var_131_bool == 0) goto Label_1280; // 0x4fb JumpB
	var_132_string = "gameover_smirennik_chudo.xml"; // 0x4fc PushS
	GameOver(var_132_string); // 0x4fd Func
	goto Label_1283; // 0x4ff Jump
	
Label_1283:
	goto Label_1296; // 0x503 Jump
	
Label_1280:
	var_133_string = "gameover_smirennik.xml"; // 0x500 PushS
	GameOver(var_133_string); // 0x501 Func
	
Label_1284:
	var_134_string = "fin_beda"; // 0x504 PushS
	Trace(var_134_string); // 0x505 Func
	var_135_bool = var_51_bool; // 0x507 Push
	if(var_135_bool == 0) goto Label_1293; // 0x508 JumpB
	var_136_string = "gameover_beda_chudo.xml"; // 0x509 PushS
	GameOver(var_136_string); // 0x50a Func
	goto Label_1296; // 0x50c Jump
	
Label_1293:
	var_137_string = "gameover_beda.xml"; // 0x50d PushS
	GameOver(var_137_string); // 0x50e Func
	
Label_1116:
	var_138_int = 1; // 0x45c PushI
	var_139_bool = var_43_int == var_138_int; // 0x45d Eq
	if(var_139_bool == 0) goto Label_1130; // 0x45e JumpB
	var_140_string = "b12q01ChildsAreVisited"; // 0x45f PushS
	GetVariable(var_140_string, var_48_int); // 0x460 Func
	var_141_int = 0; // 0x462 PushI
	var_45_bool = var_48_int != var_141_int; // 0x463 Neq2
	var_142_string = "b12q01TheaterIsVisited"; // 0x464 PushS
	GetVariable(var_142_string, var_48_int); // 0x465 Func
	var_143_int = 0; // 0x467 PushI
	var_46_bool = var_48_int != var_143_int; // 0x468 Neq2
	goto Label_1143; // 0x469 Jump
	
Label_1130:
	var_144_int = 2; // 0x46a PushI
	var_145_bool = var_43_int == var_144_int; // 0x46b Eq
	if(var_145_bool == 0) goto Label_1143; // 0x46c JumpB
	var_146_string = "k12q01ChildsAreVisited"; // 0x46d PushS
	GetVariable(var_146_string, var_49_int); // 0x46e Func
	var_147_int = 0; // 0x470 PushI
	var_45_bool = var_49_int != var_147_int; // 0x471 Neq2
	var_148_string = "k12q01TheaterIsVisited"; // 0x472 PushS
	GetVariable(var_148_string, var_49_int); // 0x473 Func
	var_149_int = 0; // 0x475 PushI
	var_46_bool = var_49_int != var_149_int; // 0x476 Neq2
}


func_580()
{
	var_341_string = "d12q01"; // 0x244 PushS
	var_342_int = 1000; // 0x245 PushI
	SetVariable(var_341_string, var_342_int); // 0x246 Func
	func_588(); // 0x249 NEW_2
	return 0; // 0x24b Return
}


func_836(var_102_bool, var_103_int)
{
	var_104_int = 6; // 0x345 PushI
	add(var_104_int); // 0x346 ObjFunc
	var_105_int = 26; // 0x348 PushI
	add(var_105_int); // 0x349 ObjFunc
	var_106_int = 2; // 0x34b PushI
	add(var_106_int); // 0x34c ObjFunc
	var_107_int = 22; // 0x34e PushI
	add(var_107_int); // 0x34f ObjFunc
	var_108_bool = 0; // 0x351 PushB
	var_109_bool = var_102_bool == var_108_bool; // 0x352 Eq
	if(var_109_bool == 0) goto Label_862; // 0x353 JumpB
	var_110_int = 15; // 0x354 PushI
	add(var_110_int); // 0x355 ObjFunc
	var_111_int = 5; // 0x357 PushI
	add(var_111_int); // 0x358 ObjFunc
	var_112_int = 16; // 0x35a PushI
	add(var_112_int); // 0x35b ObjFunc
	goto Label_868; // 0x35d Jump
	
Label_868:
	return 0; // 0x364 Return
	
Label_862:
	var_113_int = 0; // 0x35e PushI
	var_114_bool = var_103_int != var_113_int; // 0x35f Neq
	if(var_114_bool == 0) goto Label_868; // 0x360 JumpB
	var_115_int = 15; // 0x361 PushI
	add(var_115_int); // 0x362 ObjFunc
}


func_710()
{
	var_189_object = Obj(); var_190_object = Obj(); // 0x2c6 PushV
	var_191_int = 705; // 0x2c7 PushI
	var_192_int = 1; // 0x2c8 PushI
	var_193_int = 535688; // 0x2c9 PushI
	CreateDiaryEntry(var_190_object, var_191_int, var_192_int, var_193_int); // 0x2ca Func
	var_194_bool = 0; var_195_object = Obj(); var_196_int = 0; // 0x2cc PushV
	var_195_object = var_190_object; // 0x2cd Mov
	var_196_int = 699; // 0x2ce MovI
	func_736(var_194_bool, var_195_object, var_196_int); // 0x2cf NEW_2
	return 2; // 0x2d1 Return
}


func_588()
{
	EventDisable(26); // 0x24c EventDisable
	var_334_object = Obj(); // 0x24d PushV
	func_595(var_334_object); // 0x24e NEW_2
	RemoveActor(var_334_object); // 0x250 Func
	return 0; // 0x252 Return
}


func_595(var_334_object)
{
	var_335_object = Obj(); var_336_object = Obj(); // 0x253 PushV
	self(var_336_object); // 0x254 Func
	var_334_object = var_336_object; // 0x256 Mov
	return 2; // 0x257 Return
}


func_723(var_180_object)
{
	var_181_object = Obj(); var_182_object = Obj(); // 0x2d3 PushV
	GetDiaryRoot(var_182_object); // 0x2d4 Func
	var_183_bool = var_182_object == 0; // 0x2d6 Not
	if(var_183_bool == 0) goto Label_733; // 0x2d7 JumpB
	var_184_string = "Can't retrieve diary root"; // 0x2d8 PushS
	Trace(var_184_string); // 0x2d9 Func
	var_180_object = 0; // 0x2db MovB
	return 2; // 0x2dc Return
	
Label_733:
	var_180_object = var_182_object; // 0x2dd Mov
	return 2; // 0x2de Return
}


func_601(var_51_object, var_52_string)
{
	var_53_object = Obj(); var_54_object = Obj(); var_55_object = Obj(); var_56_object = Obj(); // 0x259 PushV
	GetMainOutdoorScene(var_55_object); // 0x25a Func
	var_57_string = ".bin"; // 0x25c PushS
	var_58_int = var_52_string + var_57_string; // 0x25d Add
	AddBlankActor(var_56_object, var_55_object, var_52_string, var_58_int); // 0x25e Func
	var_51_object = var_56_object; // 0x260 Mov
	return 4; // 0x261 Return
}


func_736(var_171_bool, var_172_object, var_173_int)
{
	var_174_object = Obj(); var_175_object = Obj(); var_176_int = 0; var_177_object = Obj(); var_178_object = Obj(); var_179_int = 0; // 0x2e0 PushV
	var_180_object = Obj(); // 0x2e1 PushV
	func_723(var_180_object); // 0x2e2 NEW_2
	var_177_object = var_180_object; // 0x2e3 Mov
	Find(var_173_int, var_178_object); // 0x2e5 ObjFunc
	var_185_bool = var_178_object == 0; // 0x2e7 Not
	if(var_185_bool == 0) goto Label_751; // 0x2e8 JumpB
	var_186_string = "Can't find diary parent with id: "; // 0x2e9 PushS
	var_187_int = var_186_string + var_173_int; // 0x2ea Add
	Trace(var_187_int); // 0x2eb Func
	var_171_bool = 0; // 0x2ed MovB
	return 6; // 0x2ee Return
	
Label_751:
	AddChild(var_172_object); // 0x2ef ObjFunc
	var_188_int = 7; // 0x2f1 PushI
	SendWorldWndMessage(var_188_int); // 0x2f2 Func
	GetCategory(var_179_int); // 0x2f4 ObjFunc
	SetDiarySection(var_179_int); // 0x2f6 Func
	var_171_bool = 0; // 0x2f8 MovB
	return 6; // 0x2f9 Return
}


func_612(var_216_object, var_217_object, var_218_string, var_219_string, var_220_string)
{
	var_221_bool = 0; var_222_cvector = CVector(0,0,0); var_223_cvector = CVector(0,0,0); var_224_object = Obj(); var_225_bool = 0; var_226_cvector = CVector(0,0,0); var_227_cvector = CVector(0,0,0); var_228_object = Obj(); // 0x264 PushV
	GetLocator(var_218_string, var_225_bool, var_226_cvector, var_227_cvector); // 0x265 ObjFunc
	var_229_bool = var_225_bool == 0; // 0x267 Not
	if(var_229_bool == 0) goto Label_625; // 0x268 JumpB
	var_230_string = "Locator "; // 0x269 PushS
	var_231_int = var_230_string + var_218_string; // 0x26a Add
	var_232_string = " doesn't exist"; // 0x26b PushS
	var_233_int = var_231_int + var_232_string; // 0x26c Add
	Trace(var_233_int); // 0x26d Func
	var_228_object = 0; // 0x26f SetNull
	goto Label_627; // 0x270 Jump
	
Label_627:
	var_216_object = var_228_object; // 0x273 Mov
	return 8; // 0x274 Return
	
Label_625:
	AddActor(var_228_object, var_219_string, var_217_object, var_226_cvector, var_227_cvector, var_220_string); // 0x271 Func
}


func_869(var_57_bool)
{
	var_59_int = 7; // 0x366 PushI
	add(var_59_int); // 0x367 ObjFunc
	var_60_int = 23; // 0x369 PushI
	add(var_60_int); // 0x36a ObjFunc
	var_61_int = 21; // 0x36c PushI
	add(var_61_int); // 0x36d ObjFunc
	var_62_int = 9; // 0x36f PushI
	add(var_62_int); // 0x370 ObjFunc
	var_63_int = 3; // 0x372 PushI
	add(var_63_int); // 0x373 ObjFunc
	var_64_int = 1; // 0x375 PushI
	add(var_64_int); // 0x376 ObjFunc
	var_65_int = 11; // 0x378 PushI
	add(var_65_int); // 0x379 ObjFunc
	var_66_int = 13; // 0x37b PushI
	add(var_66_int); // 0x37c ObjFunc
	var_67_bool = 0; // 0x37e PushB
	var_68_bool = var_57_bool == var_67_bool; // 0x37f Eq
	if(var_68_bool == 0) goto Label_900; // 0x380 JumpB
	var_69_int = 25; // 0x381 PushI
	add(var_69_int); // 0x382 ObjFunc
	
Label_900:
	return 0; // 0x384 Return
}


func_997(var_47_bool)
{
	var_48_object = Obj(); var_49_int = 0; var_50_int = 0; var_51_int = 0; var_52_object = Obj(); var_53_int = 0; var_54_int = 0; var_55_int = 0; // 0x3e5 PushV
	CreateIntVector(var_52_object); // 0x3e6 Func
	var_56_object = Obj(); var_57_bool = 0; var_58_int = 0; // 0x3e8 PushV
	var_56_object = var_52_object; // 0x3e9 Mov
	var_57_bool = 0; // 0x3ea MovB
	var_58_int = -1; // 0x3eb MovI
	func_869(var_58_int); // 0x3ec NEW_2
	size(var_53_int); // 0x3ee ObjFunc
	var_54_int = 0; // 0x3f0 MovI
	
Label_1009:
	var_70_bool = var_54_int < var_53_int; // 0x3f1 LT
	if(var_70_bool == 0) goto Label_1032; // 0x3f2 JumpB
	get(var_55_int, var_54_int); // 0x3f3 ObjFunc
	var_71_bool = 0; // 0x3f5 PushV
	var_71_bool = 1; // 0x3f6 MovB
	var_72_bool = 0; var_73_int = 0; // 0x3f7 PushV
	var_73_int = var_55_int; // 0x3f8 Mov
	func_911(var_72_bool, var_73_int); // 0x3f9 NEW_2
	if(var_72_bool == 0) goto Label_1026; // 0x3fb JumpB
	var_81_bool = 0; var_82_int = 0; // 0x3fc PushV
	var_82_int = var_55_int; // 0x3fd Mov
	func_901(var_81_bool, var_82_int); // 0x3fe NEW_2
	if(var_81_bool == 0) goto Label_1026; // 0x400 JumpB
	var_71_bool = 0; // 0x401 MovB
	
Label_1026:
	if(var_71_bool == 0) goto Label_1029; // 0x402 JumpB
	var_47_bool = 0; // 0x403 MovB
	return 8; // 0x404 Return
	
Label_1029:
	var_90_int = 1; // 0x405 PushI
	var_54_int = var_54_int + var_90_int; // 0x406 Add2
	goto Label_1009; // 0x407 Jump
	
Label_1032:
	var_47_bool = 1; // 0x408 MovB
	return 8; // 0x409 Return
}


func_630(var_197_object, var_199_string, var_200_string, var_201_string)
{
	var_202_bool = 0; var_203_cvector = CVector(0,0,0); var_204_cvector = CVector(0,0,0); var_205_object = Obj(); var_206_bool = 0; var_207_cvector = CVector(0,0,0); var_208_cvector = CVector(0,0,0); var_209_object = Obj(); // 0x276 PushV
	GetLocator(var_199_string, var_206_bool, var_207_cvector, var_208_cvector); // 0x277 ObjFunc
	var_210_bool = var_206_bool == 0; // 0x279 Not
	if(var_210_bool == 0) goto Label_643; // 0x27a JumpB
	var_211_string = "Locator "; // 0x27b PushS
	var_212_int = var_211_string + var_199_string; // 0x27c Add
	var_213_string = " doesn't exist"; // 0x27d PushS
	var_214_int = var_212_int + var_213_string; // 0x27e Add
	Trace(var_214_int); // 0x27f Func
	var_209_object = 0; // 0x281 SetNull
	goto Label_645; // 0x282 Jump
	
Label_645:
	var_197_object = var_209_object; // 0x285 Mov
	return 8; // 0x286 Return
	
Label_643:
	AddStationaryActor(var_209_object, var_207_cvector, var_208_cvector, var_200_string, var_201_string); // 0x283 ObjFunc
}


func_764(var_52_int)
{
	var_53_int = 0; var_54_int = 0; // 0x2fc PushV
	var_55_string = "branch"; // 0x2fd PushS
	GetVariable(var_55_string, var_54_int); // 0x2fe Func
	var_52_int = var_54_int; // 0x300 Mov
	return 2; // 0x301 Return
}


