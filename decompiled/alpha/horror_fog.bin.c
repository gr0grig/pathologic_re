task_2_event_7(var_0_bool, var_1_object, var_2_int)
{
	var_3_int = 0; // 0x77 PushV
	var_3_int = var_2_int; // 0x78 Mov
	func_230(var_1_object, var_2_int, var_3_int); // 0x79 Call
	var_44_int = 0; // 0x7b PushV
	var_44_int = var_2_int; // 0x7c Mov
	func_474(); // 0x7d Call
	return 0; // 0x7f Return
}


task_2_event_10(var_0_bool, var_1_object, var_2_object)
{
	RequestClearPath(var_2_object); // 0xf9 Func
	return 0; // 0xfb Return
}


task_2_event_41(var_0_bool, var_1_object, var_2_object)
{
	func_252(var_2_object); // 0x105 Call
	var_4_object = Obj(); // 0x107 PushV
	var_4_object = var_2_object; // 0x108 Mov
	func_472(); // 0x109 Call
	return 0; // 0x10b Return
}


event_41(var_0_bool, var_1_object, var_2_object)
{
	return 0; // 0x1d9 Return
}


event_7(var_0_bool, var_1_object, var_2_int)
{
	var_3_int = 10; // 0x1db PushI
	var_4_bool = var_2_int == var_3_int; // 0x1dc Eq
	if(var_4_bool == 0) goto Label_498; // 0x1dd JumpB
	var_5_int = 10; // 0x1de PushI
	KillTimer(var_5_int); // 0x1df Func
	var_6_bool = 0; // 0x1e1 PushB
	SetVisirVisibility(var_6_bool); // 0x1e2 Func
	var_7_int = 0; // 0x1e4 PushI
	var_8_int = 2; // 0x1e5 PushI
	FogLinear(var_7_int, var_8_int); // 0x1e6 Func
	var_9_int = 2; // 0x1e8 PushI
	Sleep(var_9_int); // 0x1e9 Func
	var_10_object = Obj(); // 0x1eb PushV
	func_451(var_10_object); // 0x1ec Call
	RemoveActor(var_10_object); // 0x1ee Func
	Hold(); // 0x1f0 Func
	
Label_498:
	return 0; // 0x1f2 Return
}


event_6(var_0_bool, var_1_object)
{
	var_2_object = Obj(); // 0x1f3 PushV
	func_451(var_2_object); // 0x1f4 Call
	RemoveActor(var_2_object); // 0x1f6 Func
	Hold(); // 0x1f8 Func
	return 0; // 0x1fa Return
}


main(var_0_bool, var_1_object)
{
	var_2_object = Obj(); var_3_object = Obj(); // 0x44 PushV
	PutOnGrid(); // 0x45 Func
	var_4_int = 1; // 0x47 PushI
	var_5_int = 1; // 0x48 PushI
	FogLinear(var_4_int, var_5_int); // 0x49 Func
	var_6_int = 10; // 0x4b PushI
	var_7_int = 20; // 0x4c PushI
	SetTimer(var_6_int, var_7_int); // 0x4d Func
	var_8_string = "player"; // 0x4f PushS
	FindActor(var_3_object, var_8_string); // 0x50 Func
	
Label_82:
	var_9_bool = 0; var_10_object = Obj(); // 0x52 PushV
	var_10_object = var_3_object; // 0x53 Mov
	TaskCall(2); // 0x54 TaskCall
	func_107(var_9_bool, var_10_object); // 0x55 Call
	TaskReturn(); // 0x56 TaskReturn
	var_96_bool = var_11_bool == 0; // 0x58 Not
	if(var_96_bool == 0) goto Label_94; // 0x59 JumpB
	var_97_float = 0.5; // 0x5a PushF
	Sleep(var_97_float); // 0x5b Func
	goto Label_82; // 0x5d Jump
	
Label_94:
	var_98_object = Obj(); // 0x5e PushV
	var_98_object = var_3_object; // 0x5f Mov
	TaskCall(0); // 0x60 TaskCall
	func_0(var_98_object); // 0x61 Call
	TaskReturn(); // 0x62 TaskReturn
	var_188_object = Obj(); // 0x64 PushV
	func_451(var_188_object); // 0x65 Call
	RemoveActor(var_188_object); // 0x67 Func
	return 2; // 0x69 Return
}


