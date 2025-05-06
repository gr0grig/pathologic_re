task_0_event_26(var_0_object, var_1_object, var_2_object, var_3_object, var_4_bool, var_5_string)
{
	var_6_int = 0; var_7_int = 0; var_8_object = Obj(); var_9_object = Obj(); var_10_int = 0; var_11_int = 0; var_12_object = Obj(); var_13_object = Obj(); var_14_int = 0; var_15_int = 0; var_16_object = Obj(); var_17_object = Obj(); var_18_int = 0; var_19_int = 0; var_20_object = Obj(); var_21_object = Obj(); // 0x85 PushV
	Trace(var_5_string); // 0x86 Func
	var_22_string = "place_butchers"; // 0x88 PushS
	var_23_bool = var_5_string == var_22_string; // 0x89 Eq
	if(var_23_bool == 0) goto Label_143; // 0x8a JumpB
	func_17(); // 0x8c Call
	goto Label_228; // 0x8e Jump
	
Label_228:
	return 16; // 0xe4 Return
	
Label_143:
	var_87_string = "patrol_talk"; // 0x8f PushS
	var_88_bool = var_5_string == var_87_string; // 0x90 Eq
	if(var_88_bool == 0) goto Label_150; // 0x91 JumpB
	func_95(); // 0x93 Call
	goto Label_228; // 0x95 Jump
	
Label_150:
	var_110_string = "gpatrol_attack"; // 0x96 PushS
	var_111_bool = var_5_string == var_110_string; // 0x97 Eq
	if(var_111_bool == 0) goto Label_186; // 0x98 JumpB
	var_112_bool = var_4_bool == 0; // 0x99 Not
	if(var_112_bool == 0) goto Label_160; // 0x9a JumpB
	var_4_bool = 1; // 0x9b TMovB
	var_113_object = Obj(); var_114_string = ""; // 0x9c PushV
	var_114_string = "quest_d3_01_teleport"; // 0x9d MovS
	func_275(var_113_object, var_114_string); // 0x9e Call
	
Label_160:
	size(var_14_int); // 0xa0 TObjFunc
	var_15_int = 0; // 0xa2 MovI
	
Label_163:
	var_121_bool = var_15_int < var_14_int; // 0xa3 LT
	if(var_121_bool == 0) goto Label_179; // 0xa4 JumpB
	get(var_16_object, var_15_int); // 0xa5 TObjFunc
	GetActor(var_17_object); // 0xa7 ObjFunc
	var_122_object = var_17_object; // 0xa9 Push
	if(var_122_object == 0) goto Label_174; // 0xaa JumpB
	var_123_string = "kill_player"; // 0xab PushS
	Trigger(var_17_object, var_123_string); // 0xac Func
	
Label_174:
	var_17_object = 0; // 0xae SetNull
	var_16_object = 0; // 0xaf SetNull
	var_124_int = 1; // 0xb0 PushI
	var_15_int = var_15_int + var_124_int; // 0xb1 Add2
	goto Label_163; // 0xb2 Jump
	
Label_179:
	var_125_string = "put_item"; // 0xb3 PushS
	Trigger(var_20_object, var_125_string); // 0xb4 Func
	func_245(var_18_int, var_19_int, var_20_object, var_21_object); // 0xb7 Call
	goto Label_228; // 0xb9 Jump
	
Label_186:
	var_149_string = "gpatrol_talk"; // 0xba PushS
	var_150_bool = var_5_string == var_149_string; // 0xbb Eq
	if(var_150_bool == 0) goto Label_215; // 0xbc JumpB
	var_151_string = "put_item"; // 0xbd PushS
	Trigger(var_20_object, var_151_string); // 0xbe Func
	size(var_18_int); // 0xc0 TObjFunc
	var_19_int = 0; // 0xc2 MovI
	
Label_195:
	var_152_bool = var_19_int < var_18_int; // 0xc3 LT
	if(var_152_bool == 0) goto Label_211; // 0xc4 JumpB
	get(var_20_object, var_19_int); // 0xc5 TObjFunc
	GetActor(var_21_object); // 0xc7 ObjFunc
	var_153_object = var_21_object; // 0xc9 Push
	if(var_153_object == 0) goto Label_206; // 0xca JumpB
	var_154_string = "talk_player"; // 0xcb PushS
	Trigger(var_21_object, var_154_string); // 0xcc Func
	
Label_206:
	var_21_object = 0; // 0xce SetNull
	var_20_object = 0; // 0xcf SetNull
	var_155_int = 1; // 0xd0 PushI
	var_19_int = var_19_int + var_155_int; // 0xd1 Add2
	goto Label_195; // 0xd2 Jump
	
Label_211:
	func_245(var_18_int, var_19_int, var_20_object, var_21_object); // 0xd4 Call
	goto Label_228; // 0xd6 Jump
	
Label_215:
	var_156_string = "fail"; // 0xd7 PushS
	var_157_bool = var_5_string == var_156_string; // 0xd8 Eq
	if(var_157_bool == 0) goto Label_222; // 0xd9 JumpB
	func_229(); // 0xdb Call
	goto Label_228; // 0xdd Jump
	
Label_222:
	var_160_string = "completed"; // 0xde PushS
	var_161_bool = var_5_string == var_160_string; // 0xdf Eq
	if(var_161_bool == 0) goto Label_228; // 0xe0 JumpB
	func_237(); // 0xe2 Call
}


