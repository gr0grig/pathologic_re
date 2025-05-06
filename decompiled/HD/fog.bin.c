task_2_event_7(var_0_bool, var_1_bool, var_2_int, var_3_bool, var_4_object)
{
	var_5_int = 0; // 0x57 PushV
	var_5_int = var_4_object; // 0x58 Mov
	func_701(var_5_int); // 0x59 NEW_2
	var_8_int = 20; // 0x5b PushI
	var_9_bool = var_4_object == var_8_int; // 0x5c Eq
	if(var_9_bool == 0) goto Label_105; // 0x5d JumpB
	var_10_bool = 0; var_11_object = Obj(); // 0x5e PushV
	var_12_object = Obj(); // 0x5f PushV
	func_469(var_12_object); // 0x60 NEW_2
	var_11_object = var_12_object; // 0x61 Mov
	func_708(var_10_bool, var_11_object); // 0x63 NEW_2
	if(var_10_bool == 0) goto Label_105; // 0x65 JumpB
	func_191(var_3_bool, var_4_object); // 0x67 NEW_2
	
Label_105:
	return 0; // 0x69 Return
}


task_2_event_1(var_0_bool, var_1_bool, var_2_object, var_3_bool, var_4_object)
{
	var_5_bool = 0; var_6_object = Obj(); // 0x6b PushV
	var_6_object = var_4_object; // 0x6c Mov
	func_680(var_5_bool, var_6_object); // 0x6d NEW_2
	if(var_5_bool == 0) goto Label_119; // 0x6f JumpB
	func_191(var_3_bool, var_4_object); // 0x71 NEW_2
	var_44_object = Obj(); // 0x73 PushV
	var_44_object = var_4_object; // 0x74 Mov
	func_693(var_44_object); // 0x75 NEW_2
	
Label_119:
	return 0; // 0x77 Return
}


task_2_event_10(var_0_bool, var_1_bool, var_2_object, var_3_bool, var_4_object)
{
	RequestClearPath(var_4_object); // 0xb9 Func
	return 0; // 0xbb Return
}


task_2_event_28(var_0_bool, var_1_bool, var_2_bool, var_3_object)
{
	Stop(); // 0xbc Func
	return 0; // 0xbe Return
}


task_2_event_41(var_0_bool, var_1_bool, var_2_object, var_3_bool, var_4_object)
{
	func_191(var_3_bool, var_4_object); // 0xc8 NEW_2
	var_5_object = Obj(); // 0xca PushV
	var_5_object = var_4_object; // 0xcb Mov
	func_747(); // 0xcc NEW_2
	return 0; // 0xce Return
}


task_3_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_int)
{
	var_5_int = 0; // 0xee PushV
	var_5_int = var_4_int; // 0xef Mov
	func_701(var_5_int); // 0xf0 NEW_2
	var_8_int = 0; // 0xf2 PushV
	var_8_int = var_4_int; // 0xf3 Mov
	func_385(var_3_object, var_4_int, var_8_int); // 0xf4 NEW_2
	var_73_int = 20; // 0xf6 PushI
	var_74_bool = var_4_int == var_73_int; // 0xf7 Eq
	if(var_74_bool == 0) goto Label_261; // 0xf8 JumpB
	var_75_bool = 0; var_76_object = Obj(); // 0xf9 PushV
	var_77_object = Obj(); // 0xfa PushV
	func_469(var_77_object); // 0xfb NEW_2
	var_76_object = var_77_object; // 0xfc Mov
	func_708(var_75_bool, var_76_object); // 0xfe NEW_2
	var_81_bool = var_75_bool == 0; // 0x100 Not
	if(var_81_bool == 0) goto Label_261; // 0x101 JumpB
	func_407(var_4_int); // 0x103 NEW_2
	
Label_261:
	return 0; // 0x105 Return
}


task_3_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object)
{
	var_5_bool = 0; var_6_object = Obj(); // 0x107 PushV
	var_6_object = var_4_object; // 0x108 Mov
	func_680(var_5_bool, var_6_object); // 0x109 NEW_2
	if(var_5_bool == 0) goto Label_275; // 0x10b JumpB
	func_407(var_4_object); // 0x10d NEW_2
	var_45_object = Obj(); // 0x10f PushV
	var_45_object = var_4_object; // 0x110 Mov
	func_693(var_45_object); // 0x111 NEW_2
	
Label_275:
	return 0; // 0x113 Return
}


task_3_event_10(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object)
{
	RequestClearPath(var_4_object); // 0x194 Func
	return 0; // 0x196 Return
}


task_3_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object)
{
	func_407(var_4_object); // 0x1a0 NEW_2
	var_6_object = Obj(); // 0x1a2 PushV
	var_6_object = var_4_object; // 0x1a3 Mov
	func_747(); // 0x1a4 NEW_2
	return 0; // 0x1a6 Return
}


task_4_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object)
{
	var_5_bool = 0; var_6_object = Obj(); // 0x1b3 PushV
	var_6_object = var_4_object; // 0x1b4 Mov
	func_680(var_5_bool, var_6_object); // 0x1b5 NEW_2
	if(var_5_bool == 0) goto Label_444; // 0x1b7 JumpB
	var_44_object = Obj(); // 0x1b8 PushV
	var_44_object = var_4_object; // 0x1b9 Mov
	func_693(var_44_object); // 0x1ba NEW_2
	
Label_444:
	return 0; // 0x1bc Return
}


