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
	func_229(var_37_cvector); // 0x1d Call
	var_18_cvector = var_37_cvector; // 0x1e Mov
	
Label_32:
	Next(var_16_bool, var_17_object); // 0x20 ObjFunc
	var_40_bool = var_16_bool; // 0x22 Push
	if(var_40_bool == 0) goto Label_78; // 0x23 JumpB
	var_41_cvector = CVector(0,0,0); var_42_object = Obj(); // 0x24 PushV
	var_42_object = var_17_object; // 0x25 Mov
	func_234(var_42_object); // 0x26 Call
	var_19_cvector = var_41_cvector; // 0x27 Mov
	var_45_float = 1.0; // 0x29 PushF
	var_46_float = 0; var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); // 0x2a PushV
	var_47_cvector = var_19_cvector; // 0x2b Mov
	var_48_cvector = var_18_cvector; // 0x2c Mov
	func_315(var_46_float, var_47_cvector, var_48_cvector); // 0x2d Call
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
	func_251(var_59_float, var_60_object, var_61_float, var_62_int); // 0x42 Call
	var_21_float = var_59_float; // 0x43 Mov
	var_116_object = GlobalVars[0]; // 0x45 PushGE
	var_117_int = 3; // 0x46 PushI
	ReportHit(var_17_object, var_116_object, var_117_int, var_21_float, var_20_float); // 0x47 Func
	var_118_string = "Hit: "; // 0x49 PushS
	var_119_int = var_118_string + var_17_object; // 0x4a Add
	Trace(var_119_int); // 0x4b Func
	goto Label_32; // 0x4d Jump
	
Label_78:
	var_15_object = 0; // 0x4e SetNull
	SetPosition(var_2_cvector); // 0x4f Func
	var_120_string = "grenade"; // 0x51 PushS
	FindGeometry(var_120_string, var_22_object); // 0x52 Func
	var_121_bool = 0; // 0x54 PushB
	Enable(var_121_bool); // 0x55 ObjFunc
	var_122_string = "grenadefire"; // 0x57 PushS
	FindParticleSystem(var_122_string, var_23_object); // 0x58 Func
	var_123_bool = var_23_object == 0; // 0x5a NullEq
	if(var_123_bool == 0) goto Label_96; // 0x5b JumpB
	var_124_string = "Can't find fire particle system"; // 0x5c PushS
	Trace(var_124_string); // 0x5d Func
	return 20; // 0x5f Return
	
