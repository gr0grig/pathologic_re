task_0_event_26(var_0_object, var_1_object, var_2_object, var_3_string)
{
	var_4_object = Obj(); var_5_object = Obj(); var_6_object = Obj(); var_7_object = Obj(); var_8_int = 0; var_9_object = Obj(); var_10_object = Obj(); var_11_object = Obj(); var_12_object = Obj(); var_13_int = 0; // 0x1d PushV
	Trace(var_3_string); // 0x1e Func
	var_14_string = "init_sobor"; // 0x20 PushS
	var_15_bool = var_3_string == var_14_string; // 0x21 Eq
	if(var_15_bool == 0) goto Label_85; // 0x22 JumpB
	var_16_string = "sobor"; // 0x23 PushS
	GetSceneByName(var_9_object, var_16_string); // 0x24 Func
	var_17_object = Obj(); var_18_object = Obj(); var_19_string = ""; var_20_string = ""; var_21_string = ""; // 0x26 PushV
	var_18_object = var_9_object; // 0x27 Mov
	var_19_string = "pt_b7q01_birdmask"; // 0x28 MovS
	var_20_string = "pers_birdmask"; // 0x29 MovS
	var_21_string = "b7q01_sobor_mbirdmask.xml"; // 0x2a MovS
	func_319(var_17_object, var_18_object, var_19_string, var_20_string, var_21_string); // 0x2b NEW_2
	add(var_17_object); // 0x2d TObjFunc
	var_35_object = Obj(); var_36_object = Obj(); var_37_string = ""; var_38_string = ""; var_39_string = ""; // 0x2f PushV
	var_36_object = var_9_object; // 0x30 Mov
	var_37_string = "pt_b7q01_birdmask1"; // 0x31 MovS
	var_38_string = "pers_birdmask"; // 0x32 MovS
	var_39_string = "b7q01_sobor_birdmask.xml"; // 0x33 MovS
	func_319(var_35_object, var_36_object, var_37_string, var_38_string, var_39_string); // 0x34 NEW_2
	add(var_35_object); // 0x36 TObjFunc
	var_40_object = Obj(); var_41_object = Obj(); var_42_string = ""; var_43_string = ""; var_44_string = ""; // 0x38 PushV
	var_41_object = var_9_object; // 0x39 Mov
	var_42_string = "pt_b7q01_birdmask2"; // 0x3a MovS
	var_43_string = "pers_birdmask"; // 0x3b MovS
	var_44_string = "b7q01_sobor_birdmask.xml"; // 0x3c MovS
	func_319(var_40_object, var_41_object, var_42_string, var_43_string, var_44_string); // 0x3d NEW_2
	add(var_40_object); // 0x3f TObjFunc
	var_45_object = Obj(); var_46_object = Obj(); var_47_string = ""; var_48_string = ""; var_49_string = ""; // 0x41 PushV
	var_46_object = var_9_object; // 0x42 Mov
	var_47_string = "pt_b7q01_patrol1"; // 0x43 MovS
	var_48_string = "pers_patrool"; // 0x44 MovS
	var_49_string = "b7q01_sobor_patrol.xml"; // 0x45 MovS
	func_319(var_45_object, var_46_object, var_47_string, var_48_string, var_49_string); // 0x46 NEW_2
	add(var_45_object); // 0x48 TObjFunc
	var_50_object = Obj(); var_51_object = Obj(); var_52_string = ""; var_53_string = ""; var_54_string = ""; // 0x4a PushV
	var_51_object = var_9_object; // 0x4b Mov
	var_52_string = "pt_b7q01_patrol2"; // 0x4c MovS
	var_53_string = "pers_patrool"; // 0x4d MovS
	var_54_string = "b7q01_sobor_patrol.xml"; // 0x4e MovS
	func_319(var_50_object, var_51_object, var_52_string, var_53_string, var_54_string); // 0x4f NEW_2
	add(var_50_object); // 0x51 TObjFunc
	var_9_object = 0; // 0x53 SetNull
	goto Label_261; // 0x54 Jump
	
Label_261:
	return 10; // 0x105 Return
	
Label_85:
	var_55_string = "init_prison"; // 0x55 PushS
	var_56_bool = var_3_string == var_55_string; // 0x56 Eq
	if(var_56_bool == 0) goto Label_138; // 0x57 JumpB
	var_57_string = "uprava_prison"; // 0x58 PushS
	GetSceneByName(var_10_object, var_57_string); // 0x59 Func
	var_58_object = Obj(); var_59_object = Obj(); var_60_string = ""; var_61_string = ""; var_62_string = ""; // 0x5b PushV
	var_59_object = var_10_object; // 0x5c Mov
	var_60_string = "pt_b7q01_patrol1"; // 0x5d MovS
	var_61_string = "pers_patrool"; // 0x5e MovS
	var_62_string = "b7q01_prison_patrol1.xml"; // 0x5f MovS
	func_319(var_58_object, var_59_object, var_60_string, var_61_string, var_62_string); // 0x60 NEW_2
	add(var_58_object); // 0x62 TObjFunc
	var_63_object = Obj(); var_64_object = Obj(); var_65_string = ""; var_66_string = ""; var_67_string = ""; // 0x64 PushV
	var_64_object = var_10_object; // 0x65 Mov
	var_65_string = "pt_b7q01_patrol2"; // 0x66 MovS
	var_66_string = "pers_patrool"; // 0x67 MovS
	var_67_string = "b7q01_prison_patrol2.xml"; // 0x68 MovS
	func_319(var_63_object, var_64_object, var_65_string, var_66_string, var_67_string); // 0x69 NEW_2
	add(var_63_object); // 0x6b TObjFunc
	var_68_object = Obj(); var_69_object = Obj(); var_70_string = ""; var_71_string = ""; var_72_string = ""; // 0x6d PushV
	var_69_object = var_10_object; // 0x6e Mov
	var_70_string = "pt_b7q01_prisoner1"; // 0x6f MovS
	var_71_string = "pers_worker"; // 0x70 MovS
	var_72_string = "b7q01_prisoner.xml"; // 0x71 MovS
	func_319(var_68_object, var_69_object, var_70_string, var_71_string, var_72_string); // 0x72 NEW_2
	add(var_68_object); // 0x74 TObjFunc
	var_73_object = Obj(); var_74_object = Obj(); var_75_string = ""; var_76_string = ""; var_77_string = ""; // 0x76 PushV
	var_74_object = var_10_object; // 0x77 Mov
	var_75_string = "pt_b7q01_prisoner2"; // 0x78 MovS
	var_76_string = "pers_unosha"; // 0x79 MovS
	var_77_string = "b7q01_prisoner.xml"; // 0x7a MovS
	func_319(var_73_object, var_74_object, var_75_string, var_76_string, var_77_string); // 0x7b NEW_2
	add(var_73_object); // 0x7d TObjFunc
	var_78_object = Obj(); var_79_object = Obj(); var_80_string = ""; var_81_string = ""; var_82_string = ""; // 0x7f PushV
	var_79_object = var_10_object; // 0x80 Mov
	var_80_string = "pt_b7q01_prisoner3"; // 0x81 MovS
	var_81_string = "pers_grabitel"; // 0x82 MovS
	var_82_string = "b7q01_prisoner.xml"; // 0x83 MovS
	func_319(var_78_object, var_79_object, var_80_string, var_81_string, var_82_string); // 0x84 NEW_2
	add(var_78_object); // 0x86 TObjFunc
	var_10_object = 0; // 0x88 SetNull
	goto Label_261; // 0x89 Jump
	
Label_138:
	var_83_string = "clear_prison"; // 0x8a PushS
	var_84_bool = var_3_string == var_83_string; // 0x8b Eq
	if(var_84_bool == 0) goto Label_147; // 0x8c JumpB
	var_85_object = Obj(); var_86_string = ""; // 0x8d PushV
	var_85_object = var_1_object; // 0x8e MovT
	var_86_string = "cleanup"; // 0x8f MovS
	func_362(var_85_object, var_86_string); // 0x90 NEW_2
	goto Label_261; // 0x92 Jump
	
Label_147:
	var_97_string = "init_gorbun_house"; // 0x93 PushS
	var_98_bool = var_3_string == var_97_string; // 0x94 Eq
	if(var_98_bool == 0) goto Label_206; // 0x95 JumpB
	var_99_string = "lc_house6_05"; // 0x96 PushS
	GetSceneByName(var_11_object, var_99_string); // 0x97 Func
	var_100_object = Obj(); var_101_object = Obj(); var_102_string = ""; var_103_string = ""; var_104_string = ""; // 0x99 PushV
	var_101_object = var_11_object; // 0x9a Mov
	var_102_string = "pt_b7q01_wastedmale"; // 0x9b MovS
	var_103_string = "pers_wasted_male"; // 0x9c MovS
	var_104_string = "b7q01_gorbun_mwastedmale.xml"; // 0x9d MovS
	func_319(var_100_object, var_101_object, var_102_string, var_103_string, var_104_string); // 0x9e NEW_2
	add(var_100_object); // 0xa0 TObjFunc
	var_105_object = Obj(); var_106_object = Obj(); var_107_string = ""; var_108_string = ""; var_109_string = ""; // 0xa2 PushV
	var_106_object = var_11_object; // 0xa3 Mov
	var_107_string = "pt_b7q01_wastedmale1"; // 0xa4 MovS
	var_108_string = "pers_wasted_male"; // 0xa5 MovS
	var_109_string = "b7q01_gorbun_wastedmale.xml"; // 0xa6 MovS
	func_319(var_105_object, var_106_object, var_107_string, var_108_string, var_109_string); // 0xa7 NEW_2
	add(var_105_object); // 0xa9 TObjFunc
	var_110_object = Obj(); var_111_object = Obj(); var_112_string = ""; var_113_string = ""; var_114_string = ""; // 0xab PushV
	var_111_object = var_11_object; // 0xac Mov
	var_112_string = "pt_b7q01_wastedmale2"; // 0xad MovS
	var_113_string = "pers_wasted_male"; // 0xae MovS
	var_114_string = "b7q01_gorbun_wastedmale.xml"; // 0xaf MovS
	func_319(var_110_object, var_111_object, var_112_string, var_113_string, var_114_string); // 0xb0 NEW_2
	add(var_110_object); // 0xb2 TObjFunc
	var_115_object = Obj(); var_116_object = Obj(); var_117_string = ""; var_118_string = ""; // 0xb4 PushV
	var_116_object = var_11_object; // 0xb5 Mov
	var_117_string = "b7q01_corpse1"; // 0xb6 MovS
	var_118_string = "actor_disp.bin"; // 0xb7 MovS
	func_337(var_115_object, var_116_object, var_117_string, var_118_string); // 0xb8 NEW_2
	add(var_115_object); // 0xba TObjFunc
	var_123_object = Obj(); var_124_object = Obj(); var_125_string = ""; var_126_string = ""; // 0xbc PushV
	var_124_object = var_11_object; // 0xbd Mov
	var_125_string = "b7q01_corpse2"; // 0xbe MovS
	var_126_string = "actor_disp.bin"; // 0xbf MovS
	func_337(var_123_object, var_124_object, var_125_string, var_126_string); // 0xc0 NEW_2
	add(var_123_object); // 0xc2 TObjFunc
	var_127_object = Obj(); var_128_object = Obj(); var_129_string = ""; var_130_string = ""; // 0xc4 PushV
	var_128_object = var_11_object; // 0xc5 Mov
	var_129_string = "b7q01_corpse3"; // 0xc6 MovS
	var_130_string = "actor_disp.bin"; // 0xc7 MovS
	func_337(var_127_object, var_128_object, var_129_string, var_130_string); // 0xc8 NEW_2
	add(var_127_object); // 0xca TObjFunc
	var_11_object = 0; // 0xcc SetNull
	goto Label_261; // 0xcd Jump
	
Label_206:
	var_131_string = "clear_gorbun_house"; // 0xce PushS
	var_132_bool = var_3_string == var_131_string; // 0xcf Eq
	if(var_132_bool == 0) goto Label_215; // 0xd0 JumpB
	var_133_object = Obj(); var_134_string = ""; // 0xd1 PushV
	var_133_object = var_2_object; // 0xd2 MovT
	var_134_string = "cleanup"; // 0xd3 MovS
	func_362(var_133_object, var_134_string); // 0xd4 NEW_2
	goto Label_261; // 0xd6 Jump
	
Label_215:
	var_135_string = "place_aglaja"; // 0xd7 PushS
	var_136_bool = var_3_string == var_135_string; // 0xd8 Eq
	if(var_136_bool == 0) goto Label_231; // 0xd9 JumpB
	var_137_string = "sobor"; // 0xda PushS
	GetSceneByName(var_12_object, var_137_string); // 0xdb Func
	var_138_string = "aglaja"; // 0xdd PushS
	Trigger(var_12_object, var_138_string); // 0xde Func
	var_139_object = Obj(); var_140_string = ""; // 0xe0 PushV
	var_139_object = var_0_object; // 0xe1 MovT
	var_140_string = "cleanup"; // 0xe2 MovS
	func_362(var_139_object, var_140_string); // 0xe3 NEW_2
	var_12_object = 0; // 0xe5 SetNull
	goto Label_261; // 0xe6 Jump
	
Label_231:
	var_141_string = "cleanup"; // 0xe7 PushS
	var_142_bool = var_3_string == var_141_string; // 0xe8 Eq
	if(var_142_bool == 0) goto Label_248; // 0xe9 JumpB
	var_143_string = "b7q01"; // 0xea PushS
	GetVariable(var_143_string, var_13_int); // 0xeb Func
	var_144_int = 1000; // 0xed PushI
	var_145_bool = var_13_int != var_144_int; // 0xee Neq
	if(var_145_bool == 0) goto Label_244; // 0xef JumpB
	func_262(); // 0xf1 NEW_2
	goto Label_247; // 0xf3 Jump
	
Label_247:
	goto Label_261; // 0xf7 Jump
	
Label_244:
	func_278(var_11_object, var_12_object, var_13_int); // 0xf5 NEW_2
	
Label_248:
	var_161_string = "fail"; // 0xf8 PushS
	var_162_bool = var_3_string == var_161_string; // 0xf9 Eq
	if(var_162_bool == 0) goto Label_255; // 0xfa JumpB
	func_262(); // 0xfc NEW_2
	goto Label_261; // 0xfe Jump
	
Label_255:
	var_163_string = "completed"; // 0xff PushS
	var_164_bool = var_3_string == var_163_string; // 0x100 Eq
	if(var_164_bool == 0) goto Label_261; // 0x101 JumpB
	func_270(); // 0x103 NEW_2
}


