task_0_event_7(var_0_object, var_1_bool, var_2_cvector, var_3_cvector, var_4_int, var_5_bool, var_6_bool, var_7_bool, var_8_object)
{
	var_9_int = 21; // 0xc2 PushI
	var_10_bool = var_9_int == var_8_object; // 0xc3 Eq
	if(var_10_bool == 0) goto Label_215; // 0xc4 JumpB
	var_3_cvector = var_2_cvector; // 0xc5 TMovT
	var_11_float = GetByIndex(var_6_bool, 1); // 0xc6 PushE
	var_11_float = 0; // 0xc7 MovI
	SetByIndex(var_3_cvector, 1) = var_11_float; // 0xc8 PopE
	GetPFPosition(var_7_bool); // 0xc9 TObjFunc
	var_12_float = GetByIndex(var_7_bool, 1); // 0xcb PushE
	var_12_float = 0; // 0xcc MovI
	SetByIndex(var_2_cvector, 1) = var_12_float; // 0xcd PopE
	var_13_float = 0; var_14_cvector = CVector(0,0,0); var_15_cvector = CVector(0,0,0); // 0xce PushV
	var_14_cvector = var_2_cvector; // 0xcf MovT
	var_15_cvector = var_3_cvector; // 0xd0 MovT
	func_863(var_13_float, var_14_cvector, var_15_cvector); // 0xd1 NEW_2
	var_19_float = 220.0; // 0xd3 PushF
	var_20_bool = var_13_float > var_19_float; // 0xd4 GT
	if(var_20_bool == 0) goto Label_215; // 0xd5 JumpB
	var_1_bool = 1; // 0xd6 TMovB
	
Label_215:
	return 0; // 0xd7 Return
}


task_2_event_7(var_0_object, var_1_bool, var_2_cvector, var_3_cvector, var_4_bool, var_5_bool, var_6_int, var_7_bool, var_8_object)
{
	var_9_int = 0; // 0xee PushV
	var_9_int = var_8_object; // 0xef Mov
	func_935(var_9_int); // 0xf0 NEW_2
	var_12_int = 20; // 0xf2 PushI
	var_13_bool = var_8_object == var_12_int; // 0xf3 Eq
	if(var_13_bool == 0) goto Label_256; // 0xf4 JumpB
	var_14_bool = 0; var_15_object = Obj(); // 0xf5 PushV
	var_16_object = Obj(); // 0xf6 PushV
	func_667(var_16_object); // 0xf7 NEW_2
	var_15_object = var_16_object; // 0xf8 Mov
	func_942(var_14_bool, var_15_object); // 0xfa NEW_2
	if(var_14_bool == 0) goto Label_256; // 0xfc JumpB
	func_356(var_7_bool, var_8_object); // 0xfe NEW_2
	
Label_256:
	return 0; // 0x100 Return
}


task_2_event_1(var_0_object, var_1_bool, var_2_cvector, var_3_cvector, var_4_bool, var_5_bool, var_6_object, var_7_bool, var_8_object)
{
	var_9_bool = 0; var_10_object = Obj(); // 0x102 PushV
	var_10_object = var_8_object; // 0x103 Mov
	func_893(var_9_bool, var_10_object); // 0x104 NEW_2
	if(var_9_bool == 0) goto Label_270; // 0x106 JumpB
	func_356(var_7_bool, var_8_object); // 0x108 NEW_2
	var_48_object = Obj(); // 0x10a PushV
	var_48_object = var_8_object; // 0x10b Mov
	func_919(var_48_object); // 0x10c NEW_2
	
Label_270:
	return 0; // 0x10e Return
}


task_2_event_3(var_0_object, var_1_bool, var_2_cvector, var_3_cvector, var_4_bool, var_5_bool, var_6_object, var_7_bool, var_8_object)
{
	var_9_bool = 0; var_10_object = Obj(); // 0x110 PushV
	var_10_object = var_8_object; // 0x111 Mov
	func_906(var_9_bool, var_10_object); // 0x112 NEW_2
	if(var_9_bool == 0) goto Label_284; // 0x114 JumpB
	func_356(var_7_bool, var_8_object); // 0x116 NEW_2
	var_48_object = Obj(); // 0x118 PushV
	var_48_object = var_8_object; // 0x119 Mov
	func_927(var_48_object); // 0x11a NEW_2
	
Label_284:
	return 0; // 0x11c Return
}


task_2_event_10(var_0_object, var_1_bool, var_2_cvector, var_3_cvector, var_4_bool, var_5_bool, var_6_object, var_7_bool, var_8_object)
{
	RequestClearPath(var_8_object); // 0x15e Func
	return 0; // 0x160 Return
}


task_2_event_28(var_0_object, var_1_bool, var_2_cvector, var_3_cvector, var_4_bool, var_5_bool, var_6_bool, var_7_object)
{
	Stop(); // 0x161 Func
	return 0; // 0x163 Return
}


task_2_event_41(var_0_object, var_1_bool, var_2_cvector, var_3_cvector, var_4_bool, var_5_bool, var_6_object, var_7_bool, var_8_object)
{
	func_356(var_7_bool, var_8_object); // 0x16d NEW_2
	var_9_object = Obj(); // 0x16f PushV
	var_9_object = var_8_object; // 0x170 Mov
	func_981(); // 0x171 NEW_2
	return 0; // 0x173 Return
}


task_3_event_7(var_0_object, var_1_bool, var_2_cvector, var_3_cvector, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_int)
{
	var_9_int = 0; // 0x196 PushV
	var_9_int = var_8_int; // 0x197 Mov
	func_935(var_9_int); // 0x198 NEW_2
	var_12_int = 0; // 0x19a PushV
	var_12_int = var_8_int; // 0x19b Mov
	func_567(var_7_object, var_8_int, var_12_int); // 0x19c NEW_2
	var_77_int = 20; // 0x19e PushI
	var_78_bool = var_8_int == var_77_int; // 0x19f Eq
	if(var_78_bool == 0) goto Label_429; // 0x1a0 JumpB
	var_79_bool = 0; var_80_object = Obj(); // 0x1a1 PushV
	var_81_object = Obj(); // 0x1a2 PushV
	func_667(var_81_object); // 0x1a3 NEW_2
	var_80_object = var_81_object; // 0x1a4 Mov
	func_942(var_79_bool, var_80_object); // 0x1a6 NEW_2
	var_85_bool = var_79_bool == 0; // 0x1a8 Not
	if(var_85_bool == 0) goto Label_429; // 0x1a9 JumpB
	func_589(var_8_int); // 0x1ab NEW_2
	
Label_429:
	return 0; // 0x1ad Return
}


task_3_event_1(var_0_object, var_1_bool, var_2_cvector, var_3_cvector, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object)
{
	var_9_bool = 0; var_10_object = Obj(); // 0x1af PushV
	var_10_object = var_8_object; // 0x1b0 Mov
	func_893(var_9_bool, var_10_object); // 0x1b1 NEW_2
	if(var_9_bool == 0) goto Label_443; // 0x1b3 JumpB
	func_589(var_8_object); // 0x1b5 NEW_2
	var_49_object = Obj(); // 0x1b7 PushV
	var_49_object = var_8_object; // 0x1b8 Mov
	func_919(var_49_object); // 0x1b9 NEW_2
	
Label_443:
	return 0; // 0x1bb Return
}