main(var_0_object, var_1_object, var_2_object, var_3_object, var_4_bool)
{
	var_4_bool = 0; // 0x0 TMovB
	var_5_object = Obj(); // 0x1 PushV
	func_269(var_5_object); // 0x2 Call
	var_0_object = var_5_object; // 0x3 TMov
	var_8_object = Obj(); // 0x5 PushV
	func_269(var_8_object); // 0x6 Call
	var_2_object = var_8_object; // 0x7 TMov
	var_9_object = Obj(); // 0x9 PushV
	func_269(var_9_object); // 0xa Call
	var_1_object = var_9_object; // 0xb TMov
	
Label_13:
	Hold(); // 0xd Func
	goto Label_13; // 0xf Jump
}


func_323(var_137_string)
{
	var_138_int = 0; var_139_int = 0; var_140_object = Obj(); var_141_int = 0; var_142_int = 0; var_143_object = Obj(); // 0x143 PushV
	size(var_141_int); // 0x144 ObjFunc
	var_142_int = 0; // 0x146 MovI
	
Label_327:
	var_144_bool = var_142_int < var_141_int; // 0x147 LT
	if(var_144_bool == 0) goto Label_339; // 0x148 JumpB
	get(var_143_object, var_142_int); // 0x149 ObjFunc
	var_145_object = var_143_object; // 0x14b Push
	if(var_145_object == 0) goto Label_335; // 0x14c JumpB
	Trigger(var_143_object, var_137_string); // 0x14d Func
	
Label_335:
	var_143_object = 0; // 0x14f SetNull
	var_146_int = 1; // 0x150 PushI
	var_142_int = var_142_int + var_146_int; // 0x151 Add2
	goto Label_327; // 0x152 Jump
	
Label_339:
	return 6; // 0x153 Return
}


func_229()
{
	var_158_string = "d3q01"; // 0xe5 PushS
	var_159_int = -1; // 0xe6 PushI
	SetVariable(var_158_string, var_159_int); // 0xe7 Func
	func_264(); // 0xea Call
	return 0; // 0xec Return
}


func_264()
{
	EventDisable(26); // 0x108 EventDisable
	func_245(var_18_int, var_19_int, var_20_object, var_21_object); // 0x10a Call
	return 0; // 0x10c Return
}


func_237()
{
	var_162_string = "d3q01"; // 0xed PushS
	var_163_int = 1000; // 0xee PushI
	SetVariable(var_162_string, var_163_int); // 0xef Func
	func_264(); // 0xf2 Call
	return 0; // 0xf4 Return
}


func_269(var_5_object)
{
	var_6_object = Obj(); var_7_object = Obj(); // 0x10d PushV
	CreateObjectVector(var_7_object); // 0x10e Func
	var_5_object = var_7_object; // 0x110 Mov
	return 2; // 0x111 Return
}


func_304()
{
	var_127_int = 0; var_128_int = 0; var_129_object = Obj(); var_130_int = 0; var_131_int = 0; var_132_object = Obj(); // 0x130 PushV
	size(var_130_int); // 0x131 ObjFunc
	var_131_int = 0; // 0x133 MovI
	
Label_308:
	var_133_bool = var_131_int < var_130_int; // 0x134 LT
	if(var_133_bool == 0) goto Label_320; // 0x135 JumpB
	get(var_132_object, var_131_int); // 0x136 ObjFunc
	var_134_object = var_132_object; // 0x138 Push
	if(var_134_object == 0) goto Label_316; // 0x139 JumpB
	Remove(); // 0x13a ObjFunc
	
Label_316:
	var_132_object = 0; // 0x13c SetNull
	var_135_int = 1; // 0x13d PushI
	var_131_int = var_131_int + var_135_int; // 0x13e Add2
	goto Label_308; // 0x13f Jump
	
Label_320:
	clear(); // 0x140 ObjFunc
	return 6; // 0x142 Return
}


