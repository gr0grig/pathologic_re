task_0_event_6()
{
	var_0_object = Obj(); // 0x1e PushV
	func_311(var_0_object); // 0x1f NEW_2
	RemoveActor(var_0_object); // 0x21 Func
	sync(); // 0x23 Func
	return 0; // 0x25 Return
}


task_0_event_10(var_0_object, var_1_object, var_2_cvector, var_3_cvector)
{
	var_4_float = 0; var_5_float = 0; // 0x26 PushV
	var_6_object = GlobalVars[3]; // 0x27 PushGE
	var_7_bool = 0; // 0x28 PushB
	Enable(var_7_bool); // 0x29 ObjFunc
	var_8_object = Obj(); // 0x2b PushV
	func_311(var_8_object); // 0x2c NEW_2
	RemoveActor(var_8_object); // 0x2e Func
	var_11_bool = 0; // 0x30 PushV
	var_11_bool = 1; // 0x31 MovB
	var_12_bool = 0; // 0x32 PushV
	var_12_bool = 1; // 0x33 MovB
	var_13_bool = var_1_object == 0; // 0x34 Not
	if(var_13_bool == 0) goto Label_60; // 0x35 JumpB
	var_14_string = "GetScene"; // 0x36 PushS
	var_15_int = 1; // 0x37 PushI
	var_16_bool = IsFuncExist(var_1_object, var_14_string, var_15_int); // 0x38 FuncExist
	var_17_bool = var_16_bool == 0; // 0x39 Not
	if(var_17_bool == 0) goto Label_60; // 0x3a JumpB
	var_12_bool = 0; // 0x3b MovB
	
Label_60:
	if(var_12_bool == 0) goto Label_68; // 0x3c JumpB
	var_18_bool = 0; var_19_object = Obj(); // 0x3d PushV
	var_19_object = var_1_object; // 0x3e Mov
	func_287(var_18_bool, var_19_object); // 0x3f NEW_2
	var_52_bool = var_18_bool == 0; // 0x41 Not
	if(var_52_bool == 0) goto Label_68; // 0x42 JumpB
	var_11_bool = 0; // 0x43 MovB
	
Label_68:
	if(var_11_bool == 0) goto Label_70; // 0x44 JumpB
	return 2; // 0x45 Return
	
Label_70:
	var_53_float = 0; var_54_object = Obj(); var_55_float = 0; var_56_int = 0; // 0x46 PushV
	var_54_object = var_1_object; // 0x47 Mov
	var_55_float = 0.9; // 0x48 MovF
	var_56_int = 0; // 0x49 MovI
	func_142(var_53_float, var_54_object, var_55_float, var_56_int); // 0x4a NEW_2
	var_5_float = var_53_float; // 0x4b Mov
	var_117_bool = 0; var_118_object = Obj(); // 0x4d PushV
	var_119_object = GlobalVars[0]; // 0x4e PushGE
	var_118_object = var_119_object; // 0x4f Mov
	func_287(var_117_bool, var_118_object); // 0x51 NEW_2
	if(var_117_bool == 0) goto Label_110; // 0x53 JumpB
	var_120_object = GlobalVars[0]; // 0x54 PushGE
	ReportAttack(var_1_object, var_120_object); // 0x55 Func
	var_121_float = var_5_float; // 0x57 Push
	if(var_121_float == 0) goto Label_110; // 0x58 JumpB
	var_122_object = GlobalVars[0]; // 0x59 PushGE
	var_123_int = 1; // 0x5a PushI
	var_124_float = 0.9; // 0x5b PushF
	ReportHit(var_1_object, var_122_object, var_123_int, var_5_float, var_124_float); // 0x5c Func
	var_125_bool = 0; // 0x5e PushV
	var_125_bool = 0; // 0x5f MovB
	var_126_object = GlobalVars[2]; // 0x60 PushGE
	var_127_bool = var_1_object == var_126_object; // 0x61 Eq
	if(var_127_bool == 0) goto Label_105; // 0x62 JumpB
	var_128_bool = 0; var_129_object = Obj(); // 0x63 PushV
	var_129_object = var_1_object; // 0x64 Mov
	func_215(var_128_bool, var_129_object); // 0x65 NEW_2
	if(var_128_bool == 0) goto Label_105; // 0x67 JumpB
	var_125_bool = 1; // 0x68 MovB
	
Label_105:
	if(var_125_bool == 0) goto Label_110; // 0x69 JumpB
	var_145_object = GlobalVars[0]; // 0x6a PushGE
	var_146_string = "kill"; // 0x6b PushS
	Trigger(var_145_object, var_146_string); // 0x6c Func
	
Label_110:
	return 2; // 0x6e Return
}