task_3_event_3(var_0_object, var_1_bool, var_2_cvector, var_3_cvector, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object)
{
	var_9_bool = 0; var_10_object = Obj(); // 0x1bd PushV
	var_10_object = var_8_object; // 0x1be Mov
	func_906(var_9_bool, var_10_object); // 0x1bf NEW_2
	if(var_9_bool == 0) goto Label_457; // 0x1c1 JumpB
	func_589(var_8_object); // 0x1c3 NEW_2
	var_49_object = Obj(); // 0x1c5 PushV
	var_49_object = var_8_object; // 0x1c6 Mov
	func_927(var_49_object); // 0x1c7 NEW_2
	
Label_457:
	return 0; // 0x1c9 Return
}


task_3_event_10(var_0_object, var_1_bool, var_2_cvector, var_3_cvector, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object)
{
	RequestClearPath(var_8_object); // 0x24a Func
	return 0; // 0x24c Return
}


task_3_event_41(var_0_object, var_1_bool, var_2_cvector, var_3_cvector, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object)
{
	func_589(var_8_object); // 0x256 NEW_2
	var_10_object = Obj(); // 0x258 PushV
	var_10_object = var_8_object; // 0x259 Mov
	func_981(); // 0x25a NEW_2
	return 0; // 0x25c Return
}


task_4_event_7(var_0_object, var_1_bool, var_2_cvector, var_3_cvector, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_int)
{
	var_9_int = 0; // 0x284 PushV
	var_9_int = var_8_int; // 0x285 Mov
	func_935(var_9_int); // 0x286 NEW_2
	return 0; // 0x288 Return
}


event_41(var_0_object, var_1_bool, var_2_cvector, var_3_cvector, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object)
{
	return 0; // 0x3d6 Return
}


main(var_0_object, var_1_bool, var_2_cvector, var_3_cvector, var_4_bool, var_5_bool, var_6_bool, var_7_object)
{
	var_8_string = "fog hunter inited"; // 0xd8 PushS
	Trace(var_8_string); // 0xd9 Func
	PutOnGrid(); // 0xdb Func
	var_9_int = 20; // 0xdd PushI
	var_10_int = 1; // 0xde PushI
	SetTimer(var_9_int, var_10_int); // 0xdf Func
	
Label_225:
	TaskCall(2); // 0xe2 TaskCall
	func_285(var_11_bool, var_12_bool); // 0xe3 NEW_2
	TaskReturn(); // 0xe4 TaskReturn
	TaskCall(3); // 0xe7 TaskCall
	func_380(); // 0xe8 NEW_2
	TaskReturn(); // 0xe9 TaskReturn
	goto Label_225; // 0xeb Jump
}


func_0(var_0_object, var_50_object)
{
	var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_float = 0; var_58_float = 0; var_59_bool = 0; var_60_cvector = CVector(0,0,0); var_61_float = 0; var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_float = 0; var_65_float = 0; var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_float = 0; var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_float = 0; var_72_float = 0; var_73_bool = 0; var_74_cvector = CVector(0,0,0); var_75_float = 0; var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_float = 0; var_79_float = 0; var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); var_82_float = 0; // 0x0 PushV
	var_0_object = var_50_object; // 0x1 TMov
	var_83_string = "TFogAttack"; // 0x2 PushS
	Trace(var_83_string); // 0x3 Func
	var_84_float = 0.8; // 0x5 PushF
	var_85_float = 2.0; // 0x6 PushF
	FogLinear(var_84_float, var_85_float); // 0x7 Func
	var_71_float = 0; // 0x9 MovI
	GetPosition(var_69_cvector); // 0xa Func
	GetPFPosition(var_70_cvector); // 0xc ObjFunc
	var_73_bool = 1; // 0xe MovB
	
Label_15:
	var_86_bool = 1; // 0xf PushB
	if(var_86_bool == 0) goto Label_120; // 0x10 JumpB
	var_87_string = "Watching"; // 0x11 PushS
	Trace(var_87_string); // 0x12 Func
	GetPFPosition(var_70_cvector); // 0x14 ObjFunc
	GetPosition(var_74_cvector); // 0x16 Func
	var_88_float = 0; var_89_cvector = CVector(0,0,0); var_90_cvector = CVector(0,0,0); // 0x18 PushV
	var_89_cvector = var_74_cvector; // 0x19 Mov
	var_90_cvector = var_70_cvector; // 0x1a Mov
	func_868(var_88_float, var_89_cvector, var_90_cvector); // 0x1b NEW_2
	var_75_float = var_88_float; // 0x1c Mov
	var_93_float = 160000.0; // 0x1e PushF
	var_94_bool = var_75_float > var_93_float; // 0x1f GT
	if(var_94_bool == 0) goto Label_57; // 0x20 JumpB
	var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0); // 0x21 PushV
	var_96_cvector = var_70_cvector - var_74_cvector; // 0x22 Sub2
	func_853(var_95_cvector, var_96_cvector); // 0x23 NEW_2
	var_77_cvector = var_95_cvector; // 0x24 Mov
	var_102_float = sqrt(var_75_float); // 0x26 Sqrt
	var_103_float = 360.0; // 0x27 PushF
	var_78_float = var_102_float - var_103_float; // 0x28 Sub2
	var_104_float = var_77_cvector * var_78_float; // 0x29 Mult
	var_76_cvector = var_74_cvector + var_104_float; // 0x2a Add2
	var_105_bool = var_73_bool; // 0x2b Push
	if(var_105_bool == 0) goto Label_51; // 0x2c JumpB
	var_106_int = 700; // 0x2d PushI
	MovePoint(var_76_cvector, var_106_int); // 0x2e Func
	var_107_float = 700.0; // 0x30 PushF
	var_72_float = var_78_float / var_78_float; // 0x31 Div2
	goto Label_56; // 0x32 Jump
	
Label_56:
	goto Label_61; // 0x38 Jump
	
Label_61:
	var_108_bool = 0; var_109_object = Obj(); // 0x3d PushV
	var_109_object = var_50_object; // 0x3e Mov
	func_823(var_108_bool, var_109_object); // 0x3f NEW_2
	var_110_bool = var_108_bool == 0; // 0x41 Not
	if(var_110_bool == 0) goto Label_80; // 0x42 JumpB
	var_111_bool = var_73_bool == 0; // 0x43 Not
	if(var_111_bool == 0) goto Label_72; // 0x44 JumpB
	var_112_int = 21; // 0x45 PushI
	KillTimer(var_112_int); // 0x46 Func
	
Label_72:
	var_113_int = 0; // 0x48 PushI
	var_114_float = 0.5; // 0x49 PushF
	FogLinear(var_113_int, var_114_float); // 0x4a Func
	var_115_float = 0.5; // 0x4c PushF
	Sleep(var_115_float); // 0x4d Func
	return 28; // 0x4f Return
	
