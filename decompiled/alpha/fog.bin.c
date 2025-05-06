task_2_event_7(var_0_bool, var_1_bool, var_2_int, var_3_bool, var_4_object)
{
	var_5_int = 0; // 0x57 PushV
	var_5_int = var_4_object; // 0x58 Mov
	func_659(var_5_int); // 0x59 Call
	var_8_int = 20; // 0x5b PushI
	var_9_bool = var_4_object == var_8_int; // 0x5c Eq
	if(var_9_bool == 0) goto Label_105; // 0x5d JumpB
	var_10_bool = 0; var_11_object = Obj(); // 0x5e PushV
	var_12_object = Obj(); // 0x5f PushV
	func_448(var_12_object); // 0x60 Call
	var_11_object = var_12_object; // 0x61 Mov
	func_666(var_10_bool, var_11_object); // 0x63 Call
	if(var_10_bool == 0) goto Label_105; // 0x65 JumpB
	func_184(var_3_bool, var_4_object); // 0x67 Call
	
Label_105:
	return 0; // 0x69 Return
}


task_2_event_1(var_0_bool, var_1_bool, var_2_object, var_3_bool, var_4_object)
{
	var_5_bool = 0; var_6_object = Obj(); // 0x6b PushV
	var_6_object = var_4_object; // 0x6c Mov
	func_638(var_5_bool, var_6_object); // 0x6d Call
	if(var_5_bool == 0) goto Label_119; // 0x6f JumpB
	func_184(var_3_bool, var_4_object); // 0x71 Call
	var_44_object = Obj(); // 0x73 PushV
	var_44_object = var_4_object; // 0x74 Mov
	func_651(var_44_object); // 0x75 Call
	
Label_119:
	return 0; // 0x77 Return
}


task_2_event_10(var_0_bool, var_1_bool, var_2_object, var_3_bool, var_4_object)
{
	RequestClearPath(var_4_object); // 0xb2 Func
	return 0; // 0xb4 Return
}


task_2_event_28(var_0_bool, var_1_bool, var_2_bool, var_3_object)
{
	Stop(); // 0xb5 Func
	return 0; // 0xb7 Return
}


task_2_event_41(var_0_bool, var_1_bool, var_2_object, var_3_bool, var_4_object)
{
	func_184(var_3_bool, var_4_object); // 0xc1 Call
	var_5_object = Obj(); // 0xc3 PushV
	var_5_object = var_4_object; // 0xc4 Mov
	func_695(); // 0xc5 Call
	return 0; // 0xc7 Return
}


task_3_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_int)
{
	var_5_int = 0; // 0xe1 PushV
	var_5_int = var_4_int; // 0xe2 Mov
	func_659(var_5_int); // 0xe3 Call
	var_8_int = 0; // 0xe5 PushV
	var_8_int = var_4_int; // 0xe6 Mov
	func_372(var_3_object, var_4_int, var_8_int); // 0xe7 Call
	var_62_int = 20; // 0xe9 PushI
	var_63_bool = var_4_int == var_62_int; // 0xea Eq
	if(var_63_bool == 0) goto Label_248; // 0xeb JumpB
	var_64_bool = 0; var_65_object = Obj(); // 0xec PushV
	var_66_object = Obj(); // 0xed PushV
	func_448(var_66_object); // 0xee Call
	var_65_object = var_66_object; // 0xef Mov
	func_666(var_64_bool, var_65_object); // 0xf1 Call
	var_70_bool = var_64_bool == 0; // 0xf3 Not
	if(var_70_bool == 0) goto Label_248; // 0xf4 JumpB
	func_394(var_4_int); // 0xf6 Call
	
Label_248:
	return 0; // 0xf8 Return
}


task_3_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object)
{
	var_5_bool = 0; var_6_object = Obj(); // 0xfa PushV
	var_6_object = var_4_object; // 0xfb Mov
	func_638(var_5_bool, var_6_object); // 0xfc Call
	if(var_5_bool == 0) goto Label_262; // 0xfe JumpB
	func_394(var_4_object); // 0x100 Call
	var_45_object = Obj(); // 0x102 PushV
	var_45_object = var_4_object; // 0x103 Mov
	func_651(var_45_object); // 0x104 Call
	
Label_262:
	return 0; // 0x106 Return
}


task_3_event_10(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object)
{
	RequestClearPath(var_4_object); // 0x187 Func
	return 0; // 0x189 Return
}


task_3_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object)
{
	func_394(var_4_object); // 0x193 Call
	var_6_object = Obj(); // 0x195 PushV
	var_6_object = var_4_object; // 0x196 Mov
	func_695(); // 0x197 Call
	return 0; // 0x199 Return
}