func_0(var_98_object)
{
	var_99_float = 0; var_100_cvector = CVector(0,0,0); var_101_cvector = CVector(0,0,0); var_102_float = 0; var_103_float = 0; var_104_cvector = CVector(0,0,0); var_105_cvector = CVector(0,0,0); var_106_float = 0; // 0x0 PushV
	var_107_int = 1; // 0x1 PushI
	var_108_int = 1; // 0x2 PushI
	FogLinear(var_107_int, var_108_int); // 0x3 Func
	GetHeight(var_103_float); // 0x5 Func
	var_104_cvector = CVector(0.0, 0.0, 0.0); // 0x7 MovV
	var_109_float = GetByIndex(var_104_cvector, 1); // 0x8 PushE
	var_109_float = var_103_float; // 0x9 Mov
	SetByIndex(var_104_cvector, 1) = var_109_float; // 0xa PopE
	var_110_string = "breath"; // 0xb PushS
	PlayGlobalSound(var_110_string, var_104_cvector); // 0xc Func
	GetPFPosition(var_105_cvector); // 0xe ObjFunc
	var_111_int = 500; // 0x10 PushI
	MovePoint(var_105_cvector, var_111_int); // 0x11 Func
	var_112_bool = 0; var_113_object = Obj(); // 0x13 PushV
	var_113_object = var_98_object; // 0x14 Mov
	func_427(var_112_bool, var_113_object); // 0x15 Call
	if(var_112_bool == 0) goto Label_52; // 0x17 JumpB
	var_114_float = 0; var_115_cvector = CVector(0,0,0); var_116_cvector = CVector(0,0,0); // 0x18 PushV
	var_117_cvector = CVector(0,0,0); // 0x19 PushV
	func_279(var_117_cvector); // 0x1a Call
	var_115_cvector = var_117_cvector; // 0x1b Mov
	var_120_cvector = CVector(0,0,0); var_121_object = Obj(); // 0x1d PushV
	var_121_object = var_98_object; // 0x1e Mov
	func_284(var_121_object); // 0x1f Call
	var_116_cvector = var_120_cvector; // 0x20 Mov
	func_457(var_114_float, var_115_cvector, var_116_cvector); // 0x22 Call
	var_126_float = 90000.0; // 0x24 PushF
	var_127_bool = var_114_float <= var_126_float; // 0x25 LE
	if(var_127_bool == 0) goto Label_52; // 0x26 JumpB
	var_128_string = "attack"; // 0x27 PushS
	PlaySound(var_128_string); // 0x28 Func
	var_129_float = 0; var_130_object = Obj(); var_131_float = 0; // 0x2a PushV
	var_130_object = var_98_object; // 0x2b Mov
	var_131_float = 0.2; // 0x2c MovF
	func_323(var_129_float, var_130_object, var_131_float); // 0x2d Call
	var_106_float = var_129_float; // 0x2e Mov
	var_179_int = 5; // 0x30 PushI
	var_180_float = 0.2; // 0x31 PushF
	ReportHit(var_98_object, var_179_int, var_106_float, var_180_float); // 0x32 Func
	
Label_52:
	var_181_bool = 0; // 0x34 PushB
	SetVisirVisibility(var_181_bool); // 0x35 Func
	var_182_int = 0; // 0x37 PushI
	var_183_int = 2; // 0x38 PushI
	FogLinear(var_182_int, var_183_int); // 0x39 Func
	var_184_int = 5; // 0x3b PushI
	Sleep(var_184_int); // 0x3c Func
	var_185_object = Obj(); // 0x3e PushV
	func_451(var_185_object); // 0x3f Call
	RemoveActor(var_185_object); // 0x41 Func
	return 8; // 0x43 Return
}


