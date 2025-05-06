task_0_event_9(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_int, var_16_float)
{
	var_17_float = 0; var_18_float = 0; // 0x87 PushV
	EventDisable(26); // 0x88 EventDisable
	EventDisable(9); // 0x89 EventDisable
	var_19_int = 0; // 0x8a PushI
	var_20_bool = var_15_int == var_19_int; // 0x8b Eq
	if(var_20_bool == 0) goto Label_173; // 0x8c JumpB
	var_21_string = "final 0"; // 0x8d PushS
	Trace(var_21_string); // 0x8e Func
	var_22_bool = 0; // 0x90 PushV
	var_22_bool = 1; // 0x91 MovB
	var_23_bool = var_3_bool; // 0x92 PushT
	if(var_23_bool == 0) goto Label_154; // 0x93 JumpB
	var_24_bool = 0; // 0x94 PushV
	func_1297(var_24_bool); // 0x95 NEW_2
	var_27_bool = var_24_bool == 0; // 0x97 Not
	if(var_27_bool == 0) goto Label_154; // 0x98 JumpB
	var_22_bool = 0; // 0x99 MovB
	
Label_154:
	if(var_22_bool == 0) goto Label_169; // 0x9a JumpB
	var_28_string = "final 1 locked: "; // 0x9b PushS
	var_29_int = var_28_string + var_3_bool; // 0x9c Add
	Trace(var_29_int); // 0x9d Func
	GetGameTime(var_18_float); // 0x9f Func
	var_30_float = 0.00833; // 0xa1 PushF
	var_18_float = var_18_float + var_30_float; // 0xa2 Add2
	var_31_int = 0; // 0xa3 PushI
	SetTimeEvent(var_31_int, var_18_float); // 0xa4 Func
	EventEnable(26); // 0xa6 EventEnable
	EventEnable(9); // 0xa7 EventEnable
	return 2; // 0xa8 Return
	
Label_169:
	func_1059(); // 0xaa NEW_2
	goto Label_197; // 0xac Jump
	
Label_197:
	return 2; // 0xc5 Return
	
Label_173:
	var_154_int = 1; // 0xad PushI
	var_155_bool = var_15_int == var_154_int; // 0xae Eq
	if(var_155_bool == 0) goto Label_189; // 0xaf JumpB
	var_156_bool = 0; // 0xb0 PushV
	func_1006(var_156_bool); // 0xb1 NEW_2
	if(var_156_bool == 0) goto Label_186; // 0xb3 JumpB
	var_269_bool = 0; var_270_string = ""; var_271_string = ""; var_272_string = ""; // 0xb4 PushV
	var_270_string = "volonteers_burah"; // 0xb5 MovS
	var_271_string = "childs_letter"; // 0xb6 MovS
	var_272_string = ""; // 0xb7 MovS
	func_636(var_269_bool, var_270_string, var_271_string, var_272_string); // 0xb8 NEW_2
	
Label_186:
	EventEnable(26); // 0xba EventEnable
	EventEnable(9); // 0xbb EventEnable
	goto Label_197; // 0xbc Jump
	
Label_189:
	var_276_int = 2; // 0xbd PushI
	var_277_bool = var_15_int == var_276_int; // 0xbe Eq
	if(var_277_bool == 0) goto Label_197; // 0xbf JumpB
	func_0(var_18_float); // 0xc1 NEW_2
	EventEnable(26); // 0xc3 EventEnable
	EventEnable(9); // 0xc4 EventEnable
}


