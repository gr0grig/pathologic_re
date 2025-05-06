task_0_event_10(var_0_object, var_1_object, var_2_cvector, var_3_cvector)
{
	var_4_object = Obj(); var_5_object = Obj(); var_6_object = Obj(); var_7_bool = 0; var_8_object = Obj(); var_9_cvector = CVector(0,0,0); var_10_cvector = CVector(0,0,0); var_11_float = 0; var_12_float = 0; var_13_object = Obj(); var_14_object = Obj(); var_15_object = Obj(); var_16_object = Obj(); var_17_object = Obj(); var_18_bool = 0; var_19_object = Obj(); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_float = 0; var_23_float = 0; var_24_object = Obj(); var_25_object = Obj(); // 0x0 PushV
	EventDisable(10); // 0x1 EventDisable
	var_26_object = GlobalVars[6]; // 0x2 PushGE
	var_27_bool = 0; // 0x3 PushB
	Enable(var_27_bool); // 0x4 ObjFunc
	var_28_string = "bottle"; // 0x6 PushS
	var_29_cvector = CVector(0.0, 0.0, 0.0); // 0x7 PushVec
	var_30_int = 1; // 0x8 PushI
	var_31_int = 300; // 0x9 PushI
	PlayGlobalSound(var_28_string, var_29_cvector, var_30_int, var_31_int); // 0xa Func
	var_32_string = "fire_loop"; // 0xc PushS
	var_33_cvector = CVector(0.0, 10.0, 0.0); // 0xd PushVec
	var_34_int = 200; // 0xe PushI
	PlayLoopedGlobalSound(var_15_object, var_32_string, var_33_cvector, var_34_int); // 0xf Func
	var_35_bool = var_15_object != 0; // 0x11 NullNeq
	if(var_35_bool == 0) goto Label_22; // 0x12 JumpB
	var_36_float = 1.0; // 0x13 PushF
	FadeIn(var_36_float); // 0x14 ObjFunc
	
Label_22:
	GetScene(var_16_object); // 0x16 Func
	var_37_float = 300.0; // 0x18 PushF
	Intersect(var_2_cvector, var_37_float, var_18_bool, var_17_object); // 0x19 Func
	var_38_cvector = CVector(0,0,0); // 0x1b PushV
	func_229(var_38_cvector); // 0x1c Call
	var_20_cvector = var_38_cvector; // 0x1d Mov
	
Label_31:
	Next(var_18_bool, var_19_object); // 0x1f ObjFunc
	var_41_bool = var_18_bool; // 0x21 Push
	if(var_41_bool == 0) goto Label_82; // 0x22 JumpB
	var_42_cvector = CVector(0,0,0); var_43_object = Obj(); // 0x23 PushV
	var_43_object = var_19_object; // 0x24 Mov
	func_234(var_43_object); // 0x25 Call
	var_21_cvector = var_42_cvector; // 0x26 Mov
	var_46_float = 1.0; // 0x28 PushF
	var_47_float = 0; var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); // 0x29 PushV
	var_48_cvector = var_21_cvector; // 0x2a Mov
	var_49_cvector = var_20_cvector; // 0x2b Mov
	func_315(var_47_float, var_48_cvector, var_49_cvector); // 0x2c Call
	var_53_float = 300.0; // 0x2e PushF
	var_54_float = var_47_float / var_53_float; // 0x2f Div
	var_22_float = var_46_float - var_54_float; // 0x30 Sub2
	var_55_float = 0.4; // 0x31 PushF
	var_56_bool = var_22_float < var_55_float; // 0x32 LT
	if(var_56_bool == 0) goto Label_53; // 0x33 JumpB
	var_22_float = 0.4; // 0x34 MovF
	
Label_53:
	var_57_float = 0.8; // 0x35 PushF
	var_58_bool = var_22_float > var_57_float; // 0x36 GT
	if(var_58_bool == 0) goto Label_57; // 0x37 JumpB
	var_22_float = 1; // 0x38 MovI
	
