task_0_event_26(var_0_object, var_1_object, var_2_object, var_3_object, var_4_string)
{
	var_5_object = Obj(); var_6_object = Obj(); var_7_bool = 0; var_8_int = 0; var_9_object = Obj(); var_10_object = Obj(); var_11_object = Obj(); var_12_bool = 0; var_13_int = 0; var_14_object = Obj(); // 0x16 PushV
	Trace(var_4_string); // 0x17 Func
	var_15_string = "place_mdoberman"; // 0x19 PushS
	var_16_bool = var_4_string == var_15_string; // 0x1a Eq
	if(var_16_bool == 0) goto Label_40; // 0x1b JumpB
	GetMainOutdoorScene(var_10_object); // 0x1c Func
	var_17_object = Obj(); var_18_object = Obj(); var_19_string = ""; var_20_string = ""; var_21_string = ""; // 0x1e PushV
	var_18_object = var_10_object; // 0x1f Mov
	var_19_string = "pt_b9q01_mdoberman"; // 0x20 MovS
	var_20_string = "pers_doberman"; // 0x21 MovS
	var_21_string = "b9q01_mdoberman.xml"; // 0x22 MovS
	func_305(var_18_object, var_19_string, var_20_string, var_21_string); // 0x23 NEW_2
	var_0_object = var_17_object; // 0x24 TMov
	var_10_object = 0; // 0x26 SetNull
	goto Label_210; // 0x27 Jump
	
Label_210:
	return 10; // 0xd2 Return
	
Label_40:
	var_35_string = "remove_mdoberman"; // 0x28 PushS
	var_36_bool = var_4_string == var_35_string; // 0x29 Eq
	if(var_36_bool == 0) goto Label_46; // 0x2a JumpB
	Remove(); // 0x2b TObjFunc
	goto Label_210; // 0x2d Jump
	
Label_46:
	var_37_string = "init_factory"; // 0x2e PushS
	var_38_bool = var_4_string == var_37_string; // 0x2f Eq
	if(var_38_bool == 0) goto Label_88; // 0x30 JumpB
	var_39_string = "factory"; // 0x31 PushS
	GetSceneByName(var_11_object, var_39_string); // 0x32 Func
	var_40_string = ""; var_41_bool = 0; // 0x34 PushV
	var_40_string = "factory@door1"; // 0x35 MovS
	var_41_bool = 0; // 0x36 MovB
	func_323(var_40_string, var_41_bool); // 0x37 NEW_2
	var_50_string = ""; var_51_bool = 0; // 0x39 PushV
	var_50_string = "ifactory_grid_door"; // 0x3a MovS
	var_51_bool = 1; // 0x3b MovB
	func_340(var_50_string, var_51_bool); // 0x3c NEW_2
	var_61_object = Obj(); var_62_object = Obj(); var_63_string = ""; var_64_string = ""; var_65_string = ""; // 0x3e PushV
	var_62_object = var_11_object; // 0x3f Mov
	var_63_string = "pt_b9q01_Danko"; // 0x40 MovS
	var_64_string = "NPC_Bakalavr"; // 0x41 MovS
	var_65_string = "b9q01_danko.xml"; // 0x42 MovS
	func_287(var_61_object, var_62_object, var_63_string, var_64_string, var_65_string); // 0x43 NEW_2
	var_1_object = var_61_object; // 0x44 TMov
	var_79_object = Obj(); var_80_object = Obj(); var_81_string = ""; var_82_string = ""; var_83_string = ""; // 0x46 PushV
	var_80_object = var_11_object; // 0x47 Mov
	var_81_string = "pt_b9q01_doberman1"; // 0x48 MovS
	var_82_string = "pers_karlik"; // 0x49 MovS
	var_83_string = "b9q01_doberman1.xml"; // 0x4a MovS
	func_287(var_79_object, var_80_object, var_81_string, var_82_string, var_83_string); // 0x4b NEW_2
	var_2_object = var_79_object; // 0x4c TMov
	var_84_object = Obj(); var_85_object = Obj(); var_86_string = ""; var_87_string = ""; var_88_string = ""; // 0x4e PushV
	var_85_object = var_11_object; // 0x4f Mov
	var_86_string = "pt_b9q01_doberman2"; // 0x50 MovS
	var_87_string = "pers_karlik"; // 0x51 MovS
	var_88_string = "b9q01_doberman2.xml"; // 0x52 MovS
	func_287(var_84_object, var_85_object, var_86_string, var_87_string, var_88_string); // 0x53 NEW_2
	var_3_object = var_84_object; // 0x54 TMov
	var_11_object = 0; // 0x56 SetNull
	goto Label_210; // 0x57 Jump
	
Label_88:
	var_89_string = "factory_fight"; // 0x58 PushS
	var_90_bool = var_4_string == var_89_string; // 0x59 Eq
	if(var_90_bool == 0) goto Label_106; // 0x5a JumpB
	var_91_string = "attack"; // 0x5b PushS
	Trigger(var_14_object, var_91_string); // 0x5c Func
	var_92_string = "attack"; // 0x5e PushS
	Trigger(var_13_int, var_92_string); // 0x5f Func
	var_93_string = ""; var_94_bool = 0; // 0x61 PushV
	var_93_string = "ifactory@door1"; // 0x62 MovS
	var_94_bool = 1; // 0x63 MovB
	func_323(var_93_string, var_94_bool); // 0x64 NEW_2
	var_95_string = "door_close"; // 0x66 PushS
	PlaySound(var_95_string); // 0x67 Func
	goto Label_210; // 0x69 Jump
	
Label_106:
	var_96_string = "doberman_dead"; // 0x6a PushS
	var_97_bool = var_4_string == var_96_string; // 0x6b Eq
	if(var_97_bool == 0) goto Label_135; // 0x6c JumpB
	IsDead(var_12_bool); // 0x6d TObjFunc
	var_98_bool = var_12_bool; // 0x6f Push
	if(var_98_bool == 0) goto Label_134; // 0x70 JumpB
	IsDead(var_12_bool); // 0x71 TObjFunc
	var_99_bool = var_12_bool; // 0x73 Push
	if(var_99_bool == 0) goto Label_134; // 0x74 JumpB
	var_100_string = ""; var_101_bool = 0; // 0x75 PushV
	var_100_string = "ifactory@door1"; // 0x76 MovS
	var_101_bool = 0; // 0x77 MovB
	func_323(var_100_string, var_101_bool); // 0x78 NEW_2
	var_102_string = ""; var_103_bool = 0; // 0x7a PushV
	var_102_string = "ifactory_grid_door"; // 0x7b MovS
	var_103_bool = 0; // 0x7c MovB
	func_340(var_102_string, var_103_bool); // 0x7d NEW_2
	var_104_string = "door_open"; // 0x7f PushS
	PlaySound(var_104_string); // 0x80 Func
	var_105_string = "b9q01DankoFree"; // 0x82 PushS
	var_106_int = 1; // 0x83 PushI
	SetVariable(var_105_string, var_106_int); // 0x84 Func
	
Label_134:
	goto Label_210; // 0x86 Jump
	
Label_135:
	var_107_string = "danko_free"; // 0x87 PushS
	var_108_bool = var_4_string == var_107_string; // 0x88 Eq
	if(var_108_bool == 0) goto Label_152; // 0x89 JumpB
	var_109_string = ""; var_110_bool = 0; // 0x8a PushV
	var_109_string = "ifactory_grid_door"; // 0x8b MovS
	var_110_bool = 0; // 0x8c MovB
	func_340(var_109_string, var_110_bool); // 0x8d NEW_2
	var_111_string = "door_open"; // 0x8f PushS
	PlaySound(var_111_string); // 0x90 Func
	var_112_string = ""; var_113_bool = 0; // 0x92 PushV
	var_112_string = "factory@door1"; // 0x93 MovS
	var_113_bool = 1; // 0x94 MovB
	func_323(var_112_string, var_113_bool); // 0x95 NEW_2
	goto Label_210; // 0x97 Jump
	
Label_152:
	var_114_string = "reset_factory"; // 0x98 PushS
	var_115_bool = var_4_string == var_114_string; // 0x99 Eq
	if(var_115_bool == 0) goto Label_164; // 0x9a JumpB
	func_227(var_12_bool, var_13_int, var_14_object); // 0x9c NEW_2
	var_119_string = ""; var_120_bool = 0; // 0x9e PushV
	var_119_string = "factory@door1"; // 0x9f MovS
	var_120_bool = 1; // 0xa0 MovB
	func_323(var_119_string, var_120_bool); // 0xa1 NEW_2
	goto Label_210; // 0xa3 Jump
	
Label_164:
	var_121_string = "cleanup"; // 0xa4 PushS
	var_122_bool = var_4_string == var_121_string; // 0xa5 Eq
	if(var_122_bool == 0) goto Label_181; // 0xa6 JumpB
	var_123_string = "b9q01"; // 0xa7 PushS
	GetVariable(var_123_string, var_13_int); // 0xa8 Func
	var_124_int = 1000; // 0xaa PushI
	var_125_bool = var_13_int != var_124_int; // 0xab Neq
	if(var_125_bool == 0) goto Label_177; // 0xac JumpB
	func_211(); // 0xae NEW_2
	goto Label_180; // 0xb0 Jump
	
Label_180:
	goto Label_210; // 0xb4 Jump
	
Label_177:
	func_240(); // 0xb2 NEW_2
	
Label_181:
	var_144_string = "remove_danko"; // 0xb5 PushS
	var_145_bool = var_4_string == var_144_string; // 0xb6 Eq
	if(var_145_bool == 0) goto Label_197; // 0xb7 JumpB
	var_146_string = "cot_eva"; // 0xb8 PushS
	GetSceneByName(var_14_object, var_146_string); // 0xb9 Func
	var_147_string = ""; var_148_bool = 0; // 0xbb PushV
	var_147_string = "icot_eva_door"; // 0xbc MovS
	var_148_bool = 0; // 0xbd MovB
	func_340(var_147_string, var_148_bool); // 0xbe NEW_2
	var_149_string = "nodanko"; // 0xc0 PushS
	Trigger(var_14_object, var_149_string); // 0xc1 Func
	var_14_object = 0; // 0xc3 SetNull
	goto Label_210; // 0xc4 Jump
	
Label_197:
	var_150_string = "fail"; // 0xc5 PushS
	var_151_bool = var_4_string == var_150_string; // 0xc6 Eq
	if(var_151_bool == 0) goto Label_204; // 0xc7 JumpB
	func_211(); // 0xc9 NEW_2
	goto Label_210; // 0xcb Jump
	
Label_204:
	var_152_string = "completed"; // 0xcc PushS
	var_153_bool = var_4_string == var_152_string; // 0xcd Eq
	if(var_153_bool == 0) goto Label_210; // 0xce JumpB
	func_219(); // 0xd0 NEW_2
}