Label_80:
	var_116_bool = var_73_bool; // 0x50 Push
	if(var_116_bool == 0) goto Label_90; // 0x51 JumpB
	var_73_bool = 0; // 0x52 MovB
	GetPFPosition(var_81_cvector); // 0x53 ObjFunc
	var_117_int = 21; // 0x55 PushI
	var_118_int = 1; // 0x56 PushI
	SetTimer(var_117_int, var_118_int); // 0x57 Func
	goto Label_93; // 0x59 Jump
	
Label_93:
	var_71_float = var_71_float + var_72_float; // 0x5d Add2
	var_119_float = 12.0; // 0x5e PushF
	var_120_bool = var_71_float >= var_119_float; // 0x5f GE
	if(var_120_bool == 0) goto Label_119; // 0x60 JumpB
	var_121_string = "Leaving"; // 0x61 PushS
	Trace(var_121_string); // 0x62 Func
	var_122_int = 21; // 0x64 PushI
	KillTimer(var_122_int); // 0x65 Func
	var_123_int = 0; // 0x67 PushI
	var_124_float = 1.0; // 0x68 PushF
	FogLinear(var_123_int, var_124_float); // 0x69 Func
	var_125_int = 900; // 0x6b PushI
	MovePoint(var_69_cvector, var_125_int); // 0x6c Func
	var_126_int = 5; // 0x6e PushI
	Sleep(var_126_int); // 0x6f Func
	var_127_object = Obj(); // 0x71 PushV
	func_847(var_127_object); // 0x72 NEW_2
	RemoveActor(var_127_object); // 0x74 Func
	return 28; // 0x76 Return
	
Label_119:
	goto Label_15; // 0x77 Jump
	
Label_90:
	var_130_bool = var_1_bool; // 0x5a PushT
	if(var_130_bool == 0) goto Label_93; // 0x5b JumpB
	goto Label_120; // 0x5c Jump
	
Label_120:
	var_131_int = 21; // 0x78 PushI
	KillTimer(var_131_int); // 0x79 Func
	var_132_string = "Attacking"; // 0x7b PushS
	Trace(var_132_string); // 0x7c Func
	var_133_int = 1; // 0x7e PushI
	var_134_float = 0.5; // 0x7f PushF
	FogLinear(var_133_int, var_134_float); // 0x80 Func
	GetHeight(var_79_float); // 0x82 Func
	var_80_cvector = CVector(0.0, 0.0, 0.0); // 0x84 MovV
	var_135_float = GetByIndex(var_80_cvector, 1); // 0x85 PushE
	var_135_float = var_79_float; // 0x86 Mov
	SetByIndex(var_80_cvector, 1) = var_135_float; // 0x87 PopE
	var_136_string = "breath"; // 0x88 PushS
	PlayGlobalSound(var_136_string, var_80_cvector); // 0x89 Func
	GetPFPosition(var_81_cvector); // 0x8b ObjFunc
	var_137_int = 500; // 0x8d PushI
	MovePoint(var_81_cvector, var_137_int); // 0x8e Func
	var_138_bool = 0; var_139_object = Obj(); // 0x90 PushV
	var_139_object = var_50_object; // 0x91 Mov
	func_823(var_138_bool, var_139_object); // 0x92 NEW_2
	if(var_138_bool == 0) goto Label_177; // 0x94 JumpB
	var_140_float = 0; var_141_cvector = CVector(0,0,0); var_142_cvector = CVector(0,0,0); // 0x95 PushV
	var_143_cvector = CVector(0,0,0); // 0x96 PushV
	func_649(var_143_cvector); // 0x97 NEW_2
	var_141_cvector = var_143_cvector; // 0x98 Mov
	var_146_cvector = CVector(0,0,0); var_147_object = Obj(); // 0x9a PushV
	var_147_object = var_50_object; // 0x9b Mov
	func_654(var_147_object); // 0x9c NEW_2
	var_142_cvector = var_146_cvector; // 0x9d Mov
	func_868(var_140_float, var_141_cvector, var_142_cvector); // 0x9f NEW_2
	var_150_float = 90000.0; // 0xa1 PushF
	var_151_bool = var_140_float <= var_150_float; // 0xa2 LE
	if(var_151_bool == 0) goto Label_177; // 0xa3 JumpB
	var_152_string = "attack"; // 0xa4 PushS
	PlaySound(var_152_string); // 0xa5 Func
	var_153_float = 0; var_154_object = Obj(); var_155_float = 0; // 0xa7 PushV
	var_154_object = var_50_object; // 0xa8 Mov
	var_155_float = 0.2; // 0xa9 MovF
	func_713(var_153_float, var_154_object, var_155_float); // 0xaa NEW_2
	var_82_float = var_153_float; // 0xab Mov
	var_211_int = 5; // 0xad PushI
	var_212_float = 0.2; // 0xae PushF
	ReportHit(var_50_object, var_211_int, var_82_float, var_212_float); // 0xaf Func
	
Label_177:
	var_213_bool = 0; // 0xb1 PushB
	SetVisirVisibility(var_213_bool); // 0xb2 Func
	var_214_int = 0; // 0xb4 PushI
	var_215_int = 1; // 0xb5 PushI
	FogLinear(var_214_int, var_215_int); // 0xb6 Func
	var_216_int = 5; // 0xb8 PushI
	Sleep(var_216_int); // 0xb9 Func
	var_217_object = Obj(); // 0xbb PushV
	func_847(var_217_object); // 0xbc NEW_2
	RemoveActor(var_217_object); // 0xbe Func
	return 28; // 0xc0 Return
	
Label_51:
	var_218_int = 220; // 0x33 PushI
	MovePoint(var_76_cvector, var_218_int); // 0x34 Func
	var_219_float = 100.0; // 0x36 PushF
	var_72_float = var_78_float / var_78_float; // 0x37 Div2
	
Label_57:
	var_220_float = 1.0; // 0x39 PushF
	Sleep(var_220_float); // 0x3a Func
	var_72_float = 1.0; // 0x3c MovF
}


func_649(var_143_cvector)
{
	var_144_cvector = CVector(0,0,0); var_145_cvector = CVector(0,0,0); // 0x289 PushV
	GetPosition(var_145_cvector); // 0x28a Func
	var_143_cvector = var_145_cvector; // 0x28c Mov
	return 2; // 0x28d Return
}


func_906(var_9_bool, var_10_object)
{
	var_11_bool = 0; var_12_bool = 0; // 0x38a PushV
	IsPlayerActor(var_10_object, var_12_bool); // 0x38b Func
	var_9_bool = 0; // 0x38d MovB
	var_13_bool = var_12_bool; // 0x38e Push
	if(var_13_bool == 0) goto Label_918; // 0x38f JumpB
	var_14_bool = 0; var_15_object = Obj(); // 0x390 PushV
	var_15_object = var_10_object; // 0x391 Mov
	func_823(var_14_bool, var_15_object); // 0x392 NEW_2
	if(var_14_bool == 0) goto Label_918; // 0x394 JumpB
	var_9_bool = 1; // 0x395 MovB
	
Label_918:
	return 2; // 0x396 Return
}