main()
{
	var_0_object = Obj(); var_1_object = Obj(); // 0x0 PushV
	var_2_cvector = CVector(0.0, 0.0, 0.0); // 0x1 PushVec
	var_3_int = 50; // 0x2 PushI
	var_4_cvector = GlobalVars[1]; // 0x3 PushGE
	var_5_cvector = CVector(20.0, 20.0, 20.0); // 0x4 PushVec
	var_6_object = GlobalVars[0]; // 0x5 PushGE
	CreateRigidBody(var_1_object, var_2_cvector, var_3_int, var_4_cvector, var_5_cvector, var_6_object); // 0x6 Func
	var_7_bool = 1; // 0x8 PushB
	Enable(var_7_bool); // 0x9 ObjFunc
	var_8_object = GlobalVars[3]; // 0xb PushGE
	var_8_object = var_1_object; // 0xc Mov
	GlobalVars[3] = var_8_object; // 0xd PopGE
	Attach(var_1_object); // 0xe Func
	var_9_string = "knife"; // 0x10 PushS
	FindGeometry(var_9_string, var_1_object); // 0x11 Func
	var_10_cvector = GlobalVars[1]; // 0x13 PushGE
	SetRotation(var_10_cvector); // 0x14 ObjFunc
	var_11_bool = 1; // 0x16 PushB
	Enable(var_11_bool); // 0x17 ObjFunc
	
Label_25:
	Hold(); // 0x19 Func
	goto Label_25; // 0x1b Jump
}


func_352(var_139_bool)
{
	var_140_bool = 0; var_141_bool = 0; // 0x160 PushV
	var_142_string = "god_mode"; // 0x161 PushS
	GetVariable(var_142_string, var_141_bool); // 0x162 Func
	var_139_bool = var_141_bool; // 0x164 Mov
	return 2; // 0x165 Return
}


func_130(var_40_bool, var_41_object, var_42_string)
{
	var_43_bool = 0; var_44_bool = 0; // 0x82 PushV
	var_45_string = "HasProperty"; // 0x83 PushS
	var_46_int = 2; // 0x84 PushI
	var_47_bool = IsFuncExist(var_41_object, var_45_string, var_46_int); // 0x85 FuncExist
	var_48_bool = var_47_bool == 0; // 0x86 Not
	if(var_48_bool == 0) goto Label_138; // 0x87 JumpB
	var_40_bool = 0; // 0x88 MovB
	return 2; // 0x89 Return
	
Label_138:
	HasProperty(var_42_string, var_44_bool); // 0x8a ObjFunc
	var_40_bool = var_44_bool; // 0x8c Mov
	return 2; // 0x8d Return
}


func_324(var_98_float, var_99_float, var_100_float, var_101_float)
{
	var_102_bool = var_99_float < var_100_float; // 0x145 LT
	if(var_102_bool == 0) goto Label_329; // 0x146 JumpB
	var_98_float = var_100_float; // 0x147 Mov
	return 0; // 0x148 Return
	
Label_329:
	var_103_bool = var_99_float > var_101_float; // 0x149 GT
	if(var_103_bool == 0) goto Label_333; // 0x14a JumpB
	var_98_float = var_101_float; // 0x14b Mov
	return 0; // 0x14c Return
	
Label_333:
	var_98_float = var_99_float; // 0x14d Mov
	return 0; // 0x14e Return
}


