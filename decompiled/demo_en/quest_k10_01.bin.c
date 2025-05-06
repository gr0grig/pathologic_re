task_0_event_26(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_11_string)
{
	var_12_object = Obj(); var_13_object = Obj(); var_14_object = Obj(); var_15_int = 0; var_16_bool = 0; var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_object = Obj(); var_20_object = Obj(); var_21_object = Obj(); var_22_object = Obj(); var_23_object = Obj(); var_24_object = Obj(); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_bool = 0; var_28_int = 0; var_29_object = Obj(); var_30_object = Obj(); var_31_object = Obj(); var_32_int = 0; var_33_bool = 0; var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_object = Obj(); var_37_object = Obj(); var_38_object = Obj(); var_39_object = Obj(); var_40_object = Obj(); var_41_object = Obj(); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_bool = 0; var_45_int = 0; // 0x1b PushV
	Trace(var_11_string); // 0x1c Func
	var_46_string = "warehouse_rubin_load"; // 0x1e PushS
	var_47_bool = var_11_string == var_46_string; // 0x1f Eq
	if(var_47_bool == 0) goto Label_48; // 0x20 JumpB
	var_48_bool = var_0_object == 0; // 0x21 Not
	if(var_48_bool == 0) goto Label_47; // 0x22 JumpB
	var_49_string = "warehouse_rubin"; // 0x23 PushS
	GetSceneByName(var_29_object, var_49_string); // 0x24 Func
	var_50_object = Obj(); var_51_object = Obj(); var_52_string = ""; var_53_string = ""; var_54_string = ""; // 0x26 PushV
	var_51_object = var_29_object; // 0x27 Mov
	var_52_string = "pt_rubin"; // 0x28 MovS
	var_53_string = "NPC_Bakalavr"; // 0x29 MovS
	var_54_string = "k10q01_danko.xml"; // 0x2a MovS
	func_401(var_50_object, var_51_object, var_52_string, var_53_string, var_54_string); // 0x2b NEW_2
	var_0_object = var_50_object; // 0x2c TMov
	var_29_object = 0; // 0x2e SetNull
	
Label_47:
	goto Label_281; // 0x2f Jump
	
Label_281:
	return 34; // 0x119 Return
	
Label_48:
	var_68_string = "place_soldiers"; // 0x30 PushS
	var_69_bool = var_11_string == var_68_string; // 0x31 Eq
	if(var_69_bool == 0) goto Label_81; // 0x32 JumpB
	GetMainOutdoorScene(var_30_object); // 0x33 Func
	var_70_object = Obj(); var_71_object = Obj(); var_72_string = ""; var_73_string = ""; var_74_string = ""; // 0x35 PushV
	var_71_object = var_30_object; // 0x36 Mov
	var_72_string = "pt_k10q01_soldier1"; // 0x37 MovS
	var_73_string = "pers_soldat"; // 0x38 MovS
	var_74_string = "k10q01_soldier.xml"; // 0x39 MovS
	func_419(var_71_object, var_72_string, var_73_string, var_74_string); // 0x3a NEW_2
	var_1_object = var_70_object; // 0x3b TMov
	var_88_object = Obj(); var_89_object = Obj(); var_90_string = ""; var_91_string = ""; var_92_string = ""; // 0x3d PushV
	var_89_object = var_30_object; // 0x3e Mov
	var_90_string = "pt_k10q01_soldier2"; // 0x3f MovS
	var_91_string = "pers_soldat"; // 0x40 MovS
	var_92_string = "k10q01_soldier.xml"; // 0x41 MovS
	func_419(var_89_object, var_90_string, var_91_string, var_92_string); // 0x42 NEW_2
	var_2_object = var_88_object; // 0x43 TMov
	var_93_string = ""; var_94_bool = 0; // 0x45 PushV
	var_93_string = "uprava_prison@door1"; // 0x46 MovS
	var_94_bool = 1; // 0x47 MovB
	func_437(var_93_string, var_94_bool); // 0x48 NEW_2
	var_103_string = ""; var_104_bool = 0; // 0x4a PushV
	var_103_string = "uprava_admin@door1"; // 0x4b MovS
	var_104_bool = 0; // 0x4c MovB
	func_437(var_103_string, var_104_bool); // 0x4d NEW_2
	var_30_object = 0; // 0x4f SetNull
	goto Label_281; // 0x50 Jump
	
Label_81:
	var_105_string = "remove_soldiers"; // 0x51 PushS
	var_106_bool = var_11_string == var_105_string; // 0x52 Eq
	if(var_106_bool == 0) goto Label_98; // 0x53 JumpB
	var_107_object = var_1_object; // 0x54 PushT
	if(var_107_object == 0) goto Label_88; // 0x55 JumpB
	Remove(); // 0x56 TObjFunc
	
Label_88:
	var_108_object = var_2_object; // 0x58 PushT
	if(var_108_object == 0) goto Label_92; // 0x59 JumpB
	Remove(); // 0x5a TObjFunc
	
Label_92:
	var_109_string = ""; var_110_bool = 0; // 0x5c PushV
	var_109_string = "uprava_prison@door1"; // 0x5d MovS
	var_110_bool = 0; // 0x5e MovB
	func_437(var_109_string, var_110_bool); // 0x5f NEW_2
	goto Label_281; // 0x61 Jump
	
Label_98:
	var_111_string = "init_prison"; // 0x62 PushS
	var_112_bool = var_11_string == var_111_string; // 0x63 Eq
	if(var_112_bool == 0) goto Label_132; // 0x64 JumpB
	var_113_string = "uprava_prison"; // 0x65 PushS
	GetSceneByName(var_31_object, var_113_string); // 0x66 Func
	var_114_object = Obj(); var_115_object = Obj(); var_116_string = ""; var_117_string = ""; var_118_string = ""; // 0x68 PushV
	var_115_object = var_31_object; // 0x69 Mov
	var_116_string = "pt_k10q01_wastedmale"; // 0x6a MovS
	var_117_string = "pers_wasted_male"; // 0x6b MovS
	var_118_string = "k10q01_wastedmale.xml"; // 0x6c MovS
	func_401(var_114_object, var_115_object, var_116_string, var_117_string, var_118_string); // 0x6d NEW_2
	var_3_object = var_114_object; // 0x6e TMov
	var_32_int = 1; // 0x70 MovI
	
Label_113:
	var_119_string = "pt_k10q01_fog"; // 0x71 PushS
	var_120_int = var_119_string + var_32_int; // 0x72 Add
	GetLocator(var_120_int, var_33_bool, var_34_cvector, var_35_cvector); // 0x73 ObjFunc
	var_121_bool = var_33_bool == 0; // 0x75 Not
	if(var_121_bool == 0) goto Label_120; // 0x76 JumpB
	goto Label_130; // 0x77 Jump
	
Label_130:
	var_31_object = 0; // 0x82 SetNull
	goto Label_281; // 0x83 Jump
	
Label_120:
	var_122_string = "fog"; // 0x78 PushS
	var_123_string = "fog_stat_indoor.xml"; // 0x79 PushS
	AddActorByType(var_36_object, var_122_string, var_31_object, var_34_cvector, var_35_cvector, var_123_string); // 0x7a Func
	add(var_36_object); // 0x7c TObjFunc
	var_36_object = 0; // 0x7e SetNull
	var_124_int = 1; // 0x7f PushI
	var_32_int = var_32_int + var_124_int; // 0x80 Add2
	goto Label_113; // 0x81 Jump
	
Label_132:
	var_125_string = "free_prisoner"; // 0x84 PushS
	var_126_bool = var_11_string == var_125_string; // 0x85 Eq
	if(var_126_bool == 0) goto Label_158; // 0x86 JumpB
	var_127_object = var_3_object; // 0x87 PushT
	if(var_127_object == 0) goto Label_140; // 0x88 JumpB
	var_128_string = "cleanup"; // 0x89 PushS
	Trigger(var_44_bool, var_128_string); // 0x8a Func
	
Label_140:
	GetMainOutdoorScene(var_37_object); // 0x8c Func
	var_129_object = Obj(); var_130_object = Obj(); var_131_string = ""; var_132_string = ""; var_133_string = ""; // 0x8e PushV
	var_130_object = var_37_object; // 0x8f Mov
	var_131_string = "pt_k10q01_wastedmale"; // 0x90 MovS
	var_132_string = "pers_wasted_male"; // 0x91 MovS
	var_133_string = "k10q01_wastedmale_free.xml"; // 0x92 MovS
	func_419(var_130_object, var_131_string, var_132_string, var_133_string); // 0x93 NEW_2
	var_4_object = var_129_object; // 0x94 TMov
	var_134_string = "burah_home"; // 0x96 PushS
	GetSceneByName(var_37_object, var_134_string); // 0x97 Func
	var_135_string = "noburah"; // 0x99 PushS
	Trigger(var_37_object, var_135_string); // 0x9a Func
	var_37_object = 0; // 0x9c SetNull
	goto Label_281; // 0x9d Jump
	
Label_158:
	var_136_string = "init_factory"; // 0x9e PushS
	var_137_bool = var_11_string == var_136_string; // 0x9f Eq
	if(var_137_bool == 0) goto Label_179; // 0xa0 JumpB
	var_138_string = "factory"; // 0xa1 PushS
	GetSceneByName(var_38_object, var_138_string); // 0xa2 Func
	var_139_object = Obj(); var_140_object = Obj(); var_141_string = ""; var_142_string = ""; var_143_string = ""; // 0xa4 PushV
	var_140_object = var_38_object; // 0xa5 Mov
	var_141_string = "pt_k10q01_burah"; // 0xa6 MovS
	var_142_string = "NPC_Burah"; // 0xa7 MovS
	var_143_string = "k10q01_burah.xml"; // 0xa8 MovS
	func_401(var_139_object, var_140_object, var_141_string, var_142_string, var_143_string); // 0xa9 NEW_2
	var_5_object = var_139_object; // 0xaa TMov
	var_144_string = ""; var_145_bool = 0; // 0xac PushV
	var_144_string = "factory@door1"; // 0xad MovS
	var_145_bool = 0; // 0xae MovB
	func_437(var_144_string, var_145_bool); // 0xaf NEW_2
	var_38_object = 0; // 0xb1 SetNull
	goto Label_281; // 0xb2 Jump
	
Label_179:
	var_146_string = "place_prophet"; // 0xb3 PushS
	var_147_bool = var_11_string == var_146_string; // 0xb4 Eq
	if(var_147_bool == 0) goto Label_194; // 0xb5 JumpB
	GetMainOutdoorScene(var_39_object); // 0xb6 Func
	var_148_object = Obj(); var_149_object = Obj(); var_150_string = ""; var_151_string = ""; var_152_string = ""; // 0xb8 PushV
	var_149_object = var_39_object; // 0xb9 Mov
	var_150_string = "pt_k10q01_prophet"; // 0xba MovS
	var_151_string = "pers_krysa"; // 0xbb MovS
	var_152_string = "k10q01_prophet.xml"; // 0xbc MovS
	func_419(var_149_object, var_150_string, var_151_string, var_152_string); // 0xbd NEW_2
	var_10_object = var_148_object; // 0xbe TMov
	var_39_object = 0; // 0xc0 SetNull
	goto Label_281; // 0xc1 Jump
	
Label_194:
	var_153_string = "teleport"; // 0xc2 PushS
	var_154_bool = var_11_string == var_153_string; // 0xc3 Eq
	if(var_154_bool == 0) goto Label_240; // 0xc4 JumpB
	var_155_string = "player"; // 0xc5 PushS
	FindActor(var_40_object, var_155_string); // 0xc6 Func
	var_156_object = var_40_object; // 0xc8 Push
	if(var_156_object == 0) goto Label_238; // 0xc9 JumpB
	var_157_string = "house_vlad"; // 0xca PushS
	GetSceneByName(var_41_object, var_157_string); // 0xcb Func
	var_158_string = "pt_k10q01_teleport"; // 0xcd PushS
	GetLocator(var_158_string, var_44_bool, var_42_cvector, var_43_cvector); // 0xce ObjFunc
	Teleport(var_40_object, var_41_object, var_42_cvector, var_43_cvector); // 0xd0 Func
	var_159_string = ""; var_160_bool = 0; // 0xd2 PushV
	var_159_string = "ihouse_vlad@door2"; // 0xd3 MovS
	var_160_bool = 1; // 0xd4 MovB
	func_437(var_159_string, var_160_bool); // 0xd5 NEW_2
	var_161_object = Obj(); var_162_object = Obj(); var_163_string = ""; var_164_string = ""; var_165_string = ""; // 0xd7 PushV
	var_162_object = var_41_object; // 0xd8 Mov
	var_163_string = "pt_k10q01_wastedmale_u1"; // 0xd9 MovS
	var_164_string = "pers_wasted_male"; // 0xda MovS
	var_165_string = "k10q01_wastedmale_u.xml"; // 0xdb MovS
	func_401(var_161_object, var_162_object, var_163_string, var_164_string, var_165_string); // 0xdc NEW_2
	var_166_object = Obj(); var_167_object = Obj(); var_168_string = ""; var_169_string = ""; var_170_string = ""; // 0xde PushV
	var_167_object = var_41_object; // 0xdf Mov
	var_168_string = "pt_k10q01_wastedmale_u2"; // 0xe0 MovS
	var_169_string = "pers_wasted_male"; // 0xe1 MovS
	var_170_string = "k10q01_wastedmale_u.xml"; // 0xe2 MovS
	func_401(var_166_object, var_167_object, var_168_string, var_169_string, var_170_string); // 0xe3 NEW_2
	var_171_object = Obj(); var_172_object = Obj(); var_173_string = ""; var_174_string = ""; var_175_string = ""; // 0xe5 PushV
	var_172_object = var_41_object; // 0xe6 Mov
	var_173_string = "pt_k10q01_rubin"; // 0xe7 MovS
	var_174_string = "NPC_Rubin"; // 0xe8 MovS
	var_175_string = "k10q01_rubin.xml"; // 0xe9 MovS
	func_401(var_171_object, var_172_object, var_173_string, var_174_string, var_175_string); // 0xea NEW_2
	var_6_object = var_171_object; // 0xeb TMov
	var_41_object = 0; // 0xed SetNull
	
Label_238:
	var_40_object = 0; // 0xee SetNull
	goto Label_281; // 0xef Jump
	
Label_240:
	var_176_string = "fail"; // 0xf0 PushS
	var_177_bool = var_11_string == var_176_string; // 0xf1 Eq
	if(var_177_bool == 0) goto Label_253; // 0xf2 JumpB
	func_282(); // 0xf4 NEW_2
	func_485(); // 0xf7 NEW_2
	func_491(); // 0xfa NEW_2
	goto Label_281; // 0xfc Jump
	
Label_253:
	var_230_string = "completed"; // 0xfd PushS
	var_231_bool = var_11_string == var_230_string; // 0xfe Eq
	if(var_231_bool == 0) goto Label_266; // 0xff JumpB
	func_290(); // 0x101 NEW_2
	func_485(); // 0x104 NEW_2
	func_491(); // 0x107 NEW_2
	goto Label_281; // 0x109 Jump
	
Label_266:
	var_234_string = "cleanup"; // 0x10a PushS
	var_235_bool = var_11_string == var_234_string; // 0x10b Eq
	if(var_235_bool == 0) goto Label_281; // 0x10c JumpB
	var_236_string = "k10q01"; // 0x10d PushS
	GetVariable(var_236_string, var_45_int); // 0x10e Func
	var_237_int = 1000; // 0x110 PushI
	var_238_bool = var_45_int != var_237_int; // 0x111 Neq
	if(var_238_bool == 0) goto Label_278; // 0x112 JumpB
	func_282(); // 0x114 NEW_2
	
Label_278:
	func_379(); // 0x117 NEW_2
}