Label_57:
	var_59_float = GlobalVars[2]; // 0x39 PushGE
	var_22_float = var_22_float * var_59_float; // 0x3a Mult2
	var_60_float = 0; var_61_object = Obj(); var_62_float = 0; var_63_int = 0; // 0x3b PushV
	var_61_object = var_19_object; // 0x3c Mov
	var_62_float = var_22_float; // 0x3d Mov
	var_64_int = GlobalVars[3]; // 0x3e PushGE
	var_63_int = var_64_int; // 0x3f Mov
	func_251(var_60_float, var_61_object, var_62_float, var_63_int); // 0x41 Call
	var_23_float = var_60_float; // 0x42 Mov
	var_117_object = GlobalVars[0]; // 0x44 PushGE
	var_118_bool = var_19_object != var_117_object; // 0x45 Neq
	if(var_118_bool == 0) goto Label_81; // 0x46 JumpB
	var_119_object = GlobalVars[0]; // 0x47 PushGE
	ReportAttack(var_119_object, var_19_object); // 0x48 Func
	var_120_object = GlobalVars[0]; // 0x4a PushGE
	var_121_int = 3; // 0x4b PushI
	ReportHit(var_19_object, var_120_object, var_121_int, var_23_float, var_22_float); // 0x4c Func
	var_122_object = GlobalVars[0]; // 0x4e PushGE
	BroadcastPlayerDamage(var_19_object, var_16_object, var_122_object); // 0x4f Func
	
Label_81:
	goto Label_31; // 0x51 Jump
	
Label_82:
	var_17_object = 0; // 0x52 SetNull
	SetPosition(var_2_cvector); // 0x53 Func
	var_123_string = "grenade"; // 0x55 PushS
	FindGeometry(var_123_string, var_24_object); // 0x56 Func
	var_124_bool = 0; // 0x58 PushB
	Enable(var_124_bool); // 0x59 ObjFunc
	var_125_string = "fire"; // 0x5b PushS
	FindParticleSystem(var_125_string, var_25_object); // 0x5c Func
	var_126_cvector = CVector(0.0, 0.0, 0.0); // 0x5e PushVec
	var_127_cvector = CVector(0.0, 1.0, 0.0); // 0x5f PushVec
	var_128_int = 0; // 0x60 PushI
	AddSource(var_126_cvector, var_127_cvector, var_128_int); // 0x61 ObjFunc
	var_129_cvector = CVector(50.0, 0.0, 50.0); // 0x63 PushVec
	var_130_cvector = CVector(0.0, 1.0, 0.0); // 0x64 PushVec
	var_131_int = 0; // 0x65 PushI
	AddSource(var_129_cvector, var_130_cvector, var_131_int); // 0x66 ObjFunc
	var_132_cvector = CVector(-50.0, 0.0, 50.0); // 0x68 PushVec
	var_133_cvector = CVector(0.0, 1.0, 0.0); // 0x69 PushVec
	var_134_int = 0; // 0x6a PushI
	AddSource(var_132_cvector, var_133_cvector, var_134_int); // 0x6b ObjFunc
	var_135_cvector = CVector(-50.0, 0.0, -50.0); // 0x6d PushVec
	var_136_cvector = CVector(0.0, 1.0, 0.0); // 0x6e PushVec
	var_137_int = 0; // 0x6f PushI
	AddSource(var_135_cvector, var_136_cvector, var_137_int); // 0x70 ObjFunc
	var_138_cvector = CVector(50.0, 0.0, -50.0); // 0x72 PushVec
	var_139_cvector = CVector(0.0, 1.0, 0.0); // 0x73 PushVec
	var_140_int = 0; // 0x74 PushI
	AddSource(var_138_cvector, var_139_cvector, var_140_int); // 0x75 ObjFunc
	var_141_cvector = CVector(25.0, 0.0, 25.0); // 0x77 PushVec
	var_142_cvector = CVector(0.0, 1.0, 0.0); // 0x78 PushVec
	var_143_int = 0; // 0x79 PushI
	AddSource(var_141_cvector, var_142_cvector, var_143_int); // 0x7a ObjFunc
	var_144_cvector = CVector(-25.0, 0.0, 25.0); // 0x7c PushVec
	var_145_cvector = CVector(0.0, 1.0, 0.0); // 0x7d PushVec
	var_146_int = 0; // 0x7e PushI
	AddSource(var_144_cvector, var_145_cvector, var_146_int); // 0x7f ObjFunc
	var_147_cvector = CVector(-25.0, 0.0, -25.0); // 0x81 PushVec
	var_148_cvector = CVector(0.0, 1.0, 0.0); // 0x82 PushVec
	var_149_int = 0; // 0x83 PushI
	AddSource(var_147_cvector, var_148_cvector, var_149_int); // 0x84 ObjFunc
	var_150_cvector = CVector(25.0, 0.0, -25.0); // 0x86 PushVec
	var_151_cvector = CVector(0.0, 1.0, 0.0); // 0x87 PushVec
	var_152_int = 0; // 0x88 PushI
	AddSource(var_150_cvector, var_151_cvector, var_152_int); // 0x89 ObjFunc
	Enable(); // 0x8b ObjFunc
	var_153_bool = 0; // 0x8d PushB
	Fade(var_153_bool); // 0x8e ObjFunc
	var_154_object = GlobalVars[5]; // 0x90 PushGE
	var_155_bool = 1; // 0x91 PushB
	Fade(var_155_bool); // 0x92 ObjFunc
	var_156_float = 12.0; // 0x94 PushF
	Sleep(var_156_float); // 0x95 Func
	Fade(); // 0x97 ObjFunc
	var_157_bool = var_15_object != 0; // 0x99 NullNeq
	if(var_157_bool == 0) goto Label_158; // 0x9a JumpB
	var_158_float = 1.0; // 0x9b PushF
	FadeOut(var_158_float); // 0x9c ObjFunc
	
