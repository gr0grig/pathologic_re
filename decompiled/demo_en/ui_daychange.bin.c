task_0_event_0(var_0_int, var_1_int, var_2_int, var_3_string, var_4_float)
{
	var_5_float = 0; var_6_int = 0; var_7_float = 0; var_8_int = 0; // 0x48 PushV
	var_9_int = 0; // 0x49 PushI
	var_10_bool = var_4_float <= var_9_int; // 0x4a LE
	if(var_10_bool == 0) goto Label_77; // 0x4b JumpB
	return 4; // 0x4c Return
	
Label_77:
	var_11_float = 1.0; // 0x4d PushF
	var_12_bool = var_4_float < var_11_float; // 0x4e LT
	if(var_12_bool == 0) goto Label_83; // 0x4f JumpB
	var_13_float = 1.0; // 0x50 PushF
	var_7_float = var_4_float / var_6_int; // 0x51 Div2
	goto Label_84; // 0x52 Jump
	
Label_84:
	var_14_string = "default"; // 0x54 PushS
	GetTextHeightInWidth(var_8_int, var_14_string, var_0_int, var_7_float); // 0x55 Func
	var_15_string = "default"; // 0x57 PushS
	var_16_int = 0; // 0x58 PushI
	var_17_int = var_1_int - var_8_int; // 0x59 Sub
	var_18_int = 2; // 0x5a PushI
	var_19_float = var_17_int / var_18_int; // 0x5b Div
	var_20_float = 1.0; // 0x5c PushF
	var_21_float = 1.0; // 0x5d PushF
	var_22_float = 1.0; // 0x5e PushF
	PrintInWidth(var_8_int, var_15_string, var_16_int, var_19_float, var_0_int, var_20_float, var_20_float, var_21_float, var_22_float, var_7_float); // 0x5f Func
	return 4; // 0x61 Return
	
Label_83:
	var_7_float = 1; // 0x53 MovI
}


task_0_event_1(var_0_int, var_1_int, var_2_int, var_3_string, var_4_float, var_5_float)
{
	var_4_float = var_4_float - var_5_float; // 0x63 Sub2
	var_6_bool = 0; // 0x64 PushV
	var_6_bool = 0; // 0x65 MovB
	var_7_int = 0; // 0x66 PushI
	var_8_bool = var_4_float <= var_7_int; // 0x67 LE
	if(var_8_bool == 0) goto Label_110; // 0x68 JumpB
	var_9_bool = 0; // 0x69 PushV
	func_114(var_9_bool); // 0x6a NEW_2
	if(var_9_bool == 0) goto Label_110; // 0x6c JumpB
	var_6_bool = 1; // 0x6d MovB
	
Label_110:
	if(var_6_bool == 0) goto Label_113; // 0x6e JumpB
	StopEventProcessing(); // 0x6f Func
	
Label_113:
	return 0; // 0x71 Return
}


