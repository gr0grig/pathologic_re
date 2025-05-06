task_2_event_7(var_0_bool, var_1_object, var_2_int)
{
	var_3_int = 0; // 0x77 PushV
	var_3_int = var_2_int; // 0x78 Mov
	func_230(var_1_object, var_2_int, var_3_int); // 0x79 NEW_2
	var_44_int = 0; // 0x7b PushV
	var_44_int = var_2_int; // 0x7c Mov
	func_495(); // 0x7d NEW_2
	return 0; // 0x7f Return
}


task_2_event_10(var_0_bool, var_1_object, var_2_object)
{
	RequestClearPath(var_2_object); // 0xf9 Func
	return 0; // 0xfb Return
}


task_2_event_41(var_0_bool, var_1_object, var_2_object)
{
	func_252(var_2_object); // 0x105 NEW_2
	var_4_object = Obj(); // 0x107 PushV
	var_4_object = var_2_object; // 0x108 Mov
	func_493(); // 0x109 NEW_2
	return 0; // 0x10b Return
}


event_41(var_0_bool, var_1_object, var_2_object)
{
	return 0; // 0x1ee Return
}


event_7(var_0_bool, var_1_object, var_2_int)
{
	var_3_int = 10; // 0x1f0 PushI
	var_4_bool = var_2_int == var_3_int; // 0x1f1 Eq
	if(var_4_bool == 0) goto Label_519; // 0x1f2 JumpB
	var_5_int = 10; // 0x1f3 PushI
	KillTimer(var_5_int); // 0x1f4 Func
	var_6_bool = 0; // 0x1f6 PushB
	SetVisirVisibility(var_6_bool); // 0x1f7 Func
	var_7_int = 0; // 0x1f9 PushI
	var_8_int = 2; // 0x1fa PushI
	FogLinear(var_7_int, var_8_int); // 0x1fb Func
	var_9_int = 2; // 0x1fd PushI
	Sleep(var_9_int); // 0x1fe Func
	var_10_object = Obj(); // 0x200 PushV
	func_462(var_10_object); // 0x201 NEW_2
	RemoveActor(var_10_object); // 0x203 Func
	Hold(); // 0x205 Func
	
Label_519:
	return 0; // 0x207 Return
}


event_6(var_0_bool, var_1_object)
{
	var_2_object = Obj(); // 0x208 PushV
	func_462(var_2_object); // 0x209 NEW_2
	RemoveActor(var_2_object); // 0x20b Func
	Hold(); // 0x20d Func
	return 0; // 0x20f Return
}