Label_96:
	var_125_cvector = CVector(0.0, 0.0, 0.0); // 0x60 PushVec
	var_126_cvector = CVector(0.0, 1.0, 0.0); // 0x61 PushVec
	var_127_int = 0; // 0x62 PushI
	AddSource(var_125_cvector, var_126_cvector, var_127_int); // 0x63 ObjFunc
	var_128_cvector = CVector(50.0, 0.0, 50.0); // 0x65 PushVec
	var_129_cvector = CVector(0.0, 1.0, 0.0); // 0x66 PushVec
	var_130_int = 0; // 0x67 PushI
	AddSource(var_128_cvector, var_129_cvector, var_130_int); // 0x68 ObjFunc
	var_131_cvector = CVector(-50.0, 0.0, 50.0); // 0x6a PushVec
	var_132_cvector = CVector(0.0, 1.0, 0.0); // 0x6b PushVec
	var_133_int = 0; // 0x6c PushI
	AddSource(var_131_cvector, var_132_cvector, var_133_int); // 0x6d ObjFunc
	var_134_cvector = CVector(-50.0, 0.0, -50.0); // 0x6f PushVec
	var_135_cvector = CVector(0.0, 1.0, 0.0); // 0x70 PushVec
	var_136_int = 0; // 0x71 PushI
	AddSource(var_134_cvector, var_135_cvector, var_136_int); // 0x72 ObjFunc
	var_137_cvector = CVector(50.0, 0.0, -50.0); // 0x74 PushVec
	var_138_cvector = CVector(0.0, 1.0, 0.0); // 0x75 PushVec
	var_139_int = 0; // 0x76 PushI
	AddSource(var_137_cvector, var_138_cvector, var_139_int); // 0x77 ObjFunc
	var_140_cvector = CVector(25.0, 0.0, 25.0); // 0x79 PushVec
	var_141_cvector = CVector(0.0, 1.0, 0.0); // 0x7a PushVec
	var_142_int = 0; // 0x7b PushI
	AddSource(var_140_cvector, var_141_cvector, var_142_int); // 0x7c ObjFunc
	var_143_cvector = CVector(-25.0, 0.0, 25.0); // 0x7e PushVec
	var_144_cvector = CVector(0.0, 1.0, 0.0); // 0x7f PushVec
	var_145_int = 0; // 0x80 PushI
	AddSource(var_143_cvector, var_144_cvector, var_145_int); // 0x81 ObjFunc
	var_146_cvector = CVector(-25.0, 0.0, -25.0); // 0x83 PushVec
	var_147_cvector = CVector(0.0, 1.0, 0.0); // 0x84 PushVec
	var_148_int = 0; // 0x85 PushI
	AddSource(var_146_cvector, var_147_cvector, var_148_int); // 0x86 ObjFunc
	var_149_cvector = CVector(25.0, 0.0, -25.0); // 0x88 PushVec
	var_150_cvector = CVector(0.0, 1.0, 0.0); // 0x89 PushVec
	var_151_int = 0; // 0x8a PushI
	AddSource(var_149_cvector, var_150_cvector, var_151_int); // 0x8b ObjFunc
	Enable(); // 0x8d ObjFunc
	var_152_bool = 0; // 0x8f PushB
	Fade(var_152_bool); // 0x90 ObjFunc
	var_153_object = GlobalVars[4]; // 0x92 PushGE
	Fade(); // 0x93 ObjFunc
	var_154_float = 10.0; // 0x95 PushF
	Sleep(var_154_float); // 0x96 Func
	Fade(); // 0x98 ObjFunc
	var_155_bool = var_14_object != 0; // 0x9a NullNeq
	if(var_155_bool == 0) goto Label_159; // 0x9b JumpB
	var_156_float = 1.0; // 0x9c PushF
	FadeOut(var_156_float); // 0x9d ObjFunc
	
Label_159:
	var_157_float = 2.0; // 0x9f PushF
	Sleep(var_157_float); // 0xa0 Func
	SetDeathStateAndRemove(); // 0xa2 Func
	return 20; // 0xa4 Return
}


task_0_event_6()
{
	SetDeathStateAndRemove(); // 0xd8 Func
	sync(); // 0xda Func
	return 0; // 0xdc Return
}


main()
{
	var_0_object = Obj(); var_1_object = Obj(); var_2_object = Obj(); var_3_object = Obj(); var_4_object = Obj(); var_5_object = Obj(); // 0xaa PushV
	var_6_cvector = CVector(0.0, 0.0, 0.0); // 0xab PushVec
	var_7_int = 50; // 0xac PushI
	var_8_cvector = GlobalVars[1]; // 0xad PushGE
	var_9_cvector = CVector(2.0, 2.0, 2.0); // 0xae PushVec
	var_10_object = GlobalVars[0]; // 0xaf PushGE
	CreateRigidBody(var_3_object, var_6_cvector, var_7_int, var_8_cvector, var_9_cvector, var_10_object); // 0xb0 Func
	var_11_bool = 1; // 0xb2 PushB
	Enable(var_11_bool); // 0xb3 ObjFunc
	var_12_object = GlobalVars[5]; // 0xb5 PushGE
	var_12_object = var_3_object; // 0xb6 Mov
	GlobalVars[5] = var_12_object; // 0xb7 PopGE
	var_13_string = "smoke"; // 0xb8 PushS
	FindParticleSystem(var_13_string, var_4_object); // 0xb9 Func
	var_14_cvector = CVector(0.0, 0.0, 0.0); // 0xbb PushVec
	var_15_cvector = CVector(0.0, 1.0, 0.0); // 0xbc PushVec
	var_16_int = 0; // 0xbd PushI
	AddSource(var_14_cvector, var_15_cvector, var_16_int); // 0xbe ObjFunc
	var_17_bool = 1; // 0xc0 PushB
	Enable(var_17_bool); // 0xc1 ObjFunc
	var_18_bool = 0; // 0xc3 PushB
	Fade(var_18_bool); // 0xc4 ObjFunc
	var_19_object = GlobalVars[4]; // 0xc6 PushGE
	var_19_object = var_4_object; // 0xc7 Mov
	GlobalVars[4] = var_19_object; // 0xc8 PopGE
	var_20_string = "grenade"; // 0xc9 PushS
	FindGeometry(var_20_string, var_5_object); // 0xca Func
	var_21_bool = 1; // 0xcc PushB
	Enable(var_21_bool); // 0xcd ObjFunc
	Attach(var_3_object); // 0xcf Func
	
Label_209:
	Hold(); // 0xd1 Func
	goto Label_209; // 0xd3 Jump
}


