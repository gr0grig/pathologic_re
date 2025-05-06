task_0_event_22(var_0_object, var_1_int, var_2_float, var_3_float, var_4_float, var_5_float)
{
	var_6_int = 5; // 0x8 PushI
	var_7_bool = var_3_float != var_6_int; // 0x9 Neq
	if(var_7_bool == 0) goto Label_23; // 0xa JumpB
	var_8_object = Obj(); var_9_int = 0; var_10_float = 0; // 0xb PushV
	var_8_object = var_2_float; // 0xc Mov
	var_9_int = var_3_float; // 0xd Mov
	var_10_float = var_4_float; // 0xe Mov
	func_292(var_9_int, var_10_float); // 0xf Call
	var_99_float = 0; // 0x11 PushV
	var_99_float = var_4_float; // 0x12 Mov
	TaskCall(1); // 0x13 TaskCall
	func_24(var_100_float, var_101_float, var_99_float); // 0x14 Call
	TaskReturn(); // 0x15 TaskReturn
	
Label_23:
	return 0; // 0x17 Return
}


task_1_event_22(var_0_float, var_1_float, var_2_object, var_3_int, var_4_float, var_5_float)
{
	var_6_float = 0; var_7_float = 0; // 0x59 PushV
	var_8_object = Obj(); var_9_int = 0; var_10_float = 0; // 0x5a PushV
	var_8_object = var_2_object; // 0x5b Mov
	var_9_int = var_3_int; // 0x5c Mov
	var_10_float = var_4_float; // 0x5d Mov
	func_292(var_9_int, var_10_float); // 0x5e Call
	var_99_float = 0; var_100_float = 0; // 0x60 PushV
	var_100_float = var_4_float; // 0x61 Mov
	func_166(var_99_float, var_100_float); // 0x62 Call
	var_7_float = var_99_float; // 0x63 Mov
	var_107_bool = var_1_float < var_0_float; // 0x65 LT
	if(var_107_bool == 0) goto Label_107; // 0x66 JumpB
	var_108_bool = var_7_float > var_0_float; // 0x67 GT
	if(var_108_bool == 0) goto Label_106; // 0x68 JumpB
	var_1_float = var_7_float; // 0x69 TMov
	
Label_106:
	goto Label_110; // 0x6a Jump
	
Label_110:
	return 2; // 0x6e Return
	
Label_107:
	var_109_bool = var_7_float > var_1_float; // 0x6b GT
	if(var_109_bool == 0) goto Label_110; // 0x6c JumpB
	var_1_float = var_7_float; // 0x6d TMov
}


event_7(var_0_float, var_1_float, var_2_int)
{
	var_3_int = 0; // 0x92 PushI
	var_4_bool = var_2_int == var_3_int; // 0x93 Eq
	if(var_4_bool == 0) goto Label_155; // 0x94 JumpB
	var_5_bool = GlobalVars[0]; // 0x95 PushGE
	var_5_bool = 1; // 0x96 MovB
	GlobalVars[0] = var_5_bool; // 0x97 PopGE
	var_6_int = 0; // 0x98 PushI
	KillTimer(var_6_int); // 0x99 Func
	
Label_155:
	return 0; // 0x9b Return
}


main(var_0_float, var_1_float)
{
	var_2_bool = GlobalVars[0]; // 0x0 PushGE
	var_2_bool = 1; // 0x1 MovB
	GlobalVars[0] = var_2_bool; // 0x2 PopGE
	
Label_3:
	Hold(); // 0x3 Func
	goto Label_3; // 0x5 Jump
}


