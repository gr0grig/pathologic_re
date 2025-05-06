task_0_event_5(var_0_int)
{
	StopGroup0(); // 0x3 Func
	return 0; // 0x5 Return
}


task_1_event_6(var_0_int)
{
	TaskCall(0); // 0x52 TaskCall
	func_0(); // 0x53 Call
	TaskReturn(); // 0x54 TaskReturn
	var_1_float = 0; // 0x56 PushV
	TaskCall(2); // 0x57 TaskCall
	func_92(var_1_float); // 0x58 Call
	TaskReturn(); // 0x59 TaskReturn
	return 0; // 0x5b Return
}


task_2_event_6(var_0_int)
{
	TaskCall(0); // 0xcd TaskCall
	func_0(); // 0xce Call
	TaskReturn(); // 0xcf TaskReturn
	return 0; // 0xd1 Return
}


main(var_0_int)
{
	var_1_float = 0; var_2_float = 0; var_3_int = 0; var_4_float = 0; var_5_float = 0; var_6_float = 0; var_7_int = 0; var_8_float = 0; // 0x6 PushV
	var_9_int = GlobalVars[4]; // 0x7 PushGE
	var_10_int = 0; // 0x8 PushI
	var_11_bool = var_9_int <= var_10_int; // 0x9 LE
	if(var_11_bool == 0) goto Label_12; // 0xa JumpB
	return 8; // 0xb Return
	
Label_12:
	var_12_bool = 0; // 0xc PushV
	func_241(var_12_bool); // 0xd Call
	var_15_bool = var_12_bool == 0; // 0xf Not
	if(var_15_bool == 0) goto Label_22; // 0x10 JumpB
	TaskCall(0); // 0x12 TaskCall
	func_0(); // 0x13 Call
	TaskReturn(); // 0x14 TaskReturn
	
Label_22:
	var_0_int = 0; // 0x16 TMovI
	
Label_23:
	var_16_float = 0; // 0x17 PushV
	TaskCall(2); // 0x18 TaskCall
	func_92(var_16_float); // 0x19 Call
	TaskReturn(); // 0x1a TaskReturn
	var_5_float = var_16_float; // 0x1b Mov
	var_132_float = GlobalVars[0]; // 0x1d PushGE
	var_133_int = 0; // 0x1e PushI
	var_134_bool = var_132_float == var_133_int; // 0x1f Eq
	if(var_134_bool == 0) goto Label_35; // 0x20 JumpB
	var_6_float = 1.0; // 0x21 MovF
	goto Label_44; // 0x22 Jump
	
Label_44:
	var_7_int = 0; // 0x2c MovI
	var_135_int = GlobalVars[4]; // 0x2d PushGE
	var_136_int = 1; // 0x2e PushI
	var_137_bool = var_135_int > var_136_int; // 0x2f GT
	if(var_137_bool == 0) goto Label_60; // 0x30 JumpB
	var_138_int = GlobalVars[4]; // 0x31 PushGE
	var_139_int = 1; // 0x32 PushI
	var_140_int = var_138_int - var_139_int; // 0x33 Sub
	irand(var_7_int, var_140_int); // 0x34 Func
	var_141_int = var_0_int + var_7_int; // 0x36 Add
	var_142_int = 1; // 0x37 PushI
	var_143_int = var_141_int + var_142_int; // 0x38 Add
	var_144_int = GlobalVars[4]; // 0x39 PushGE
	var_7_int = var_143_int % var_144_int; // 0x3a Mod2
	var_0_int = var_7_int; // 0x3b TMov
	
Label_60:
	var_145_string = ""; var_146_int = 0; // 0x3c PushV
	var_146_int = var_7_int; // 0x3d Mov
	func_292(var_145_string, var_146_int); // 0x3e Call
	WaitForSoundToLoad(var_145_string); // 0x40 Func
	var_157_string = ""; var_158_int = 0; // 0x42 PushV
	var_158_int = var_7_int; // 0x43 Mov
	func_292(var_157_string, var_158_int); // 0x44 Call
	var_159_bool = 0; // 0x46 PushB
	PlaySound(var_157_string, var_159_bool, var_6_float); // 0x47 Func
	var_160_float = GlobalVars[2]; // 0x49 PushGE
	var_161_float = GlobalVars[3]; // 0x4a PushGE
	rand(var_8_float, var_160_float, var_161_float); // 0x4b Func
	Sleep(var_8_float); // 0x4d Func
	goto Label_23; // 0x4f Jump
	
Label_35:
	var_162_float = 1.0; // 0x23 PushF
	var_163_int = 1; // 0x24 PushI
	var_164_float = var_5_float * var_5_float; // 0x25 Mult
	var_165_float = GlobalVars[0]; // 0x26 PushGE
	var_166_float = var_164_float / var_165_float; // 0x27 Div
	var_167_float = GlobalVars[0]; // 0x28 PushGE
	var_168_float = var_166_float / var_167_float; // 0x29 Div
	var_169_int = var_163_int + var_168_float; // 0x2a Add
	var_6_float = var_162_float / var_162_float; // 0x2b Div2
}