func_142(var_53_float, var_54_object, var_55_float, var_56_int)
{
	var_57_int = 0; var_58_string = ""; var_59_int = 0; var_60_float = 0; var_61_float = 0; var_62_float = 0; var_63_int = 0; var_64_string = ""; var_65_int = 0; var_66_float = 0; var_67_float = 0; var_68_float = 0; // 0x8e PushV
	var_69_bool = 0; var_70_object = Obj(); var_71_string = ""; // 0x8f PushV
	var_70_object = var_54_object; // 0x90 Mov
	var_71_string = "health"; // 0x91 MovS
	func_130(var_69_bool, var_70_object, var_71_string); // 0x92 NEW_2
	var_72_bool = var_69_bool == 0; // 0x94 Not
	if(var_72_bool == 0) goto Label_152; // 0x95 JumpB
	var_53_float = 0.0; // 0x96 MovF
	return 12; // 0x97 Return
	
Label_152:
	var_73_bool = 0; var_74_object = Obj(); var_75_string = ""; // 0x98 PushV
	var_74_object = var_54_object; // 0x99 Mov
	var_75_string = "armor"; // 0x9a MovS
	func_130(var_73_bool, var_74_object, var_75_string); // 0x9b NEW_2
	var_76_bool = var_73_bool == 0; // 0x9d Not
	if(var_76_bool == 0) goto Label_161; // 0x9e JumpB
	var_63_int = 0; // 0x9f MovI
	goto Label_164; // 0xa0 Jump
	
Label_164:
	var_77_string = "armor_"; // 0xa4 PushS
	var_78_string = ""; var_79_int = 0; // 0xa5 PushV
	var_79_int = var_56_int; // 0xa6 Mov
	func_111(var_78_string, var_79_int); // 0xa7 NEW_2
	var_64_string = var_77_string + var_78_string; // 0xa9 Add2
	var_84_bool = 0; var_85_object = Obj(); var_86_string = ""; // 0xaa PushV
	var_85_object = var_54_object; // 0xab Mov
	var_86_string = var_64_string; // 0xac Mov
	func_130(var_84_bool, var_85_object, var_86_string); // 0xad NEW_2
	var_87_bool = var_84_bool == 0; // 0xaf Not
	if(var_87_bool == 0) goto Label_179; // 0xb0 JumpB
	var_65_int = 0; // 0xb1 MovI
	goto Label_181; // 0xb2 Jump
	
Label_181:
	var_88_float = 0; var_89_float = 0; var_90_float = 0; // 0xb5 PushV
	var_91_int = var_63_int + var_65_int; // 0xb6 Add
	var_92_float = 100.0; // 0xb7 PushF
	var_89_float = var_91_int / var_91_int; // 0xb8 Div2
	var_90_float = 1; // 0xb9 MovI
	func_317(var_88_float, var_89_float, var_90_float); // 0xba NEW_2
	var_66_float = var_88_float; // 0xbb Mov
	var_94_string = "health"; // 0xbd PushS
	GetProperty(var_94_string, var_67_float); // 0xbe ObjFunc
	var_95_int = 1; // 0xc0 PushI
	var_96_int = var_95_int - var_66_float; // 0xc1 Sub
	var_68_float = var_55_float * var_96_int; // 0xc2 Mult2
	var_97_string = "health"; // 0xc3 PushS
	var_98_float = 0; var_99_float = 0; var_100_float = 0; var_101_float = 0; // 0xc4 PushV
	var_99_float = var_67_float - var_68_float; // 0xc5 Sub2
	var_100_float = 0; // 0xc6 MovI
	var_101_float = 1; // 0xc7 MovI
	func_324(var_98_float, var_99_float, var_100_float, var_101_float); // 0xc8 NEW_2
	SetProperty(var_97_string, var_98_float); // 0xca ObjFunc
	var_104_bool = 0; var_105_object = Obj(); // 0xcc PushV
	var_105_object = var_54_object; // 0xcd Mov
	func_125(var_104_bool, var_105_object); // 0xce NEW_2
	if(var_104_bool == 0) goto Label_213; // 0xd0 JumpB
	var_108_float = 0; // 0xd1 PushV
	var_108_float = -var_68_float; // 0xd2 Neg2
	func_335(var_108_float); // 0xd3 NEW_2
	
Label_213:
	var_53_float = var_68_float; // 0xd5 Mov
	return 12; // 0xd6 Return
	
Label_179:
	GetProperty(var_64_string, var_65_int); // 0xb3 ObjFunc
	
Label_161:
	var_116_string = "armor"; // 0xa1 PushS
	GetProperty(var_116_string, var_63_int); // 0xa2 ObjFunc
}