task_4_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object)
{
	var_5_bool = 0; var_6_object = Obj(); // 0x1a6 PushV
	var_6_object = var_4_object; // 0x1a7 Mov
	func_638(var_5_bool, var_6_object); // 0x1a8 Call
	if(var_5_bool == 0) goto Label_431; // 0x1aa JumpB
	var_44_object = Obj(); // 0x1ab PushV
	var_44_object = var_4_object; // 0x1ac Mov
	func_651(var_44_object); // 0x1ad Call
	
Label_431:
	return 0; // 0x1af Return
}


task_4_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_int)
{
	var_5_int = 0; // 0x1b1 PushV
	var_5_int = var_4_int; // 0x1b2 Mov
	func_659(var_5_int); // 0x1b3 Call
	return 0; // 0x1b5 Return
}


event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object)
{
	return 0; // 0x2b8 Return
}


main(var_0_bool, var_1_bool, var_2_bool, var_3_object)
{
	PutOnGrid(); // 0x44 Func
	var_4_int = 20; // 0x46 PushI
	var_5_int = 1; // 0x47 PushI
	SetTimer(var_4_int, var_5_int); // 0x48 Func
	
Label_74:
	TaskCall(2); // 0x4b TaskCall
	func_120(var_6_bool, var_7_bool); // 0x4c Call
	TaskReturn(); // 0x4d TaskReturn
	TaskCall(3); // 0x50 TaskCall
	func_202(); // 0x51 Call
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
	func_593(var_59_bool, var_60_object); // 0x15 Call
	if(var_59_bool == 0) goto Label_52; // 0x17 JumpB
	var_61_float = 0; var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); // 0x18 PushV
	var_64_cvector = CVector(0,0,0); // 0x19 PushV
	func_438(var_64_cvector); // 0x1a Call
	var_62_cvector = var_64_cvector; // 0x1b Mov
	var_67_cvector = CVector(0,0,0); var_68_object = Obj(); // 0x1d PushV
	var_68_object = var_45_object; // 0x1e Mov
	func_443(var_68_object); // 0x1f Call
	var_63_cvector = var_67_cvector; // 0x20 Mov
	func_623(var_61_float, var_62_cvector, var_63_cvector); // 0x22 Call
	var_73_float = 90000.0; // 0x24 PushF
	var_74_bool = var_61_float <= var_73_float; // 0x25 LE
	if(var_74_bool == 0) goto Label_52; // 0x26 JumpB
	var_75_string = "attack"; // 0x27 PushS
	PlaySound(var_75_string); // 0x28 Func
	var_76_float = 0; var_77_object = Obj(); var_78_float = 0; // 0x2a PushV
	var_77_object = var_45_object; // 0x2b Mov
	var_78_float = 0.2; // 0x2c MovF
	func_489(var_76_float, var_77_object, var_78_float); // 0x2d Call
	var_53_float = var_76_float; // 0x2e Mov
	var_126_int = 5; // 0x30 PushI
	var_127_float = 0.2; // 0x31 PushF
	ReportHit(var_45_object, var_126_int, var_53_float, var_127_float); // 0x32 Func
	
Label_52:
	var_128_bool = 0; // 0x34 PushB
	SetVisirVisibility(var_128_bool); // 0x35 Func
	var_129_int = 0; // 0x37 PushI
	var_130_int = 2; // 0x38 PushI
	FogLinear(var_129_int, var_130_int); // 0x39 Func
	var_131_int = 5; // 0x3b PushI
	Sleep(var_131_int); // 0x3c Func
	var_132_object = Obj(); // 0x3e PushV
	func_617(var_132_object); // 0x3f Call
	RemoveActor(var_132_object); // 0x41 Func
	return 8; // 0x43 Return
}


func_263(var_114_bool, var_115_object)
{
	var_116_bool = 0; var_117_object = Obj(); // 0x108 PushV
	var_117_object = var_115_object; // 0x109 Mov
	func_666(var_116_bool, var_117_object); // 0x10a Call
	var_114_bool = var_116_bool; // 0x10b Mov
	return 0; // 0x10d Return
}


func_394(var_0_bool)
{
	var_0_bool = 1; // 0x18a TMovB
	var_5_int = 0; // 0x18b PushI
	KillTimer(var_5_int); // 0x18c Func
	Stop(); // 0x18e Func
	return 0; // 0x190 Return
}


func_651(var_44_object)
{
	var_45_object = Obj(); // 0x28c PushV
	var_45_object = var_44_object; // 0x28d Mov
	TaskCall(0); // 0x28e TaskCall
	func_0(var_45_object); // 0x28f Call
	TaskReturn(); // 0x290 TaskReturn
	return 0; // 0x292 Return
}