main(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object)
{
	var_11_object = Obj(); var_12_object = Obj(); // 0x0 PushV
	var_13_object = Obj(); // 0x1 PushV
	func_395(var_13_object); // 0x2 NEW_2
	var_7_object = var_13_object; // 0x3 TMov
	var_16_string = "cot_eva"; // 0x5 PushS
	GetSceneByName(var_12_object, var_16_string); // 0x6 Func
	var_17_string = "nodanko"; // 0x8 PushS
	Trigger(var_12_object, var_17_string); // 0x9 Func
	var_18_string = "warehouse_rubin"; // 0xb PushS
	GetSceneByName(var_12_object, var_18_string); // 0xc Func
	var_19_string = "norubin"; // 0xe PushS
	Trigger(var_12_object, var_19_string); // 0xf Func
	var_20_string = ""; var_21_bool = 0; // 0x11 PushV
	var_20_string = "warehouse_rubin@door1"; // 0x12 MovS
	var_21_bool = 0; // 0x13 MovB
	func_437(var_20_string, var_21_bool); // 0x14 NEW_2
	
Label_22:
	Hold(); // 0x16 Func
	goto Label_22; // 0x18 Jump
}


func_290()
{
	var_232_string = "k10q01"; // 0x122 PushS
	var_233_int = 1000; // 0x123 PushI
	SetVariable(var_232_string, var_233_int); // 0x124 Func
	func_298(var_40_object, var_41_object, var_42_cvector, var_43_cvector, var_44_bool, var_45_int); // 0x127 NEW_2
	return 0; // 0x129 Return
}


