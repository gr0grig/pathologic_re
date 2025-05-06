task_0_event_10(var_0_object, var_1_object, var_2_cvector, var_3_cvector)
{
	var_4_object = Obj(); var_5_object = Obj(); var_6_bool = 0; var_7_object = Obj(); var_8_cvector = CVector(0,0,0); var_9_cvector = CVector(0,0,0); var_10_float = 0; var_11_float = 0; var_12_object = Obj(); var_13_object = Obj(); var_14_object = Obj(); var_15_object = Obj(); var_16_bool = 0; var_17_object = Obj(); var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_float = 0; var_21_float = 0; var_22_object = Obj(); var_23_object = Obj(); // 0x0 PushV
	EventDisable(10); // 0x1 EventDisable
	var_24_string = "on collision"; // 0x2 PushS
	Trace(var_24_string); // 0x3 Func
	var_25_object = GlobalVars[5]; // 0x5 PushGE
	var_26_bool = 0; // 0x6 PushB
	Enable(var_26_bool); // 0x7 ObjFunc
	var_27_string = "bottle"; // 0x9 PushS
	var_28_cvector = CVector(0.0, 0.0, 0.0); // 0xa PushVec
	var_29_int = 1; // 0xb PushI
	var_30_int = 300; // 0xc PushI
	PlayGlobalSound(var_27_string, var_28_cvector, var_29_int, var_30_int); // 0xd Func
	var_31_string = "fire_loop"; // 0xf PushS
	var_32_cvector = CVector(0.0, 10.0, 0.0); // 0x10 PushVec
	var_33_int = 200; // 0x11 PushI
	PlayLoopedGlobalSound(var_14_object, var_31_string, var_32_cvector, var_33_int); // 0x12 Func
	var_34_bool = var_14_object != 0; // 0x14 NullNeq
	if(var_34_bool == 0) goto Label_25; // 0x15 JumpB
	var_35_float = 1.0; // 0x16 PushF
	FadeIn(var_35_float); // 0x17 ObjFunc
	
Label_25:
	var_36_float = 300.0; // 0x19 PushF
	Intersect(var_2_cvector, var_36_float, var_16_bool, var_15_object); // 0x1a Func
	var_37_cvector = CVector(0,0,0); // 0x1c PushV
	func_244(var_37_cvector); // 0x1d NEW_2
	var_18_cvector = var_37_cvector; // 0x1e Mov
	
Label_32:
	Next(var_16_bool, var_17_object); // 0x20 ObjFunc
	var_40_bool = var_16_bool; // 0x22 Push
	if(var_40_bool == 0) goto Label_81; // 0x23 JumpB
	var_41_cvector = CVector(0,0,0); var_42_object = Obj(); // 0x24 PushV
	var_42_object = var_17_object; // 0x25 Mov
	func_249(var_42_object); // 0x26 NEW_2
	var_19_cvector = var_41_cvector; // 0x27 Mov
	var_45_float = 1.0; // 0x29 PushF
	var_46_float = 0; var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); // 0x2a PushV
	var_47_cvector = var_19_cvector; // 0x2b Mov
	var_48_cvector = var_18_cvector; // 0x2c Mov
	func_350(var_46_float, var_47_cvector, var_48_cvector); // 0x2d NEW_2
	var_52_float = 300.0; // 0x2f PushF
	var_53_float = var_46_float / var_52_float; // 0x30 Div
	var_20_float = var_45_float - var_53_float; // 0x31 Sub2
	var_54_float = 0.4; // 0x32 PushF
	var_55_bool = var_20_float < var_54_float; // 0x33 LT
	if(var_55_bool == 0) goto Label_54; // 0x34 JumpB
	var_20_float = 0.4; // 0x35 MovF
	
Label_54:
	var_56_float = 0.8; // 0x36 PushF
	var_57_bool = var_20_float > var_56_float; // 0x37 GT
	if(var_57_bool == 0) goto Label_58; // 0x38 JumpB
	var_20_float = 1; // 0x39 MovI
	