func_270(var_0_bool, var_1_bool, var_92_bool, var_93_object, var_94_float, var_95_float, var_96_bool, var_97_bool)
{
	var_98_bool = 0; var_99_bool = 0; var_100_object = Obj(); var_101_cvector = CVector(0,0,0); var_102_cvector = CVector(0,0,0); var_103_cvector = CVector(0,0,0); var_104_float = 0; var_105_object = Obj(); var_106_bool = 0; var_107_bool = 0; var_108_object = Obj(); var_109_cvector = CVector(0,0,0); var_110_cvector = CVector(0,0,0); var_111_cvector = CVector(0,0,0); var_112_float = 0; var_113_object = Obj(); // 0x10e PushV
	var_0_bool = 0; // 0x10f TMovB
	var_1_bool = var_93_object; // 0x110 TMov
	var_107_bool = var_97_bool; // 0x111 Mov
	
Label_274:
	var_114_bool = 0; var_115_object = Obj(); // 0x112 PushV
	var_115_object = var_93_object; // 0x113 Mov
	func_263(var_114_bool, var_115_object); // 0x114 Call
	var_118_bool = var_114_bool == 0; // 0x116 Not
	if(var_118_bool == 0) goto Label_282; // 0x117 JumpB
	var_92_bool = 0; // 0x118 MovB
	return 16; // 0x119 Return
	
Label_282:
	GetPosition(var_109_cvector); // 0x11a ObjFunc
	GetPosition(var_110_cvector); // 0x11c Func
	var_111_cvector = var_109_cvector - var_110_cvector; // 0x11e Sub2
	var_112_float = var_111_cvector | var_111_cvector; // 0x11f Or2
	var_119_bool = 0; // 0x120 PushV
	var_119_bool = 0; // 0x121 MovB
	var_120_int = 0; // 0x122 PushI
	var_121_bool = var_95_float > var_120_int; // 0x123 GT
	if(var_121_bool == 0) goto Label_297; // 0x124 JumpB
	var_122_float = var_95_float * var_95_float; // 0x125 Mult
	var_123_bool = var_112_float > var_122_float; // 0x126 GT
	if(var_123_bool == 0) goto Label_297; // 0x127 JumpB
	var_119_bool = 1; // 0x128 MovB
	
Label_297:
	if(var_119_bool == 0) goto Label_302; // 0x129 JumpB
	Stop(); // 0x12a Func
	var_92_bool = 0; // 0x12c MovB
	return 16; // 0x12d Return
	
Label_302:
	var_124_float = var_94_float * var_94_float; // 0x12e Mult
	var_125_bool = var_112_float > var_124_float; // 0x12f GT
	if(var_125_bool == 0) goto Label_364; // 0x130 JumpB
	GetPFPosition(var_109_cvector); // 0x131 ObjFunc
	FindPathTo(var_113_object, var_109_cvector); // 0x133 Func
	var_126_bool = var_113_object != 0; // 0x135 NullNeq
	if(var_126_bool == 0) goto Label_313; // 0x136 JumpB
	var_108_object = var_113_object; // 0x137 Mov
	var_113_object = 0; // 0x138 SetNull
	
Label_313:
	var_127_bool = var_108_object != 0; // 0x139 NullNeq
	if(var_127_bool == 0) goto Label_346; // 0x13a JumpB
	var_128_bool = var_107_bool; // 0x13b Push
	if(var_128_bool == 0) goto Label_323; // 0x13c JumpB
	var_107_bool = 0; // 0x13d MovB
	RotatePath(var_108_object, var_106_bool); // 0x13e Func
	var_129_bool = var_106_bool == 0; // 0x140 Not
	if(var_129_bool == 0) goto Label_323; // 0x141 JumpB
	goto Label_370; // 0x142 Jump
	
Label_370:
	var_92_bool = !var_0_bool; // 0x172 Not2
	return 16; // 0x173 Return
	
Label_323:
	var_130_int = 0; // 0x143 PushI
	var_131_float = 0.3; // 0x144 PushF
	SetTimer(var_130_int, var_131_float); // 0x145 Func
	var_132_string = ""; // 0x147 PushV
	func_410(var_132_string); // 0x148 Call
	var_133_string = ""; // 0x14a PushV
	func_412(var_133_string); // 0x14b Call
	FollowPath(var_108_object, var_96_bool, var_106_bool, var_132_string, var_133_string); // 0x14d Func
	var_134_bool = var_106_bool == 0; // 0x14f Not
	if(var_134_bool == 0) goto Label_344; // 0x150 JumpB
	var_135_bool = var_0_bool; // 0x151 PushT
	if(var_135_bool == 0) goto Label_342; // 0x152 JumpB
	var_108_object = 0; // 0x153 SetNull
	goto Label_370; // 0x154 Jump
	
Label_342:
	goto Label_369; // 0x156 Jump
	
Label_369:
	goto Label_274; // 0x171 Jump
	
Label_344:
	var_108_object = 0; // 0x158 SetNull
	goto Label_362; // 0x159 Jump
	
Label_362:
	var_113_object = 0; // 0x16a SetNull
	goto Label_368; // 0x16b Jump
	
Label_368:
	var_108_object = 0; // 0x170 SetNull
	
Label_346:
	var_136_int = 0; // 0x15a PushI
	KillTimer(var_136_int); // 0x15b Func
	var_137_float = 0.5; // 0x15d PushF
	Sleep(var_137_float, var_106_bool); // 0x15e Func
	var_138_bool = var_106_bool == 0; // 0x160 Not
	if(var_138_bool == 0) goto Label_358; // 0x161 JumpB
	var_139_bool = var_0_bool; // 0x162 PushT
	if(var_139_bool == 0) goto Label_358; // 0x163 JumpB
	var_108_object = 0; // 0x164 SetNull
	goto Label_370; // 0x165 Jump
	
Label_358:
	var_140_int = 0; // 0x166 PushI
	var_141_float = 0.3; // 0x167 PushF
	SetTimer(var_140_int, var_141_float); // 0x168 Func
	
Label_364:
	var_142_int = 0; // 0x16c PushI
	KillTimer(var_142_int); // 0x16d Func
	goto Label_370; // 0x16f Jump
}