func_419(var_70_object, var_72_string, var_73_string, var_74_string)
{
	var_75_bool = 0; var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_object = Obj(); var_79_bool = 0; var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); var_82_object = Obj(); // 0x1a3 PushV
	GetLocator(var_72_string, var_79_bool, var_80_cvector, var_81_cvector); // 0x1a4 ObjFunc
	var_83_bool = var_79_bool == 0; // 0x1a6 Not
	if(var_83_bool == 0) goto Label_432; // 0x1a7 JumpB
	var_84_string = "Locator "; // 0x1a8 PushS
	var_85_int = var_84_string + var_72_string; // 0x1a9 Add
	var_86_string = " doesn't exist"; // 0x1aa PushS
	var_87_int = var_85_int + var_86_string; // 0x1ab Add
	Trace(var_87_int); // 0x1ac Func
	var_82_object = 0; // 0x1ae SetNull
	goto Label_434; // 0x1af Jump
	
Label_434:
	var_70_object = var_82_object; // 0x1b2 Mov
	return 8; // 0x1b3 Return
	
Label_432:
	AddStationaryActor(var_82_object, var_80_cvector, var_81_cvector, var_73_string, var_74_string); // 0x1b0 ObjFunc
}


func_485()
{
	var_220_bool = 0; var_221_string = ""; var_222_string = ""; // 0x1e5 PushV
	var_221_string = "klara2_npc_positioner"; // 0x1e6 MovS
	var_222_string = "init"; // 0x1e7 MovS
	func_454(var_220_bool, var_221_string, var_222_string); // 0x1e8 NEW_2
	return 0; // 0x1ea Return
}