task_4_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_int)
{
	var_5_int = 0; // 0x1be PushV
	var_5_int = var_4_int; // 0x1bf Mov
	func_701(var_5_int); // 0x1c0 NEW_2
	return 0; // 0x1c2 Return
}


event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object)
{
	return 0; // 0x2ec Return
}


main(var_0_bool, var_1_bool, var_2_bool, var_3_object)
{
	PutOnGrid(); // 0x44 Func
	var_4_int = 20; // 0x46 PushI
	var_5_int = 1; // 0x47 PushI
	SetTimer(var_4_int, var_5_int); // 0x48 Func
	
Label_74:
	TaskCall(2); // 0x4b TaskCall
	func_120(var_6_bool, var_7_bool); // 0x4c NEW_2
	TaskReturn(); // 0x4d TaskReturn
	TaskCall(3); // 0x50 TaskCall
	func_215(); // 0x51 NEW_2
	TaskReturn(); // 0x52 TaskReturn
	goto Label_74; // 0x54 Jump
}


func_0(var_45_object)
{
	var_46_float = 0; var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_float = 0; var_50_float = 0; var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_float = 0; // 0x0 PushV
	var_54_int = 1; // 0x1 PushI
	var_55_int = 1; // 0x2 PushI
	FogLinear(var_54_int, var_55_int); // 0x3 Func
	GetHeight(var_50_float); // 0x5 Func
	var_51_cvector = CVector(0.0, 0.0, 0.0); // 0x7 MovV
	var_56_float = GetByIndex(var_51_cvector, 1); // 0x8 PushE
	var_56_float = var_50_float; // 0x9 Mov
	SetByIndex(var_51_cvector, 1) = var_56_float; // 0xa PopE
	var_57_string = "breath"; // 0xb PushS
	PlayGlobalSound(var_57_string, var_51_cvector); // 0xc Func
	GetPFPosition(var_52_cvector); // 0xe ObjFunc
	var_58_int = 500; // 0x10 PushI
	MovePoint(var_52_cvector, var_58_int); // 0x11 Func
	var_59_bool = 0; var_60_object = Obj(); // 0x13 PushV
	var_60_object = var_45_object; // 0x14 Mov
	func_625(var_59_bool, var_60_object); // 0x15 NEW_2
	if(var_59_bool == 0) goto Label_52; // 0x17 JumpB
	var_61_float = 0; var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); // 0x18 PushV
	var_64_cvector = CVector(0,0,0); // 0x19 PushV
	func_451(var_64_cvector); // 0x1a NEW_2
	var_62_cvector = var_64_cvector; // 0x1b Mov
	var_67_cvector = CVector(0,0,0); var_68_object = Obj(); // 0x1d PushV
	var_68_object = var_45_object; // 0x1e Mov
	func_456(var_68_object); // 0x1f NEW_2
	var_63_cvector = var_67_cvector; // 0x20 Mov
	func_655(var_61_float, var_62_cvector, var_63_cvector); // 0x22 NEW_2
	var_73_float = 90000.0; // 0x24 PushF
	var_74_bool = var_61_float <= var_73_float; // 0x25 LE
	if(var_74_bool == 0) goto Label_52; // 0x26 JumpB
	var_75_string = "attack"; // 0x27 PushS
	PlaySound(var_75_string); // 0x28 Func
	var_76_float = 0; var_77_object = Obj(); var_78_float = 0; // 0x2a PushV
	var_77_object = var_45_object; // 0x2b Mov
	var_78_float = 0.25; // 0x2c MovF
	func_515(var_76_float, var_77_object, var_78_float); // 0x2d NEW_2
	var_53_float = var_76_float; // 0x2e Mov
	var_134_int = 5; // 0x30 PushI
	var_135_float = 0.25; // 0x31 PushF
	ReportHit(var_45_object, var_134_int, var_53_float, var_135_float); // 0x32 Func
	
Label_52:
	var_136_bool = 0; // 0x34 PushB
	SetVisirVisibility(var_136_bool); // 0x35 Func
	var_137_int = 0; // 0x37 PushI
	var_138_int = 2; // 0x38 PushI
	FogLinear(var_137_int, var_138_int); // 0x39 Func
	var_139_int = 5; // 0x3b PushI
	Sleep(var_139_int); // 0x3c Func
	var_140_object = Obj(); // 0x3e PushV
	func_649(var_140_object); // 0x3f NEW_2
	RemoveActor(var_140_object); // 0x41 Func
	return 8; // 0x43 Return
}


func_385(var_0_bool, var_1_bool, var_8_int)
{
	var_9_int = 0; // 0x182 PushI
	var_10_bool = var_8_int != var_9_int; // 0x183 Neq
	if(var_10_bool == 0) goto Label_390; // 0x184 JumpB
	return 0; // 0x185 Return
	
Label_390:
	var_11_bool = 0; var_12_object = Obj(); // 0x186 PushV
	var_12_object = var_1_bool; // 0x187 MovT
	func_276(var_11_bool, var_12_object); // 0x188 NEW_2
	var_71_bool = var_11_bool == 0; // 0x18a Not
	if(var_71_bool == 0) goto Label_397; // 0x18b JumpB
	var_0_bool = 1; // 0x18c TMovB
	
Label_397:
	var_72_int = 0; // 0x18d PushI
	KillTimer(var_72_int); // 0x18e Func
	Stop(); // 0x190 Func
	return 0; // 0x192 Return
}