main(var_0_object, var_1_object, var_2_object)
{
	var_3_object = Obj(); var_4_object = Obj(); // 0x0 PushV
	var_5_string = ""; var_6_bool = 0; // 0x1 PushV
	var_5_string = "sobor@door1"; // 0x2 MovS
	var_6_bool = 0; // 0x3 MovB
	func_345(var_5_string, var_6_bool); // 0x4 NEW_2
	var_15_object = Obj(); // 0x6 PushV
	func_313(var_15_object); // 0x7 NEW_2
	var_0_object = var_15_object; // 0x8 TMov
	var_18_object = Obj(); // 0xa PushV
	func_313(var_18_object); // 0xb NEW_2
	var_1_object = var_18_object; // 0xc TMov
	var_19_object = Obj(); // 0xe PushV
	func_313(var_19_object); // 0xf NEW_2
	var_2_object = var_19_object; // 0x10 TMov
	var_20_string = "sobor"; // 0x12 PushS
	GetSceneByName(var_4_object, var_20_string); // 0x13 Func
	var_21_string = "noaglaja"; // 0x15 PushS
	Trigger(var_4_object, var_21_string); // 0x16 Func
	
Label_24:
	Hold(); // 0x18 Func
	goto Label_24; // 0x1a Jump
}


func_262()
{
	var_146_string = "b7q01"; // 0x106 PushS
	var_147_int = -1; // 0x107 PushI
	SetVariable(var_146_string, var_147_int); // 0x108 Func
	func_278(var_11_object, var_12_object, var_13_int); // 0x10b NEW_2
	return 0; // 0x10d Return
}


