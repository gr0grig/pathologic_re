task_0_event_9(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_int, var_15_float)
{
	var_16_float = 0; var_17_float = 0; // 0x7c PushV
	EventDisable(26); // 0x7d EventDisable
	EventDisable(9); // 0x7e EventDisable
	var_18_int = 0; // 0x7f PushI
	var_19_bool = var_14_int == var_18_int; // 0x80 Eq
	if(var_19_bool == 0) goto Label_162; // 0x81 JumpB
	var_20_string = "final 0"; // 0x82 PushS
	Trace(var_20_string); // 0x83 Func
	var_21_bool = 0; // 0x85 PushV
	var_21_bool = 1; // 0x86 MovB
	var_22_bool = var_3_bool; // 0x87 PushT
	if(var_22_bool == 0) goto Label_143; // 0x88 JumpB
	var_23_bool = 0; // 0x89 PushV
	func_1266(var_23_bool); // 0x8a NEW_2
	var_26_bool = var_23_bool == 0; // 0x8c Not
	if(var_26_bool == 0) goto Label_143; // 0x8d JumpB
	var_21_bool = 0; // 0x8e MovB
	
Label_143:
	if(var_21_bool == 0) goto Label_158; // 0x8f JumpB
	var_27_string = "final 1 locked: "; // 0x90 PushS
	var_28_int = var_27_string + var_3_bool; // 0x91 Add
	Trace(var_28_int); // 0x92 Func
	GetGameTime(var_17_float); // 0x94 Func
	var_29_float = 0.00833; // 0x96 PushF
	var_17_float = var_17_float + var_29_float; // 0x97 Add2
	var_30_int = 0; // 0x98 PushI
	SetTimeEvent(var_30_int, var_17_float); // 0x99 Func
	EventEnable(26); // 0x9b EventEnable
	EventEnable(9); // 0x9c EventEnable
	return 2; // 0x9d Return
	
Label_158:
	func_1043(); // 0x9f NEW_2
	goto Label_186; // 0xa1 Jump
	
Label_186:
	return 2; // 0xba Return
	
Label_162:
	var_147_int = 1; // 0xa2 PushI
	var_148_bool = var_14_int == var_147_int; // 0xa3 Eq
	if(var_148_bool == 0) goto Label_178; // 0xa4 JumpB
	var_149_bool = 0; // 0xa5 PushV
	func_990(var_149_bool); // 0xa6 NEW_2
	if(var_149_bool == 0) goto Label_175; // 0xa8 JumpB
	var_262_bool = 0; var_263_string = ""; var_264_string = ""; var_265_string = ""; // 0xa9 PushV
	var_263_string = "volonteers_klara"; // 0xaa MovS
	var_264_string = "childs_letter"; // 0xab MovS
	var_265_string = ""; // 0xac MovS
	func_620(var_262_bool, var_263_string, var_264_string, var_265_string); // 0xad NEW_2
	
Label_175:
	EventEnable(26); // 0xaf EventEnable
	EventEnable(9); // 0xb0 EventEnable
	goto Label_186; // 0xb1 Jump
	
Label_178:
	var_269_int = 2; // 0xb2 PushI
	var_270_bool = var_14_int == var_269_int; // 0xb3 Eq
	if(var_270_bool == 0) goto Label_186; // 0xb4 JumpB
	func_0(var_17_float); // 0xb6 NEW_2
	EventEnable(26); // 0xb8 EventEnable
	EventEnable(9); // 0xb9 EventEnable
}