main(var_0_int, var_1_int, var_2_int, var_3_string, var_4_float)
{
	var_5_int = 0; var_6_string = ""; var_7_int = 0; var_8_string = ""; // 0x0 PushV
	var_9_int = 0; // 0x1 PushV
	func_130(var_9_int); // 0x2 NEW_2
	var_13_int = 0; // 0x4 PushI
	var_14_bool = var_9_int == var_13_int; // 0x5 Eq
	if(var_14_bool == 0) goto Label_9; // 0x6 JumpB
	var_7_int = 12; // 0x7 MovI
	goto Label_18; // 0x8 Jump
	
Label_18:
	var_15_string = ""; var_16_int = 0; // 0x12 PushV
	var_17_int = 0; // 0x13 PushV
	func_116(var_17_int); // 0x14 NEW_2
	var_16_int = var_17_int; // 0x15 Mov
	func_136(var_15_string, var_16_int); // 0x17 NEW_2
	var_8_string = var_15_string; // 0x18 Mov
	var_186_string = ""; // 0x1a PushS
	var_187_bool = var_8_string != var_186_string; // 0x1b Neq
	if(var_187_bool == 0) goto Label_34; // 0x1c JumpB
	var_188_string = ""; var_189_float = 0; // 0x1d PushV
	var_188_string = var_8_string; // 0x1e Mov
	var_189_float = 10; // 0x1f MovI
	func_58(var_6_string, var_7_int, var_8_string, var_188_string, var_189_float); // 0x20 NEW_2
	
Label_34:
	var_192_int = 0; var_193_float = 0; // 0x22 PushV
	var_194_int = 300; // 0x23 PushI
	var_195_int = var_194_int + var_7_int; // 0x24 Add
	var_196_int = 0; // 0x25 PushV
	func_116(var_196_int); // 0x26 NEW_2
	var_197_int = var_195_int + var_196_int; // 0x28 Add
	var_198_int = 1; // 0x29 PushI
	var_192_int = var_197_int - var_198_int; // 0x2a Sub2
	var_193_float = 8; // 0x2b MovI
	func_49(var_192_int, var_193_float); // 0x2c NEW_2
	DestroyWindow(); // 0x2e Func
	return 4; // 0x30 Return
	
Label_9:
	var_203_int = 0; // 0x9 PushV
	func_130(var_203_int); // 0xa NEW_2
	var_204_int = 1; // 0xc PushI
	var_205_bool = var_203_int == var_204_int; // 0xd Eq
	if(var_205_bool == 0) goto Label_17; // 0xe JumpB
	var_7_int = 0; // 0xf MovI
	goto Label_18; // 0x10 Jump
	
Label_17:
	var_7_int = 24; // 0x11 MovI
}