task_0_event_26(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string)
{
	var_16_object = Obj(); var_17_object = Obj(); var_18_object = Obj(); var_19_object = Obj(); var_20_int = 0; var_21_object = Obj(); var_22_object = Obj(); var_23_object = Obj(); var_24_object = Obj(); var_25_int = 0; // 0xc6 PushV
	Trace(var_15_string); // 0xc7 Func
	var_26_string = "init_sobor"; // 0xc9 PushS
	var_27_bool = var_15_string == var_26_string; // 0xca Eq
	if(var_27_bool == 0) goto Label_228; // 0xcb JumpB
	var_28_string = "sobor"; // 0xcc PushS
	GetSceneByName(var_21_object, var_28_string); // 0xcd Func
	var_29_string = "noaglaja"; // 0xcf PushS
	Trigger(var_21_object, var_29_string); // 0xd0 Func
	var_30_object = var_9_object; // 0xd2 PushT
	if(var_30_object == 0) goto Label_215; // 0xd3 JumpB
	var_31_string = "cleanup"; // 0xd4 PushS
	Trigger(var_18_object, var_31_string); // 0xd5 Func
	
Label_215:
	var_32_string = ""; var_33_bool = 0; // 0xd7 PushV
	var_32_string = "isobor@door1"; // 0xd8 MovS
	var_33_bool = 1; // 0xd9 MovB
	func_619(var_32_string, var_33_bool); // 0xda NEW_2
	var_42_string = ""; var_43_bool = 0; // 0xdc PushV
	var_42_string = "sobor@door1"; // 0xdd MovS
	var_43_bool = 0; // 0xde MovB
	func_619(var_42_string, var_43_bool); // 0xdf NEW_2
	var_1_bool = 1; // 0xe1 TMovB
	var_21_object = 0; // 0xe2 SetNull
	goto Label_542; // 0xe3 Jump
	
Label_542:
	return 10; // 0x21e Return
	
Label_228:
	var_44_string = "sobor_load"; // 0xe4 PushS
	var_45_bool = var_15_string == var_44_string; // 0xe5 Eq
	if(var_45_bool == 0) goto Label_239; // 0xe6 JumpB
	var_46_bool = var_1_bool; // 0xe7 PushT
	if(var_46_bool == 0) goto Label_238; // 0xe8 JumpB
	var_3_bool = 1; // 0xe9 TMovB
	var_47_object = Obj(); var_48_string = ""; // 0xea PushV
	var_48_string = "quest_b12_01_sobor_cutscene"; // 0xeb MovS
	func_572(var_47_object, var_48_string); // 0xec NEW_2
	
Label_238:
	goto Label_542; // 0xee Jump
	
Label_239:
	var_55_string = "sobor_cutscene_end"; // 0xef PushS
	var_56_bool = var_15_string == var_55_string; // 0xf0 Eq
	if(var_56_bool == 0) goto Label_295; // 0xf1 JumpB
	var_57_string = "sobor"; // 0xf2 PushS
	GetSceneByName(var_22_object, var_57_string); // 0xf3 Func
	var_58_object = Obj(); var_59_object = Obj(); var_60_string = ""; var_61_string = ""; var_62_string = ""; // 0xf5 PushV
	var_59_object = var_22_object; // 0xf6 Mov
	var_60_string = "pt_b12q01_block"; // 0xf7 MovS
	var_61_string = "NPC_Block"; // 0xf8 MovS
	var_62_string = "b12q01_Block.xml"; // 0xf9 MovS
	func_583(var_58_object, var_59_object, var_60_string, var_61_string, var_62_string); // 0xfa NEW_2
	var_5_object = var_58_object; // 0xfb TMov
	var_76_object = Obj(); var_77_object = Obj(); var_78_string = ""; var_79_string = ""; var_80_string = ""; // 0xfd PushV
	var_77_object = var_22_object; // 0xfe Mov
	var_78_string = "pt_b12q01_aglaja"; // 0xff MovS
	var_79_string = "NPC_Aglaja"; // 0x100 MovS
	var_80_string = "b12q01_Aglaja.xml"; // 0x101 MovS
	func_583(var_76_object, var_77_object, var_78_string, var_79_string, var_80_string); // 0x102 NEW_2
	var_6_object = var_76_object; // 0x103 TMov
	var_81_object = Obj(); var_82_object = Obj(); var_83_string = ""; var_84_string = ""; var_85_string = ""; // 0x105 PushV
	var_82_object = var_22_object; // 0x106 Mov
	var_83_string = "pt_b12q01_kapella"; // 0x107 MovS
	var_84_string = "NPC_Kapella"; // 0x108 MovS
	var_85_string = "b12q01_Kapella.xml"; // 0x109 MovS
	func_583(var_81_object, var_82_object, var_83_string, var_84_string, var_85_string); // 0x10a NEW_2
	var_7_object = var_81_object; // 0x10b TMov
	var_86_bool = 0; // 0x10d PushV
	func_1283(var_86_bool); // 0x10e NEW_2
	if(var_86_bool == 0) goto Label_281; // 0x110 JumpB
	var_91_object = Obj(); var_92_object = Obj(); var_93_string = ""; var_94_string = ""; var_95_string = ""; // 0x111 PushV
	var_92_object = var_22_object; // 0x112 Mov
	var_93_string = "pt_b12q01_klara"; // 0x113 MovS
	var_94_string = "NPC_Klara"; // 0x114 MovS
	var_95_string = "b12q01_Klara.xml"; // 0x115 MovS
	func_583(var_91_object, var_92_object, var_93_string, var_94_string, var_95_string); // 0x116 NEW_2
	var_8_object = var_91_object; // 0x117 TMov
	
Label_281:
	var_96_bool = 0; // 0x119 PushV
	func_1290(var_96_bool); // 0x11a NEW_2
	if(var_96_bool == 0) goto Label_293; // 0x11c JumpB
	var_101_object = Obj(); var_102_object = Obj(); var_103_string = ""; var_104_string = ""; var_105_string = ""; // 0x11d PushV
	var_102_object = var_22_object; // 0x11e Mov
	var_103_string = "pt_b12q01_danko"; // 0x11f MovS
	var_104_string = "NPC_Bakalavr"; // 0x120 MovS
	var_105_string = "b12q01_Danko.xml"; // 0x121 MovS
	func_583(var_101_object, var_102_object, var_103_string, var_104_string, var_105_string); // 0x122 NEW_2
	var_10_object = var_101_object; // 0x123 TMov
	
Label_293:
	var_22_object = 0; // 0x125 SetNull
	goto Label_542; // 0x126 Jump
	
Label_295:
	var_106_string = "sobor_unload"; // 0x127 PushS
	var_107_bool = var_15_string == var_106_string; // 0x128 Eq
	if(var_107_bool == 0) goto Label_336; // 0x129 JumpB
	var_108_bool = var_1_bool; // 0x12a PushT
	if(var_108_bool == 0) goto Label_335; // 0x12b JumpB
	var_109_object = var_4_object; // 0x12c PushT
	if(var_109_object == 0) goto Label_304; // 0x12d JumpB
	Remove(); // 0x12e TObjFunc
	
Label_304:
	var_110_object = var_5_object; // 0x130 PushT
	if(var_110_object == 0) goto Label_309; // 0x131 JumpB
	var_111_string = "cleanup"; // 0x132 PushS
	Trigger(var_22_object, var_111_string); // 0x133 Func
	
Label_309:
	var_112_object = var_6_object; // 0x135 PushT
	if(var_112_object == 0) goto Label_314; // 0x136 JumpB
	var_113_string = "cleanup"; // 0x137 PushS
	Trigger(var_21_object, var_113_string); // 0x138 Func
	
Label_314:
	var_114_object = var_7_object; // 0x13a PushT
	if(var_114_object == 0) goto Label_319; // 0x13b JumpB
	var_115_string = "cleanup"; // 0x13c PushS
	Trigger(var_20_int, var_115_string); // 0x13d Func
	
Label_319:
	var_116_object = var_8_object; // 0x13f PushT
	if(var_116_object == 0) goto Label_324; // 0x140 JumpB
	var_117_string = "cleanup"; // 0x141 PushS
	Trigger(var_19_object, var_117_string); // 0x142 Func
	
Label_324:
	var_118_object = var_10_object; // 0x144 PushT
	if(var_118_object == 0) goto Label_329; // 0x145 JumpB
	var_119_string = "cleanup"; // 0x146 PushS
	Trigger(var_17_object, var_119_string); // 0x147 Func
	
Label_329:
	var_120_string = ""; var_121_bool = 0; // 0x149 PushV
	var_120_string = "sobor@door1"; // 0x14a MovS
	var_121_bool = 1; // 0x14b MovB
	func_619(var_120_string, var_121_bool); // 0x14c NEW_2
	var_3_bool = 0; // 0x14e TMovB
	
Label_335:
	goto Label_542; // 0x14f Jump
	
Label_336:
	var_122_string = "init_theater"; // 0x150 PushS
	var_123_bool = var_15_string == var_122_string; // 0x151 Eq
	if(var_123_bool == 0) goto Label_355; // 0x152 JumpB
	var_124_bool = 0; var_125_string = ""; // 0x153 PushV
	var_125_string = "NPC_Mark"; // 0x154 MovS
	func_648(var_124_bool, var_125_string); // 0x155 NEW_2
	var_129_string = ""; var_130_bool = 0; // 0x157 PushV
	var_129_string = "itheater@door1"; // 0x158 MovS
	var_130_bool = 1; // 0x159 MovB
	func_619(var_129_string, var_130_bool); // 0x15a NEW_2
	var_131_string = ""; var_132_bool = 0; // 0x15c PushV
	var_131_string = "theater@door1"; // 0x15d MovS
	var_132_bool = 0; // 0x15e MovB
	func_619(var_131_string, var_132_bool); // 0x15f NEW_2
	var_0_bool = 1; // 0x161 TMovB
	goto Label_542; // 0x162 Jump
	
Label_355:
	var_133_string = "theater_load"; // 0x163 PushS
	var_134_bool = var_15_string == var_133_string; // 0x164 Eq
	if(var_134_bool == 0) goto Label_370; // 0x165 JumpB
	var_135_bool = var_0_bool; // 0x166 PushT
	if(var_135_bool == 0) goto Label_369; // 0x167 JumpB
	var_3_bool = 1; // 0x168 TMovB
	var_136_object = Obj(); var_137_string = ""; // 0x169 PushV
	var_137_string = "quest_b12_01_theater_cutscene"; // 0x16a MovS
	func_572(var_136_object, var_137_string); // 0x16b NEW_2
	var_138_string = "b12q01TheaterIsVisited"; // 0x16d PushS
	var_139_int = 1; // 0x16e PushI
	SetVariable(var_138_string, var_139_int); // 0x16f Func
	
Label_369:
	goto Label_542; // 0x171 Jump
	
Label_370:
	var_140_string = "theater_cutscene_end"; // 0x172 PushS
	var_141_bool = var_15_string == var_140_string; // 0x173 Eq
	if(var_141_bool == 0) goto Label_394; // 0x174 JumpB
	var_142_string = "theater"; // 0x175 PushS
	GetSceneByName(var_23_object, var_142_string); // 0x176 Func
	var_143_object = Obj(); var_144_object = Obj(); var_145_string = ""; var_146_string = ""; var_147_string = ""; // 0x178 PushV
	var_144_object = var_23_object; // 0x179 Mov
	var_145_string = "pt_b12q01_birdmask"; // 0x17a MovS
	var_146_string = "pers_birdmask"; // 0x17b MovS
	var_147_string = "b12q01_tbirdmask.xml"; // 0x17c MovS
	func_583(var_143_object, var_144_object, var_145_string, var_146_string, var_147_string); // 0x17d NEW_2
	var_11_object = var_143_object; // 0x17e TMov
	var_148_object = Obj(); var_149_object = Obj(); var_150_string = ""; var_151_string = ""; var_152_string = ""; // 0x180 PushV
	var_149_object = var_23_object; // 0x181 Mov
	var_150_string = "pt_b12q01_whitemask"; // 0x182 MovS
	var_151_string = "pers_whitemask"; // 0x183 MovS
	var_152_string = "b12q01_twhitemask.xml"; // 0x184 MovS
	func_583(var_148_object, var_149_object, var_150_string, var_151_string, var_152_string); // 0x185 NEW_2
	var_12_object = var_148_object; // 0x186 TMov
	var_23_object = 0; // 0x188 SetNull
	goto Label_542; // 0x189 Jump
	
Label_394:
	var_153_string = "theater_unload"; // 0x18a PushS
	var_154_bool = var_15_string == var_153_string; // 0x18b Eq
	if(var_154_bool == 0) goto Label_416; // 0x18c JumpB
	var_155_bool = var_0_bool; // 0x18d PushT
	if(var_155_bool == 0) goto Label_415; // 0x18e JumpB
	var_156_object = var_11_object; // 0x18f PushT
	if(var_156_object == 0) goto Label_404; // 0x190 JumpB
	var_157_string = "cleanup"; // 0x191 PushS
	Trigger(var_16_object, var_157_string); // 0x192 Func
	
Label_404:
	var_158_object = var_12_object; // 0x194 PushT
	if(var_158_object == 0) goto Label_409; // 0x195 JumpB
	var_159_string = "cleanup"; // 0x196 PushS
	Trigger(var_15_string, var_159_string); // 0x197 Func
	
Label_409:
	var_160_string = ""; var_161_bool = 0; // 0x199 PushV
	var_160_string = "theater@door1"; // 0x19a MovS
	var_161_bool = 1; // 0x19b MovB
	func_619(var_160_string, var_161_bool); // 0x19c NEW_2
	var_3_bool = 0; // 0x19e TMovB
	
Label_415:
	goto Label_542; // 0x19f Jump
	
Label_416:
	var_162_string = "init_hidden_room"; // 0x1a0 PushS
	var_163_bool = var_15_string == var_162_string; // 0x1a1 Eq
	if(var_163_bool == 0) goto Label_446; // 0x1a2 JumpB
	var_164_string = ""; var_165_bool = 0; // 0x1a3 PushV
	var_164_string = "mnogogrannik_han@door1"; // 0x1a4 MovS
	var_165_bool = 0; // 0x1a5 MovB
	func_619(var_164_string, var_165_bool); // 0x1a6 NEW_2
	var_166_string = ""; var_167_bool = 0; // 0x1a8 PushV
	var_166_string = "mnogogrannik_han@door2"; // 0x1a9 MovS
	var_167_bool = 0; // 0x1aa MovB
	func_619(var_166_string, var_167_bool); // 0x1ab NEW_2
	var_168_string = ""; var_169_bool = 0; // 0x1ad PushV
	var_168_string = "hidden_room@door1"; // 0x1ae MovS
	var_169_bool = 0; // 0x1af MovB
	func_619(var_168_string, var_169_bool); // 0x1b0 NEW_2
	var_170_string = ""; var_171_bool = 0; // 0x1b2 PushV
	var_170_string = "imnogogrannik_han@door1"; // 0x1b3 MovS
	var_171_bool = 0; // 0x1b4 MovB
	func_619(var_170_string, var_171_bool); // 0x1b5 NEW_2
	var_172_string = ""; var_173_bool = 0; // 0x1b7 PushV
	var_172_string = "mnogogrannik@door1"; // 0x1b8 MovS
	var_173_bool = 0; // 0x1b9 MovB
	func_619(var_172_string, var_173_bool); // 0x1ba NEW_2
	var_2_bool = 1; // 0x1bc TMovB
	goto Label_542; // 0x1bd Jump
	
Label_446:
	var_174_string = "hidden_room_load"; // 0x1be PushS
	var_175_bool = var_15_string == var_174_string; // 0x1bf Eq
	if(var_175_bool == 0) goto Label_461; // 0x1c0 JumpB
	var_176_bool = var_2_bool; // 0x1c1 PushT
	if(var_176_bool == 0) goto Label_460; // 0x1c2 JumpB
	var_3_bool = 1; // 0x1c3 TMovB
	var_177_string = "b12q01ChildsAreVisited"; // 0x1c4 PushS
	var_178_int = 1; // 0x1c5 PushI
	SetVariable(var_177_string, var_178_int); // 0x1c6 Func
	var_179_object = Obj(); var_180_string = ""; // 0x1c8 PushV
	var_180_string = "quest_b12_01_hidden_room_cutscene"; // 0x1c9 MovS
	func_572(var_179_object, var_180_string); // 0x1ca NEW_2
	
Label_460:
	goto Label_542; // 0x1cc Jump
	
Label_461:
	var_181_string = "hidden_room_cutscene_end"; // 0x1cd PushS
	var_182_bool = var_15_string == var_181_string; // 0x1ce Eq
	if(var_182_bool == 0) goto Label_485; // 0x1cf JumpB
	var_183_string = "hidden_room"; // 0x1d0 PushS
	GetSceneByName(var_24_object, var_183_string); // 0x1d1 Func
	var_184_object = Obj(); var_185_object = Obj(); var_186_string = ""; var_187_string = ""; var_188_string = ""; // 0x1d3 PushV
	var_185_object = var_24_object; // 0x1d4 Mov
	var_186_string = "pt_girl"; // 0x1d5 MovS
	var_187_string = "pers_littlegirl2"; // 0x1d6 MovS
	var_188_string = "b12q01_littlegirl.xml"; // 0x1d7 MovS
	func_583(var_184_object, var_185_object, var_186_string, var_187_string, var_188_string); // 0x1d8 NEW_2
	var_13_object = var_184_object; // 0x1d9 TMov
	var_189_object = Obj(); var_190_object = Obj(); var_191_string = ""; var_192_string = ""; var_193_string = ""; // 0x1db PushV
	var_190_object = var_24_object; // 0x1dc Mov
	var_191_string = "pt_boy"; // 0x1dd MovS
	var_192_string = "pers_littleboy2"; // 0x1de MovS
	var_193_string = "b12q01_littleboy.xml"; // 0x1df MovS
	func_583(var_189_object, var_190_object, var_191_string, var_192_string, var_193_string); // 0x1e0 NEW_2
	var_14_object = var_189_object; // 0x1e1 TMov
	var_24_object = 0; // 0x1e3 SetNull
	goto Label_542; // 0x1e4 Jump
	
Label_485:
	var_194_string = "hidden_room_unload"; // 0x1e5 PushS
	var_195_bool = var_15_string == var_194_string; // 0x1e6 Eq
	if(var_195_bool == 0) goto Label_512; // 0x1e7 JumpB
	var_196_bool = var_2_bool; // 0x1e8 PushT
	if(var_196_bool == 0) goto Label_511; // 0x1e9 JumpB
	var_197_string = ""; var_198_bool = 0; // 0x1ea PushV
	var_197_string = "hidden_room@door1"; // 0x1eb MovS
	var_198_bool = 1; // 0x1ec MovB
	func_619(var_197_string, var_198_bool); // 0x1ed NEW_2
	var_199_string = ""; var_200_bool = 0; // 0x1ef PushV
	var_199_string = "mnogogrannik@door1"; // 0x1f0 MovS
	var_200_bool = 1; // 0x1f1 MovB
	func_619(var_199_string, var_200_bool); // 0x1f2 NEW_2
	var_3_bool = 0; // 0x1f4 TMovB
	var_201_bool = 0; // 0x1f5 PushV
	func_1029(var_201_bool); // 0x1f6 NEW_2
	if(var_201_bool == 0) goto Label_511; // 0x1f8 JumpB
	var_309_bool = 0; var_310_string = ""; var_311_string = ""; var_312_string = ""; // 0x1f9 PushV
	var_310_string = "volonteers_burah"; // 0x1fa MovS
	var_311_string = "theater_letter"; // 0x1fb MovS
	var_312_string = ""; // 0x1fc MovS
	func_636(var_309_bool, var_310_string, var_311_string, var_312_string); // 0x1fd NEW_2
	
Label_511:
	goto Label_542; // 0x1ff Jump
	
Label_512:
	var_316_string = "cleanup"; // 0x200 PushS
	var_317_bool = var_15_string == var_316_string; // 0x201 Eq
	if(var_317_bool == 0) goto Label_529; // 0x202 JumpB
	var_318_string = "b12q01"; // 0x203 PushS
	GetVariable(var_318_string, var_25_int); // 0x204 Func
	var_319_int = 1000; // 0x206 PushI
	var_320_bool = var_25_int != var_319_int; // 0x207 Neq
	if(var_320_bool == 0) goto Label_525; // 0x208 JumpB
	func_543(); // 0x20a NEW_2
	goto Label_528; // 0x20c Jump
	
Label_528:
	goto Label_542; // 0x210 Jump
	
Label_525:
	func_559(); // 0x20e NEW_2
	
Label_529:
	var_326_string = "fail"; // 0x211 PushS
	var_327_bool = var_15_string == var_326_string; // 0x212 Eq
	if(var_327_bool == 0) goto Label_536; // 0x213 JumpB
	func_543(); // 0x215 NEW_2
	goto Label_542; // 0x217 Jump
	
Label_536:
	var_328_string = "completed"; // 0x218 PushS
	var_329_bool = var_15_string == var_328_string; // 0x219 Eq
	if(var_329_bool == 0) goto Label_542; // 0x21a JumpB
	func_551(); // 0x21c NEW_2
}