task_0_event_26(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_string)
{
	var_15_object = Obj(); var_16_object = Obj(); var_17_object = Obj(); var_18_object = Obj(); var_19_int = 0; var_20_object = Obj(); var_21_object = Obj(); var_22_object = Obj(); var_23_object = Obj(); var_24_int = 0; // 0xbb PushV
	Trace(var_14_string); // 0xbc Func
	var_25_string = "init_sobor"; // 0xbe PushS
	var_26_bool = var_14_string == var_25_string; // 0xbf Eq
	if(var_26_bool == 0) goto Label_212; // 0xc0 JumpB
	var_27_string = "sobor"; // 0xc1 PushS
	GetSceneByName(var_20_object, var_27_string); // 0xc2 Func
	var_28_string = "noaglaja"; // 0xc4 PushS
	Trigger(var_20_object, var_28_string); // 0xc5 Func
	var_29_string = ""; var_30_bool = 0; // 0xc7 PushV
	var_29_string = "isobor@door1"; // 0xc8 MovS
	var_30_bool = 1; // 0xc9 MovB
	func_603(var_29_string, var_30_bool); // 0xca NEW_2
	var_39_string = ""; var_40_bool = 0; // 0xcc PushV
	var_39_string = "sobor@door1"; // 0xcd MovS
	var_40_bool = 0; // 0xce MovB
	func_603(var_39_string, var_40_bool); // 0xcf NEW_2
	var_1_bool = 1; // 0xd1 TMovB
	var_20_object = 0; // 0xd2 SetNull
	goto Label_526; // 0xd3 Jump
	
Label_526:
	return 10; // 0x20e Return
	
Label_212:
	var_41_string = "sobor_load"; // 0xd4 PushS
	var_42_bool = var_14_string == var_41_string; // 0xd5 Eq
	if(var_42_bool == 0) goto Label_223; // 0xd6 JumpB
	var_43_bool = var_1_bool; // 0xd7 PushT
	if(var_43_bool == 0) goto Label_222; // 0xd8 JumpB
	var_3_bool = 1; // 0xd9 TMovB
	var_44_object = Obj(); var_45_string = ""; // 0xda PushV
	var_45_string = "quest_k12_01_sobor_cutscene"; // 0xdb MovS
	func_556(var_44_object, var_45_string); // 0xdc NEW_2
	
Label_222:
	goto Label_526; // 0xde Jump
	
Label_223:
	var_52_string = "sobor_cutscene_end"; // 0xdf PushS
	var_53_bool = var_14_string == var_52_string; // 0xe0 Eq
	if(var_53_bool == 0) goto Label_279; // 0xe1 JumpB
	var_54_string = "sobor"; // 0xe2 PushS
	GetSceneByName(var_21_object, var_54_string); // 0xe3 Func
	var_55_object = Obj(); var_56_object = Obj(); var_57_string = ""; var_58_string = ""; var_59_string = ""; // 0xe5 PushV
	var_56_object = var_21_object; // 0xe6 Mov
	var_57_string = "pt_b12q01_block"; // 0xe7 MovS
	var_58_string = "NPC_Block"; // 0xe8 MovS
	var_59_string = "k12q01_Block.xml"; // 0xe9 MovS
	func_567(var_55_object, var_56_object, var_57_string, var_58_string, var_59_string); // 0xea NEW_2
	var_5_object = var_55_object; // 0xeb TMov
	var_73_object = Obj(); var_74_object = Obj(); var_75_string = ""; var_76_string = ""; var_77_string = ""; // 0xed PushV
	var_74_object = var_21_object; // 0xee Mov
	var_75_string = "pt_b12q01_aglaja"; // 0xef MovS
	var_76_string = "NPC_Aglaja"; // 0xf0 MovS
	var_77_string = "k12q01_Aglaja.xml"; // 0xf1 MovS
	func_567(var_73_object, var_74_object, var_75_string, var_76_string, var_77_string); // 0xf2 NEW_2
	var_6_object = var_73_object; // 0xf3 TMov
	var_78_object = Obj(); var_79_object = Obj(); var_80_string = ""; var_81_string = ""; var_82_string = ""; // 0xf5 PushV
	var_79_object = var_21_object; // 0xf6 Mov
	var_80_string = "pt_b12q01_kapella"; // 0xf7 MovS
	var_81_string = "NPC_Klara"; // 0xf8 MovS
	var_82_string = "k12q01_Klara2.xml"; // 0xf9 MovS
	func_567(var_78_object, var_79_object, var_80_string, var_81_string, var_82_string); // 0xfa NEW_2
	var_7_object = var_78_object; // 0xfb TMov
	var_83_bool = 0; // 0xfd PushV
	func_1252(var_83_bool); // 0xfe NEW_2
	if(var_83_bool == 0) goto Label_265; // 0x100 JumpB
	var_88_object = Obj(); var_89_object = Obj(); var_90_string = ""; var_91_string = ""; var_92_string = ""; // 0x101 PushV
	var_89_object = var_21_object; // 0x102 Mov
	var_90_string = "pt_d12q01_burah"; // 0x103 MovS
	var_91_string = "NPC_Burah"; // 0x104 MovS
	var_92_string = "k12q01_Burah.xml"; // 0x105 MovS
	func_567(var_88_object, var_89_object, var_90_string, var_91_string, var_92_string); // 0x106 NEW_2
	var_8_object = var_88_object; // 0x107 TMov
	
Label_265:
	var_93_bool = 0; // 0x109 PushV
	func_1259(var_93_bool); // 0x10a NEW_2
	if(var_93_bool == 0) goto Label_277; // 0x10c JumpB
	var_98_object = Obj(); var_99_object = Obj(); var_100_string = ""; var_101_string = ""; var_102_string = ""; // 0x10d PushV
	var_99_object = var_21_object; // 0x10e Mov
	var_100_string = "pt_b12q01_danko"; // 0x10f MovS
	var_101_string = "NPC_Bakalavr"; // 0x110 MovS
	var_102_string = "k12q01_Danko.xml"; // 0x111 MovS
	func_567(var_98_object, var_99_object, var_100_string, var_101_string, var_102_string); // 0x112 NEW_2
	var_9_object = var_98_object; // 0x113 TMov
	
Label_277:
	var_21_object = 0; // 0x115 SetNull
	goto Label_526; // 0x116 Jump
	
Label_279:
	var_103_string = "sobor_unload"; // 0x117 PushS
	var_104_bool = var_14_string == var_103_string; // 0x118 Eq
	if(var_104_bool == 0) goto Label_320; // 0x119 JumpB
	var_105_bool = var_1_bool; // 0x11a PushT
	if(var_105_bool == 0) goto Label_319; // 0x11b JumpB
	var_106_object = var_4_object; // 0x11c PushT
	if(var_106_object == 0) goto Label_288; // 0x11d JumpB
	Remove(); // 0x11e TObjFunc
	
Label_288:
	var_107_object = var_5_object; // 0x120 PushT
	if(var_107_object == 0) goto Label_293; // 0x121 JumpB
	var_108_string = "cleanup"; // 0x122 PushS
	Trigger(var_21_object, var_108_string); // 0x123 Func
	
Label_293:
	var_109_object = var_6_object; // 0x125 PushT
	if(var_109_object == 0) goto Label_298; // 0x126 JumpB
	var_110_string = "cleanup"; // 0x127 PushS
	Trigger(var_20_object, var_110_string); // 0x128 Func
	
Label_298:
	var_111_object = var_7_object; // 0x12a PushT
	if(var_111_object == 0) goto Label_303; // 0x12b JumpB
	var_112_string = "cleanup"; // 0x12c PushS
	Trigger(var_19_int, var_112_string); // 0x12d Func
	
Label_303:
	var_113_object = var_8_object; // 0x12f PushT
	if(var_113_object == 0) goto Label_308; // 0x130 JumpB
	var_114_string = "cleanup"; // 0x131 PushS
	Trigger(var_18_object, var_114_string); // 0x132 Func
	
Label_308:
	var_115_object = var_9_object; // 0x134 PushT
	if(var_115_object == 0) goto Label_313; // 0x135 JumpB
	var_116_string = "cleanup"; // 0x136 PushS
	Trigger(var_17_object, var_116_string); // 0x137 Func
	
Label_313:
	var_117_string = ""; var_118_bool = 0; // 0x139 PushV
	var_117_string = "sobor@door1"; // 0x13a MovS
	var_118_bool = 1; // 0x13b MovB
	func_603(var_117_string, var_118_bool); // 0x13c NEW_2
	var_3_bool = 0; // 0x13e TMovB
	
Label_319:
	goto Label_526; // 0x13f Jump
	
Label_320:
	var_119_string = "init_theater"; // 0x140 PushS
	var_120_bool = var_14_string == var_119_string; // 0x141 Eq
	if(var_120_bool == 0) goto Label_339; // 0x142 JumpB
	var_121_bool = 0; var_122_string = ""; // 0x143 PushV
	var_122_string = "NPC_Mark"; // 0x144 MovS
	func_632(var_121_bool, var_122_string); // 0x145 NEW_2
	var_126_string = ""; var_127_bool = 0; // 0x147 PushV
	var_126_string = "itheater@door1"; // 0x148 MovS
	var_127_bool = 1; // 0x149 MovB
	func_603(var_126_string, var_127_bool); // 0x14a NEW_2
	var_128_string = ""; var_129_bool = 0; // 0x14c PushV
	var_128_string = "theater@door1"; // 0x14d MovS
	var_129_bool = 0; // 0x14e MovB
	func_603(var_128_string, var_129_bool); // 0x14f NEW_2
	var_0_bool = 1; // 0x151 TMovB
	goto Label_526; // 0x152 Jump
	
Label_339:
	var_130_string = "theater_load"; // 0x153 PushS
	var_131_bool = var_14_string == var_130_string; // 0x154 Eq
	if(var_131_bool == 0) goto Label_354; // 0x155 JumpB
	var_132_bool = var_0_bool; // 0x156 PushT
	if(var_132_bool == 0) goto Label_353; // 0x157 JumpB
	var_3_bool = 1; // 0x158 TMovB
	var_133_object = Obj(); var_134_string = ""; // 0x159 PushV
	var_134_string = "quest_k12_01_theater_cutscene"; // 0x15a MovS
	func_556(var_133_object, var_134_string); // 0x15b NEW_2
	var_135_string = "k12q01TheaterIsVisited"; // 0x15d PushS
	var_136_int = 1; // 0x15e PushI
	SetVariable(var_135_string, var_136_int); // 0x15f Func
	
Label_353:
	goto Label_526; // 0x161 Jump
	
Label_354:
	var_137_string = "theater_cutscene_end"; // 0x162 PushS
	var_138_bool = var_14_string == var_137_string; // 0x163 Eq
	if(var_138_bool == 0) goto Label_378; // 0x164 JumpB
	var_139_string = "theater"; // 0x165 PushS
	GetSceneByName(var_22_object, var_139_string); // 0x166 Func
	var_140_object = Obj(); var_141_object = Obj(); var_142_string = ""; var_143_string = ""; var_144_string = ""; // 0x168 PushV
	var_141_object = var_22_object; // 0x169 Mov
	var_142_string = "pt_b12q01_birdmask"; // 0x16a MovS
	var_143_string = "pers_birdmask"; // 0x16b MovS
	var_144_string = "k12q01_tbirdmask.xml"; // 0x16c MovS
	func_567(var_140_object, var_141_object, var_142_string, var_143_string, var_144_string); // 0x16d NEW_2
	var_10_object = var_140_object; // 0x16e TMov
	var_145_object = Obj(); var_146_object = Obj(); var_147_string = ""; var_148_string = ""; var_149_string = ""; // 0x170 PushV
	var_146_object = var_22_object; // 0x171 Mov
	var_147_string = "pt_b12q01_whitemask"; // 0x172 MovS
	var_148_string = "pers_whitemask"; // 0x173 MovS
	var_149_string = "k12q01_twhitemask.xml"; // 0x174 MovS
	func_567(var_145_object, var_146_object, var_147_string, var_148_string, var_149_string); // 0x175 NEW_2
	var_11_object = var_145_object; // 0x176 TMov
	var_22_object = 0; // 0x178 SetNull
	goto Label_526; // 0x179 Jump
	
Label_378:
	var_150_string = "theater_unload"; // 0x17a PushS
	var_151_bool = var_14_string == var_150_string; // 0x17b Eq
	if(var_151_bool == 0) goto Label_400; // 0x17c JumpB
	var_152_bool = var_0_bool; // 0x17d PushT
	if(var_152_bool == 0) goto Label_399; // 0x17e JumpB
	var_153_object = var_10_object; // 0x17f PushT
	if(var_153_object == 0) goto Label_388; // 0x180 JumpB
	var_154_string = "cleanup"; // 0x181 PushS
	Trigger(var_16_object, var_154_string); // 0x182 Func
	
Label_388:
	var_155_object = var_11_object; // 0x184 PushT
	if(var_155_object == 0) goto Label_393; // 0x185 JumpB
	var_156_string = "cleanup"; // 0x186 PushS
	Trigger(var_15_object, var_156_string); // 0x187 Func
	
Label_393:
	var_157_string = ""; var_158_bool = 0; // 0x189 PushV
	var_157_string = "theater@door1"; // 0x18a MovS
	var_158_bool = 1; // 0x18b MovB
	func_603(var_157_string, var_158_bool); // 0x18c NEW_2
	var_3_bool = 0; // 0x18e TMovB
	
Label_399:
	goto Label_526; // 0x18f Jump
	
Label_400:
	var_159_string = "init_hidden_room"; // 0x190 PushS
	var_160_bool = var_14_string == var_159_string; // 0x191 Eq
	if(var_160_bool == 0) goto Label_430; // 0x192 JumpB
	var_161_string = ""; var_162_bool = 0; // 0x193 PushV
	var_161_string = "mnogogrannik_han@door1"; // 0x194 MovS
	var_162_bool = 0; // 0x195 MovB
	func_603(var_161_string, var_162_bool); // 0x196 NEW_2
	var_163_string = ""; var_164_bool = 0; // 0x198 PushV
	var_163_string = "mnogogrannik_han@door2"; // 0x199 MovS
	var_164_bool = 0; // 0x19a MovB
	func_603(var_163_string, var_164_bool); // 0x19b NEW_2
	var_165_string = ""; var_166_bool = 0; // 0x19d PushV
	var_165_string = "hidden_room@door1"; // 0x19e MovS
	var_166_bool = 0; // 0x19f MovB
	func_603(var_165_string, var_166_bool); // 0x1a0 NEW_2
	var_167_string = ""; var_168_bool = 0; // 0x1a2 PushV
	var_167_string = "imnogogrannik_han@door1"; // 0x1a3 MovS
	var_168_bool = 0; // 0x1a4 MovB
	func_603(var_167_string, var_168_bool); // 0x1a5 NEW_2
	var_169_string = ""; var_170_bool = 0; // 0x1a7 PushV
	var_169_string = "mnogogrannik@door1"; // 0x1a8 MovS
	var_170_bool = 0; // 0x1a9 MovB
	func_603(var_169_string, var_170_bool); // 0x1aa NEW_2
	var_2_bool = 1; // 0x1ac TMovB
	goto Label_526; // 0x1ad Jump
	
Label_430:
	var_171_string = "hidden_room_load"; // 0x1ae PushS
	var_172_bool = var_14_string == var_171_string; // 0x1af Eq
	if(var_172_bool == 0) goto Label_445; // 0x1b0 JumpB
	var_173_bool = var_2_bool; // 0x1b1 PushT
	if(var_173_bool == 0) goto Label_444; // 0x1b2 JumpB
	var_3_bool = 1; // 0x1b3 TMovB
	var_174_string = "k12q01ChildsAreVisited"; // 0x1b4 PushS
	var_175_int = 1; // 0x1b5 PushI
	SetVariable(var_174_string, var_175_int); // 0x1b6 Func
	var_176_object = Obj(); var_177_string = ""; // 0x1b8 PushV
	var_177_string = "quest_k12_01_hidden_room_cutscene"; // 0x1b9 MovS
	func_556(var_176_object, var_177_string); // 0x1ba NEW_2
	
Label_444:
	goto Label_526; // 0x1bc Jump
	
Label_445:
	var_178_string = "hidden_room_cutscene_end"; // 0x1bd PushS
	var_179_bool = var_14_string == var_178_string; // 0x1be Eq
	if(var_179_bool == 0) goto Label_469; // 0x1bf JumpB
	var_180_string = "hidden_room"; // 0x1c0 PushS
	GetSceneByName(var_23_object, var_180_string); // 0x1c1 Func
	var_181_object = Obj(); var_182_object = Obj(); var_183_string = ""; var_184_string = ""; var_185_string = ""; // 0x1c3 PushV
	var_182_object = var_23_object; // 0x1c4 Mov
	var_183_string = "pt_girl"; // 0x1c5 MovS
	var_184_string = "pers_littlegirl2"; // 0x1c6 MovS
	var_185_string = "k12q01_littlegirl.xml"; // 0x1c7 MovS
	func_567(var_181_object, var_182_object, var_183_string, var_184_string, var_185_string); // 0x1c8 NEW_2
	var_12_object = var_181_object; // 0x1c9 TMov
	var_186_object = Obj(); var_187_object = Obj(); var_188_string = ""; var_189_string = ""; var_190_string = ""; // 0x1cb PushV
	var_187_object = var_23_object; // 0x1cc Mov
	var_188_string = "pt_boy"; // 0x1cd MovS
	var_189_string = "pers_littleboy2"; // 0x1ce MovS
	var_190_string = "k12q01_littleboy.xml"; // 0x1cf MovS
	func_567(var_186_object, var_187_object, var_188_string, var_189_string, var_190_string); // 0x1d0 NEW_2
	var_13_object = var_186_object; // 0x1d1 TMov
	var_23_object = 0; // 0x1d3 SetNull
	goto Label_526; // 0x1d4 Jump
	
Label_469:
	var_191_string = "hidden_room_unload"; // 0x1d5 PushS
	var_192_bool = var_14_string == var_191_string; // 0x1d6 Eq
	if(var_192_bool == 0) goto Label_496; // 0x1d7 JumpB
	var_193_bool = var_2_bool; // 0x1d8 PushT
	if(var_193_bool == 0) goto Label_495; // 0x1d9 JumpB
	var_194_string = ""; var_195_bool = 0; // 0x1da PushV
	var_194_string = "hidden_room@door1"; // 0x1db MovS
	var_195_bool = 1; // 0x1dc MovB
	func_603(var_194_string, var_195_bool); // 0x1dd NEW_2
	var_196_string = ""; var_197_bool = 0; // 0x1df PushV
	var_196_string = "mnogogrannik@door1"; // 0x1e0 MovS
	var_197_bool = 1; // 0x1e1 MovB
	func_603(var_196_string, var_197_bool); // 0x1e2 NEW_2
	var_3_bool = 0; // 0x1e4 TMovB
	var_198_bool = 0; // 0x1e5 PushV
	func_1013(var_198_bool); // 0x1e6 NEW_2
	if(var_198_bool == 0) goto Label_495; // 0x1e8 JumpB
	var_306_bool = 0; var_307_string = ""; var_308_string = ""; var_309_string = ""; // 0x1e9 PushV
	var_307_string = "volonteers_klara"; // 0x1ea MovS
	var_308_string = "theater_letter"; // 0x1eb MovS
	var_309_string = ""; // 0x1ec MovS
	func_620(var_306_bool, var_307_string, var_308_string, var_309_string); // 0x1ed NEW_2
	
Label_495:
	goto Label_526; // 0x1ef Jump
	
Label_496:
	var_313_string = "cleanup"; // 0x1f0 PushS
	var_314_bool = var_14_string == var_313_string; // 0x1f1 Eq
	if(var_314_bool == 0) goto Label_513; // 0x1f2 JumpB
	var_315_string = "k12q01"; // 0x1f3 PushS
	GetVariable(var_315_string, var_24_int); // 0x1f4 Func
	var_316_int = 1000; // 0x1f6 PushI
	var_317_bool = var_24_int != var_316_int; // 0x1f7 Neq
	if(var_317_bool == 0) goto Label_509; // 0x1f8 JumpB
	func_527(); // 0x1fa NEW_2
	goto Label_512; // 0x1fc Jump
	
Label_512:
	goto Label_526; // 0x200 Jump
	
Label_509:
	func_543(); // 0x1fe NEW_2
	
Label_513:
	var_323_string = "fail"; // 0x201 PushS
	var_324_bool = var_14_string == var_323_string; // 0x202 Eq
	if(var_324_bool == 0) goto Label_520; // 0x203 JumpB
	func_527(); // 0x205 NEW_2
	goto Label_526; // 0x207 Jump
	
Label_520:
	var_325_string = "completed"; // 0x208 PushS
	var_326_bool = var_14_string == var_325_string; // 0x209 Eq
	if(var_326_bool == 0) goto Label_526; // 0x20a JumpB
	func_535(); // 0x20c NEW_2
}


