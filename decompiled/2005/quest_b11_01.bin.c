task_0_event_26(var_0_bool, var_1_object, var_2_bool, var_3_string)
{
	var_4_object = Obj(); var_5_int = 0; var_6_int = 0; var_7_int = 0; var_8_int = 0; var_9_object = Obj(); var_10_int = 0; var_11_int = 0; var_12_int = 0; var_13_int = 0; // 0x1e PushV
	Trace(var_3_string); // 0x1f Func
	var_14_string = "storojka_unload"; // 0x21 PushS
	var_15_bool = var_3_string == var_14_string; // 0x22 Eq
	if(var_15_bool == 0) goto Label_52; // 0x23 JumpB
	var_16_bool = var_0_bool; // 0x24 PushT
	if(var_16_bool == 0) goto Label_51; // 0x25 JumpB
	var_0_bool = 0; // 0x26 TMovB
	var_17_string = "storojka"; // 0x27 PushS
	GetSceneByName(var_9_object, var_17_string); // 0x28 Func
	var_18_object = Obj(); var_19_object = Obj(); var_20_string = ""; var_21_string = ""; var_22_string = ""; // 0x2a PushV
	var_19_object = var_9_object; // 0x2b Mov
	var_20_string = "pt_b11q01_klara"; // 0x2c MovS
	var_21_string = "NPC_Klara"; // 0x2d MovS
	var_22_string = "b11q01_klara_laska.xml"; // 0x2e MovS
	func_256(var_18_object, var_19_object, var_20_string, var_21_string, var_22_string); // 0x2f NEW_2
	var_1_object = var_18_object; // 0x30 TMov
	var_9_object = 0; // 0x32 SetNull
	
Label_51:
	goto Label_205; // 0x33 Jump
	
Label_205:
	return 10; // 0xcd Return
	
Label_52:
	var_36_string = "remove_klara"; // 0x34 PushS
	var_37_bool = var_3_string == var_36_string; // 0x35 Eq
	if(var_37_bool == 0) goto Label_59; // 0x36 JumpB
	var_38_string = "cleanup"; // 0x37 PushS
	Trigger(var_38_string, var_38_string); // 0x38 Func
	goto Label_205; // 0x3a Jump
	
Label_59:
	var_39_string = "open_shaft"; // 0x3b PushS
	var_40_bool = var_3_string == var_39_string; // 0x3c Eq
	if(var_40_bool == 0) goto Label_72; // 0x3d JumpB
	var_41_bool = 0; var_42_string = ""; var_43_string = ""; // 0x3e PushV
	var_42_string = "boiny_shaft_trigger"; // 0x3f MovS
	var_43_string = "activate"; // 0x40 MovS
	func_291(var_41_bool, var_42_string, var_43_string); // 0x41 NEW_2
	var_47_bool = 0; var_48_string = ""; // 0x43 PushV
	var_48_string = "iboiny_stones"; // 0x44 MovS
	func_327(var_47_bool, var_48_string); // 0x45 NEW_2
	goto Label_205; // 0x47 Jump
	
Label_72:
	var_52_string = "shaft_drop"; // 0x48 PushS
	var_53_bool = var_3_string == var_52_string; // 0x49 Eq
	if(var_53_bool == 0) goto Label_113; // 0x4a JumpB
	var_54_string = "drop"; // 0x4b PushS
	PlayNSSound(var_54_string); // 0x4c Func
	var_55_string = "boiny_well.isc"; // 0x4e PushS
	AddScene(var_55_string); // 0x4f Func
	sync(); // 0x51 Func
	var_56_object = Obj(); var_57_string = ""; var_58_string = ""; // 0x53 PushV
	var_59_object = Obj(); // 0x54 PushV
	func_243(var_59_object); // 0x55 NEW_2
	var_56_object = var_59_object; // 0x56 Mov
	var_57_string = "boiny_well"; // 0x58 MovS
	var_58_string = "pt_player"; // 0x59 MovS
	func_303(var_56_object, var_57_string, var_58_string); // 0x5a NEW_2
	sync(); // 0x5c Func
	var_80_string = "b11q01KlaraWillHelp"; // 0x5e PushS
	GetVariable(var_80_string, var_10_int); // 0x5f Func
	var_81_bool = 0; // 0x61 PushV
	var_81_bool = 1; // 0x62 MovB
	var_82_bool = var_10_int == 0; // 0x63 Not
	if(var_82_bool == 0) goto Label_104; // 0x64 JumpB
	var_83_bool = var_2_bool == 0; // 0x65 Not
	if(var_83_bool == 0) goto Label_104; // 0x66 JumpB
	var_81_bool = 0; // 0x67 MovB
	
Label_104:
	if(var_81_bool == 0) goto Label_111; // 0x68 JumpB
	var_84_object = Obj(); // 0x69 PushV
	func_243(var_84_object); // 0x6a NEW_2
	var_85_string = "quest_b11_01_death_effect.bin"; // 0x6c PushS
	ApplyEffect(var_85_string); // 0x6d ObjFunc
	
Label_111:
	var_2_bool = 0; // 0x6f TMovB
	goto Label_205; // 0x70 Jump
	
Label_113:
	var_86_string = "starshina_fight"; // 0x71 PushS
	var_87_bool = var_3_string == var_86_string; // 0x72 Eq
	if(var_87_bool == 0) goto Label_144; // 0x73 JumpB
	var_88_object = var_1_object; // 0x74 PushT
	if(var_88_object == 0) goto Label_121; // 0x75 JumpB
	var_89_string = "cleanup"; // 0x76 PushS
	Trigger(var_89_string, var_89_string); // 0x77 Func
	
Label_121:
	var_90_string = "b11q01"; // 0x79 PushS
	GetVariable(var_90_string, var_11_int); // 0x7a Func
	var_91_int = var_11_int; // 0x7c Push
	if(var_91_int == 0) goto Label_129; // 0x7d JumpB
	func_378(); // 0x7f NEW_2
	
Label_129:
	var_115_string = "boiny_arena.isc"; // 0x81 PushS
	AddScene(var_115_string); // 0x82 Func
	sync(); // 0x84 Func
	var_116_object = Obj(); var_117_string = ""; var_118_string = ""; // 0x86 PushV
	var_119_object = Obj(); // 0x87 PushV
	func_243(var_119_object); // 0x88 NEW_2
	var_116_object = var_119_object; // 0x89 Mov
	var_117_string = "boiny_arena"; // 0x8b MovS
	var_118_string = "pt_player"; // 0x8c MovS
	func_303(var_116_object, var_117_string, var_118_string); // 0x8d NEW_2
	goto Label_205; // 0x8f Jump
	
Label_144:
	var_120_string = "open_well_exit"; // 0x90 PushS
	var_121_bool = var_3_string == var_120_string; // 0x91 Eq
	if(var_121_bool == 0) goto Label_153; // 0x92 JumpB
	var_122_bool = 0; var_123_string = ""; var_124_string = ""; // 0x93 PushV
	var_123_string = "well_trigger"; // 0x94 MovS
	var_124_string = "activate"; // 0x95 MovS
	func_291(var_122_bool, var_123_string, var_124_string); // 0x96 NEW_2
	goto Label_205; // 0x98 Jump
	
Label_153:
	var_125_string = "fight_win"; // 0x99 PushS
	var_126_bool = var_3_string == var_125_string; // 0x9a Eq
	if(var_126_bool == 0) goto Label_175; // 0x9b JumpB
	var_127_string = "b11q01"; // 0x9c PushS
	GetVariable(var_127_string, var_12_int); // 0x9d Func
	var_128_int = var_12_int; // 0x9f Push
	if(var_128_int == 0) goto Label_165; // 0xa0 JumpB
	func_352(); // 0xa2 NEW_2
	goto Label_171; // 0xa4 Jump
	
Label_171:
	func_214(); // 0xac NEW_2
	goto Label_205; // 0xae Jump
	
Label_165:
	func_339(); // 0xa6 NEW_2
	func_365(); // 0xa9 NEW_2
	
Label_175:
	var_166_string = "cleanup"; // 0xaf PushS
	var_167_bool = var_3_string == var_166_string; // 0xb0 Eq
	if(var_167_bool == 0) goto Label_192; // 0xb1 JumpB
	var_168_string = "b11q01"; // 0xb2 PushS
	GetVariable(var_168_string, var_13_int); // 0xb3 Func
	var_169_int = 1000; // 0xb5 PushI
	var_170_bool = var_13_int != var_169_int; // 0xb6 Neq
	if(var_170_bool == 0) goto Label_188; // 0xb7 JumpB
	func_206(); // 0xb9 NEW_2
	goto Label_191; // 0xbb Jump
	
Label_191:
	goto Label_205; // 0xbf Jump
	
Label_188:
	func_222(); // 0xbd NEW_2
	
Label_192:
	var_173_string = "fail"; // 0xc0 PushS
	var_174_bool = var_3_string == var_173_string; // 0xc1 Eq
	if(var_174_bool == 0) goto Label_199; // 0xc2 JumpB
	func_206(); // 0xc4 NEW_2
	goto Label_205; // 0xc6 Jump
	
Label_199:
	var_175_string = "completed"; // 0xc7 PushS
	var_176_bool = var_3_string == var_175_string; // 0xc8 Eq
	if(var_176_bool == 0) goto Label_205; // 0xc9 JumpB
	func_214(); // 0xcb NEW_2
}


