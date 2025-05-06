task_0_event_0(var_0_object)
{
	var_1_bool = 0; var_2_bool = 0; var_3_bool = 0; var_4_bool = 0; // 0x101 PushV
	var_5_bool = 0; // 0x102 PushV
	func_308(var_5_bool); // 0x103 Call
	var_9_bool = var_5_bool == 0; // 0x105 Not
	if(var_9_bool == 0) goto Label_264; // 0x106 JumpB
	return 4; // 0x107 Return
	
Label_264:
	IsOnGround(var_3_bool); // 0x108 ObjFunc
	var_10_bool = var_3_bool; // 0x10a Push
	if(var_10_bool == 0) goto Label_276; // 0x10b JumpB
	EventDisable(0); // 0x10c EventDisable
	IsOverrideActive(var_4_bool); // 0x10d Func
	var_11_bool = var_4_bool == 0; // 0x10f Not
	if(var_11_bool == 0) goto Label_275; // 0x110 JumpB
	Barter(var_0_object); // 0x111 Func
	
Label_275:
	EventEnable(0); // 0x113 EventEnable
	
Label_276:
	return 4; // 0x114 Return
}


main()
{
	var_0_object = Obj(); var_1_bool = 0; var_2_int = 0; var_3_object = Obj(); var_4_bool = 0; var_5_int = 0; // 0x0 PushV
	var_6_bool = 1; // 0x1 PushB
	SetVisibility(var_6_bool); // 0x2 Func
	GetScene(var_3_object); // 0x4 Func
	var_7_string = "nailed"; // 0x6 PushS
	GetProperty(var_7_string, var_4_bool); // 0x7 ObjFunc
	var_8_bool = var_4_bool; // 0x9 Push
	if(var_8_bool == 0) goto Label_155; // 0xa JumpB
	var_9_string = ""; var_10_int = 0; var_11_int = 0; // 0xb PushV
	var_9_string = "revolver_ammo"; // 0xc MovS
	var_10_int = 1; // 0xd MovI
	var_11_int = 10; // 0xe MovI
	func_277(var_9_string, var_10_int, var_11_int); // 0xf Call
	var_20_string = ""; var_21_int = 0; var_22_int = 0; // 0x11 PushV
	var_20_string = "rifle_ammo"; // 0x12 MovS
	var_21_int = 1; // 0x13 MovI
	var_22_int = 15; // 0x14 MovI
	func_277(var_20_string, var_21_int, var_22_int); // 0x15 Call
	var_23_string = ""; var_24_int = 0; var_25_int = 0; var_26_int = 0; // 0x17 PushV
	var_23_string = "alpha_pills"; // 0x18 MovS
	var_24_int = 1; // 0x19 MovI
	var_25_int = 4; // 0x1a MovI
	var_26_int = 4; // 0x1b MovI
	func_288(var_23_string, var_24_int, var_25_int, var_26_int); // 0x1c Call
	var_37_string = ""; var_38_int = 0; var_39_int = 0; var_40_int = 0; // 0x1e PushV
	var_37_string = "beta_pills"; // 0x1f MovS
	var_38_int = 1; // 0x20 MovI
	var_39_int = 8; // 0x21 MovI
	var_40_int = 3; // 0x22 MovI
	func_288(var_37_string, var_38_int, var_39_int, var_40_int); // 0x23 Call
	var_41_string = ""; var_42_int = 0; var_43_int = 0; var_44_int = 0; // 0x25 PushV
	var_41_string = "gamma_pills"; // 0x26 MovS
	var_42_int = 1; // 0x27 MovI
	var_43_int = 12; // 0x28 MovI
	var_44_int = 2; // 0x29 MovI
	func_288(var_41_string, var_42_int, var_43_int, var_44_int); // 0x2a Call
	var_45_string = ""; var_46_int = 0; var_47_int = 0; // 0x2c PushV
	var_45_string = "delta_pills"; // 0x2d MovS
	var_46_int = 1; // 0x2e MovI
	var_47_int = 15; // 0x2f MovI
	func_277(var_45_string, var_46_int, var_47_int); // 0x30 Call
	var_48_string = ""; var_49_int = 0; var_50_int = 0; // 0x32 PushV
	var_48_string = "tvirin"; // 0x33 MovS
	var_49_int = 1; // 0x34 MovI
	var_50_int = 20; // 0x35 MovI
	func_277(var_48_string, var_49_int, var_50_int); // 0x36 Call
	var_51_string = ""; var_52_int = 0; var_53_int = 0; // 0x38 PushV
	var_51_string = "lemon"; // 0x39 MovS
	var_52_int = 1; // 0x3a MovI
	var_53_int = 10; // 0x3b MovI
	func_277(var_51_string, var_52_int, var_53_int); // 0x3c Call
	var_54_string = ""; var_55_int = 0; var_56_int = 0; // 0x3e PushV
	var_54_string = "neomicin"; // 0x3f MovS
	var_55_int = 1; // 0x40 MovI
	var_56_int = 15; // 0x41 MovI
	func_277(var_54_string, var_55_int, var_56_int); // 0x42 Call
	var_57_string = ""; var_58_int = 0; var_59_int = 0; // 0x44 PushV
	var_57_string = "monomicin"; // 0x45 MovS
	var_58_int = 1; // 0x46 MovI
	var_59_int = 25; // 0x47 MovI
	func_277(var_57_string, var_58_int, var_59_int); // 0x48 Call
	var_60_string = ""; var_61_int = 0; var_62_int = 0; // 0x4a PushV
	var_60_string = "feromicin"; // 0x4b MovS
	var_61_int = 1; // 0x4c MovI
	var_62_int = 35; // 0x4d MovI
	func_277(var_60_string, var_61_int, var_62_int); // 0x4e Call
	var_63_string = ""; var_64_int = 0; var_65_int = 0; // 0x50 PushV
	var_63_string = "meradorm"; // 0x51 MovS
	var_64_int = 1; // 0x52 MovI
	var_65_int = 25; // 0x53 MovI
	func_277(var_63_string, var_64_int, var_65_int); // 0x54 Call
	var_66_string = ""; var_67_int = 0; var_68_int = 0; // 0x56 PushV
	var_66_string = "novocaine"; // 0x57 MovS
	var_67_int = 1; // 0x58 MovI
	var_68_int = 35; // 0x59 MovI
	func_277(var_66_string, var_67_int, var_68_int); // 0x5a Call
	var_69_string = ""; var_70_int = 0; var_71_int = 0; // 0x5c PushV
	var_69_string = "morfin"; // 0x5d MovS
	var_70_int = 1; // 0x5e MovI
	var_71_int = 40; // 0x5f MovI
	func_277(var_69_string, var_70_int, var_71_int); // 0x60 Call
	var_72_string = ""; var_73_int = 0; var_74_int = 0; // 0x62 PushV
	var_72_string = "etorfin"; // 0x63 MovS
	var_73_int = 1; // 0x64 MovI
	var_74_int = 40; // 0x65 MovI
	func_277(var_72_string, var_73_int, var_74_int); // 0x66 Call
	var_75_string = ""; var_76_int = 0; var_77_int = 0; // 0x68 PushV
	var_75_string = "syringe"; // 0x69 MovS
	var_76_int = 1; // 0x6a MovI
	var_77_int = 20; // 0x6b MovI
	func_277(var_75_string, var_76_int, var_77_int); // 0x6c Call
	var_78_string = ""; var_79_int = 0; var_80_int = 0; var_81_int = 0; // 0x6e PushV
	var_78_string = "kerosene"; // 0x6f MovS
	var_79_int = 1; // 0x70 MovI
	var_80_int = 2; // 0x71 MovI
	var_81_int = 10; // 0x72 MovI
	func_288(var_78_string, var_79_int, var_80_int, var_81_int); // 0x73 Call
	var_82_string = ""; var_83_int = 0; var_84_int = 0; // 0x75 PushV
	var_82_string = "lockpick"; // 0x76 MovS
	var_83_int = 1; // 0x77 MovI
	var_84_int = 15; // 0x78 MovI
	func_277(var_82_string, var_83_int, var_84_int); // 0x79 Call
	var_85_string = ""; var_86_int = 0; var_87_int = 0; // 0x7b PushV
	var_85_string = "Scalpel"; // 0x7c MovS
	var_86_int = 1; // 0x7d MovI
	var_87_int = 25; // 0x7e MovI
	func_277(var_85_string, var_86_int, var_87_int); // 0x7f Call
	var_88_int = 0; // 0x81 PushV
	func_314(var_88_int); // 0x82 Call
	var_5_int = var_88_int; // 0x83 Mov
	var_94_int = 3; // 0x85 PushI
	var_95_bool = var_5_int >= var_94_int; // 0x86 GE
	if(var_95_bool == 0) goto Label_154; // 0x87 JumpB
	var_96_string = ""; var_97_int = 0; var_98_int = 0; // 0x88 PushV
	var_96_string = "glove_disp"; // 0x89 MovS
	var_97_int = 1; // 0x8a MovI
	var_98_int = 30; // 0x8b MovI
	func_277(var_96_string, var_97_int, var_98_int); // 0x8c Call
	var_99_string = ""; var_100_int = 0; var_101_int = 0; // 0x8e PushV
	var_99_string = "glove"; // 0x8f MovS
	var_100_int = 1; // 0x90 MovI
	var_101_int = 30; // 0x91 MovI
	func_277(var_99_string, var_100_int, var_101_int); // 0x92 Call
	var_102_string = ""; var_103_int = 0; var_104_int = 0; // 0x94 PushV
	var_102_string = "mask"; // 0x95 MovS
	var_103_int = 1; // 0x96 MovI
	var_104_int = 50; // 0x97 MovI
	func_277(var_102_string, var_103_int, var_104_int); // 0x98 Call
	
Label_154:
	goto Label_248; // 0x9a Jump
	
Label_248:
	func_253(); // 0xf9 Call
	return 6; // 0xfb Return
	
Label_155:
	var_105_string = ""; var_106_int = 0; var_107_int = 0; // 0x9b PushV
	var_105_string = "bandage"; // 0x9c MovS
	var_106_int = 1; // 0x9d MovI
	var_107_int = 50; // 0x9e MovI
	func_277(var_105_string, var_106_int, var_107_int); // 0x9f Call
	var_108_string = ""; var_109_int = 0; var_110_int = 0; // 0xa1 PushV
	var_108_string = "tourniquet"; // 0xa2 MovS
	var_109_int = 1; // 0xa3 MovI
	var_110_int = 50; // 0xa4 MovI
	func_277(var_108_string, var_109_int, var_110_int); // 0xa5 Call
	var_111_string = ""; var_112_int = 0; var_113_int = 0; // 0xa7 PushV
	var_111_string = "packet"; // 0xa8 MovS
	var_112_int = 1; // 0xa9 MovI
	var_113_int = 50; // 0xaa MovI
	func_277(var_111_string, var_112_int, var_113_int); // 0xab Call
	var_114_string = ""; var_115_int = 0; var_116_int = 0; var_117_int = 0; // 0xad PushV
	var_114_string = "needle"; // 0xae MovS
	var_115_int = 1; // 0xaf MovI
	var_116_int = 15; // 0xb0 MovI
	var_117_int = 2; // 0xb1 MovI
	func_288(var_114_string, var_115_int, var_116_int, var_117_int); // 0xb2 Call
	var_118_string = ""; var_119_int = 0; var_120_int = 0; var_121_int = 0; // 0xb4 PushV
	var_118_string = "hook"; // 0xb5 MovS
	var_119_int = 1; // 0xb6 MovI
	var_120_int = 15; // 0xb7 MovI
	var_121_int = 3; // 0xb8 MovI
	func_288(var_118_string, var_119_int, var_120_int, var_121_int); // 0xb9 Call
	var_122_string = ""; var_123_int = 0; var_124_int = 0; var_125_int = 0; // 0xbb PushV
	var_122_string = "flower"; // 0xbc MovS
	var_123_int = 1; // 0xbd MovI
	var_124_int = 10; // 0xbe MovI
	var_125_int = 2; // 0xbf MovI
	func_288(var_122_string, var_123_int, var_124_int, var_125_int); // 0xc0 Call
	var_126_string = ""; var_127_int = 0; var_128_int = 0; // 0xc2 PushV
	var_126_string = "syringe"; // 0xc3 MovS
	var_127_int = 1; // 0xc4 MovI
	var_128_int = 30; // 0xc5 MovI
	func_277(var_126_string, var_127_int, var_128_int); // 0xc6 Call
	var_129_string = ""; var_130_int = 0; var_131_int = 0; // 0xc8 PushV
	var_129_string = "watch"; // 0xc9 MovS
	var_130_int = 1; // 0xca MovI
	var_131_int = 30; // 0xcb MovI
	func_277(var_129_string, var_130_int, var_131_int); // 0xcc Call
	var_132_string = ""; var_133_int = 0; var_134_int = 0; // 0xce PushV
	var_132_string = "razor"; // 0xcf MovS
	var_133_int = 1; // 0xd0 MovI
	var_134_int = 30; // 0xd1 MovI
	func_277(var_132_string, var_133_int, var_134_int); // 0xd2 Call
	var_135_string = ""; var_136_int = 0; var_137_int = 0; // 0xd4 PushV
	var_135_string = "beads"; // 0xd5 MovS
	var_136_int = 1; // 0xd6 MovI
	var_137_int = 20; // 0xd7 MovI
	func_277(var_135_string, var_136_int, var_137_int); // 0xd8 Call
	var_138_string = ""; var_139_int = 0; var_140_int = 0; // 0xda PushV
	var_138_string = "bracelet"; // 0xdb MovS
	var_139_int = 1; // 0xdc MovI
	var_140_int = 20; // 0xdd MovI
	func_277(var_138_string, var_139_int, var_140_int); // 0xde Call
	var_141_string = ""; var_142_int = 0; var_143_int = 0; // 0xe0 PushV
	var_141_string = "ear_ring"; // 0xe1 MovS
	var_142_int = 1; // 0xe2 MovI
	var_143_int = 20; // 0xe3 MovI
	func_277(var_141_string, var_142_int, var_143_int); // 0xe4 Call
	var_144_string = ""; var_145_int = 0; var_146_int = 0; // 0xe6 PushV
	var_144_string = "gold_ring"; // 0xe7 MovS
	var_145_int = 1; // 0xe8 MovI
	var_146_int = 50; // 0xe9 MovI
	func_277(var_144_string, var_145_int, var_146_int); // 0xea Call
	var_147_string = ""; var_148_int = 0; var_149_int = 0; // 0xec PushV
	var_147_string = "silver_ring"; // 0xed MovS
	var_148_int = 1; // 0xee MovI
	var_149_int = 30; // 0xef MovI
	func_277(var_147_string, var_148_int, var_149_int); // 0xf0 Call
	var_150_string = ""; var_151_int = 0; var_152_int = 0; // 0xf2 PushV
	var_150_string = "glove"; // 0xf3 MovS
	var_151_int = 1; // 0xf4 MovI
	var_152_int = 40; // 0xf5 MovI
	func_277(var_150_string, var_151_int, var_152_int); // 0xf6 Call
}


