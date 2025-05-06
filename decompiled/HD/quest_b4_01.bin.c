task_0_event_26(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_bool, var_11_string)
{
	var_12_object = Obj(); var_13_bool = 0; var_14_object = Obj(); var_15_object = Obj(); var_16_object = Obj(); var_17_bool = 0; var_18_cvector = CVector(0,0,0); var_19_bool = 0; var_20_int = 0; var_21_object = Obj(); var_22_bool = 0; var_23_object = Obj(); var_24_object = Obj(); var_25_object = Obj(); var_26_bool = 0; var_27_cvector = CVector(0,0,0); var_28_bool = 0; var_29_int = 0; // 0x12 PushV
	Trace(var_11_string); // 0x13 Func
	var_30_string = "rubin_unlock"; // 0x15 PushS
	var_31_bool = var_11_string == var_30_string; // 0x16 Eq
	if(var_31_bool == 0) goto Label_38; // 0x17 JumpB
	var_32_string = ""; var_33_bool = 0; // 0x18 PushV
	var_32_string = "warehouse_rubin@door1"; // 0x19 MovS
	var_33_bool = 0; // 0x1a MovB
	func_437(var_32_string, var_33_bool); // 0x1b NEW_2
	var_42_string = "iwarehouse_rubin_Stol"; // 0x1d PushS
	FindActor(var_21_object, var_42_string); // 0x1e Func
	var_43_string = "b4q01_sample"; // 0x20 PushS
	var_44_int = 0; // 0x21 PushI
	AddItem(var_22_bool, var_43_string, var_44_int); // 0x22 ObjFunc
	var_21_object = 0; // 0x24 SetNull
	goto Label_273; // 0x25 Jump
	
Label_273:
	return 18; // 0x111 Return
	
Label_38:
	var_45_string = "place_rubin"; // 0x26 PushS
	var_46_bool = var_11_string == var_45_string; // 0x27 Eq
	if(var_46_bool == 0) goto Label_82; // 0x28 JumpB
	var_47_string = "warehouse_gangster"; // 0x29 PushS
	GetSceneByName(var_23_object, var_47_string); // 0x2a Func
	var_48_object = Obj(); var_49_object = Obj(); var_50_string = ""; var_51_string = ""; var_52_string = ""; // 0x2c PushV
	var_49_object = var_23_object; // 0x2d Mov
	var_50_string = "pt_b4q01_rubin"; // 0x2e MovS
	var_51_string = "NPC_Rubin"; // 0x2f MovS
	var_52_string = "b4q01_Rubin.xml"; // 0x30 MovS
	func_419(var_48_object, var_49_object, var_50_string, var_51_string, var_52_string); // 0x31 NEW_2
	var_1_object = var_48_object; // 0x32 TMov
	var_66_object = Obj(); var_67_object = Obj(); var_68_string = ""; var_69_string = ""; var_70_string = ""; // 0x34 PushV
	var_67_object = var_23_object; // 0x35 Mov
	var_68_string = "pt_b4q01_agony1"; // 0x36 MovS
	var_69_string = "pers_unosha"; // 0x37 MovS
	var_70_string = "b4q01_agony1.xml"; // 0x38 MovS
	func_419(var_66_object, var_67_object, var_68_string, var_69_string, var_70_string); // 0x39 NEW_2
	var_2_object = var_66_object; // 0x3a TMov
	var_71_object = Obj(); var_72_object = Obj(); var_73_string = ""; var_74_string = ""; var_75_string = ""; // 0x3c PushV
	var_72_object = var_23_object; // 0x3d Mov
	var_73_string = "pt_b4q01_agony2"; // 0x3e MovS
	var_74_string = "pers_worker"; // 0x3f MovS
	var_75_string = "b4q01_agony2.xml"; // 0x40 MovS
	func_419(var_71_object, var_72_object, var_73_string, var_74_string, var_75_string); // 0x41 NEW_2
	var_3_object = var_71_object; // 0x42 TMov
	var_76_string = "b4q01_corpse"; // 0x44 PushS
	var_77_string = "actor_disp.bin"; // 0x45 PushS
	var_78_cvector = CVector(0.0, 0.0, 0.0); // 0x46 PushVec
	var_79_cvector = CVector(0.0, 0.0, 1.0); // 0x47 PushVec
	AddScriptedActor(var_76_string, var_76_string, var_77_string, var_23_object, var_78_cvector, var_79_cvector); // 0x48 Func
	var_80_string = ""; var_81_bool = 0; // 0x4a PushV
	var_80_string = "warehouse_gangster@door1"; // 0x4b MovS
	var_81_bool = 0; // 0x4c MovB
	func_437(var_80_string, var_81_bool); // 0x4d NEW_2
	var_0_bool = 1; // 0x4f TMovB
	var_23_object = 0; // 0x50 SetNull
	goto Label_273; // 0x51 Jump
	
Label_82:
	var_82_string = "wg_unload"; // 0x52 PushS
	var_83_bool = var_11_string == var_82_string; // 0x53 Eq
	if(var_83_bool == 0) goto Label_194; // 0x54 JumpB
	var_84_bool = var_0_bool; // 0x55 PushT
	if(var_84_bool == 0) goto Label_193; // 0x56 JumpB
	var_10_bool = 1; // 0x57 TMovB
	func_290(var_26_bool, var_27_cvector, var_28_bool, var_29_int); // 0x59 NEW_2
	var_94_string = ""; var_95_bool = 0; // 0x5b PushV
	var_94_string = "warehouse_gangster@door1"; // 0x5c MovS
	var_95_bool = 1; // 0x5d MovB
	func_437(var_94_string, var_95_bool); // 0x5e NEW_2
	GetMainOutdoorScene(var_24_object); // 0x60 Func
	var_96_object = Obj(); var_97_object = Obj(); var_98_string = ""; var_99_string = ""; var_100_string = ""; // 0x62 PushV
	var_97_object = var_24_object; // 0x63 Mov
	var_98_string = "pt_b4q01_patrol1"; // 0x64 MovS
	var_99_string = "pers_patrool"; // 0x65 MovS
	var_100_string = "b4q01_patrol.xml"; // 0x66 MovS
	func_419(var_96_object, var_97_object, var_98_string, var_99_string, var_100_string); // 0x67 NEW_2
	add(var_96_object); // 0x69 TObjFunc
	var_101_object = Obj(); var_102_object = Obj(); var_103_string = ""; var_104_string = ""; var_105_string = ""; // 0x6b PushV
	var_102_object = var_24_object; // 0x6c Mov
	var_103_string = "pt_b4q01_patrol2"; // 0x6d MovS
	var_104_string = "pers_patrool"; // 0x6e MovS
	var_105_string = "b4q01_patrol.xml"; // 0x6f MovS
	func_419(var_101_object, var_102_object, var_103_string, var_104_string, var_105_string); // 0x70 NEW_2
	add(var_101_object); // 0x72 TObjFunc
	var_106_object = Obj(); var_107_object = Obj(); var_108_string = ""; var_109_string = ""; var_110_string = ""; // 0x74 PushV
	var_107_object = var_24_object; // 0x75 Mov
	var_108_string = "pt_b4q01_patrol3"; // 0x76 MovS
	var_109_string = "pers_patrool"; // 0x77 MovS
	var_110_string = "b4q01_patrol.xml"; // 0x78 MovS
	func_419(var_106_object, var_107_object, var_108_string, var_109_string, var_110_string); // 0x79 NEW_2
	add(var_106_object); // 0x7b TObjFunc
	var_111_object = Obj(); var_112_object = Obj(); var_113_string = ""; var_114_string = ""; var_115_string = ""; // 0x7d PushV
	var_112_object = var_24_object; // 0x7e Mov
	var_113_string = "pt_b4q01_patrol4"; // 0x7f MovS
	var_114_string = "pers_patrool"; // 0x80 MovS
	var_115_string = "b4q01_patrol.xml"; // 0x81 MovS
	func_419(var_111_object, var_112_object, var_113_string, var_114_string, var_115_string); // 0x82 NEW_2
	add(var_111_object); // 0x84 TObjFunc
	var_116_object = Obj(); var_117_string = ""; // 0x86 PushV
	var_117_string = "quest_b4_01_teleport"; // 0x87 MovS
	func_408(var_116_object, var_117_string); // 0x88 NEW_2
	var_124_string = "factory"; // 0x8a PushS
	GetSceneByName(var_24_object, var_124_string); // 0x8b Func
	var_125_object = Obj(); var_126_object = Obj(); var_127_string = ""; var_128_string = ""; var_129_string = ""; // 0x8d PushV
	var_126_object = var_24_object; // 0x8e Mov
	var_127_string = "pt_b4q01_patrol1_1"; // 0x8f MovS
	var_128_string = "pers_patrool"; // 0x90 MovS
	var_129_string = "b4q01_fpatrol1.xml"; // 0x91 MovS
	func_419(var_125_object, var_126_object, var_127_string, var_128_string, var_129_string); // 0x92 NEW_2
	var_8_object = var_125_object; // 0x93 TMov
	var_130_object = Obj(); var_131_object = Obj(); var_132_string = ""; var_133_string = ""; var_134_string = ""; // 0x95 PushV
	var_131_object = var_24_object; // 0x96 Mov
	var_132_string = "pt_b4q01_patrol2_1"; // 0x97 MovS
	var_133_string = "pers_patrool"; // 0x98 MovS
	var_134_string = "b4q01_fpatrol2.xml"; // 0x99 MovS
	func_419(var_130_object, var_131_object, var_132_string, var_133_string, var_134_string); // 0x9a NEW_2
	var_9_object = var_130_object; // 0x9b TMov
	var_135_string = "b4q01_factory_corpse"; // 0x9d PushS
	var_136_cvector = CVector(0.0, 0.0, 0.0); // 0x9e PushVec
	var_137_cvector = CVector(0.0, 0.0, 1.0); // 0x9f PushVec
	var_138_string = "b4q01_factory_corpse.xml"; // 0xa0 PushS
	AddActor(var_25_object, var_135_string, var_24_object, var_136_cvector, var_137_cvector, var_138_string); // 0xa1 Func
	var_139_object = Obj(); var_140_object = Obj(); var_141_string = ""; var_142_string = ""; var_143_string = ""; // 0xa3 PushV
	var_140_object = var_24_object; // 0xa4 Mov
	var_141_string = "pt_b4q01_agony1"; // 0xa5 MovS
	var_142_string = "pers_unosha"; // 0xa6 MovS
	var_143_string = "agony1_man.xml"; // 0xa7 MovS
	func_419(var_139_object, var_140_object, var_141_string, var_142_string, var_143_string); // 0xa8 NEW_2
	var_5_object = var_139_object; // 0xa9 TMov
	var_144_object = Obj(); var_145_object = Obj(); var_146_string = ""; var_147_string = ""; var_148_string = ""; // 0xab PushV
	var_145_object = var_24_object; // 0xac Mov
	var_146_string = "pt_b4q01_agony2"; // 0xad MovS
	var_147_string = "pers_worker"; // 0xae MovS
	var_148_string = "agony1_man.xml"; // 0xaf MovS
	func_419(var_144_object, var_145_object, var_146_string, var_147_string, var_148_string); // 0xb0 NEW_2
	var_6_object = var_144_object; // 0xb1 TMov
	var_149_int = 0; // 0xb3 PushI
	var_150_float = 20.0; // 0xb4 PushF
	SetTimer(var_149_int, var_150_float); // 0xb5 Func
	var_151_string = "pt_b4q01_fog"; // 0xb7 PushS
	GetLocator(var_151_string, var_26_bool, var_27_cvector); // 0xb8 ObjFunc
	var_152_object = Obj(); var_153_cvector = CVector(0,0,0); // 0xba PushV
	var_152_object = var_24_object; // 0xbb Mov
	var_153_cvector = var_27_cvector; // 0xbc Mov
	func_388(var_152_object, var_153_cvector); // 0xbd NEW_2
	var_25_object = 0; // 0xbf SetNull
	var_24_object = 0; // 0xc0 SetNull
	
Label_193:
	goto Label_273; // 0xc1 Jump
	
Label_194:
	var_159_string = "factory_unload"; // 0xc2 PushS
	var_160_bool = var_11_string == var_159_string; // 0xc3 Eq
	if(var_160_bool == 0) goto Label_208; // 0xc4 JumpB
	var_161_int = 0; // 0xc5 PushI
	KillTimer(var_161_int); // 0xc6 Func
	var_162_bool = var_10_bool; // 0xc8 PushT
	if(var_162_bool == 0) goto Label_207; // 0xc9 JumpB
	var_163_object = Obj(); // 0xca PushV
	func_396(var_163_object); // 0xcb NEW_2
	RemoveActor(var_163_object); // 0xcd Func
	
Label_207:
	goto Label_273; // 0xcf Jump
	
Label_208:
	var_166_string = "patrol_attack"; // 0xd0 PushS
	var_167_bool = var_11_string == var_166_string; // 0xd1 Eq
	if(var_167_bool == 0) goto Label_223; // 0xd2 JumpB
	var_168_string = ""; var_169_bool = 0; // 0xd3 PushV
	var_168_string = "ifactory_grid_door"; // 0xd4 MovS
	var_169_bool = 0; // 0xd5 MovB
	func_437(var_168_string, var_169_bool); // 0xd6 NEW_2
	var_170_string = "attack"; // 0xd8 PushS
	Trigger(var_23_object, var_170_string); // 0xd9 Func
	var_171_string = "attack"; // 0xdb PushS
	Trigger(var_22_bool, var_171_string); // 0xdc Func
	goto Label_273; // 0xde Jump
	
Label_223:
	var_172_string = "patrol_dead"; // 0xdf PushS
	var_173_bool = var_11_string == var_172_string; // 0xe0 Eq
	if(var_173_bool == 0) goto Label_243; // 0xe1 JumpB
	IsDead(var_28_bool); // 0xe2 TObjFunc
	var_174_bool = var_28_bool; // 0xe4 Push
	if(var_174_bool == 0) goto Label_242; // 0xe5 JumpB
	IsDead(var_28_bool); // 0xe6 TObjFunc
	var_175_bool = var_28_bool; // 0xe8 Push
	if(var_175_bool == 0) goto Label_242; // 0xe9 JumpB
	var_176_string = ""; var_177_bool = 0; // 0xea PushV
	var_176_string = "ifactory@door1"; // 0xeb MovS
	var_177_bool = 0; // 0xec MovB
	func_437(var_176_string, var_177_bool); // 0xed NEW_2
	var_178_string = "door_open"; // 0xef PushS
	PlaySound(var_178_string); // 0xf0 Func
	
Label_242:
	goto Label_273; // 0xf2 Jump
	
Label_243:
	var_179_string = "cleanup"; // 0xf3 PushS
	var_180_bool = var_11_string == var_179_string; // 0xf4 Eq
	if(var_180_bool == 0) goto Label_260; // 0xf5 JumpB
	var_181_string = "b4q01"; // 0xf6 PushS
	GetVariable(var_181_string, var_29_int); // 0xf7 Func
	var_182_int = 1000; // 0xf9 PushI
	var_183_bool = var_29_int != var_182_int; // 0xfa Neq
	if(var_183_bool == 0) goto Label_256; // 0xfb JumpB
	func_274(); // 0xfd NEW_2
	goto Label_259; // 0xff Jump
	
Label_259:
	goto Label_273; // 0x103 Jump
	
Label_256:
	func_314(var_28_bool, var_29_int); // 0x101 NEW_2
	
Label_260:
	var_217_string = "fail"; // 0x104 PushS
	var_218_bool = var_11_string == var_217_string; // 0x105 Eq
	if(var_218_bool == 0) goto Label_267; // 0x106 JumpB
	func_274(); // 0x108 NEW_2
	goto Label_273; // 0x10a Jump
	
Label_267:
	var_219_string = "completed"; // 0x10b PushS
	var_220_bool = var_11_string == var_219_string; // 0x10c Eq
	if(var_220_bool == 0) goto Label_273; // 0x10d JumpB
	func_282(); // 0x10f NEW_2
}


