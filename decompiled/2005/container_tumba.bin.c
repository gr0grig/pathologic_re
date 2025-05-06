task_0_event_0(var_0_object)
{
	var_1_bool = 0; var_2_bool = 0; var_3_int = 0; var_4_object = Obj(); var_5_bool = 0; var_6_bool = 0; var_7_int = 0; var_8_object = Obj(); // 0x123 PushV
	var_9_bool = 0; // 0x124 PushV
	var_9_bool = 1; // 0x125 MovB
	var_10_bool = var_0_object == 0; // 0x126 Not
	if(var_10_bool == 0) goto Label_302; // 0x127 JumpB
	var_11_bool = 0; // 0x128 PushV
	func_357(var_11_bool); // 0x129 NEW_2
	var_15_bool = var_11_bool == 0; // 0x12b Not
	if(var_15_bool == 0) goto Label_302; // 0x12c JumpB
	var_9_bool = 0; // 0x12d MovB
	
Label_302:
	if(var_9_bool == 0) goto Label_304; // 0x12e JumpB
	return 8; // 0x12f Return
	
Label_304:
	IsOnGround(var_5_bool); // 0x130 ObjFunc
	var_16_bool = var_5_bool; // 0x132 Push
	if(var_16_bool == 0) goto Label_325; // 0x133 JumpB
	EventDisable(0); // 0x134 EventDisable
	IsOverrideActive(var_6_bool); // 0x135 Func
	var_17_bool = var_6_bool == 0; // 0x137 Not
	if(var_17_bool == 0) goto Label_324; // 0x138 JumpB
	GetItemCount(var_7_int); // 0x139 Func
	var_18_int = var_7_int; // 0x13b Push
	if(var_18_int == 0) goto Label_322; // 0x13c JumpB
	GetScene(var_8_object); // 0x13d Func
	BroadcastSteal(var_0_object, var_8_object); // 0x13f Func
	var_8_object = 0; // 0x141 SetNull
	
Label_322:
	Barter(var_0_object); // 0x142 Func
	
Label_324:
	EventEnable(0); // 0x144 EventEnable
	
Label_325:
	return 8; // 0x145 Return
}


