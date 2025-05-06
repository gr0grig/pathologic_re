task_0_event_26(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_string)
{
	var_10_object = Obj(); var_11_object = Obj(); var_12_object = Obj(); var_13_object = Obj(); var_14_object = Obj(); var_15_int = 0; var_16_object = Obj(); var_17_object = Obj(); var_18_object = Obj(); var_19_object = Obj(); var_20_object = Obj(); var_21_int = 0; // 0x18 PushV
	Trace(var_9_string); // 0x19 Func
	var_22_string = "place_masks"; // 0x1b PushS
	var_23_bool = var_9_string == var_22_string; // 0x1c Eq
	if(var_23_bool == 0) goto Label_50; // 0x1d JumpB
	GetMainOutdoorScene(var_16_object); // 0x1e Func
	var_24_object = Obj(); var_25_object = Obj(); var_26_string = ""; var_27_string = ""; var_28_string = ""; // 0x20 PushV
	var_25_object = var_16_object; // 0x21 Mov
	var_26_string = "pt_d1q01_birdmask"; // 0x22 MovS
	var_27_string = "pers_birdmask"; // 0x23 MovS
	var_28_string = "d1q01_birdmask.xml"; // 0x24 MovS
	func_309(var_25_object, var_26_string, var_27_string, var_28_string); // 0x25 NEW_2
	var_0_object = var_24_object; // 0x26 TMov
	var_42_object = Obj(); var_43_object = Obj(); var_44_string = ""; var_45_string = ""; var_46_string = ""; // 0x28 PushV
	var_43_object = var_16_object; // 0x29 Mov
	var_44_string = "pt_d1q01_whitemask"; // 0x2a MovS
	var_45_string = "pers_whitemask"; // 0x2b MovS
	var_46_string = "d1q01_whitemask.xml"; // 0x2c MovS
	func_309(var_43_object, var_44_string, var_45_string, var_46_string); // 0x2d NEW_2
	var_1_object = var_42_object; // 0x2e TMov
	var_16_object = 0; // 0x30 SetNull
	goto Label_197; // 0x31 Jump
	
Label_197:
	return 12; // 0xc5 Return
	
Label_50:
	var_47_string = "remove_masks"; // 0x32 PushS
	var_48_bool = var_9_string == var_47_string; // 0x33 Eq
	if(var_48_bool == 0) goto Label_58; // 0x34 JumpB
	Remove(); // 0x35 TObjFunc
	Remove(); // 0x37 TObjFunc
	goto Label_197; // 0x39 Jump
	
Label_58:
	var_49_string = "cutscene_end"; // 0x3a PushS
	var_50_bool = var_9_string == var_49_string; // 0x3b Eq
	if(var_50_bool == 0) goto Label_86; // 0x3c JumpB
	GetMainOutdoorScene(var_17_object); // 0x3d Func
	var_51_object = Obj(); var_52_object = Obj(); var_53_string = ""; var_54_string = ""; var_55_string = ""; // 0x3f PushV
	var_52_object = var_17_object; // 0x40 Mov
	var_53_string = "pt_d1q01_morlok"; // 0x41 MovS
	var_54_string = "pers_morlok"; // 0x42 MovS
	var_55_string = "d1q01_morlok.xml"; // 0x43 MovS
	func_291(var_51_object, var_52_object, var_53_string, var_54_string, var_55_string); // 0x44 NEW_2
	var_3_object = var_51_object; // 0x45 TMov
	var_69_object = Obj(); var_70_object = Obj(); var_71_string = ""; var_72_string = ""; var_73_string = ""; // 0x47 PushV
	var_70_object = var_17_object; // 0x48 Mov
	var_71_string = "pt_d1q01_worker"; // 0x49 MovS
	var_72_string = "pers_worker"; // 0x4a MovS
	var_73_string = "d1q01_worker.xml"; // 0x4b MovS
	func_291(var_69_object, var_70_object, var_71_string, var_72_string, var_73_string); // 0x4c NEW_2
	var_4_object = var_69_object; // 0x4d TMov
	var_74_bool = var_8_bool; // 0x4f PushT
	if(var_74_bool == 0) goto Label_84; // 0x50 JumpB
	func_214(var_18_object, var_19_object, var_20_object, var_21_int); // 0x52 NEW_2
	
Label_84:
	var_17_object = 0; // 0x54 SetNull
	goto Label_197; // 0x55 Jump
	
Label_86:
	var_81_string = "remove_cutscene"; // 0x56 PushS
	var_82_bool = var_9_string == var_81_string; // 0x57 Eq
	if(var_82_bool == 0) goto Label_93; // 0x58 JumpB
	func_214(var_18_object, var_19_object, var_20_object, var_21_int); // 0x5a NEW_2
	goto Label_197; // 0x5c Jump
	
Label_93:
	var_83_string = "attack"; // 0x5d PushS
	var_84_bool = var_9_string == var_83_string; // 0x5e Eq
	if(var_84_bool == 0) goto Label_107; // 0x5f JumpB
	var_85_object = var_3_object; // 0x60 PushT
	if(var_85_object == 0) goto Label_101; // 0x61 JumpB
	var_86_string = "attack"; // 0x62 PushS
	Trigger(var_20_object, var_86_string); // 0x63 Func
	
Label_101:
	var_87_object = var_4_object; // 0x65 PushT
	if(var_87_object == 0) goto Label_106; // 0x66 JumpB
	var_88_string = "attack"; // 0x67 PushS
	Trigger(var_19_object, var_88_string); // 0x68 Func
	
Label_106:
	goto Label_197; // 0x6a Jump
	
Label_107:
	var_89_string = "place_patrol"; // 0x6b PushS
	var_90_bool = var_9_string == var_89_string; // 0x6c Eq
	if(var_90_bool == 0) goto Label_130; // 0x6d JumpB
	GetMainOutdoorScene(var_18_object); // 0x6e Func
	var_91_object = Obj(); var_92_object = Obj(); var_93_string = ""; var_94_string = ""; var_95_string = ""; // 0x70 PushV
	var_92_object = var_18_object; // 0x71 Mov
	var_93_string = "pt_d1q01_patrol1"; // 0x72 MovS
	var_94_string = "pers_patrool"; // 0x73 MovS
	var_95_string = "d1q01_patrol.xml"; // 0x74 MovS
	func_291(var_91_object, var_92_object, var_93_string, var_94_string, var_95_string); // 0x75 NEW_2
	var_5_object = var_91_object; // 0x76 TMov
	var_96_object = Obj(); var_97_object = Obj(); var_98_string = ""; var_99_string = ""; var_100_string = ""; // 0x78 PushV
	var_97_object = var_18_object; // 0x79 Mov
	var_98_string = "pt_d1q01_patrol2"; // 0x7a MovS
	var_99_string = "pers_patrool"; // 0x7b MovS
	var_100_string = "d1q01_patrol.xml"; // 0x7c MovS
	func_291(var_96_object, var_97_object, var_98_string, var_99_string, var_100_string); // 0x7d NEW_2
	var_6_object = var_96_object; // 0x7e TMov
	var_18_object = 0; // 0x80 SetNull
	goto Label_197; // 0x81 Jump
	
Label_130:
	var_101_string = "place_morlok_run"; // 0x82 PushS
	var_102_bool = var_9_string == var_101_string; // 0x83 Eq
	if(var_102_bool == 0) goto Label_144; // 0x84 JumpB
	GetMainOutdoorScene(var_19_object); // 0x85 Func
	var_103_object = Obj(); var_104_object = Obj(); var_105_string = ""; var_106_string = ""; var_107_string = ""; // 0x87 PushV
	var_104_object = var_19_object; // 0x88 Mov
	var_105_string = "pt_d1q01_morlok_run_path"; // 0x89 MovS
	var_106_string = "pers_morlok"; // 0x8a MovS
	var_107_string = "d1q01_morlok_run.xml"; // 0x8b MovS
	func_291(var_103_object, var_104_object, var_105_string, var_106_string, var_107_string); // 0x8c NEW_2
	var_19_object = 0; // 0x8e SetNull
	goto Label_197; // 0x8f Jump
	
Label_144:
	var_108_string = "place_rubin"; // 0x90 PushS
	var_109_bool = var_9_string == var_108_string; // 0x91 Eq
	if(var_109_bool == 0) goto Label_160; // 0x92 JumpB
	var_110_string = "cot_viktor"; // 0x93 PushS
	GetSceneByName(var_20_object, var_110_string); // 0x94 Func
	var_111_object = Obj(); var_112_object = Obj(); var_113_string = ""; var_114_string = ""; var_115_string = ""; // 0x96 PushV
	var_112_object = var_20_object; // 0x97 Mov
	var_113_string = "pt_d1q01_rubin"; // 0x98 MovS
	var_114_string = "NPC_Rubin"; // 0x99 MovS
	var_115_string = "d1q01_rubin.xml"; // 0x9a MovS
	func_291(var_111_object, var_112_object, var_113_string, var_114_string, var_115_string); // 0x9b NEW_2
	var_7_object = var_111_object; // 0x9c TMov
	var_20_object = 0; // 0x9e SetNull
	goto Label_197; // 0x9f Jump
	
Label_160:
	var_116_string = "unlock_doors"; // 0xa0 PushS
	var_117_bool = var_9_string == var_116_string; // 0xa1 Eq
	if(var_117_bool == 0) goto Label_167; // 0xa2 JumpB
	func_370(); // 0xa4 NEW_2
	goto Label_197; // 0xa6 Jump
	
Label_167:
	var_136_string = "cleanup"; // 0xa7 PushS
	var_137_bool = var_9_string == var_136_string; // 0xa8 Eq
	if(var_137_bool == 0) goto Label_184; // 0xa9 JumpB
	var_138_string = "d1q01"; // 0xaa PushS
	GetVariable(var_138_string, var_21_int); // 0xab Func
	var_139_int = 1000; // 0xad PushI
	var_140_bool = var_21_int != var_139_int; // 0xae Neq
	if(var_140_bool == 0) goto Label_180; // 0xaf JumpB
	func_198(); // 0xb1 NEW_2
	goto Label_183; // 0xb3 Jump
	
Label_183:
	goto Label_197; // 0xb7 Jump
	
Label_180:
	func_231(var_19_object, var_20_object, var_21_int); // 0xb5 NEW_2
	
Label_184:
	var_160_string = "fail"; // 0xb8 PushS
	var_161_bool = var_9_string == var_160_string; // 0xb9 Eq
	if(var_161_bool == 0) goto Label_191; // 0xba JumpB
	func_198(); // 0xbc NEW_2
	goto Label_197; // 0xbe Jump
	
Label_191:
	var_162_string = "completed"; // 0xbf PushS
	var_163_bool = var_9_string == var_162_string; // 0xc0 Eq
	if(var_163_bool == 0) goto Label_197; // 0xc1 JumpB
	func_206(); // 0xc3 NEW_2
}