func_313(var_15_object)
{
	var_16_object = Obj(); var_17_object = Obj(); // 0x139 PushV
	CreateObjectVector(var_17_object); // 0x13a Func
	var_15_object = var_17_object; // 0x13c Mov
	return 2; // 0x13d Return
}


func_362(var_85_object, var_86_string)
{
	var_87_int = 0; var_88_int = 0; var_89_object = Obj(); var_90_int = 0; var_91_int = 0; var_92_object = Obj(); // 0x16a PushV
	var_93_object = var_85_object; // 0x16b Push
	if(var_93_object == 0) goto Label_380; // 0x16c JumpB
	size(var_90_int); // 0x16d ObjFunc
	var_91_int = 0; // 0x16f MovI
	
Label_368:
	var_94_bool = var_91_int < var_90_int; // 0x170 LT
	if(var_94_bool == 0) goto Label_380; // 0x171 JumpB
	get(var_92_object, var_91_int); // 0x172 ObjFunc
	var_95_object = var_92_object; // 0x174 Push
	if(var_95_object == 0) goto Label_376; // 0x175 JumpB
	Trigger(var_92_object, var_86_string); // 0x176 Func
	
Label_376:
	var_92_object = 0; // 0x178 SetNull
	var_96_int = 1; // 0x179 PushI
	var_91_int = var_91_int + var_96_int; // 0x17a Add2
	goto Label_368; // 0x17b Jump
	
Label_380:
	return 6; // 0x17c Return
}