main()
{
	var_0_object = Obj(); var_1_bool = 0; var_2_int = 0; var_3_int = 0; var_4_object = Obj(); var_5_bool = 0; var_6_int = 0; var_7_int = 0; // 0x0 PushV
	var_8_bool = 1; // 0x1 PushB
	SetVisibility(var_8_bool); // 0x2 Func
	DisableUpdate(); // 0x4 Func
	GetScene(var_4_object); // 0x6 Func
	var_9_string = "nailed"; // 0x8 PushS
	GetProperty(var_9_string, var_5_bool); // 0x9 ObjFunc
	var_10_bool = var_5_bool; // 0xb Push
	if(var_10_bool == 0) goto Label_163; // 0xc JumpB
	var_11_string = ""; var_12_int = 0; var_13_int = 0; var_14_int = 0; // 0xd PushV
	var_11_string = "alpha_pills"; // 0xe MovS
	var_12_int = 1; // 0xf MovI
	var_13_int = 2; // 0x10 MovI
	var_14_int = 3; // 0x11 MovI
	func_337(var_11_string, var_12_int, var_13_int, var_14_int); // 0x12 NEW_2
	var_27_string = ""; var_28_int = 0; var_29_int = 0; // 0x14 PushV
	var_27_string = "tvirin"; // 0x15 MovS
	var_28_int = 1; // 0x16 MovI
	var_29_int = 20; // 0x17 MovI
	func_326(var_27_string, var_28_int, var_29_int); // 0x18 NEW_2
	var_36_string = ""; var_37_int = 0; var_38_int = 0; // 0x1a PushV
	var_36_string = "lemon"; // 0x1b MovS
	var_37_int = 1; // 0x1c MovI
	var_38_int = 10; // 0x1d MovI
	func_326(var_36_string, var_37_int, var_38_int); // 0x1e NEW_2
	var_39_string = ""; var_40_int = 0; var_41_int = 0; // 0x20 PushV
	var_39_string = "meradorm"; // 0x21 MovS
	var_40_int = 1; // 0x22 MovI
	var_41_int = 25; // 0x23 MovI
	func_326(var_39_string, var_40_int, var_41_int); // 0x24 NEW_2
	var_42_string = ""; var_43_int = 0; var_44_int = 0; // 0x26 PushV
	var_42_string = "syringe"; // 0x27 MovS
	var_43_int = 1; // 0x28 MovI
	var_44_int = 20; // 0x29 MovI
	func_326(var_42_string, var_43_int, var_44_int); // 0x2a NEW_2
	var_45_string = ""; var_46_int = 0; var_47_int = 0; var_48_int = 0; // 0x2c PushV
	var_45_string = "kerosene"; // 0x2d MovS
	var_46_int = 1; // 0x2e MovI
	var_47_int = 3; // 0x2f MovI
	var_48_int = 10; // 0x30 MovI
	func_337(var_45_string, var_46_int, var_47_int, var_48_int); // 0x31 NEW_2
	var_49_string = ""; var_50_int = 0; var_51_int = 0; var_52_int = 0; // 0x33 PushV
	var_49_string = "hook"; // 0x34 MovS
	var_50_int = 1; // 0x35 MovI
	var_51_int = 15; // 0x36 MovI
	var_52_int = 3; // 0x37 MovI
	func_337(var_49_string, var_50_int, var_51_int, var_52_int); // 0x38 NEW_2
	var_53_string = ""; var_54_int = 0; var_55_int = 0; var_56_int = 0; // 0x3a PushV
	var_53_string = "needle"; // 0x3b MovS
	var_54_int = 1; // 0x3c MovI
	var_55_int = 5; // 0x3d MovI
	var_56_int = 2; // 0x3e MovI
	func_337(var_53_string, var_54_int, var_55_int, var_56_int); // 0x3f NEW_2
	var_57_string = ""; var_58_int = 0; var_59_int = 0; var_60_int = 0; // 0x41 PushV
	var_57_string = "Money"; // 0x42 MovS
	var_58_int = 1; // 0x43 MovI
	var_59_int = 2; // 0x44 MovI
	var_60_int = 5; // 0x45 MovI
	func_337(var_57_string, var_58_int, var_59_int, var_60_int); // 0x46 NEW_2
	var_61_int = 0; // 0x48 PushV
	func_363(var_61_int); // 0x49 NEW_2
	var_6_int = var_61_int; // 0x4a Mov
	var_67_int = 4; // 0x4c PushI
	var_68_bool = var_6_int >= var_67_int; // 0x4d GE
	if(var_68_bool == 0) goto Label_91; // 0x4e JumpB
	var_69_string = ""; var_70_int = 0; var_71_int = 0; // 0x4f PushV
	var_69_string = "neomicin"; // 0x50 MovS
	var_70_int = 1; // 0x51 MovI
	var_71_int = 15; // 0x52 MovI
	func_326(var_69_string, var_70_int, var_71_int); // 0x53 NEW_2
	var_72_string = ""; var_73_int = 0; var_74_int = 0; // 0x55 PushV
	var_72_string = "glove_disp"; // 0x56 MovS
	var_73_int = 1; // 0x57 MovI
	var_74_int = 30; // 0x58 MovI
	func_326(var_72_string, var_73_int, var_74_int); // 0x59 NEW_2
	
Label_91:
	var_75_int = 5; // 0x5b PushI
	var_76_bool = var_6_int >= var_75_int; // 0x5c GE
	if(var_76_bool == 0) goto Label_113; // 0x5d JumpB
	var_77_string = ""; var_78_int = 0; var_79_int = 0; // 0x5e PushV
	var_77_string = "novocaine"; // 0x5f MovS
	var_78_int = 1; // 0x60 MovI
	var_79_int = 20; // 0x61 MovI
	func_326(var_77_string, var_78_int, var_79_int); // 0x62 NEW_2
	var_80_string = ""; var_81_int = 0; var_82_int = 0; var_83_int = 0; // 0x64 PushV
	var_80_string = "beta_pills"; // 0x65 MovS
	var_81_int = 1; // 0x66 MovI
	var_82_int = 4; // 0x67 MovI
	var_83_int = 2; // 0x68 MovI
	func_337(var_80_string, var_81_int, var_82_int, var_83_int); // 0x69 NEW_2
	var_84_string = ""; var_85_int = 0; var_86_int = 0; // 0x6b PushV
	var_84_string = "Scalpel"; // 0x6c MovS
	var_85_int = 1; // 0x6d MovI
	var_86_int = 45; // 0x6e MovI
	func_326(var_84_string, var_85_int, var_86_int); // 0x6f NEW_2
	
Label_113:
	var_87_int = 7; // 0x71 PushI
	var_88_bool = var_6_int >= var_87_int; // 0x72 GE
	if(var_88_bool == 0) goto Label_141; // 0x73 JumpB
	var_89_string = ""; var_90_int = 0; var_91_int = 0; // 0x74 PushV
	var_89_string = "packet"; // 0x75 MovS
	var_90_int = 1; // 0x76 MovI
	var_91_int = 25; // 0x77 MovI
	func_326(var_89_string, var_90_int, var_91_int); // 0x78 NEW_2
	var_92_string = ""; var_93_int = 0; var_94_int = 0; // 0x7a PushV
	var_92_string = "monomicin"; // 0x7b MovS
	var_93_int = 1; // 0x7c MovI
	var_94_int = 25; // 0x7d MovI
	func_326(var_92_string, var_93_int, var_94_int); // 0x7e NEW_2
	var_95_string = ""; var_96_int = 0; var_97_int = 0; // 0x80 PushV
	var_95_string = "morfin"; // 0x81 MovS
	var_96_int = 1; // 0x82 MovI
	var_97_int = 25; // 0x83 MovI
	func_326(var_95_string, var_96_int, var_97_int); // 0x84 NEW_2
	var_98_string = ""; var_99_int = 0; var_100_int = 0; var_101_int = 0; // 0x86 PushV
	var_98_string = "gamma_pills"; // 0x87 MovS
	var_99_int = 1; // 0x88 MovI
	var_100_int = 8; // 0x89 MovI
	var_101_int = 2; // 0x8a MovI
	func_337(var_98_string, var_99_int, var_100_int, var_101_int); // 0x8b NEW_2
	
Label_141:
	var_102_int = 10; // 0x8d PushI
	var_103_bool = var_6_int >= var_102_int; // 0x8e GE
	if(var_103_bool == 0) goto Label_162; // 0x8f JumpB
	var_104_string = ""; var_105_int = 0; var_106_int = 0; // 0x90 PushV
	var_104_string = "feromicin"; // 0x91 MovS
	var_105_int = 1; // 0x92 MovI
	var_106_int = 35; // 0x93 MovI
	func_326(var_104_string, var_105_int, var_106_int); // 0x94 NEW_2
	var_107_string = ""; var_108_int = 0; var_109_int = 0; // 0x96 PushV
	var_107_string = "delta_pills"; // 0x97 MovS
	var_108_int = 1; // 0x98 MovI
	var_109_int = 16; // 0x99 MovI
	func_326(var_107_string, var_108_int, var_109_int); // 0x9a NEW_2
	var_110_string = ""; var_111_int = 0; var_112_int = 0; // 0x9c PushV
	var_110_string = "etorfin"; // 0x9d MovS
	var_111_int = 1; // 0x9e MovI
	var_112_int = 40; // 0x9f MovI
	func_326(var_110_string, var_111_int, var_112_int); // 0xa0 NEW_2
	
Label_162:
	goto Label_282; // 0xa2 Jump
	
Label_282:
	func_287(); // 0x11b NEW_2
	return 8; // 0x11d Return
	
Label_163:
	var_113_int = 0; // 0xa3 PushV
	func_363(var_113_int); // 0xa4 NEW_2
	var_7_int = var_113_int; // 0xa5 Mov
	var_114_string = ""; var_115_int = 0; var_116_int = 0; // 0xa7 PushV
	var_114_string = "bandage"; // 0xa8 MovS
	var_115_int = 1; // 0xa9 MovI
	var_116_int = 50; // 0xaa MovI
	func_326(var_114_string, var_115_int, var_116_int); // 0xab NEW_2
	var_117_string = ""; var_118_int = 0; var_119_int = 0; // 0xad PushV
	var_117_string = "tourniquet"; // 0xae MovS
	var_118_int = 1; // 0xaf MovI
	var_119_int = 50; // 0xb0 MovI
	func_326(var_117_string, var_118_int, var_119_int); // 0xb1 NEW_2
	var_120_string = ""; var_121_int = 0; var_122_int = 0; var_123_int = 0; // 0xb3 PushV
	var_120_string = "alpha_pills"; // 0xb4 MovS
	var_121_int = 1; // 0xb5 MovI
	var_122_int = 4; // 0xb6 MovI
	var_123_int = 3; // 0xb7 MovI
	func_337(var_120_string, var_121_int, var_122_int, var_123_int); // 0xb8 NEW_2
	var_124_int = 7; // 0xba PushI
	var_125_bool = var_7_int <= var_124_int; // 0xbb LE
	if(var_125_bool == 0) goto Label_196; // 0xbc JumpB
	var_126_string = ""; var_127_int = 0; var_128_int = 0; // 0xbd PushV
	var_126_string = "packet"; // 0xbe MovS
	var_127_int = 1; // 0xbf MovI
	var_128_int = 50; // 0xc0 MovI
	func_326(var_126_string, var_127_int, var_128_int); // 0xc1 NEW_2
	goto Label_202; // 0xc3 Jump
	
Label_202:
	var_129_string = ""; var_130_int = 0; var_131_int = 0; var_132_int = 0; // 0xca PushV
	var_129_string = "needle"; // 0xcb MovS
	var_130_int = 1; // 0xcc MovI
	var_131_int = 15; // 0xcd MovI
	var_132_int = 2; // 0xce MovI
	func_337(var_129_string, var_130_int, var_131_int, var_132_int); // 0xcf NEW_2
	var_133_string = ""; var_134_int = 0; var_135_int = 0; // 0xd1 PushV
	var_133_string = "hook"; // 0xd2 MovS
	var_134_int = 1; // 0xd3 MovI
	var_135_int = 5; // 0xd4 MovI
	func_326(var_133_string, var_134_int, var_135_int); // 0xd5 NEW_2
	var_136_string = ""; var_137_int = 0; var_138_int = 0; // 0xd7 PushV
	var_136_string = "flower"; // 0xd8 MovS
	var_137_int = 1; // 0xd9 MovI
	var_138_int = 10; // 0xda MovI
	func_326(var_136_string, var_137_int, var_138_int); // 0xdb NEW_2
	var_139_string = ""; var_140_int = 0; var_141_int = 0; // 0xdd PushV
	var_139_string = "syringe"; // 0xde MovS
	var_140_int = 1; // 0xdf MovI
	var_141_int = 30; // 0xe0 MovI
	func_326(var_139_string, var_140_int, var_141_int); // 0xe1 NEW_2
	var_142_string = ""; var_143_int = 0; var_144_int = 0; // 0xe3 PushV
	var_142_string = "watch"; // 0xe4 MovS
	var_143_int = 1; // 0xe5 MovI
	var_144_int = 30; // 0xe6 MovI
	func_326(var_142_string, var_143_int, var_144_int); // 0xe7 NEW_2
	var_145_string = ""; var_146_int = 0; var_147_int = 0; // 0xe9 PushV
	var_145_string = "razor"; // 0xea MovS
	var_146_int = 1; // 0xeb MovI
	var_147_int = 30; // 0xec MovI
	func_326(var_145_string, var_146_int, var_147_int); // 0xed NEW_2
	var_148_string = ""; var_149_int = 0; var_150_int = 0; // 0xef PushV
	var_148_string = "beads"; // 0xf0 MovS
	var_149_int = 1; // 0xf1 MovI
	var_150_int = 20; // 0xf2 MovI
	func_326(var_148_string, var_149_int, var_150_int); // 0xf3 NEW_2
	var_151_string = ""; var_152_int = 0; var_153_int = 0; // 0xf5 PushV
	var_151_string = "bracelet"; // 0xf6 MovS
	var_152_int = 1; // 0xf7 MovI
	var_153_int = 20; // 0xf8 MovI
	func_326(var_151_string, var_152_int, var_153_int); // 0xf9 NEW_2
	var_154_string = ""; var_155_int = 0; var_156_int = 0; // 0xfb PushV
	var_154_string = "ear_ring"; // 0xfc MovS
	var_155_int = 1; // 0xfd MovI
	var_156_int = 20; // 0xfe MovI
	func_326(var_154_string, var_155_int, var_156_int); // 0xff NEW_2
	var_157_string = ""; var_158_int = 0; var_159_int = 0; // 0x101 PushV
	var_157_string = "gold_ring"; // 0x102 MovS
	var_158_int = 1; // 0x103 MovI
	var_159_int = 50; // 0x104 MovI
	func_326(var_157_string, var_158_int, var_159_int); // 0x105 NEW_2
	var_160_string = ""; var_161_int = 0; var_162_int = 0; // 0x107 PushV
	var_160_string = "silver_ring"; // 0x108 MovS
	var_161_int = 1; // 0x109 MovI
	var_162_int = 30; // 0x10a MovI
	func_326(var_160_string, var_161_int, var_162_int); // 0x10b NEW_2
	var_163_string = ""; var_164_int = 0; var_165_int = 0; // 0x10d PushV
	var_163_string = "glove"; // 0x10e MovS
	var_164_int = 1; // 0x10f MovI
	var_165_int = 80; // 0x110 MovI
	func_326(var_163_string, var_164_int, var_165_int); // 0x111 NEW_2
	var_166_string = ""; var_167_int = 0; var_168_int = 0; var_169_int = 0; // 0x113 PushV
	var_166_string = "Money"; // 0x114 MovS
	var_167_int = 1; // 0x115 MovI
	var_168_int = 2; // 0x116 MovI
	var_169_int = 3; // 0x117 MovI
	func_337(var_166_string, var_167_int, var_168_int, var_169_int); // 0x118 NEW_2
	
Label_196:
	var_170_string = ""; var_171_int = 0; var_172_int = 0; // 0xc4 PushV
	var_170_string = "packet"; // 0xc5 MovS
	var_171_int = 1; // 0xc6 MovI
	var_172_int = 20; // 0xc7 MovI
	func_326(var_170_string, var_171_int, var_172_int); // 0xc8 NEW_2
}