func_111(var_78_string, var_79_int)
{
	var_80_int = 2; // 0x70 PushI
	var_81_bool = var_79_int == var_80_int; // 0x71 Eq
	if(var_81_bool == 0) goto Label_118; // 0x72 JumpB
	var_78_string = "fire"; // 0x73 MovS
	return 0; // 0x74 Return
	
Label_118:
	var_82_int = 1; // 0x76 PushI
	var_83_bool = var_79_int == var_82_int; // 0x77 Eq
	if(var_83_bool == 0) goto Label_123; // 0x78 JumpB
	var_78_string = "bullet"; // 0x79 MovS
	return 0; // 0x7a Return
	
Label_123:
	var_78_string = "phys"; // 0x7b MovS
	return 0; // 0x7c Return
}


func_335(var_108_float)
{
	var_109_object = Obj(); var_110_object = Obj(); // 0x14f PushV
	CreateFloatVector(var_110_object); // 0x150 Func
	add(var_108_float); // 0x152 ObjFunc
	var_111_int = 0; // 0x154 PushI
	var_112_bool = var_108_float < var_111_int; // 0x155 LT
	if(var_112_bool == 0) goto Label_347; // 0x156 JumpB
	var_113_float = 0.7; // 0x157 PushF
	var_114_int = 500; // 0x158 PushI
	RumblePlay(var_113_float, var_114_int); // 0x159 Func
	
Label_347:
	var_115_int = 15; // 0x15b PushI
	SendWorldWndMessage(var_115_int, var_110_object); // 0x15c Func
	return 2; // 0x15e Return
}


func_125(var_104_bool, var_105_object)
{
	var_106_bool = 0; var_107_bool = 0; // 0x7d PushV
	IsPlayerActor(var_105_object, var_107_bool); // 0x7e Func
	var_104_bool = var_107_bool; // 0x80 Mov
	return 2; // 0x81 Return
}


func_246(var_33_bool)
{
	var_35_bool = 0; var_36_bool = 0; // 0xf6 PushV
	IsDead(var_36_bool); // 0xf7 ObjFunc
	var_33_bool = var_36_bool; // 0xf9 Mov
	return 2; // 0xfa Return
}


func_311(var_8_object)
{
	var_9_object = Obj(); var_10_object = Obj(); // 0x137 PushV
	self(var_10_object); // 0x138 Func
	var_8_object = var_10_object; // 0x13a Mov
	return 2; // 0x13b Return
}


func_215(var_128_bool, var_129_object)
{
	var_130_float = 0; var_131_float = 0; // 0xd7 PushV
	var_132_bool = 0; var_133_object = Obj(); var_134_string = ""; // 0xd8 PushV
	var_133_object = var_129_object; // 0xd9 Mov
	var_134_string = "health"; // 0xda MovS
	func_130(var_132_bool, var_133_object, var_134_string); // 0xdb NEW_2
	var_135_bool = var_132_bool == 0; // 0xdd Not
	if(var_135_bool == 0) goto Label_225; // 0xde JumpB
	var_128_bool = 0; // 0xdf MovB
	return 2; // 0xe0 Return
	
Label_225:
	var_136_bool = 0; // 0xe1 PushV
	var_136_bool = 0; // 0xe2 MovB
	var_137_bool = 0; var_138_object = Obj(); // 0xe3 PushV
	var_138_object = var_129_object; // 0xe4 Mov
	func_125(var_137_bool, var_138_object); // 0xe5 NEW_2
	if(var_137_bool == 0) goto Label_237; // 0xe7 JumpB
	var_139_bool = 0; // 0xe8 PushV
	func_352(var_139_bool); // 0xe9 NEW_2
	if(var_139_bool == 0) goto Label_237; // 0xeb JumpB
	var_136_bool = 1; // 0xec MovB
	
Label_237:
	if(var_136_bool == 0) goto Label_240; // 0xed JumpB
	var_128_bool = 0; // 0xee MovB
	return 2; // 0xef Return
	
Label_240:
	var_143_string = "health"; // 0xf0 PushS
	GetProperty(var_143_string, var_131_float); // 0xf1 ObjFunc
	var_144_float = 0.0; // 0xf3 PushF
	var_128_bool = var_131_float <= var_144_float; // 0xf4 LE2
	return 2; // 0xf5 Return
}