task_0_event_7(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_bool, var_11_int)
{
	var_12_object = Obj(); var_13_cvector = CVector(0,0,0); var_14_object = Obj(); var_15_cvector = CVector(0,0,0); // 0x171 PushV
	var_16_int = 0; // 0x172 PushI
	var_17_bool = var_11_int != var_16_int; // 0x173 Neq
	if(var_17_bool == 0) goto Label_374; // 0x174 JumpB
	return 4; // 0x175 Return
	
Label_374:
	var_18_string = "factory"; // 0x176 PushS
	GetSceneByName(var_14_object, var_18_string); // 0x177 Func
	var_19_int = 0; // 0x179 PushI
	var_20_int = 0; // 0x17a PushI
	GetRandomPFPoint(var_15_cvector, var_19_int, var_20_int); // 0x17b ObjFunc
	var_21_object = Obj(); var_22_cvector = CVector(0,0,0); // 0x17d PushV
	var_21_object = var_14_object; // 0x17e Mov
	var_22_cvector = var_15_cvector; // 0x17f Mov
	func_388(var_21_object, var_22_cvector); // 0x180 NEW_2
	return 4; // 0x182 Return
}


main(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_bool)
{
	var_11_string = ""; var_12_bool = 0; // 0x0 PushV
	var_11_string = "cot_alexandr@door1"; // 0x1 MovS
	var_12_bool = 1; // 0x2 MovB
	func_437(var_11_string, var_12_bool); // 0x3 NEW_2
	var_21_object = Obj(); // 0x5 PushV
	func_402(var_21_object); // 0x6 NEW_2
	var_7_object = var_21_object; // 0x7 TMov
	var_24_string = ""; var_25_bool = 0; // 0x9 PushV
	var_24_string = "warehouse_gangster@door1"; // 0xa MovS
	var_25_bool = 1; // 0xb MovB
	func_437(var_24_string, var_25_bool); // 0xc NEW_2
	
Label_14:
	Hold(); // 0xe Func
	goto Label_14; // 0x10 Jump
}