func_320(var_99_float, var_100_float, var_101_float)
{
	var_104_bool = var_100_float < var_101_float; // 0x141 LT
	if(var_104_bool == 0) goto Label_325; // 0x142 JumpB
	var_99_float = var_100_float; // 0x143 Mov
	goto Label_326; // 0x144 Jump
	
Label_326:
	return 0; // 0x146 Return
	
Label_325:
	var_99_float = var_101_float; // 0x145 Mov
}


func_229(var_37_cvector)
{
	var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); // 0xe5 PushV
	GetPosition(var_39_cvector); // 0xe6 Func
	var_37_cvector = var_39_cvector; // 0xe8 Mov
	return 2; // 0xe9 Return
}


func_327(var_109_float, var_110_float, var_111_float, var_112_float)
{
	var_113_bool = var_110_float < var_111_float; // 0x148 LT
	if(var_113_bool == 0) goto Label_332; // 0x149 JumpB
	var_109_float = var_111_float; // 0x14a Mov
	return 0; // 0x14b Return
	
Label_332:
	var_114_bool = var_110_float > var_112_float; // 0x14c GT
	if(var_114_bool == 0) goto Label_336; // 0x14d JumpB
	var_109_float = var_112_float; // 0x14e Mov
	return 0; // 0x14f Return
	
Label_336:
	var_109_float = var_110_float; // 0x150 Mov
	return 0; // 0x151 Return
}


func_234(var_41_cvector)
{
	var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); // 0xea PushV
	GetPosition(var_44_cvector); // 0xeb ObjFunc
	var_41_cvector = var_44_cvector; // 0xed Mov
	return 2; // 0xee Return
}


func_239(var_76_bool, var_77_object, var_78_string)
{
	var_79_bool = 0; var_80_bool = 0; // 0xef PushV
	var_81_string = "HasProperty"; // 0xf0 PushS
	var_82_int = 2; // 0xf1 PushI
	var_83_bool = IsFuncExist(var_77_object, var_81_string, var_82_int); // 0xf2 FuncExist
	var_84_bool = var_83_bool == 0; // 0xf3 Not
	if(var_84_bool == 0) goto Label_247; // 0xf4 JumpB
	var_76_bool = 0; // 0xf5 MovB
	return 2; // 0xf6 Return
	
Label_247:
	HasProperty(var_78_string, var_80_bool); // 0xf7 ObjFunc
	var_76_bool = var_80_bool; // 0xf9 Mov
	return 2; // 0xfa Return
}