func_17()
{
	var_24_object = Obj(); var_25_int = 0; var_26_object = Obj(); var_27_object = Obj(); var_28_int = 0; var_29_object = Obj(); // 0x11 PushV
	GetMainOutdoorScene(var_27_object); // 0x12 Func
	var_30_int = 3; // 0x14 PushI
	irand(var_28_int, var_30_int); // 0x15 Func
	var_31_string = "Patrol location: "; // 0x17 PushS
	var_32_int = var_31_string + var_28_int; // 0x18 Add
	Trace(var_32_int); // 0x19 Func
	var_33_object = Obj(); var_34_object = Obj(); var_35_string = ""; var_36_string = ""; var_37_string = ""; // 0x1b PushV
	var_34_object = var_27_object; // 0x1c Mov
	var_38_string = "pt_d3q01_patrol"; // 0x1d PushS
	var_39_int = 1; // 0x1e PushI
	var_40_int = var_28_int + var_39_int; // 0x1f Add
	var_35_string = var_38_string + var_40_int; // 0x20 Add2
	var_36_string = "pers_patrool"; // 0x21 MovS
	var_37_string = "d3q01_cpatrol.xml"; // 0x22 MovS
	func_286(var_34_object, var_35_string, var_36_string, var_37_string); // 0x23 Call
	add(var_33_object); // 0x25 TObjFunc
	var_54_object = Obj(); var_55_object = Obj(); var_56_string = ""; var_57_string = ""; var_58_string = ""; // 0x27 PushV
	var_55_object = var_27_object; // 0x28 Mov
	var_59_string = "pt_d3q01_patrol"; // 0x29 PushS
	var_60_int = 1; // 0x2a PushI
	var_61_int = var_28_int + var_60_int; // 0x2b Add
	var_62_int = 3; // 0x2c PushI
	var_63_int = var_61_int / var_62_int; // 0x2d Mod
	var_64_int = 1; // 0x2e PushI
	var_65_int = var_63_int + var_64_int; // 0x2f Add
	var_56_string = var_59_string + var_65_int; // 0x30 Add2
	var_57_string = "pers_patrool"; // 0x31 MovS
	var_58_string = "d3q01_patrol.xml"; // 0x32 MovS
	func_286(var_55_object, var_56_string, var_57_string, var_58_string); // 0x33 Call
	add(var_54_object); // 0x35 TObjFunc
	var_66_object = Obj(); var_67_object = Obj(); var_68_string = ""; var_69_string = ""; var_70_string = ""; // 0x37 PushV
	var_67_object = var_27_object; // 0x38 Mov
	var_71_string = "pt_d3q01_patrol"; // 0x39 PushS
	var_72_int = 2; // 0x3a PushI
	var_73_int = var_28_int + var_72_int; // 0x3b Add
	var_74_int = 3; // 0x3c PushI
	var_75_int = var_73_int / var_74_int; // 0x3d Mod
	var_76_int = 1; // 0x3e PushI
	var_77_int = var_75_int + var_76_int; // 0x3f Add
	var_68_string = var_71_string + var_77_int; // 0x40 Add2
	var_69_string = "pers_patrool"; // 0x41 MovS
	var_70_string = "d3q01_patrol.xml"; // 0x42 MovS
	func_286(var_67_object, var_68_string, var_69_string, var_70_string); // 0x43 Call
	add(var_66_object); // 0x45 TObjFunc
	var_78_string = "d3q01_corpse1"; // 0x47 PushS
	var_79_string = "actor_disp.bin"; // 0x48 PushS
	var_80_cvector = CVector(0.0, 0.0, 0.0); // 0x49 PushVec
	AddScriptedActor(var_29_object, var_78_string, var_79_string, var_27_object, var_80_cvector); // 0x4a Func
	add(var_29_object); // 0x4c TObjFunc
	var_81_string = "d3q01_corpse2"; // 0x4e PushS
	var_82_string = "actor_disp.bin"; // 0x4f PushS
	var_83_cvector = CVector(0.0, 0.0, 0.0); // 0x50 PushVec
	AddScriptedActor(var_29_object, var_81_string, var_82_string, var_27_object, var_83_cvector); // 0x51 Func
	add(var_29_object); // 0x53 TObjFunc
	var_84_string = "d3q01_corpse3"; // 0x55 PushS
	var_85_string = "actor_disp.bin"; // 0x56 PushS
	var_86_cvector = CVector(0.0, 0.0, 0.0); // 0x57 PushVec
	AddScriptedActor(var_29_object, var_84_string, var_85_string, var_27_object, var_86_cvector); // 0x58 Func
	add(var_29_object); // 0x5a TObjFunc
	return 6; // 0x5c Return
}


func_275(var_113_object, var_114_string)
{
	var_115_object = Obj(); var_116_object = Obj(); var_117_object = Obj(); var_118_object = Obj(); // 0x113 PushV
	GetMainOutdoorScene(var_117_object); // 0x114 Func
	var_119_string = ".bin"; // 0x116 PushS
	var_120_int = var_114_string + var_119_string; // 0x117 Add
	AddBlankActor(var_118_object, var_117_object, var_114_string, var_120_int); // 0x118 Func
	var_113_object = var_118_object; // 0x11a Mov
	return 4; // 0x11b Return
}