func_290(var_0_bool, var_27_cvector, var_28_bool, var_29_int)
{
	var_85_bool = var_0_bool; // 0x122 PushT
	if(var_85_bool == 0) goto Label_313; // 0x123 JumpB
	var_86_object = var_1_object; // 0x124 PushT
	if(var_86_object == 0) goto Label_297; // 0x125 JumpB
	var_87_string = "cleanup"; // 0x126 PushS
	Trigger(var_87_string, var_87_string); // 0x127 Func
	
Label_297:
	var_88_object = var_2_object; // 0x129 PushT
	if(var_88_object == 0) goto Label_302; // 0x12a JumpB
	var_89_string = "cleanup"; // 0x12b PushS
	Trigger(var_29_int, var_89_string); // 0x12c Func
	
Label_302:
	var_90_object = var_3_object; // 0x12e PushT
	if(var_90_object == 0) goto Label_307; // 0x12f JumpB
	var_91_string = "cleanup"; // 0x130 PushS
	Trigger(var_28_bool, var_91_string); // 0x131 Func
	
Label_307:
	var_92_object = var_4_object; // 0x133 PushT
	if(var_92_object == 0) goto Label_312; // 0x134 JumpB
	var_93_string = "cleanup"; // 0x135 PushS
	Trigger(var_27_cvector, var_93_string); // 0x136 Func
	
Label_312:
	var_0_bool = 0; // 0x138 TMovB
	
Label_313:
	return 0; // 0x139 Return
}


