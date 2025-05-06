task_0_event_26(var_0_object, var_1_object, var_2_object, var_3_object, var_4_bool, var_5_string)
{
	var_6_int = 0; var_7_int = 0; var_8_object = Obj(); var_9_object = Obj(); var_10_int = 0; var_11_int = 0; var_12_object = Obj(); var_13_object = Obj(); var_14_int = 0; var_15_int = 0; var_16_int = 0; var_17_object = Obj(); var_18_object = Obj(); var_19_int = 0; var_20_int = 0; var_21_object = Obj(); var_22_object = Obj(); var_23_int = 0; // 0x85 PushV
	Trace(var_5_string); // 0x86 Func
	var_24_string = "place_butchers"; // 0x88 PushS
	var_25_bool = var_5_string == var_24_string; // 0x89 Eq
	if(var_25_bool == 0) goto Label_143; // 0x8a JumpB
	func_17(); // 0x8c NEW_2
	goto Label_245; // 0x8e Jump
	
Label_245:
	return 18; // 0xf5 Return
	
Label_143:
	var_89_string = "patrol_talk"; // 0x8f PushS
	var_90_bool = var_5_string == var_89_string; // 0x90 Eq
	if(var_90_bool == 0) goto Label_150; // 0x91 JumpB
	func_95(); // 0x93 NEW_2
	goto Label_245; // 0x95 Jump
	
Label_150:
	var_112_string = "gpatrol_attack"; // 0x96 PushS
	var_113_bool = var_5_string == var_112_string; // 0x97 Eq
	if(var_113_bool == 0) goto Label_186; // 0x98 JumpB
	var_114_bool = var_4_bool == 0; // 0x99 Not
	if(var_114_bool == 0) goto Label_160; // 0x9a JumpB
	var_4_bool = 1; // 0x9b TMovB
	var_115_object = Obj(); var_116_string = ""; // 0x9c PushV
	var_116_string = "quest_d3_01_teleport"; // 0x9d MovS
	func_304(var_115_object, var_116_string); // 0x9e NEW_2
	
Label_160:
	size(var_15_int); // 0xa0 TObjFunc
	var_16_int = 0; // 0xa2 MovI
	
Label_163:
	var_123_bool = var_16_int < var_15_int; // 0xa3 LT
	if(var_123_bool == 0) goto Label_179; // 0xa4 JumpB
	get(var_17_object, var_16_int); // 0xa5 TObjFunc
	GetActor(var_18_object); // 0xa7 ObjFunc
	var_124_object = var_18_object; // 0xa9 Push
	if(var_124_object == 0) goto Label_174; // 0xaa JumpB
	var_125_string = "kill_player"; // 0xab PushS
	Trigger(var_18_object, var_125_string); // 0xac Func
	
Label_174:
	var_18_object = 0; // 0xae SetNull
	var_17_object = 0; // 0xaf SetNull
	var_126_int = 1; // 0xb0 PushI
	var_16_int = var_16_int + var_126_int; // 0xb1 Add2
	goto Label_163; // 0xb2 Jump
	
Label_179:
	var_127_string = "put_item"; // 0xb3 PushS
	Trigger(var_22_object, var_127_string); // 0xb4 Func
	func_262(var_20_int, var_21_object, var_22_object, var_23_int); // 0xb7 NEW_2
	goto Label_245; // 0xb9 Jump
	
Label_186:
	var_154_string = "gpatrol_talk"; // 0xba PushS
	var_155_bool = var_5_string == var_154_string; // 0xbb Eq
	if(var_155_bool == 0) goto Label_215; // 0xbc JumpB
	var_156_string = "put_item"; // 0xbd PushS
	Trigger(var_22_object, var_156_string); // 0xbe Func
	size(var_19_int); // 0xc0 TObjFunc
	var_20_int = 0; // 0xc2 MovI
	
Label_195:
	var_157_bool = var_20_int < var_19_int; // 0xc3 LT
	if(var_157_bool == 0) goto Label_211; // 0xc4 JumpB
	get(var_21_object, var_20_int); // 0xc5 TObjFunc
	GetActor(var_22_object); // 0xc7 ObjFunc
	var_158_object = var_22_object; // 0xc9 Push
	if(var_158_object == 0) goto Label_206; // 0xca JumpB
	var_159_string = "talk_player"; // 0xcb PushS
	Trigger(var_22_object, var_159_string); // 0xcc Func
	
Label_206:
	var_22_object = 0; // 0xce SetNull
	var_21_object = 0; // 0xcf SetNull
	var_160_int = 1; // 0xd0 PushI
	var_20_int = var_20_int + var_160_int; // 0xd1 Add2
	goto Label_195; // 0xd2 Jump
	
Label_211:
	func_262(var_20_int, var_21_object, var_22_object, var_23_int); // 0xd4 NEW_2
	goto Label_245; // 0xd6 Jump
	
Label_215:
	var_161_string = "cleanup"; // 0xd7 PushS
	var_162_bool = var_5_string == var_161_string; // 0xd8 Eq
	if(var_162_bool == 0) goto Label_232; // 0xd9 JumpB
	var_163_string = "d3q01"; // 0xda PushS
	GetVariable(var_163_string, var_23_int); // 0xdb Func
	var_164_int = 1000; // 0xdd PushI
	var_165_bool = var_23_int != var_164_int; // 0xde Neq
	if(var_165_bool == 0) goto Label_228; // 0xdf JumpB
	func_246(); // 0xe1 NEW_2
	goto Label_231; // 0xe3 Jump
	
Label_231:
	goto Label_245; // 0xe7 Jump
	
Label_228:
	func_282(); // 0xe5 NEW_2
	
Label_232:
	var_171_string = "fail"; // 0xe8 PushS
	var_172_bool = var_5_string == var_171_string; // 0xe9 Eq
	if(var_172_bool == 0) goto Label_239; // 0xea JumpB
	func_246(); // 0xec NEW_2
	goto Label_245; // 0xee Jump
	
Label_239:
	var_173_string = "completed"; // 0xef PushS
	var_174_bool = var_5_string == var_173_string; // 0xf0 Eq
	if(var_174_bool == 0) goto Label_245; // 0xf1 JumpB
	func_254(); // 0xf3 NEW_2
}