main(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object)
{
	var_14_object = Obj(); var_15_float = 0; var_16_object = Obj(); var_17_float = 0; // 0x12 PushV
	var_1_bool = 0; // 0x13 TMovB
	var_0_bool = 0; // 0x14 TMovB
	var_2_bool = 0; // 0x15 TMovB
	var_3_bool = 0; // 0x16 TMovB
	func_1271(); // 0x18 NEW_2
	var_36_int = 0; // 0x1a PushI
	var_37_int = 288; // 0x1b PushI
	SetTimeEvent(var_36_int, var_37_int); // 0x1c Func
	var_38_int = 0; // 0x1e PushV
	func_644(var_38_int); // 0x1f NEW_2
	var_43_int = 8; // 0x21 PushI
	var_44_bool = var_38_int >= var_43_int; // 0x22 GE
	if(var_44_bool == 0) goto Label_47; // 0x23 JumpB
	var_45_bool = 0; // 0x24 PushV
	func_990(var_45_bool); // 0x25 NEW_2
	if(var_45_bool == 0) goto Label_46; // 0x27 JumpB
	var_158_bool = 0; var_159_string = ""; var_160_string = ""; var_161_string = ""; // 0x28 PushV
	var_159_string = "volonteers_klara"; // 0x29 MovS
	var_160_string = "childs_letter"; // 0x2a MovS
	var_161_string = ""; // 0x2b MovS
	func_620(var_158_bool, var_159_string, var_160_string, var_161_string); // 0x2c NEW_2
	
Label_46:
	goto Label_51; // 0x2e Jump
	
Label_51:
	var_165_int = 0; // 0x33 PushV
	var_165_int = 0; // 0x34 MovI
	func_1032(var_165_int); // 0x35 NEW_2
	func_652(); // 0x38 NEW_2
	func_665(); // 0x3b NEW_2
	GetMainOutdoorScene(var_16_object); // 0x3d Func
	var_198_object = Obj(); var_199_object = Obj(); var_200_string = ""; var_201_string = ""; var_202_string = ""; // 0x3f PushV
	var_199_object = var_16_object; // 0x40 Mov
	var_200_string = "pt_b12q01_birdmask_s"; // 0x41 MovS
	var_201_string = "pers_birdmask"; // 0x42 MovS
	var_202_string = "k12q01_birdmask_s.xml"; // 0x43 MovS
	func_585(var_199_object, var_200_string, var_201_string, var_202_string); // 0x44 NEW_2
	var_4_object = var_198_object; // 0x45 TMov
	var_216_string = ""; var_217_bool = 0; // 0x47 PushV
	var_216_string = "sobor@door1"; // 0x48 MovS
	var_217_bool = 1; // 0x49 MovB
	func_603(var_216_string, var_217_bool); // 0x4a NEW_2
	var_218_string = ""; var_219_bool = 0; // 0x4c PushV
	var_218_string = "hidden_room@door1"; // 0x4d MovS
	var_219_bool = 1; // 0x4e MovB
	func_603(var_218_string, var_219_bool); // 0x4f NEW_2
	var_220_string = ""; var_221_bool = 0; // 0x51 PushV
	var_220_string = "mnogogrannik@door1"; // 0x52 MovS
	var_221_bool = 1; // 0x53 MovB
	func_603(var_220_string, var_221_bool); // 0x54 NEW_2
	var_222_string = ""; var_223_bool = 0; // 0x56 PushV
	var_222_string = "cot_eva@door1"; // 0x57 MovS
	var_223_bool = 0; // 0x58 MovB
	func_603(var_222_string, var_223_bool); // 0x59 NEW_2
	var_224_string = ""; var_225_bool = 0; // 0x5b PushV
	var_224_string = "termitnik2@door1"; // 0x5c MovS
	var_225_bool = 0; // 0x5d MovB
	func_603(var_224_string, var_225_bool); // 0x5e NEW_2
	var_226_string = ""; var_227_bool = 0; // 0x60 PushV
	var_226_string = "uprava_admin@door1"; // 0x61 MovS
	var_227_bool = 0; // 0x62 MovB
	func_603(var_226_string, var_227_bool); // 0x63 NEW_2
	GetGameTime(var_17_float); // 0x65 Func
	var_228_int = 271; // 0x67 PushI
	var_229_bool = var_17_float < var_228_int; // 0x68 LT
	if(var_229_bool == 0) goto Label_116; // 0x69 JumpB
	var_230_string = ""; var_231_bool = 0; // 0x6a PushV
	var_230_string = "theater@door1"; // 0x6b MovS
	var_231_bool = 0; // 0x6c MovB
	func_603(var_230_string, var_231_bool); // 0x6d NEW_2
	var_232_int = 2; // 0x6f PushI
	var_233_int = 271; // 0x70 PushI
	SetTimeEvent(var_232_int, var_233_int); // 0x71 Func
	goto Label_119; // 0x73 Jump
	
Label_119:
	Hold(); // 0x77 Func
	goto Label_119; // 0x79 Jump
	
Label_116:
	func_0(var_17_float); // 0x75 NEW_2
	
Label_47:
	var_243_int = 1; // 0x2f PushI
	var_244_int = 272; // 0x30 PushI
	SetTimeEvent(var_243_int, var_244_int); // 0x31 Func
}