func_270()
{
	var_165_string = "b7q01"; // 0x10e PushS
	var_166_int = 1000; // 0x10f PushI
	SetVariable(var_165_string, var_166_int); // 0x110 Func
	func_278(var_11_object, var_12_object, var_13_int); // 0x113 NEW_2
	return 0; // 0x115 Return
}


func_337(var_115_object, var_116_object, var_117_string, var_118_string)
{
	var_119_object = Obj(); var_120_object = Obj(); // 0x151 PushV
	var_121_cvector = CVector(0.0, 0.0, 0.0); // 0x152 PushVec
	var_122_cvector = CVector(0.0, 0.0, 1.0); // 0x153 PushVec
	AddScriptedActor(var_120_object, var_117_string, var_118_string, var_116_object, var_121_cvector, var_122_cvector); // 0x154 Func
	var_115_object = var_120_object; // 0x156 Mov
	return 2; // 0x157 Return
}


func_307(var_158_object)
{
	var_159_object = Obj(); var_160_object = Obj(); // 0x133 PushV
	self(var_160_object); // 0x134 Func
	var_158_object = var_160_object; // 0x136 Mov
	return 2; // 0x137 Return
}


func_278(var_0_object, var_1_object, var_2_object)
{
	var_148_object = Obj(); var_149_object = Obj(); // 0x116 PushV
	var_150_object = Obj(); var_151_string = ""; // 0x117 PushV
	var_150_object = var_0_object; // 0x118 MovT
	var_151_string = "cleanup"; // 0x119 MovS
	func_362(var_150_object, var_151_string); // 0x11a NEW_2
	var_152_object = Obj(); var_153_string = ""; // 0x11c PushV
	var_152_object = var_1_object; // 0x11d MovT
	var_153_string = "cleanup"; // 0x11e MovS
	func_362(var_152_object, var_153_string); // 0x11f NEW_2
	var_154_object = Obj(); var_155_string = ""; // 0x121 PushV
	var_154_object = var_2_object; // 0x122 MovT
	var_155_string = "cleanup"; // 0x123 MovS
	func_362(var_154_object, var_155_string); // 0x124 NEW_2
	var_156_string = "sobor"; // 0x126 PushS
	GetSceneByName(var_149_object, var_156_string); // 0x127 Func
	var_157_string = "aglaja"; // 0x129 PushS
	Trigger(var_149_object, var_157_string); // 0x12a Func
	var_158_object = Obj(); // 0x12c PushV
	func_307(var_158_object); // 0x12d NEW_2
	RemoveActor(var_158_object); // 0x12f Func
	return 2; // 0x131 Return
}