func_227(var_13_int)
{
	var_14_int = 0; // 0xe4 PushI
	var_15_bool = var_13_int == var_14_int; // 0xe5 Eq
	if(var_15_bool == 0) goto Label_240; // 0xe6 JumpB
	var_16_string = ""; // 0xe7 PushV
	var_16_string = "hit_physical1"; // 0xe8 MovS
	func_190(var_16_string); // 0xe9 Call
	var_43_string = ""; // 0xeb PushV
	var_43_string = "scream_physical1"; // 0xec MovS
	func_216(var_43_string); // 0xed Call
	goto Label_291; // 0xef Jump
	
Label_291:
	return 0; // 0x123 Return
	
Label_240:
	var_50_int = 1; // 0xf0 PushI
	var_51_bool = var_13_int == var_50_int; // 0xf1 Eq
	if(var_51_bool == 0) goto Label_252; // 0xf2 JumpB
	var_52_string = ""; // 0xf3 PushV
	var_52_string = "hit_physical2"; // 0xf4 MovS
	func_190(var_52_string); // 0xf5 Call
	var_53_string = ""; // 0xf7 PushV
	var_53_string = "scream_physical2"; // 0xf8 MovS
	func_216(var_53_string); // 0xf9 Call
	goto Label_291; // 0xfb Jump
	
Label_252:
	var_54_int = 2; // 0xfc PushI
	var_55_bool = var_13_int == var_54_int; // 0xfd Eq
	if(var_55_bool == 0) goto Label_264; // 0xfe JumpB
	var_56_string = ""; // 0xff PushV
	var_56_string = "hit_bullet"; // 0x100 MovS
	func_190(var_56_string); // 0x101 Call
	var_57_string = ""; // 0x103 PushV
	var_57_string = "scream_bullet"; // 0x104 MovS
	func_216(var_57_string); // 0x105 Call
	goto Label_291; // 0x107 Jump
	
Label_264:
	var_58_int = 3; // 0x108 PushI
	var_59_bool = var_13_int == var_58_int; // 0x109 Eq
	if(var_59_bool == 0) goto Label_276; // 0x10a JumpB
	var_60_string = ""; // 0x10b PushV
	var_60_string = "hit_oscoloc"; // 0x10c MovS
	func_190(var_60_string); // 0x10d Call
	var_61_string = ""; // 0x10f PushV
	var_61_string = "scream_oscoloc"; // 0x110 MovS
	func_216(var_61_string); // 0x111 Call
	goto Label_291; // 0x113 Jump
	
Label_276:
	var_62_int = 6; // 0x114 PushI
	var_63_bool = var_13_int == var_62_int; // 0x115 Eq
	if(var_63_bool == 0) goto Label_288; // 0x116 JumpB
	var_64_string = ""; // 0x117 PushV
	var_64_string = "hit_mental"; // 0x118 MovS
	func_190(var_64_string); // 0x119 Call
	var_65_string = ""; // 0x11b PushV
	var_65_string = "scream_mental"; // 0x11c MovS
	func_216(var_65_string); // 0x11d Call
	goto Label_291; // 0x11f Jump
	
Label_288:
	var_66_int = 4; // 0x120 PushI
	var_67_bool = var_13_int == var_66_int; // 0x121 Eq
	if(var_67_bool == 0) goto Label_291; // 0x122 JumpB
}


func_292(var_8_object, var_9_int)
{
	var_11_cvector = CVector(0,0,0); var_12_cvector = CVector(0,0,0); // 0x124 PushV
	var_13_int = 0; // 0x125 PushV
	var_13_int = var_9_int; // 0x126 Mov
	func_227(var_13_int); // 0x127 Call
	var_68_bool = 0; // 0x129 PushV
	var_68_bool = 0; // 0x12a MovB
	var_69_int = 5; // 0x12b PushI
	var_70_bool = var_9_int != var_69_int; // 0x12c Neq
	if(var_70_bool == 0) goto Label_306; // 0x12d JumpB
	var_71_int = 6; // 0x12e PushI
	var_72_bool = var_9_int != var_71_int; // 0x12f Neq
	if(var_72_bool == 0) goto Label_306; // 0x130 JumpB
	var_68_bool = 1; // 0x131 MovB
	
Label_306:
	if(var_68_bool == 0) goto Label_339; // 0x132 JumpB
	var_73_bool = 0; // 0x133 PushV
	var_73_bool = 0; // 0x134 MovB
	var_74_object = Obj(); // 0x135 PushV
	func_118(var_74_object); // 0x136 Call
	var_77_bool = var_8_object != var_74_object; // 0x138 Neq
	if(var_77_bool == 0) goto Label_319; // 0x139 JumpB
	var_78_string = "GetPosition"; // 0x13a PushS
	var_79_int = 1; // 0x13b PushI
	var_80_bool = IsFuncExist(var_8_object, var_78_string, var_79_int); // 0x13c FuncExist
	if(var_80_bool == 0) goto Label_319; // 0x13d JumpB
	var_73_bool = 1; // 0x13e MovB
	
Label_319:
	if(var_73_bool == 0) goto Label_339; // 0x13f JumpB
	GetSpeed(var_12_cvector); // 0x140 Func
	var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); // 0x142 PushV
	var_83_cvector = CVector(0,0,0); var_84_object = Obj(); // 0x143 PushV
	var_84_object = var_8_object; // 0x144 Mov
	func_111(var_84_object); // 0x145 Call
	var_82_cvector = var_83_cvector; // 0x146 Mov
	func_124(var_81_cvector, var_82_cvector); // 0x148 Call
	var_94_int = 400; // 0x14a PushI
	var_95_float = var_81_cvector * var_94_int; // 0x14b Mult
	var_12_cvector = var_12_cvector - var_95_float; // 0x14c Sub2
	var_96_int = var_12_cvector | var_12_cvector; // 0x14d Or
	var_97_int = 160000; // 0x14e PushI
	var_98_bool = var_96_int < var_97_int; // 0x14f LT
	if(var_98_bool == 0) goto Label_339; // 0x150 JumpB
	SetSpeed(var_12_cvector); // 0x151 Func
	