func_353(var_105_int, var_106_int)
{
	var_107_int = 0; var_108_int = 0; var_109_int = 0; var_110_int = 0; var_111_int = 0; var_112_int = 0; // 0x161 PushV
	var_113_int = 2; // 0x162 PushI
	var_114_bool = var_106_int == var_113_int; // 0x163 Eq
	if(var_114_bool == 0) goto Label_360; // 0x164 JumpB
	var_110_int = 5; // 0x165 MovI
	var_111_int = 10; // 0x166 MovI
	goto Label_422; // 0x167 Jump
	
Label_422:
	var_115_int = var_111_int - var_110_int; // 0x1a6 Sub
	irand(var_112_int, var_115_int); // 0x1a7 Func
	var_105_int = var_112_int + var_110_int; // 0x1a9 Add2
	return 6; // 0x1aa Return
	
Label_360:
	var_116_int = 3; // 0x168 PushI
	var_117_bool = var_106_int == var_116_int; // 0x169 Eq
	if(var_117_bool == 0) goto Label_366; // 0x16a JumpB
	var_110_int = 10; // 0x16b MovI
	var_111_int = 15; // 0x16c MovI
	goto Label_422; // 0x16d Jump
	
Label_366:
	var_118_int = 4; // 0x16e PushI
	var_119_bool = var_106_int == var_118_int; // 0x16f Eq
	if(var_119_bool == 0) goto Label_372; // 0x170 JumpB
	var_110_int = 15; // 0x171 MovI
	var_111_int = 35; // 0x172 MovI
	goto Label_422; // 0x173 Jump
	
Label_372:
	var_120_int = 5; // 0x174 PushI
	var_121_bool = var_106_int == var_120_int; // 0x175 Eq
	if(var_121_bool == 0) goto Label_378; // 0x176 JumpB
	var_110_int = 15; // 0x177 MovI
	var_111_int = 35; // 0x178 MovI
	goto Label_422; // 0x179 Jump
	
Label_378:
	var_122_int = 6; // 0x17a PushI
	var_123_bool = var_106_int == var_122_int; // 0x17b Eq
	if(var_123_bool == 0) goto Label_384; // 0x17c JumpB
	var_110_int = 10; // 0x17d MovI
	var_111_int = 30; // 0x17e MovI
	goto Label_422; // 0x17f Jump
	
Label_384:
	var_124_int = 7; // 0x180 PushI
	var_125_bool = var_106_int == var_124_int; // 0x181 Eq
	if(var_125_bool == 0) goto Label_390; // 0x182 JumpB
	var_110_int = 10; // 0x183 MovI
	var_111_int = 30; // 0x184 MovI
	goto Label_422; // 0x185 Jump
	
Label_390:
	var_126_int = 8; // 0x186 PushI
	var_127_bool = var_106_int == var_126_int; // 0x187 Eq
	if(var_127_bool == 0) goto Label_396; // 0x188 JumpB
	var_110_int = 30; // 0x189 MovI
	var_111_int = 60; // 0x18a MovI
	goto Label_422; // 0x18b Jump
	
Label_396:
	var_128_int = 9; // 0x18c PushI
	var_129_bool = var_106_int == var_128_int; // 0x18d Eq
	if(var_129_bool == 0) goto Label_402; // 0x18e JumpB
	var_110_int = 30; // 0x18f MovI
	var_111_int = 60; // 0x190 MovI
	goto Label_422; // 0x191 Jump
	
Label_402:
	var_130_int = 10; // 0x192 PushI
	var_131_bool = var_106_int == var_130_int; // 0x193 Eq
	if(var_131_bool == 0) goto Label_408; // 0x194 JumpB
	var_110_int = 120; // 0x195 MovI
	var_111_int = 140; // 0x196 MovI
	goto Label_422; // 0x197 Jump
	
Label_408:
	var_132_int = 11; // 0x198 PushI
	var_133_bool = var_106_int == var_132_int; // 0x199 Eq
	if(var_133_bool == 0) goto Label_414; // 0x19a JumpB
	var_110_int = 120; // 0x19b MovI
	var_111_int = 140; // 0x19c MovI
	goto Label_422; // 0x19d Jump
	
Label_414:
	var_134_int = 12; // 0x19e PushI
	var_135_bool = var_106_int == var_134_int; // 0x19f Eq
	if(var_135_bool == 0) goto Label_420; // 0x1a0 JumpB
	var_110_int = 120; // 0x1a1 MovI
	var_111_int = 140; // 0x1a2 MovI
	goto Label_422; // 0x1a3 Jump
	
Label_420:
	var_105_int = 0; // 0x1a4 MovI
	return 6; // 0x1a5 Return
}


func_130(var_9_int)
{
	var_10_int = 0; var_11_int = 0; // 0x82 PushV
	var_12_string = "branch"; // 0x83 PushS
	GetVariable(var_12_string, var_11_int); // 0x84 Func
	var_9_int = var_11_int; // 0x86 Mov
	return 2; // 0x87 Return
}