func_515(var_76_float, var_77_object, var_78_float)
{
	var_79_float = 0; var_80_float = 0; var_81_float = 0; var_82_float = 0; // 0x203 PushV
	var_83_bool = 0; var_84_object = Obj(); var_85_string = ""; // 0x204 PushV
	var_84_object = var_77_object; // 0x205 Mov
	var_85_string = "disease"; // 0x206 MovS
	func_481(var_83_bool, var_84_object, var_85_string); // 0x207 NEW_2
	var_86_bool = var_83_bool == 0; // 0x209 Not
	if(var_86_bool == 0) goto Label_525; // 0x20a JumpB
	var_76_float = 0; // 0x20b MovI
	return 4; // 0x20c Return
	
Label_525:
	var_81_float = 0; // 0x20d MovI
	var_87_bool = 0; var_88_object = Obj(); var_89_string = ""; // 0x20e PushV
	var_88_object = var_77_object; // 0x20f Mov
	var_89_string = "armor_disease"; // 0x210 MovS
	func_481(var_87_bool, var_88_object, var_89_string); // 0x211 NEW_2
	if(var_87_bool == 0) goto Label_537; // 0x213 JumpB
	var_90_string = "armor_disease"; // 0x214 PushS
	GetProperty(var_90_string, var_81_float); // 0x215 ObjFunc
	var_91_int = 100; // 0x217 PushI
	var_81_float = var_81_float / var_81_float; // 0x218 Div2
	
Label_537:
	var_92_bool = 0; var_93_object = Obj(); var_94_string = ""; // 0x219 PushV
	var_93_object = var_77_object; // 0x21a Mov
	var_94_string = "immunity"; // 0x21b MovS
	func_481(var_92_bool, var_93_object, var_94_string); // 0x21c NEW_2
	if(var_92_bool == 0) goto Label_555; // 0x21e JumpB
	var_95_string = "immunity"; // 0x21f PushS
	GetProperty(var_95_string, var_82_float); // 0x220 ObjFunc
	var_81_float = var_81_float + var_82_float; // 0x222 Add2
	var_96_bool = 0; var_97_object = Obj(); var_98_string = ""; var_99_float = 0; var_100_float = 0; var_101_float = 0; // 0x223 PushV
	var_97_object = var_77_object; // 0x224 Mov
	var_98_string = "immunity"; // 0x225 MovS
	var_99_float = -var_78_float; // 0x226 Neg2
	var_100_float = 0; // 0x227 MovI
	var_101_float = 1; // 0x228 MovI
	func_493(var_96_bool, var_97_object, var_98_string, var_99_float, var_100_float, var_101_float); // 0x229 NEW_2
	
Label_555:
	var_114_int = 1; // 0x22b PushI
	var_115_bool = var_81_float >= var_114_int; // 0x22c GE
	if(var_115_bool == 0) goto Label_560; // 0x22d JumpB
	var_76_float = 0.0; // 0x22e MovF
	return 4; // 0x22f Return
	
Label_560:
	var_116_int = 1; // 0x230 PushI
	var_117_int = var_116_int - var_81_float; // 0x231 Sub
	var_118_int = 2; // 0x232 PushI
	var_119_float = var_117_int / var_118_int; // 0x233 Div
	var_78_float = var_78_float * var_119_float; // 0x234 Mult2
	var_120_bool = 0; var_121_object = Obj(); var_122_string = ""; var_123_float = 0; var_124_float = 0; var_125_float = 0; // 0x235 PushV
	var_121_object = var_77_object; // 0x236 Mov
	var_122_string = "disease"; // 0x237 MovS
	var_123_float = var_78_float; // 0x238 Mov
	var_124_float = 0; // 0x239 MovI
	var_125_float = 1; // 0x23a MovI
	func_493(var_120_bool, var_121_object, var_122_string, var_123_float, var_124_float, var_125_float); // 0x23b NEW_2
	var_126_bool = 0; var_127_object = Obj(); // 0x23d PushV
	var_127_object = var_77_object; // 0x23e Mov
	func_476(var_126_bool, var_127_object); // 0x23f NEW_2
	if(var_126_bool == 0) goto Label_582; // 0x241 JumpB
	var_130_float = 0; // 0x242 PushV
	var_130_float = var_78_float; // 0x243 Mov
	func_670(var_130_float); // 0x244 NEW_2
	
Label_582:
	var_76_float = var_78_float; // 0x246 Mov
	return 4; // 0x247 Return
}


func_649(var_140_object)
{
	var_141_object = Obj(); var_142_object = Obj(); // 0x289 PushV
	self(var_142_object); // 0x28a Func
	var_140_object = var_142_object; // 0x28c Mov
	return 2; // 0x28d Return
}


func_655(var_61_float, var_62_cvector, var_63_cvector)
{
	var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); // 0x28f PushV
	var_72_cvector = var_63_cvector - var_62_cvector; // 0x290 Sub2
	var_61_float = var_72_cvector | var_72_cvector; // 0x291 Or2
	return 2; // 0x292 Return
}