func_128(var_0_bool, var_1_object, var_13_bool, var_14_object, var_15_float, var_16_float, var_17_bool, var_18_bool)
{
	var_19_bool = 0; var_20_bool = 0; var_21_object = Obj(); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_float = 0; var_26_object = Obj(); var_27_bool = 0; var_28_bool = 0; var_29_object = Obj(); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_float = 0; var_34_object = Obj(); // 0x80 PushV
	var_0_bool = 0; // 0x81 TMovB
	var_1_object = var_14_object; // 0x82 TMov
	var_28_bool = var_18_bool; // 0x83 Mov
	
Label_132:
	var_35_bool = 0; var_36_object = Obj(); // 0x84 PushV
	var_36_object = var_14_object; // 0x85 Mov
	func_268(var_35_bool, var_36_object); // 0x86 Call
	var_71_bool = var_35_bool == 0; // 0x88 Not
	if(var_71_bool == 0) goto Label_140; // 0x89 JumpB
	var_13_bool = 0; // 0x8a MovB
	return 16; // 0x8b Return
	
Label_140:
	GetPosition(var_30_cvector); // 0x8c ObjFunc
	GetPosition(var_31_cvector); // 0x8e Func
	var_32_cvector = var_30_cvector - var_31_cvector; // 0x90 Sub2
	var_33_float = var_32_cvector | var_32_cvector; // 0x91 Or2
	var_72_bool = 0; // 0x92 PushV
	var_72_bool = 0; // 0x93 MovB
	var_73_int = 0; // 0x94 PushI
	var_74_bool = var_16_float > var_73_int; // 0x95 GT
	if(var_74_bool == 0) goto Label_155; // 0x96 JumpB
	var_75_float = var_16_float * var_16_float; // 0x97 Mult
	var_76_bool = var_33_float > var_75_float; // 0x98 GT
	if(var_76_bool == 0) goto Label_155; // 0x99 JumpB
	var_72_bool = 1; // 0x9a MovB
	
Label_155:
	if(var_72_bool == 0) goto Label_160; // 0x9b JumpB
	Stop(); // 0x9c Func
	var_13_bool = 0; // 0x9e MovB
	return 16; // 0x9f Return
	
Label_160:
	var_77_float = var_15_float * var_15_float; // 0xa0 Mult
	var_78_bool = var_33_float > var_77_float; // 0xa1 GT
	if(var_78_bool == 0) goto Label_222; // 0xa2 JumpB
	GetPFPosition(var_30_cvector); // 0xa3 ObjFunc
	FindPathTo(var_34_object, var_30_cvector); // 0xa5 Func
	var_79_bool = var_34_object != 0; // 0xa7 NullNeq
	if(var_79_bool == 0) goto Label_171; // 0xa8 JumpB
	var_29_object = var_34_object; // 0xa9 Mov
	var_34_object = 0; // 0xaa SetNull
	
Label_171:
	var_80_bool = var_29_object != 0; // 0xab NullNeq
	if(var_80_bool == 0) goto Label_204; // 0xac JumpB
	var_81_bool = var_28_bool; // 0xad Push
	if(var_81_bool == 0) goto Label_181; // 0xae JumpB
	var_28_bool = 0; // 0xaf MovB
	RotatePath(var_29_object, var_27_bool); // 0xb0 Func
	var_82_bool = var_27_bool == 0; // 0xb2 Not
	if(var_82_bool == 0) goto Label_181; // 0xb3 JumpB
	goto Label_228; // 0xb4 Jump
	
Label_228:
	var_13_bool = !var_0_bool; // 0xe4 Not2
	return 16; // 0xe5 Return
	
Label_181:
	var_83_int = 0; // 0xb5 PushI
	var_84_float = 0.3; // 0xb6 PushF
	SetTimer(var_83_int, var_84_float); // 0xb7 Func
	var_85_string = ""; // 0xb9 PushV
	func_275(var_85_string); // 0xba Call
	var_86_string = ""; // 0xbc PushV
	func_277(var_86_string); // 0xbd Call
	FollowPath(var_29_object, var_17_bool, var_27_bool, var_85_string, var_86_string); // 0xbf Func
	var_87_bool = var_27_bool == 0; // 0xc1 Not
	if(var_87_bool == 0) goto Label_202; // 0xc2 JumpB
	var_88_bool = var_0_bool; // 0xc3 PushT
	if(var_88_bool == 0) goto Label_200; // 0xc4 JumpB
	var_29_object = 0; // 0xc5 SetNull
	goto Label_228; // 0xc6 Jump
	
Label_200:
	goto Label_227; // 0xc8 Jump
	
Label_227:
	goto Label_132; // 0xe3 Jump
	
Label_202:
	var_29_object = 0; // 0xca SetNull
	goto Label_220; // 0xcb Jump
	
Label_220:
	var_34_object = 0; // 0xdc SetNull
	goto Label_226; // 0xdd Jump
	
Label_226:
	var_29_object = 0; // 0xe2 SetNull
	
Label_204:
	var_89_int = 0; // 0xcc PushI
	KillTimer(var_89_int); // 0xcd Func
	var_90_float = 0.5; // 0xcf PushF
	Sleep(var_90_float, var_27_bool); // 0xd0 Func
	var_91_bool = var_27_bool == 0; // 0xd2 Not
	if(var_91_bool == 0) goto Label_216; // 0xd3 JumpB
	var_92_bool = var_0_bool; // 0xd4 PushT
	if(var_92_bool == 0) goto Label_216; // 0xd5 JumpB
	var_29_object = 0; // 0xd6 SetNull
	goto Label_228; // 0xd7 Jump
	
Label_216:
	var_93_int = 0; // 0xd8 PushI
	var_94_float = 0.3; // 0xd9 PushF
	SetTimer(var_93_int, var_94_float); // 0xda Func
	
Label_222:
	var_95_int = 0; // 0xde PushI
	KillTimer(var_95_int); // 0xdf Func
	goto Label_228; // 0xe1 Jump
}