func_288(var_23_string, var_24_int, var_25_int, var_26_int)
{
	var_27_int = 0; var_28_bool = 0; var_29_int = 0; var_30_bool = 0; // 0x120 PushV
	var_31_bool = 0; var_32_int = 0; var_33_int = 0; // 0x121 PushV
	var_32_int = var_24_int; // 0x122 Mov
	var_33_int = var_25_int; // 0x123 Mov
	func_303(var_31_bool, var_32_int, var_33_int); // 0x124 Call
	if(var_31_bool == 0) goto Label_302; // 0x126 JumpB
	irand(var_29_int, var_26_int); // 0x127 Func
	var_34_int = 0; // 0x129 PushI
	var_35_int = 1; // 0x12a PushI
	var_36_int = var_26_int + var_35_int; // 0x12b Add
	AddItem(var_30_bool, var_23_string, var_34_int, var_36_int); // 0x12c Func
	
Label_302:
	return 4; // 0x12e Return
}


func_303(var_14_bool, var_15_int, var_16_int)
{
	var_17_int = 0; var_18_int = 0; // 0x12f PushV
	irand(var_18_int, var_16_int); // 0x130 Func
	var_14_bool = var_18_int < var_15_int; // 0x132 LT2
	return 2; // 0x133 Return
}