func_654(var_146_cvector)
{
	var_148_cvector = CVector(0,0,0); var_149_cvector = CVector(0,0,0); // 0x28e PushV
	GetPosition(var_149_cvector); // 0x28f ObjFunc
	var_146_cvector = var_149_cvector; // 0x291 Mov
	return 2; // 0x292 Return
}


func_782(var_91_bool)
{
	var_93_bool = 0; var_94_bool = 0; // 0x30e PushV
	IsDead(var_94_bool); // 0x30f ObjFunc
	var_91_bool = var_94_bool; // 0x311 Mov
	return 2; // 0x312 Return
}


func_787(var_80_bool, var_81_object)
{
	var_82_object = Obj(); var_83_object = Obj(); var_84_object = Obj(); var_85_object = Obj(); // 0x313 PushV
	var_86_bool = var_81_object == 0; // 0x314 NullEq
	if(var_86_bool == 0) goto Label_792; // 0x315 JumpB
	var_80_bool = 0; // 0x316 MovB
	return 4; // 0x317 Return
	
Label_792:
	var_87_bool = 0; // 0x318 PushV
	var_87_bool = 0; // 0x319 MovB
	var_88_string = "IsDead"; // 0x31a PushS
	var_89_int = 1; // 0x31b PushI
	var_90_bool = IsFuncExist(var_81_object, var_88_string, var_89_int); // 0x31c FuncExist
	if(var_90_bool == 0) goto Label_804; // 0x31d JumpB
	var_91_bool = 0; var_92_object = Obj(); // 0x31e PushV
	var_92_object = var_81_object; // 0x31f Mov
	func_782(var_92_object); // 0x320 NEW_2
	if(var_91_bool == 0) goto Label_804; // 0x322 JumpB
	var_87_bool = 1; // 0x323 MovB
	
Label_804:
	if(var_87_bool == 0) goto Label_807; // 0x324 JumpB
	var_80_bool = 0; // 0x325 MovB
	return 4; // 0x326 Return
	
Label_807:
	GetScene(var_84_object); // 0x327 Func
	var_95_bool = var_84_object == 0; // 0x329 NullEq
	if(var_95_bool == 0) goto Label_813; // 0x32a JumpB
	var_80_bool = 0; // 0x32b MovB
	return 4; // 0x32c Return
	
Label_813:
	GetScene(var_85_object); // 0x32d ObjFunc
	var_96_bool = var_84_object != var_85_object; // 0x32f Neq
	if(var_96_bool == 0) goto Label_819; // 0x330 JumpB
	var_80_bool = 0; // 0x331 MovB
	return 4; // 0x332 Return
	
Label_819:
	var_80_bool = 1; // 0x333 MovB
	return 4; // 0x334 Return
}


func_659(var_118_float)
{
	var_120_cvector = CVector(0,0,0); var_121_cvector = CVector(0,0,0); var_122_cvector = CVector(0,0,0); var_123_cvector = CVector(0,0,0); var_124_cvector = CVector(0,0,0); var_125_cvector = CVector(0,0,0); // 0x293 PushV
	GetPosition(var_123_cvector); // 0x294 Func
	GetPosition(var_124_cvector); // 0x296 ObjFunc
	var_125_cvector = var_124_cvector - var_123_cvector; // 0x298 Sub2
	var_118_float = var_125_cvector | var_125_cvector; // 0x299 Or2
	return 6; // 0x29a Return
}


func_919(var_49_object)
{
	var_50_object = Obj(); // 0x398 PushV
	var_50_object = var_49_object; // 0x399 Mov
	TaskCall(0); // 0x39a TaskCall
	func_0(var_54_cvector, var_50_object); // 0x39b NEW_2
	TaskReturn(); // 0x39c TaskReturn
	return 0; // 0x39e Return
}


func_667(var_66_object)
{
	var_67_object = Obj(); var_68_object = Obj(); // 0x29b PushV
	var_69_string = "player"; // 0x29c PushS
	FindActor(var_68_object, var_69_string); // 0x29d Func
	var_66_object = var_68_object; // 0x29f Mov
	return 2; // 0x2a0 Return
}


func_285(var_0_object, var_1_bool)
{
	var_13_float = 0; var_14_cvector = CVector(0,0,0); var_15_cvector = CVector(0,0,0); var_16_bool = 0; var_17_object = Obj(); var_18_bool = 0; var_19_float = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_bool = 0; var_23_object = Obj(); var_24_bool = 0; // 0x11d PushV
	var_0_object = 0; // 0x11e TMovB
	var_1_bool = 0; // 0x11f TMovB
	var_25_float = 0.5; // 0x120 PushF
	rand(var_19_float, var_25_float); // 0x121 Func
	Sleep(var_19_float); // 0x123 Func
	
Label_293:
	var_26_bool = var_0_object == 0; // 0x125 Not
	if(var_26_bool == 0) goto Label_343; // 0x126 JumpB
	var_27_bool = var_1_bool == 0; // 0x127 Not
	if(var_27_bool == 0) goto Label_312; // 0x128 JumpB
	
Label_297:
	GetPosition(var_21_cvector); // 0x129 Func
	var_28_float = 0; // 0x12b PushV
	func_344(var_28_float); // 0x12c NEW_2
	GetRandomPFPointInCircle(var_20_cvector, var_21_cvector, var_28_float, var_22_bool); // 0x12e Func
	var_31_bool = var_22_bool; // 0x130 Push
	if(var_31_bool == 0) goto Label_307; // 0x131 JumpB
	goto Label_311; // 0x132 Jump
	
Label_311:
	goto Label_313; // 0x137 Jump
	
Label_313:
	var_32_object = Obj(); var_33_cvector = CVector(0,0,0); // 0x139 PushV
	var_33_cvector = var_20_cvector; // 0x13a Mov
	func_374(var_32_object, var_33_cvector); // 0x13b NEW_2
	var_23_object = var_32_object; // 0x13c Mov
	var_36_bool = var_23_object != 0; // 0x13e NullNeq
	if(var_36_bool == 0) goto Label_338; // 0x13f JumpB
	RotatePath(var_23_object, var_24_bool); // 0x140 Func
	var_37_bool = var_24_bool; // 0x142 Push
	if(var_37_bool == 0) goto Label_337; // 0x143 JumpB
	var_38_bool = 0; // 0x144 PushV
	func_372(var_38_bool); // 0x145 NEW_2
	FollowPath(var_23_object, var_38_bool, var_24_bool); // 0x147 Func
	var_23_object = 0; // 0x149 SetNull
	var_39_bool = var_24_bool; // 0x14a Push
	if(var_39_bool == 0) goto Label_337; // 0x14b JumpB
	TaskCall(4); // 0x14d TaskCall
	func_609(); // 0x14e NEW_2
	TaskReturn(); // 0x14f TaskReturn
	
Label_337:
	goto Label_341; // 0x151 Jump
	
Label_341:
	var_23_object = 0; // 0x155 SetNull
	goto Label_293; // 0x156 Jump
	
Label_338:
	var_59_int = 1; // 0x152 PushI
	Sleep(var_59_int); // 0x153 Func
	
Label_307:
	var_60_int = 1; // 0x133 PushI
	Sleep(var_60_int); // 0x134 Func
	goto Label_297; // 0x136 Jump
	
Label_312:
	var_1_bool = 0; // 0x138 TMovB
	
Label_343:
	return 12; // 0x157 Return
}