func_659(var_5_int)
{
	var_6_int = 20; // 0x294 PushI
	var_7_bool = var_5_int == var_6_int; // 0x295 Eq
	if(var_7_bool == 0) goto Label_665; // 0x296 JumpB
	ResetAAS(); // 0x297 Func
	
Label_665:
	return 0; // 0x299 Return
}


func_666(var_44_bool, var_45_object)
{
	var_46_object = Obj(); var_47_int = 0; var_48_object = Obj(); var_49_int = 0; // 0x29a PushV
	var_50_bool = 0; var_51_object = Obj(); // 0x29b PushV
	var_51_object = var_45_object; // 0x29c Mov
	func_593(var_50_bool, var_51_object); // 0x29d Call
	var_84_bool = var_50_bool == 0; // 0x29f Not
	if(var_84_bool == 0) goto Label_675; // 0x2a0 JumpB
	var_44_bool = 0; // 0x2a1 MovB
	return 4; // 0x2a2 Return
	
Label_675:
	GetActiveScene(var_48_object); // 0x2a3 Func
	var_85_bool = 0; // 0x2a5 PushV
	var_85_bool = 0; // 0x2a6 MovB
	var_86_bool = var_48_object != 0; // 0x2a7 NullNeq
	if(var_86_bool == 0) goto Label_686; // 0x2a8 JumpB
	var_87_string = "GetCurrentRegion"; // 0x2a9 PushS
	var_88_int = 1; // 0x2aa PushI
	var_89_bool = IsFuncExist(var_48_object, var_87_string, var_88_int); // 0x2ab FuncExist
	if(var_89_bool == 0) goto Label_686; // 0x2ac JumpB
	var_85_bool = 1; // 0x2ad MovB
	
Label_686:
	if(var_85_bool == 0) goto Label_692; // 0x2ae JumpB
	GetCurrentRegion(var_49_int); // 0x2af ObjFunc
	var_90_int = GlobalVars[0]; // 0x2b1 PushGE
	var_44_bool = var_49_int == var_90_int; // 0x2b2 Eq2
	return 4; // 0x2b3 Return
	
Label_692:
	var_44_bool = 0; // 0x2b4 MovB
	return 4; // 0x2b5 Return
}


func_410(var_132_string)
{
	var_132_string = "walk"; // 0x19a MovS
	return 0; // 0x19b Return
}


func_412(var_133_string)
{
	var_133_string = "run"; // 0x19c MovS
	return 0; // 0x19d Return
}


func_414()
{
	var_31_float = 0; var_32_float = 0; // 0x19e PushV
	var_33_int = 30; // 0x19f PushI
	rand(var_32_float, var_33_int); // 0x1a0 Func
	Sleep(var_32_float); // 0x1a2 Func
	return 2; // 0x1a4 Return
}


func_552(var_65_bool)
{
	var_67_bool = 0; var_68_bool = 0; // 0x228 PushV
	IsDead(var_68_bool); // 0x229 ObjFunc
	var_65_bool = var_68_bool; // 0x22b Mov
	return 2; // 0x22c Return
}