func_659(var_108_float, var_109_float, var_110_float, var_111_float)
{
	var_112_bool = var_109_float < var_110_float; // 0x294 LT
	if(var_112_bool == 0) goto Label_664; // 0x295 JumpB
	var_108_float = var_110_float; // 0x296 Mov
	return 0; // 0x297 Return
	
Label_664:
	var_113_bool = var_109_float > var_111_float; // 0x298 GT
	if(var_113_bool == 0) goto Label_668; // 0x299 JumpB
	var_108_float = var_111_float; // 0x29a Mov
	return 0; // 0x29b Return
	
Label_668:
	var_108_float = var_109_float; // 0x29c Mov
	return 0; // 0x29d Return
}


func_276(var_129_bool, var_130_object)
{
	var_131_bool = 0; var_132_object = Obj(); // 0x115 PushV
	var_132_object = var_130_object; // 0x116 Mov
	func_708(var_131_bool, var_132_object); // 0x117 NEW_2
	var_129_bool = var_131_bool; // 0x118 Mov
	return 0; // 0x11a Return
}


func_407(var_0_bool)
{
	var_0_bool = 1; // 0x197 TMovB
	var_5_int = 0; // 0x198 PushI
	KillTimer(var_5_int); // 0x199 Func
	Stop(); // 0x19b Func
	return 0; // 0x19d Return
}


func_283(var_0_bool, var_1_bool, var_107_bool, var_108_object, var_109_float, var_110_float, var_111_bool, var_112_bool)
{
	var_113_bool = 0; var_114_bool = 0; var_115_object = Obj(); var_116_cvector = CVector(0,0,0); var_117_cvector = CVector(0,0,0); var_118_cvector = CVector(0,0,0); var_119_float = 0; var_120_object = Obj(); var_121_bool = 0; var_122_bool = 0; var_123_object = Obj(); var_124_cvector = CVector(0,0,0); var_125_cvector = CVector(0,0,0); var_126_cvector = CVector(0,0,0); var_127_float = 0; var_128_object = Obj(); // 0x11b PushV
	var_0_bool = 0; // 0x11c TMovB
	var_1_bool = var_108_object; // 0x11d TMov
	var_122_bool = var_112_bool; // 0x11e Mov
	
Label_287:
	var_129_bool = 0; var_130_object = Obj(); // 0x11f PushV
	var_130_object = var_108_object; // 0x120 Mov
	func_276(var_129_bool, var_130_object); // 0x121 NEW_2
	var_133_bool = var_129_bool == 0; // 0x123 Not
	if(var_133_bool == 0) goto Label_295; // 0x124 JumpB
	var_107_bool = 0; // 0x125 MovB
	return 16; // 0x126 Return
	
Label_295:
	GetPosition(var_124_cvector); // 0x127 ObjFunc
	GetPosition(var_125_cvector); // 0x129 Func
	var_126_cvector = var_124_cvector - var_125_cvector; // 0x12b Sub2
	var_127_float = var_126_cvector | var_126_cvector; // 0x12c Or2
	var_134_bool = 0; // 0x12d PushV
	var_134_bool = 0; // 0x12e MovB
	var_135_int = 0; // 0x12f PushI
	var_136_bool = var_110_float > var_135_int; // 0x130 GT
	if(var_136_bool == 0) goto Label_310; // 0x131 JumpB
	var_137_float = var_110_float * var_110_float; // 0x132 Mult
	var_138_bool = var_127_float > var_137_float; // 0x133 GT
	if(var_138_bool == 0) goto Label_310; // 0x134 JumpB
	var_134_bool = 1; // 0x135 MovB
	
Label_310:
	if(var_134_bool == 0) goto Label_315; // 0x136 JumpB
	Stop(); // 0x137 Func
	var_107_bool = 0; // 0x139 MovB
	return 16; // 0x13a Return
	
Label_315:
	var_139_float = var_109_float * var_109_float; // 0x13b Mult
	var_140_bool = var_127_float > var_139_float; // 0x13c GT
	if(var_140_bool == 0) goto Label_377; // 0x13d JumpB
	GetPFPosition(var_124_cvector); // 0x13e ObjFunc
	FindPathTo(var_128_object, var_124_cvector); // 0x140 Func
	var_141_bool = var_128_object != 0; // 0x142 NullNeq
	if(var_141_bool == 0) goto Label_326; // 0x143 JumpB
	var_123_object = var_128_object; // 0x144 Mov
	var_128_object = 0; // 0x145 SetNull
	
Label_326:
	var_142_bool = var_123_object != 0; // 0x146 NullNeq
	if(var_142_bool == 0) goto Label_359; // 0x147 JumpB
	var_143_bool = var_122_bool; // 0x148 Push
	if(var_143_bool == 0) goto Label_336; // 0x149 JumpB
	var_122_bool = 0; // 0x14a MovB
	RotatePath(var_123_object, var_121_bool); // 0x14b Func
	var_144_bool = var_121_bool == 0; // 0x14d Not
	if(var_144_bool == 0) goto Label_336; // 0x14e JumpB
	goto Label_383; // 0x14f Jump
	
Label_383:
	var_107_bool = !var_0_bool; // 0x17f Not2
	return 16; // 0x180 Return
	
Label_336:
	var_145_int = 0; // 0x150 PushI
	var_146_float = 0.3; // 0x151 PushF
	SetTimer(var_145_int, var_146_float); // 0x152 Func
	var_147_string = ""; // 0x154 PushV
	func_423(var_147_string); // 0x155 NEW_2
	var_148_string = ""; // 0x157 PushV
	func_425(var_148_string); // 0x158 NEW_2
	FollowPath(var_123_object, var_111_bool, var_121_bool, var_147_string, var_148_string); // 0x15a Func
	var_149_bool = var_121_bool == 0; // 0x15c Not
	if(var_149_bool == 0) goto Label_357; // 0x15d JumpB
	var_150_bool = var_0_bool; // 0x15e PushT
	if(var_150_bool == 0) goto Label_355; // 0x15f JumpB
	var_123_object = 0; // 0x160 SetNull
	goto Label_383; // 0x161 Jump
	
Label_355:
	goto Label_382; // 0x163 Jump
	
Label_382:
	goto Label_287; // 0x17e Jump
	
Label_357:
	var_123_object = 0; // 0x165 SetNull
	goto Label_375; // 0x166 Jump
	
Label_375:
	var_128_object = 0; // 0x177 SetNull
	goto Label_381; // 0x178 Jump
	
Label_381:
	var_123_object = 0; // 0x17d SetNull
	
Label_359:
	var_151_int = 0; // 0x167 PushI
	KillTimer(var_151_int); // 0x168 Func
	var_152_float = 0.5; // 0x16a PushF
	Sleep(var_152_float, var_121_bool); // 0x16b Func
	var_153_bool = var_121_bool == 0; // 0x16d Not
	if(var_153_bool == 0) goto Label_371; // 0x16e JumpB
	var_154_bool = var_0_bool; // 0x16f PushT
	if(var_154_bool == 0) goto Label_371; // 0x170 JumpB
	var_123_object = 0; // 0x171 SetNull
	goto Label_383; // 0x172 Jump
	
Label_371:
	var_155_int = 0; // 0x173 PushI
	var_156_float = 0.3; // 0x174 PushF
	SetTimer(var_155_int, var_156_float); // 0x175 Func
	
Label_377:
	var_157_int = 0; // 0x179 PushI
	KillTimer(var_157_int); // 0x17a Func
	goto Label_383; // 0x17c Jump
}