main(var_0_object, var_1_object, var_2_object, var_3_object)
{
	var_4_object = Obj(); var_5_object = Obj(); // 0x0 PushV
	var_6_string = ""; var_7_bool = 0; // 0x1 PushV
	var_6_string = "boiny@door1"; // 0x2 MovS
	var_7_bool = 0; // 0x3 MovB
	func_323(var_6_string, var_7_bool); // 0x4 NEW_2
	var_16_string = "cot_eva"; // 0x6 PushS
	GetSceneByName(var_5_object, var_16_string); // 0x7 Func
	var_17_string = ""; var_18_bool = 0; // 0x9 PushV
	var_17_string = "icot_eva_door"; // 0xa MovS
	var_18_bool = 0; // 0xb MovB
	func_340(var_17_string, var_18_bool); // 0xc NEW_2
	var_28_string = "nodanko"; // 0xe PushS
	Trigger(var_5_object, var_28_string); // 0xf Func
	
Label_17:
	Hold(); // 0x11 Func
	goto Label_17; // 0x13 Jump
}


func_323(var_6_string, var_7_bool)
{
	var_8_object = Obj(); var_9_object = Obj(); // 0x143 PushV
	FindActor(var_9_object, var_6_string); // 0x144 Func
	var_10_bool = var_9_object == 0; // 0x146 Not
	if(var_10_bool == 0) goto Label_335; // 0x147 JumpB
	var_11_string = "Door "; // 0x148 PushS
	var_12_int = var_11_string + var_6_string; // 0x149 Add
	var_13_string = " not found"; // 0x14a PushS
	var_14_int = var_12_int + var_13_string; // 0x14b Add
	Trace(var_14_int); // 0x14c Func
	goto Label_338; // 0x14e Jump
	
Label_338:
	return 2; // 0x152 Return
	
Label_335:
	var_15_string = "locked"; // 0x14f PushS
	SetProperty(var_15_string, var_7_bool); // 0x150 ObjFunc
}