func_0(var_10_object)
{
	var_234_object = Obj(); var_235_object = Obj(); // 0x0 PushV
	GetMainOutdoorScene(var_235_object); // 0x1 Func
	var_236_string = ""; var_237_bool = 0; // 0x3 PushV
	var_236_string = "theater@door1"; // 0x4 MovS
	var_237_bool = 1; // 0x5 MovB
	func_603(var_236_string, var_237_bool); // 0x6 NEW_2
	var_238_object = Obj(); var_239_object = Obj(); var_240_string = ""; var_241_string = ""; var_242_string = ""; // 0x8 PushV
	var_239_object = var_235_object; // 0x9 Mov
	var_240_string = "pt_b12q01_birdmask_t"; // 0xa MovS
	var_241_string = "pers_birdmask"; // 0xb MovS
	var_242_string = "k12q01_birdmask_t.xml"; // 0xc MovS
	func_585(var_239_object, var_240_string, var_241_string, var_242_string); // 0xd NEW_2
	var_10_object = var_238_object; // 0xe TMov
	return 2; // 0x10 Return
}


func_644(var_38_int)
{
	var_39_float = 0; var_40_float = 0; // 0x284 PushV
	GetGameTime(var_40_float); // 0x285 Func
	var_41_int = 0; // 0x287 PushV
	var_41_int = var_40_float; // 0x288 Mov
	var_42_int = 24; // 0x289 PushI
	var_38_int = var_41_int % var_42_int; // 0x28a Mod2
	return 2; // 0x28b Return
}


func_1032(var_165_int)
{
	var_166_string = "game_final"; // 0x409 PushS
	SetVariable(var_166_string, var_165_int); // 0x40a Func
	return 0; // 0x40c Return
}


func_652()
{
	var_167_object = Obj(); var_168_object = Obj(); // 0x28c PushV
	var_169_int = 729; // 0x28d PushI
	var_170_int = 1; // 0x28e PushI
	var_171_int = 539359; // 0x28f PushI
	CreateDiaryEntry(var_168_object, var_169_int, var_170_int, var_171_int); // 0x290 Func
	var_172_bool = 0; var_173_object = Obj(); var_174_int = 0; // 0x292 PushV
	var_173_object = var_168_object; // 0x293 Mov
	var_174_int = -1; // 0x294 MovI
	func_691(var_172_bool, var_173_object, var_174_int); // 0x295 NEW_2
	return 2; // 0x297 Return
}


func_1037(var_68_int)
{
	var_69_int = 0; var_70_int = 0; // 0x40d PushV
	var_71_string = "game_final"; // 0x40e PushS
	GetVariable(var_71_string, var_70_int); // 0x40f Func
	var_68_int = var_70_int; // 0x411 Mov
	return 2; // 0x412 Return
}


func_527()
{
	var_318_string = "k12q01"; // 0x20f PushS
	var_319_int = -1; // 0x210 PushI
	SetVariable(var_318_string, var_319_int); // 0x211 Func
	func_543(); // 0x214 NEW_2
	return 0; // 0x216 Return
}


func_914(var_93_bool)
{
	var_94_object = Obj(); var_95_int = 0; var_96_int = 0; var_97_int = 0; var_98_object = Obj(); var_99_int = 0; var_100_int = 0; var_101_int = 0; // 0x392 PushV
	CreateIntVector(var_98_object); // 0x393 Func
	var_102_object = Obj(); var_103_bool = 0; var_104_int = 0; // 0x395 PushV
	var_102_object = var_98_object; // 0x396 Mov
	var_103_bool = 0; // 0x397 MovB
	var_104_int = -1; // 0x398 MovI
	func_791(var_103_bool, var_104_int); // 0x399 NEW_2
	size(var_99_int); // 0x39b ObjFunc
	var_100_int = 0; // 0x39d MovI
	
Label_926:
	var_117_bool = var_100_int < var_99_int; // 0x39e LT
	if(var_117_bool == 0) goto Label_949; // 0x39f JumpB
	get(var_101_int, var_100_int); // 0x3a0 ObjFunc
	var_118_bool = 0; // 0x3a2 PushV
	var_118_bool = 1; // 0x3a3 MovB
	var_119_bool = 0; var_120_int = 0; // 0x3a4 PushV
	var_120_int = var_101_int; // 0x3a5 Mov
	func_866(var_119_bool, var_120_int); // 0x3a6 NEW_2
	if(var_119_bool == 0) goto Label_943; // 0x3a8 JumpB
	var_121_bool = 0; var_122_int = 0; // 0x3a9 PushV
	var_122_int = var_101_int; // 0x3aa Mov
	func_856(var_121_bool, var_122_int); // 0x3ab NEW_2
	if(var_121_bool == 0) goto Label_943; // 0x3ad JumpB
	var_118_bool = 0; // 0x3ae MovB
	
Label_943:
	if(var_118_bool == 0) goto Label_946; // 0x3af JumpB
	var_93_bool = 0; // 0x3b0 MovB
	return 8; // 0x3b1 Return
	
Label_946:
	var_123_int = 1; // 0x3b2 PushI
	var_100_int = var_100_int + var_123_int; // 0x3b3 Add2
	goto Label_926; // 0x3b4 Jump
	
Label_949:
	var_93_bool = 1; // 0x3b5 MovB
	return 8; // 0x3b6 Return
}