main(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object)
{
	var_15_object = Obj(); var_16_float = 0; var_17_object = Obj(); var_18_float = 0; // 0x12 PushV
	var_1_bool = 0; // 0x13 TMovB
	var_0_bool = 0; // 0x14 TMovB
	var_2_bool = 0; // 0x15 TMovB
	var_3_bool = 0; // 0x16 TMovB
	func_1302(); // 0x18 NEW_2
	var_33_int = 0; // 0x1a PushI
	var_34_int = 288; // 0x1b PushI
	SetTimeEvent(var_33_int, var_34_int); // 0x1c Func
	var_35_int = 0; // 0x1e PushV
	func_660(var_35_int); // 0x1f NEW_2
	var_40_int = 8; // 0x21 PushI
	var_41_bool = var_35_int >= var_40_int; // 0x22 GE
	if(var_41_bool == 0) goto Label_47; // 0x23 JumpB
	var_42_bool = 0; // 0x24 PushV
	func_1006(var_42_bool); // 0x25 NEW_2
	if(var_42_bool == 0) goto Label_46; // 0x27 JumpB
	var_155_bool = 0; var_156_string = ""; var_157_string = ""; var_158_string = ""; // 0x28 PushV
	var_156_string = "volonteers_burah"; // 0x29 MovS
	var_157_string = "childs_letter"; // 0x2a MovS
	var_158_string = ""; // 0x2b MovS
	func_636(var_155_bool, var_156_string, var_157_string, var_158_string); // 0x2c NEW_2
	
Label_46:
	goto Label_51; // 0x2e Jump
	
Label_51:
	var_162_int = 0; // 0x33 PushV
	var_162_int = 0; // 0x34 MovI
	func_1048(var_162_int); // 0x35 NEW_2
	func_668(); // 0x38 NEW_2
	func_681(); // 0x3b NEW_2
	GetMainOutdoorScene(var_17_object); // 0x3d Func
	var_195_object = Obj(); var_196_object = Obj(); var_197_string = ""; var_198_string = ""; var_199_string = ""; // 0x3f PushV
	var_196_object = var_17_object; // 0x40 Mov
	var_197_string = "pt_b12q01_birdmask_s"; // 0x41 MovS
	var_198_string = "pers_birdmask"; // 0x42 MovS
	var_199_string = "b12q01_birdmask_s.xml"; // 0x43 MovS
	func_601(var_196_object, var_197_string, var_198_string, var_199_string); // 0x44 NEW_2
	var_4_object = var_195_object; // 0x45 TMov
	var_213_string = "termitnik2"; // 0x47 PushS
	GetSceneByName(var_17_object, var_213_string); // 0x48 Func
	var_214_object = Obj(); var_215_object = Obj(); var_216_string = ""; var_217_string = ""; var_218_string = ""; // 0x4a PushV
	var_215_object = var_17_object; // 0x4b Mov
	var_216_string = "pt_b12q01_klara"; // 0x4c MovS
	var_217_string = "NPC_Klara"; // 0x4d MovS
	var_218_string = "b12q01_klara_t2.xml"; // 0x4e MovS
	func_583(var_214_object, var_215_object, var_216_string, var_217_string, var_218_string); // 0x4f NEW_2
	var_9_object = var_214_object; // 0x50 TMov
	var_232_string = ""; var_233_bool = 0; // 0x52 PushV
	var_232_string = "sobor@door1"; // 0x53 MovS
	var_233_bool = 1; // 0x54 MovB
	func_619(var_232_string, var_233_bool); // 0x55 NEW_2
	var_234_string = ""; var_235_bool = 0; // 0x57 PushV
	var_234_string = "hidden_room@door1"; // 0x58 MovS
	var_235_bool = 1; // 0x59 MovB
	func_619(var_234_string, var_235_bool); // 0x5a NEW_2
	var_236_string = ""; var_237_bool = 0; // 0x5c PushV
	var_236_string = "mnogogrannik@door1"; // 0x5d MovS
	var_237_bool = 1; // 0x5e MovB
	func_619(var_236_string, var_237_bool); // 0x5f NEW_2
	var_238_string = ""; var_239_bool = 0; // 0x61 PushV
	var_238_string = "cot_eva@door1"; // 0x62 MovS
	var_239_bool = 0; // 0x63 MovB
	func_619(var_238_string, var_239_bool); // 0x64 NEW_2
	var_240_string = ""; var_241_bool = 0; // 0x66 PushV
	var_240_string = "termitnik2@door1"; // 0x67 MovS
	var_241_bool = 0; // 0x68 MovB
	func_619(var_240_string, var_241_bool); // 0x69 NEW_2
	var_242_string = ""; var_243_bool = 0; // 0x6b PushV
	var_242_string = "uprava_admin@door1"; // 0x6c MovS
	var_243_bool = 0; // 0x6d MovB
	func_619(var_242_string, var_243_bool); // 0x6e NEW_2
	GetGameTime(var_18_float); // 0x70 Func
	var_244_int = 271; // 0x72 PushI
	var_245_bool = var_18_float < var_244_int; // 0x73 LT
	if(var_245_bool == 0) goto Label_127; // 0x74 JumpB
	var_246_string = ""; var_247_bool = 0; // 0x75 PushV
	var_246_string = "theater@door1"; // 0x76 MovS
	var_247_bool = 0; // 0x77 MovB
	func_619(var_246_string, var_247_bool); // 0x78 NEW_2
	var_248_int = 2; // 0x7a PushI
	var_249_int = 271; // 0x7b PushI
	SetTimeEvent(var_248_int, var_249_int); // 0x7c Func
	goto Label_130; // 0x7e Jump
	
Label_130:
	Hold(); // 0x82 Func
	goto Label_130; // 0x84 Jump
	
Label_127:
	func_0(var_18_float); // 0x80 NEW_2
	
Label_47:
	var_259_int = 1; // 0x2f PushI
	var_260_int = 272; // 0x30 PushI
	SetTimeEvent(var_259_int, var_260_int); // 0x31 Func
}