func_670(var_130_float)
{
	var_131_object = Obj(); var_132_object = Obj(); // 0x29e PushV
	CreateFloatVector(var_132_object); // 0x29f Func
	add(var_130_float); // 0x2a1 ObjFunc
	var_133_int = 14; // 0x2a3 PushI
	SendWorldWndMessage(var_133_int, var_132_object); // 0x2a4 Func
	return 2; // 0x2a6 Return
}


func_423(var_147_string)
{
	var_147_string = "walk"; // 0x1a7 MovS
	return 0; // 0x1a8 Return
}


func_680(var_5_bool, var_6_object)
{
	var_7_bool = 0; var_8_bool = 0; // 0x2a8 PushV
	IsPlayerActor(var_6_object, var_8_bool); // 0x2a9 Func
	var_5_bool = 0; // 0x2ab MovB
	var_9_bool = var_8_bool; // 0x2ac Push
	if(var_9_bool == 0) goto Label_692; // 0x2ad JumpB
	var_10_bool = 0; var_11_object = Obj(); // 0x2ae PushV
	var_11_object = var_6_object; // 0x2af Mov
	func_625(var_10_bool, var_11_object); // 0x2b0 NEW_2
	if(var_10_bool == 0) goto Label_692; // 0x2b2 JumpB
	var_5_bool = 1; // 0x2b3 MovB
	
Label_692:
	return 2; // 0x2b4 Return
}


func_425(var_148_string)
{
	var_148_string = "run"; // 0x1a9 MovS
	return 0; // 0x1aa Return
}


func_427()
{
	var_35_float = 0; var_36_float = 0; // 0x1ab PushV
	var_37_int = 30; // 0x1ac PushI
	rand(var_36_float, var_37_int); // 0x1ad Func
	Sleep(var_36_float); // 0x1af Func
	return 2; // 0x1b1 Return
}


func_179(var_23_float)
{
	var_24_float = 0; var_25_float = 0; // 0xb3 PushV
	GetCameraFarDistance(var_25_float); // 0xb4 Func
	var_23_float = var_25_float; // 0xb6 Mov
	return 2; // 0xb7 Return
}


func_693(var_44_object)
{
	var_45_object = Obj(); // 0x2b6 PushV
	var_45_object = var_44_object; // 0x2b7 Mov
	TaskCall(0); // 0x2b8 TaskCall
	func_0(var_45_object); // 0x2b9 NEW_2
	TaskReturn(); // 0x2ba TaskReturn
	return 0; // 0x2bc Return
}


func_701(var_5_int)
{
	var_6_int = 20; // 0x2be PushI
	var_7_bool = var_5_int == var_6_int; // 0x2bf Eq
	if(var_7_bool == 0) goto Label_707; // 0x2c0 JumpB
	ResetAAS(); // 0x2c1 Func
	
Label_707:
	return 0; // 0x2c3 Return
}


func_191(var_0_bool, var_1_bool)
{
	var_0_bool = 1; // 0xbf TMovB
	var_1_bool = 0; // 0xc0 TMovB
	Stop(); // 0xc1 Func
	StopGroup0(); // 0xc3 Func
	return 0; // 0xc5 Return
}