func_345(var_5_string, var_6_bool)
{
	var_7_object = Obj(); var_8_object = Obj(); // 0x159 PushV
	FindActor(var_8_object, var_5_string); // 0x15a Func
	var_9_bool = var_8_object == 0; // 0x15c Not
	if(var_9_bool == 0) goto Label_357; // 0x15d JumpB
	var_10_string = "Door "; // 0x15e PushS
	var_11_int = var_10_string + var_5_string; // 0x15f Add
	var_12_string = " not found"; // 0x160 PushS
	var_13_int = var_11_int + var_12_string; // 0x161 Add
	Trace(var_13_int); // 0x162 Func
	goto Label_360; // 0x164 Jump
	
Label_360:
	return 2; // 0x168 Return
	
Label_357:
	var_14_string = "locked"; // 0x165 PushS
	SetProperty(var_14_string, var_6_bool); // 0x166 ObjFunc
}


func_319(var_17_object, var_18_object, var_19_string, var_20_string, var_21_string)
{
	var_22_bool = 0; var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_object = Obj(); var_26_bool = 0; var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_object = Obj(); // 0x13f PushV
	GetLocator(var_19_string, var_26_bool, var_27_cvector, var_28_cvector); // 0x140 ObjFunc
	var_30_bool = var_26_bool == 0; // 0x142 Not
	if(var_30_bool == 0) goto Label_332; // 0x143 JumpB
	var_31_string = "Locator "; // 0x144 PushS
	var_32_int = var_31_string + var_19_string; // 0x145 Add
	var_33_string = " doesn't exist"; // 0x146 PushS
	var_34_int = var_32_int + var_33_string; // 0x147 Add
	Trace(var_34_int); // 0x148 Func
	var_29_object = 0; // 0x14a SetNull
	goto Label_334; // 0x14b Jump
	
Label_334:
	var_17_object = var_29_object; // 0x14e Mov
	return 8; // 0x14f Return
	
Label_332:
	AddActor(var_29_object, var_20_string, var_18_object, var_27_cvector, var_28_cvector, var_21_string); // 0x14c Func
}