Label_339:
	return 2; // 0x153 Return
}


func_134(var_101_float, var_102_float, var_103_float, var_104_float)
{
	var_105_bool = var_102_float < var_103_float; // 0x87 LT
	if(var_105_bool == 0) goto Label_139; // 0x88 JumpB
	var_101_float = var_103_float; // 0x89 Mov
	return 0; // 0x8a Return
	
Label_139:
	var_106_bool = var_102_float > var_104_float; // 0x8b GT
	if(var_106_bool == 0) goto Label_143; // 0x8c JumpB
	var_101_float = var_104_float; // 0x8d Mov
	return 0; // 0x8e Return
	
Label_143:
	var_101_float = var_102_float; // 0x8f Mov
	return 0; // 0x90 Return
}


func_166(var_99_float, var_100_float)
{
	var_101_float = 0; var_102_float = 0; var_103_float = 0; var_104_float = 0; // 0xa7 PushV
	var_102_float = sqrt(var_100_float); // 0xa8 Sqrt2
	var_103_float = 0; // 0xa9 MovI
	var_104_float = 1; // 0xaa MovI
	func_134(var_101_float, var_102_float, var_103_float, var_104_float); // 0xab Call
	var_99_float = var_101_float; // 0xac Mov
	return 0; // 0xae Return
}


func_175(var_21_int, var_22_string)
{
	var_24_int = 0; var_25_bool = 0; var_26_int = 0; var_27_bool = 0; // 0xaf PushV
	var_26_int = 0; // 0xb0 MovI
	
Label_177:
	var_28_int = 1; // 0xb1 PushI
	var_29_int = var_26_int + var_28_int; // 0xb2 Add
	var_30_int = var_22_string + var_29_int; // 0xb3 Add
	IsExistingSound(var_27_bool, var_30_int); // 0xb4 Func
	var_31_bool = var_27_bool == 0; // 0xb6 Not
	if(var_31_bool == 0) goto Label_185; // 0xb7 JumpB
	goto Label_188; // 0xb8 Jump
	
Label_188:
	var_21_int = var_26_int; // 0xbc Mov
	return 4; // 0xbd Return
	
Label_185:
	var_32_int = 1; // 0xb9 PushI
	var_26_int = var_26_int + var_32_int; // 0xba Add2
	goto Label_177; // 0xbb Jump
}


func_111(var_83_cvector)
{
	var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); var_88_cvector = CVector(0,0,0); // 0x6f PushV
	GetPosition(var_87_cvector); // 0x70 Func
	GetPosition(var_88_cvector); // 0x72 ObjFunc
	var_83_cvector = var_88_cvector - var_87_cvector; // 0x74 Sub2
	return 4; // 0x75 Return
}