func_451(var_64_cvector)
{
	var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); // 0x1c3 PushV
	GetPosition(var_66_cvector); // 0x1c4 Func
	var_64_cvector = var_66_cvector; // 0x1c6 Mov
	return 2; // 0x1c7 Return
}


func_708(var_48_bool, var_49_object)
{
	var_50_object = Obj(); var_51_int = 0; var_52_object = Obj(); var_53_int = 0; // 0x2c4 PushV
	var_54_bool = 0; var_55_object = Obj(); // 0x2c5 PushV
	var_55_object = var_49_object; // 0x2c6 Mov
	func_625(var_54_bool, var_55_object); // 0x2c7 NEW_2
	var_88_bool = var_54_bool == 0; // 0x2c9 Not
	if(var_88_bool == 0) goto Label_717; // 0x2ca JumpB
	var_48_bool = 0; // 0x2cb MovB
	return 4; // 0x2cc Return
	
Label_717:
	GetActiveScene(var_52_object); // 0x2cd Func
	var_89_bool = 0; // 0x2cf PushV
	var_89_bool = 0; // 0x2d0 MovB
	var_90_bool = var_52_object != 0; // 0x2d1 NullNeq
	if(var_90_bool == 0) goto Label_728; // 0x2d2 JumpB
	var_91_string = "GetCurrentRegion"; // 0x2d3 PushS
	var_92_int = 1; // 0x2d4 PushI
	var_93_bool = IsFuncExist(var_52_object, var_91_string, var_92_int); // 0x2d5 FuncExist
	if(var_93_bool == 0) goto Label_728; // 0x2d6 JumpB
	var_89_bool = 1; // 0x2d7 MovB
	
Label_728:
	if(var_89_bool == 0) goto Label_744; // 0x2d8 JumpB
	GetCurrentRegion(var_53_int); // 0x2d9 ObjFunc
	var_48_bool = 0; // 0x2db MovB
	var_94_int = GlobalVars[0]; // 0x2dc PushGE
	var_95_bool = var_53_int == var_94_int; // 0x2dd Eq
	if(var_95_bool == 0) goto Label_743; // 0x2de JumpB
	var_96_float = 0; var_97_object = Obj(); // 0x2df PushV
	var_97_object = var_49_object; // 0x2e0 Mov
	func_461(var_97_object); // 0x2e1 NEW_2
	var_104_int = 4000000; // 0x2e3 PushI
	var_105_bool = var_96_float < var_104_int; // 0x2e4 LT
	if(var_105_bool == 0) goto Label_743; // 0x2e5 JumpB
	var_48_bool = 1; // 0x2e6 MovB
	
Label_743:
	return 4; // 0x2e7 Return
	
Label_744:
	var_48_bool = 0; // 0x2e8 MovB
	return 4; // 0x2e9 Return
}


func_456(var_67_cvector)
{
	var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); // 0x1c8 PushV
	GetPosition(var_70_cvector); // 0x1c9 ObjFunc
	var_67_cvector = var_70_cvector; // 0x1cb Mov
	return 2; // 0x1cc Return
}


func_584(var_69_bool)
{
	var_71_bool = 0; var_72_bool = 0; // 0x248 PushV
	IsDead(var_72_bool); // 0x249 ObjFunc
	var_69_bool = var_72_bool; // 0x24b Mov
	return 2; // 0x24c Return
}


func_589(var_58_bool, var_59_object)
{
	var_60_object = Obj(); var_61_object = Obj(); var_62_object = Obj(); var_63_object = Obj(); // 0x24d PushV
	var_64_bool = var_59_object == 0; // 0x24e NullEq
	if(var_64_bool == 0) goto Label_594; // 0x24f JumpB
	var_58_bool = 0; // 0x250 MovB
	return 4; // 0x251 Return
	
Label_594:
	var_65_bool = 0; // 0x252 PushV
	var_65_bool = 0; // 0x253 MovB
	var_66_string = "IsDead"; // 0x254 PushS
	var_67_int = 1; // 0x255 PushI
	var_68_bool = IsFuncExist(var_59_object, var_66_string, var_67_int); // 0x256 FuncExist
	if(var_68_bool == 0) goto Label_606; // 0x257 JumpB
	var_69_bool = 0; var_70_object = Obj(); // 0x258 PushV
	var_70_object = var_59_object; // 0x259 Mov
	func_584(var_70_object); // 0x25a NEW_2
	if(var_69_bool == 0) goto Label_606; // 0x25c JumpB
	var_65_bool = 1; // 0x25d MovB
	
Label_606:
	if(var_65_bool == 0) goto Label_609; // 0x25e JumpB
	var_58_bool = 0; // 0x25f MovB
	return 4; // 0x260 Return
	
Label_609:
	GetScene(var_62_object); // 0x261 Func
	var_73_bool = var_62_object == 0; // 0x263 NullEq
	if(var_73_bool == 0) goto Label_615; // 0x264 JumpB
	var_58_bool = 0; // 0x265 MovB
	return 4; // 0x266 Return
	
Label_615:
	GetScene(var_63_object); // 0x267 ObjFunc
	var_74_bool = var_62_object != var_63_object; // 0x269 Neq
	if(var_74_bool == 0) goto Label_621; // 0x26a JumpB
	var_58_bool = 0; // 0x26b MovB
	return 4; // 0x26c Return
	
Label_621:
	var_58_bool = 1; // 0x26d MovB
	return 4; // 0x26e Return
}