func_927(var_49_object)
{
	var_50_object = Obj(); // 0x3a0 PushV
	var_50_object = var_49_object; // 0x3a1 Mov
	TaskCall(0); // 0x3a2 TaskCall
	func_0(var_54_cvector, var_50_object); // 0x3a3 NEW_2
	TaskReturn(); // 0x3a4 TaskReturn
	return 0; // 0x3a6 Return
}


func_674(var_203_bool, var_204_object)
{
	var_205_bool = 0; var_206_bool = 0; // 0x2a2 PushV
	IsPlayerActor(var_204_object, var_206_bool); // 0x2a3 Func
	var_203_bool = var_206_bool; // 0x2a5 Mov
	return 2; // 0x2a6 Return
}


func_935(var_9_int)
{
	var_10_int = 20; // 0x3a8 PushI
	var_11_bool = var_9_int == var_10_int; // 0x3a9 Eq
	if(var_11_bool == 0) goto Label_941; // 0x3aa JumpB
	ResetAAS(); // 0x3ab Func
	
Label_941:
	return 0; // 0x3ad Return
}


func_679(var_98_bool, var_99_object, var_100_string)
{
	var_101_bool = 0; var_102_bool = 0; // 0x2a7 PushV
	var_103_string = "HasProperty"; // 0x2a8 PushS
	var_104_int = 2; // 0x2a9 PushI
	var_105_bool = IsFuncExist(var_99_object, var_103_string, var_104_int); // 0x2aa FuncExist
	var_106_bool = var_105_bool == 0; // 0x2ab Not
	if(var_106_bool == 0) goto Label_687; // 0x2ac JumpB
	var_98_bool = 0; // 0x2ad MovB
	return 2; // 0x2ae Return
	
Label_687:
	HasProperty(var_100_string, var_102_bool); // 0x2af ObjFunc
	var_98_bool = var_102_bool; // 0x2b1 Mov
	return 2; // 0x2b2 Return
}


func_942(var_70_bool, var_71_object)
{
	var_72_object = Obj(); var_73_int = 0; var_74_object = Obj(); var_75_int = 0; // 0x3ae PushV
	var_76_bool = 0; var_77_object = Obj(); // 0x3af PushV
	var_77_object = var_71_object; // 0x3b0 Mov
	func_823(var_76_bool, var_77_object); // 0x3b1 NEW_2
	var_110_bool = var_76_bool == 0; // 0x3b3 Not
	if(var_110_bool == 0) goto Label_951; // 0x3b4 JumpB
	var_70_bool = 0; // 0x3b5 MovB
	return 4; // 0x3b6 Return
	
Label_951:
	GetActiveScene(var_74_object); // 0x3b7 Func
	var_111_bool = 0; // 0x3b9 PushV
	var_111_bool = 0; // 0x3ba MovB
	var_112_bool = var_74_object != 0; // 0x3bb NullNeq
	if(var_112_bool == 0) goto Label_962; // 0x3bc JumpB
	var_113_string = "GetCurrentRegion"; // 0x3bd PushS
	var_114_int = 1; // 0x3be PushI
	var_115_bool = IsFuncExist(var_74_object, var_113_string, var_114_int); // 0x3bf FuncExist
	if(var_115_bool == 0) goto Label_962; // 0x3c0 JumpB
	var_111_bool = 1; // 0x3c1 MovB
	
Label_962:
	if(var_111_bool == 0) goto Label_978; // 0x3c2 JumpB
	GetCurrentRegion(var_75_int); // 0x3c3 ObjFunc
	var_70_bool = 0; // 0x3c5 MovB
	var_116_int = GlobalVars[0]; // 0x3c6 PushGE
	var_117_bool = var_75_int == var_116_int; // 0x3c7 Eq
	if(var_117_bool == 0) goto Label_977; // 0x3c8 JumpB
	var_118_float = 0; var_119_object = Obj(); // 0x3c9 PushV
	var_119_object = var_71_object; // 0x3ca Mov
	func_659(var_119_object); // 0x3cb NEW_2
	var_126_int = 4000000; // 0x3cd PushI
	var_127_bool = var_118_float < var_126_int; // 0x3ce LT
	if(var_127_bool == 0) goto Label_977; // 0x3cf JumpB
	var_70_bool = 1; // 0x3d0 MovB
	
Label_977:
	return 4; // 0x3d1 Return
	
Label_978:
	var_70_bool = 0; // 0x3d2 MovB
	return 4; // 0x3d3 Return
}


func_691(var_173_bool, var_174_object, var_175_string, var_176_float, var_177_float, var_178_float)
{
	var_179_float = 0; var_180_float = 0; // 0x2b3 PushV
	var_181_bool = 0; var_182_object = Obj(); var_183_string = ""; // 0x2b4 PushV
	var_182_object = var_174_object; // 0x2b5 Mov
	var_183_string = var_175_string; // 0x2b6 Mov
	func_679(var_181_bool, var_182_object, var_183_string); // 0x2b7 NEW_2
	var_184_bool = var_181_bool == 0; // 0x2b9 Not
	if(var_184_bool == 0) goto Label_701; // 0x2ba JumpB
	var_173_bool = 0; // 0x2bb MovB
	return 2; // 0x2bc Return
	
Label_701:
	GetProperty(var_175_string, var_180_float); // 0x2bd ObjFunc
	var_185_float = 0; var_186_float = 0; var_187_float = 0; var_188_float = 0; // 0x2bf PushV
	var_186_float = var_180_float + var_176_float; // 0x2c0 Add2
	var_187_float = var_177_float; // 0x2c1 Mov
	var_188_float = var_178_float; // 0x2c2 Mov
	func_872(var_185_float, var_186_float, var_187_float, var_188_float); // 0x2c3 NEW_2
	SetProperty(var_175_string, var_185_float); // 0x2c5 ObjFunc
	var_173_bool = 1; // 0x2c7 MovB
	return 2; // 0x2c8 Return
}


func_567(var_0_object, var_1_bool, var_12_int)
{
	var_13_int = 0; // 0x238 PushI
	var_14_bool = var_12_int != var_13_int; // 0x239 Neq
	if(var_14_bool == 0) goto Label_572; // 0x23a JumpB
	return 0; // 0x23b Return
	
Label_572:
	var_15_bool = 0; var_16_object = Obj(); // 0x23c PushV
	var_16_object = var_1_bool; // 0x23d MovT
	func_458(var_15_bool, var_16_object); // 0x23e NEW_2
	var_75_bool = var_15_bool == 0; // 0x240 Not
	if(var_75_bool == 0) goto Label_579; // 0x241 JumpB
	var_0_object = 1; // 0x242 TMovB
	
Label_579:
	var_76_int = 0; // 0x243 PushI
	KillTimer(var_76_int); // 0x244 Func
	Stop(); // 0x246 Func
	return 0; // 0x248 Return
}