func_352(var_19_bool, var_20_int, var_21_int)
{
	var_22_int = 0; var_23_int = 0; // 0x160 PushV
	irand(var_23_int, var_21_int); // 0x161 Func
	var_19_bool = var_23_int < var_20_int; // 0x163 LT2
	return 2; // 0x164 Return
}


func_357(var_11_bool)
{
	var_12_int = 0; var_13_int = 0; // 0x165 PushV
	var_14_string = "nouse_container"; // 0x166 PushS
	GetVariable(var_14_string, var_13_int); // 0x167 Func
	var_11_bool = !var_13_int; // 0x169 Not2
	return 2; // 0x16a Return
}


func_326(var_27_string, var_28_int, var_29_int)
{
	var_30_bool = 0; var_31_bool = 0; // 0x146 PushV
	var_32_bool = 0; var_33_int = 0; var_34_int = 0; // 0x147 PushV
	var_33_int = var_28_int; // 0x148 Mov
	var_34_int = var_29_int; // 0x149 Mov
	func_352(var_32_bool, var_33_int, var_34_int); // 0x14a NEW_2
	if(var_32_bool == 0) goto Label_336; // 0x14c JumpB
	var_35_int = 0; // 0x14d PushI
	AddItem(var_31_bool, var_27_string, var_35_int); // 0x14e Func
	
Label_336:
	return 2; // 0x150 Return
}