func_308(var_5_bool)
{
	var_6_int = 0; var_7_int = 0; // 0x134 PushV
	var_8_string = "nouse_container"; // 0x135 PushS
	GetVariable(var_8_string, var_7_int); // 0x136 Func
	var_5_bool = !var_7_int; // 0x138 Not2
	return 2; // 0x139 Return
}


func_277(var_9_string, var_10_int, var_11_int)
{
	var_12_bool = 0; var_13_bool = 0; // 0x115 PushV
	var_14_bool = 0; var_15_int = 0; var_16_int = 0; // 0x116 PushV
	var_15_int = var_10_int; // 0x117 Mov
	var_16_int = var_11_int; // 0x118 Mov
	func_303(var_14_bool, var_15_int, var_16_int); // 0x119 Call
	if(var_14_bool == 0) goto Label_287; // 0x11b JumpB
	var_19_int = 0; // 0x11c PushI
	AddItem(var_13_bool, var_9_string, var_19_int); // 0x11d Func
	
Label_287:
	return 2; // 0x11f Return
}


func_314(var_88_int)
{
	var_89_float = 0; var_90_float = 0; // 0x13a PushV
	GetGameTime(var_90_float); // 0x13b Func
	var_91_int = 1; // 0x13d PushI
	var_92_int = 0; // 0x13e PushV
	var_93_int = 24; // 0x13f PushI
	var_92_int = var_90_float / var_90_float; // 0x140 Div2
	var_88_int = var_91_int + var_92_int; // 0x141 Add2
	return 2; // 0x142 Return
}


func_253()
{
	
Label_253:
	Hold(); // 0xfd Func
	goto Label_253; // 0xff Jump
}