func_386(var_52_bool)
{
	var_54_bool = 0; var_55_bool = 0; // 0x182 PushV
	IsDead(var_55_bool); // 0x183 ObjFunc
	var_52_bool = var_55_bool; // 0x185 Mov
	return 2; // 0x186 Return
}


func_391(var_41_bool, var_42_object)
{
	var_43_object = Obj(); var_44_object = Obj(); var_45_object = Obj(); var_46_object = Obj(); // 0x187 PushV
	var_47_bool = var_42_object == 0; // 0x188 NullEq
	if(var_47_bool == 0) goto Label_396; // 0x189 JumpB
	var_41_bool = 0; // 0x18a MovB
	return 4; // 0x18b Return
	
Label_396:
	var_48_bool = 0; // 0x18c PushV
	var_48_bool = 0; // 0x18d MovB
	var_49_string = "IsDead"; // 0x18e PushS
	var_50_int = 1; // 0x18f PushI
	var_51_bool = IsFuncExist(var_42_object, var_49_string, var_50_int); // 0x190 FuncExist
	if(var_51_bool == 0) goto Label_408; // 0x191 JumpB
	var_52_bool = 0; var_53_object = Obj(); // 0x192 PushV
	var_53_object = var_42_object; // 0x193 Mov
	func_386(var_53_object); // 0x194 Call
	if(var_52_bool == 0) goto Label_408; // 0x196 JumpB
	var_48_bool = 1; // 0x197 MovB
	
Label_408:
	if(var_48_bool == 0) goto Label_411; // 0x198 JumpB
	var_41_bool = 0; // 0x199 MovB
	return 4; // 0x19a Return
	
Label_411:
	GetScene(var_45_object); // 0x19b Func
	var_56_bool = var_45_object == 0; // 0x19d NullEq
	if(var_56_bool == 0) goto Label_417; // 0x19e JumpB
	var_41_bool = 0; // 0x19f MovB
	return 4; // 0x1a0 Return
	
Label_417:
	GetScene(var_46_object); // 0x1a1 ObjFunc
	var_57_bool = var_45_object != var_46_object; // 0x1a3 Neq
	if(var_57_bool == 0) goto Label_423; // 0x1a4 JumpB
	var_41_bool = 0; // 0x1a5 MovB
	return 4; // 0x1a6 Return
	
Label_423:
	var_41_bool = 1; // 0x1a7 MovB
	return 4; // 0x1a8 Return
}