func_363(var_61_int)
{
	var_62_float = 0; var_63_float = 0; // 0x16b PushV
	GetGameTime(var_63_float); // 0x16c Func
	var_64_int = 1; // 0x16e PushI
	var_65_int = 0; // 0x16f PushV
	var_66_int = 24; // 0x170 PushI
	var_65_int = var_63_float / var_63_float; // 0x171 Div2
	var_61_int = var_64_int + var_65_int; // 0x172 Add2
	return 2; // 0x173 Return
}


func_337(var_11_string, var_12_int, var_13_int, var_14_int)
{
	var_15_int = 0; var_16_bool = 0; var_17_int = 0; var_18_bool = 0; // 0x151 PushV
	var_19_bool = 0; var_20_int = 0; var_21_int = 0; // 0x152 PushV
	var_20_int = var_12_int; // 0x153 Mov
	var_21_int = var_13_int; // 0x154 Mov
	func_352(var_19_bool, var_20_int, var_21_int); // 0x155 NEW_2
	if(var_19_bool == 0) goto Label_351; // 0x157 JumpB
	irand(var_17_int, var_14_int); // 0x158 Func
	var_24_int = 0; // 0x15a PushI
	var_25_int = 1; // 0x15b PushI
	var_26_int = var_17_int + var_25_int; // 0x15c Add
	AddItem(var_18_bool, var_11_string, var_24_int, var_26_int); // 0x15d Func
	
Label_351:
	return 4; // 0x15f Return
}


func_287()
{
	
Label_287:
	Hold(); // 0x11f Func
	goto Label_287; // 0x121 Jump
}