func_823(var_76_bool, var_77_object)
{
	var_78_int = 0; var_79_int = 0; // 0x337 PushV
	var_80_bool = 0; var_81_object = Obj(); // 0x338 PushV
	var_81_object = var_77_object; // 0x339 Mov
	func_787(var_80_bool, var_81_object); // 0x33a NEW_2
	var_97_bool = var_80_bool == 0; // 0x33c Not
	if(var_97_bool == 0) goto Label_832; // 0x33d JumpB
	var_76_bool = 0; // 0x33e MovB
	return 2; // 0x33f Return
	
Label_832:
	var_98_bool = 0; var_99_object = Obj(); var_100_string = ""; // 0x340 PushV
	var_99_object = var_77_object; // 0x341 Mov
	var_100_string = "noaccess"; // 0x342 MovS
	func_679(var_98_bool, var_99_object, var_100_string); // 0x343 NEW_2
	var_107_bool = var_98_bool == 0; // 0x345 Not
	if(var_107_bool == 0) goto Label_841; // 0x346 JumpB
	var_76_bool = 1; // 0x347 MovB
	return 2; // 0x348 Return
	
Label_841:
	var_108_string = "noaccess"; // 0x349 PushS
	GetProperty(var_108_string, var_79_int); // 0x34a ObjFunc
	var_109_int = 0; // 0x34c PushI
	var_76_bool = var_79_int == var_109_int; // 0x34d Eq2
	return 2; // 0x34e Return
}


func_713(var_153_float, var_154_object, var_155_float)
{
	var_156_float = 0; var_157_float = 0; var_158_float = 0; var_159_float = 0; // 0x2c9 PushV
	var_160_bool = 0; var_161_object = Obj(); var_162_string = ""; // 0x2ca PushV
	var_161_object = var_154_object; // 0x2cb Mov
	var_162_string = "disease"; // 0x2cc MovS
	func_679(var_160_bool, var_161_object, var_162_string); // 0x2cd NEW_2
	var_163_bool = var_160_bool == 0; // 0x2cf Not
	if(var_163_bool == 0) goto Label_723; // 0x2d0 JumpB
	var_153_float = 0; // 0x2d1 MovI
	return 4; // 0x2d2 Return
	
Label_723:
	var_158_float = 0; // 0x2d3 MovI
	var_164_bool = 0; var_165_object = Obj(); var_166_string = ""; // 0x2d4 PushV
	var_165_object = var_154_object; // 0x2d5 Mov
	var_166_string = "armor_disease"; // 0x2d6 MovS
	func_679(var_164_bool, var_165_object, var_166_string); // 0x2d7 NEW_2
	if(var_164_bool == 0) goto Label_735; // 0x2d9 JumpB
	var_167_string = "armor_disease"; // 0x2da PushS
	GetProperty(var_167_string, var_158_float); // 0x2db ObjFunc
	var_168_int = 100; // 0x2dd PushI
	var_158_float = var_158_float / var_158_float; // 0x2de Div2
	
Label_735:
	var_169_bool = 0; var_170_object = Obj(); var_171_string = ""; // 0x2df PushV
	var_170_object = var_154_object; // 0x2e0 Mov
	var_171_string = "immunity"; // 0x2e1 MovS
	func_679(var_169_bool, var_170_object, var_171_string); // 0x2e2 NEW_2
	if(var_169_bool == 0) goto Label_753; // 0x2e4 JumpB
	var_172_string = "immunity"; // 0x2e5 PushS
	GetProperty(var_172_string, var_159_float); // 0x2e6 ObjFunc
	var_158_float = var_158_float + var_159_float; // 0x2e8 Add2
	var_173_bool = 0; var_174_object = Obj(); var_175_string = ""; var_176_float = 0; var_177_float = 0; var_178_float = 0; // 0x2e9 PushV
	var_174_object = var_154_object; // 0x2ea Mov
	var_175_string = "immunity"; // 0x2eb MovS
	var_176_float = -var_155_float; // 0x2ec Neg2
	var_177_float = 0; // 0x2ed MovI
	var_178_float = 1; // 0x2ee MovI
	func_691(var_173_bool, var_174_object, var_175_string, var_176_float, var_177_float, var_178_float); // 0x2ef NEW_2
	
Label_753:
	var_191_int = 1; // 0x2f1 PushI
	var_192_bool = var_158_float >= var_191_int; // 0x2f2 GE
	if(var_192_bool == 0) goto Label_758; // 0x2f3 JumpB
	var_153_float = 0.0; // 0x2f4 MovF
	return 4; // 0x2f5 Return
	
Label_758:
	var_193_int = 1; // 0x2f6 PushI
	var_194_int = var_193_int - var_158_float; // 0x2f7 Sub
	var_195_int = 2; // 0x2f8 PushI
	var_196_float = var_194_int / var_195_int; // 0x2f9 Div
	var_155_float = var_155_float * var_196_float; // 0x2fa Mult2
	var_197_bool = 0; var_198_object = Obj(); var_199_string = ""; var_200_float = 0; var_201_float = 0; var_202_float = 0; // 0x2fb PushV
	var_198_object = var_154_object; // 0x2fc Mov
	var_199_string = "disease"; // 0x2fd MovS
	var_200_float = var_155_float; // 0x2fe Mov
	var_201_float = 0; // 0x2ff MovI
	var_202_float = 1; // 0x300 MovI
	func_691(var_197_bool, var_198_object, var_199_string, var_200_float, var_201_float, var_202_float); // 0x301 NEW_2
	var_203_bool = 0; var_204_object = Obj(); // 0x303 PushV
	var_204_object = var_154_object; // 0x304 Mov
	func_674(var_203_bool, var_204_object); // 0x305 NEW_2
	if(var_203_bool == 0) goto Label_780; // 0x307 JumpB
	var_207_float = 0; // 0x308 PushV
	var_207_float = var_155_float; // 0x309 Mov
	func_883(var_207_float); // 0x30a NEW_2
	
Label_780:
	var_153_float = var_155_float; // 0x30c Mov
	return 4; // 0x30d Return
}


func_458(var_151_bool, var_152_object)
{
	var_153_bool = 0; var_154_object = Obj(); // 0x1cb PushV
	var_154_object = var_152_object; // 0x1cc Mov
	func_942(var_153_bool, var_154_object); // 0x1cd NEW_2
	var_151_bool = var_153_bool; // 0x1ce Mov
	return 0; // 0x1d0 Return
}


func_589(var_0_object)
{
	var_0_object = 1; // 0x24d TMovB
	var_9_int = 0; // 0x24e PushI
	KillTimer(var_9_int); // 0x24f Func
	Stop(); // 0x251 Func
	return 0; // 0x253 Return
}


func_847(var_127_object)
{
	var_128_object = Obj(); var_129_object = Obj(); // 0x34f PushV
	self(var_129_object); // 0x350 Func
	var_127_object = var_129_object; // 0x352 Mov
	return 2; // 0x353 Return
}