func_124(var_81_cvector, var_82_cvector)
{
	var_89_float = 0; var_90_float = 0; // 0x7c PushV
	var_91_int = var_82_cvector | var_82_cvector; // 0x7d Or
	var_90_float = sqrt(var_91_int); // 0x7e Sqrt2
	var_92_float = 0.0; // 0x7f PushF
	var_93_bool = var_90_float < var_92_float; // 0x80 LT
	if(var_93_bool == 0) goto Label_132; // 0x81 JumpB
	var_81_cvector = CVector(0.0, 0.0, 0.0); // 0x82 MovV
	return 2; // 0x83 Return
	
Label_132:
	var_81_cvector = var_82_cvector / var_82_cvector; // 0x84 Div2
	return 2; // 0x85 Return
}


func_340(var_128_float, var_129_float, var_130_bool)
{
	ModDarkenLevel(var_128_float); // 0x155 Func
	ModBlurLevel(var_128_float); // 0x157 Func
	var_131_bool = var_130_bool; // 0x159 Push
	if(var_131_bool == 0) goto Label_354; // 0x15a JumpB
	var_132_int = 1; // 0x15b PushI
	var_133_float = 0.1; // 0x15c PushF
	var_134_float = var_128_float * var_133_float; // 0x15d Mult
	var_135_int = var_132_int + var_134_float; // 0x15e Add
	var_136_float = var_129_float * var_135_int; // 0x15f Mult
	SetCameraFOV(var_136_float); // 0x160 Func
	
Label_354:
	return 0; // 0x162 Return
}


func_118(var_74_object)
{
	var_75_object = Obj(); var_76_object = Obj(); // 0x76 PushV
	self(var_76_object); // 0x77 Func
	var_74_object = var_76_object; // 0x79 Mov
	return 2; // 0x7a Return
}


func_24(var_0_object, var_1_int, var_99_float)
{
	var_102_float = 0; var_103_bool = 0; var_104_float = 0; var_105_float = 0; var_106_float = 0; var_107_bool = 0; var_108_float = 0; var_109_float = 0; // 0x18 PushV
	var_0_object = 0.0; // 0x19 TMovF
	var_106_float = var_99_float; // 0x1a Mov
	var_110_float = 0.2; // 0x1b PushF
	var_111_bool = var_106_float < var_110_float; // 0x1c LT
	if(var_111_bool == 0) goto Label_31; // 0x1d JumpB
	var_106_float = 0.2; // 0x1e MovF
	
Label_31:
	var_112_float = 0; var_113_float = 0; // 0x1f PushV
	var_114_float = 2.0; // 0x20 PushF
	var_113_float = var_114_float * var_106_float; // 0x21 Mult2
	func_166(var_112_float, var_113_float); // 0x22 Call
	var_1_int = var_112_float; // 0x23 TMov
	LockCameraFOV(var_107_bool); // 0x25 Func
	GetCameraCurrentFOV(var_108_float); // 0x27 Func
	
Label_41:
	sync(var_109_float); // 0x29 Func
	var_121_bool = var_1_int < var_0_object; // 0x2b LT
	if(var_121_bool == 0) goto Label_61; // 0x2c JumpB
	var_122_float = 2.0; // 0x2d PushF
	var_123_float = var_109_float * var_122_float; // 0x2e Mult
	var_124_int = 2; // 0x2f PushI
	var_125_float = var_123_float / var_124_int; // 0x30 Div
	var_0_object = var_0_object - var_125_float; // 0x31 Sub2
	var_126_int = 0; // 0x32 PushI
	var_127_bool = var_0_object <= var_126_int; // 0x33 LE
	if(var_127_bool == 0) goto Label_60; // 0x34 JumpB
	var_128_float = 0; var_129_float = 0; var_130_bool = 0; // 0x35 PushV
	var_128_float = 0; // 0x36 MovI
	var_129_float = var_108_float; // 0x37 Mov
	var_130_bool = var_107_bool; // 0x38 Mov
	func_340(var_128_float, var_129_float, var_130_bool); // 0x39 Call
	goto Label_84; // 0x3b Jump
	
Label_84:
	var_137_bool = var_107_bool; // 0x54 Push
	if(var_137_bool == 0) goto Label_88; // 0x55 JumpB
	UnlockCameraFOV(var_107_bool); // 0x56 Func
	
Label_88:
	return 8; // 0x58 Return
	
Label_60:
	goto Label_77; // 0x3c Jump
	
Label_77:
	var_138_float = 0; var_139_float = 0; var_140_bool = 0; // 0x4d PushV
	var_138_float = var_0_object; // 0x4e MovT
	var_139_float = var_108_float; // 0x4f Mov
	var_140_bool = var_107_bool; // 0x50 Mov
	func_340(var_138_float, var_139_float, var_140_bool); // 0x51 Call
	goto Label_41; // 0x53 Jump
	
Label_61:
	var_141_float = 2.0; // 0x3d PushF
	var_142_float = var_109_float * var_141_float; // 0x3e Mult
	var_0_object = var_0_object + var_142_float; // 0x3f Add2
	var_143_bool = var_0_object >= var_1_int; // 0x40 GE
	if(var_143_bool == 0) goto Label_77; // 0x41 JumpB
	var_144_bool = var_0_object == 0; // 0x42 Not
	if(var_144_bool == 0) goto Label_75; // 0x43 JumpB
	var_145_float = 0; var_146_float = 0; var_147_bool = 0; // 0x44 PushV
	var_145_float = 0; // 0x45 MovI
	var_146_float = var_108_float; // 0x46 Mov
	var_147_bool = var_107_bool; // 0x47 Mov
	func_340(var_145_float, var_146_float, var_147_bool); // 0x48 Call
	goto Label_84; // 0x4a Jump
	
Label_75:
	var_0_object = var_1_int; // 0x4b TMovT
	var_1_int = 0; // 0x4c TMovI
}