func_136(var_15_string, var_16_int)
{
	var_23_int = 0; var_24_int = 0; var_25_int = 0; var_26_int = 0; var_27_int = 0; var_28_string = ""; var_29_int = 0; var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_string = ""; // 0x88 PushV
	var_35_bool = 0; // 0x89 PushV
	var_35_bool = 1; // 0x8a MovB
	var_36_int = 2; // 0x8b PushI
	var_37_bool = var_16_int < var_36_int; // 0x8c LT
	if(var_37_bool == 0) goto Label_146; // 0x8d JumpB
	var_38_int = 12; // 0x8e PushI
	var_39_bool = var_16_int > var_38_int; // 0x8f GT
	if(var_39_bool == 0) goto Label_146; // 0x90 JumpB
	var_35_bool = 0; // 0x91 MovB
	
Label_146:
	if(var_35_bool == 0) goto Label_149; // 0x92 JumpB
	var_15_string = ""; // 0x93 MovS
	return 12; // 0x94 Return
	
Label_149:
	var_40_int = 0; var_41_int = 0; // 0x95 PushV
	var_41_int = var_16_int; // 0x96 Mov
	func_200(var_40_int, var_41_int); // 0x97 NEW_2
	var_29_int = var_40_int; // 0x98 Mov
	var_71_int = 0; var_72_int = 0; // 0x9a PushV
	var_72_int = var_16_int; // 0x9b Mov
	func_274(var_71_int, var_72_int); // 0x9c NEW_2
	var_30_int = var_71_int; // 0x9d Mov
	var_105_int = 0; var_106_int = 0; // 0x9f PushV
	var_106_int = var_16_int; // 0xa0 Mov
	func_353(var_105_int, var_106_int); // 0xa1 NEW_2
	var_31_int = var_105_int; // 0xa2 Mov
	var_136_int = 0; var_137_int = 0; // 0xa4 PushV
	var_137_int = var_16_int; // 0xa5 Mov
	func_427(var_136_int, var_137_int); // 0xa6 NEW_2
	var_32_int = var_136_int; // 0xa7 Mov
	var_167_int = 0; var_168_int = 0; // 0xa9 PushV
	var_168_int = var_16_int; // 0xaa Mov
	func_185(var_167_int, var_168_int); // 0xab NEW_2
	var_33_int = var_167_int; // 0xac Mov
	var_179_string = ""; var_180_int = 0; // 0xae PushV
	var_181_int = 550; // 0xaf PushI
	var_182_int = 2; // 0xb0 PushI
	var_183_int = var_16_int - var_182_int; // 0xb1 Sub
	var_180_int = var_181_int + var_183_int; // 0xb2 Add2
	func_125(var_179_string, var_180_int); // 0xb3 NEW_2
	format(var_34_string, var_179_string, var_29_int, var_30_int, var_31_int, var_33_int, var_32_int); // 0xb5 Func
	var_15_string = var_34_string; // 0xb7 Mov
	return 12; // 0xb8 Return
}