Label_158:
	var_159_float = 2.0; // 0x9e PushF
	Sleep(var_159_float); // 0x9f Func
	SetDeathStateAndRemove(); // 0xa1 Func
	return 22; // 0xa3 Return
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
	var_12_object = GlobalVars[6]; // 0xb5 PushGE
	var_12_object = var_3_object; // 0xb6 Mov
	GlobalVars[6] = var_12_object; // 0xb7 PopGE
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
	var_19_object = GlobalVars[5]; // 0xc6 PushGE
	var_19_object = var_4_object; // 0xc7 Mov
	GlobalVars[5] = var_19_object; // 0xc8 PopGE
	var_20_string = "grenade"; // 0xc9 PushS
	FindGeometry(var_20_string, var_5_object); // 0xca Func
	var_21_bool = 1; // 0xcc PushB
	Enable(var_21_bool); // 0xcd ObjFunc
	Attach(var_3_object); // 0xcf Func
	
Label_209:
	Hold(); // 0xd1 Func
	goto Label_209; // 0xd3 Jump
}


func_320(var_100_float, var_101_float, var_102_float)
{
	var_105_bool = var_101_float < var_102_float; // 0x141 LT
	if(var_105_bool == 0) goto Label_325; // 0x142 JumpB
	var_100_float = var_101_float; // 0x143 Mov
	goto Label_326; // 0x144 Jump
	
Label_326:
	return 0; // 0x146 Return
	
Label_325:
	var_100_float = var_102_float; // 0x145 Mov
}


func_229(var_38_cvector)
{
	var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); // 0xe5 PushV
	GetPosition(var_40_cvector); // 0xe6 Func
	var_38_cvector = var_40_cvector; // 0xe8 Mov
	return 2; // 0xe9 Return
}


func_327(var_110_float, var_111_float, var_112_float, var_113_float)
{
	var_114_bool = var_111_float < var_112_float; // 0x148 LT
	if(var_114_bool == 0) goto Label_332; // 0x149 JumpB
	var_110_float = var_112_float; // 0x14a Mov
	return 0; // 0x14b Return
	
Label_332:
	var_115_bool = var_111_float > var_113_float; // 0x14c GT
	if(var_115_bool == 0) goto Label_336; // 0x14d JumpB
	var_110_float = var_113_float; // 0x14e Mov
	return 0; // 0x14f Return
	
Label_336:
	var_110_float = var_111_float; // 0x150 Mov
	return 0; // 0x151 Return
}


func_234(var_42_cvector)
{
	var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); // 0xea PushV
	GetPosition(var_45_cvector); // 0xeb ObjFunc
	var_42_cvector = var_45_cvector; // 0xed Mov
	return 2; // 0xee Return
}


func_239(var_77_bool, var_78_object, var_79_string)
{
	var_80_bool = 0; var_81_bool = 0; // 0xef PushV
	var_82_string = "HasProperty"; // 0xf0 PushS
	var_83_int = 2; // 0xf1 PushI
	var_84_bool = IsFuncExist(var_78_object, var_82_string, var_83_int); // 0xf2 FuncExist
	var_85_bool = var_84_bool == 0; // 0xf3 Not
	if(var_85_bool == 0) goto Label_247; // 0xf4 JumpB
	var_77_bool = 0; // 0xf5 MovB
	return 2; // 0xf6 Return
	
Label_247:
	HasProperty(var_79_string, var_81_bool); // 0xf7 ObjFunc
	var_77_bool = var_81_bool; // 0xf9 Mov
	return 2; // 0xfa Return
}