func_268(var_35_bool, var_36_object)
{
	var_37_bool = 0; var_38_object = Obj(); // 0x10d PushV
	var_38_object = var_36_object; // 0x10e Mov
	func_427(var_37_bool, var_38_object); // 0x10f Call
	var_35_bool = var_37_bool; // 0x110 Mov
	return 0; // 0x112 Return
}


func_275(var_85_string)
{
	var_85_string = "walk"; // 0x113 MovS
	return 0; // 0x114 Return
}


func_277(var_86_string)
{
	var_86_string = "run"; // 0x115 MovS
	return 0; // 0x116 Return
}


func_279(var_117_cvector)
{
	var_118_cvector = CVector(0,0,0); var_119_cvector = CVector(0,0,0); // 0x117 PushV
	GetPosition(var_119_cvector); // 0x118 Func
	var_117_cvector = var_119_cvector; // 0x11a Mov
	return 2; // 0x11b Return
}


func_284(var_120_cvector)
{
	var_122_cvector = CVector(0,0,0); var_123_cvector = CVector(0,0,0); // 0x11c PushV
	GetPosition(var_123_cvector); // 0x11d ObjFunc
	var_120_cvector = var_123_cvector; // 0x11f Mov
	return 2; // 0x120 Return
}


func_289(var_59_bool, var_60_object, var_61_string)
{
	var_62_bool = 0; var_63_bool = 0; // 0x121 PushV
	var_64_string = "HasProperty"; // 0x122 PushS
	var_65_int = 2; // 0x123 PushI
	var_66_bool = IsFuncExist(var_60_object, var_64_string, var_65_int); // 0x124 FuncExist
	var_67_bool = var_66_bool == 0; // 0x125 Not
	if(var_67_bool == 0) goto Label_297; // 0x126 JumpB
	var_59_bool = 0; // 0x127 MovB
	return 2; // 0x128 Return
	
Label_297:
	HasProperty(var_61_string, var_63_bool); // 0x129 ObjFunc
	var_59_bool = var_63_bool; // 0x12b Mov
	return 2; // 0x12c Return
}


func_427(var_37_bool, var_38_object)
{
	var_39_int = 0; var_40_int = 0; // 0x1ab PushV
	var_41_bool = 0; var_42_object = Obj(); // 0x1ac PushV
	var_42_object = var_38_object; // 0x1ad Mov
	func_391(var_41_bool, var_42_object); // 0x1ae Call
	var_58_bool = var_41_bool == 0; // 0x1b0 Not
	if(var_58_bool == 0) goto Label_436; // 0x1b1 JumpB
	var_37_bool = 0; // 0x1b2 MovB
	return 2; // 0x1b3 Return
	
Label_436:
	var_59_bool = 0; var_60_object = Obj(); var_61_string = ""; // 0x1b4 PushV
	var_60_object = var_38_object; // 0x1b5 Mov
	var_61_string = "noaccess"; // 0x1b6 MovS
	func_289(var_59_bool, var_60_object, var_61_string); // 0x1b7 Call
	var_68_bool = var_59_bool == 0; // 0x1b9 Not
	if(var_68_bool == 0) goto Label_445; // 0x1ba JumpB
	var_37_bool = 1; // 0x1bb MovB
	return 2; // 0x1bc Return
	
Label_445:
	var_69_string = "noaccess"; // 0x1bd PushS
	GetProperty(var_69_string, var_40_int); // 0x1be ObjFunc
	var_70_int = 0; // 0x1c0 PushI
	var_37_bool = var_40_int == var_70_int; // 0x1c1 Eq2
	return 2; // 0x1c2 Return
}