func_227(var_12_bool, var_13_int, var_14_object)
{
	var_116_object = var_1_object; // 0xe3 PushT
	if(var_116_object == 0) goto Label_231; // 0xe4 JumpB
	RemoveActor(var_14_object); // 0xe5 Func
	
Label_231:
	var_117_object = var_2_object; // 0xe7 PushT
	if(var_117_object == 0) goto Label_235; // 0xe8 JumpB
	RemoveActor(var_13_int); // 0xe9 Func
	
Label_235:
	var_118_object = var_3_object; // 0xeb PushT
	if(var_118_object == 0) goto Label_239; // 0xec JumpB
	RemoveActor(var_12_bool); // 0xed Func
	
Label_239:
	return 0; // 0xef Return
}


func_240()
{
	var_128_object = Obj(); var_129_object = Obj(); // 0xf0 PushV
	var_130_object = var_0_object; // 0xf1 PushT
	if(var_130_object == 0) goto Label_245; // 0xf2 JumpB
	Remove(); // 0xf3 TObjFunc
	
Label_245:
	func_227(var_14_object, var_128_object, var_129_object); // 0xf6 NEW_2
	var_131_string = ""; var_132_bool = 0; // 0xf8 PushV
	var_131_string = "ifactory@door1"; // 0xf9 MovS
	var_132_bool = 0; // 0xfa MovB
	func_323(var_131_string, var_132_bool); // 0xfb NEW_2
	var_133_string = ""; var_134_bool = 0; // 0xfd PushV
	var_133_string = "ifactory_grid_door"; // 0xfe MovS
	var_134_bool = 0; // 0xff MovB
	func_340(var_133_string, var_134_bool); // 0x100 NEW_2
	var_135_string = ""; var_136_bool = 0; // 0x102 PushV
	var_135_string = "boiny@door1"; // 0x103 MovS
	var_136_bool = 1; // 0x104 MovB
	func_323(var_135_string, var_136_bool); // 0x105 NEW_2
	var_137_string = "cot_eva"; // 0x107 PushS
	GetSceneByName(var_129_object, var_137_string); // 0x108 Func
	var_138_string = ""; var_139_bool = 0; // 0x10a PushV
	var_138_string = "icot_eva_door"; // 0x10b MovS
	var_139_bool = 0; // 0x10c MovB
	func_340(var_138_string, var_139_bool); // 0x10d NEW_2
	var_140_string = "danko"; // 0x10f PushS
	Trigger(var_129_object, var_140_string); // 0x110 Func
	var_141_object = Obj(); // 0x112 PushV
	func_281(var_141_object); // 0x113 NEW_2
	RemoveActor(var_141_object); // 0x115 Func
	return 2; // 0x117 Return
}