Label_58:
	var_58_float = GlobalVars[2]; // 0x3a PushGE
	var_20_float = var_20_float * var_58_float; // 0x3b Mult2
	var_59_float = 0; var_60_object = Obj(); var_61_float = 0; var_62_int = 0; // 0x3c PushV
	var_60_object = var_17_object; // 0x3d Mov
	var_61_float = var_20_float; // 0x3e Mov
	var_63_int = GlobalVars[3]; // 0x3f PushGE
	var_62_int = var_63_int; // 0x40 Mov
	func_271(var_59_float, var_60_object, var_61_float, var_62_int); // 0x42 NEW_2
	var_21_float = var_59_float; // 0x43 Mov
	var_126_object = GlobalVars[0]; // 0x45 PushGE
	var_127_bool = var_126_object != var_17_object; // 0x46 Neq
	if(var_127_bool == 0) goto Label_76; // 0x47 JumpB
	var_128_object = GlobalVars[0]; // 0x48 PushGE
	var_129_int = 3; // 0x49 PushI
	ReportHit(var_17_object, var_128_object, var_129_int, var_21_float, var_20_float); // 0x4a Func
	
Label_76:
	var_130_string = "Hit: "; // 0x4c PushS
	var_131_int = var_130_string + var_17_object; // 0x4d Add
	Trace(var_131_int); // 0x4e Func
	goto Label_32; // 0x50 Jump
	
Label_81:
	var_15_object = 0; // 0x51 SetNull
	SetPosition(var_2_cvector); // 0x52 Func
	var_132_string = "grenade"; // 0x54 PushS
	FindGeometry(var_132_string, var_22_object); // 0x55 Func
	var_133_bool = 0; // 0x57 PushB
	Enable(var_133_bool); // 0x58 ObjFunc
	var_134_string = "grenadefire"; // 0x5a PushS
	FindParticleSystem(var_134_string, var_23_object); // 0x5b Func
	var_135_bool = var_23_object == 0; // 0x5d NullEq
	if(var_135_bool == 0) goto Label_99; // 0x5e JumpB
	var_136_string = "Can't find fire particle system"; // 0x5f PushS
	Trace(var_136_string); // 0x60 Func
	return 20; // 0x62 Return
	
Label_99:
	var_137_cvector = CVector(0.0, 0.0, 0.0); // 0x63 PushVec
	var_138_cvector = CVector(0.0, 1.0, 0.0); // 0x64 PushVec
	var_139_int = 0; // 0x65 PushI
	AddSource(var_137_cvector, var_138_cvector, var_139_int); // 0x66 ObjFunc
	var_140_cvector = CVector(50.0, 0.0, 50.0); // 0x68 PushVec
	var_141_cvector = CVector(0.0, 1.0, 0.0); // 0x69 PushVec
	var_142_int = 0; // 0x6a PushI
	AddSource(var_140_cvector, var_141_cvector, var_142_int); // 0x6b ObjFunc
	var_143_cvector = CVector(-50.0, 0.0, 50.0); // 0x6d PushVec
	var_144_cvector = CVector(0.0, 1.0, 0.0); // 0x6e PushVec
	var_145_int = 0; // 0x6f PushI
	AddSource(var_143_cvector, var_144_cvector, var_145_int); // 0x70 ObjFunc
	var_146_cvector = CVector(-50.0, 0.0, -50.0); // 0x72 PushVec
	var_147_cvector = CVector(0.0, 1.0, 0.0); // 0x73 PushVec
	var_148_int = 0; // 0x74 PushI
	AddSource(var_146_cvector, var_147_cvector, var_148_int); // 0x75 ObjFunc
	var_149_cvector = CVector(50.0, 0.0, -50.0); // 0x77 PushVec
	var_150_cvector = CVector(0.0, 1.0, 0.0); // 0x78 PushVec
	var_151_int = 0; // 0x79 PushI
	AddSource(var_149_cvector, var_150_cvector, var_151_int); // 0x7a ObjFunc
	var_152_cvector = CVector(25.0, 0.0, 25.0); // 0x7c PushVec
	var_153_cvector = CVector(0.0, 1.0, 0.0); // 0x7d PushVec
	var_154_int = 0; // 0x7e PushI
	AddSource(var_152_cvector, var_153_cvector, var_154_int); // 0x7f ObjFunc
	var_155_cvector = CVector(-25.0, 0.0, 25.0); // 0x81 PushVec
	var_156_cvector = CVector(0.0, 1.0, 0.0); // 0x82 PushVec
	var_157_int = 0; // 0x83 PushI
	AddSource(var_155_cvector, var_156_cvector, var_157_int); // 0x84 ObjFunc
	var_158_cvector = CVector(-25.0, 0.0, -25.0); // 0x86 PushVec
	var_159_cvector = CVector(0.0, 1.0, 0.0); // 0x87 PushVec
	var_160_int = 0; // 0x88 PushI
	AddSource(var_158_cvector, var_159_cvector, var_160_int); // 0x89 ObjFunc
	var_161_cvector = CVector(25.0, 0.0, -25.0); // 0x8b PushVec
	var_162_cvector = CVector(0.0, 1.0, 0.0); // 0x8c PushVec
	var_163_int = 0; // 0x8d PushI
	AddSource(var_161_cvector, var_162_cvector, var_163_int); // 0x8e ObjFunc
	Enable(); // 0x90 ObjFunc
	var_164_bool = 0; // 0x92 PushB
	Fade(var_164_bool); // 0x93 ObjFunc
	var_165_object = GlobalVars[4]; // 0x95 PushGE
	Fade(); // 0x96 ObjFunc
	var_166_float = 10.0; // 0x98 PushF
	Sleep(var_166_float); // 0x99 Func
	Fade(); // 0x9b ObjFunc
	var_167_bool = var_14_object != 0; // 0x9d NullNeq
	if(var_167_bool == 0) goto Label_162; // 0x9e JumpB
	var_168_float = 1.0; // 0x9f PushF
	FadeOut(var_168_float); // 0xa0 ObjFunc
	