func_301(var_159_bool, var_160_object, var_161_string, var_162_float, var_163_float, var_164_float)
{
	var_165_float = 0; var_166_float = 0; // 0x12d PushV
	var_167_bool = 0; var_168_object = Obj(); var_169_string = ""; // 0x12e PushV
	var_168_object = var_160_object; // 0x12f Mov
	var_169_string = var_161_string; // 0x130 Mov
	func_289(var_167_bool, var_168_object, var_169_string); // 0x131 Call
	var_170_bool = var_167_bool == 0; // 0x133 Not
	if(var_170_bool == 0) goto Label_311; // 0x134 JumpB
	var_159_bool = 0; // 0x135 MovB
	return 2; // 0x136 Return
	
Label_311:
	GetProperty(var_161_string, var_166_float); // 0x137 ObjFunc
	var_171_float = 0; var_172_float = 0; var_173_float = 0; var_174_float = 0; // 0x139 PushV
	var_172_float = var_166_float + var_162_float; // 0x13a Add2
	var_173_float = var_163_float; // 0x13b Mov
	var_174_float = var_164_float; // 0x13c Mov
	func_461(var_171_float, var_172_float, var_173_float, var_174_float); // 0x13d Call
	SetProperty(var_161_string, var_171_float); // 0x13f ObjFunc
	var_159_bool = 1; // 0x141 MovB
	return 2; // 0x142 Return
}


func_323(var_129_float, var_130_object, var_131_float)
{
	var_132_int = 0; var_133_float = 0; var_134_float = 0; var_135_int = 0; var_136_float = 0; var_137_float = 0; // 0x143 PushV
	var_138_bool = 0; var_139_object = Obj(); var_140_string = ""; // 0x144 PushV
	var_139_object = var_130_object; // 0x145 Mov
	var_140_string = "disease"; // 0x146 MovS
	func_289(var_138_bool, var_139_object, var_140_string); // 0x147 Call
	var_141_bool = var_138_bool == 0; // 0x149 Not
	if(var_141_bool == 0) goto Label_333; // 0x14a JumpB
	var_129_float = 0; // 0x14b MovI
	return 6; // 0x14c Return
	
Label_333:
	var_142_bool = 0; var_143_object = Obj(); var_144_string = ""; // 0x14d PushV
	var_143_object = var_130_object; // 0x14e Mov
	var_144_string = "armor_disease"; // 0x14f MovS
	func_289(var_142_bool, var_143_object, var_144_string); // 0x150 Call
	if(var_142_bool == 0) goto Label_353; // 0x152 JumpB
	var_145_string = "armor_disease"; // 0x153 PushS
	GetProperty(var_145_string, var_135_int); // 0x154 ObjFunc
	var_146_int = 100; // 0x156 PushI
	var_147_bool = var_135_int < var_146_int; // 0x157 LT
	if(var_147_bool == 0) goto Label_351; // 0x158 JumpB
	var_148_int = 1; // 0x159 PushI
	var_149_float = 100.0; // 0x15a PushF
	var_150_float = var_135_int / var_149_float; // 0x15b Div
	var_151_int = var_148_int - var_150_float; // 0x15c Sub
	var_131_float = var_131_float * var_151_int; // 0x15d Mult2
	goto Label_353; // 0x15e Jump
	
Label_353:
	var_152_bool = 0; var_153_object = Obj(); var_154_string = ""; // 0x161 PushV
	var_153_object = var_130_object; // 0x162 Mov
	var_154_string = "immunity"; // 0x163 MovS
	func_289(var_152_bool, var_153_object, var_154_string); // 0x164 Call
	if(var_152_bool == 0) goto Label_376; // 0x166 JumpB
	var_155_string = "immunity"; // 0x167 PushS
	GetProperty(var_155_string, var_137_float); // 0x168 ObjFunc
	var_156_bool = var_137_float < var_131_float; // 0x16a LT
	if(var_156_bool == 0) goto Label_370; // 0x16b JumpB
	var_157_string = "immunity"; // 0x16c PushS
	var_158_int = 0; // 0x16d PushI
	SetProperty(var_157_string, var_158_int); // 0x16e ObjFunc
	var_136_float = var_131_float - var_137_float; // 0x170 Sub2
	goto Label_376; // 0x171 Jump
	
Label_376:
	var_159_bool = 0; var_160_object = Obj(); var_161_string = ""; var_162_float = 0; var_163_float = 0; var_164_float = 0; // 0x178 PushV
	var_160_object = var_130_object; // 0x179 Mov
	var_161_string = "disease"; // 0x17a MovS
	var_162_float = var_136_float; // 0x17b Mov
	var_163_float = 0; // 0x17c MovI
	var_164_float = 1; // 0x17d MovI
	func_301(var_159_bool, var_160_object, var_161_string, var_162_float, var_163_float, var_164_float); // 0x17e Call
	var_129_float = var_131_float; // 0x180 Mov
	return 6; // 0x181 Return
	
Label_370:
	var_177_string = "immunity"; // 0x172 PushS
	var_178_int = var_137_float - var_131_float; // 0x173 Sub
	SetProperty(var_177_string, var_178_int); // 0x174 ObjFunc
	var_129_float = var_131_float; // 0x176 Mov
	return 6; // 0x177 Return
	
Label_351:
	var_129_float = 0; // 0x15f MovI
	return 6; // 0x160 Return
}