func_454(var_220_bool, var_221_string, var_222_string)
{
	var_223_object = Obj(); var_224_object = Obj(); // 0x1c6 PushV
	FindActor(var_224_object, var_221_string); // 0x1c7 Func
	var_225_bool = var_224_object == 0; // 0x1c9 NullEq
	if(var_225_bool == 0) goto Label_461; // 0x1ca JumpB
	var_220_bool = 0; // 0x1cb MovB
	return 2; // 0x1cc Return
	
Label_461:
	Trigger(var_224_object, var_222_string); // 0x1cd Func
	var_220_bool = 1; // 0x1cf MovB
	return 2; // 0x1d0 Return
}


func_389(var_243_object)
{
	var_244_object = Obj(); var_245_object = Obj(); // 0x185 PushV
	self(var_245_object); // 0x186 Func
	var_243_object = var_245_object; // 0x188 Mov
	return 2; // 0x189 Return
}


func_298(var_0_object, var_7_object, var_40_object, var_41_object, var_43_cvector, var_44_bool)
{
	var_180_object = Obj(); var_181_object = Obj(); // 0x12a PushV
	var_182_string = "cot_eva"; // 0x12b PushS
	GetSceneByName(var_181_object, var_182_string); // 0x12c Func
	var_183_string = "danko"; // 0x12e PushS
	Trigger(var_181_object, var_183_string); // 0x12f Func
	var_184_string = "warehouse_rubin"; // 0x131 PushS
	GetSceneByName(var_181_object, var_184_string); // 0x132 Func
	var_185_string = "rubin"; // 0x134 PushS
	Trigger(var_181_object, var_185_string); // 0x135 Func
	var_186_string = ""; var_187_bool = 0; // 0x137 PushV
	var_186_string = "uprava_prison@door1"; // 0x138 MovS
	var_187_bool = 0; // 0x139 MovB
	func_437(var_186_string, var_187_bool); // 0x13a NEW_2
	var_188_string = ""; var_189_bool = 0; // 0x13c PushV
	var_188_string = "ihouse_vlad@door2"; // 0x13d MovS
	var_189_bool = 0; // 0x13e MovB
	func_437(var_188_string, var_189_bool); // 0x13f NEW_2
	var_190_string = ""; var_191_bool = 0; // 0x141 PushV
	var_190_string = "factory@door1"; // 0x142 MovS
	var_191_bool = 0; // 0x143 MovB
	func_437(var_190_string, var_191_bool); // 0x144 NEW_2
	var_192_object = var_0_object; // 0x146 PushT
	if(var_192_object == 0) goto Label_331; // 0x147 JumpB
	var_193_string = "cleanup"; // 0x148 PushS
	Trigger(var_0_object, var_193_string); // 0x149 Func
	
Label_331:
	var_194_object = var_1_object; // 0x14b PushT
	if(var_194_object == 0) goto Label_335; // 0x14c JumpB
	Remove(); // 0x14d TObjFunc
	
Label_335:
	var_195_object = var_2_object; // 0x14f PushT
	if(var_195_object == 0) goto Label_339; // 0x150 JumpB
	Remove(); // 0x151 TObjFunc
	
Label_339:
	var_196_object = var_3_object; // 0x153 PushT
	if(var_196_object == 0) goto Label_344; // 0x154 JumpB
	var_197_string = "cleanup"; // 0x155 PushS
	Trigger(var_180_object, var_197_string); // 0x156 Func
	
Label_344:
	var_198_object = var_4_object; // 0x158 PushT
	if(var_198_object == 0) goto Label_348; // 0x159 JumpB
	Remove(); // 0x15a TObjFunc
	
Label_348:
	var_199_object = var_5_object; // 0x15c PushT
	if(var_199_object == 0) goto Label_353; // 0x15d JumpB
	var_200_string = "cleanup"; // 0x15e PushS
	Trigger(var_44_bool, var_200_string); // 0x15f Func
	
Label_353:
	var_201_object = var_10_object; // 0x161 PushT
	if(var_201_object == 0) goto Label_357; // 0x162 JumpB
	Remove(); // 0x163 TObjFunc
	
Label_357:
	var_202_object = var_6_object; // 0x165 PushT
	if(var_202_object == 0) goto Label_362; // 0x166 JumpB
	var_203_string = "cleanup"; // 0x167 PushS
	Trigger(var_43_cvector, var_203_string); // 0x168 Func
	
Label_362:
	var_204_object = Obj(); var_205_string = ""; // 0x16a PushV
	var_204_object = var_7_object; // 0x16b MovT
	var_205_string = "cleanup"; // 0x16c MovS
	func_466(var_204_object, var_205_string); // 0x16d NEW_2
	var_216_object = var_8_object; // 0x16f PushT
	if(var_216_object == 0) goto Label_372; // 0x170 JumpB
	var_217_string = "cleanup"; // 0x171 PushS
	Trigger(var_41_object, var_217_string); // 0x172 Func
	
Label_372:
	var_218_object = var_9_object; // 0x174 PushT
	if(var_218_object == 0) goto Label_377; // 0x175 JumpB
	var_219_string = "cleanup"; // 0x176 PushS
	Trigger(var_40_object, var_219_string); // 0x177 Func
	
Label_377:
	return 2; // 0x179 Return
}