func_0(var_11_object)
{
	var_250_object = Obj(); var_251_object = Obj(); // 0x0 PushV
	GetMainOutdoorScene(var_251_object); // 0x1 Func
	var_252_string = ""; var_253_bool = 0; // 0x3 PushV
	var_252_string = "theater@door1"; // 0x4 MovS
	var_253_bool = 1; // 0x5 MovB
	func_619(var_252_string, var_253_bool); // 0x6 NEW_2
	var_254_object = Obj(); var_255_object = Obj(); var_256_string = ""; var_257_string = ""; var_258_string = ""; // 0x8 PushV
	var_255_object = var_251_object; // 0x9 Mov
	var_256_string = "pt_b12q01_birdmask_t"; // 0xa MovS
	var_257_string = "pers_birdmask"; // 0xb MovS
	var_258_string = "b12q01_birdmask_t.xml"; // 0xc MovS
	func_601(var_255_object, var_256_string, var_257_string, var_258_string); // 0xd NEW_2
	var_11_object = var_254_object; // 0xe TMov
	return 2; // 0x10 Return
}


func_636(var_155_bool, var_156_string, var_157_string, var_158_string)
{
	var_159_object = Obj(); var_160_object = Obj(); // 0x27c PushV
	FindActor(var_160_object, var_156_string); // 0x27d Func
	var_161_bool = var_160_object == 0; // 0x27f NullEq
	if(var_161_bool == 0) goto Label_643; // 0x280 JumpB
	var_155_bool = 0; // 0x281 MovB
	return 2; // 0x282 Return
	
Label_643:
	Trigger(var_160_object, var_157_string, var_158_string); // 0x283 Func
	var_155_bool = 1; // 0x285 MovB
	return 2; // 0x286 Return
}


func_1283(var_86_bool)
{
	var_87_int = 0; var_88_int = 0; // 0x503 PushV
	var_89_string = "b12q01KlaraInSobor"; // 0x504 PushS
	GetVariable(var_89_string, var_88_int); // 0x505 Func
	var_90_int = 0; // 0x507 PushI
	var_86_bool = var_88_int != var_90_int; // 0x508 Neq2
	return 2; // 0x509 Return
}


func_1029(var_201_bool)
{
	var_201_bool = 0; // 0x405 MovB
	var_202_bool = 0; // 0x406 PushV
	var_202_bool = 0; // 0x407 MovB
	var_203_bool = 0; // 0x408 PushV
	func_968(var_203_bool); // 0x409 NEW_2
	if(var_203_bool == 0) goto Label_1041; // 0x40b JumpB
	var_247_bool = 0; // 0x40c PushV
	func_930(var_247_bool); // 0x40d NEW_2
	if(var_247_bool == 0) goto Label_1041; // 0x40f JumpB
	var_202_bool = 1; // 0x410 MovB
	
Label_1041:
	if(var_202_bool == 0) goto Label_1047; // 0x411 JumpB
	var_278_bool = 0; // 0x412 PushV
	func_892(var_278_bool); // 0x413 NEW_2
	if(var_278_bool == 0) goto Label_1047; // 0x415 JumpB
	var_201_bool = 1; // 0x416 MovB
	
Label_1047:
	return 0; // 0x417 Return
}


func_774(var_132_bool, var_133_int)
{
	var_134_int = 18; // 0x307 PushI
	add(var_134_int); // 0x308 ObjFunc
	var_135_int = 24; // 0x30a PushI
	add(var_135_int); // 0x30b ObjFunc
	var_136_int = 20; // 0x30d PushI
	add(var_136_int); // 0x30e ObjFunc
	var_137_int = 14; // 0x310 PushI
	add(var_137_int); // 0x311 ObjFunc
	var_138_bool = 0; // 0x313 PushB
	var_139_bool = var_132_bool == var_138_bool; // 0x314 Eq
	if(var_139_bool == 0) goto Label_800; // 0x315 JumpB
	var_140_int = 10; // 0x316 PushI
	add(var_140_int); // 0x317 ObjFunc
	var_141_int = 17; // 0x319 PushI
	add(var_141_int); // 0x31a ObjFunc
	var_142_int = 8; // 0x31c PushI
	add(var_142_int); // 0x31d ObjFunc
	goto Label_806; // 0x31f Jump
	
Label_806:
	return 0; // 0x326 Return
	
Label_800:
	var_143_int = 1; // 0x320 PushI
	var_144_bool = var_133_int != var_143_int; // 0x321 Neq
	if(var_144_bool == 0) goto Label_806; // 0x322 JumpB
	var_145_int = 10; // 0x323 PushI
	add(var_145_int); // 0x324 ObjFunc
}


func_648(var_124_bool, var_125_string)
{
	var_126_object = Obj(); var_127_object = Obj(); // 0x288 PushV
	FindActor(var_127_object, var_125_string); // 0x289 Func
	var_128_bool = var_127_object == 0; // 0x28b Not
	if(var_128_bool == 0) goto Label_655; // 0x28c JumpB
	var_124_bool = 0; // 0x28d MovB
	return 2; // 0x28e Return
	
Label_655:
	RemoveActor(var_127_object); // 0x28f Func
	var_124_bool = 1; // 0x291 MovB
	return 2; // 0x292 Return
}


func_1290(var_96_bool)
{
	var_97_int = 0; var_98_int = 0; // 0x50a PushV
	var_99_string = "b12q01DankoInSobor"; // 0x50b PushS
	GetVariable(var_99_string, var_98_int); // 0x50c Func
	var_100_int = 0; // 0x50e PushI
	var_96_bool = var_98_int != var_100_int; // 0x50f Neq2
	return 2; // 0x510 Return
}


func_1297(var_24_bool)
{
	var_25_bool = 0; var_26_bool = 0; // 0x511 PushV
	IsOverrideActive(var_26_bool); // 0x512 Func
	var_24_bool = !var_26_bool; // 0x514 Not2
	return 2; // 0x515 Return
}


func_660(var_35_int)
{
	var_36_float = 0; var_37_float = 0; // 0x294 PushV
	GetGameTime(var_37_float); // 0x295 Func
	var_38_int = 0; // 0x297 PushV
	var_38_int = var_37_float; // 0x298 Mov
	var_39_int = 24; // 0x299 PushI
	var_35_int = var_38_int % var_39_int; // 0x29a Mod2
	return 2; // 0x29b Return
}


func_1302()
{
	var_19_object = Obj(); var_20_object = Obj(); // 0x516 PushV
	var_21_string = "warehouse_rubin"; // 0x517 PushS
	GetSceneByName(var_20_object, var_21_string); // 0x518 Func
	var_22_string = "rubin"; // 0x51a PushS
	Trigger(var_20_object, var_22_string); // 0x51b Func
	var_23_string = ""; var_24_bool = 0; // 0x51d PushV
	var_23_string = "warehouse_rubin@door1"; // 0x51e MovS
	var_24_bool = 0; // 0x51f MovB
	func_619(var_23_string, var_24_bool); // 0x520 NEW_2
	return 2; // 0x522 Return
}