main(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_bool)
{
	var_9_object = Obj(); var_10_object = Obj(); // 0x0 PushV
	func_344(); // 0x2 NEW_2
	GetMainOutdoorScene(var_10_object); // 0x4 Func
	var_29_object = Obj(); var_30_object = Obj(); var_31_string = ""; var_32_string = ""; // 0x6 PushV
	var_30_object = var_10_object; // 0x7 Mov
	var_31_string = "d1q01_trigger"; // 0x8 MovS
	var_32_string = "d1q01_trigger.xml"; // 0x9 MovS
	func_283(var_29_object, var_30_object, var_31_string, var_32_string); // 0xa NEW_2
	var_2_object = var_29_object; // 0xb TMov
	var_37_string = "warehouse_rubin"; // 0xd PushS
	GetSceneByName(var_10_object, var_37_string); // 0xe Func
	var_38_string = "norubin"; // 0x10 PushS
	Trigger(var_10_object, var_38_string); // 0x11 Func
	
Label_19:
	Hold(); // 0x13 Func
	goto Label_19; // 0x15 Jump
}


func_291(var_51_object, var_52_object, var_53_string, var_54_string, var_55_string)
{
	var_56_bool = 0; var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_object = Obj(); var_60_bool = 0; var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_object = Obj(); // 0x123 PushV
	GetLocator(var_53_string, var_60_bool, var_61_cvector, var_62_cvector); // 0x124 ObjFunc
	var_64_bool = var_60_bool == 0; // 0x126 Not
	if(var_64_bool == 0) goto Label_304; // 0x127 JumpB
	var_65_string = "Locator "; // 0x128 PushS
	var_66_int = var_65_string + var_53_string; // 0x129 Add
	var_67_string = " doesn't exist"; // 0x12a PushS
	var_68_int = var_66_int + var_67_string; // 0x12b Add
	Trace(var_68_int); // 0x12c Func
	var_63_object = 0; // 0x12e SetNull
	goto Label_306; // 0x12f Jump
	
Label_306:
	var_51_object = var_63_object; // 0x132 Mov
	return 8; // 0x133 Return
	
Label_304:
	AddActor(var_63_object, var_54_string, var_52_object, var_61_cvector, var_62_cvector, var_55_string); // 0x130 Func
}