main(var_0_bool, var_1_object, var_2_bool)
{
	var_3_object = Obj(); var_4_object = Obj(); var_5_object = Obj(); var_6_object = Obj(); // 0x0 PushV
	var_2_bool = 1; // 0x1 TMovB
	var_7_string = ""; var_8_bool = 0; // 0x2 PushV
	var_7_string = "boiny@door1"; // 0x3 MovS
	var_8_bool = 0; // 0x4 MovB
	func_274(var_7_string, var_8_bool); // 0x5 NEW_2
	GetActiveScene(var_5_object); // 0x7 Func
	var_17_string = "storojka"; // 0x9 PushS
	GetSceneByName(var_6_object, var_17_string); // 0xa Func
	var_18_bool = var_5_object == var_6_object; // 0xc Eq
	if(var_18_bool == 0) goto Label_16; // 0xd JumpB
	var_0_bool = 1; // 0xe TMovB
	goto Label_24; // 0xf Jump
	
Label_24:
	Hold(); // 0x18 Func
	goto Label_24; // 0x1a Jump
	
Label_16:
	var_19_object = Obj(); var_20_object = Obj(); var_21_string = ""; var_22_string = ""; var_23_string = ""; // 0x10 PushV
	var_20_object = var_6_object; // 0x11 Mov
	var_21_string = "pt_b11q01_klara"; // 0x12 MovS
	var_22_string = "NPC_Klara"; // 0x13 MovS
	var_23_string = "b11q01_klara_laska.xml"; // 0x14 MovS
	func_256(var_19_object, var_20_object, var_21_string, var_22_string, var_23_string); // 0x15 NEW_2
	var_1_object = var_19_object; // 0x16 TMov
}