func_419(var_48_object, var_49_object, var_50_string, var_51_string, var_52_string)
{
	var_53_bool = 0; var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_object = Obj(); var_57_bool = 0; var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_object = Obj(); // 0x1a3 PushV
	GetLocator(var_50_string, var_57_bool, var_58_cvector, var_59_cvector); // 0x1a4 ObjFunc
	var_61_bool = var_57_bool == 0; // 0x1a6 Not
	if(var_61_bool == 0) goto Label_432; // 0x1a7 JumpB
	var_62_string = "Locator "; // 0x1a8 PushS
	var_63_int = var_62_string + var_50_string; // 0x1a9 Add
	var_64_string = " doesn't exist"; // 0x1aa PushS
	var_65_int = var_63_int + var_64_string; // 0x1ab Add
	Trace(var_65_int); // 0x1ac Func
	var_60_object = 0; // 0x1ae SetNull
	goto Label_434; // 0x1af Jump
	
Label_434:
	var_48_object = var_60_object; // 0x1b2 Mov
	return 8; // 0x1b3 Return
	
Label_432:
	AddActor(var_60_object, var_51_string, var_49_object, var_58_cvector, var_59_cvector, var_52_string); // 0x1b0 Func
}


func_388(var_21_object, var_22_cvector)
{
	var_23_object = Obj(); var_24_object = Obj(); // 0x184 PushV
	var_25_string = "fog"; // 0x185 PushS
	var_26_cvector = CVector(0.0, 0.0, 1.0); // 0x186 PushVec
	var_27_string = "b4q01_fog.xml"; // 0x187 PushS
	AddActorByType(var_24_object, var_25_string, var_21_object, var_22_cvector, var_26_cvector, var_27_string); // 0x188 Func
	return 2; // 0x18a Return
}