func_200(var_40_int, var_41_int)
{
	var_42_int = 0; var_43_int = 0; var_44_int = 0; var_45_int = 0; var_46_int = 0; var_47_int = 0; // 0xc8 PushV
	var_48_int = 2; // 0xc9 PushI
	var_49_bool = var_41_int == var_48_int; // 0xca Eq
	if(var_49_bool == 0) goto Label_207; // 0xcb JumpB
	var_45_int = 20; // 0xcc MovI
	var_46_int = 30; // 0xcd MovI
	goto Label_269; // 0xce Jump
	
Label_269:
	var_50_int = var_46_int - var_45_int; // 0x10d Sub
	irand(var_47_int, var_50_int); // 0x10e Func
	var_40_int = var_47_int + var_45_int; // 0x110 Add2
	return 6; // 0x111 Return
	
Label_207:
	var_51_int = 3; // 0xcf PushI
	var_52_bool = var_41_int == var_51_int; // 0xd0 Eq
	if(var_52_bool == 0) goto Label_213; // 0xd1 JumpB
	var_45_int = 30; // 0xd2 MovI
	var_46_int = 50; // 0xd3 MovI
	goto Label_269; // 0xd4 Jump
	
Label_213:
	var_53_int = 4; // 0xd5 PushI
	var_54_bool = var_41_int == var_53_int; // 0xd6 Eq
	if(var_54_bool == 0) goto Label_219; // 0xd7 JumpB
	var_45_int = 40; // 0xd8 MovI
	var_46_int = 60; // 0xd9 MovI
	goto Label_269; // 0xda Jump
	
Label_219:
	var_55_int = 5; // 0xdb PushI
	var_56_bool = var_41_int == var_55_int; // 0xdc Eq
	if(var_56_bool == 0) goto Label_225; // 0xdd JumpB
	var_45_int = 100; // 0xde MovI
	var_46_int = 130; // 0xdf MovI
	goto Label_269; // 0xe0 Jump
	
Label_225:
	var_57_int = 6; // 0xe1 PushI
	var_58_bool = var_41_int == var_57_int; // 0xe2 Eq
	if(var_58_bool == 0) goto Label_231; // 0xe3 JumpB
	var_45_int = 150; // 0xe4 MovI
	var_46_int = 200; // 0xe5 MovI
	goto Label_269; // 0xe6 Jump
	
Label_231:
	var_59_int = 7; // 0xe7 PushI
	var_60_bool = var_41_int == var_59_int; // 0xe8 Eq
	if(var_60_bool == 0) goto Label_237; // 0xe9 JumpB
	var_45_int = 170; // 0xea MovI
	var_46_int = 220; // 0xeb MovI
	goto Label_269; // 0xec Jump
	
Label_237:
	var_61_int = 8; // 0xed PushI
	var_62_bool = var_41_int == var_61_int; // 0xee Eq
	if(var_62_bool == 0) goto Label_243; // 0xef JumpB
	var_45_int = 200; // 0xf0 MovI
	var_46_int = 250; // 0xf1 MovI
	goto Label_269; // 0xf2 Jump
	
Label_243:
	var_63_int = 9; // 0xf3 PushI
	var_64_bool = var_41_int == var_63_int; // 0xf4 Eq
	if(var_64_bool == 0) goto Label_249; // 0xf5 JumpB
	var_45_int = 330; // 0xf6 MovI
	var_46_int = 390; // 0xf7 MovI
	goto Label_269; // 0xf8 Jump
	
Label_249:
	var_65_int = 10; // 0xf9 PushI
	var_66_bool = var_41_int == var_65_int; // 0xfa Eq
	if(var_66_bool == 0) goto Label_255; // 0xfb JumpB
	var_45_int = 330; // 0xfc MovI
	var_46_int = 390; // 0xfd MovI
	goto Label_269; // 0xfe Jump
	
Label_255:
	var_67_int = 11; // 0xff PushI
	var_68_bool = var_41_int == var_67_int; // 0x100 Eq
	if(var_68_bool == 0) goto Label_261; // 0x101 JumpB
	var_45_int = 330; // 0x102 MovI
	var_46_int = 390; // 0x103 MovI
	goto Label_269; // 0x104 Jump
	
Label_261:
	var_69_int = 12; // 0x105 PushI
	var_70_bool = var_41_int == var_69_int; // 0x106 Eq
	if(var_70_bool == 0) goto Label_267; // 0x107 JumpB
	var_45_int = 330; // 0x108 MovI
	var_46_int = 390; // 0x109 MovI
	goto Label_269; // 0x10a Jump
	
Label_267:
	var_40_int = 0; // 0x10b MovI
	return 6; // 0x10c Return
}