func_256(var_19_object, var_20_object, var_21_string, var_22_string, var_23_string)
{
	var_24_bool = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_object = Obj(); var_28_bool = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_object = Obj(); // 0x100 PushV
	GetLocator(var_21_string, var_28_bool, var_29_cvector, var_30_cvector); // 0x101 ObjFunc
	var_32_bool = var_28_bool == 0; // 0x103 Not
	if(var_32_bool == 0) goto Label_269; // 0x104 JumpB
	var_33_string = "Locator "; // 0x105 PushS
	var_34_int = var_33_string + var_21_string; // 0x106 Add
	var_35_string = " doesn't exist"; // 0x107 PushS
	var_36_int = var_34_int + var_35_string; // 0x108 Add
	Trace(var_36_int); // 0x109 Func
	var_31_object = 0; // 0x10b SetNull
	goto Label_271; // 0x10c Jump
	
Label_271:
	var_19_object = var_31_object; // 0x10f Mov
	return 8; // 0x110 Return
	
Label_269:
	AddActor(var_31_object, var_22_string, var_20_object, var_29_cvector, var_30_cvector, var_23_string); // 0x10d Func
}


func_391(var_106_object)
{
	var_107_object = Obj(); var_108_object = Obj(); // 0x187 PushV
	GetDiaryRoot(var_108_object); // 0x188 Func
	var_109_bool = var_108_object == 0; // 0x18a Not
	if(var_109_bool == 0) goto Label_401; // 0x18b JumpB
	var_110_string = "Can't retrieve diary root"; // 0x18c PushS
	Trace(var_110_string); // 0x18d Func
	var_106_object = 0; // 0x18f MovB
	return 2; // 0x190 Return
	
Label_401:
	var_106_object = var_108_object; // 0x191 Mov
	return 2; // 0x192 Return
}