func_1048(var_162_int)
{
	var_163_string = "game_final"; // 0x419 PushS
	SetVariable(var_163_string, var_162_int); // 0x41a Func
	return 0; // 0x41c Return
}


func_668()
{
	var_164_object = Obj(); var_165_object = Obj(); // 0x29c PushV
	var_166_int = 613; // 0x29d PushI
	var_167_int = 1; // 0x29e PushI
	var_168_int = 532002; // 0x29f PushI
	CreateDiaryEntry(var_165_object, var_166_int, var_167_int, var_168_int); // 0x2a0 Func
	var_169_bool = 0; var_170_object = Obj(); var_171_int = 0; // 0x2a2 PushV
	var_170_object = var_165_object; // 0x2a3 Mov
	var_171_int = -1; // 0x2a4 MovI
	func_707(var_169_bool, var_170_object, var_171_int); // 0x2a5 NEW_2
	return 2; // 0x2a7 Return
}


func_1053(var_69_int)
{
	var_70_int = 0; var_71_int = 0; // 0x41d PushV
	var_72_string = "game_final"; // 0x41e PushS
	GetVariable(var_72_string, var_71_int); // 0x41f Func
	var_69_int = var_71_int; // 0x421 Mov
	return 2; // 0x422 Return
}


func_543()
{
	var_321_string = "b12q01"; // 0x21f PushS
	var_322_int = -1; // 0x220 PushI
	SetVariable(var_321_string, var_322_int); // 0x221 Func
	func_559(); // 0x224 NEW_2
	return 0; // 0x226 Return
}


func_930(var_90_bool)
{
	var_91_object = Obj(); var_92_int = 0; var_93_int = 0; var_94_int = 0; var_95_object = Obj(); var_96_int = 0; var_97_int = 0; var_98_int = 0; // 0x3a2 PushV
	CreateIntVector(var_95_object); // 0x3a3 Func
	var_99_object = Obj(); var_100_bool = 0; var_101_int = 0; // 0x3a5 PushV
	var_99_object = var_95_object; // 0x3a6 Mov
	var_100_bool = 0; // 0x3a7 MovB
	var_101_int = -1; // 0x3a8 MovI
	func_807(var_100_bool, var_101_int); // 0x3a9 NEW_2
	size(var_96_int); // 0x3ab ObjFunc
	var_97_int = 0; // 0x3ad MovI
	
Label_942:
	var_114_bool = var_97_int < var_96_int; // 0x3ae LT
	if(var_114_bool == 0) goto Label_965; // 0x3af JumpB
	get(var_98_int, var_97_int); // 0x3b0 ObjFunc
	var_115_bool = 0; // 0x3b2 PushV
	var_115_bool = 1; // 0x3b3 MovB
	var_116_bool = 0; var_117_int = 0; // 0x3b4 PushV
	var_117_int = var_98_int; // 0x3b5 Mov
	func_882(var_116_bool, var_117_int); // 0x3b6 NEW_2
	if(var_116_bool == 0) goto Label_959; // 0x3b8 JumpB
	var_118_bool = 0; var_119_int = 0; // 0x3b9 PushV
	var_119_int = var_98_int; // 0x3ba Mov
	func_872(var_118_bool, var_119_int); // 0x3bb NEW_2
	if(var_118_bool == 0) goto Label_959; // 0x3bd JumpB
	var_115_bool = 0; // 0x3be MovB
	
Label_959:
	if(var_115_bool == 0) goto Label_962; // 0x3bf JumpB
	var_90_bool = 0; // 0x3c0 MovB
	return 8; // 0x3c1 Return
	
Label_962:
	var_120_int = 1; // 0x3c2 PushI
	var_97_int = var_97_int + var_120_int; // 0x3c3 Add2
	goto Label_942; // 0x3c4 Jump
	
Label_965:
	var_90_bool = 1; // 0x3c5 MovB
	return 8; // 0x3c6 Return
}