func_557(var_54_bool, var_55_object)
{
	var_56_object = Obj(); var_57_object = Obj(); var_58_object = Obj(); var_59_object = Obj(); // 0x22d PushV
	var_60_bool = var_55_object == 0; // 0x22e NullEq
	if(var_60_bool == 0) goto Label_562; // 0x22f JumpB
	var_54_bool = 0; // 0x230 MovB
	return 4; // 0x231 Return
	
Label_562:
	var_61_bool = 0; // 0x232 PushV
	var_61_bool = 0; // 0x233 MovB
	var_62_string = "IsDead"; // 0x234 PushS
	var_63_int = 1; // 0x235 PushI
	var_64_bool = IsFuncExist(var_55_object, var_62_string, var_63_int); // 0x236 FuncExist
	if(var_64_bool == 0) goto Label_574; // 0x237 JumpB
	var_65_bool = 0; var_66_object = Obj(); // 0x238 PushV
	var_66_object = var_55_object; // 0x239 Mov
	func_552(var_66_object); // 0x23a Call
	if(var_65_bool == 0) goto Label_574; // 0x23c JumpB
	var_61_bool = 1; // 0x23d MovB
	
Label_574:
	if(var_61_bool == 0) goto Label_577; // 0x23e JumpB
	var_54_bool = 0; // 0x23f MovB
	return 4; // 0x240 Return
	
Label_577:
	GetScene(var_58_object); // 0x241 Func
	var_69_bool = var_58_object == 0; // 0x243 NullEq
	if(var_69_bool == 0) goto Label_583; // 0x244 JumpB
	var_54_bool = 0; // 0x245 MovB
	return 4; // 0x246 Return
	
Label_583:
	GetScene(var_59_object); // 0x247 ObjFunc
	var_70_bool = var_58_object != var_59_object; // 0x249 Neq
	if(var_70_bool == 0) goto Label_589; // 0x24a JumpB
	var_54_bool = 0; // 0x24b MovB
	return 4; // 0x24c Return
	
Label_589:
	var_54_bool = 1; // 0x24d MovB
	return 4; // 0x24e Return
}


func_438(var_64_cvector)
{
	var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); // 0x1b6 PushV
	GetPosition(var_66_cvector); // 0x1b7 Func
	var_64_cvector = var_66_cvector; // 0x1b9 Mov
	return 2; // 0x1ba Return
}


func_184(var_0_bool, var_1_bool)
{
	var_0_bool = 1; // 0xb8 TMovB
	var_1_bool = 0; // 0xb9 TMovB
	Stop(); // 0xba Func
	StopGroup0(); // 0xbc Func
	return 0; // 0xbe Return
}


func_443(var_67_cvector)
{
	var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); // 0x1bb PushV
	GetPosition(var_70_cvector); // 0x1bc ObjFunc
	var_67_cvector = var_70_cvector; // 0x1be Mov
	return 2; // 0x1bf Return
}


func_448(var_40_object)
{
	var_41_object = Obj(); var_42_object = Obj(); // 0x1c0 PushV
	var_43_string = "player"; // 0x1c1 PushS
	FindActor(var_42_object, var_43_string); // 0x1c2 Func
	var_40_object = var_42_object; // 0x1c4 Mov
	return 2; // 0x1c5 Return
}


func_455(var_72_bool, var_73_object, var_74_string)
{
	var_75_bool = 0; var_76_bool = 0; // 0x1c7 PushV
	var_77_string = "HasProperty"; // 0x1c8 PushS
	var_78_int = 2; // 0x1c9 PushI
	var_79_bool = IsFuncExist(var_73_object, var_77_string, var_78_int); // 0x1ca FuncExist
	var_80_bool = var_79_bool == 0; // 0x1cb Not
	if(var_80_bool == 0) goto Label_463; // 0x1cc JumpB
	var_72_bool = 0; // 0x1cd MovB
	return 2; // 0x1ce Return
	
Label_463:
	HasProperty(var_74_string, var_76_bool); // 0x1cf ObjFunc
	var_72_bool = var_76_bool; // 0x1d1 Mov
	return 2; // 0x1d2 Return
}


func_200(var_29_bool)
{
	var_29_bool = 0; // 0xc8 MovB
	return 0; // 0xc9 Return
}