func_327(var_47_bool, var_48_string)
{
	var_49_object = Obj(); var_50_object = Obj(); // 0x147 PushV
	FindActor(var_50_object, var_48_string); // 0x148 Func
	var_51_bool = var_50_object == 0; // 0x14a Not
	if(var_51_bool == 0) goto Label_334; // 0x14b JumpB
	var_47_bool = 0; // 0x14c MovB
	return 2; // 0x14d Return
	
Label_334:
	RemoveActor(var_50_object); // 0x14e Func
	var_47_bool = 1; // 0x150 MovB
	return 2; // 0x151 Return
}


func_206()
{
	var_171_string = "b11q01"; // 0xce PushS
	var_172_int = -1; // 0xcf PushI
	SetVariable(var_171_string, var_172_int); // 0xd0 Func
	func_222(); // 0xd3 NEW_2
	return 0; // 0xd5 Return
}


func_274(var_7_string, var_8_bool)
{
	var_9_object = Obj(); var_10_object = Obj(); // 0x112 PushV
	FindActor(var_10_object, var_7_string); // 0x113 Func
	var_11_bool = var_10_object == 0; // 0x115 Not
	if(var_11_bool == 0) goto Label_286; // 0x116 JumpB
	var_12_string = "Door "; // 0x117 PushS
	var_13_int = var_12_string + var_7_string; // 0x118 Add
	var_14_string = " not found"; // 0x119 PushS
	var_15_int = var_13_int + var_14_string; // 0x11a Add
	Trace(var_15_int); // 0x11b Func
	goto Label_289; // 0x11d Jump
	
Label_289:
	return 2; // 0x121 Return
	
Label_286:
	var_16_string = "locked"; // 0x11e PushS
	SetProperty(var_16_string, var_8_bool); // 0x11f ObjFunc
}


func_339()
{
	var_150_object = Obj(); var_151_object = Obj(); // 0x153 PushV
	var_152_int = 313; // 0x154 PushI
	var_153_int = 1; // 0x155 PushI
	var_154_int = 522055; // 0x156 PushI
	CreateDiaryEntry(var_151_object, var_152_int, var_153_int, var_154_int); // 0x157 Func
	var_155_bool = 0; var_156_object = Obj(); var_157_int = 0; // 0x159 PushV
	var_156_object = var_151_object; // 0x15a Mov
	var_157_int = -1; // 0x15b MovI
	func_404(var_155_bool, var_156_object, var_157_int); // 0x15c NEW_2
	return 2; // 0x15e Return
}