func_1059()
{
	var_32_int = 0; var_33_int = 0; var_34_bool = 0; var_35_bool = 0; var_36_int = 0; var_37_int = 0; var_38_int = 0; var_39_bool = 0; var_40_bool = 0; var_41_int = 0; var_42_int = 0; var_43_bool = 0; var_44_bool = 0; var_45_int = 0; var_46_int = 0; var_47_int = 0; var_48_bool = 0; var_49_bool = 0; // 0x423 PushV
	func_741(); // 0x425 NEW_2
	var_68_int = 0; // 0x427 PushV
	func_735(var_68_int); // 0x428 NEW_2
	var_41_int = var_68_int; // 0x429 Mov
	var_69_int = 0; // 0x42b PushV
	func_1053(var_69_int); // 0x42c NEW_2
	var_42_int = var_69_int; // 0x42d Mov
	var_43_bool = 0; // 0x42f MovB
	var_44_bool = 0; // 0x430 MovB
	var_73_int = 0; // 0x431 PushI
	var_74_bool = var_41_int == var_73_int; // 0x432 Eq
	if(var_74_bool == 0) goto Label_1087; // 0x433 JumpB
	var_75_string = "d12q01ChildsAreVisited"; // 0x434 PushS
	GetVariable(var_75_string, var_45_int); // 0x435 Func
	var_76_int = 0; // 0x437 PushI
	var_43_bool = var_45_int != var_76_int; // 0x438 Neq2
	var_77_string = "d12q01TheaterIsVisited"; // 0x439 PushS
	GetVariable(var_77_string, var_45_int); // 0x43a Func
	var_78_int = 0; // 0x43c PushI
	var_44_bool = var_45_int != var_78_int; // 0x43d Neq2
	goto Label_1114; // 0x43e Jump
	
Label_1114:
	var_48_bool = 0; // 0x45a MovB
	var_79_bool = 0; // 0x45b PushV
	var_79_bool = 0; // 0x45c MovB
	var_80_int = 0; // 0x45d PushI
	var_81_bool = var_41_int == var_80_int; // 0x45e Eq
	if(var_81_bool == 0) goto Label_1124; // 0x45f JumpB
	var_82_int = 2; // 0x460 PushI
	var_83_bool = var_42_int == var_82_int; // 0x461 Eq
	if(var_83_bool == 0) goto Label_1124; // 0x462 JumpB
	var_79_bool = 1; // 0x463 MovB
	
Label_1124:
	if(var_79_bool == 0) goto Label_1126; // 0x464 JumpB
	var_48_bool = 1; // 0x465 MovB
	
Label_1126:
	var_84_bool = 0; // 0x466 PushV
	var_84_bool = 0; // 0x467 MovB
	var_85_int = 1; // 0x468 PushI
	var_86_bool = var_41_int == var_85_int; // 0x469 Eq
	if(var_86_bool == 0) goto Label_1135; // 0x46a JumpB
	var_87_int = 1; // 0x46b PushI
	var_88_bool = var_42_int == var_87_int; // 0x46c Eq
	if(var_88_bool == 0) goto Label_1135; // 0x46d JumpB
	var_84_bool = 1; // 0x46e MovB
	
Label_1135:
	if(var_84_bool == 0) goto Label_1137; // 0x46f JumpB
	var_48_bool = 1; // 0x470 MovB
	
Label_1137:
	var_89_bool = 0; // 0x471 PushV
	var_89_bool = 0; // 0x472 MovB
	var_90_int = 2; // 0x473 PushI
	var_91_bool = var_41_int == var_90_int; // 0x474 Eq
	if(var_91_bool == 0) goto Label_1146; // 0x475 JumpB
	var_92_int = 3; // 0x476 PushI
	var_93_bool = var_42_int == var_92_int; // 0x477 Eq
	if(var_93_bool == 0) goto Label_1146; // 0x478 JumpB
	var_89_bool = 1; // 0x479 MovB
	
Label_1146:
	if(var_89_bool == 0) goto Label_1148; // 0x47a JumpB
	var_48_bool = 1; // 0x47b MovB
	
Label_1148:
	var_49_bool = 0; // 0x47c MovB
	var_94_bool = 0; // 0x47d PushV
	var_94_bool = 0; // 0x47e MovB
	var_95_bool = 0; // 0x47f PushV
	var_95_bool = 0; // 0x480 MovB
	var_96_int = 4; // 0x481 PushI
	var_97_bool = var_42_int == var_96_int; // 0x482 Eq
	if(var_97_bool == 0) goto Label_1159; // 0x483 JumpB
	var_98_bool = var_43_bool == 0; // 0x484 Not
	if(var_98_bool == 0) goto Label_1159; // 0x485 JumpB
	var_95_bool = 1; // 0x486 MovB
	
Label_1159:
	if(var_95_bool == 0) goto Label_1163; // 0x487 JumpB
	var_99_bool = var_44_bool == 0; // 0x488 Not
	if(var_99_bool == 0) goto Label_1163; // 0x489 JumpB
	var_94_bool = 1; // 0x48a MovB
	
Label_1163:
	if(var_94_bool == 0) goto Label_1165; // 0x48b JumpB
	var_49_bool = 1; // 0x48c MovB
	
Label_1165:
	var_100_bool = 0; // 0x48d PushV
	var_100_bool = 0; // 0x48e MovB
	var_101_bool = 0; // 0x48f PushV
	var_101_bool = 0; // 0x490 MovB
	var_102_bool = var_48_bool == 0; // 0x491 Not
	if(var_102_bool == 0) goto Label_1174; // 0x492 JumpB
	var_103_bool = var_43_bool; // 0x493 Push
	if(var_103_bool == 0) goto Label_1174; // 0x494 JumpB
	var_101_bool = 1; // 0x495 MovB
	
Label_1174:
	if(var_101_bool == 0) goto Label_1178; // 0x496 JumpB
	var_104_bool = var_44_bool == 0; // 0x497 Not
	if(var_104_bool == 0) goto Label_1178; // 0x498 JumpB
	var_100_bool = 1; // 0x499 MovB
	
Label_1178:
	if(var_100_bool == 0) goto Label_1180; // 0x49a JumpB
	var_49_bool = 1; // 0x49b MovB
	
Label_1180:
	var_105_bool = 0; // 0x49c PushV
	var_105_bool = 0; // 0x49d MovB
	var_106_bool = 0; // 0x49e PushV
	var_106_bool = 0; // 0x49f MovB
	var_107_bool = var_48_bool; // 0x4a0 Push
	if(var_107_bool == 0) goto Label_1189; // 0x4a1 JumpB
	var_108_bool = var_43_bool; // 0x4a2 Push
	if(var_108_bool == 0) goto Label_1189; // 0x4a3 JumpB
	var_106_bool = 1; // 0x4a4 MovB
	
Label_1189:
	if(var_106_bool == 0) goto Label_1193; // 0x4a5 JumpB
	var_109_bool = var_44_bool; // 0x4a6 Push
	if(var_109_bool == 0) goto Label_1193; // 0x4a7 JumpB
	var_105_bool = 1; // 0x4a8 MovB
	
Label_1193:
	if(var_105_bool == 0) goto Label_1195; // 0x4a9 JumpB
	var_49_bool = 1; // 0x4aa MovB
	
Label_1195:
	var_110_string = "PlayFinalMovie"; // 0x4ab PushS
	Trace(var_110_string); // 0x4ac Func
	var_111_int = 0; // 0x4ae PushV
	func_1053(var_111_int); // 0x4af NEW_2
	var_112_int = 1; // 0x4b1 PushI
	var_113_bool = var_111_int == var_112_int; // 0x4b2 Eq
	if(var_113_bool == 0) goto Label_1222; // 0x4b3 JumpB
	var_114_string = "fin_termit"; // 0x4b4 PushS
	Trace(var_114_string); // 0x4b5 Func
	var_115_bool = var_48_bool == 0; // 0x4b7 Not
	if(var_115_bool == 0) goto Label_1212; // 0x4b8 JumpB
	var_116_string = "ACHIEVEMENT_HELLO_2"; // 0x4b9 PushS
	UnlockAchievement(var_116_string); // 0x4ba Func
	
Label_1212:
	var_117_bool = var_49_bool; // 0x4bc Push
	if(var_117_bool == 0) goto Label_1218; // 0x4bd JumpB
	var_118_string = "gameover_termit_chudo.xml"; // 0x4be PushS
	GameOver(var_118_string); // 0x4bf Func
	goto Label_1221; // 0x4c1 Jump
	
Label_1221:
	goto Label_1282; // 0x4c5 Jump
	
Label_1282:
	return 18; // 0x502 Return
	
Label_1218:
	var_119_string = "gameover_termit.xml"; // 0x4c2 PushS
	GameOver(var_119_string); // 0x4c3 Func
	
Label_1222:
	var_120_int = 0; // 0x4c6 PushV
	func_1053(var_120_int); // 0x4c7 NEW_2
	var_121_int = 2; // 0x4c9 PushI
	var_122_bool = var_120_int == var_121_int; // 0x4ca Eq
	if(var_122_bool == 0) goto Label_1246; // 0x4cb JumpB
	var_123_string = "fin_utop"; // 0x4cc PushS
	Trace(var_123_string); // 0x4cd Func
	var_124_bool = var_48_bool == 0; // 0x4cf Not
	if(var_124_bool == 0) goto Label_1236; // 0x4d0 JumpB
	var_125_string = "ACHIEVEMENT_HELLO_2"; // 0x4d1 PushS
	UnlockAchievement(var_125_string); // 0x4d2 Func
	
Label_1236:
	var_126_bool = var_49_bool; // 0x4d4 Push
	if(var_126_bool == 0) goto Label_1242; // 0x4d5 JumpB
	var_127_string = "gameover_utopist_chudo.xml"; // 0x4d6 PushS
	GameOver(var_127_string); // 0x4d7 Func
	goto Label_1245; // 0x4d9 Jump
	
Label_1245:
	goto Label_1282; // 0x4dd Jump
	
Label_1242:
	var_128_string = "gameover_utopist.xml"; // 0x4da PushS
	GameOver(var_128_string); // 0x4db Func
	
Label_1246:
	var_129_int = 0; // 0x4de PushV
	func_1053(var_129_int); // 0x4df NEW_2
	var_130_int = 3; // 0x4e1 PushI
	var_131_bool = var_129_int == var_130_int; // 0x4e2 Eq
	if(var_131_bool == 0) goto Label_1270; // 0x4e3 JumpB
	var_132_string = "fin_smiren"; // 0x4e4 PushS
	Trace(var_132_string); // 0x4e5 Func
	var_133_bool = var_48_bool == 0; // 0x4e7 Not
	if(var_133_bool == 0) goto Label_1260; // 0x4e8 JumpB
	var_134_string = "ACHIEVEMENT_HELLO_2"; // 0x4e9 PushS
	UnlockAchievement(var_134_string); // 0x4ea Func
	
Label_1260:
	var_135_bool = var_49_bool; // 0x4ec Push
	if(var_135_bool == 0) goto Label_1266; // 0x4ed JumpB
	var_136_string = "gameover_smirennik_chudo.xml"; // 0x4ee PushS
	GameOver(var_136_string); // 0x4ef Func
	goto Label_1269; // 0x4f1 Jump
	
Label_1269:
	goto Label_1282; // 0x4f5 Jump
	
Label_1266:
	var_137_string = "gameover_smirennik.xml"; // 0x4f2 PushS
	GameOver(var_137_string); // 0x4f3 Func
	
Label_1270:
	var_138_string = "fin_beda"; // 0x4f6 PushS
	Trace(var_138_string); // 0x4f7 Func
	var_139_bool = var_49_bool; // 0x4f9 Push
	if(var_139_bool == 0) goto Label_1279; // 0x4fa JumpB
	var_140_string = "gameover_beda_chudo.xml"; // 0x4fb PushS
	GameOver(var_140_string); // 0x4fc Func
	goto Label_1282; // 0x4fe Jump
	
Label_1279:
	var_141_string = "gameover_beda.xml"; // 0x4ff PushS
	GameOver(var_141_string); // 0x500 Func
	
Label_1087:
	var_142_int = 1; // 0x43f PushI
	var_143_bool = var_41_int == var_142_int; // 0x440 Eq
	if(var_143_bool == 0) goto Label_1101; // 0x441 JumpB
	var_144_string = "b12q01ChildsAreVisited"; // 0x442 PushS
	GetVariable(var_144_string, var_46_int); // 0x443 Func
	var_145_int = 0; // 0x445 PushI
	var_43_bool = var_46_int != var_145_int; // 0x446 Neq2
	var_146_string = "b12q01TheaterIsVisited"; // 0x447 PushS
	GetVariable(var_146_string, var_46_int); // 0x448 Func
	var_147_int = 0; // 0x44a PushI
	var_44_bool = var_46_int != var_147_int; // 0x44b Neq2
	goto Label_1114; // 0x44c Jump
	
Label_1101:
	var_148_int = 2; // 0x44d PushI
	var_149_bool = var_41_int == var_148_int; // 0x44e Eq
	if(var_149_bool == 0) goto Label_1114; // 0x44f JumpB
	var_150_string = "k12q01ChildsAreVisited"; // 0x450 PushS
	GetVariable(var_150_string, var_47_int); // 0x451 Func
	var_151_int = 0; // 0x453 PushI
	var_43_bool = var_47_int != var_151_int; // 0x454 Neq2
	var_152_string = "k12q01TheaterIsVisited"; // 0x455 PushS
	GetVariable(var_152_string, var_47_int); // 0x456 Func
	var_153_int = 0; // 0x458 PushI
	var_44_bool = var_47_int != var_153_int; // 0x459 Neq2
}


func_551()
{
	var_330_string = "b12q01"; // 0x227 PushS
	var_331_int = 1000; // 0x228 PushI
	SetVariable(var_330_string, var_331_int); // 0x229 Func
	func_559(); // 0x22c NEW_2
	return 0; // 0x22e Return
}