func_0()
{
	Hold(); // 0x0 Func
	return 0; // 0x2 Return
}


func_292(var_145_string, var_146_int)
{
	var_147_int = 1; // 0x125 PushI
	var_148_int = var_146_int + var_147_int; // 0x126 Add
	var_149_int = 10; // 0x127 PushI
	var_150_bool = var_148_int < var_149_int; // 0x128 LT
	if(var_150_bool == 0) goto Label_303; // 0x129 JumpB
	var_151_string = "sound0"; // 0x12a PushS
	var_152_int = 1; // 0x12b PushI
	var_153_int = var_146_int + var_152_int; // 0x12c Add
	var_145_string = var_151_string + var_153_int; // 0x12d Add2
	return 0; // 0x12e Return
	
Label_303:
	var_154_string = "sound"; // 0x12f PushS
	var_155_int = 1; // 0x130 PushI
	var_156_int = var_146_int + var_155_int; // 0x131 Add
	var_145_string = var_154_string + var_156_int; // 0x132 Add2
	return 0; // 0x133 Return
}


func_260(var_37_bool, var_38_int)
{
	var_39_int = 0; var_40_int = 0; // 0x104 PushV
	var_41_string = ""; var_42_int = 0; // 0x105 PushV
	var_42_int = var_38_int; // 0x106 Mov
	func_254(var_41_string, var_42_int); // 0x107 Call
	GetVariable(var_41_string, var_40_int); // 0x109 Func
	var_46_int = 3; // 0x10b PushI
	var_47_int = var_40_int & var_46_int; // 0x10c And
	var_48_int = 0; // 0x10d PushI
	var_49_bool = var_47_int == var_48_int; // 0x10e Eq
	if(var_49_bool == 0) goto Label_274; // 0x10f JumpB
	var_37_bool = 1; // 0x110 MovB
	return 2; // 0x111 Return
	
Label_274:
	var_37_bool = 0; // 0x112 MovB
	return 2; // 0x113 Return
}


func_327(var_99_bool)
{
	var_100_int = 0; var_101_int = 0; // 0x147 PushV
	var_102_int = 0; // 0x148 PushV
	func_246(var_102_int); // 0x149 Call
	var_101_int = var_102_int; // 0x14a Mov
	var_103_bool = 0; // 0x14c PushV
	var_103_bool = 0; // 0x14d MovB
	var_104_int = 9; // 0x14e PushI
	var_105_bool = var_101_int > var_104_int; // 0x14f GT
	if(var_105_bool == 0) goto Label_341; // 0x150 JumpB
	var_106_int = 20; // 0x151 PushI
	var_107_bool = var_101_int < var_106_int; // 0x152 LT
	if(var_107_bool == 0) goto Label_341; // 0x153 JumpB
	var_103_bool = 1; // 0x154 MovB
	
Label_341:
	if(var_103_bool == 0) goto Label_344; // 0x155 JumpB
	var_99_bool = 1; // 0x156 MovB
	return 2; // 0x157 Return
	
Label_344:
	var_99_bool = 0; // 0x158 MovB
	return 2; // 0x159 Return
}


func_234(var_23_object)
{
	var_24_object = Obj(); var_25_object = Obj(); // 0xea PushV
	var_26_string = "player"; // 0xeb PushS
	FindActor(var_25_object, var_26_string); // 0xec Func
	var_23_object = var_25_object; // 0xee Mov
	return 2; // 0xef Return
}