func_202()
{
	var_38_object = Obj(); var_39_object = Obj(); // 0xca PushV
	var_40_object = Obj(); // 0xcb PushV
	func_448(var_40_object); // 0xcc Call
	var_39_object = var_40_object; // 0xcd Mov
	var_44_bool = 0; var_45_object = Obj(); // 0xcf PushV
	var_45_object = var_39_object; // 0xd0 Mov
	func_666(var_44_bool, var_45_object); // 0xd1 Call
	var_91_bool = var_44_bool == 0; // 0xd3 Not
	if(var_91_bool == 0) goto Label_214; // 0xd4 JumpB
	return 2; // 0xd5 Return
	
Label_214:
	var_92_bool = 0; var_93_object = Obj(); var_94_float = 0; var_95_float = 0; var_96_bool = 0; var_97_bool = 0; // 0xd6 PushV
	var_93_object = var_39_object; // 0xd7 Mov
	var_94_float = 100; // 0xd8 MovI
	var_95_float = 0; // 0xd9 MovI
	var_96_bool = 0; // 0xda MovB
	var_97_bool = 0; // 0xdb MovB
	func_270(var_38_object, var_39_object, var_92_bool, var_93_object, var_94_float, var_95_float, var_96_bool, var_97_bool); // 0xdc Call
	return 2; // 0xde Return
}


func_593(var_50_bool, var_51_object)
{
	var_52_int = 0; var_53_int = 0; // 0x251 PushV
	var_54_bool = 0; var_55_object = Obj(); // 0x252 PushV
	var_55_object = var_51_object; // 0x253 Mov
	func_557(var_54_bool, var_55_object); // 0x254 Call
	var_71_bool = var_54_bool == 0; // 0x256 Not
	if(var_71_bool == 0) goto Label_602; // 0x257 JumpB
	var_50_bool = 0; // 0x258 MovB
	return 2; // 0x259 Return
	
Label_602:
	var_72_bool = 0; var_73_object = Obj(); var_74_string = ""; // 0x25a PushV
	var_73_object = var_51_object; // 0x25b Mov
	var_74_string = "noaccess"; // 0x25c MovS
	func_455(var_72_bool, var_73_object, var_74_string); // 0x25d Call
	var_81_bool = var_72_bool == 0; // 0x25f Not
	if(var_81_bool == 0) goto Label_611; // 0x260 JumpB
	var_50_bool = 1; // 0x261 MovB
	return 2; // 0x262 Return
	
Label_611:
	var_82_string = "noaccess"; // 0x263 PushS
	GetProperty(var_82_string, var_53_int); // 0x264 ObjFunc
	var_83_int = 0; // 0x266 PushI
	var_50_bool = var_53_int == var_83_int; // 0x267 Eq2
	return 2; // 0x268 Return
}


func_467(var_106_bool, var_107_object, var_108_string, var_109_float, var_110_float, var_111_float)
{
	var_112_float = 0; var_113_float = 0; // 0x1d3 PushV
	var_114_bool = 0; var_115_object = Obj(); var_116_string = ""; // 0x1d4 PushV
	var_115_object = var_107_object; // 0x1d5 Mov
	var_116_string = var_108_string; // 0x1d6 Mov
	func_455(var_114_bool, var_115_object, var_116_string); // 0x1d7 Call
	var_117_bool = var_114_bool == 0; // 0x1d9 Not
	if(var_117_bool == 0) goto Label_477; // 0x1da JumpB
	var_106_bool = 0; // 0x1db MovB
	return 2; // 0x1dc Return
	
Label_477:
	GetProperty(var_108_string, var_113_float); // 0x1dd ObjFunc
	var_118_float = 0; var_119_float = 0; var_120_float = 0; var_121_float = 0; // 0x1df PushV
	var_119_float = var_113_float + var_109_float; // 0x1e0 Add2
	var_120_float = var_110_float; // 0x1e1 Mov
	var_121_float = var_111_float; // 0x1e2 Mov
	func_627(var_118_float, var_119_float, var_120_float, var_121_float); // 0x1e3 Call
	SetProperty(var_108_string, var_118_float); // 0x1e5 ObjFunc
	var_106_bool = 1; // 0x1e7 MovB
	return 2; // 0x1e8 Return
}