func_465(var_0_object, var_1_bool, var_129_bool, var_130_object, var_131_float, var_132_float, var_133_bool, var_134_bool)
{
	var_135_bool = 0; var_136_bool = 0; var_137_object = Obj(); var_138_cvector = CVector(0,0,0); var_139_cvector = CVector(0,0,0); var_140_cvector = CVector(0,0,0); var_141_float = 0; var_142_object = Obj(); var_143_bool = 0; var_144_bool = 0; var_145_object = Obj(); var_146_cvector = CVector(0,0,0); var_147_cvector = CVector(0,0,0); var_148_cvector = CVector(0,0,0); var_149_float = 0; var_150_object = Obj(); // 0x1d1 PushV
	var_0_object = 0; // 0x1d2 TMovB
	var_1_bool = var_130_object; // 0x1d3 TMov
	var_144_bool = var_134_bool; // 0x1d4 Mov
	
Label_469:
	var_151_bool = 0; var_152_object = Obj(); // 0x1d5 PushV
	var_152_object = var_130_object; // 0x1d6 Mov
	func_458(var_151_bool, var_152_object); // 0x1d7 NEW_2
	var_155_bool = var_151_bool == 0; // 0x1d9 Not
	if(var_155_bool == 0) goto Label_477; // 0x1da JumpB
	var_129_bool = 0; // 0x1db MovB
	return 16; // 0x1dc Return
	
Label_477:
	GetPosition(var_146_cvector); // 0x1dd ObjFunc
	GetPosition(var_147_cvector); // 0x1df Func
	var_148_cvector = var_146_cvector - var_147_cvector; // 0x1e1 Sub2
	var_149_float = var_148_cvector | var_148_cvector; // 0x1e2 Or2
	var_156_bool = 0; // 0x1e3 PushV
	var_156_bool = 0; // 0x1e4 MovB
	var_157_int = 0; // 0x1e5 PushI
	var_158_bool = var_132_float > var_157_int; // 0x1e6 GT
	if(var_158_bool == 0) goto Label_492; // 0x1e7 JumpB
	var_159_float = var_132_float * var_132_float; // 0x1e8 Mult
	var_160_bool = var_149_float > var_159_float; // 0x1e9 GT
	if(var_160_bool == 0) goto Label_492; // 0x1ea JumpB
	var_156_bool = 1; // 0x1eb MovB
	
Label_492:
	if(var_156_bool == 0) goto Label_497; // 0x1ec JumpB
	Stop(); // 0x1ed Func
	var_129_bool = 0; // 0x1ef MovB
	return 16; // 0x1f0 Return
	
Label_497:
	var_161_float = var_131_float * var_131_float; // 0x1f1 Mult
	var_162_bool = var_149_float > var_161_float; // 0x1f2 GT
	if(var_162_bool == 0) goto Label_559; // 0x1f3 JumpB
	GetPFPosition(var_146_cvector); // 0x1f4 ObjFunc
	FindPathTo(var_150_object, var_146_cvector); // 0x1f6 Func
	var_163_bool = var_150_object != 0; // 0x1f8 NullNeq
	if(var_163_bool == 0) goto Label_508; // 0x1f9 JumpB
	var_145_object = var_150_object; // 0x1fa Mov
	var_150_object = 0; // 0x1fb SetNull
	
Label_508:
	var_164_bool = var_145_object != 0; // 0x1fc NullNeq
	if(var_164_bool == 0) goto Label_541; // 0x1fd JumpB
	var_165_bool = var_144_bool; // 0x1fe Push
	if(var_165_bool == 0) goto Label_518; // 0x1ff JumpB
	var_144_bool = 0; // 0x200 MovB
	RotatePath(var_145_object, var_143_bool); // 0x201 Func
	var_166_bool = var_143_bool == 0; // 0x203 Not
	if(var_166_bool == 0) goto Label_518; // 0x204 JumpB
	goto Label_565; // 0x205 Jump
	
Label_565:
	var_129_bool = !var_0_object; // 0x235 Not2
	return 16; // 0x236 Return
	
Label_518:
	var_167_int = 0; // 0x206 PushI
	var_168_float = 0.3; // 0x207 PushF
	SetTimer(var_167_int, var_168_float); // 0x208 Func
	var_169_string = ""; // 0x20a PushV
	func_605(var_169_string); // 0x20b NEW_2
	var_170_string = ""; // 0x20d PushV
	func_607(var_170_string); // 0x20e NEW_2
	FollowPath(var_145_object, var_133_bool, var_143_bool, var_169_string, var_170_string); // 0x210 Func
	var_171_bool = var_143_bool == 0; // 0x212 Not
	if(var_171_bool == 0) goto Label_539; // 0x213 JumpB
	var_172_object = var_0_object; // 0x214 PushT
	if(var_172_object == 0) goto Label_537; // 0x215 JumpB
	var_145_object = 0; // 0x216 SetNull
	goto Label_565; // 0x217 Jump
	
Label_537:
	goto Label_564; // 0x219 Jump
	
Label_564:
	goto Label_469; // 0x234 Jump
	
Label_539:
	var_145_object = 0; // 0x21b SetNull
	goto Label_557; // 0x21c Jump
	
Label_557:
	var_150_object = 0; // 0x22d SetNull
	goto Label_563; // 0x22e Jump
	
Label_563:
	var_145_object = 0; // 0x233 SetNull
	
Label_541:
	var_173_int = 0; // 0x21d PushI
	KillTimer(var_173_int); // 0x21e Func
	var_174_float = 0.5; // 0x220 PushF
	Sleep(var_174_float, var_143_bool); // 0x221 Func
	var_175_bool = var_143_bool == 0; // 0x223 Not
	if(var_175_bool == 0) goto Label_553; // 0x224 JumpB
	var_176_object = var_0_object; // 0x225 PushT
	if(var_176_object == 0) goto Label_553; // 0x226 JumpB
	var_145_object = 0; // 0x227 SetNull
	goto Label_565; // 0x228 Jump
	
Label_553:
	var_177_int = 0; // 0x229 PushI
	var_178_float = 0.3; // 0x22a PushF
	SetTimer(var_177_int, var_178_float); // 0x22b Func
	
Label_559:
	var_179_int = 0; // 0x22f PushI
	KillTimer(var_179_int); // 0x230 Func
	goto Label_565; // 0x232 Jump
}


func_853(var_95_cvector, var_96_cvector)
{
	var_97_float = 0; var_98_float = 0; // 0x355 PushV
	var_99_int = var_96_cvector | var_96_cvector; // 0x356 Or
	var_98_float = sqrt(var_99_int); // 0x357 Sqrt2
	var_100_float = 0.0; // 0x358 PushF
	var_101_bool = var_98_float < var_100_float; // 0x359 LT
	if(var_101_bool == 0) goto Label_861; // 0x35a JumpB
	var_95_cvector = CVector(0.0, 0.0, 0.0); // 0x35b MovV
	return 2; // 0x35c Return
	
Label_861:
	var_95_cvector = var_96_cvector / var_96_cvector; // 0x35d Div2
	return 2; // 0x35e Return
}