main(var_0_object, var_1_object, var_2_object, var_3_object, var_4_bool)
{
	var_4_bool = 0; // 0x0 TMovB
	var_5_object = Obj(); // 0x1 PushV
	func_298(var_5_object); // 0x2 NEW_2
	var_0_object = var_5_object; // 0x3 TMov
	var_8_object = Obj(); // 0x5 PushV
	func_298(var_8_object); // 0x6 NEW_2
	var_2_object = var_8_object; // 0x7 TMov
	var_9_object = Obj(); // 0x9 PushV
	func_298(var_9_object); // 0xa NEW_2
	var_1_object = var_9_object; // 0xb TMov
	
Label_13:
	Hold(); // 0xd Func
	goto Label_13; // 0xf Jump
}


func_354(var_139_object, var_140_string)
{
	var_141_int = 0; var_142_int = 0; var_143_object = Obj(); var_144_int = 0; var_145_int = 0; var_146_object = Obj(); // 0x162 PushV
	var_147_object = var_139_object; // 0x163 Push
	if(var_147_object == 0) goto Label_372; // 0x164 JumpB
	size(var_144_int); // 0x165 ObjFunc
	var_145_int = 0; // 0x167 MovI
	
Label_360:
	var_148_bool = var_145_int < var_144_int; // 0x168 LT
	if(var_148_bool == 0) goto Label_372; // 0x169 JumpB
	get(var_146_object, var_145_int); // 0x16a ObjFunc
	var_149_object = var_146_object; // 0x16c Push
	if(var_149_object == 0) goto Label_368; // 0x16d JumpB
	Trigger(var_146_object, var_140_string); // 0x16e Func
	
Label_368:
	var_146_object = 0; // 0x170 SetNull
	var_150_int = 1; // 0x171 PushI
	var_145_int = var_145_int + var_150_int; // 0x172 Add2
	goto Label_360; // 0x173 Jump
	
Label_372:
	return 6; // 0x174 Return
}


func_292(var_168_object)
{
	var_169_object = Obj(); var_170_object = Obj(); // 0x124 PushV
	self(var_170_object); // 0x125 Func
	var_168_object = var_170_object; // 0x127 Mov
	return 2; // 0x128 Return
}