func_395(var_13_object)
{
	var_14_object = Obj(); var_15_object = Obj(); // 0x18b PushV
	CreateObjectVector(var_15_object); // 0x18c Func
	var_13_object = var_15_object; // 0x18e Mov
	return 2; // 0x18f Return
}


func_491()
{
	var_226_object = Obj(); var_227_object = Obj(); // 0x1eb PushV
	var_228_string = "burah_home"; // 0x1ec PushS
	GetSceneByName(var_227_object, var_228_string); // 0x1ed Func
	var_229_string = "noburah"; // 0x1ef PushS
	Trigger(var_227_object, var_229_string); // 0x1f0 Func
	return 2; // 0x1f2 Return
}


func_401(var_50_object, var_51_object, var_52_string, var_53_string, var_54_string)
{
	var_55_bool = 0; var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_object = Obj(); var_59_bool = 0; var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_object = Obj(); // 0x191 PushV
	GetLocator(var_52_string, var_59_bool, var_60_cvector, var_61_cvector); // 0x192 ObjFunc
	var_63_bool = var_59_bool == 0; // 0x194 Not
	if(var_63_bool == 0) goto Label_414; // 0x195 JumpB
	var_64_string = "Locator "; // 0x196 PushS
	var_65_int = var_64_string + var_52_string; // 0x197 Add
	var_66_string = " doesn't exist"; // 0x198 PushS
	var_67_int = var_65_int + var_66_string; // 0x199 Add
	Trace(var_67_int); // 0x19a Func
	var_62_object = 0; // 0x19c SetNull
	goto Label_416; // 0x19d Jump
	
Label_416:
	var_50_object = var_62_object; // 0x1a0 Mov
	return 8; // 0x1a1 Return
	
Label_414:
	AddActor(var_62_object, var_53_string, var_51_object, var_60_cvector, var_61_cvector, var_54_string); // 0x19e Func
}