func_365(var_84_bool)
{
	var_85_int = 0; var_86_int = 0; // 0x16d PushV
	var_87_int = 0; // 0x16e PushV
	func_246(var_87_int); // 0x16f Call
	var_86_int = var_87_int; // 0x170 Mov
	var_92_bool = 0; // 0x172 PushV
	var_92_bool = 1; // 0x173 MovB
	var_93_int = 0; // 0x174 PushI
	var_94_bool = var_86_int >= var_93_int; // 0x175 GE
	if(var_94_bool == 0) goto Label_379; // 0x176 JumpB
	var_95_int = 7; // 0x177 PushI
	var_96_bool = var_86_int < var_95_int; // 0x178 LT
	if(var_96_bool == 0) goto Label_379; // 0x179 JumpB
	var_92_bool = 0; // 0x17a MovB
	
Label_379:
	if(var_92_bool == 0) goto Label_382; // 0x17b JumpB
	var_84_bool = 1; // 0x17c MovB
	return 2; // 0x17d Return
	
Label_382:
	var_84_bool = 0; // 0x17e MovB
	return 2; // 0x17f Return
}


func_241(var_12_bool)
{
	var_13_bool = 0; var_14_bool = 0; // 0xf1 PushV
	IsLoaded(var_14_bool); // 0xf2 Func
	var_12_bool = var_14_bool; // 0xf4 Mov
	return 2; // 0xf5 Return
}


func_210(var_34_cvector)
{
	var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); // 0xd2 PushV
	GetPosition(var_36_cvector); // 0xd3 Func
	var_34_cvector = var_36_cvector; // 0xd5 Mov
	return 2; // 0xd6 Return
}


func_276(var_54_bool, var_55_int)
{
	var_56_int = 0; var_57_int = 0; // 0x114 PushV
	var_58_string = ""; var_59_int = 0; // 0x115 PushV
	var_59_int = var_55_int; // 0x116 Mov
	func_254(var_58_string, var_59_int); // 0x117 Call
	GetVariable(var_58_string, var_57_int); // 0x119 Func
	var_60_int = 3; // 0x11b PushI
	var_61_int = var_57_int & var_60_int; // 0x11c And
	var_62_int = 1; // 0x11d PushI
	var_63_bool = var_61_int == var_62_int; // 0x11e Eq
	if(var_63_bool == 0) goto Label_290; // 0x11f JumpB
	var_54_bool = 1; // 0x120 MovB
	return 2; // 0x121 Return
	
Label_290:
	var_54_bool = 0; // 0x122 MovB
	return 2; // 0x123 Return
}


func_308(var_121_bool)
{
	var_122_int = 0; var_123_int = 0; // 0x134 PushV
	var_124_int = 0; // 0x135 PushV
	func_246(var_124_int); // 0x136 Call
	var_123_int = var_124_int; // 0x137 Mov
	var_125_bool = 0; // 0x139 PushV
	var_125_bool = 0; // 0x13a MovB
	var_126_int = 7; // 0x13b PushI
	var_127_bool = var_123_int >= var_126_int; // 0x13c GE
	if(var_127_bool == 0) goto Label_322; // 0x13d JumpB
	var_128_int = 10; // 0x13e PushI
	var_129_bool = var_123_int < var_128_int; // 0x13f LT
	if(var_129_bool == 0) goto Label_322; // 0x140 JumpB
	var_125_bool = 1; // 0x141 MovB
	
Label_322:
	if(var_125_bool == 0) goto Label_325; // 0x142 JumpB
	var_121_bool = 1; // 0x143 MovB
	return 2; // 0x144 Return
	
Label_325:
	var_121_bool = 0; // 0x145 MovB
	return 2; // 0x146 Return
}


func_246(var_87_int)
{
	var_88_float = 0; var_89_float = 0; // 0xf6 PushV
	GetGameTime(var_89_float); // 0xf7 Func
	var_90_int = 0; // 0xf9 PushV
	var_90_int = var_89_float; // 0xfa Mov
	var_91_int = 24; // 0xfb PushI
	var_87_int = var_90_int % var_91_int; // 0xfc Mod2
	return 2; // 0xfd Return
}


func_215(var_68_float)
{
	var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); // 0xd7 PushV
	GetPosition(var_73_cvector); // 0xd8 Func
	GetPosition(var_74_cvector); // 0xda ObjFunc
	var_75_cvector = var_74_cvector - var_73_cvector; // 0xdc Sub2
	var_68_float = var_75_cvector | var_75_cvector; // 0xdd Or2
	return 6; // 0xde Return
}