func_245(var_0_object, var_1_object, var_2_object, var_20_object)
{
	var_126_object = Obj(); // 0xf5 PushV
	var_126_object = var_0_object; // 0xf6 MovT
	func_304(); // 0xf7 Call
	var_136_object = Obj(); var_137_string = ""; // 0xf9 PushV
	var_136_object = var_1_object; // 0xfa MovT
	var_137_string = "cleanup"; // 0xfb MovS
	func_323(var_137_string); // 0xfc Call
	clear(); // 0xfe TObjFunc
	var_147_object = Obj(); // 0x100 PushV
	var_147_object = var_2_object; // 0x101 MovT
	func_304(); // 0x102 Call
	var_148_string = "cleanup"; // 0x104 PushS
	Trigger(var_20_object, var_148_string); // 0x105 Func
	return 0; // 0x107 Return
}


func_286(var_33_object, var_35_string, var_36_string, var_37_string)
{
	var_41_bool = 0; var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_object = Obj(); var_45_bool = 0; var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_object = Obj(); // 0x11e PushV
	GetLocator(var_35_string, var_45_bool, var_46_cvector, var_47_cvector); // 0x11f ObjFunc
	var_49_bool = var_45_bool == 0; // 0x121 Not
	if(var_49_bool == 0) goto Label_299; // 0x122 JumpB
	var_50_string = "Locator "; // 0x123 PushS
	var_51_int = var_50_string + var_35_string; // 0x124 Add
	var_52_string = " doesn't exist"; // 0x125 PushS
	var_53_int = var_51_int + var_52_string; // 0x126 Add
	Trace(var_53_int); // 0x127 Func
	var_48_object = 0; // 0x129 SetNull
	goto Label_301; // 0x12a Jump
	
Label_301:
	var_33_object = var_48_object; // 0x12d Mov
	return 8; // 0x12e Return
	
Label_299:
	AddStationaryActor(var_48_object, var_46_cvector, var_47_cvector, var_36_string, var_37_string); // 0x12b ObjFunc
}


func_95()
{
	var_89_object = Obj(); var_90_object = Obj(); // 0x5f PushV
	GetMainOutdoorScene(var_90_object); // 0x60 Func
	var_91_object = Obj(); var_92_object = Obj(); var_93_string = ""; var_94_string = ""; var_95_string = ""; // 0x62 PushV
	var_92_object = var_90_object; // 0x63 Mov
	var_93_string = "pt_d3q01_gpatrol1"; // 0x64 MovS
	var_94_string = "pers_patrool"; // 0x65 MovS
	var_95_string = "d3q01_gpatrol.xml"; // 0x66 MovS
	func_286(var_92_object, var_93_string, var_94_string, var_95_string); // 0x67 Call
	add(var_91_object); // 0x69 TObjFunc
	var_96_object = Obj(); var_97_object = Obj(); var_98_string = ""; var_99_string = ""; var_100_string = ""; // 0x6b PushV
	var_97_object = var_90_object; // 0x6c Mov
	var_98_string = "pt_d3q01_gpatrol2"; // 0x6d MovS
	var_99_string = "pers_patrool"; // 0x6e MovS
	var_100_string = "d3q01_gpatrol.xml"; // 0x6f MovS
	func_286(var_97_object, var_98_string, var_99_string, var_100_string); // 0x70 Call
	add(var_96_object); // 0x72 TObjFunc
	var_101_object = Obj(); var_102_object = Obj(); var_103_string = ""; var_104_string = ""; var_105_string = ""; // 0x74 PushV
	var_102_object = var_90_object; // 0x75 Mov
	var_103_string = "pt_d3q01_gpatrol3"; // 0x76 MovS
	var_104_string = "pers_patrool"; // 0x77 MovS
	var_105_string = "d3q01_gpatrol.xml"; // 0x78 MovS
	func_286(var_102_object, var_103_string, var_104_string, var_105_string); // 0x79 Call
	add(var_101_object); // 0x7b TObjFunc
	var_106_string = "d3q01_graveyard_fire"; // 0x7d PushS
	var_107_cvector = CVector(0.0, 0.0, 0.0); // 0x7e PushVec
	var_108_cvector = CVector(0.0, 0.0, 1.0); // 0x7f PushVec
	var_109_string = "d3q01_graveyard_fire.xml"; // 0x80 PushS
	AddActor(var_107_cvector, var_106_string, var_90_object, var_107_cvector, var_108_cvector, var_109_string); // 0x81 Func
	return 2; // 0x83 Return
}