func_489(var_76_float, var_77_object, var_78_float)
{
	var_79_int = 0; var_80_float = 0; var_81_float = 0; var_82_int = 0; var_83_float = 0; var_84_float = 0; // 0x1e9 PushV
	var_85_bool = 0; var_86_object = Obj(); var_87_string = ""; // 0x1ea PushV
	var_86_object = var_77_object; // 0x1eb Mov
	var_87_string = "disease"; // 0x1ec MovS
	func_455(var_85_bool, var_86_object, var_87_string); // 0x1ed Call
	var_88_bool = var_85_bool == 0; // 0x1ef Not
	if(var_88_bool == 0) goto Label_499; // 0x1f0 JumpB
	var_76_float = 0; // 0x1f1 MovI
	return 6; // 0x1f2 Return
	
Label_499:
	var_89_bool = 0; var_90_object = Obj(); var_91_string = ""; // 0x1f3 PushV
	var_90_object = var_77_object; // 0x1f4 Mov
	var_91_string = "armor_disease"; // 0x1f5 MovS
	func_455(var_89_bool, var_90_object, var_91_string); // 0x1f6 Call
	if(var_89_bool == 0) goto Label_519; // 0x1f8 JumpB
	var_92_string = "armor_disease"; // 0x1f9 PushS
	GetProperty(var_92_string, var_82_int); // 0x1fa ObjFunc
	var_93_int = 100; // 0x1fc PushI
	var_94_bool = var_82_int < var_93_int; // 0x1fd LT
	if(var_94_bool == 0) goto Label_517; // 0x1fe JumpB
	var_95_int = 1; // 0x1ff PushI
	var_96_float = 100.0; // 0x200 PushF
	var_97_float = var_82_int / var_96_float; // 0x201 Div
	var_98_int = var_95_int - var_97_float; // 0x202 Sub
	var_78_float = var_78_float * var_98_int; // 0x203 Mult2
	goto Label_519; // 0x204 Jump
	
Label_519:
	var_99_bool = 0; var_100_object = Obj(); var_101_string = ""; // 0x207 PushV
	var_100_object = var_77_object; // 0x208 Mov
	var_101_string = "immunity"; // 0x209 MovS
	func_455(var_99_bool, var_100_object, var_101_string); // 0x20a Call
	if(var_99_bool == 0) goto Label_542; // 0x20c JumpB
	var_102_string = "immunity"; // 0x20d PushS
	GetProperty(var_102_string, var_84_float); // 0x20e ObjFunc
	var_103_bool = var_84_float < var_78_float; // 0x210 LT
	if(var_103_bool == 0) goto Label_536; // 0x211 JumpB
	var_104_string = "immunity"; // 0x212 PushS
	var_105_int = 0; // 0x213 PushI
	SetProperty(var_104_string, var_105_int); // 0x214 ObjFunc
	var_83_float = var_78_float - var_84_float; // 0x216 Sub2
	goto Label_542; // 0x217 Jump
	
Label_542:
	var_106_bool = 0; var_107_object = Obj(); var_108_string = ""; var_109_float = 0; var_110_float = 0; var_111_float = 0; // 0x21e PushV
	var_107_object = var_77_object; // 0x21f Mov
	var_108_string = "disease"; // 0x220 MovS
	var_109_float = var_83_float; // 0x221 Mov
	var_110_float = 0; // 0x222 MovI
	var_111_float = 1; // 0x223 MovI
	func_467(var_106_bool, var_107_object, var_108_string, var_109_float, var_110_float, var_111_float); // 0x224 Call
	var_76_float = var_78_float; // 0x226 Mov
	return 6; // 0x227 Return
	
Label_536:
	var_124_string = "immunity"; // 0x218 PushS
	var_125_int = var_84_float - var_78_float; // 0x219 Sub
	SetProperty(var_124_string, var_125_int); // 0x21a ObjFunc
	var_76_float = var_78_float; // 0x21c Mov
	return 6; // 0x21d Return
	
Label_517:
	var_76_float = 0; // 0x205 MovI
	return 6; // 0x206 Return
}


func_617(var_132_object)
{
	var_133_object = Obj(); var_134_object = Obj(); // 0x269 PushV
	self(var_134_object); // 0x26a Func
	var_132_object = var_134_object; // 0x26c Mov
	return 2; // 0x26d Return
}


func_623(var_61_float, var_62_cvector, var_63_cvector)
{
	var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); // 0x26f PushV
	var_72_cvector = var_63_cvector - var_62_cvector; // 0x270 Sub2
	var_61_float = var_72_cvector | var_72_cvector; // 0x271 Or2
	return 2; // 0x272 Return
}


func_627(var_118_float, var_119_float, var_120_float, var_121_float)
{
	var_122_bool = var_119_float < var_120_float; // 0x274 LT
	if(var_122_bool == 0) goto Label_632; // 0x275 JumpB
	var_118_float = var_120_float; // 0x276 Mov
	return 0; // 0x277 Return
	
Label_632:
	var_123_bool = var_119_float > var_121_float; // 0x278 GT
	if(var_123_bool == 0) goto Label_636; // 0x279 JumpB
	var_118_float = var_121_float; // 0x27a Mov
	return 0; // 0x27b Return
	
Label_636:
	var_118_float = var_119_float; // 0x27c Mov
	return 0; // 0x27d Return
}