func_1043()
{
	var_31_int = 0; var_32_int = 0; var_33_bool = 0; var_34_bool = 0; var_35_int = 0; var_36_int = 0; var_37_int = 0; var_38_bool = 0; var_39_bool = 0; var_40_int = 0; var_41_int = 0; var_42_bool = 0; var_43_bool = 0; var_44_int = 0; var_45_int = 0; var_46_int = 0; var_47_bool = 0; var_48_bool = 0; // 0x413 PushV
	func_725(); // 0x415 NEW_2
	var_67_int = 0; // 0x417 PushV
	func_719(var_67_int); // 0x418 NEW_2
	var_40_int = var_67_int; // 0x419 Mov
	var_68_int = 0; // 0x41b PushV
	func_1037(var_68_int); // 0x41c NEW_2
	var_41_int = var_68_int; // 0x41d Mov
	var_42_bool = 0; // 0x41f MovB
	var_43_bool = 0; // 0x420 MovB
	var_72_int = 0; // 0x421 PushI
	var_73_bool = var_40_int == var_72_int; // 0x422 Eq
	if(var_73_bool == 0) goto Label_1071; // 0x423 JumpB
	var_74_string = "d12q01ChildsAreVisited"; // 0x424 PushS
	GetVariable(var_74_string, var_44_int); // 0x425 Func
	var_75_int = 0; // 0x427 PushI
	var_42_bool = var_44_int != var_75_int; // 0x428 Neq2
	var_76_string = "d12q01TheaterIsVisited"; // 0x429 PushS
	GetVariable(var_76_string, var_44_int); // 0x42a Func
	var_77_int = 0; // 0x42c PushI
	var_43_bool = var_44_int != var_77_int; // 0x42d Neq2
	goto Label_1098; // 0x42e Jump
	
Label_1098:
	var_47_bool = 0; // 0x44a MovB
	var_78_bool = 0; // 0x44b PushV
	var_78_bool = 0; // 0x44c MovB
	var_79_int = 0; // 0x44d PushI
	var_80_bool = var_40_int == var_79_int; // 0x44e Eq
	if(var_80_bool == 0) goto Label_1108; // 0x44f JumpB
	var_81_int = 2; // 0x450 PushI
	var_82_bool = var_41_int == var_81_int; // 0x451 Eq
	if(var_82_bool == 0) goto Label_1108; // 0x452 JumpB
	var_78_bool = 1; // 0x453 MovB
	
Label_1108:
	if(var_78_bool == 0) goto Label_1110; // 0x454 JumpB
	var_47_bool = 1; // 0x455 MovB
	
Label_1110:
	var_83_bool = 0; // 0x456 PushV
	var_83_bool = 0; // 0x457 MovB
	var_84_int = 1; // 0x458 PushI
	var_85_bool = var_40_int == var_84_int; // 0x459 Eq
	if(var_85_bool == 0) goto Label_1119; // 0x45a JumpB
	var_86_int = 1; // 0x45b PushI
	var_87_bool = var_41_int == var_86_int; // 0x45c Eq
	if(var_87_bool == 0) goto Label_1119; // 0x45d JumpB
	var_83_bool = 1; // 0x45e MovB
	
Label_1119:
	if(var_83_bool == 0) goto Label_1121; // 0x45f JumpB
	var_47_bool = 1; // 0x460 MovB
	
Label_1121:
	var_88_bool = 0; // 0x461 PushV
	var_88_bool = 0; // 0x462 MovB
	var_89_int = 2; // 0x463 PushI
	var_90_bool = var_40_int == var_89_int; // 0x464 Eq
	if(var_90_bool == 0) goto Label_1130; // 0x465 JumpB
	var_91_int = 3; // 0x466 PushI
	var_92_bool = var_41_int == var_91_int; // 0x467 Eq
	if(var_92_bool == 0) goto Label_1130; // 0x468 JumpB
	var_88_bool = 1; // 0x469 MovB
	
Label_1130:
	if(var_88_bool == 0) goto Label_1132; // 0x46a JumpB
	var_47_bool = 1; // 0x46b MovB
	
Label_1132:
	var_48_bool = 0; // 0x46c MovB
	var_93_bool = 0; // 0x46d PushV
	var_93_bool = 0; // 0x46e MovB
	var_94_bool = 0; // 0x46f PushV
	var_94_bool = 0; // 0x470 MovB
	var_95_int = 4; // 0x471 PushI
	var_96_bool = var_41_int == var_95_int; // 0x472 Eq
	if(var_96_bool == 0) goto Label_1143; // 0x473 JumpB
	var_97_bool = var_42_bool == 0; // 0x474 Not
	if(var_97_bool == 0) goto Label_1143; // 0x475 JumpB
	var_94_bool = 1; // 0x476 MovB
	
Label_1143:
	if(var_94_bool == 0) goto Label_1147; // 0x477 JumpB
	var_98_bool = var_43_bool == 0; // 0x478 Not
	if(var_98_bool == 0) goto Label_1147; // 0x479 JumpB
	var_93_bool = 1; // 0x47a MovB
	
Label_1147:
	if(var_93_bool == 0) goto Label_1149; // 0x47b JumpB
	var_48_bool = 1; // 0x47c MovB
	
Label_1149:
	var_99_bool = 0; // 0x47d PushV
	var_99_bool = 0; // 0x47e MovB
	var_100_bool = 0; // 0x47f PushV
	var_100_bool = 0; // 0x480 MovB
	var_101_bool = var_47_bool == 0; // 0x481 Not
	if(var_101_bool == 0) goto Label_1158; // 0x482 JumpB
	var_102_bool = var_42_bool; // 0x483 Push
	if(var_102_bool == 0) goto Label_1158; // 0x484 JumpB
	var_100_bool = 1; // 0x485 MovB
	
Label_1158:
	if(var_100_bool == 0) goto Label_1162; // 0x486 JumpB
	var_103_bool = var_43_bool == 0; // 0x487 Not
	if(var_103_bool == 0) goto Label_1162; // 0x488 JumpB
	var_99_bool = 1; // 0x489 MovB
	
Label_1162:
	if(var_99_bool == 0) goto Label_1164; // 0x48a JumpB
	var_48_bool = 1; // 0x48b MovB
	
Label_1164:
	var_104_bool = 0; // 0x48c PushV
	var_104_bool = 0; // 0x48d MovB
	var_105_bool = 0; // 0x48e PushV
	var_105_bool = 0; // 0x48f MovB
	var_106_bool = var_47_bool; // 0x490 Push
	if(var_106_bool == 0) goto Label_1173; // 0x491 JumpB
	var_107_bool = var_42_bool; // 0x492 Push
	if(var_107_bool == 0) goto Label_1173; // 0x493 JumpB
	var_105_bool = 1; // 0x494 MovB
	
Label_1173:
	if(var_105_bool == 0) goto Label_1177; // 0x495 JumpB
	var_108_bool = var_43_bool; // 0x496 Push
	if(var_108_bool == 0) goto Label_1177; // 0x497 JumpB
	var_104_bool = 1; // 0x498 MovB
	
Label_1177:
	if(var_104_bool == 0) goto Label_1179; // 0x499 JumpB
	var_48_bool = 1; // 0x49a MovB
	
Label_1179:
	var_109_string = "PlayFinalMovie"; // 0x49b PushS
	Trace(var_109_string); // 0x49c Func
	var_110_int = 0; // 0x49e PushV
	func_1037(var_110_int); // 0x49f NEW_2
	var_111_int = 1; // 0x4a1 PushI
	var_112_bool = var_110_int == var_111_int; // 0x4a2 Eq
	if(var_112_bool == 0) goto Label_1201; // 0x4a3 JumpB
	var_113_string = "fin_termit"; // 0x4a4 PushS
	Trace(var_113_string); // 0x4a5 Func
	var_114_bool = var_48_bool; // 0x4a7 Push
	if(var_114_bool == 0) goto Label_1197; // 0x4a8 JumpB
	var_115_string = "gameover_termit_chudo.xml"; // 0x4a9 PushS
	GameOver(var_115_string); // 0x4aa Func
	goto Label_1200; // 0x4ac Jump
	
Label_1200:
	goto Label_1251; // 0x4b0 Jump
	
Label_1251:
	return 18; // 0x4e3 Return
	
Label_1197:
	var_116_string = "gameover_termit.xml"; // 0x4ad PushS
	GameOver(var_116_string); // 0x4ae Func
	
Label_1201:
	var_117_int = 0; // 0x4b1 PushV
	func_1037(var_117_int); // 0x4b2 NEW_2
	var_118_int = 2; // 0x4b4 PushI
	var_119_bool = var_117_int == var_118_int; // 0x4b5 Eq
	if(var_119_bool == 0) goto Label_1220; // 0x4b6 JumpB
	var_120_string = "fin_utop"; // 0x4b7 PushS
	Trace(var_120_string); // 0x4b8 Func
	var_121_bool = var_48_bool; // 0x4ba Push
	if(var_121_bool == 0) goto Label_1216; // 0x4bb JumpB
	var_122_string = "gameover_utopist_chudo.xml"; // 0x4bc PushS
	GameOver(var_122_string); // 0x4bd Func
	goto Label_1219; // 0x4bf Jump
	
Label_1219:
	goto Label_1251; // 0x4c3 Jump
	
Label_1216:
	var_123_string = "gameover_utopist.xml"; // 0x4c0 PushS
	GameOver(var_123_string); // 0x4c1 Func
	
Label_1220:
	var_124_int = 0; // 0x4c4 PushV
	func_1037(var_124_int); // 0x4c5 NEW_2
	var_125_int = 3; // 0x4c7 PushI
	var_126_bool = var_124_int == var_125_int; // 0x4c8 Eq
	if(var_126_bool == 0) goto Label_1239; // 0x4c9 JumpB
	var_127_string = "fin_smiren"; // 0x4ca PushS
	Trace(var_127_string); // 0x4cb Func
	var_128_bool = var_48_bool; // 0x4cd Push
	if(var_128_bool == 0) goto Label_1235; // 0x4ce JumpB
	var_129_string = "gameover_smirennik_chudo.xml"; // 0x4cf PushS
	GameOver(var_129_string); // 0x4d0 Func
	goto Label_1238; // 0x4d2 Jump
	
Label_1238:
	goto Label_1251; // 0x4d6 Jump
	
Label_1235:
	var_130_string = "gameover_smirennik.xml"; // 0x4d3 PushS
	GameOver(var_130_string); // 0x4d4 Func
	
Label_1239:
	var_131_string = "fin_beda"; // 0x4d7 PushS
	Trace(var_131_string); // 0x4d8 Func
	var_132_bool = var_48_bool; // 0x4da Push
	if(var_132_bool == 0) goto Label_1248; // 0x4db JumpB
	var_133_string = "gameover_beda_chudo.xml"; // 0x4dc PushS
	GameOver(var_133_string); // 0x4dd Func
	goto Label_1251; // 0x4df Jump
	
Label_1248:
	var_134_string = "gameover_beda.xml"; // 0x4e0 PushS
	GameOver(var_134_string); // 0x4e1 Func
	
Label_1071:
	var_135_int = 1; // 0x42f PushI
	var_136_bool = var_40_int == var_135_int; // 0x430 Eq
	if(var_136_bool == 0) goto Label_1085; // 0x431 JumpB
	var_137_string = "b12q01ChildsAreVisited"; // 0x432 PushS
	GetVariable(var_137_string, var_45_int); // 0x433 Func
	var_138_int = 0; // 0x435 PushI
	var_42_bool = var_45_int != var_138_int; // 0x436 Neq2
	var_139_string = "b12q01TheaterIsVisited"; // 0x437 PushS
	GetVariable(var_139_string, var_45_int); // 0x438 Func
	var_140_int = 0; // 0x43a PushI
	var_43_bool = var_45_int != var_140_int; // 0x43b Neq2
	goto Label_1098; // 0x43c Jump
	
Label_1085:
	var_141_int = 2; // 0x43d PushI
	var_142_bool = var_40_int == var_141_int; // 0x43e Eq
	if(var_142_bool == 0) goto Label_1098; // 0x43f JumpB
	var_143_string = "k12q01ChildsAreVisited"; // 0x440 PushS
	GetVariable(var_143_string, var_46_int); // 0x441 Func
	var_144_int = 0; // 0x443 PushI
	var_42_bool = var_46_int != var_144_int; // 0x444 Neq2
	var_145_string = "k12q01TheaterIsVisited"; // 0x445 PushS
	GetVariable(var_145_string, var_46_int); // 0x446 Func
	var_146_int = 0; // 0x448 PushI
	var_43_bool = var_46_int != var_146_int; // 0x449 Neq2
}