func_466(var_204_object, var_205_string)
{
	var_206_int = 0; var_207_int = 0; var_208_object = Obj(); var_209_int = 0; var_210_int = 0; var_211_object = Obj(); // 0x1d2 PushV
	var_212_object = var_204_object; // 0x1d3 Push
	if(var_212_object == 0) goto Label_484; // 0x1d4 JumpB
	size(var_209_int); // 0x1d5 ObjFunc
	var_210_int = 0; // 0x1d7 MovI
	
Label_472:
	var_213_bool = var_210_int < var_209_int; // 0x1d8 LT
	if(var_213_bool == 0) goto Label_484; // 0x1d9 JumpB
	get(var_211_object, var_210_int); // 0x1da ObjFunc
	var_214_object = var_211_object; // 0x1dc Push
	if(var_214_object == 0) goto Label_480; // 0x1dd JumpB
	Trigger(var_211_object, var_205_string); // 0x1de Func
	
Label_480:
	var_211_object = 0; // 0x1e0 SetNull
	var_215_int = 1; // 0x1e1 PushI
	var_210_int = var_210_int + var_215_int; // 0x1e2 Add2
	goto Label_472; // 0x1e3 Jump
	
Label_484:
	return 6; // 0x1e4 Return
}


func_500()
{
	var_239_object = Obj(); var_240_object = Obj(); // 0x1f4 PushV
	var_241_string = "burah_home"; // 0x1f5 PushS
	GetSceneByName(var_240_object, var_241_string); // 0x1f6 Func
	var_242_string = "burah"; // 0x1f8 PushS
	Trigger(var_240_object, var_242_string); // 0x1f9 Func
	return 2; // 0x1fb Return
}