func_198()
{
	var_141_string = "d1q01"; // 0xc6 PushS
	var_142_int = -1; // 0xc7 PushI
	SetVariable(var_141_string, var_142_int); // 0xc8 Func
	func_231(var_19_object, var_20_object, var_21_int); // 0xcb NEW_2
	return 0; // 0xcd Return
}


func_231(var_18_object, var_19_object, var_20_object)
{
	var_143_object = Obj(); var_144_object = Obj(); // 0xe7 PushV
	EventDisable(26); // 0xe8 EventDisable
	func_214(var_20_object, var_21_int, var_143_object, var_144_object); // 0xea NEW_2
	var_145_object = var_0_object; // 0xec PushT
	if(var_145_object == 0) goto Label_240; // 0xed JumpB
	Remove(); // 0xee TObjFunc
	
Label_240:
	var_146_object = var_1_object; // 0xf0 PushT
	if(var_146_object == 0) goto Label_244; // 0xf1 JumpB
	Remove(); // 0xf2 TObjFunc
	
Label_244:
	var_147_object = var_5_object; // 0xf4 PushT
	if(var_147_object == 0) goto Label_249; // 0xf5 JumpB
	var_148_string = "cleanup"; // 0xf6 PushS
	Trigger(var_20_object, var_148_string); // 0xf7 Func
	
Label_249:
	var_149_object = var_5_object; // 0xf9 PushT
	if(var_149_object == 0) goto Label_254; // 0xfa JumpB
	var_150_string = "cleanup"; // 0xfb PushS
	Trigger(var_19_object, var_150_string); // 0xfc Func
	
Label_254:
	var_151_object = var_7_object; // 0xfe PushT
	if(var_151_object == 0) goto Label_259; // 0xff JumpB
	var_152_string = "cleanup"; // 0x100 PushS
	Trigger(var_18_object, var_152_string); // 0x101 Func
	
Label_259:
	var_153_string = "warehouse_rubin"; // 0x103 PushS
	GetSceneByName(var_144_object, var_153_string); // 0x104 Func
	var_154_string = "rubin"; // 0x106 PushS
	Trigger(var_144_object, var_154_string); // 0x107 Func
	var_155_string = ""; var_156_bool = 0; // 0x109 PushV
	var_155_string = "icot_eva@door1"; // 0x10a MovS
	var_156_bool = 0; // 0x10b MovB
	func_327(var_155_string, var_156_bool); // 0x10c NEW_2
	var_157_object = Obj(); // 0x10e PushV
	func_277(var_157_object); // 0x10f NEW_2
	RemoveActor(var_157_object); // 0x111 Func
	return 2; // 0x113 Return
}