main(var_0_bool, var_1_object)
{
	var_2_object = Obj(); var_3_object = Obj(); // 0x44 PushV
	PutOnGrid(); // 0x45 Func
	var_4_int = 1; // 0x47 PushI
	var_5_int = 1; // 0x48 PushI
	FogLinear(var_4_int, var_5_int); // 0x49 Func
	var_6_int = 10; // 0x4b PushI
	var_7_int = 30; // 0x4c PushI
	SetTimer(var_6_int, var_7_int); // 0x4d Func
	var_8_string = "player"; // 0x4f PushS
	FindActor(var_3_object, var_8_string); // 0x50 Func
	
Label_82:
	var_9_bool = 0; var_10_object = Obj(); // 0x52 PushV
	var_10_object = var_3_object; // 0x53 Mov
	TaskCall(2); // 0x54 TaskCall
	func_107(var_9_bool, var_10_object); // 0x55 NEW_2
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
	func_0(var_98_object); // 0x61 NEW_2
	TaskReturn(); // 0x62 TaskReturn
	var_196_object = Obj(); // 0x64 PushV
	func_462(var_196_object); // 0x65 NEW_2
	RemoveActor(var_196_object); // 0x67 Func
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
	func_438(var_112_bool, var_113_object); // 0x15 NEW_2
	if(var_112_bool == 0) goto Label_52; // 0x17 JumpB
	var_114_float = 0; var_115_cvector = CVector(0,0,0); var_116_cvector = CVector(0,0,0); // 0x18 PushV
	var_117_cvector = CVector(0,0,0); // 0x19 PushV
	func_279(var_117_cvector); // 0x1a NEW_2
	var_115_cvector = var_117_cvector; // 0x1b Mov
	var_120_cvector = CVector(0,0,0); var_121_object = Obj(); // 0x1d PushV
	var_121_object = var_98_object; // 0x1e Mov
	func_284(var_121_object); // 0x1f NEW_2
	var_116_cvector = var_120_cvector; // 0x20 Mov
	func_468(var_114_float, var_115_cvector, var_116_cvector); // 0x22 NEW_2
	var_126_float = 90000.0; // 0x24 PushF
	var_127_bool = var_114_float <= var_126_float; // 0x25 LE
	if(var_127_bool == 0) goto Label_52; // 0x26 JumpB
	var_128_string = "attack"; // 0x27 PushS
	PlaySound(var_128_string); // 0x28 Func
	var_129_float = 0; var_130_object = Obj(); var_131_float = 0; // 0x2a PushV
	var_130_object = var_98_object; // 0x2b Mov
	var_131_float = 0.25; // 0x2c MovF
	func_328(var_129_float, var_130_object, var_131_float); // 0x2d NEW_2
	var_106_float = var_129_float; // 0x2e Mov
	var_187_int = 5; // 0x30 PushI
	var_188_float = 0.25; // 0x31 PushF
	ReportHit(var_98_object, var_187_int, var_106_float, var_188_float); // 0x32 Func
	
Label_52:
	var_189_bool = 0; // 0x34 PushB
	SetVisirVisibility(var_189_bool); // 0x35 Func
	var_190_int = 0; // 0x37 PushI
	var_191_int = 2; // 0x38 PushI
	FogLinear(var_190_int, var_191_int); // 0x39 Func
	var_192_int = 5; // 0x3b PushI
	Sleep(var_192_int); // 0x3c Func
	var_193_object = Obj(); // 0x3e PushV
	func_462(var_193_object); // 0x3f NEW_2
	RemoveActor(var_193_object); // 0x41 Func
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
	func_268(var_35_bool, var_36_object); // 0x86 NEW_2
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
	func_275(var_85_string); // 0xba NEW_2
	var_86_string = ""; // 0xbc PushV
	func_277(var_86_string); // 0xbd NEW_2
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


func_268(var_35_bool, var_36_object)
{
	var_37_bool = 0; var_38_object = Obj(); // 0x10d PushV
	var_38_object = var_36_object; // 0x10e Mov
	func_438(var_37_bool, var_38_object); // 0x10f NEW_2
	var_35_bool = var_37_bool; // 0x110 Mov
	return 0; // 0x112 Return
}


func_397(var_52_bool)
{
	var_54_bool = 0; var_55_bool = 0; // 0x18d PushV
	IsDead(var_55_bool); // 0x18e ObjFunc
	var_52_bool = var_55_bool; // 0x190 Mov
	return 2; // 0x191 Return
}


func_402(var_41_bool, var_42_object)
{
	var_43_object = Obj(); var_44_object = Obj(); var_45_object = Obj(); var_46_object = Obj(); // 0x192 PushV
	var_47_bool = var_42_object == 0; // 0x193 NullEq
	if(var_47_bool == 0) goto Label_407; // 0x194 JumpB
	var_41_bool = 0; // 0x195 MovB
	return 4; // 0x196 Return
	
Label_407:
	var_48_bool = 0; // 0x197 PushV
	var_48_bool = 0; // 0x198 MovB
	var_49_string = "IsDead"; // 0x199 PushS
	var_50_int = 1; // 0x19a PushI
	var_51_bool = IsFuncExist(var_42_object, var_49_string, var_50_int); // 0x19b FuncExist
	if(var_51_bool == 0) goto Label_419; // 0x19c JumpB
	var_52_bool = 0; var_53_object = Obj(); // 0x19d PushV
	var_53_object = var_42_object; // 0x19e Mov
	func_397(var_53_object); // 0x19f NEW_2
	if(var_52_bool == 0) goto Label_419; // 0x1a1 JumpB
	var_48_bool = 1; // 0x1a2 MovB
	
Label_419:
	if(var_48_bool == 0) goto Label_422; // 0x1a3 JumpB
	var_41_bool = 0; // 0x1a4 MovB
	return 4; // 0x1a5 Return
	
Label_422:
	GetScene(var_45_object); // 0x1a6 Func
	var_56_bool = var_45_object == 0; // 0x1a8 NullEq
	if(var_56_bool == 0) goto Label_428; // 0x1a9 JumpB
	var_41_bool = 0; // 0x1aa MovB
	return 4; // 0x1ab Return
	
Label_428:
	GetScene(var_46_object); // 0x1ac ObjFunc
	var_57_bool = var_45_object != var_46_object; // 0x1ae Neq
	if(var_57_bool == 0) goto Label_434; // 0x1af JumpB
	var_41_bool = 0; // 0x1b0 MovB
	return 4; // 0x1b1 Return
	
Label_434:
	var_41_bool = 1; // 0x1b2 MovB
	return 4; // 0x1b3 Return
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


func_289(var_179_bool, var_180_object)
{
	var_181_bool = 0; var_182_bool = 0; // 0x121 PushV
	IsPlayerActor(var_180_object, var_182_bool); // 0x122 Func
	var_179_bool = var_182_bool; // 0x124 Mov
	return 2; // 0x125 Return
}


func_294(var_59_bool, var_60_object, var_61_string)
{
	var_62_bool = 0; var_63_bool = 0; // 0x126 PushV
	var_64_string = "HasProperty"; // 0x127 PushS
	var_65_int = 2; // 0x128 PushI
	var_66_bool = IsFuncExist(var_60_object, var_64_string, var_65_int); // 0x129 FuncExist
	var_67_bool = var_66_bool == 0; // 0x12a Not
	if(var_67_bool == 0) goto Label_302; // 0x12b JumpB
	var_59_bool = 0; // 0x12c MovB
	return 2; // 0x12d Return
	
Label_302:
	HasProperty(var_61_string, var_63_bool); // 0x12e ObjFunc
	var_59_bool = var_63_bool; // 0x130 Mov
	return 2; // 0x131 Return
}


func_306(var_149_bool, var_150_object, var_151_string, var_152_float, var_153_float, var_154_float)
{
	var_155_float = 0; var_156_float = 0; // 0x132 PushV
	var_157_bool = 0; var_158_object = Obj(); var_159_string = ""; // 0x133 PushV
	var_158_object = var_150_object; // 0x134 Mov
	var_159_string = var_151_string; // 0x135 Mov
	func_294(var_157_bool, var_158_object, var_159_string); // 0x136 NEW_2
	var_160_bool = var_157_bool == 0; // 0x138 Not
	if(var_160_bool == 0) goto Label_316; // 0x139 JumpB
	var_149_bool = 0; // 0x13a MovB
	return 2; // 0x13b Return
	
Label_316:
	GetProperty(var_151_string, var_156_float); // 0x13c ObjFunc
	var_161_float = 0; var_162_float = 0; var_163_float = 0; var_164_float = 0; // 0x13e PushV
	var_162_float = var_156_float + var_152_float; // 0x13f Add2
	var_163_float = var_153_float; // 0x140 Mov
	var_164_float = var_154_float; // 0x141 Mov
	func_472(var_161_float, var_162_float, var_163_float, var_164_float); // 0x142 NEW_2
	SetProperty(var_151_string, var_161_float); // 0x144 ObjFunc
	var_149_bool = 1; // 0x146 MovB
	return 2; // 0x147 Return
}


func_438(var_37_bool, var_38_object)
{
	var_39_int = 0; var_40_int = 0; // 0x1b6 PushV
	var_41_bool = 0; var_42_object = Obj(); // 0x1b7 PushV
	var_42_object = var_38_object; // 0x1b8 Mov
	func_402(var_41_bool, var_42_object); // 0x1b9 NEW_2
	var_58_bool = var_41_bool == 0; // 0x1bb Not
	if(var_58_bool == 0) goto Label_447; // 0x1bc JumpB
	var_37_bool = 0; // 0x1bd MovB
	return 2; // 0x1be Return
	
Label_447:
	var_59_bool = 0; var_60_object = Obj(); var_61_string = ""; // 0x1bf PushV
	var_60_object = var_38_object; // 0x1c0 Mov
	var_61_string = "noaccess"; // 0x1c1 MovS
	func_294(var_59_bool, var_60_object, var_61_string); // 0x1c2 NEW_2
	var_68_bool = var_59_bool == 0; // 0x1c4 Not
	if(var_68_bool == 0) goto Label_456; // 0x1c5 JumpB
	var_37_bool = 1; // 0x1c6 MovB
	return 2; // 0x1c7 Return
	
Label_456:
	var_69_string = "noaccess"; // 0x1c8 PushS
	GetProperty(var_69_string, var_40_int); // 0x1c9 ObjFunc
	var_70_int = 0; // 0x1cb PushI
	var_37_bool = var_40_int == var_70_int; // 0x1cc Eq2
	return 2; // 0x1cd Return
}


func_328(var_129_float, var_130_object, var_131_float)
{
	var_132_float = 0; var_133_float = 0; var_134_float = 0; var_135_float = 0; // 0x148 PushV
	var_136_bool = 0; var_137_object = Obj(); var_138_string = ""; // 0x149 PushV
	var_137_object = var_130_object; // 0x14a Mov
	var_138_string = "disease"; // 0x14b MovS
	func_294(var_136_bool, var_137_object, var_138_string); // 0x14c NEW_2
	var_139_bool = var_136_bool == 0; // 0x14e Not
	if(var_139_bool == 0) goto Label_338; // 0x14f JumpB
	var_129_float = 0; // 0x150 MovI
	return 4; // 0x151 Return
	
Label_338:
	var_134_float = 0; // 0x152 MovI
	var_140_bool = 0; var_141_object = Obj(); var_142_string = ""; // 0x153 PushV
	var_141_object = var_130_object; // 0x154 Mov
	var_142_string = "armor_disease"; // 0x155 MovS
	func_294(var_140_bool, var_141_object, var_142_string); // 0x156 NEW_2
	if(var_140_bool == 0) goto Label_350; // 0x158 JumpB
	var_143_string = "armor_disease"; // 0x159 PushS
	GetProperty(var_143_string, var_134_float); // 0x15a ObjFunc
	var_144_int = 100; // 0x15c PushI
	var_134_float = var_134_float / var_134_float; // 0x15d Div2
	
Label_350:
	var_145_bool = 0; var_146_object = Obj(); var_147_string = ""; // 0x15e PushV
	var_146_object = var_130_object; // 0x15f Mov
	var_147_string = "immunity"; // 0x160 MovS
	func_294(var_145_bool, var_146_object, var_147_string); // 0x161 NEW_2
	if(var_145_bool == 0) goto Label_368; // 0x163 JumpB
	var_148_string = "immunity"; // 0x164 PushS
	GetProperty(var_148_string, var_135_float); // 0x165 ObjFunc
	var_134_float = var_134_float + var_135_float; // 0x167 Add2
	var_149_bool = 0; var_150_object = Obj(); var_151_string = ""; var_152_float = 0; var_153_float = 0; var_154_float = 0; // 0x168 PushV
	var_150_object = var_130_object; // 0x169 Mov
	var_151_string = "immunity"; // 0x16a MovS
	var_152_float = -var_131_float; // 0x16b Neg2
	var_153_float = 0; // 0x16c MovI
	var_154_float = 1; // 0x16d MovI
	func_306(var_149_bool, var_150_object, var_151_string, var_152_float, var_153_float, var_154_float); // 0x16e NEW_2
	
Label_368:
	var_167_int = 1; // 0x170 PushI
	var_168_bool = var_134_float >= var_167_int; // 0x171 GE
	if(var_168_bool == 0) goto Label_373; // 0x172 JumpB
	var_129_float = 0.0; // 0x173 MovF
	return 4; // 0x174 Return
	
Label_373:
	var_169_int = 1; // 0x175 PushI
	var_170_int = var_169_int - var_134_float; // 0x176 Sub
	var_171_int = 2; // 0x177 PushI
	var_172_float = var_170_int / var_171_int; // 0x178 Div
	var_131_float = var_131_float * var_172_float; // 0x179 Mult2
	var_173_bool = 0; var_174_object = Obj(); var_175_string = ""; var_176_float = 0; var_177_float = 0; var_178_float = 0; // 0x17a PushV
	var_174_object = var_130_object; // 0x17b Mov
	var_175_string = "disease"; // 0x17c MovS
	var_176_float = var_131_float; // 0x17d Mov
	var_177_float = 0; // 0x17e MovI
	var_178_float = 1; // 0x17f MovI
	func_306(var_173_bool, var_174_object, var_175_string, var_176_float, var_177_float, var_178_float); // 0x180 NEW_2
	var_179_bool = 0; var_180_object = Obj(); // 0x182 PushV
	var_180_object = var_130_object; // 0x183 Mov
	func_289(var_179_bool, var_180_object); // 0x184 NEW_2
	if(var_179_bool == 0) goto Label_395; // 0x186 JumpB
	var_183_float = 0; // 0x187 PushV
	var_183_float = var_131_float; // 0x188 Mov
	func_483(var_183_float); // 0x189 NEW_2
	
Label_395:
	var_129_float = var_131_float; // 0x18b Mov
	return 4; // 0x18c Return
}


func_462(var_193_object)
{
	var_194_object = Obj(); var_195_object = Obj(); // 0x1ce PushV
	self(var_195_object); // 0x1cf Func
	var_193_object = var_195_object; // 0x1d1 Mov
	return 2; // 0x1d2 Return
}


func_468(var_114_float, var_115_cvector, var_116_cvector)
{
	var_124_cvector = CVector(0,0,0); var_125_cvector = CVector(0,0,0); // 0x1d4 PushV
	var_125_cvector = var_116_cvector - var_115_cvector; // 0x1d5 Sub2
	var_114_float = var_125_cvector | var_125_cvector; // 0x1d6 Or2
	return 2; // 0x1d7 Return
}


func_472(var_161_float, var_162_float, var_163_float, var_164_float)
{
	var_165_bool = var_162_float < var_163_float; // 0x1d9 LT
	if(var_165_bool == 0) goto Label_477; // 0x1da JumpB
	var_161_float = var_163_float; // 0x1db Mov
	return 0; // 0x1dc Return
	
Label_477:
	var_166_bool = var_162_float > var_164_float; // 0x1dd GT
	if(var_166_bool == 0) goto Label_481; // 0x1de JumpB
	var_161_float = var_164_float; // 0x1df Mov
	return 0; // 0x1e0 Return
	
Label_481:
	var_161_float = var_162_float; // 0x1e1 Mov
	return 0; // 0x1e2 Return
}


func_483(var_183_float)
{
	var_184_object = Obj(); var_185_object = Obj(); // 0x1e3 PushV
	CreateFloatVector(var_185_object); // 0x1e4 Func
	add(var_183_float); // 0x1e6 ObjFunc
	var_186_int = 14; // 0x1e8 PushI
	SendWorldWndMessage(var_186_int, var_185_object); // 0x1e9 Func
	return 2; // 0x1eb Return
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
	func_268(var_6_bool, var_7_object); // 0xed NEW_2
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
	func_128(var_9_bool, var_10_object, var_13_bool, var_14_object, var_15_float, var_16_float, var_17_bool, var_18_bool); // 0x72 NEW_2
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