func_404(var_97_bool, var_98_object, var_99_int)
{
	var_100_object = Obj(); var_101_object = Obj(); var_102_int = 0; var_103_object = Obj(); var_104_object = Obj(); var_105_int = 0; // 0x194 PushV
	var_106_object = Obj(); // 0x195 PushV
	func_391(var_106_object); // 0x196 NEW_2
	var_103_object = var_106_object; // 0x197 Mov
	Find(var_99_int, var_104_object); // 0x199 ObjFunc
	var_111_bool = var_104_object == 0; // 0x19b Not
	if(var_111_bool == 0) goto Label_419; // 0x19c JumpB
	var_112_string = "Can't find diary parent with id: "; // 0x19d PushS
	var_113_int = var_112_string + var_99_int; // 0x19e Add
	Trace(var_113_int); // 0x19f Func
	var_97_bool = 0; // 0x1a1 MovB
	return 6; // 0x1a2 Return
	
Label_419:
	AddChild(var_98_object); // 0x1a3 ObjFunc
	var_114_int = 7; // 0x1a5 PushI
	SendWorldWndMessage(var_114_int); // 0x1a6 Func
	GetCategory(var_105_int); // 0x1a8 ObjFunc
	SetDiarySection(var_105_int); // 0x1aa Func
	var_97_bool = 0; // 0x1ac MovB
	return 6; // 0x1ad Return
}


func_214()
{
	var_137_string = "b11q01"; // 0xd6 PushS
	var_138_int = 1000; // 0xd7 PushI
	SetVariable(var_137_string, var_138_int); // 0xd8 Func
	func_222(); // 0xdb NEW_2
	return 0; // 0xdd Return
}


func_222()
{
	var_139_bool = 0; var_140_string = ""; var_141_string = ""; // 0xde PushV
	var_140_string = "boiny_shaft_trigger"; // 0xdf MovS
	var_141_string = "deactivate"; // 0xe0 MovS
	func_291(var_139_bool, var_140_string, var_141_string); // 0xe1 NEW_2
	var_142_bool = 0; var_143_string = ""; var_144_string = ""; // 0xe3 PushV
	var_143_string = "well_trigger"; // 0xe4 MovS
	var_144_string = "deactivate"; // 0xe5 MovS
	func_291(var_142_bool, var_143_string, var_144_string); // 0xe6 NEW_2
	var_145_object = var_1_object; // 0xe8 PushT
	if(var_145_object == 0) goto Label_237; // 0xe9 JumpB
	var_146_string = "cleanup"; // 0xea PushS
	Trigger(var_146_string, var_146_string); // 0xeb Func
	
Label_237:
	var_147_object = Obj(); // 0xed PushV
	func_250(var_147_object); // 0xee NEW_2
	RemoveActor(var_147_object); // 0xf0 Func
	return 0; // 0xf2 Return
}


func_352()
{
	var_129_object = Obj(); var_130_object = Obj(); // 0x160 PushV
	var_131_int = 317; // 0x161 PushI
	var_132_int = 1; // 0x162 PushI
	var_133_int = 522059; // 0x163 PushI
	CreateDiaryEntry(var_130_object, var_131_int, var_132_int, var_133_int); // 0x164 Func
	var_134_bool = 0; var_135_object = Obj(); var_136_int = 0; // 0x166 PushV
	var_135_object = var_130_object; // 0x167 Mov
	var_136_int = 313; // 0x168 MovI
	func_404(var_134_bool, var_135_object, var_136_int); // 0x169 NEW_2
	return 2; // 0x16b Return
}