func_791(var_103_bool, var_104_int)
{
	var_105_int = 6; // 0x318 PushI
	add(var_105_int); // 0x319 ObjFunc
	var_106_int = 26; // 0x31b PushI
	add(var_106_int); // 0x31c ObjFunc
	var_107_int = 2; // 0x31e PushI
	add(var_107_int); // 0x31f ObjFunc
	var_108_int = 22; // 0x321 PushI
	add(var_108_int); // 0x322 ObjFunc
	var_109_bool = 0; // 0x324 PushB
	var_110_bool = var_103_bool == var_109_bool; // 0x325 Eq
	if(var_110_bool == 0) goto Label_817; // 0x326 JumpB
	var_111_int = 15; // 0x327 PushI
	add(var_111_int); // 0x328 ObjFunc
	var_112_int = 5; // 0x32a PushI
	add(var_112_int); // 0x32b ObjFunc
	var_113_int = 16; // 0x32d PushI
	add(var_113_int); // 0x32e ObjFunc
	goto Label_823; // 0x330 Jump
	
Label_823:
	return 0; // 0x337 Return
	
Label_817:
	var_114_int = 0; // 0x331 PushI
	var_115_bool = var_104_int != var_114_int; // 0x332 Neq
	if(var_115_bool == 0) goto Label_823; // 0x333 JumpB
	var_116_int = 15; // 0x334 PushI
	add(var_116_int); // 0x335 ObjFunc
}


func_535()
{
	var_327_string = "k12q01"; // 0x217 PushS
	var_328_int = 1000; // 0x218 PushI
	SetVariable(var_327_string, var_328_int); // 0x219 Func
	func_543(); // 0x21c NEW_2
	return 0; // 0x21e Return
}


func_665()
{
	var_190_object = Obj(); var_191_object = Obj(); // 0x299 PushV
	var_192_int = 735; // 0x29a PushI
	var_193_int = 1; // 0x29b PushI
	var_194_int = 539365; // 0x29c PushI
	CreateDiaryEntry(var_191_object, var_192_int, var_193_int, var_194_int); // 0x29d Func
	var_195_bool = 0; var_196_object = Obj(); var_197_int = 0; // 0x29f PushV
	var_196_object = var_191_object; // 0x2a0 Mov
	var_197_int = 729; // 0x2a1 MovI
	func_691(var_195_bool, var_196_object, var_197_int); // 0x2a2 NEW_2
	return 2; // 0x2a4 Return
}


func_543()
{
	EventDisable(26); // 0x21f EventDisable
	var_320_object = Obj(); // 0x220 PushV
	func_550(var_320_object); // 0x221 NEW_2
	RemoveActor(var_320_object); // 0x223 Func
	return 0; // 0x225 Return
}


func_550(var_320_object)
{
	var_321_object = Obj(); var_322_object = Obj(); // 0x226 PushV
	self(var_322_object); // 0x227 Func
	var_320_object = var_322_object; // 0x229 Mov
	return 2; // 0x22a Return
}


func_678(var_181_object)
{
	var_182_object = Obj(); var_183_object = Obj(); // 0x2a6 PushV
	GetDiaryRoot(var_183_object); // 0x2a7 Func
	var_184_bool = var_183_object == 0; // 0x2a9 Not
	if(var_184_bool == 0) goto Label_688; // 0x2aa JumpB
	var_185_string = "Can't retrieve diary root"; // 0x2ab PushS
	Trace(var_185_string); // 0x2ac Func
	var_181_object = 0; // 0x2ae MovB
	return 2; // 0x2af Return
	
Label_688:
	var_181_object = var_183_object; // 0x2b0 Mov
	return 2; // 0x2b1 Return
}


func_556(var_44_object, var_45_string)
{
	var_46_object = Obj(); var_47_object = Obj(); var_48_object = Obj(); var_49_object = Obj(); // 0x22c PushV
	GetMainOutdoorScene(var_48_object); // 0x22d Func
	var_50_string = ".bin"; // 0x22f PushS
	var_51_int = var_45_string + var_50_string; // 0x230 Add
	AddBlankActor(var_49_object, var_48_object, var_45_string, var_51_int); // 0x231 Func
	var_44_object = var_49_object; // 0x233 Mov
	return 4; // 0x234 Return
}


func_691(var_172_bool, var_173_object, var_174_int)
{
	var_175_object = Obj(); var_176_object = Obj(); var_177_int = 0; var_178_object = Obj(); var_179_object = Obj(); var_180_int = 0; // 0x2b3 PushV
	var_181_object = Obj(); // 0x2b4 PushV
	func_678(var_181_object); // 0x2b5 NEW_2
	var_178_object = var_181_object; // 0x2b6 Mov
	Find(var_174_int, var_179_object); // 0x2b8 ObjFunc
	var_186_bool = var_179_object == 0; // 0x2ba Not
	if(var_186_bool == 0) goto Label_706; // 0x2bb JumpB
	var_187_string = "Can't find diary parent with id: "; // 0x2bc PushS
	var_188_int = var_187_string + var_174_int; // 0x2bd Add
	Trace(var_188_int); // 0x2be Func
	var_172_bool = 0; // 0x2c0 MovB
	return 6; // 0x2c1 Return
	
Label_706:
	AddChild(var_173_object); // 0x2c2 ObjFunc
	var_189_int = 7; // 0x2c4 PushI
	SendWorldWndMessage(var_189_int); // 0x2c5 Func
	GetCategory(var_180_int); // 0x2c7 ObjFunc
	SetDiarySection(var_180_int); // 0x2c9 Func
	var_172_bool = 0; // 0x2cb MovB
	return 6; // 0x2cc Return
}


func_567(var_55_object, var_56_object, var_57_string, var_58_string, var_59_string)
{
	var_60_bool = 0; var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_object = Obj(); var_64_bool = 0; var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_object = Obj(); // 0x237 PushV
	GetLocator(var_57_string, var_64_bool, var_65_cvector, var_66_cvector); // 0x238 ObjFunc
	var_68_bool = var_64_bool == 0; // 0x23a Not
	if(var_68_bool == 0) goto Label_580; // 0x23b JumpB
	var_69_string = "Locator "; // 0x23c PushS
	var_70_int = var_69_string + var_57_string; // 0x23d Add
	var_71_string = " doesn't exist"; // 0x23e PushS
	var_72_int = var_70_int + var_71_string; // 0x23f Add
	Trace(var_72_int); // 0x240 Func
	var_67_object = 0; // 0x242 SetNull
	goto Label_582; // 0x243 Jump
	
Label_582:
	var_55_object = var_67_object; // 0x246 Mov
	return 8; // 0x247 Return
	
Label_580:
	AddActor(var_67_object, var_58_string, var_56_object, var_65_cvector, var_66_cvector, var_59_string); // 0x244 Func
}