func_372(var_0_bool, var_1_bool, var_8_int)
{
	var_9_int = 0; // 0x175 PushI
	var_10_bool = var_8_int != var_9_int; // 0x176 Neq
	if(var_10_bool == 0) goto Label_377; // 0x177 JumpB
	return 0; // 0x178 Return
	
Label_377:
	var_11_bool = 0; var_12_object = Obj(); // 0x179 PushV
	var_12_object = var_1_bool; // 0x17a MovT
	func_263(var_11_bool, var_12_object); // 0x17b Call
	var_60_bool = var_11_bool == 0; // 0x17d Not
	if(var_60_bool == 0) goto Label_384; // 0x17e JumpB
	var_0_bool = 1; // 0x17f TMovB
	
Label_384:
	var_61_int = 0; // 0x180 PushI
	KillTimer(var_61_int); // 0x181 Func
	Stop(); // 0x183 Func
	return 0; // 0x185 Return
}


func_120(var_0_bool, var_1_bool)
{
	var_8_float = 0; var_9_cvector = CVector(0,0,0); var_10_cvector = CVector(0,0,0); var_11_float = 0; var_12_bool = 0; var_13_object = Obj(); var_14_bool = 0; var_15_float = 0; var_16_cvector = CVector(0,0,0); var_17_cvector = CVector(0,0,0); var_18_float = 0; var_19_bool = 0; var_20_object = Obj(); var_21_bool = 0; // 0x78 PushV
	var_0_bool = 0; // 0x79 TMovB
	var_1_bool = 0; // 0x7a TMovB
	var_22_float = 0.5; // 0x7b PushF
	rand(var_15_float, var_22_float); // 0x7c Func
	Sleep(var_15_float); // 0x7e Func
	
Label_128:
	var_23_bool = var_0_bool == 0; // 0x80 Not
	if(var_23_bool == 0) goto Label_176; // 0x81 JumpB
	var_24_bool = var_1_bool == 0; // 0x82 Not
	if(var_24_bool == 0) goto Label_148; // 0x83 JumpB
	
Label_132:
	GetPosition(var_17_cvector); // 0x84 Func
	GetCameraFarDistance(var_18_float); // 0x86 Func
	var_25_float = 2.5; // 0x88 PushF
	var_18_float = var_18_float * var_25_float; // 0x89 Mult2
	GetRandomPFPointInCircle(var_16_cvector, var_17_cvector, var_18_float, var_19_bool); // 0x8a Func
	var_26_bool = var_19_bool; // 0x8c Push
	if(var_26_bool == 0) goto Label_143; // 0x8d JumpB
	goto Label_147; // 0x8e Jump
	
Label_147:
	goto Label_149; // 0x93 Jump
	
Label_149:
	FindShiftedPathTo(var_20_object, var_16_cvector); // 0x95 Func
	var_27_bool = var_20_object != 0; // 0x97 NullNeq
	if(var_27_bool == 0) goto Label_171; // 0x98 JumpB
	RotatePath(var_20_object, var_21_bool); // 0x99 Func
	var_28_bool = var_21_bool; // 0x9b Push
	if(var_28_bool == 0) goto Label_170; // 0x9c JumpB
	var_29_bool = 0; // 0x9d PushV
	func_200(var_29_bool); // 0x9e Call
	FollowPath(var_20_object, var_29_bool, var_21_bool); // 0xa0 Func
	var_20_object = 0; // 0xa2 SetNull
	var_30_bool = var_21_bool; // 0xa3 Push
	if(var_30_bool == 0) goto Label_170; // 0xa4 JumpB
	TaskCall(4); // 0xa6 TaskCall
	func_414(); // 0xa7 Call
	TaskReturn(); // 0xa8 TaskReturn
	
Label_170:
	goto Label_174; // 0xaa Jump
	
Label_174:
	var_20_object = 0; // 0xae SetNull
	goto Label_128; // 0xaf Jump
	
Label_171:
	var_34_int = 1; // 0xab PushI
	Sleep(var_34_int); // 0xac Func
	
Label_143:
	var_35_int = 1; // 0x8f PushI
	Sleep(var_35_int); // 0x90 Func
	goto Label_132; // 0x92 Jump
	
Label_148:
	var_1_bool = 0; // 0x94 TMovB
	
Label_176:
	return 14; // 0xb0 Return
}


func_638(var_5_bool, var_6_object)
{
	var_7_bool = 0; var_8_bool = 0; // 0x27e PushV
	IsPlayerActor(var_6_object, var_8_bool); // 0x27f Func
	var_5_bool = 0; // 0x281 MovB
	var_9_bool = var_8_bool; // 0x282 Push
	if(var_9_bool == 0) goto Label_650; // 0x283 JumpB
	var_10_bool = 0; var_11_object = Obj(); // 0x284 PushV
	var_11_object = var_6_object; // 0x285 Mov
	func_593(var_10_bool, var_11_object); // 0x286 Call
	if(var_10_bool == 0) goto Label_650; // 0x288 JumpB
	var_5_bool = 1; // 0x289 MovB
	
Label_650:
	return 2; // 0x28a Return
}