func_437(var_20_string, var_21_bool)
{
	var_22_object = Obj(); var_23_object = Obj(); // 0x1b5 PushV
	FindActor(var_23_object, var_20_string); // 0x1b6 Func
	var_24_bool = var_23_object == 0; // 0x1b8 Not
	if(var_24_bool == 0) goto Label_449; // 0x1b9 JumpB
	var_25_string = "Door "; // 0x1ba PushS
	var_26_int = var_25_string + var_20_string; // 0x1bb Add
	var_27_string = " not found"; // 0x1bc PushS
	var_28_int = var_26_int + var_27_string; // 0x1bd Add
	Trace(var_28_int); // 0x1be Func
	goto Label_452; // 0x1c0 Jump
	
Label_452:
	return 2; // 0x1c4 Return
	
Label_449:
	var_29_string = "locked"; // 0x1c1 PushS
	SetProperty(var_29_string, var_21_bool); // 0x1c2 ObjFunc
}


func_282()
{
	var_178_string = "k10q01"; // 0x11a PushS
	var_179_int = -1; // 0x11b PushI
	SetVariable(var_178_string, var_179_int); // 0x11c Func
	func_298(var_40_object, var_41_object, var_42_cvector, var_43_cvector, var_44_bool, var_45_int); // 0x11f NEW_2
	return 0; // 0x121 Return
}


func_379()
{
	EventDisable(26); // 0x17b EventDisable
	func_500(); // 0x17d NEW_2
	var_243_object = Obj(); // 0x17f PushV
	func_389(var_243_object); // 0x180 NEW_2
	RemoveActor(var_243_object); // 0x182 Func
	return 0; // 0x184 Return
}