func_251(var_22_bool, var_23_object)
{
	var_24_object = Obj(); var_25_object = Obj(); var_26_object = Obj(); var_27_object = Obj(); // 0xfb PushV
	var_28_bool = var_23_object == 0; // 0xfc NullEq
	if(var_28_bool == 0) goto Label_256; // 0xfd JumpB
	var_22_bool = 0; // 0xfe MovB
	return 4; // 0xff Return
	
Label_256:
	var_29_bool = 0; // 0x100 PushV
	var_29_bool = 0; // 0x101 MovB
	var_30_string = "IsDead"; // 0x102 PushS
	var_31_int = 1; // 0x103 PushI
	var_32_bool = IsFuncExist(var_23_object, var_30_string, var_31_int); // 0x104 FuncExist
	if(var_32_bool == 0) goto Label_268; // 0x105 JumpB
	var_33_bool = 0; var_34_object = Obj(); // 0x106 PushV
	var_34_object = var_23_object; // 0x107 Mov
	func_246(var_34_object); // 0x108 NEW_2
	if(var_33_bool == 0) goto Label_268; // 0x10a JumpB
	var_29_bool = 1; // 0x10b MovB
	
Label_268:
	if(var_29_bool == 0) goto Label_271; // 0x10c JumpB
	var_22_bool = 0; // 0x10d MovB
	return 4; // 0x10e Return
	
Label_271:
	GetScene(var_26_object); // 0x10f Func
	var_37_bool = var_26_object == 0; // 0x111 NullEq
	if(var_37_bool == 0) goto Label_277; // 0x112 JumpB
	var_22_bool = 0; // 0x113 MovB
	return 4; // 0x114 Return
	
Label_277:
	GetScene(var_27_object); // 0x115 ObjFunc
	var_38_bool = var_26_object != var_27_object; // 0x117 Neq
	if(var_38_bool == 0) goto Label_283; // 0x118 JumpB
	var_22_bool = 0; // 0x119 MovB
	return 4; // 0x11a Return
	
Label_283:
	var_22_bool = 1; // 0x11b MovB
	return 4; // 0x11c Return
}


func_317(var_88_float, var_89_float, var_90_float)
{
	var_93_bool = var_89_float < var_90_float; // 0x13e LT
	if(var_93_bool == 0) goto Label_322; // 0x13f JumpB
	var_88_float = var_89_float; // 0x140 Mov
	goto Label_323; // 0x141 Jump
	
Label_323:
	return 0; // 0x143 Return
	
Label_322:
	var_88_float = var_90_float; // 0x142 Mov
}


func_287(var_18_bool, var_19_object)
{
	var_20_int = 0; var_21_int = 0; // 0x11f PushV
	var_22_bool = 0; var_23_object = Obj(); // 0x120 PushV
	var_23_object = var_19_object; // 0x121 Mov
	func_251(var_22_bool, var_23_object); // 0x122 NEW_2
	var_39_bool = var_22_bool == 0; // 0x124 Not
	if(var_39_bool == 0) goto Label_296; // 0x125 JumpB
	var_18_bool = 0; // 0x126 MovB
	return 2; // 0x127 Return
	
Label_296:
	var_40_bool = 0; var_41_object = Obj(); var_42_string = ""; // 0x128 PushV
	var_41_object = var_19_object; // 0x129 Mov
	var_42_string = "noaccess"; // 0x12a MovS
	func_130(var_40_bool, var_41_object, var_42_string); // 0x12b NEW_2
	var_49_bool = var_40_bool == 0; // 0x12d Not
	if(var_49_bool == 0) goto Label_305; // 0x12e JumpB
	var_18_bool = 1; // 0x12f MovB
	return 2; // 0x130 Return
	
Label_305:
	var_50_string = "noaccess"; // 0x131 PushS
	GetProperty(var_50_string, var_21_int); // 0x132 ObjFunc
	var_51_int = 0; // 0x134 PushI
	var_18_bool = var_21_int == var_51_int; // 0x135 Eq2
	return 2; // 0x136 Return
}