func_305(var_17_object, var_19_string, var_20_string, var_21_string)
{
	var_22_bool = 0; var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_object = Obj(); var_26_bool = 0; var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_object = Obj(); // 0x131 PushV
	GetLocator(var_19_string, var_26_bool, var_27_cvector, var_28_cvector); // 0x132 ObjFunc
	var_30_bool = var_26_bool == 0; // 0x134 Not
	if(var_30_bool == 0) goto Label_318; // 0x135 JumpB
	var_31_string = "Locator "; // 0x136 PushS
	var_32_int = var_31_string + var_19_string; // 0x137 Add
	var_33_string = " doesn't exist"; // 0x138 PushS
	var_34_int = var_32_int + var_33_string; // 0x139 Add
	Trace(var_34_int); // 0x13a Func
	var_29_object = 0; // 0x13c SetNull
	goto Label_320; // 0x13d Jump
	
Label_320:
	var_17_object = var_29_object; // 0x140 Mov
	return 8; // 0x141 Return
	
Label_318:
	AddStationaryActor(var_29_object, var_27_cvector, var_28_cvector, var_20_string, var_21_string); // 0x13e ObjFunc
}


func_211()
{
	var_126_string = "b9q01"; // 0xd3 PushS
	var_127_int = -1; // 0xd4 PushI
	SetVariable(var_126_string, var_127_int); // 0xd5 Func
	func_240(); // 0xd8 NEW_2
	return 0; // 0xda Return
}