func_251(var_59_float, var_60_object, var_61_float, var_62_int)
{
	var_64_int = 0; var_65_string = ""; var_66_int = 0; var_67_float = 0; var_68_float = 0; var_69_float = 0; var_70_int = 0; var_71_string = ""; var_72_int = 0; var_73_float = 0; var_74_float = 0; var_75_float = 0; // 0xfb PushV
	var_76_bool = 0; var_77_object = Obj(); var_78_string = ""; // 0xfc PushV
	var_77_object = var_60_object; // 0xfd Mov
	var_78_string = "health"; // 0xfe MovS
	func_239(var_76_bool, var_77_object, var_78_string); // 0xff Call
	var_85_bool = var_76_bool == 0; // 0x101 Not
	if(var_85_bool == 0) goto Label_261; // 0x102 JumpB
	var_59_float = 0.0; // 0x103 MovF
	return 12; // 0x104 Return
	
Label_261:
	var_86_bool = 0; var_87_object = Obj(); var_88_string = ""; // 0x105 PushV
	var_87_object = var_60_object; // 0x106 Mov
	var_88_string = "armor"; // 0x107 MovS
	func_239(var_86_bool, var_87_object, var_88_string); // 0x108 Call
	var_89_bool = var_86_bool == 0; // 0x10a Not
	if(var_89_bool == 0) goto Label_270; // 0x10b JumpB
	var_70_int = 0; // 0x10c MovI
	goto Label_273; // 0x10d Jump
	
Label_273:
	var_90_string = "armor_"; // 0x111 PushS
	var_91_string = ""; var_92_int = 0; // 0x112 PushV
	var_92_int = var_62_int; // 0x113 Mov
	func_221(var_91_string, var_92_int); // 0x114 Call
	var_71_string = var_90_string + var_91_string; // 0x116 Add2
	var_95_bool = 0; var_96_object = Obj(); var_97_string = ""; // 0x117 PushV
	var_96_object = var_60_object; // 0x118 Mov
	var_97_string = var_71_string; // 0x119 Mov
	func_239(var_95_bool, var_96_object, var_97_string); // 0x11a Call
	var_98_bool = var_95_bool == 0; // 0x11c Not
	if(var_98_bool == 0) goto Label_288; // 0x11d JumpB
	var_72_int = 0; // 0x11e MovI
	goto Label_290; // 0x11f Jump
	
Label_290:
	var_99_float = 0; var_100_float = 0; var_101_float = 0; // 0x122 PushV
	var_102_int = var_70_int + var_72_int; // 0x123 Add
	var_103_float = 100.0; // 0x124 PushF
	var_100_float = var_102_int / var_102_int; // 0x125 Div2
	var_101_float = 1; // 0x126 MovI
	func_320(var_99_float, var_100_float, var_101_float); // 0x127 Call
	var_73_float = var_99_float; // 0x128 Mov
	var_105_string = "health"; // 0x12a PushS
	GetProperty(var_105_string, var_74_float); // 0x12b ObjFunc
	var_106_int = 1; // 0x12d PushI
	var_107_int = var_106_int - var_73_float; // 0x12e Sub
	var_75_float = var_61_float * var_107_int; // 0x12f Mult2
	var_108_string = "health"; // 0x130 PushS
	var_109_float = 0; var_110_float = 0; var_111_float = 0; var_112_float = 0; // 0x131 PushV
	var_110_float = var_74_float - var_75_float; // 0x132 Sub2
	var_111_float = 0; // 0x133 MovI
	var_112_float = 1; // 0x134 MovI
	func_327(var_109_float, var_110_float, var_111_float, var_112_float); // 0x135 Call
	SetProperty(var_108_string, var_109_float); // 0x137 ObjFunc
	var_59_float = var_75_float; // 0x139 Mov
	return 12; // 0x13a Return
	
Label_288:
	GetProperty(var_71_string, var_72_int); // 0x120 ObjFunc
	
Label_270:
	var_115_string = "armor"; // 0x10e PushS
	GetProperty(var_115_string, var_70_int); // 0x10f ObjFunc
}


func_315(var_46_float, var_47_cvector, var_48_cvector)
{
	var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); // 0x13b PushV
	var_50_cvector = var_48_cvector - var_47_cvector; // 0x13c Sub2
	var_51_int = var_50_cvector | var_50_cvector; // 0x13d Or
	var_46_float = sqrt(var_51_int); // 0x13e Sqrt2
	return 2; // 0x13f Return
}


func_221(var_91_string, var_92_int)
{
	var_93_int = 1; // 0xde PushI
	var_94_bool = var_92_int == var_93_int; // 0xdf Eq
	if(var_94_bool == 0) goto Label_227; // 0xe0 JumpB
	var_91_string = "fire"; // 0xe1 MovS
	return 0; // 0xe2 Return
	
Label_227:
	var_91_string = "phys"; // 0xe3 MovS
	return 0; // 0xe4 Return
}