func_427(var_136_int, var_137_int)
{
	var_138_int = 0; var_139_int = 0; var_140_int = 0; var_141_int = 0; var_142_int = 0; var_143_int = 0; // 0x1ab PushV
	var_144_int = 2; // 0x1ac PushI
	var_145_bool = var_137_int == var_144_int; // 0x1ad Eq
	if(var_145_bool == 0) goto Label_434; // 0x1ae JumpB
	var_141_int = 20; // 0x1af MovI
	var_142_int = 30; // 0x1b0 MovI
	goto Label_496; // 0x1b1 Jump
	
Label_496:
	var_146_int = var_142_int - var_141_int; // 0x1f0 Sub
	irand(var_143_int, var_146_int); // 0x1f1 Func
	var_136_int = var_143_int + var_141_int; // 0x1f3 Add2
	return 6; // 0x1f4 Return
	
Label_434:
	var_147_int = 3; // 0x1b2 PushI
	var_148_bool = var_137_int == var_147_int; // 0x1b3 Eq
	if(var_148_bool == 0) goto Label_440; // 0x1b4 JumpB
	var_141_int = 40; // 0x1b5 MovI
	var_142_int = 60; // 0x1b6 MovI
	goto Label_496; // 0x1b7 Jump
	
Label_440:
	var_149_int = 4; // 0x1b8 PushI
	var_150_bool = var_137_int == var_149_int; // 0x1b9 Eq
	if(var_150_bool == 0) goto Label_446; // 0x1ba JumpB
	var_141_int = 50; // 0x1bb MovI
	var_142_int = 70; // 0x1bc MovI
	goto Label_496; // 0x1bd Jump
	
Label_446:
	var_151_int = 5; // 0x1be PushI
	var_152_bool = var_137_int == var_151_int; // 0x1bf Eq
	if(var_152_bool == 0) goto Label_452; // 0x1c0 JumpB
	var_141_int = 90; // 0x1c1 MovI
	var_142_int = 110; // 0x1c2 MovI
	goto Label_496; // 0x1c3 Jump
	
Label_452:
	var_153_int = 6; // 0x1c4 PushI
	var_154_bool = var_137_int == var_153_int; // 0x1c5 Eq
	if(var_154_bool == 0) goto Label_458; // 0x1c6 JumpB
	var_141_int = 310; // 0x1c7 MovI
	var_142_int = 360; // 0x1c8 MovI
	goto Label_496; // 0x1c9 Jump
	
Label_458:
	var_155_int = 7; // 0x1ca PushI
	var_156_bool = var_137_int == var_155_int; // 0x1cb Eq
	if(var_156_bool == 0) goto Label_464; // 0x1cc JumpB
	var_141_int = 360; // 0x1cd MovI
	var_142_int = 460; // 0x1ce MovI
	goto Label_496; // 0x1cf Jump
	
Label_464:
	var_157_int = 8; // 0x1d0 PushI
	var_158_bool = var_137_int == var_157_int; // 0x1d1 Eq
	if(var_158_bool == 0) goto Label_470; // 0x1d2 JumpB
	var_141_int = 500; // 0x1d3 MovI
	var_142_int = 590; // 0x1d4 MovI
	goto Label_496; // 0x1d5 Jump
	
Label_470:
	var_159_int = 9; // 0x1d6 PushI
	var_160_bool = var_137_int == var_159_int; // 0x1d7 Eq
	if(var_160_bool == 0) goto Label_476; // 0x1d8 JumpB
	var_141_int = 500; // 0x1d9 MovI
	var_142_int = 590; // 0x1da MovI
	goto Label_496; // 0x1db Jump
	
Label_476:
	var_161_int = 10; // 0x1dc PushI
	var_162_bool = var_137_int == var_161_int; // 0x1dd Eq
	if(var_162_bool == 0) goto Label_482; // 0x1de JumpB
	var_141_int = 500; // 0x1df MovI
	var_142_int = 590; // 0x1e0 MovI
	goto Label_496; // 0x1e1 Jump
	
Label_482:
	var_163_int = 11; // 0x1e2 PushI
	var_164_bool = var_137_int == var_163_int; // 0x1e3 Eq
	if(var_164_bool == 0) goto Label_488; // 0x1e4 JumpB
	var_141_int = 500; // 0x1e5 MovI
	var_142_int = 590; // 0x1e6 MovI
	goto Label_496; // 0x1e7 Jump
	
Label_488:
	var_165_int = 12; // 0x1e8 PushI
	var_166_bool = var_137_int == var_165_int; // 0x1e9 Eq
	if(var_166_bool == 0) goto Label_494; // 0x1ea JumpB
	var_141_int = 500; // 0x1eb MovI
	var_142_int = 590; // 0x1ec MovI
	goto Label_496; // 0x1ed Jump
	
Label_494:
	var_136_int = 0; // 0x1ee MovI
	return 6; // 0x1ef Return
}