Label_162:
	var_169_float = 2.0; // 0xa2 PushF
	Sleep(var_169_float); // 0xa3 Func
	var_170_object = Obj(); // 0xa5 PushV
	func_344(var_170_object); // 0xa6 NEW_2
	RemoveActor(var_170_object); // 0xa8 Func
	return 20; // 0xaa Return
}


task_0_event_6()
{
	var_0_object = Obj(); // 0xde PushV
	func_344(var_0_object); // 0xdf NEW_2
	RemoveActor(var_0_object); // 0xe1 Func
	Hold(); // 0xe3 Func
	return 0; // 0xe5 Return
}


main()
{
	var_0_object = Obj(); var_1_object = Obj(); var_2_object = Obj(); var_3_object = Obj(); var_4_object = Obj(); var_5_object = Obj(); // 0xb0 PushV
	var_6_cvector = CVector(0.0, 0.0, 0.0); // 0xb1 PushVec
	var_7_int = 10; // 0xb2 PushI
	var_8_cvector = GlobalVars[1]; // 0xb3 PushGE
	var_9_cvector = CVector(2.0, 2.0, 2.0); // 0xb4 PushVec
	var_10_object = GlobalVars[0]; // 0xb5 PushGE
	CreateRigidBody(var_3_object, var_6_cvector, var_7_int, var_8_cvector, var_9_cvector, var_10_object); // 0xb6 Func
	var_11_bool = 1; // 0xb8 PushB
	Enable(var_11_bool); // 0xb9 ObjFunc
	var_12_object = GlobalVars[5]; // 0xbb PushGE
	var_12_object = var_3_object; // 0xbc Mov
	GlobalVars[5] = var_12_object; // 0xbd PopGE
	var_13_string = "smoke"; // 0xbe PushS
	FindParticleSystem(var_13_string, var_4_object); // 0xbf Func
	var_14_cvector = CVector(0.0, 0.0, 0.0); // 0xc1 PushVec
	var_15_cvector = CVector(0.0, 1.0, 0.0); // 0xc2 PushVec
	var_16_int = 0; // 0xc3 PushI
	AddSource(var_14_cvector, var_15_cvector, var_16_int); // 0xc4 ObjFunc
	var_17_bool = 1; // 0xc6 PushB
	Enable(var_17_bool); // 0xc7 ObjFunc
	var_18_bool = 0; // 0xc9 PushB
	Fade(var_18_bool); // 0xca ObjFunc
	var_19_object = GlobalVars[4]; // 0xcc PushGE
	var_19_object = var_4_object; // 0xcd Mov
	GlobalVars[4] = var_19_object; // 0xce PopGE
	var_20_string = "grenade"; // 0xcf PushS
	FindGeometry(var_20_string, var_5_object); // 0xd0 Func
	var_21_bool = 1; // 0xd2 PushB
	Enable(var_21_bool); // 0xd3 ObjFunc
	Attach(var_3_object); // 0xd5 Func
	
Label_215:
	Hold(); // 0xd7 Func
	goto Label_215; // 0xd9 Jump
}