func_807(var_100_bool, var_101_int)
{
	var_102_int = 6; // 0x328 PushI
	add(var_102_int); // 0x329 ObjFunc
	var_103_int = 26; // 0x32b PushI
	add(var_103_int); // 0x32c ObjFunc
	var_104_int = 2; // 0x32e PushI
	add(var_104_int); // 0x32f ObjFunc
	var_105_int = 22; // 0x331 PushI
	add(var_105_int); // 0x332 ObjFunc
	var_106_bool = 0; // 0x334 PushB
	var_107_bool = var_100_bool == var_106_bool; // 0x335 Eq
	if(var_107_bool == 0) goto Label_833; // 0x336 JumpB
	var_108_int = 15; // 0x337 PushI
	add(var_108_int); // 0x338 ObjFunc
	var_109_int = 5; // 0x33a PushI
	add(var_109_int); // 0x33b ObjFunc
	var_110_int = 16; // 0x33d PushI
	add(var_110_int); // 0x33e ObjFunc
	goto Label_839; // 0x340 Jump
	
Label_839:
	return 0; // 0x347 Return
	
Label_833:
	var_111_int = 0; // 0x341 PushI
	var_112_bool = var_101_int != var_111_int; // 0x342 Neq
	if(var_112_bool == 0) goto Label_839; // 0x343 JumpB
	var_113_int = 15; // 0x344 PushI
	add(var_113_int); // 0x345 ObjFunc
}


func_681()
{
	var_187_object = Obj(); var_188_object = Obj(); // 0x2a9 PushV
	var_189_int = 694; // 0x2aa PushI
	var_190_int = 1; // 0x2ab PushI
	var_191_int = 535402; // 0x2ac PushI
	CreateDiaryEntry(var_188_object, var_189_int, var_190_int, var_191_int); // 0x2ad Func
	var_192_bool = 0; var_193_object = Obj(); var_194_int = 0; // 0x2af PushV
	var_193_object = var_188_object; // 0x2b0 Mov
	var_194_int = 613; // 0x2b1 MovI
	func_707(var_192_bool, var_193_object, var_194_int); // 0x2b2 NEW_2
	return 2; // 0x2b4 Return
}


func_559()
{
	EventDisable(26); // 0x22f EventDisable
	var_323_object = Obj(); // 0x230 PushV
	func_566(var_323_object); // 0x231 NEW_2
	RemoveActor(var_323_object); // 0x233 Func
	return 0; // 0x235 Return
}


func_566(var_323_object)
{
	var_324_object = Obj(); var_325_object = Obj(); // 0x236 PushV
	self(var_325_object); // 0x237 Func
	var_323_object = var_325_object; // 0x239 Mov
	return 2; // 0x23a Return
}


func_694(var_178_object)
{
	var_179_object = Obj(); var_180_object = Obj(); // 0x2b6 PushV
	GetDiaryRoot(var_180_object); // 0x2b7 Func
	var_181_bool = var_180_object == 0; // 0x2b9 Not
	if(var_181_bool == 0) goto Label_704; // 0x2ba JumpB
	var_182_string = "Can't retrieve diary root"; // 0x2bb PushS
	Trace(var_182_string); // 0x2bc Func
	var_178_object = 0; // 0x2be MovB
	return 2; // 0x2bf Return
	
Label_704:
	var_178_object = var_180_object; // 0x2c0 Mov
	return 2; // 0x2c1 Return
}


func_572(var_47_object, var_48_string)
{
	var_49_object = Obj(); var_50_object = Obj(); var_51_object = Obj(); var_52_object = Obj(); // 0x23c PushV
	GetMainOutdoorScene(var_51_object); // 0x23d Func
	var_53_string = ".bin"; // 0x23f PushS
	var_54_int = var_48_string + var_53_string; // 0x240 Add
	AddBlankActor(var_52_object, var_51_object, var_48_string, var_54_int); // 0x241 Func
	var_47_object = var_52_object; // 0x243 Mov
	return 4; // 0x244 Return
}


func_707(var_169_bool, var_170_object, var_171_int)
{
	var_172_object = Obj(); var_173_object = Obj(); var_174_int = 0; var_175_object = Obj(); var_176_object = Obj(); var_177_int = 0; // 0x2c3 PushV
	var_178_object = Obj(); // 0x2c4 PushV
	func_694(var_178_object); // 0x2c5 NEW_2
	var_175_object = var_178_object; // 0x2c6 Mov
	Find(var_171_int, var_176_object); // 0x2c8 ObjFunc
	var_183_bool = var_176_object == 0; // 0x2ca Not
	if(var_183_bool == 0) goto Label_722; // 0x2cb JumpB
	var_184_string = "Can't find diary parent with id: "; // 0x2cc PushS
	var_185_int = var_184_string + var_171_int; // 0x2cd Add
	Trace(var_185_int); // 0x2ce Func
	var_169_bool = 0; // 0x2d0 MovB
	return 6; // 0x2d1 Return
	
Label_722:
	AddChild(var_170_object); // 0x2d2 ObjFunc
	var_186_int = 7; // 0x2d4 PushI
	SendWorldWndMessage(var_186_int); // 0x2d5 Func
	GetCategory(var_177_int); // 0x2d7 ObjFunc
	SetDiarySection(var_177_int); // 0x2d9 Func
	var_169_bool = 0; // 0x2db MovB
	return 6; // 0x2dc Return
}


func_583(var_214_object, var_215_object, var_216_string, var_217_string, var_218_string)
{
	var_219_bool = 0; var_220_cvector = CVector(0,0,0); var_221_cvector = CVector(0,0,0); var_222_object = Obj(); var_223_bool = 0; var_224_cvector = CVector(0,0,0); var_225_cvector = CVector(0,0,0); var_226_object = Obj(); // 0x247 PushV
	GetLocator(var_216_string, var_223_bool, var_224_cvector, var_225_cvector); // 0x248 ObjFunc
	var_227_bool = var_223_bool == 0; // 0x24a Not
	if(var_227_bool == 0) goto Label_596; // 0x24b JumpB
	var_228_string = "Locator "; // 0x24c PushS
	var_229_int = var_228_string + var_216_string; // 0x24d Add
	var_230_string = " doesn't exist"; // 0x24e PushS
	var_231_int = var_229_int + var_230_string; // 0x24f Add
	Trace(var_231_int); // 0x250 Func
	var_226_object = 0; // 0x252 SetNull
	goto Label_598; // 0x253 Jump
	
Label_598:
	var_214_object = var_226_object; // 0x256 Mov
	return 8; // 0x257 Return
	
Label_596:
	AddActor(var_226_object, var_217_string, var_215_object, var_224_cvector, var_225_cvector, var_218_string); // 0x254 Func
}


func_840(var_55_bool)
{
	var_57_int = 7; // 0x349 PushI
	add(var_57_int); // 0x34a ObjFunc
	var_58_int = 23; // 0x34c PushI
	add(var_58_int); // 0x34d ObjFunc
	var_59_int = 21; // 0x34f PushI
	add(var_59_int); // 0x350 ObjFunc
	var_60_int = 9; // 0x352 PushI
	add(var_60_int); // 0x353 ObjFunc
	var_61_int = 3; // 0x355 PushI
	add(var_61_int); // 0x356 ObjFunc
	var_62_int = 1; // 0x358 PushI
	add(var_62_int); // 0x359 ObjFunc
	var_63_int = 11; // 0x35b PushI
	add(var_63_int); // 0x35c ObjFunc
	var_64_int = 13; // 0x35e PushI
	add(var_64_int); // 0x35f ObjFunc
	var_65_bool = 0; // 0x361 PushB
	var_66_bool = var_55_bool == var_65_bool; // 0x362 Eq
	if(var_66_bool == 0) goto Label_871; // 0x363 JumpB
	var_67_int = 25; // 0x364 PushI
	add(var_67_int); // 0x365 ObjFunc
	
Label_871:
	return 0; // 0x367 Return
}


func_968(var_45_bool)
{
	var_46_object = Obj(); var_47_int = 0; var_48_int = 0; var_49_int = 0; var_50_object = Obj(); var_51_int = 0; var_52_int = 0; var_53_int = 0; // 0x3c8 PushV
	CreateIntVector(var_50_object); // 0x3c9 Func
	var_54_object = Obj(); var_55_bool = 0; var_56_int = 0; // 0x3cb PushV
	var_54_object = var_50_object; // 0x3cc Mov
	var_55_bool = 0; // 0x3cd MovB
	var_56_int = -1; // 0x3ce MovI
	func_840(var_56_int); // 0x3cf NEW_2
	size(var_51_int); // 0x3d1 ObjFunc
	var_52_int = 0; // 0x3d3 MovI
	
Label_980:
	var_68_bool = var_52_int < var_51_int; // 0x3d4 LT
	if(var_68_bool == 0) goto Label_1003; // 0x3d5 JumpB
	get(var_53_int, var_52_int); // 0x3d6 ObjFunc
	var_69_bool = 0; // 0x3d8 PushV
	var_69_bool = 1; // 0x3d9 MovB
	var_70_bool = 0; var_71_int = 0; // 0x3da PushV
	var_71_int = var_53_int; // 0x3db Mov
	func_882(var_70_bool, var_71_int); // 0x3dc NEW_2
	if(var_70_bool == 0) goto Label_997; // 0x3de JumpB
	var_79_bool = 0; var_80_int = 0; // 0x3df PushV
	var_80_int = var_53_int; // 0x3e0 Mov
	func_872(var_79_bool, var_80_int); // 0x3e1 NEW_2
	if(var_79_bool == 0) goto Label_997; // 0x3e3 JumpB
	var_69_bool = 0; // 0x3e4 MovB
	
Label_997:
	if(var_69_bool == 0) goto Label_1000; // 0x3e5 JumpB
	var_45_bool = 0; // 0x3e6 MovB
	return 8; // 0x3e7 Return
	
Label_1000:
	var_88_int = 1; // 0x3e8 PushI
	var_52_int = var_52_int + var_88_int; // 0x3e9 Add2
	goto Label_980; // 0x3ea Jump
	
Label_1003:
	var_45_bool = 1; // 0x3eb MovB
	return 8; // 0x3ec Return
}