func_461(var_96_float)
{
	var_98_cvector = CVector(0,0,0); var_99_cvector = CVector(0,0,0); var_100_cvector = CVector(0,0,0); var_101_cvector = CVector(0,0,0); var_102_cvector = CVector(0,0,0); var_103_cvector = CVector(0,0,0); // 0x1cd PushV
	GetPosition(var_101_cvector); // 0x1ce Func
	GetPosition(var_102_cvector); // 0x1d0 ObjFunc
	var_103_cvector = var_102_cvector - var_101_cvector; // 0x1d2 Sub2
	var_96_float = var_103_cvector | var_103_cvector; // 0x1d3 Or2
	return 6; // 0x1d4 Return
}


func_207(var_33_bool)
{
	var_33_bool = 0; // 0xcf MovB
	return 0; // 0xd0 Return
}


func_209(var_27_object, var_28_cvector)
{
	var_29_object = Obj(); var_30_object = Obj(); // 0xd1 PushV
	FindShiftedPathTo(var_30_object, var_28_cvector); // 0xd2 Func
	var_27_object = var_30_object; // 0xd4 Mov
	return 2; // 0xd5 Return
}


func_469(var_44_object)
{
	var_45_object = Obj(); var_46_object = Obj(); // 0x1d5 PushV
	var_47_string = "player"; // 0x1d6 PushS
	FindActor(var_46_object, var_47_string); // 0x1d7 Func
	var_44_object = var_46_object; // 0x1d9 Mov
	return 2; // 0x1da Return
}


func_215()
{
	var_42_object = Obj(); var_43_object = Obj(); // 0xd7 PushV
	var_44_object = Obj(); // 0xd8 PushV
	func_469(var_44_object); // 0xd9 NEW_2
	var_43_object = var_44_object; // 0xda Mov
	var_48_bool = 0; var_49_object = Obj(); // 0xdc PushV
	var_49_object = var_43_object; // 0xdd Mov
	func_708(var_48_bool, var_49_object); // 0xde NEW_2
	var_106_bool = var_48_bool == 0; // 0xe0 Not
	if(var_106_bool == 0) goto Label_227; // 0xe1 JumpB
	return 2; // 0xe2 Return
	
Label_227:
	var_107_bool = 0; var_108_object = Obj(); var_109_float = 0; var_110_float = 0; var_111_bool = 0; var_112_bool = 0; // 0xe3 PushV
	var_108_object = var_43_object; // 0xe4 Mov
	var_109_float = 100; // 0xe5 MovI
	var_110_float = 0; // 0xe6 MovI
	var_111_bool = 0; // 0xe7 MovB
	var_112_bool = 0; // 0xe8 MovB
	func_283(var_42_object, var_43_object, var_107_bool, var_108_object, var_109_float, var_110_float, var_111_bool, var_112_bool); // 0xe9 NEW_2
	return 2; // 0xeb Return
}


func_476(var_126_bool, var_127_object)
{
	var_128_bool = 0; var_129_bool = 0; // 0x1dc PushV
	IsPlayerActor(var_127_object, var_129_bool); // 0x1dd Func
	var_126_bool = var_129_bool; // 0x1df Mov
	return 2; // 0x1e0 Return
}


func_481(var_76_bool, var_77_object, var_78_string)
{
	var_79_bool = 0; var_80_bool = 0; // 0x1e1 PushV
	var_81_string = "HasProperty"; // 0x1e2 PushS
	var_82_int = 2; // 0x1e3 PushI
	var_83_bool = IsFuncExist(var_77_object, var_81_string, var_82_int); // 0x1e4 FuncExist
	var_84_bool = var_83_bool == 0; // 0x1e5 Not
	if(var_84_bool == 0) goto Label_489; // 0x1e6 JumpB
	var_76_bool = 0; // 0x1e7 MovB
	return 2; // 0x1e8 Return
	
Label_489:
	HasProperty(var_78_string, var_80_bool); // 0x1e9 ObjFunc
	var_76_bool = var_80_bool; // 0x1eb Mov
	return 2; // 0x1ec Return
}


func_493(var_96_bool, var_97_object, var_98_string, var_99_float, var_100_float, var_101_float)
{
	var_102_float = 0; var_103_float = 0; // 0x1ed PushV
	var_104_bool = 0; var_105_object = Obj(); var_106_string = ""; // 0x1ee PushV
	var_105_object = var_97_object; // 0x1ef Mov
	var_106_string = var_98_string; // 0x1f0 Mov
	func_481(var_104_bool, var_105_object, var_106_string); // 0x1f1 NEW_2
	var_107_bool = var_104_bool == 0; // 0x1f3 Not
	if(var_107_bool == 0) goto Label_503; // 0x1f4 JumpB
	var_96_bool = 0; // 0x1f5 MovB
	return 2; // 0x1f6 Return
	
Label_503:
	GetProperty(var_98_string, var_103_float); // 0x1f7 ObjFunc
	var_108_float = 0; var_109_float = 0; var_110_float = 0; var_111_float = 0; // 0x1f9 PushV
	var_109_float = var_103_float + var_99_float; // 0x1fa Add2
	var_110_float = var_100_float; // 0x1fb Mov
	var_111_float = var_101_float; // 0x1fc Mov
	func_659(var_108_float, var_109_float, var_110_float, var_111_float); // 0x1fd NEW_2
	SetProperty(var_98_string, var_108_float); // 0x1ff ObjFunc
	var_96_bool = 1; // 0x201 MovB
	return 2; // 0x202 Return
}