func_259(var_76_bool, var_77_object, var_78_string)
{
	var_79_bool = 0; var_80_bool = 0; // 0x103 PushV
	var_81_string = "HasProperty"; // 0x104 PushS
	var_82_int = 2; // 0x105 PushI
	var_83_bool = IsFuncExist(var_77_object, var_81_string, var_82_int); // 0x106 FuncExist
	var_84_bool = var_83_bool == 0; // 0x107 Not
	if(var_84_bool == 0) goto Label_267; // 0x108 JumpB
	var_76_bool = 0; // 0x109 MovB
	return 2; // 0x10a Return
	
Label_267:
	HasProperty(var_78_string, var_80_bool); // 0x10b ObjFunc
	var_76_bool = var_80_bool; // 0x10d Mov
	return 2; // 0x10e Return
}


func_355(var_101_float, var_102_float, var_103_float)
{
	var_106_bool = var_102_float < var_103_float; // 0x164 LT
	if(var_106_bool == 0) goto Label_360; // 0x165 JumpB
	var_101_float = var_102_float; // 0x166 Mov
	goto Label_361; // 0x167 Jump
	
Label_361:
	return 0; // 0x169 Return
	
Label_360:
	var_101_float = var_103_float; // 0x168 Mov
}


func_230(var_91_string, var_92_int)
{
	var_93_int = 2; // 0xe7 PushI
	var_94_bool = var_92_int == var_93_int; // 0xe8 Eq
	if(var_94_bool == 0) goto Label_237; // 0xe9 JumpB
	var_91_string = "fire"; // 0xea MovS
	return 0; // 0xeb Return
	
Label_237:
	var_95_int = 1; // 0xed PushI
	var_96_bool = var_92_int == var_95_int; // 0xee Eq
	if(var_96_bool == 0) goto Label_242; // 0xef JumpB
	var_91_string = "bullet"; // 0xf0 MovS
	return 0; // 0xf1 Return
	
Label_242:
	var_91_string = "phys"; // 0xf2 MovS
	return 0; // 0xf3 Return
}


func_362(var_111_float, var_112_float, var_113_float, var_114_float)
{
	var_115_bool = var_112_float < var_113_float; // 0x16b LT
	if(var_115_bool == 0) goto Label_367; // 0x16c JumpB
	var_111_float = var_113_float; // 0x16d Mov
	return 0; // 0x16e Return
	
Label_367:
	var_116_bool = var_112_float > var_114_float; // 0x16f GT
	if(var_116_bool == 0) goto Label_371; // 0x170 JumpB
	var_111_float = var_114_float; // 0x171 Mov
	return 0; // 0x172 Return
	
Label_371:
	var_111_float = var_112_float; // 0x173 Mov
	return 0; // 0x174 Return
}