func_952(var_48_bool)
{
	var_49_object = Obj(); var_50_int = 0; var_51_int = 0; var_52_int = 0; var_53_object = Obj(); var_54_int = 0; var_55_int = 0; var_56_int = 0; // 0x3b8 PushV
	CreateIntVector(var_53_object); // 0x3b9 Func
	var_57_object = Obj(); var_58_bool = 0; var_59_int = 0; // 0x3bb PushV
	var_57_object = var_53_object; // 0x3bc Mov
	var_58_bool = 0; // 0x3bd MovB
	var_59_int = -1; // 0x3be MovI
	func_824(var_59_int); // 0x3bf NEW_2
	size(var_54_int); // 0x3c1 ObjFunc
	var_55_int = 0; // 0x3c3 MovI
	
Label_964:
	var_71_bool = var_55_int < var_54_int; // 0x3c4 LT
	if(var_71_bool == 0) goto Label_987; // 0x3c5 JumpB
	get(var_56_int, var_55_int); // 0x3c6 ObjFunc
	var_72_bool = 0; // 0x3c8 PushV
	var_72_bool = 1; // 0x3c9 MovB
	var_73_bool = 0; var_74_int = 0; // 0x3ca PushV
	var_74_int = var_56_int; // 0x3cb Mov
	func_866(var_73_bool, var_74_int); // 0x3cc NEW_2
	if(var_73_bool == 0) goto Label_981; // 0x3ce JumpB
	var_82_bool = 0; var_83_int = 0; // 0x3cf PushV
	var_83_int = var_56_int; // 0x3d0 Mov
	func_856(var_82_bool, var_83_int); // 0x3d1 NEW_2
	if(var_82_bool == 0) goto Label_981; // 0x3d3 JumpB
	var_72_bool = 0; // 0x3d4 MovB
	
Label_981:
	if(var_72_bool == 0) goto Label_984; // 0x3d5 JumpB
	var_48_bool = 0; // 0x3d6 MovB
	return 8; // 0x3d7 Return
	
Label_984:
	var_91_int = 1; // 0x3d8 PushI
	var_55_int = var_55_int + var_91_int; // 0x3d9 Add2
	goto Label_964; // 0x3da Jump
	
Label_987:
	var_48_bool = 1; // 0x3db MovB
	return 8; // 0x3dc Return
}


func_824(var_58_bool)
{
	var_60_int = 7; // 0x339 PushI
	add(var_60_int); // 0x33a ObjFunc
	var_61_int = 23; // 0x33c PushI
	add(var_61_int); // 0x33d ObjFunc
	var_62_int = 21; // 0x33f PushI
	add(var_62_int); // 0x340 ObjFunc
	var_63_int = 9; // 0x342 PushI
	add(var_63_int); // 0x343 ObjFunc
	var_64_int = 3; // 0x345 PushI
	add(var_64_int); // 0x346 ObjFunc
	var_65_int = 1; // 0x348 PushI
	add(var_65_int); // 0x349 ObjFunc
	var_66_int = 11; // 0x34b PushI
	add(var_66_int); // 0x34c ObjFunc
	var_67_int = 13; // 0x34e PushI
	add(var_67_int); // 0x34f ObjFunc
	var_68_bool = 0; // 0x351 PushB
	var_69_bool = var_58_bool == var_68_bool; // 0x352 Eq
	if(var_69_bool == 0) goto Label_855; // 0x353 JumpB
	var_70_int = 25; // 0x354 PushI
	add(var_70_int); // 0x355 ObjFunc
	
Label_855:
	return 0; // 0x357 Return
}


func_585(var_198_object, var_200_string, var_201_string, var_202_string)
{
	var_203_bool = 0; var_204_cvector = CVector(0,0,0); var_205_cvector = CVector(0,0,0); var_206_object = Obj(); var_207_bool = 0; var_208_cvector = CVector(0,0,0); var_209_cvector = CVector(0,0,0); var_210_object = Obj(); // 0x249 PushV
	GetLocator(var_200_string, var_207_bool, var_208_cvector, var_209_cvector); // 0x24a ObjFunc
	var_211_bool = var_207_bool == 0; // 0x24c Not
	if(var_211_bool == 0) goto Label_598; // 0x24d JumpB
	var_212_string = "Locator "; // 0x24e PushS
	var_213_int = var_212_string + var_200_string; // 0x24f Add
	var_214_string = " doesn't exist"; // 0x250 PushS
	var_215_int = var_213_int + var_214_string; // 0x251 Add
	Trace(var_215_int); // 0x252 Func
	var_210_object = 0; // 0x254 SetNull
	goto Label_600; // 0x255 Jump
	
Label_600:
	var_198_object = var_210_object; // 0x258 Mov
	return 8; // 0x259 Return
	
Label_598:
	AddStationaryActor(var_210_object, var_208_cvector, var_209_cvector, var_201_string, var_202_string); // 0x256 ObjFunc
}


func_719(var_49_int)
{
	var_50_int = 0; var_51_int = 0; // 0x2cf PushV
	var_52_string = "branch"; // 0x2d0 PushS
	GetVariable(var_52_string, var_51_int); // 0x2d1 Func
	var_49_int = var_51_int; // 0x2d3 Mov
	return 2; // 0x2d4 Return
}


func_725()
{
	var_49_int = 0; // 0x2d5 PushV
	func_719(var_49_int); // 0x2d6 NEW_2
	var_53_int = 1; // 0x2d8 PushI
	var_54_bool = var_49_int == var_53_int; // 0x2d9 Eq
	if(var_54_bool == 0) goto Label_736; // 0x2da JumpB
	var_55_string = "BurahCompleted"; // 0x2db PushS
	var_56_int = 1; // 0x2dc PushI
	SetRegistryData(var_55_string, var_56_int); // 0x2dd Func
	goto Label_757; // 0x2df Jump
	
Label_757:
	return 0; // 0x2f5 Return
	
Label_736:
	var_57_int = 0; // 0x2e0 PushV
	func_719(var_57_int); // 0x2e1 NEW_2
	var_58_int = 0; // 0x2e3 PushI
	var_59_bool = var_57_int == var_58_int; // 0x2e4 Eq
	if(var_59_bool == 0) goto Label_747; // 0x2e5 JumpB
	var_60_string = "DankoCompleted"; // 0x2e6 PushS
	var_61_int = 1; // 0x2e7 PushI
	SetRegistryData(var_60_string, var_61_int); // 0x2e8 Func
	goto Label_757; // 0x2ea Jump
	
Label_747:
	var_62_int = 0; // 0x2eb PushV
	func_719(var_62_int); // 0x2ec NEW_2
	var_63_int = 2; // 0x2ee PushI
	var_64_bool = var_62_int == var_63_int; // 0x2ef Eq
	if(var_64_bool == 0) goto Label_757; // 0x2f0 JumpB
	var_65_string = "KlaraCompleted"; // 0x2f1 PushS
	var_66_int = 1; // 0x2f2 PushI
	SetRegistryData(var_65_string, var_66_int); // 0x2f3 Func
}


func_856(var_82_bool, var_83_int)
{
	var_84_int = 0; var_85_int = 0; // 0x358 PushV
	var_86_string = "vol_"; // 0x359 PushS
	var_87_int = var_86_string + var_83_int; // 0x35a Add
	GetVariable(var_87_int, var_85_int); // 0x35b Func
	var_88_int = 4; // 0x35d PushI
	var_89_int = var_85_int & var_88_int; // 0x35e And
	var_90_int = 0; // 0x35f PushI
	var_82_bool = var_89_int != var_90_int; // 0x360 Neq2
	return 2; // 0x361 Return
}


func_603(var_22_string, var_23_bool)
{
	var_24_object = Obj(); var_25_object = Obj(); // 0x25b PushV
	FindActor(var_25_object, var_22_string); // 0x25c Func
	var_26_bool = var_25_object == 0; // 0x25e Not
	if(var_26_bool == 0) goto Label_615; // 0x25f JumpB
	var_27_string = "Door "; // 0x260 PushS
	var_28_int = var_27_string + var_22_string; // 0x261 Add
	var_29_string = " not found"; // 0x262 PushS
	var_30_int = var_28_int + var_29_string; // 0x263 Add
	Trace(var_30_int); // 0x264 Func
	goto Label_618; // 0x266 Jump
	
Label_618:
	return 2; // 0x26a Return
	
Label_615:
	var_31_string = "locked"; // 0x267 PushS
	SetProperty(var_31_string, var_23_bool); // 0x268 ObjFunc
}


func_990(var_45_bool)
{
	var_46_int = 0; var_47_int = 0; // 0x3de PushV
	var_47_int = 0; // 0x3df MovI
	var_48_bool = 0; // 0x3e0 PushV
	func_952(var_48_bool); // 0x3e1 NEW_2
	if(var_48_bool == 0) goto Label_998; // 0x3e3 JumpB
	var_92_int = 1; // 0x3e4 PushI
	var_47_int = var_47_int + var_92_int; // 0x3e5 Add2
	
Label_998:
	var_93_bool = 0; // 0x3e6 PushV
	func_914(var_93_bool); // 0x3e7 NEW_2
	if(var_93_bool == 0) goto Label_1004; // 0x3e9 JumpB
	var_124_int = 1; // 0x3ea PushI
	var_47_int = var_47_int + var_124_int; // 0x3eb Add2
	
Label_1004:
	var_125_bool = 0; // 0x3ec PushV
	func_876(var_125_bool); // 0x3ed NEW_2
	if(var_125_bool == 0) goto Label_1010; // 0x3ef JumpB
	var_156_int = 1; // 0x3f0 PushI
	var_47_int = var_47_int + var_156_int; // 0x3f1 Add2
	
Label_1010:
	var_157_int = 2; // 0x3f2 PushI
	var_45_bool = var_47_int >= var_157_int; // 0x3f3 GE2
	return 2; // 0x3f4 Return
}