func_344(var_28_float)
{
	var_29_float = 0; var_30_float = 0; // 0x158 PushV
	GetCameraFarDistance(var_30_float); // 0x159 Func
	var_28_float = var_30_float; // 0x15b Mov
	return 2; // 0x15c Return
}


func_605(var_169_string)
{
	var_169_string = "walk"; // 0x25d MovS
	return 0; // 0x25e Return
}


func_863(var_13_float, var_14_cvector, var_15_cvector)
{
	var_16_cvector = CVector(0,0,0); var_17_cvector = CVector(0,0,0); // 0x35f PushV
	var_17_cvector = var_15_cvector - var_14_cvector; // 0x360 Sub2
	var_18_int = var_17_cvector | var_17_cvector; // 0x361 Or
	var_13_float = sqrt(var_18_int); // 0x362 Sqrt2
	return 2; // 0x363 Return
}


func_607(var_170_string)
{
	var_170_string = "run"; // 0x25f MovS
	return 0; // 0x260 Return
}


func_609()
{
	var_40_float = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_bool = 0; var_44_float = 0; var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_bool = 0; // 0x261 PushV
	var_48_string = "fog hunter idling"; // 0x262 PushS
	Trace(var_48_string); // 0x263 Func
	var_49_int = 2; // 0x265 PushI
	rand(var_44_float, var_49_int); // 0x266 Func
	var_50_int = 1; // 0x268 PushI
	var_51_int = 1; // 0x269 PushI
	FogLinear(var_50_int, var_51_int); // 0x26a Func
	var_52_int = 1; // 0x26c PushI
	Sleep(var_52_int); // 0x26d Func
	Sleep(var_44_float); // 0x26f Func
	GetPosition(var_45_cvector); // 0x271 Func
	var_53_int = 1000; // 0x273 PushI
	GetRandomPFPointInCircle(var_46_cvector, var_45_cvector, var_53_int, var_47_bool); // 0x274 Func
	var_54_int = 0; // 0x276 PushI
	var_55_float = 0.5; // 0x277 PushF
	FogLinear(var_54_int, var_55_float); // 0x278 Func
	var_56_bool = var_47_bool; // 0x27a Push
	if(var_56_bool == 0) goto Label_639; // 0x27b JumpB
	var_57_int = 500; // 0x27c PushI
	MovePoint(var_46_cvector, var_57_int); // 0x27d Func
	
Label_639:
	var_58_int = 1; // 0x27f PushI
	Sleep(var_58_int); // 0x280 Func
	return 8; // 0x282 Return
}


func_868(var_88_float, var_89_cvector, var_90_cvector)
{
	var_91_cvector = CVector(0,0,0); var_92_cvector = CVector(0,0,0); // 0x364 PushV
	var_92_cvector = var_90_cvector - var_89_cvector; // 0x365 Sub2
	var_88_float = var_92_cvector | var_92_cvector; // 0x366 Or2
	return 2; // 0x367 Return
}


func_356(var_0_object, var_1_bool)
{
	var_0_object = 1; // 0x164 TMovB
	var_1_bool = 0; // 0x165 TMovB
	Stop(); // 0x166 Func
	StopGroup0(); // 0x168 Func
	return 0; // 0x16a Return
}


func_872(var_185_float, var_186_float, var_187_float, var_188_float)
{
	var_189_bool = var_186_float < var_187_float; // 0x369 LT
	if(var_189_bool == 0) goto Label_877; // 0x36a JumpB
	var_185_float = var_187_float; // 0x36b Mov
	return 0; // 0x36c Return
	
Label_877:
	var_190_bool = var_186_float > var_188_float; // 0x36d GT
	if(var_190_bool == 0) goto Label_881; // 0x36e JumpB
	var_185_float = var_188_float; // 0x36f Mov
	return 0; // 0x370 Return
	
Label_881:
	var_185_float = var_186_float; // 0x371 Mov
	return 0; // 0x372 Return
}


func_883(var_207_float)
{
	var_208_object = Obj(); var_209_object = Obj(); // 0x373 PushV
	CreateFloatVector(var_209_object); // 0x374 Func
	add(var_207_float); // 0x376 ObjFunc
	var_210_int = 14; // 0x378 PushI
	SendWorldWndMessage(var_210_int, var_209_object); // 0x379 Func
	return 2; // 0x37b Return
}


func_372(var_38_bool)
{
	var_38_bool = 0; // 0x174 MovB
	return 0; // 0x175 Return
}


func_374(var_32_object, var_33_cvector)
{
	var_34_object = Obj(); var_35_object = Obj(); // 0x176 PushV
	FindShiftedPathTo(var_35_object, var_33_cvector); // 0x177 Func
	var_32_object = var_35_object; // 0x179 Mov
	return 2; // 0x17a Return
}


func_380()
{
	var_63_object = Obj(); var_64_object = Obj(); // 0x17c PushV
	var_65_string = "fog hunter following"; // 0x17d PushS
	Trace(var_65_string); // 0x17e Func
	var_66_object = Obj(); // 0x180 PushV
	func_667(var_66_object); // 0x181 NEW_2
	var_64_object = var_66_object; // 0x182 Mov
	var_70_bool = 0; var_71_object = Obj(); // 0x184 PushV
	var_71_object = var_64_object; // 0x185 Mov
	func_942(var_70_bool, var_71_object); // 0x186 NEW_2
	var_128_bool = var_70_bool == 0; // 0x188 Not
	if(var_128_bool == 0) goto Label_395; // 0x189 JumpB
	return 2; // 0x18a Return
	
Label_395:
	var_129_bool = 0; var_130_object = Obj(); var_131_float = 0; var_132_float = 0; var_133_bool = 0; var_134_bool = 0; // 0x18b PushV
	var_130_object = var_64_object; // 0x18c Mov
	var_131_float = 100; // 0x18d MovI
	var_132_float = 0; // 0x18e MovI
	var_133_bool = 0; // 0x18f MovB
	var_134_bool = 0; // 0x190 MovB
	func_465(var_63_object, var_64_object, var_129_bool, var_130_object, var_131_float, var_132_float, var_133_bool, var_134_bool); // 0x191 NEW_2
	return 2; // 0x193 Return
}


func_893(var_9_bool, var_10_object)
{
	var_11_bool = 0; var_12_bool = 0; // 0x37d PushV
	IsPlayerActor(var_10_object, var_12_bool); // 0x37e Func
	var_9_bool = 0; // 0x380 MovB
	var_13_bool = var_12_bool; // 0x381 Push
	if(var_13_bool == 0) goto Label_905; // 0x382 JumpB
	var_14_bool = 0; var_15_object = Obj(); // 0x383 PushV
	var_15_object = var_10_object; // 0x384 Mov
	func_823(var_14_bool, var_15_object); // 0x385 NEW_2
	if(var_14_bool == 0) goto Label_905; // 0x387 JumpB
	var_9_bool = 1; // 0x388 MovB
	
Label_905:
	return 2; // 0x389 Return
}