func_262(var_0_object, var_1_object, var_2_object, var_22_object)
{
	var_128_object = Obj(); // 0x106 PushV
	var_128_object = var_0_object; // 0x107 MovT
	func_333(var_128_object); // 0x108 NEW_2
	var_139_object = Obj(); var_140_string = ""; // 0x10a PushV
	var_139_object = var_1_object; // 0x10b MovT
	var_140_string = "cleanup"; // 0x10c MovS
	func_354(var_139_object, var_140_string); // 0x10d NEW_2
	var_1_object = 0; // 0x10f SetNullT
	var_151_object = Obj(); // 0x110 PushV
	var_151_object = var_2_object; // 0x111 MovT
	func_333(var_151_object); // 0x112 NEW_2
	var_152_object = var_3_object; // 0x114 PushT
	if(var_152_object == 0) goto Label_281; // 0x115 JumpB
	var_153_string = "cleanup"; // 0x116 PushS
	Trigger(var_22_object, var_153_string); // 0x117 Func
	
Label_281:
	return 0; // 0x119 Return
}


func_298(var_5_object)
{
	var_6_object = Obj(); var_7_object = Obj(); // 0x12a PushV
	CreateObjectVector(var_7_object); // 0x12b Func
	var_5_object = var_7_object; // 0x12d Mov
	return 2; // 0x12e Return
}


func_333(var_128_object)
{
	var_129_int = 0; var_130_int = 0; var_131_object = Obj(); var_132_int = 0; var_133_int = 0; var_134_object = Obj(); // 0x14d PushV
	var_135_object = var_128_object; // 0x14e Push
	if(var_135_object == 0) goto Label_353; // 0x14f JumpB
	size(var_132_int); // 0x150 ObjFunc
	var_133_int = 0; // 0x152 MovI
	
Label_339:
	var_136_bool = var_133_int < var_132_int; // 0x153 LT
	if(var_136_bool == 0) goto Label_351; // 0x154 JumpB
	get(var_134_object, var_133_int); // 0x155 ObjFunc
	var_137_object = var_134_object; // 0x157 Push
	if(var_137_object == 0) goto Label_347; // 0x158 JumpB
	Remove(); // 0x159 ObjFunc
	
Label_347:
	var_134_object = 0; // 0x15b SetNull
	var_138_int = 1; // 0x15c PushI
	var_133_int = var_133_int + var_138_int; // 0x15d Add2
	goto Label_339; // 0x15e Jump
	
Label_351:
	clear(); // 0x15f ObjFunc
	
Label_353:
	return 6; // 0x161 Return
}


func_304(var_115_object, var_116_string)
{
	var_117_object = Obj(); var_118_object = Obj(); var_119_object = Obj(); var_120_object = Obj(); // 0x130 PushV
	GetMainOutdoorScene(var_119_object); // 0x131 Func
	var_121_string = ".bin"; // 0x133 PushS
	var_122_int = var_116_string + var_121_string; // 0x134 Add
	AddBlankActor(var_120_object, var_119_object, var_116_string, var_122_int); // 0x135 Func
	var_115_object = var_120_object; // 0x137 Mov
	return 4; // 0x138 Return
}