func_49(var_192_int, var_193_float)
{
	var_199_string = ""; var_200_string = ""; // 0x31 PushV
	GetStringByID(var_200_string, var_192_int); // 0x32 Func
	var_201_string = ""; var_202_float = 0; // 0x34 PushV
	var_201_string = var_200_string; // 0x35 Mov
	var_202_float = var_193_float; // 0x36 Mov
	func_58(var_193_float, var_199_string, var_200_string, var_201_string, var_202_float); // 0x37 NEW_2
	return 2; // 0x39 Return
}


func_114(var_9_bool)
{
	var_9_bool = 1; // 0x72 MovB
	return 0; // 0x73 Return
}


func_274(var_71_int, var_72_int)
{
	var_73_int = 0; var_74_int = 0; var_75_int = 0; var_76_int = 0; var_77_int = 0; var_78_int = 0; // 0x112 PushV
	var_79_int = 2; // 0x113 PushI
	var_80_bool = var_72_int == var_79_int; // 0x114 Eq
	if(var_80_bool == 0) goto Label_281; // 0x115 JumpB
	var_76_int = 10; // 0x116 MovI
	var_77_int = 20; // 0x117 MovI
	goto Label_343; // 0x118 Jump
	
Label_343:
	var_81_int = var_77_int - var_76_int; // 0x157 Sub
	irand(var_78_int, var_81_int); // 0x158 Func
	var_82_string = "ps_dead_count"; // 0x15a PushS
	var_83_int = var_82_string + var_72_int; // 0x15b Add
	var_84_int = var_78_int + var_76_int; // 0x15c Add
	SetVariable(var_83_int, var_84_int); // 0x15d Func
	var_71_int = var_78_int + var_76_int; // 0x15f Add2
	return 6; // 0x160 Return
	
Label_281:
	var_85_int = 3; // 0x119 PushI
	var_86_bool = var_72_int == var_85_int; // 0x11a Eq
	if(var_86_bool == 0) goto Label_287; // 0x11b JumpB
	var_76_int = 30; // 0x11c MovI
	var_77_int = 40; // 0x11d MovI
	goto Label_343; // 0x11e Jump
	
Label_287:
	var_87_int = 4; // 0x11f PushI
	var_88_bool = var_72_int == var_87_int; // 0x120 Eq
	if(var_88_bool == 0) goto Label_293; // 0x121 JumpB
	var_76_int = 50; // 0x122 MovI
	var_77_int = 60; // 0x123 MovI
	goto Label_343; // 0x124 Jump
	
Label_293:
	var_89_int = 5; // 0x125 PushI
	var_90_bool = var_72_int == var_89_int; // 0x126 Eq
	if(var_90_bool == 0) goto Label_299; // 0x127 JumpB
	var_76_int = 70; // 0x128 MovI
	var_77_int = 90; // 0x129 MovI
	goto Label_343; // 0x12a Jump
	
Label_299:
	var_91_int = 6; // 0x12b PushI
	var_92_bool = var_72_int == var_91_int; // 0x12c Eq
	if(var_92_bool == 0) goto Label_305; // 0x12d JumpB
	var_76_int = 110; // 0x12e MovI
	var_77_int = 170; // 0x12f MovI
	goto Label_343; // 0x130 Jump
	
Label_305:
	var_93_int = 7; // 0x131 PushI
	var_94_bool = var_72_int == var_93_int; // 0x132 Eq
	if(var_94_bool == 0) goto Label_311; // 0x133 JumpB
	var_76_int = 310; // 0x134 MovI
	var_77_int = 360; // 0x135 MovI
	goto Label_343; // 0x136 Jump
	
Label_311:
	var_95_int = 8; // 0x137 PushI
	var_96_bool = var_72_int == var_95_int; // 0x138 Eq
	if(var_96_bool == 0) goto Label_317; // 0x139 JumpB
	var_76_int = 360; // 0x13a MovI
	var_77_int = 430; // 0x13b MovI
	goto Label_343; // 0x13c Jump
	
Label_317:
	var_97_int = 9; // 0x13d PushI
	var_98_bool = var_72_int == var_97_int; // 0x13e Eq
	if(var_98_bool == 0) goto Label_323; // 0x13f JumpB
	var_76_int = 400; // 0x140 MovI
	var_77_int = 490; // 0x141 MovI
	goto Label_343; // 0x142 Jump
	
Label_323:
	var_99_int = 10; // 0x143 PushI
	var_100_bool = var_72_int == var_99_int; // 0x144 Eq
	if(var_100_bool == 0) goto Label_329; // 0x145 JumpB
	var_76_int = 600; // 0x146 MovI
	var_77_int = 690; // 0x147 MovI
	goto Label_343; // 0x148 Jump
	
Label_329:
	var_101_int = 11; // 0x149 PushI
	var_102_bool = var_72_int == var_101_int; // 0x14a Eq
	if(var_102_bool == 0) goto Label_335; // 0x14b JumpB
	var_76_int = 600; // 0x14c MovI
	var_77_int = 690; // 0x14d MovI
	goto Label_343; // 0x14e Jump
	
Label_335:
	var_103_int = 12; // 0x14f PushI
	var_104_bool = var_72_int == var_103_int; // 0x150 Eq
	if(var_104_bool == 0) goto Label_341; // 0x151 JumpB
	var_76_int = 600; // 0x152 MovI
	var_77_int = 690; // 0x153 MovI
	goto Label_343; // 0x154 Jump
	
Label_341:
	var_71_int = 0; // 0x155 MovI
	return 6; // 0x156 Return
}