func_346(var_110_bool)
{
	var_111_int = 0; var_112_int = 0; // 0x15a PushV
	var_113_int = 0; // 0x15b PushV
	func_246(var_113_int); // 0x15c Call
	var_112_int = var_113_int; // 0x15d Mov
	var_114_bool = 0; // 0x15f PushV
	var_114_bool = 0; // 0x160 MovB
	var_115_int = 20; // 0x161 PushI
	var_116_bool = var_112_int >= var_115_int; // 0x162 GE
	if(var_116_bool == 0) goto Label_360; // 0x163 JumpB
	var_117_int = 23; // 0x164 PushI
	var_118_bool = var_112_int <= var_117_int; // 0x165 LE
	if(var_118_bool == 0) goto Label_360; // 0x166 JumpB
	var_114_bool = 1; // 0x167 MovB
	
Label_360:
	if(var_114_bool == 0) goto Label_363; // 0x168 JumpB
	var_110_bool = 1; // 0x169 MovB
	return 2; // 0x16a Return
	
Label_363:
	var_110_bool = 0; // 0x16b MovB
	return 2; // 0x16c Return
}


func_92(var_16_float)
{
	var_17_object = Obj(); var_18_int = 0; var_19_float = 0; var_20_object = Obj(); var_21_int = 0; var_22_float = 0; // 0x5c PushV
	
Label_93:
	var_23_object = Obj(); // 0x5d PushV
	func_234(var_23_object); // 0x5e Call
	var_20_object = var_23_object; // 0x5f Mov
	var_27_bool = var_20_object == 0; // 0x61 NullEq
	if(var_27_bool == 0) goto Label_103; // 0x62 JumpB
	var_28_int = 10; // 0x63 PushI
	Sleep(var_28_int); // 0x64 Func
	goto Label_201; // 0x66 Jump
	
Label_201:
	goto Label_93; // 0xc9 Jump
	
Label_103:
	var_29_int = 0; // 0x67 PushV
	func_223(var_29_int); // 0x68 Call
	var_21_int = var_29_int; // 0x69 Mov
	var_37_bool = 0; var_38_int = 0; // 0x6b PushV
	var_38_int = var_21_int; // 0x6c Mov
	func_260(var_37_bool, var_38_int); // 0x6d Call
	if(var_37_bool == 0) goto Label_120; // 0x6f JumpB
	var_50_int = GlobalVars[10]; // 0x70 PushGE
	var_51_int = 0; // 0x71 PushI
	var_52_bool = var_50_int == var_51_int; // 0x72 Eq
	if(var_52_bool == 0) goto Label_120; // 0x73 JumpB
	var_53_int = 10; // 0x74 PushI
	Sleep(var_53_int); // 0x75 Func
	goto Label_201; // 0x77 Jump
	
Label_120:
	var_54_bool = 0; var_55_int = 0; // 0x78 PushV
	var_55_int = var_21_int; // 0x79 Mov
	func_276(var_54_bool, var_55_int); // 0x7a Call
	if(var_54_bool == 0) goto Label_133; // 0x7c JumpB
	var_64_int = GlobalVars[9]; // 0x7d PushGE
	var_65_int = 0; // 0x7e PushI
	var_66_bool = var_64_int == var_65_int; // 0x7f Eq
	if(var_66_bool == 0) goto Label_133; // 0x80 JumpB
	var_67_int = 10; // 0x81 PushI
	Sleep(var_67_int); // 0x82 Func
	goto Label_201; // 0x84 Jump
	
Label_133:
	var_68_float = 0; var_69_object = Obj(); // 0x85 PushV
	var_69_object = var_20_object; // 0x86 Mov
	func_215(var_69_object); // 0x87 Call
	var_22_float = var_68_float; // 0x88 Mov
	var_76_float = GlobalVars[1]; // 0x8a PushGE
	var_77_float = GlobalVars[1]; // 0x8b PushGE
	var_78_float = var_76_float * var_77_float; // 0x8c Mult
	var_79_bool = var_22_float < var_78_float; // 0x8d LT
	if(var_79_bool == 0) goto Label_197; // 0x8e JumpB
	var_80_bool = 0; // 0x8f PushV
	var_80_bool = 1; // 0x90 MovB
	var_81_bool = 0; // 0x91 PushV
	var_81_bool = 1; // 0x92 MovB
	var_82_bool = 0; // 0x93 PushV
	var_82_bool = 1; // 0x94 MovB
	var_83_bool = 0; // 0x95 PushV
	var_83_bool = 0; // 0x96 MovB
	var_84_bool = 0; // 0x97 PushV
	func_365(var_84_bool); // 0x98 Call
	if(var_84_bool == 0) goto Label_158; // 0x9a JumpB
	var_97_int = GlobalVars[5]; // 0x9b PushGE
	if(var_97_int == 0) goto Label_158; // 0x9c JumpB
	var_83_bool = 1; // 0x9d MovB
	
Label_158:
	if(var_83_bool == 0) goto Label_170; // 0x9e JumpB
	var_98_bool = 0; // 0x9f PushV
	var_98_bool = 0; // 0xa0 MovB
	var_99_bool = 0; // 0xa1 PushV
	func_327(var_99_bool); // 0xa2 Call
	if(var_99_bool == 0) goto Label_168; // 0xa4 JumpB
	var_108_int = GlobalVars[6]; // 0xa5 PushGE
	if(var_108_int == 0) goto Label_168; // 0xa6 JumpB
	var_98_bool = 1; // 0xa7 MovB
	
Label_168:
	if(var_98_bool == 0) goto Label_170; // 0xa8 JumpB
	var_82_bool = 0; // 0xa9 MovB
	
Label_170:
	if(var_82_bool == 0) goto Label_182; // 0xaa JumpB
	var_109_bool = 0; // 0xab PushV
	var_109_bool = 0; // 0xac MovB
	var_110_bool = 0; // 0xad PushV
	func_346(var_110_bool); // 0xae Call
	if(var_110_bool == 0) goto Label_180; // 0xb0 JumpB
	var_119_int = GlobalVars[7]; // 0xb1 PushGE
	if(var_119_int == 0) goto Label_180; // 0xb2 JumpB
	var_109_bool = 1; // 0xb3 MovB
	
Label_180:
	if(var_109_bool == 0) goto Label_182; // 0xb4 JumpB
	var_81_bool = 0; // 0xb5 MovB
	
Label_182:
	if(var_81_bool == 0) goto Label_194; // 0xb6 JumpB
	var_120_bool = 0; // 0xb7 PushV
	var_120_bool = 0; // 0xb8 MovB
	var_121_bool = 0; // 0xb9 PushV
	func_308(var_121_bool); // 0xba Call
	if(var_121_bool == 0) goto Label_192; // 0xbc JumpB
	var_130_int = GlobalVars[8]; // 0xbd PushGE
	if(var_130_int == 0) goto Label_192; // 0xbe JumpB
	var_120_bool = 1; // 0xbf MovB
	
Label_192:
	if(var_120_bool == 0) goto Label_194; // 0xc0 JumpB
	var_80_bool = 0; // 0xc1 MovB
	
Label_194:
	if(var_80_bool == 0) goto Label_197; // 0xc2 JumpB
	var_16_float = sqrt(var_22_float); // 0xc3 Sqrt2
	return 6; // 0xc4 Return
	
Label_197:
	var_131_int = 1; // 0xc5 PushI
	Sleep(var_131_int); // 0xc6 Func
	var_20_object = 0; // 0xc8 SetNull
}


func_254(var_41_string, var_42_int)
{
	var_43_string = "Region"; // 0xff PushS
	var_44_int = var_43_string + var_42_int; // 0x100 Add
	var_45_string = "State"; // 0x101 PushS
	var_41_string = var_44_int + var_45_string; // 0x102 Add2
	return 0; // 0x103 Return
}


func_223(var_29_int)
{
	var_30_object = Obj(); var_31_int = 0; var_32_object = Obj(); var_33_int = 0; // 0xdf PushV
	GetScene(var_32_object); // 0xe0 Func
	var_34_cvector = CVector(0,0,0); // 0xe2 PushV
	func_210(var_34_cvector); // 0xe3 Call
	GetRegionByPt(var_33_int, var_34_cvector); // 0xe5 ObjFunc
	var_29_int = var_33_int; // 0xe7 Mov
	return 4; // 0xe8 Return
}