func_17()
{
	var_26_object = Obj(); var_27_int = 0; var_28_object = Obj(); var_29_object = Obj(); var_30_int = 0; var_31_object = Obj(); // 0x11 PushV
	GetMainOutdoorScene(var_29_object); // 0x12 Func
	var_32_int = 3; // 0x14 PushI
	irand(var_30_int, var_32_int); // 0x15 Func
	var_33_string = "Patrol location: "; // 0x17 PushS
	var_34_int = var_33_string + var_30_int; // 0x18 Add
	Trace(var_34_int); // 0x19 Func
	var_35_object = Obj(); var_36_object = Obj(); var_37_string = ""; var_38_string = ""; var_39_string = ""; // 0x1b PushV
	var_36_object = var_29_object; // 0x1c Mov
	var_40_string = "pt_d3q01_patrol"; // 0x1d PushS
	var_41_int = 1; // 0x1e PushI
	var_42_int = var_30_int + var_41_int; // 0x1f Add
	var_37_string = var_40_string + var_42_int; // 0x20 Add2
	var_38_string = "pers_patrool"; // 0x21 MovS
	var_39_string = "d3q01_cpatrol.xml"; // 0x22 MovS
	func_315(var_36_object, var_37_string, var_38_string, var_39_string); // 0x23 NEW_2
	add(var_35_object); // 0x25 TObjFunc
	var_56_object = Obj(); var_57_object = Obj(); var_58_string = ""; var_59_string = ""; var_60_string = ""; // 0x27 PushV
	var_57_object = var_29_object; // 0x28 Mov
	var_61_string = "pt_d3q01_patrol"; // 0x29 PushS
	var_62_int = 1; // 0x2a PushI
	var_63_int = var_30_int + var_62_int; // 0x2b Add
	var_64_int = 3; // 0x2c PushI
	var_65_int = var_63_int / var_64_int; // 0x2d Mod
	var_66_int = 1; // 0x2e PushI
	var_67_int = var_65_int + var_66_int; // 0x2f Add
	var_58_string = var_61_string + var_67_int; // 0x30 Add2
	var_59_string = "pers_patrool"; // 0x31 MovS
	var_60_string = "d3q01_patrol.xml"; // 0x32 MovS
	func_315(var_57_object, var_58_string, var_59_string, var_60_string); // 0x33 NEW_2
	add(var_56_object); // 0x35 TObjFunc
	var_68_object = Obj(); var_69_object = Obj(); var_70_string = ""; var_71_string = ""; var_72_string = ""; // 0x37 PushV
	var_69_object = var_29_object; // 0x38 Mov
	var_73_string = "pt_d3q01_patrol"; // 0x39 PushS
	var_74_int = 2; // 0x3a PushI
	var_75_int = var_30_int + var_74_int; // 0x3b Add
	var_76_int = 3; // 0x3c PushI
	var_77_int = var_75_int / var_76_int; // 0x3d Mod
	var_78_int = 1; // 0x3e PushI
	var_79_int = var_77_int + var_78_int; // 0x3f Add
	var_70_string = var_73_string + var_79_int; // 0x40 Add2
	var_71_string = "pers_patrool"; // 0x41 MovS
	var_72_string = "d3q01_patrol.xml"; // 0x42 MovS
	func_315(var_69_object, var_70_string, var_71_string, var_72_string); // 0x43 NEW_2
	add(var_68_object); // 0x45 TObjFunc
	var_80_string = "d3q01_corpse1"; // 0x47 PushS
	var_81_string = "actor_disp.bin"; // 0x48 PushS
	var_82_cvector = CVector(0.0, 0.0, 0.0); // 0x49 PushVec
	AddScriptedActor(var_31_object, var_80_string, var_81_string, var_29_object, var_82_cvector); // 0x4a Func
	add(var_31_object); // 0x4c TObjFunc
	var_83_string = "d3q01_corpse2"; // 0x4e PushS
	var_84_string = "actor_disp.bin"; // 0x4f PushS
	var_85_cvector = CVector(0.0, 0.0, 0.0); // 0x50 PushVec
	AddScriptedActor(var_31_object, var_83_string, var_84_string, var_29_object, var_85_cvector); // 0x51 Func
	add(var_31_object); // 0x53 TObjFunc
	var_86_string = "d3q01_corpse3"; // 0x55 PushS
	var_87_string = "actor_disp.bin"; // 0x56 PushS
	var_88_cvector = CVector(0.0, 0.0, 0.0); // 0x57 PushVec
	AddScriptedActor(var_31_object, var_86_string, var_87_string, var_29_object, var_88_cvector); // 0x58 Func
	add(var_31_object); // 0x5a TObjFunc
	return 6; // 0x5c Return
}


func_246()
{
	var_166_string = "d3q01"; // 0xf6 PushS
	var_167_int = -1; // 0xf7 PushI
	SetVariable(var_166_string, var_167_int); // 0xf8 Func
	func_282(); // 0xfb NEW_2
	return 0; // 0xfd Return
}