func_340(var_17_string, var_18_bool)
{
	var_19_object = Obj(); var_20_object = Obj(); // 0x154 PushV
	FindActor(var_20_object, var_17_string); // 0x155 Func
	var_21_bool = var_20_object == 0; // 0x157 Not
	if(var_21_bool == 0) goto Label_352; // 0x158 JumpB
	var_22_string = "Door "; // 0x159 PushS
	var_23_int = var_22_string + var_17_string; // 0x15a Add
	var_24_string = " not found"; // 0x15b PushS
	var_25_int = var_23_int + var_24_string; // 0x15c Add
	Trace(var_25_int); // 0x15d Func
	goto Label_359; // 0x15f Jump
	
Label_359:
	return 2; // 0x167 Return
	
Label_352:
	var_26_bool = var_18_bool; // 0x160 Push
	if(var_26_bool == 0) goto Label_356; // 0x161 JumpB
	Close(); // 0x162 ObjFunc
	
Label_356:
	var_27_string = "locked"; // 0x164 PushS
	SetProperty(var_27_string, var_18_bool); // 0x165 ObjFunc
}


func_281(var_141_object)
{
	var_142_object = Obj(); var_143_object = Obj(); // 0x119 PushV
	self(var_143_object); // 0x11a Func
	var_141_object = var_143_object; // 0x11c Mov
	return 2; // 0x11d Return
}


func_219()
{
	var_154_string = "b9q01"; // 0xdb PushS
	var_155_int = 1000; // 0xdc PushI
	SetVariable(var_154_string, var_155_int); // 0xdd Func
	func_240(); // 0xe0 NEW_2
	return 0; // 0xe2 Return
}


func_287(var_61_object, var_62_object, var_63_string, var_64_string, var_65_string)
{
	var_66_bool = 0; var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_object = Obj(); var_70_bool = 0; var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_object = Obj(); // 0x11f PushV
	GetLocator(var_63_string, var_70_bool, var_71_cvector, var_72_cvector); // 0x120 ObjFunc
	var_74_bool = var_70_bool == 0; // 0x122 Not
	if(var_74_bool == 0) goto Label_300; // 0x123 JumpB
	var_75_string = "Locator "; // 0x124 PushS
	var_76_int = var_75_string + var_63_string; // 0x125 Add
	var_77_string = " doesn't exist"; // 0x126 PushS
	var_78_int = var_76_int + var_77_string; // 0x127 Add
	Trace(var_78_int); // 0x128 Func
	var_73_object = 0; // 0x12a SetNull
	goto Label_302; // 0x12b Jump
	
Label_302:
	var_61_object = var_73_object; // 0x12e Mov
	return 8; // 0x12f Return
	
Label_300:
	AddActor(var_73_object, var_64_string, var_62_object, var_71_cvector, var_72_cvector, var_65_string); // 0x12c Func
}