func_601(var_195_object, var_197_string, var_198_string, var_199_string)
{
	var_200_bool = 0; var_201_cvector = CVector(0,0,0); var_202_cvector = CVector(0,0,0); var_203_object = Obj(); var_204_bool = 0; var_205_cvector = CVector(0,0,0); var_206_cvector = CVector(0,0,0); var_207_object = Obj(); // 0x259 PushV
	GetLocator(var_197_string, var_204_bool, var_205_cvector, var_206_cvector); // 0x25a ObjFunc
	var_208_bool = var_204_bool == 0; // 0x25c Not
	if(var_208_bool == 0) goto Label_614; // 0x25d JumpB
	var_209_string = "Locator "; // 0x25e PushS
	var_210_int = var_209_string + var_197_string; // 0x25f Add
	var_211_string = " doesn't exist"; // 0x260 PushS
	var_212_int = var_210_int + var_211_string; // 0x261 Add
	Trace(var_212_int); // 0x262 Func
	var_207_object = 0; // 0x264 SetNull
	goto Label_616; // 0x265 Jump
	
Label_616:
	var_195_object = var_207_object; // 0x268 Mov
	return 8; // 0x269 Return
	
Label_614:
	AddStationaryActor(var_207_object, var_205_cvector, var_206_cvector, var_198_string, var_199_string); // 0x266 ObjFunc
}


func_735(var_50_int)
{
	var_51_int = 0; var_52_int = 0; // 0x2df PushV
	var_53_string = "branch"; // 0x2e0 PushS
	GetVariable(var_53_string, var_52_int); // 0x2e1 Func
	var_50_int = var_52_int; // 0x2e3 Mov
	return 2; // 0x2e4 Return
}


func_741()
{
	var_50_int = 0; // 0x2e5 PushV
	func_735(var_50_int); // 0x2e6 NEW_2
	var_54_int = 1; // 0x2e8 PushI
	var_55_bool = var_50_int == var_54_int; // 0x2e9 Eq
	if(var_55_bool == 0) goto Label_752; // 0x2ea JumpB
	var_56_string = "BurahCompleted"; // 0x2eb PushS
	var_57_int = 1; // 0x2ec PushI
	SetRegistryData(var_56_string, var_57_int); // 0x2ed Func
	goto Label_773; // 0x2ef Jump
	
Label_773:
	return 0; // 0x305 Return
	
Label_752:
	var_58_int = 0; // 0x2f0 PushV
	func_735(var_58_int); // 0x2f1 NEW_2
	var_59_int = 0; // 0x2f3 PushI
	var_60_bool = var_58_int == var_59_int; // 0x2f4 Eq
	if(var_60_bool == 0) goto Label_763; // 0x2f5 JumpB
	var_61_string = "DankoCompleted"; // 0x2f6 PushS
	var_62_int = 1; // 0x2f7 PushI
	SetRegistryData(var_61_string, var_62_int); // 0x2f8 Func
	goto Label_773; // 0x2fa Jump
	
Label_763:
	var_63_int = 0; // 0x2fb PushV
	func_735(var_63_int); // 0x2fc NEW_2
	var_64_int = 2; // 0x2fe PushI
	var_65_bool = var_63_int == var_64_int; // 0x2ff Eq
	if(var_65_bool == 0) goto Label_773; // 0x300 JumpB
	var_66_string = "KlaraCompleted"; // 0x301 PushS
	var_67_int = 1; // 0x302 PushI
	SetRegistryData(var_66_string, var_67_int); // 0x303 Func
}


func_872(var_79_bool, var_80_int)
{
	var_81_int = 0; var_82_int = 0; // 0x368 PushV
	var_83_string = "vol_"; // 0x369 PushS
	var_84_int = var_83_string + var_80_int; // 0x36a Add
	GetVariable(var_84_int, var_82_int); // 0x36b Func
	var_85_int = 4; // 0x36d PushI
	var_86_int = var_82_int & var_85_int; // 0x36e And
	var_87_int = 0; // 0x36f PushI
	var_79_bool = var_86_int != var_87_int; // 0x370 Neq2
	return 2; // 0x371 Return
}


func_619(var_23_string, var_24_bool)
{
	var_25_object = Obj(); var_26_object = Obj(); // 0x26b PushV
	FindActor(var_26_object, var_23_string); // 0x26c Func
	var_27_bool = var_26_object == 0; // 0x26e Not
	if(var_27_bool == 0) goto Label_631; // 0x26f JumpB
	var_28_string = "Door "; // 0x270 PushS
	var_29_int = var_28_string + var_23_string; // 0x271 Add
	var_30_string = " not found"; // 0x272 PushS
	var_31_int = var_29_int + var_30_string; // 0x273 Add
	Trace(var_31_int); // 0x274 Func
	goto Label_634; // 0x276 Jump
	
Label_634:
	return 2; // 0x27a Return
	
Label_631:
	var_32_string = "locked"; // 0x277 PushS
	SetProperty(var_32_string, var_24_bool); // 0x278 ObjFunc
}


func_1006(var_42_bool)
{
	var_43_int = 0; var_44_int = 0; // 0x3ee PushV
	var_44_int = 0; // 0x3ef MovI
	var_45_bool = 0; // 0x3f0 PushV
	func_968(var_45_bool); // 0x3f1 NEW_2
	if(var_45_bool == 0) goto Label_1014; // 0x3f3 JumpB
	var_89_int = 1; // 0x3f4 PushI
	var_44_int = var_44_int + var_89_int; // 0x3f5 Add2
	
Label_1014:
	var_90_bool = 0; // 0x3f6 PushV
	func_930(var_90_bool); // 0x3f7 NEW_2
	if(var_90_bool == 0) goto Label_1020; // 0x3f9 JumpB
	var_121_int = 1; // 0x3fa PushI
	var_44_int = var_44_int + var_121_int; // 0x3fb Add2
	
Label_1020:
	var_122_bool = 0; // 0x3fc PushV
	func_892(var_122_bool); // 0x3fd NEW_2
	if(var_122_bool == 0) goto Label_1026; // 0x3ff JumpB
	var_153_int = 1; // 0x400 PushI
	var_44_int = var_44_int + var_153_int; // 0x401 Add2
	
Label_1026:
	var_154_int = 2; // 0x402 PushI
	var_42_bool = var_44_int >= var_154_int; // 0x403 GE2
	return 2; // 0x404 Return
}


func_882(var_70_bool, var_71_int)
{
	var_72_int = 0; var_73_int = 0; // 0x372 PushV
	var_74_string = "vol_"; // 0x373 PushS
	var_75_int = var_74_string + var_71_int; // 0x374 Add
	GetVariable(var_75_int, var_73_int); // 0x375 Func
	var_76_int = 16; // 0x377 PushI
	var_77_int = var_73_int & var_76_int; // 0x378 And
	var_78_int = 0; // 0x379 PushI
	var_70_bool = var_77_int != var_78_int; // 0x37a Neq2
	return 2; // 0x37b Return
}


func_892(var_122_bool)
{
	var_123_object = Obj(); var_124_int = 0; var_125_int = 0; var_126_int = 0; var_127_object = Obj(); var_128_int = 0; var_129_int = 0; var_130_int = 0; // 0x37c PushV
	CreateIntVector(var_127_object); // 0x37d Func
	var_131_object = Obj(); var_132_bool = 0; var_133_int = 0; // 0x37f PushV
	var_131_object = var_127_object; // 0x380 Mov
	var_132_bool = 0; // 0x381 MovB
	var_133_int = -1; // 0x382 MovI
	func_774(var_132_bool, var_133_int); // 0x383 NEW_2
	size(var_128_int); // 0x385 ObjFunc
	var_129_int = 0; // 0x387 MovI
	
Label_904:
	var_146_bool = var_129_int < var_128_int; // 0x388 LT
	if(var_146_bool == 0) goto Label_927; // 0x389 JumpB
	get(var_130_int, var_129_int); // 0x38a ObjFunc
	var_147_bool = 0; // 0x38c PushV
	var_147_bool = 1; // 0x38d MovB
	var_148_bool = 0; var_149_int = 0; // 0x38e PushV
	var_149_int = var_130_int; // 0x38f Mov
	func_882(var_148_bool, var_149_int); // 0x390 NEW_2
	if(var_148_bool == 0) goto Label_921; // 0x392 JumpB
	var_150_bool = 0; var_151_int = 0; // 0x393 PushV
	var_151_int = var_130_int; // 0x394 Mov
	func_872(var_150_bool, var_151_int); // 0x395 NEW_2
	if(var_150_bool == 0) goto Label_921; // 0x397 JumpB
	var_147_bool = 0; // 0x398 MovB
	
Label_921:
	if(var_147_bool == 0) goto Label_924; // 0x399 JumpB
	var_122_bool = 0; // 0x39a MovB
	return 8; // 0x39b Return
	
Label_924:
	var_152_int = 1; // 0x39c PushI
	var_129_int = var_129_int + var_152_int; // 0x39d Add2
	goto Label_904; // 0x39e Jump
	
Label_927:
	var_122_bool = 1; // 0x39f MovB
	return 8; // 0x3a0 Return
}