func_327(var_11_string, var_12_bool)
{
	var_13_object = Obj(); var_14_object = Obj(); // 0x147 PushV
	FindActor(var_14_object, var_11_string); // 0x148 Func
	var_15_bool = var_14_object == 0; // 0x14a Not
	if(var_15_bool == 0) goto Label_339; // 0x14b JumpB
	var_16_string = "Door "; // 0x14c PushS
	var_17_int = var_16_string + var_11_string; // 0x14d Add
	var_18_string = " not found"; // 0x14e PushS
	var_19_int = var_17_int + var_18_string; // 0x14f Add
	Trace(var_19_int); // 0x150 Func
	goto Label_342; // 0x152 Jump
	
Label_342:
	return 2; // 0x156 Return
	
Label_339:
	var_20_string = "locked"; // 0x153 PushS
	SetProperty(var_20_string, var_12_bool); // 0x154 ObjFunc
}


func_206()
{
	var_164_string = "d1q01"; // 0xce PushS
	var_165_int = 1000; // 0xcf PushI
	SetVariable(var_164_string, var_165_int); // 0xd0 Func
	func_231(var_19_object, var_20_object, var_21_int); // 0xd3 NEW_2
	return 0; // 0xd5 Return
}


func_370()
{
	var_118_string = ""; var_119_bool = 0; // 0x172 PushV
	var_118_string = "cot_anna@door1"; // 0x173 MovS
	var_119_bool = 0; // 0x174 MovB
	func_327(var_118_string, var_119_bool); // 0x175 NEW_2
	var_128_string = ""; var_129_bool = 0; // 0x177 PushV
	var_128_string = "cot_julia@door1"; // 0x178 MovS
	var_129_bool = 0; // 0x179 MovB
	func_327(var_128_string, var_129_bool); // 0x17a NEW_2
	var_130_string = ""; var_131_bool = 0; // 0x17c PushV
	var_130_string = "cot_lara@door1"; // 0x17d MovS
	var_131_bool = 0; // 0x17e MovB
	func_327(var_130_string, var_131_bool); // 0x17f NEW_2
	var_132_string = ""; var_133_bool = 0; // 0x181 PushV
	var_132_string = "house_vlad@door1"; // 0x182 MovS
	var_133_bool = 0; // 0x183 MovB
	func_327(var_132_string, var_133_bool); // 0x184 NEW_2
	var_134_string = ""; var_135_bool = 0; // 0x186 PushV
	var_134_string = "dt_house_1_04@door1"; // 0x187 MovS
	var_135_bool = 0; // 0x188 MovB
	func_327(var_134_string, var_135_bool); // 0x189 NEW_2
	return 0; // 0x18b Return
}