func_291(var_41_bool, var_42_string, var_43_string)
{
	var_44_object = Obj(); var_45_object = Obj(); // 0x123 PushV
	FindActor(var_45_object, var_42_string); // 0x124 Func
	var_46_bool = var_45_object == 0; // 0x126 NullEq
	if(var_46_bool == 0) goto Label_298; // 0x127 JumpB
	var_41_bool = 0; // 0x128 MovB
	return 2; // 0x129 Return
	
Label_298:
	Trigger(var_45_object, var_43_string); // 0x12a Func
	var_41_bool = 1; // 0x12c MovB
	return 2; // 0x12d Return
}


func_250(var_147_object)
{
	var_148_object = Obj(); var_149_object = Obj(); // 0xfa PushV
	self(var_149_object); // 0xfb Func
	var_147_object = var_149_object; // 0xfd Mov
	return 2; // 0xfe Return
}


func_365()
{
	var_158_object = Obj(); var_159_object = Obj(); // 0x16d PushV
	var_160_int = 780; // 0x16e PushI
	var_161_int = 1; // 0x16f PushI
	var_162_int = 541765; // 0x170 PushI
	CreateDiaryEntry(var_159_object, var_160_int, var_161_int, var_162_int); // 0x171 Func
	var_163_bool = 0; var_164_object = Obj(); var_165_int = 0; // 0x173 PushV
	var_164_object = var_159_object; // 0x174 Mov
	var_165_int = 313; // 0x175 MovI
	func_404(var_163_bool, var_164_object, var_165_int); // 0x176 NEW_2
	return 2; // 0x178 Return
}


func_303(var_56_object, var_57_string, var_58_string)
{
	var_63_object = Obj(); var_64_bool = 0; var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_object = Obj(); var_68_bool = 0; var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); // 0x12f PushV
	var_71_bool = var_56_object == 0; // 0x130 Not
	if(var_71_bool == 0) goto Label_307; // 0x131 JumpB
	return 8; // 0x132 Return
	
Label_307:
	GetSceneByName(var_67_object, var_57_string); // 0x133 Func
	GetLocator(var_58_string, var_68_bool, var_69_cvector, var_70_cvector); // 0x135 ObjFunc
	var_72_bool = var_68_bool == 0; // 0x137 Not
	if(var_72_bool == 0) goto Label_323; // 0x138 JumpB
	var_73_string = "Teleport location '"; // 0x139 PushS
	var_74_int = var_73_string + var_58_string; // 0x13a Add
	var_75_string = "' not found in scene '"; // 0x13b PushS
	var_76_int = var_74_int + var_75_string; // 0x13c Add
	var_77_int = var_76_int + var_57_string; // 0x13d Add
	var_78_string = "'"; // 0x13e PushS
	var_79_int = var_77_int + var_78_string; // 0x13f Add
	Trace(var_79_int); // 0x140 Func
	goto Label_325; // 0x142 Jump
	
Label_325:
	return 8; // 0x145 Return
	
Label_323:
	Teleport(var_56_object, var_67_object, var_69_cvector, var_70_cvector); // 0x143 Func
}


func_243(var_59_object)
{
	var_60_object = Obj(); var_61_object = Obj(); // 0xf3 PushV
	var_62_string = "player"; // 0xf4 PushS
	FindActor(var_61_object, var_62_string); // 0xf5 Func
	var_59_object = var_61_object; // 0xf7 Mov
	return 2; // 0xf8 Return
}


func_378()
{
	var_92_object = Obj(); var_93_object = Obj(); // 0x17a PushV
	var_94_int = 316; // 0x17b PushI
	var_95_int = 1; // 0x17c PushI
	var_96_int = 522058; // 0x17d PushI
	CreateDiaryEntry(var_93_object, var_94_int, var_95_int, var_96_int); // 0x17e Func
	var_97_bool = 0; var_98_object = Obj(); var_99_int = 0; // 0x180 PushV
	var_98_object = var_93_object; // 0x181 Mov
	var_99_int = 313; // 0x182 MovI
	func_404(var_97_bool, var_98_object, var_99_int); // 0x183 NEW_2
	return 2; // 0x185 Return
}