func_451(var_185_object)
{
	var_186_object = Obj(); var_187_object = Obj(); // 0x1c3 PushV
	self(var_187_object); // 0x1c4 Func
	var_185_object = var_187_object; // 0x1c6 Mov
	return 2; // 0x1c7 Return
}


func_457(var_114_float, var_115_cvector, var_116_cvector)
{
	var_124_cvector = CVector(0,0,0); var_125_cvector = CVector(0,0,0); // 0x1c9 PushV
	var_125_cvector = var_116_cvector - var_115_cvector; // 0x1ca Sub2
	var_114_float = var_125_cvector | var_125_cvector; // 0x1cb Or2
	return 2; // 0x1cc Return
}


func_461(var_171_float, var_172_float, var_173_float, var_174_float)
{
	var_175_bool = var_172_float < var_173_float; // 0x1ce LT
	if(var_175_bool == 0) goto Label_466; // 0x1cf JumpB
	var_171_float = var_173_float; // 0x1d0 Mov
	return 0; // 0x1d1 Return
	
Label_466:
	var_176_bool = var_172_float > var_174_float; // 0x1d2 GT
	if(var_176_bool == 0) goto Label_470; // 0x1d3 JumpB
	var_171_float = var_174_float; // 0x1d4 Mov
	return 0; // 0x1d5 Return
	
Label_470:
	var_171_float = var_172_float; // 0x1d6 Mov
	return 0; // 0x1d7 Return
}


func_230(var_0_bool, var_1_object, var_3_int)
{
	var_4_int = 0; // 0xe7 PushI
	var_5_bool = var_3_int != var_4_int; // 0xe8 Neq
	if(var_5_bool == 0) goto Label_235; // 0xe9 JumpB
	return 0; // 0xea Return
	
Label_235:
	var_6_bool = 0; var_7_object = Obj(); // 0xeb PushV
	var_7_object = var_1_object; // 0xec MovT
	func_268(var_6_bool, var_7_object); // 0xed Call
	var_42_bool = var_6_bool == 0; // 0xef Not
	if(var_42_bool == 0) goto Label_242; // 0xf0 JumpB
	var_0_bool = 1; // 0xf1 TMovB
	
Label_242:
	var_43_int = 0; // 0xf2 PushI
	KillTimer(var_43_int); // 0xf3 Func
	Stop(); // 0xf5 Func
	return 0; // 0xf7 Return
}


func_107(var_9_bool, var_10_object)
{
	var_13_bool = 0; var_14_object = Obj(); var_15_float = 0; var_16_float = 0; var_17_bool = 0; var_18_bool = 0; // 0x6c PushV
	var_14_object = var_10_object; // 0x6d Mov
	var_15_float = 150; // 0x6e MovI
	var_16_float = 0; // 0x6f MovI
	var_17_bool = 0; // 0x70 MovB
	var_18_bool = 0; // 0x71 MovB
	func_128(var_9_bool, var_10_object, var_13_bool, var_14_object, var_15_float, var_16_float, var_17_bool, var_18_bool); // 0x72 Call
	var_9_bool = var_13_bool; // 0x73 Mov
	return 0; // 0x75 Return
}


func_252(var_0_bool)
{
	var_0_bool = 1; // 0xfc TMovB
	var_3_int = 0; // 0xfd PushI
	KillTimer(var_3_int); // 0xfe Func
	Stop(); // 0x100 Func
	return 0; // 0x102 Return
}