func_454(var_198_object, var_199_string)
{
	var_200_int = 0; var_201_int = 0; var_202_object = Obj(); var_203_int = 0; var_204_int = 0; var_205_object = Obj(); // 0x1c6 PushV
	var_206_object = var_198_object; // 0x1c7 Push
	if(var_206_object == 0) goto Label_472; // 0x1c8 JumpB
	size(var_203_int); // 0x1c9 ObjFunc
	var_204_int = 0; // 0x1cb MovI
	
Label_460:
	var_207_bool = var_204_int < var_203_int; // 0x1cc LT
	if(var_207_bool == 0) goto Label_472; // 0x1cd JumpB
	get(var_205_object, var_204_int); // 0x1ce ObjFunc
	var_208_object = var_205_object; // 0x1d0 Push
	if(var_208_object == 0) goto Label_468; // 0x1d1 JumpB
	Trigger(var_205_object, var_199_string); // 0x1d2 Func
	
Label_468:
	var_205_object = 0; // 0x1d4 SetNull
	var_209_int = 1; // 0x1d5 PushI
	var_204_int = var_204_int + var_209_int; // 0x1d6 Add2
	goto Label_460; // 0x1d7 Jump
	
Label_472:
	return 6; // 0x1d8 Return
}


func_282()
{
	var_221_string = "b4q01"; // 0x11a PushS
	var_222_int = 1000; // 0x11b PushI
	SetVariable(var_221_string, var_222_int); // 0x11c Func
	func_314(var_28_bool, var_29_int); // 0x11f NEW_2
	return 0; // 0x121 Return
}