func_251(var_60_float, var_61_object, var_62_float, var_63_int)
{
	var_65_int = 0; var_66_string = ""; var_67_int = 0; var_68_float = 0; var_69_float = 0; var_70_float = 0; var_71_int = 0; var_72_string = ""; var_73_int = 0; var_74_float = 0; var_75_float = 0; var_76_float = 0; // 0xfb PushV
	var_77_bool = 0; var_78_object = Obj(); var_79_string = ""; // 0xfc PushV
	var_78_object = var_61_object; // 0xfd Mov
	var_79_string = "health"; // 0xfe MovS
	func_239(var_77_bool, var_78_object, var_79_string); // 0xff Call
	var_86_bool = var_77_bool == 0; // 0x101 Not
	if(var_86_bool == 0) goto Label_261; // 0x102 JumpB
	var_60_float = 0.0; // 0x103 MovF
	return 12; // 0x104 Return
	
Label_261:
	var_87_bool = 0; var_88_object = Obj(); var_89_string = ""; // 0x105 PushV
	var_88_object = var_61_object; // 0x106 Mov
	var_89_string = "armor"; // 0x107 MovS
	func_239(var_87_bool, var_88_object, var_89_string); // 0x108 Call
	var_90_bool = var_87_bool == 0; // 0x10a Not
	if(var_90_bool == 0) goto Label_270; // 0x10b JumpB
	var_71_int = 0; // 0x10c MovI
	goto Label_273; // 0x10d Jump
	
Label_273:
	var_91_string = "armor_"; // 0x111 PushS
	var_92_string = ""; var_93_int = 0; // 0x112 PushV
	var_93_int = var_63_int; // 0x113 Mov
	func_221(var_92_string, var_93_int); // 0x114 Call
	var_72_string = var_91_string + var_92_string; // 0x116 Add2
	var_96_bool = 0; var_97_object = Obj(); var_98_string = ""; // 0x117 PushV
	var_97_object = var_61_object; // 0x118 Mov
	var_98_string = var_72_string; // 0x119 Mov
	func_239(var_96_bool, var_97_object, var_98_string); // 0x11a Call
	var_99_bool = var_96_bool == 0; // 0x11c Not
	if(var_99_bool == 0) goto Label_288; // 0x11d JumpB
	var_73_int = 0; // 0x11e MovI
	goto Label_290; // 0x11f Jump
	
Label_290:
	var_100_float = 0; var_101_float = 0; var_102_float = 0; // 0x122 PushV
	var_103_int = var_71_int + var_73_int; // 0x123 Add
	var_104_float = 100.0; // 0x124 PushF
	var_101_float = var_103_int / var_103_int; // 0x125 Div2
	var_102_float = 1; // 0x126 MovI
	func_320(var_100_float, var_101_float, var_102_float); // 0x127 Call
	var_74_float = var_100_float; // 0x128 Mov
	var_106_string = "health"; // 0x12a PushS
	GetProperty(var_106_string, var_75_float); // 0x12b ObjFunc
	var_107_int = 1; // 0x12d PushI
	var_108_int = var_107_int - var_74_float; // 0x12e Sub
	var_76_float = var_62_float * var_108_int; // 0x12f Mult2
	var_109_string = "health"; // 0x130 PushS
	var_110_float = 0; var_111_float = 0; var_112_float = 0; var_113_float = 0; // 0x131 PushV
	var_111_float = var_75_float - var_76_float; // 0x132 Sub2
	var_112_float = 0; // 0x133 MovI
	var_113_float = 1; // 0x134 MovI
	func_327(var_110_float, var_111_float, var_112_float, var_113_float); // 0x135 Call
	SetProperty(var_109_string, var_110_float); // 0x137 ObjFunc
	var_60_float = var_76_float; // 0x139 Mov
	return 12; // 0x13a Return
	
Label_288:
	GetProperty(var_72_string, var_73_int); // 0x120 ObjFunc
	
Label_270:
	var_116_string = "armor"; // 0x10e PushS
	GetProperty(var_116_string, var_71_int); // 0x10f ObjFunc
}


func_315(var_47_float, var_48_cvector, var_49_cvector)
{
	var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); // 0x13b PushV
	var_51_cvector = var_49_cvector - var_48_cvector; // 0x13c Sub2
	var_52_int = var_51_cvector | var_51_cvector; // 0x13d Or
	var_47_float = sqrt(var_52_int); // 0x13e Sqrt2
	return 2; // 0x13f Return
}


func_221(var_92_string, var_93_int)
{
	var_94_int = 1; // 0xde PushI
	var_95_bool = var_93_int == var_94_int; // 0xdf Eq
	if(var_95_bool == 0) goto Label_227; // 0xe0 JumpB
	var_92_string = "fire"; // 0xe1 MovS
	return 0; // 0xe2 Return
	
Label_227:
	var_92_string = "phys"; // 0xe3 MovS
	return 0; // 0xe4 Return
}