func_271(var_59_float, var_60_object, var_61_float, var_62_int)
{
	var_64_int = 0; var_65_string = ""; var_66_int = 0; var_67_float = 0; var_68_float = 0; var_69_float = 0; var_70_int = 0; var_71_string = ""; var_72_int = 0; var_73_float = 0; var_74_float = 0; var_75_float = 0; // 0x10f PushV
	var_76_bool = 0; var_77_object = Obj(); var_78_string = ""; // 0x110 PushV
	var_77_object = var_60_object; // 0x111 Mov
	var_78_string = "health"; // 0x112 MovS
	func_259(var_76_bool, var_77_object, var_78_string); // 0x113 NEW_2
	var_85_bool = var_76_bool == 0; // 0x115 Not
	if(var_85_bool == 0) goto Label_281; // 0x116 JumpB
	var_59_float = 0.0; // 0x117 MovF
	return 12; // 0x118 Return
	
Label_281:
	var_86_bool = 0; var_87_object = Obj(); var_88_string = ""; // 0x119 PushV
	var_87_object = var_60_object; // 0x11a Mov
	var_88_string = "armor"; // 0x11b MovS
	func_259(var_86_bool, var_87_object, var_88_string); // 0x11c NEW_2
	var_89_bool = var_86_bool == 0; // 0x11e Not
	if(var_89_bool == 0) goto Label_290; // 0x11f JumpB
	var_70_int = 0; // 0x120 MovI
	goto Label_293; // 0x121 Jump
	
Label_293:
	var_90_string = "armor_"; // 0x125 PushS
	var_91_string = ""; var_92_int = 0; // 0x126 PushV
	var_92_int = var_62_int; // 0x127 Mov
	func_230(var_91_string, var_92_int); // 0x128 NEW_2
	var_71_string = var_90_string + var_91_string; // 0x12a Add2
	var_97_bool = 0; var_98_object = Obj(); var_99_string = ""; // 0x12b PushV
	var_98_object = var_60_object; // 0x12c Mov
	var_99_string = var_71_string; // 0x12d Mov
	func_259(var_97_bool, var_98_object, var_99_string); // 0x12e NEW_2
	var_100_bool = var_97_bool == 0; // 0x130 Not
	if(var_100_bool == 0) goto Label_308; // 0x131 JumpB
	var_72_int = 0; // 0x132 MovI
	goto Label_310; // 0x133 Jump
	
Label_310:
	var_101_float = 0; var_102_float = 0; var_103_float = 0; // 0x136 PushV
	var_104_int = var_70_int + var_72_int; // 0x137 Add
	var_105_float = 100.0; // 0x138 PushF
	var_102_float = var_104_int / var_104_int; // 0x139 Div2
	var_103_float = 1; // 0x13a MovI
	func_355(var_101_float, var_102_float, var_103_float); // 0x13b NEW_2
	var_73_float = var_101_float; // 0x13c Mov
	var_107_string = "health"; // 0x13e PushS
	GetProperty(var_107_string, var_74_float); // 0x13f ObjFunc
	var_108_int = 1; // 0x141 PushI
	var_109_int = var_108_int - var_73_float; // 0x142 Sub
	var_75_float = var_61_float * var_109_int; // 0x143 Mult2
	var_110_string = "health"; // 0x144 PushS
	var_111_float = 0; var_112_float = 0; var_113_float = 0; var_114_float = 0; // 0x145 PushV
	var_112_float = var_74_float - var_75_float; // 0x146 Sub2
	var_113_float = 0; // 0x147 MovI
	var_114_float = 1; // 0x148 MovI
	func_362(var_111_float, var_112_float, var_113_float, var_114_float); // 0x149 NEW_2
	SetProperty(var_110_string, var_111_float); // 0x14b ObjFunc
	var_117_bool = 0; var_118_object = Obj(); // 0x14d PushV
	var_118_object = var_60_object; // 0x14e Mov
	func_254(var_117_bool, var_118_object); // 0x14f NEW_2
	if(var_117_bool == 0) goto Label_342; // 0x151 JumpB
	var_121_float = 0; // 0x152 PushV
	var_121_float = -var_75_float; // 0x153 Neg2
	func_373(var_121_float); // 0x154 NEW_2
	
Label_342:
	var_59_float = var_75_float; // 0x156 Mov
	return 12; // 0x157 Return
	
Label_308:
	GetProperty(var_71_string, var_72_int); // 0x134 ObjFunc
	
Label_290:
	var_125_string = "armor"; // 0x122 PushS
	GetProperty(var_125_string, var_70_int); // 0x123 ObjFunc
}


func_244(var_37_cvector)
{
	var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); // 0xf4 PushV
	GetPosition(var_39_cvector); // 0xf5 Func
	var_37_cvector = var_39_cvector; // 0xf7 Mov
	return 2; // 0xf8 Return
}


func_373(var_121_float)
{
	var_122_object = Obj(); var_123_object = Obj(); // 0x175 PushV
	CreateFloatVector(var_123_object); // 0x176 Func
	add(var_121_float); // 0x178 ObjFunc
	var_124_int = 15; // 0x17a PushI
	SendWorldWndMessage(var_124_int, var_123_object); // 0x17b Func
	return 2; // 0x17d Return
}


func_254(var_117_bool, var_118_object)
{
	var_119_bool = 0; var_120_bool = 0; // 0xfe PushV
	IsPlayerActor(var_118_object, var_120_bool); // 0xff Func
	var_117_bool = var_120_bool; // 0x101 Mov
	return 2; // 0x102 Return
}


func_344(var_0_object)
{
	var_1_object = Obj(); var_2_object = Obj(); // 0x158 PushV
	self(var_2_object); // 0x159 Func
	var_0_object = var_2_object; // 0x15b Mov
	return 2; // 0x15c Return
}


func_249(var_41_cvector)
{
	var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); // 0xf9 PushV
	GetPosition(var_44_cvector); // 0xfa ObjFunc
	var_41_cvector = var_44_cvector; // 0xfc Mov
	return 2; // 0xfd Return
}


func_350(var_46_float, var_47_cvector, var_48_cvector)
{
	var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); // 0x15e PushV
	var_50_cvector = var_48_cvector - var_47_cvector; // 0x15f Sub2
	var_51_int = var_50_cvector | var_50_cvector; // 0x160 Or
	var_46_float = sqrt(var_51_int); // 0x161 Sqrt2
	return 2; // 0x162 Return
}