func_156()
{
	var_45_bool = GlobalVars[0]; // 0x9c PushGE
	if(var_45_bool == 0) goto Label_165; // 0x9d JumpB
	var_46_bool = GlobalVars[0]; // 0x9e PushGE
	var_46_bool = 0; // 0x9f MovB
	GlobalVars[0] = var_46_bool; // 0xa0 PopGE
	var_47_int = 0; // 0xa1 PushI
	var_48_float = 3.0; // 0xa2 PushF
	SetTimer(var_47_int, var_48_float); // 0xa3 Func
	
Label_165:
	return 0; // 0xa5 Return
}


func_190(var_16_string)
{
	var_17_int = 0; var_18_int = 0; var_19_int = 0; var_20_int = 0; // 0xbe PushV
	var_21_int = 0; var_22_string = ""; // 0xbf PushV
	var_23_string = "_"; // 0xc0 PushS
	var_22_string = var_16_string + var_23_string; // 0xc1 Add2
	func_175(var_21_int, var_22_string); // 0xc2 Call
	var_19_int = var_21_int; // 0xc3 Mov
	var_33_bool = var_19_int == 0; // 0xc5 Not
	if(var_33_bool == 0) goto Label_206; // 0xc6 JumpB
	var_34_string = "No sounds for ""; // 0xc7 PushS
	var_35_int = var_34_string + var_16_string; // 0xc8 Add
	var_36_string = """; // 0xc9 PushS
	var_37_int = var_35_int + var_36_string; // 0xca Add
	Trace(var_37_int); // 0xcb Func
	goto Label_215; // 0xcd Jump
	
Label_215:
	return 4; // 0xd7 Return
	
Label_206:
	irand(var_20_int, var_19_int); // 0xce Func
	var_38_string = "_"; // 0xd0 PushS
	var_39_int = var_16_string + var_38_string; // 0xd1 Add
	var_40_int = 1; // 0xd2 PushI
	var_41_int = var_20_int + var_40_int; // 0xd3 Add
	var_42_int = var_39_int + var_41_int; // 0xd4 Add
	PlaySound(var_42_int); // 0xd5 Func
}


func_216(var_43_string)
{
	var_44_bool = GlobalVars[0]; // 0xd9 PushGE
	if(var_44_bool == 0) goto Label_226; // 0xda JumpB
	func_156(); // 0xdc Call
	var_49_string = ""; // 0xde PushV
	var_49_string = var_43_string; // 0xdf Mov
	func_190(var_49_string); // 0xe0 Call
	
Label_226:
	return 0; // 0xe2 Return
}