func_866(var_73_bool, var_74_int)
{
	var_75_int = 0; var_76_int = 0; // 0x362 PushV
	var_77_string = "vol_"; // 0x363 PushS
	var_78_int = var_77_string + var_74_int; // 0x364 Add
	GetVariable(var_78_int, var_76_int); // 0x365 Func
	var_79_int = 16; // 0x367 PushI
	var_80_int = var_76_int & var_79_int; // 0x368 And
	var_81_int = 0; // 0x369 PushI
	var_73_bool = var_80_int != var_81_int; // 0x36a Neq2
	return 2; // 0x36b Return
}


func_1252(var_83_bool)
{
	var_84_int = 0; var_85_int = 0; // 0x4e4 PushV
	var_86_string = "k12q01BurahInSobor"; // 0x4e5 PushS
	GetVariable(var_86_string, var_85_int); // 0x4e6 Func
	var_87_int = 0; // 0x4e8 PushI
	var_83_bool = var_85_int != var_87_int; // 0x4e9 Neq2
	return 2; // 0x4ea Return
}


func_1259(var_93_bool)
{
	var_94_int = 0; var_95_int = 0; // 0x4eb PushV
	var_96_string = "k12q01DankoInSobor"; // 0x4ec PushS
	GetVariable(var_96_string, var_95_int); // 0x4ed Func
	var_97_int = 0; // 0x4ef PushI
	var_93_bool = var_95_int != var_97_int; // 0x4f0 Neq2
	return 2; // 0x4f1 Return
}


func_620(var_158_bool, var_159_string, var_160_string, var_161_string)
{
	var_162_object = Obj(); var_163_object = Obj(); // 0x26c PushV
	FindActor(var_163_object, var_159_string); // 0x26d Func
	var_164_bool = var_163_object == 0; // 0x26f NullEq
	if(var_164_bool == 0) goto Label_627; // 0x270 JumpB
	var_158_bool = 0; // 0x271 MovB
	return 2; // 0x272 Return
	
Label_627:
	Trigger(var_163_object, var_160_string, var_161_string); // 0x273 Func
	var_158_bool = 1; // 0x275 MovB
	return 2; // 0x276 Return
}


func_876(var_125_bool)
{
	var_126_object = Obj(); var_127_int = 0; var_128_int = 0; var_129_int = 0; var_130_object = Obj(); var_131_int = 0; var_132_int = 0; var_133_int = 0; // 0x36c PushV
	CreateIntVector(var_130_object); // 0x36d Func
	var_134_object = Obj(); var_135_bool = 0; var_136_int = 0; // 0x36f PushV
	var_134_object = var_130_object; // 0x370 Mov
	var_135_bool = 0; // 0x371 MovB
	var_136_int = -1; // 0x372 MovI
	func_758(var_135_bool, var_136_int); // 0x373 NEW_2
	size(var_131_int); // 0x375 ObjFunc
	var_132_int = 0; // 0x377 MovI
	
Label_888:
	var_149_bool = var_132_int < var_131_int; // 0x378 LT
	if(var_149_bool == 0) goto Label_911; // 0x379 JumpB
	get(var_133_int, var_132_int); // 0x37a ObjFunc
	var_150_bool = 0; // 0x37c PushV
	var_150_bool = 1; // 0x37d MovB
	var_151_bool = 0; var_152_int = 0; // 0x37e PushV
	var_152_int = var_133_int; // 0x37f Mov
	func_866(var_151_bool, var_152_int); // 0x380 NEW_2
	if(var_151_bool == 0) goto Label_905; // 0x382 JumpB
	var_153_bool = 0; var_154_int = 0; // 0x383 PushV
	var_154_int = var_133_int; // 0x384 Mov
	func_856(var_153_bool, var_154_int); // 0x385 NEW_2
	if(var_153_bool == 0) goto Label_905; // 0x387 JumpB
	var_150_bool = 0; // 0x388 MovB
	
Label_905:
	if(var_150_bool == 0) goto Label_908; // 0x389 JumpB
	var_125_bool = 0; // 0x38a MovB
	return 8; // 0x38b Return
	
Label_908:
	var_155_int = 1; // 0x38c PushI
	var_132_int = var_132_int + var_155_int; // 0x38d Add2
	goto Label_888; // 0x38e Jump
	
Label_911:
	var_125_bool = 1; // 0x38f MovB
	return 8; // 0x390 Return
}


func_1266(var_23_bool)
{
	var_24_bool = 0; var_25_bool = 0; // 0x4f2 PushV
	IsOverrideActive(var_25_bool); // 0x4f3 Func
	var_23_bool = !var_25_bool; // 0x4f5 Not2
	return 2; // 0x4f6 Return
}


func_1013(var_198_bool)
{
	var_198_bool = 0; // 0x3f5 MovB
	var_199_bool = 0; // 0x3f6 PushV
	var_199_bool = 0; // 0x3f7 MovB
	var_200_bool = 0; // 0x3f8 PushV
	func_952(var_200_bool); // 0x3f9 NEW_2
	if(var_200_bool == 0) goto Label_1025; // 0x3fb JumpB
	var_244_bool = 0; // 0x3fc PushV
	func_914(var_244_bool); // 0x3fd NEW_2
	if(var_244_bool == 0) goto Label_1025; // 0x3ff JumpB
	var_199_bool = 1; // 0x400 MovB
	
Label_1025:
	if(var_199_bool == 0) goto Label_1031; // 0x401 JumpB
	var_275_bool = 0; // 0x402 PushV
	func_876(var_275_bool); // 0x403 NEW_2
	if(var_275_bool == 0) goto Label_1031; // 0x405 JumpB
	var_198_bool = 1; // 0x406 MovB
	
Label_1031:
	return 0; // 0x407 Return
}


func_758(var_135_bool, var_136_int)
{
	var_137_int = 18; // 0x2f7 PushI
	add(var_137_int); // 0x2f8 ObjFunc
	var_138_int = 24; // 0x2fa PushI
	add(var_138_int); // 0x2fb ObjFunc
	var_139_int = 20; // 0x2fd PushI
	add(var_139_int); // 0x2fe ObjFunc
	var_140_int = 14; // 0x300 PushI
	add(var_140_int); // 0x301 ObjFunc
	var_141_bool = 0; // 0x303 PushB
	var_142_bool = var_135_bool == var_141_bool; // 0x304 Eq
	if(var_142_bool == 0) goto Label_784; // 0x305 JumpB
	var_143_int = 10; // 0x306 PushI
	add(var_143_int); // 0x307 ObjFunc
	var_144_int = 17; // 0x309 PushI
	add(var_144_int); // 0x30a ObjFunc
	var_145_int = 8; // 0x30c PushI
	add(var_145_int); // 0x30d ObjFunc
	goto Label_790; // 0x30f Jump
	
Label_790:
	return 0; // 0x316 Return
	
Label_784:
	var_146_int = 1; // 0x310 PushI
	var_147_bool = var_136_int != var_146_int; // 0x311 Neq
	if(var_147_bool == 0) goto Label_790; // 0x312 JumpB
	var_148_int = 10; // 0x313 PushI
	add(var_148_int); // 0x314 ObjFunc
}


func_1271()
{
	var_18_object = Obj(); var_19_object = Obj(); // 0x4f7 PushV
	var_20_string = "warehouse_rubin"; // 0x4f8 PushS
	GetSceneByName(var_19_object, var_20_string); // 0x4f9 Func
	var_21_string = "rubin"; // 0x4fb PushS
	Trigger(var_19_object, var_21_string); // 0x4fc Func
	var_22_string = ""; var_23_bool = 0; // 0x4fe PushV
	var_22_string = "warehouse_rubin@door1"; // 0x4ff MovS
	var_23_bool = 0; // 0x500 MovB
	func_603(var_22_string, var_23_bool); // 0x501 NEW_2
	var_32_string = "cot_eva"; // 0x503 PushS
	GetSceneByName(var_19_object, var_32_string); // 0x504 Func
	var_33_string = "danko"; // 0x506 PushS
	Trigger(var_19_object, var_33_string); // 0x507 Func
	var_34_string = ""; var_35_bool = 0; // 0x509 PushV
	var_34_string = "cot_eva@door1"; // 0x50a MovS
	var_35_bool = 0; // 0x50b MovB
	func_603(var_34_string, var_35_bool); // 0x50c NEW_2
	return 2; // 0x50e Return
}


func_632(var_121_bool, var_122_string)
{
	var_123_object = Obj(); var_124_object = Obj(); // 0x278 PushV
	FindActor(var_124_object, var_122_string); // 0x279 Func
	var_125_bool = var_124_object == 0; // 0x27b Not
	if(var_125_bool == 0) goto Label_639; // 0x27c JumpB
	var_121_bool = 0; // 0x27d MovB
	return 2; // 0x27e Return
	
Label_639:
	RemoveActor(var_124_object); // 0x27f Func
	var_121_bool = 1; // 0x281 MovB
	return 2; // 0x282 Return
}