func_116(var_17_int)
{
	var_18_float = 0; var_19_float = 0; // 0x74 PushV
	GetGameTime(var_19_float); // 0x75 Func
	var_20_int = 1; // 0x77 PushI
	var_21_int = 0; // 0x78 PushV
	var_22_int = 24; // 0x79 PushI
	var_21_int = var_19_float / var_19_float; // 0x7a Div2
	var_17_int = var_20_int + var_21_int; // 0x7b Add2
	return 2; // 0x7c Return
}


func_185(var_167_int, var_168_int)
{
	var_169_int = 0; var_170_int = 0; var_171_int = 0; var_172_int = 0; var_173_int = 0; var_174_int = 0; // 0xb9 PushV
	var_172_int = 0; // 0xba MovI
	var_173_int = 1; // 0xbb MovI
	
Label_188:
	var_175_bool = var_173_int <= var_168_int; // 0xbc LE
	if(var_175_bool == 0) goto Label_198; // 0xbd JumpB
	var_176_string = "ps_dead_count"; // 0xbe PushS
	var_177_int = var_176_string + var_168_int; // 0xbf Add
	GetVariable(var_177_int, var_174_int); // 0xc0 Func
	var_172_int = var_172_int + var_174_int; // 0xc2 Add2
	var_178_int = 1; // 0xc3 PushI
	var_173_int = var_173_int + var_178_int; // 0xc4 Add2
	goto Label_188; // 0xc5 Jump
	
Label_198:
	var_167_int = var_172_int; // 0xc6 Mov
	return 6; // 0xc7 Return
}


func_58(var_0_int, var_3_string, var_4_float, var_188_string, var_189_float)
{
	var_3_string = var_188_string; // 0x3b TMov
	var_4_float = var_189_float; // 0x3c TMov
	GetWindowSize(var_0_int, var_189_float); // 0x3d Func
	var_190_bool = 1; // 0x3f PushB
	SetOwnerDraw(var_190_bool); // 0x40 Func
	var_191_bool = 1; // 0x42 PushB
	SetNeedUpdate(var_191_bool); // 0x43 Func
	ProcessEvents(); // 0x45 Func
	return 0; // 0x47 Return
}


func_125(var_179_string, var_180_int)
{
	var_184_string = ""; var_185_string = ""; // 0x7d PushV
	GetStringByID(var_185_string, var_180_int); // 0x7e Func
	var_179_string = var_185_string; // 0x80 Mov
	return 2; // 0x81 Return
}