func_625(var_54_bool, var_55_object)
{
	var_56_int = 0; var_57_int = 0; // 0x271 PushV
	var_58_bool = 0; var_59_object = Obj(); // 0x272 PushV
	var_59_object = var_55_object; // 0x273 Mov
	func_589(var_58_bool, var_59_object); // 0x274 NEW_2
	var_75_bool = var_58_bool == 0; // 0x276 Not
	if(var_75_bool == 0) goto Label_634; // 0x277 JumpB
	var_54_bool = 0; // 0x278 MovB
	return 2; // 0x279 Return
	
Label_634:
	var_76_bool = 0; var_77_object = Obj(); var_78_string = ""; // 0x27a PushV
	var_77_object = var_55_object; // 0x27b Mov
	var_78_string = "noaccess"; // 0x27c MovS
	func_481(var_76_bool, var_77_object, var_78_string); // 0x27d NEW_2
	var_85_bool = var_76_bool == 0; // 0x27f Not
	if(var_85_bool == 0) goto Label_643; // 0x280 JumpB
	var_54_bool = 1; // 0x281 MovB
	return 2; // 0x282 Return
	
Label_643:
	var_86_string = "noaccess"; // 0x283 PushS
	GetProperty(var_86_string, var_57_int); // 0x284 ObjFunc
	var_87_int = 0; // 0x286 PushI
	var_54_bool = var_57_int == var_87_int; // 0x287 Eq2
	return 2; // 0x288 Return
}


func_120(var_0_bool, var_1_bool)
{
	var_8_float = 0; var_9_cvector = CVector(0,0,0); var_10_cvector = CVector(0,0,0); var_11_bool = 0; var_12_object = Obj(); var_13_bool = 0; var_14_float = 0; var_15_cvector = CVector(0,0,0); var_16_cvector = CVector(0,0,0); var_17_bool = 0; var_18_object = Obj(); var_19_bool = 0; // 0x78 PushV
	var_0_bool = 0; // 0x79 TMovB
	var_1_bool = 0; // 0x7a TMovB
	var_20_float = 0.5; // 0x7b PushF
	rand(var_14_float, var_20_float); // 0x7c Func
	Sleep(var_14_float); // 0x7e Func
	
Label_128:
	var_21_bool = var_0_bool == 0; // 0x80 Not
	if(var_21_bool == 0) goto Label_178; // 0x81 JumpB
	var_22_bool = var_1_bool == 0; // 0x82 Not
	if(var_22_bool == 0) goto Label_147; // 0x83 JumpB
	
Label_132:
	GetPosition(var_16_cvector); // 0x84 Func
	var_23_float = 0; // 0x86 PushV
	func_179(var_23_float); // 0x87 NEW_2
	GetRandomPFPointInCircle(var_15_cvector, var_16_cvector, var_23_float, var_17_bool); // 0x89 Func
	var_26_bool = var_17_bool; // 0x8b Push
	if(var_26_bool == 0) goto Label_142; // 0x8c JumpB
	goto Label_146; // 0x8d Jump
	
Label_146:
	goto Label_148; // 0x92 Jump
	
Label_148:
	var_27_object = Obj(); var_28_cvector = CVector(0,0,0); // 0x94 PushV
	var_28_cvector = var_15_cvector; // 0x95 Mov
	func_209(var_27_object, var_28_cvector); // 0x96 NEW_2
	var_18_object = var_27_object; // 0x97 Mov
	var_31_bool = var_18_object != 0; // 0x99 NullNeq
	if(var_31_bool == 0) goto Label_173; // 0x9a JumpB
	RotatePath(var_18_object, var_19_bool); // 0x9b Func
	var_32_bool = var_19_bool; // 0x9d Push
	if(var_32_bool == 0) goto Label_172; // 0x9e JumpB
	var_33_bool = 0; // 0x9f PushV
	func_207(var_33_bool); // 0xa0 NEW_2
	FollowPath(var_18_object, var_33_bool, var_19_bool); // 0xa2 Func
	var_18_object = 0; // 0xa4 SetNull
	var_34_bool = var_19_bool; // 0xa5 Push
	if(var_34_bool == 0) goto Label_172; // 0xa6 JumpB
	TaskCall(4); // 0xa8 TaskCall
	func_427(); // 0xa9 NEW_2
	TaskReturn(); // 0xaa TaskReturn
	
Label_172:
	goto Label_176; // 0xac Jump
	
Label_176:
	var_18_object = 0; // 0xb0 SetNull
	goto Label_128; // 0xb1 Jump
	
Label_173:
	var_38_int = 1; // 0xad PushI
	Sleep(var_38_int); // 0xae Func
	
Label_142:
	var_39_int = 1; // 0x8e PushI
	Sleep(var_39_int); // 0x8f Func
	goto Label_132; // 0x91 Jump
	
Label_147:
	var_1_bool = 0; // 0x93 TMovB
	
Label_178:
	return 12; // 0xb2 Return
}