func_396(var_163_object)
{
	var_164_object = Obj(); var_165_object = Obj(); // 0x18c PushV
	self(var_165_object); // 0x18d Func
	var_163_object = var_165_object; // 0x18f Mov
	return 2; // 0x190 Return
}


func_402(var_21_object)
{
	var_22_object = Obj(); var_23_object = Obj(); // 0x192 PushV
	CreateObjectVector(var_23_object); // 0x193 Func
	var_21_object = var_23_object; // 0x195 Mov
	return 2; // 0x196 Return
}


func_274()
{
	var_184_string = "b4q01"; // 0x112 PushS
	var_185_int = -1; // 0x113 PushI
	SetVariable(var_184_string, var_185_int); // 0x114 Func
	func_314(var_28_bool, var_29_int); // 0x117 NEW_2
	return 0; // 0x119 Return
}


func_437(var_11_string, var_12_bool)
{
	var_13_object = Obj(); var_14_object = Obj(); // 0x1b5 PushV
	FindActor(var_14_object, var_11_string); // 0x1b6 Func
	var_15_bool = var_14_object == 0; // 0x1b8 Not
	if(var_15_bool == 0) goto Label_449; // 0x1b9 JumpB
	var_16_string = "Door "; // 0x1ba PushS
	var_17_int = var_16_string + var_11_string; // 0x1bb Add
	var_18_string = " not found"; // 0x1bc PushS
	var_19_int = var_17_int + var_18_string; // 0x1bd Add
	Trace(var_19_int); // 0x1be Func
	goto Label_452; // 0x1c0 Jump
	
Label_452:
	return 2; // 0x1c4 Return
	
Label_449:
	var_20_string = "locked"; // 0x1c1 PushS
	SetProperty(var_20_string, var_12_bool); // 0x1c2 ObjFunc
}