func_309(var_24_object, var_26_string, var_27_string, var_28_string)
{
	var_29_bool = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_object = Obj(); var_33_bool = 0; var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_object = Obj(); // 0x135 PushV
	GetLocator(var_26_string, var_33_bool, var_34_cvector, var_35_cvector); // 0x136 ObjFunc
	var_37_bool = var_33_bool == 0; // 0x138 Not
	if(var_37_bool == 0) goto Label_322; // 0x139 JumpB
	var_38_string = "Locator "; // 0x13a PushS
	var_39_int = var_38_string + var_26_string; // 0x13b Add
	var_40_string = " doesn't exist"; // 0x13c PushS
	var_41_int = var_39_int + var_40_string; // 0x13d Add
	Trace(var_41_int); // 0x13e Func
	var_36_object = 0; // 0x140 SetNull
	goto Label_324; // 0x141 Jump
	
Label_324:
	var_24_object = var_36_object; // 0x144 Mov
	return 8; // 0x145 Return
	
Label_322:
	AddStationaryActor(var_36_object, var_34_cvector, var_35_cvector, var_27_string, var_28_string); // 0x142 ObjFunc
}


func_214(var_8_bool, var_19_object, var_20_object, var_21_int)
{
	var_75_object = var_2_object; // 0xd6 PushT
	if(var_75_object == 0) goto Label_219; // 0xd7 JumpB
	var_76_string = "cleanup"; // 0xd8 PushS
	Trigger(var_21_int, var_76_string); // 0xd9 Func
	
Label_219:
	var_77_object = var_3_object; // 0xdb PushT
	if(var_77_object == 0) goto Label_224; // 0xdc JumpB
	var_78_string = "cleanup"; // 0xdd PushS
	Trigger(var_20_object, var_78_string); // 0xde Func
	
Label_224:
	var_79_object = var_4_object; // 0xe0 PushT
	if(var_79_object == 0) goto Label_229; // 0xe1 JumpB
	var_80_string = "cleanup"; // 0xe2 PushS
	Trigger(var_19_object, var_80_string); // 0xe3 Func
	
Label_229:
	var_8_bool = 1; // 0xe5 TMovB
	return 0; // 0xe6 Return
}


func_277(var_157_object)
{
	var_158_object = Obj(); var_159_object = Obj(); // 0x115 PushV
	self(var_159_object); // 0x116 Func
	var_157_object = var_159_object; // 0x118 Mov
	return 2; // 0x119 Return
}


func_344()
{
	var_11_string = ""; var_12_bool = 0; // 0x158 PushV
	var_11_string = "cot_anna@door1"; // 0x159 MovS
	var_12_bool = 1; // 0x15a MovB
	func_327(var_11_string, var_12_bool); // 0x15b NEW_2
	var_21_string = ""; var_22_bool = 0; // 0x15d PushV
	var_21_string = "cot_julia@door1"; // 0x15e MovS
	var_22_bool = 1; // 0x15f MovB
	func_327(var_21_string, var_22_bool); // 0x160 NEW_2
	var_23_string = ""; var_24_bool = 0; // 0x162 PushV
	var_23_string = "cot_lara@door1"; // 0x163 MovS
	var_24_bool = 1; // 0x164 MovB
	func_327(var_23_string, var_24_bool); // 0x165 NEW_2
	var_25_string = ""; var_26_bool = 0; // 0x167 PushV
	var_25_string = "house_vlad@door1"; // 0x168 MovS
	var_26_bool = 1; // 0x169 MovB
	func_327(var_25_string, var_26_bool); // 0x16a NEW_2
	var_27_string = ""; var_28_bool = 0; // 0x16c PushV
	var_27_string = "dt_house_1_04@door1"; // 0x16d MovS
	var_28_bool = 1; // 0x16e MovB
	func_327(var_27_string, var_28_bool); // 0x16f NEW_2
	return 0; // 0x171 Return
}


func_283(var_29_object, var_30_object, var_31_string, var_32_string)
{
	var_33_object = Obj(); var_34_object = Obj(); // 0x11b PushV
	var_35_cvector = CVector(0.0, 0.0, 0.0); // 0x11c PushVec
	var_36_cvector = CVector(0.0, 0.0, 1.0); // 0x11d PushVec
	AddActor(var_34_object, var_31_string, var_30_object, var_35_cvector, var_36_cvector, var_32_string); // 0x11e Func
	var_29_object = var_34_object; // 0x120 Mov
	return 2; // 0x121 Return
}