func_282()
{
	EventDisable(26); // 0x11a EventDisable
	func_262(var_20_int, var_21_object, var_22_object, var_23_int); // 0x11c NEW_2
	var_168_object = Obj(); // 0x11e PushV
	func_292(var_168_object); // 0x11f NEW_2
	RemoveActor(var_168_object); // 0x121 Func
	return 0; // 0x123 Return
}


func_315(var_35_object, var_37_string, var_38_string, var_39_string)
{
	var_43_bool = 0; var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_object = Obj(); var_47_bool = 0; var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_object = Obj(); // 0x13b PushV
	GetLocator(var_37_string, var_47_bool, var_48_cvector, var_49_cvector); // 0x13c ObjFunc
	var_51_bool = var_47_bool == 0; // 0x13e Not
	if(var_51_bool == 0) goto Label_328; // 0x13f JumpB
	var_52_string = "Locator "; // 0x140 PushS
	var_53_int = var_52_string + var_37_string; // 0x141 Add
	var_54_string = " doesn't exist"; // 0x142 PushS
	var_55_int = var_53_int + var_54_string; // 0x143 Add
	Trace(var_55_int); // 0x144 Func
	var_50_object = 0; // 0x146 SetNull
	goto Label_330; // 0x147 Jump
	
Label_330:
	var_35_object = var_50_object; // 0x14a Mov
	return 8; // 0x14b Return
	
Label_328:
	AddStationaryActor(var_50_object, var_48_cvector, var_49_cvector, var_38_string, var_39_string); // 0x148 ObjFunc
}


func_254()
{
	var_175_string = "d3q01"; // 0xfe PushS
	var_176_int = 1000; // 0xff PushI
	SetVariable(var_175_string, var_176_int); // 0x100 Func
	func_282(); // 0x103 NEW_2
	return 0; // 0x105 Return
}


func_95()
{
	var_91_object = Obj(); var_92_object = Obj(); // 0x5f PushV
	GetMainOutdoorScene(var_92_object); // 0x60 Func
	var_93_object = Obj(); var_94_object = Obj(); var_95_string = ""; var_96_string = ""; var_97_string = ""; // 0x62 PushV
	var_94_object = var_92_object; // 0x63 Mov
	var_95_string = "pt_d3q01_gpatrol1"; // 0x64 MovS
	var_96_string = "pers_patrool"; // 0x65 MovS
	var_97_string = "d3q01_gpatrol.xml"; // 0x66 MovS
	func_315(var_94_object, var_95_string, var_96_string, var_97_string); // 0x67 NEW_2
	add(var_93_object); // 0x69 TObjFunc
	var_98_object = Obj(); var_99_object = Obj(); var_100_string = ""; var_101_string = ""; var_102_string = ""; // 0x6b PushV
	var_99_object = var_92_object; // 0x6c Mov
	var_100_string = "pt_d3q01_gpatrol2"; // 0x6d MovS
	var_101_string = "pers_patrool"; // 0x6e MovS
	var_102_string = "d3q01_gpatrol.xml"; // 0x6f MovS
	func_315(var_99_object, var_100_string, var_101_string, var_102_string); // 0x70 NEW_2
	add(var_98_object); // 0x72 TObjFunc
	var_103_object = Obj(); var_104_object = Obj(); var_105_string = ""; var_106_string = ""; var_107_string = ""; // 0x74 PushV
	var_104_object = var_92_object; // 0x75 Mov
	var_105_string = "pt_d3q01_gpatrol3"; // 0x76 MovS
	var_106_string = "pers_patrool"; // 0x77 MovS
	var_107_string = "d3q01_gpatrol.xml"; // 0x78 MovS
	func_315(var_104_object, var_105_string, var_106_string, var_107_string); // 0x79 NEW_2
	add(var_103_object); // 0x7b TObjFunc
	var_108_string = "d3q01_graveyard_fire"; // 0x7d PushS
	var_109_cvector = CVector(0.0, 0.0, 0.0); // 0x7e PushVec
	var_110_cvector = CVector(0.0, 0.0, 1.0); // 0x7f PushVec
	var_111_string = "d3q01_graveyard_fire.xml"; // 0x80 PushS
	AddActor(var_109_cvector, var_108_string, var_92_object, var_109_cvector, var_110_cvector, var_111_string); // 0x81 Func
	return 2; // 0x83 Return
}