func_408(var_116_object, var_117_string)
{
	var_118_object = Obj(); var_119_object = Obj(); var_120_object = Obj(); var_121_object = Obj(); // 0x198 PushV
	GetMainOutdoorScene(var_120_object); // 0x199 Func
	var_122_string = ".bin"; // 0x19b PushS
	var_123_int = var_117_string + var_122_string; // 0x19c Add
	AddBlankActor(var_121_object, var_120_object, var_117_string, var_123_int); // 0x19d Func
	var_116_object = var_121_object; // 0x19f Mov
	return 4; // 0x1a0 Return
}


func_314(var_7_object, var_29_int)
{
	var_186_object = Obj(); var_187_int = 0; var_188_object = Obj(); var_189_int = 0; // 0x13a PushV
	var_190_bool = var_10_bool; // 0x13b PushT
	if(var_190_bool == 0) goto Label_318; // 0x13c JumpB
	return 4; // 0x13d Return
	
Label_318:
	EventDisable(26); // 0x13e EventDisable
	var_191_int = 0; // 0x13f PushI
	KillTimer(var_191_int); // 0x140 Func
	var_192_string = ""; var_193_bool = 0; // 0x142 PushV
	var_192_string = "warehouse_rubin@door1"; // 0x143 MovS
	var_193_bool = 0; // 0x144 MovB
	func_437(var_192_string, var_193_bool); // 0x145 NEW_2
	var_194_string = ""; var_195_bool = 0; // 0x147 PushV
	var_194_string = "ifactory@door1"; // 0x148 MovS
	var_195_bool = 0; // 0x149 MovB
	func_437(var_194_string, var_195_bool); // 0x14a NEW_2
	var_196_string = "iwarehouse_rubin_Stol"; // 0x14c PushS
	FindActor(var_188_object, var_196_string); // 0x14d Func
	var_197_string = "b4q01_sample"; // 0x14f PushS
	RemoveItemByType(var_189_int, var_197_string); // 0x150 ObjFunc
	func_290(var_186_object, var_187_int, var_188_object, var_189_int); // 0x153 NEW_2
	var_198_object = Obj(); var_199_string = ""; // 0x155 PushV
	var_198_object = var_7_object; // 0x156 MovT
	var_199_string = "cleanup"; // 0x157 MovS
	func_454(var_198_object, var_199_string); // 0x158 NEW_2
	var_7_object = 0; // 0x15a SetNullT
	var_210_object = var_5_object; // 0x15b PushT
	if(var_210_object == 0) goto Label_352; // 0x15c JumpB
	var_211_string = "cleanup"; // 0x15d PushS
	Trigger(var_186_object, var_211_string); // 0x15e Func
	
Label_352:
	var_212_object = var_6_object; // 0x160 PushT
	if(var_212_object == 0) goto Label_357; // 0x161 JumpB
	var_213_string = "cleanup"; // 0x162 PushS
	Trigger(var_29_int, var_213_string); // 0x163 Func
	
Label_357:
	var_214_string = ""; var_215_bool = 0; // 0x165 PushV
	var_214_string = "warehouse_gangster@door1"; // 0x166 MovS
	var_215_bool = 0; // 0x167 MovB
	func_437(var_214_string, var_215_bool); // 0x168 NEW_2
	var_216_object = Obj(); // 0x16a PushV
	func_396(var_216_object); // 0x16b NEW_2
	RemoveActor(var_216_object); // 0x16d Func
	return 4; // 0x16f Return
}


