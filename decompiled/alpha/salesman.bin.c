task_0_event_5(var_0_bool, var_1_object, var_2_float, var_3_int)
{
	StopGroup0(); // 0x3 Func
	return 0; // 0x5 Return
}


task_1_event_11(var_0_bool, var_1_int, var_2_object, var_3_float, var_4_int)
{
	StopAnimation(); // 0x16 Func
	StopTrade(); // 0x18 Func
	var_0_bool = 1; // 0x1a TMovB
	return 0; // 0x1b Return
}


task_2_event_5(var_0_bool, var_1_object, var_2_float, var_3_int)
{
	var_4_string = "load salesman"; // 0x81 PushS
	Trace(var_4_string); // 0x82 Func
	var_5_int = 0; // 0x84 PushV
	func_454(var_5_int); // 0x85 Call
	var_11_bool = var_5_int != var_2_float; // 0x87 Neq
	if(var_11_bool == 0) goto Label_147; // 0x88 JumpB
	var_12_string = "Updating salesman"; // 0x89 PushS
	Trace(var_12_string); // 0x8a Func
	var_13_int = 0; // 0x8c PushV
	func_454(var_13_int); // 0x8d Call
	var_2_float = var_13_int; // 0x8e TMov
	func_1286(); // 0x91 Call
	
Label_147:
	StopGroup0(); // 0x93 Func
	return 0; // 0x95 Return
}


task_2_event_6(var_0_bool, var_1_object, var_2_float, var_3_int)
{
	Hold(); // 0x96 Func
	return 0; // 0x98 Return
}


task_2_event_1(var_0_bool, var_1_object, var_2_float, var_3_int, var_4_object)
{
	var_5_bool = 0; var_6_bool = 0; // 0xad PushV
	var_7_bool = var_0_bool != 0; // 0xae NullNeq
	if(var_7_bool == 0) goto Label_177; // 0xaf JumpB
	return 2; // 0xb0 Return
	
Label_177:
	IsPlayerActor(var_4_object, var_6_bool); // 0xb1 Func
	var_8_bool = var_6_bool == 0; // 0xb3 Not
	if(var_8_bool == 0) goto Label_182; // 0xb4 JumpB
	return 2; // 0xb5 Return
	
Label_182:
	var_0_bool = var_4_object; // 0xb6 TMov
	var_1_object = 0; // 0xb7 TMovI
	var_9_object = Obj(); // 0xb8 PushV
	var_9_object = var_0_bool; // 0xb9 MovT
	func_344(); // 0xba Call
	var_18_int = 111; // 0xbc PushI
	var_19_float = 0.2; // 0xbd PushF
	SetTimer(var_18_int, var_19_float); // 0xbe Func
	var_20_int = 112; // 0xc0 PushI
	var_21_float = 3.0; // 0xc1 PushF
	SetTimer(var_20_int, var_21_float); // 0xc2 Func
	return 2; // 0xc4 Return
}


task_2_event_0(var_0_bool, var_1_object, var_2_float, var_3_int, var_4_object)
{
	var_5_object = Obj(); // 0xc6 PushV
	var_5_object = var_4_object; // 0xc7 Mov
	func_1360(var_5_object); // 0xc8 Call
	return 0; // 0xca Return
}


task_2_event_10(var_0_bool, var_1_object, var_2_float, var_3_int, var_4_object)
{
	var_5_object = Obj(); // 0xcc PushV
	var_5_object = var_4_object; // 0xcd Mov
	func_344(); // 0xce Call
	return 0; // 0xd0 Return
}


task_2_event_7(var_0_bool, var_1_object, var_2_float, var_3_int, var_4_int)
{
	var_5_cvector = CVector(0,0,0); var_6_cvector = CVector(0,0,0); var_7_cvector = CVector(0,0,0); var_8_cvector = CVector(0,0,0); // 0xd1 PushV
	var_9_int = 111; // 0xd2 PushI
	var_10_bool = var_4_int == var_9_int; // 0xd3 Eq
	if(var_10_bool == 0) goto Label_247; // 0xd4 JumpB
	var_11_bool = 0; var_12_object = Obj(); // 0xd5 PushV
	var_12_object = var_0_bool; // 0xd6 MovT
	func_320(var_11_bool, var_12_object); // 0xd7 Call
	var_45_bool = var_11_bool == 0; // 0xd9 Not
	if(var_45_bool == 0) goto Label_227; // 0xda JumpB
	var_46_int = 112; // 0xdb PushI
	KillTimer(var_46_int); // 0xdc Func
	var_47_int = 111; // 0xde PushI
	KillTimer(var_47_int); // 0xdf Func
	var_0_bool = 0; // 0xe1 SetNullT
	return 4; // 0xe2 Return
	
Label_227:
	GetDirection(var_7_cvector); // 0xe3 Func
	var_48_cvector = CVector(0,0,0); var_49_object = Obj(); // 0xe5 PushV
	var_49_object = var_0_bool; // 0xe6 MovT
	func_260(var_49_object); // 0xe7 Call
	var_8_cvector = var_48_cvector; // 0xe8 Mov
	var_54_float = 0; var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); // 0xea PushV
	var_55_cvector = var_7_cvector; // 0xeb Mov
	var_56_cvector = var_8_cvector; // 0xec Mov
	func_437(var_54_float, var_55_cvector, var_56_cvector); // 0xed Call
	var_78_float = 0.76604; // 0xef PushF
	var_79_bool = var_54_float < var_78_float; // 0xf0 LT
	if(var_79_bool == 0) goto Label_246; // 0xf1 JumpB
	var_80_object = Obj(); // 0xf2 PushV
	var_80_object = var_0_bool; // 0xf3 MovT
	func_344(); // 0xf4 Call
	
Label_246:
	return 4; // 0xf6 Return
	
Label_247:
	var_89_int = 112; // 0xf7 PushI
	var_90_bool = var_4_int == var_89_int; // 0xf8 Eq
	if(var_90_bool == 0) goto Label_259; // 0xf9 JumpB
	var_91_int = 112; // 0xfa PushI
	KillTimer(var_91_int); // 0xfb Func
	var_92_int = 111; // 0xfd PushI
	KillTimer(var_92_int); // 0xfe Func
	var_0_bool = 0; // 0x100 SetNullT
	ResetAAS(); // 0x101 Func
	
Label_259:
	return 4; // 0x103 Return
}


main(var_0_bool, var_1_object, var_2_float, var_3_int)
{
	func_28(); // 0x74 Call
	var_52_int = 0; // 0x76 PushV
	func_454(var_52_int); // 0x77 Call
	var_2_float = var_52_int; // 0x78 TMov
	func_1286(); // 0x7b Call
	func_153(var_2_float, var_3_int); // 0x7e Call
	return 0; // 0x80 Return
}


func_0()
{
	Hold(); // 0x0 Func
	return 0; // 0x2 Return
}


func_260(var_48_cvector)
{
	var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); // 0x104 PushV
	GetPosition(var_52_cvector); // 0x105 Func
	GetPosition(var_53_cvector); // 0x107 ObjFunc
	var_48_cvector = var_53_cvector - var_52_cvector; // 0x109 Sub2
	return 4; // 0x10a Return
}


func_6(var_0_bool)
{
	DoTrade(); // 0x7 Func
	var_0_bool = 0; // 0x9 TMovB
	
Label_10:
	WaitForAnimEnd(); // 0xa Func
	var_38_string = "all"; // 0xc PushS
	var_39_string = "idle"; // 0xd PushS
	PlayAnimation(var_38_string, var_39_string); // 0xe Func
	var_40_bool = var_0_bool; // 0x10 PushT
	if(var_40_bool == 0) goto Label_19; // 0x11 JumpB
	return 0; // 0x12 Return
	
Label_19:
	goto Label_10; // 0x13 Jump
}


func_519(var_72_bool, var_74_int)
{
	var_75_bool = 0; var_76_int = 0; var_77_int = 0; var_78_int = 0; var_79_int = 0; var_80_int = 0; var_81_int = 0; var_82_bool = 0; var_83_int = 0; var_84_int = 0; var_85_int = 0; var_86_int = 0; var_87_int = 0; var_88_int = 0; // 0x207 PushV
	var_89_int = 3; // 0x208 PushI
	var_90_bool = var_74_int < var_89_int; // 0x209 LT
	if(var_90_bool == 0) goto Label_525; // 0x20a JumpB
	var_72_bool = 1; // 0x20b MovB
	return 14; // 0x20c Return
	
Label_525:
	var_91_int = 2; // 0x20d PushI
	var_92_bool = var_74_int >= var_91_int; // 0x20e GE
	if(var_92_bool == 0) goto Label_563; // 0x20f JumpB
	var_93_int = 3; // 0x210 PushI
	irand(var_83_int, var_93_int); // 0x211 Func
	var_94_int = 0; // 0x213 PushI
	var_95_bool = var_83_int == var_94_int; // 0x214 Eq
	if(var_95_bool == 0) goto Label_543; // 0x215 JumpB
	var_96_int = 0; var_97_string = ""; // 0x216 PushV
	var_97_string = "Scalpel"; // 0x217 MovS
	func_463(var_96_int, var_97_string); // 0x218 Call
	var_100_int = 0; // 0x21a PushI
	var_101_int = 1; // 0x21b PushI
	AddItem(var_82_bool, var_96_int, var_100_int, var_101_int); // 0x21c ObjFunc
	goto Label_563; // 0x21e Jump
	
Label_563:
	var_102_int = 5; // 0x233 PushI
	var_103_bool = var_74_int >= var_102_int; // 0x234 GE
	if(var_103_bool == 0) goto Label_625; // 0x235 JumpB
	var_104_int = 4; // 0x236 PushI
	irand(var_84_int, var_104_int); // 0x237 Func
	var_105_int = 0; // 0x239 PushI
	var_106_bool = var_84_int == var_105_int; // 0x23a Eq
	if(var_106_bool == 0) goto Label_585; // 0x23b JumpB
	var_107_int = 4; // 0x23c PushI
	irand(var_85_int, var_107_int); // 0x23d Func
	var_108_int = 1; // 0x23f PushI
	var_85_int = var_85_int + var_108_int; // 0x240 Add2
	var_109_int = 0; var_110_string = ""; // 0x241 PushV
	var_110_string = "revolver_ammo"; // 0x242 MovS
	func_463(var_109_int, var_110_string); // 0x243 Call
	var_111_int = 0; // 0x245 PushI
	AddItem(var_82_bool, var_109_int, var_111_int, var_85_int); // 0x246 ObjFunc
	goto Label_625; // 0x248 Jump
	
Label_625:
	var_112_int = 7; // 0x271 PushI
	var_113_bool = var_74_int >= var_112_int; // 0x272 GE
	if(var_113_bool == 0) goto Label_654; // 0x273 JumpB
	var_114_int = 8; // 0x274 PushI
	irand(var_88_int, var_114_int); // 0x275 Func
	var_115_int = 0; // 0x277 PushI
	var_116_bool = var_88_int == var_115_int; // 0x278 Eq
	if(var_116_bool == 0) goto Label_643; // 0x279 JumpB
	var_117_int = 0; var_118_string = ""; // 0x27a PushV
	var_118_string = "Rifle"; // 0x27b MovS
	func_463(var_117_int, var_118_string); // 0x27c Call
	var_119_int = 0; // 0x27e PushI
	var_120_int = 1; // 0x27f PushI
	AddItem(var_82_bool, var_117_int, var_119_int, var_120_int); // 0x280 ObjFunc
	goto Label_654; // 0x282 Jump
	
Label_654:
	var_72_bool = 1; // 0x28e MovB
	return 14; // 0x28f Return
	
Label_643:
	var_121_int = 1; // 0x283 PushI
	var_122_bool = var_88_int == var_121_int; // 0x284 Eq
	if(var_122_bool == 0) goto Label_654; // 0x285 JumpB
	var_123_int = 0; var_124_string = ""; // 0x286 PushV
	var_124_string = "bottle_weapon"; // 0x287 MovS
	func_463(var_123_int, var_124_string); // 0x288 Call
	var_125_int = 0; // 0x28a PushI
	var_126_int = 1; // 0x28b PushI
	AddItem(var_82_bool, var_123_int, var_125_int, var_126_int); // 0x28c ObjFunc
	
Label_585:
	var_127_int = 1; // 0x249 PushI
	var_128_bool = var_84_int == var_127_int; // 0x24a Eq
	if(var_128_bool == 0) goto Label_601; // 0x24b JumpB
	var_129_int = 4; // 0x24c PushI
	irand(var_86_int, var_129_int); // 0x24d Func
	var_130_int = 1; // 0x24f PushI
	var_86_int = var_86_int + var_130_int; // 0x250 Add2
	var_131_int = 0; var_132_string = ""; // 0x251 PushV
	var_132_string = "rifle_ammo"; // 0x252 MovS
	func_463(var_131_int, var_132_string); // 0x253 Call
	var_133_int = 0; // 0x255 PushI
	AddItem(var_82_bool, var_131_int, var_133_int, var_86_int); // 0x256 ObjFunc
	goto Label_625; // 0x258 Jump
	
Label_601:
	var_134_int = 2; // 0x259 PushI
	var_135_bool = var_84_int == var_134_int; // 0x25a Eq
	if(var_135_bool == 0) goto Label_617; // 0x25b JumpB
	var_136_int = 50; // 0x25c PushI
	irand(var_87_int, var_136_int); // 0x25d Func
	var_137_int = 1; // 0x25f PushI
	var_87_int = var_87_int + var_137_int; // 0x260 Add2
	var_138_int = 0; var_139_string = ""; // 0x261 PushV
	var_139_string = "ognemet_ammo"; // 0x262 MovS
	func_463(var_138_int, var_139_string); // 0x263 Call
	var_140_int = 0; // 0x265 PushI
	AddItem(var_82_bool, var_138_int, var_140_int, var_87_int); // 0x266 ObjFunc
	goto Label_625; // 0x268 Jump
	
Label_617:
	var_141_int = 0; var_142_string = ""; // 0x269 PushV
	var_142_string = "Revolver"; // 0x26a MovS
	func_463(var_141_int, var_142_string); // 0x26b Call
	var_143_int = 0; // 0x26d PushI
	var_144_int = 1; // 0x26e PushI
	AddItem(var_82_bool, var_141_int, var_143_int, var_144_int); // 0x26f ObjFunc
	
Label_543:
	var_145_int = 1; // 0x21f PushI
	var_146_bool = var_83_int == var_145_int; // 0x220 Eq
	if(var_146_bool == 0) goto Label_555; // 0x221 JumpB
	var_147_int = 0; var_148_string = ""; // 0x222 PushV
	var_148_string = "Knife"; // 0x223 MovS
	func_463(var_147_int, var_148_string); // 0x224 Call
	var_149_int = 0; // 0x226 PushI
	var_150_int = 1; // 0x227 PushI
	AddItem(var_82_bool, var_147_int, var_149_int, var_150_int); // 0x228 ObjFunc
	goto Label_563; // 0x22a Jump
	
Label_555:
	var_151_int = 0; var_152_string = ""; // 0x22b PushV
	var_152_string = "Hammer"; // 0x22c MovS
	func_463(var_151_int, var_152_string); // 0x22d Call
	var_153_int = 0; // 0x22f PushI
	var_154_int = 1; // 0x230 PushI
	AddItem(var_82_bool, var_151_int, var_153_int, var_154_int); // 0x231 ObjFunc
}


func_1286()
{
	var_58_int = 0; var_59_int = 0; // 0x506 PushV
	var_60_int = 0; // 0x507 PushV
	func_454(var_60_int); // 0x508 Call
	var_59_int = var_60_int; // 0x509 Mov
	var_61_int = 0; // 0x50b PushI
	ClearSubContainer(var_61_int); // 0x50c Func
	var_62_int = GlobalVars[0]; // 0x50e PushGE
	var_63_int = 0; // 0x50f PushI
	var_64_bool = var_62_int != var_63_int; // 0x510 Neq
	if(var_64_bool == 0) goto Label_1307; // 0x511 JumpB
	var_65_bool = 0; var_66_object = Obj(); var_67_int = 0; var_68_int = 0; // 0x512 PushV
	var_69_object = Obj(); // 0x513 PushV
	func_412(var_69_object); // 0x514 Call
	var_66_object = var_69_object; // 0x515 Mov
	var_67_int = var_59_int; // 0x517 Mov
	var_68_int = 1; // 0x518 MovI
	func_468(var_65_bool, var_66_object, var_67_int, var_68_int); // 0x519 Call
	
Label_1307:
	var_495_int = GlobalVars[1]; // 0x51b PushGE
	var_496_int = 0; // 0x51c PushI
	var_497_bool = var_495_int != var_496_int; // 0x51d Neq
	if(var_497_bool == 0) goto Label_1320; // 0x51e JumpB
	var_498_bool = 0; var_499_object = Obj(); var_500_int = 0; var_501_int = 0; // 0x51f PushV
	var_502_object = Obj(); // 0x520 PushV
	func_412(var_502_object); // 0x521 Call
	var_499_object = var_502_object; // 0x522 Mov
	var_500_int = var_59_int; // 0x524 Mov
	var_501_int = 0; // 0x525 MovI
	func_468(var_498_bool, var_499_object, var_500_int, var_501_int); // 0x526 Call
	
Label_1320:
	var_503_int = GlobalVars[2]; // 0x528 PushGE
	var_504_int = 0; // 0x529 PushI
	var_505_bool = var_503_int != var_504_int; // 0x52a Neq
	if(var_505_bool == 0) goto Label_1333; // 0x52b JumpB
	var_506_bool = 0; var_507_object = Obj(); var_508_int = 0; var_509_int = 0; // 0x52c PushV
	var_510_object = Obj(); // 0x52d PushV
	func_412(var_510_object); // 0x52e Call
	var_507_object = var_510_object; // 0x52f Mov
	var_508_int = var_59_int; // 0x531 Mov
	var_509_int = 3; // 0x532 MovI
	func_468(var_506_bool, var_507_object, var_508_int, var_509_int); // 0x533 Call
	
Label_1333:
	var_511_int = GlobalVars[3]; // 0x535 PushGE
	var_512_int = 0; // 0x536 PushI
	var_513_bool = var_511_int != var_512_int; // 0x537 Neq
	if(var_513_bool == 0) goto Label_1346; // 0x538 JumpB
	var_514_bool = 0; var_515_object = Obj(); var_516_int = 0; var_517_int = 0; // 0x539 PushV
	var_518_object = Obj(); // 0x53a PushV
	func_412(var_518_object); // 0x53b Call
	var_515_object = var_518_object; // 0x53c Mov
	var_516_int = var_59_int; // 0x53e Mov
	var_517_int = 2; // 0x53f MovI
	func_468(var_514_bool, var_515_object, var_516_int, var_517_int); // 0x540 Call
	
Label_1346:
	var_519_int = GlobalVars[4]; // 0x542 PushGE
	var_520_int = 0; // 0x543 PushI
	var_521_bool = var_519_int != var_520_int; // 0x544 Neq
	if(var_521_bool == 0) goto Label_1359; // 0x545 JumpB
	var_522_bool = 0; var_523_object = Obj(); var_524_int = 0; var_525_int = 0; // 0x546 PushV
	var_526_object = Obj(); // 0x547 PushV
	func_412(var_526_object); // 0x548 Call
	var_523_object = var_526_object; // 0x549 Mov
	var_524_int = var_59_int; // 0x54b Mov
	var_525_int = 4; // 0x54c MovI
	func_468(var_522_bool, var_523_object, var_524_int, var_525_int); // 0x54d Call
	
Label_1359:
	return 2; // 0x54f Return
}


func_267(var_14_bool, var_15_object, var_16_string)
{
	var_20_bool = 0; var_21_bool = 0; // 0x10b PushV
	var_22_string = "HasProperty"; // 0x10c PushS
	var_23_int = 2; // 0x10d PushI
	var_24_bool = IsFuncExist(var_15_object, var_22_string, var_23_int); // 0x10e FuncExist
	var_25_bool = var_24_bool == 0; // 0x10f Not
	if(var_25_bool == 0) goto Label_275; // 0x110 JumpB
	var_14_bool = 0; // 0x111 MovB
	return 2; // 0x112 Return
	
Label_275:
	HasProperty(var_16_string, var_21_bool); // 0x113 ObjFunc
	var_14_bool = var_21_bool; // 0x115 Mov
	return 2; // 0x116 Return
}


func_656(var_157_bool, var_159_int)
{
	var_160_bool = 0; var_161_int = 0; var_162_int = 0; var_163_int = 0; var_164_bool = 0; var_165_int = 0; var_166_int = 0; var_167_int = 0; // 0x290 PushV
	var_168_int = 2; // 0x291 PushI
	var_169_bool = var_159_int < var_168_int; // 0x292 LT
	if(var_169_bool == 0) goto Label_662; // 0x293 JumpB
	var_157_bool = 1; // 0x294 MovB
	return 8; // 0x295 Return
	
Label_662:
	var_170_int = 2; // 0x296 PushI
	var_171_bool = var_159_int >= var_170_int; // 0x297 GE
	if(var_171_bool == 0) goto Label_700; // 0x298 JumpB
	var_172_int = 3; // 0x299 PushI
	irand(var_165_int, var_172_int); // 0x29a Func
	var_173_int = 0; // 0x29c PushI
	var_174_bool = var_165_int == var_173_int; // 0x29d Eq
	if(var_174_bool == 0) goto Label_680; // 0x29e JumpB
	var_175_int = 0; var_176_string = ""; // 0x29f PushV
	var_176_string = "glove"; // 0x2a0 MovS
	func_463(var_175_int, var_176_string); // 0x2a1 Call
	var_177_int = 0; // 0x2a3 PushI
	var_178_int = 1; // 0x2a4 PushI
	AddItem(var_164_bool, var_175_int, var_177_int, var_178_int); // 0x2a5 ObjFunc
	goto Label_700; // 0x2a7 Jump
	
Label_700:
	var_179_int = 4; // 0x2bc PushI
	var_180_bool = var_159_int >= var_179_int; // 0x2bd GE
	if(var_180_bool == 0) goto Label_783; // 0x2be JumpB
	var_181_int = 7; // 0x2bf PushI
	irand(var_166_int, var_181_int); // 0x2c0 Func
	var_182_int = 0; // 0x2c2 PushI
	var_183_bool = var_166_int == var_182_int; // 0x2c3 Eq
	if(var_183_bool == 0) goto Label_718; // 0x2c4 JumpB
	var_184_int = 0; var_185_string = ""; // 0x2c5 PushV
	var_185_string = "mask"; // 0x2c6 MovS
	func_463(var_184_int, var_185_string); // 0x2c7 Call
	var_186_int = 0; // 0x2c9 PushI
	var_187_int = 1; // 0x2ca PushI
	AddItem(var_164_bool, var_184_int, var_186_int, var_187_int); // 0x2cb ObjFunc
	goto Label_741; // 0x2cd Jump
	
Label_741:
	var_188_int = 3; // 0x2e5 PushI
	var_189_bool = var_166_int == var_188_int; // 0x2e6 Eq
	if(var_189_bool == 0) goto Label_752; // 0x2e7 JumpB
	var_190_int = 0; var_191_string = ""; // 0x2e8 PushV
	var_191_string = "halfboot_repel"; // 0x2e9 MovS
	func_463(var_190_int, var_191_string); // 0x2ea Call
	var_192_int = 0; // 0x2ec PushI
	var_193_int = 1; // 0x2ed PushI
	AddItem(var_164_bool, var_190_int, var_192_int, var_193_int); // 0x2ee ObjFunc
	
Label_752:
	var_194_int = 4; // 0x2f0 PushI
	var_195_bool = var_166_int == var_194_int; // 0x2f1 Eq
	if(var_195_bool == 0) goto Label_763; // 0x2f2 JumpB
	var_196_int = 0; var_197_string = ""; // 0x2f3 PushV
	var_197_string = "boot_repel"; // 0x2f4 MovS
	func_463(var_196_int, var_197_string); // 0x2f5 Call
	var_198_int = 0; // 0x2f7 PushI
	var_199_int = 1; // 0x2f8 PushI
	AddItem(var_164_bool, var_196_int, var_198_int, var_199_int); // 0x2f9 ObjFunc
	
Label_763:
	var_200_int = 5; // 0x2fb PushI
	var_201_bool = var_166_int == var_200_int; // 0x2fc Eq
	if(var_201_bool == 0) goto Label_775; // 0x2fd JumpB
	var_202_int = 0; var_203_string = ""; // 0x2fe PushV
	var_203_string = "tihohody"; // 0x2ff MovS
	func_463(var_202_int, var_203_string); // 0x300 Call
	var_204_int = 0; // 0x302 PushI
	var_205_int = 1; // 0x303 PushI
	AddItem(var_164_bool, var_202_int, var_204_int, var_205_int); // 0x304 ObjFunc
	goto Label_783; // 0x306 Jump
	
Label_783:
	var_206_int = 9; // 0x30f PushI
	var_207_bool = var_159_int >= var_206_int; // 0x310 GE
	if(var_207_bool == 0) goto Label_809; // 0x311 JumpB
	var_208_int = 2; // 0x312 PushI
	irand(var_167_int, var_208_int); // 0x313 Func
	var_209_int = 0; // 0x315 PushI
	var_210_bool = var_167_int == var_209_int; // 0x316 Eq
	if(var_210_bool == 0) goto Label_801; // 0x317 JumpB
	var_211_int = 0; var_212_string = ""; // 0x318 PushV
	var_212_string = "boot_army"; // 0x319 MovS
	func_463(var_211_int, var_212_string); // 0x31a Call
	var_213_int = 0; // 0x31c PushI
	var_214_int = 1; // 0x31d PushI
	AddItem(var_164_bool, var_211_int, var_213_int, var_214_int); // 0x31e ObjFunc
	goto Label_809; // 0x320 Jump
	
Label_809:
	var_157_bool = 1; // 0x329 MovB
	return 8; // 0x32a Return
	
Label_801:
	var_215_int = 0; var_216_string = ""; // 0x321 PushV
	var_216_string = "glove_army"; // 0x322 MovS
	func_463(var_215_int, var_216_string); // 0x323 Call
	var_217_int = 0; // 0x325 PushI
	var_218_int = 1; // 0x326 PushI
	AddItem(var_164_bool, var_215_int, var_217_int, var_218_int); // 0x327 ObjFunc
	
Label_775:
	var_219_int = 0; var_220_string = ""; // 0x307 PushV
	var_220_string = "glove_disp"; // 0x308 MovS
	func_463(var_219_int, var_220_string); // 0x309 Call
	var_221_int = 0; // 0x30b PushI
	var_222_int = 1; // 0x30c PushI
	AddItem(var_164_bool, var_219_int, var_221_int, var_222_int); // 0x30d ObjFunc
	
Label_718:
	var_223_int = 1; // 0x2ce PushI
	var_224_bool = var_166_int == var_223_int; // 0x2cf Eq
	if(var_224_bool == 0) goto Label_730; // 0x2d0 JumpB
	var_225_int = 0; var_226_string = ""; // 0x2d1 PushV
	var_226_string = "cloak_repel"; // 0x2d2 MovS
	func_463(var_225_int, var_226_string); // 0x2d3 Call
	var_227_int = 0; // 0x2d5 PushI
	var_228_int = 1; // 0x2d6 PushI
	AddItem(var_164_bool, var_225_int, var_227_int, var_228_int); // 0x2d7 ObjFunc
	goto Label_741; // 0x2d9 Jump
	
Label_730:
	var_229_int = 2; // 0x2da PushI
	var_230_bool = var_166_int == var_229_int; // 0x2db Eq
	if(var_230_bool == 0) goto Label_741; // 0x2dc JumpB
	var_231_int = 0; var_232_string = ""; // 0x2dd PushV
	var_232_string = "raincoat_repel"; // 0x2de MovS
	func_463(var_231_int, var_232_string); // 0x2df Call
	var_233_int = 0; // 0x2e1 PushI
	var_234_int = 1; // 0x2e2 PushI
	AddItem(var_164_bool, var_231_int, var_233_int, var_234_int); // 0x2e3 ObjFunc
	
Label_680:
	var_235_int = 1; // 0x2a8 PushI
	var_236_bool = var_165_int == var_235_int; // 0x2a9 Eq
	if(var_236_bool == 0) goto Label_692; // 0x2aa JumpB
	var_237_int = 0; var_238_string = ""; // 0x2ab PushV
	var_238_string = "drapery"; // 0x2ac MovS
	func_463(var_237_int, var_238_string); // 0x2ad Call
	var_239_int = 0; // 0x2af PushI
	var_240_int = 1; // 0x2b0 PushI
	AddItem(var_164_bool, var_237_int, var_239_int, var_240_int); // 0x2b1 ObjFunc
	goto Label_700; // 0x2b3 Jump
	
Label_692:
	var_241_int = 0; var_242_string = ""; // 0x2b4 PushV
	var_242_string = "balahon"; // 0x2b5 MovS
	func_463(var_241_int, var_242_string); // 0x2b6 Call
	var_243_int = 0; // 0x2b8 PushI
	var_244_int = 1; // 0x2b9 PushI
	AddItem(var_164_bool, var_241_int, var_243_int, var_244_int); // 0x2ba ObjFunc
}


func_1041(var_373_bool, var_375_int)
{
	var_376_bool = 0; var_377_int = 0; var_378_int = 0; var_379_bool = 0; var_380_int = 0; var_381_int = 0; // 0x411 PushV
	var_382_int = 3; // 0x412 PushI
	var_383_bool = var_375_int < var_382_int; // 0x413 LT
	if(var_383_bool == 0) goto Label_1047; // 0x414 JumpB
	var_381_int = 2; // 0x415 MovI
	goto Label_1063; // 0x416 Jump
	
Label_1063:
	irand(var_380_int, var_381_int); // 0x427 Func
	var_384_bool = var_380_int == 0; // 0x429 Not
	if(var_384_bool == 0) goto Label_1075; // 0x42a JumpB
	var_385_int = 0; var_386_string = ""; // 0x42b PushV
	var_386_string = "lemon"; // 0x42c MovS
	func_463(var_385_int, var_386_string); // 0x42d Call
	var_387_int = 0; // 0x42f PushI
	var_388_int = 1; // 0x430 PushI
	AddItem(var_379_bool, var_385_int, var_387_int, var_388_int); // 0x431 ObjFunc
	
Label_1075:
	irand(var_380_int, var_381_int); // 0x433 Func
	var_389_bool = var_380_int == 0; // 0x435 Not
	if(var_389_bool == 0) goto Label_1087; // 0x436 JumpB
	var_390_int = 0; var_391_string = ""; // 0x437 PushV
	var_391_string = "rusk"; // 0x438 MovS
	func_463(var_390_int, var_391_string); // 0x439 Call
	var_392_int = 0; // 0x43b PushI
	var_393_int = 1; // 0x43c PushI
	AddItem(var_379_bool, var_390_int, var_392_int, var_393_int); // 0x43d ObjFunc
	
Label_1087:
	irand(var_380_int, var_381_int); // 0x43f Func
	var_394_bool = var_380_int == 0; // 0x441 Not
	if(var_394_bool == 0) goto Label_1099; // 0x442 JumpB
	var_395_int = 0; var_396_string = ""; // 0x443 PushV
	var_396_string = "dried_fish"; // 0x444 MovS
	func_463(var_395_int, var_396_string); // 0x445 Call
	var_397_int = 0; // 0x447 PushI
	var_398_int = 1; // 0x448 PushI
	AddItem(var_379_bool, var_395_int, var_397_int, var_398_int); // 0x449 ObjFunc
	
Label_1099:
	irand(var_380_int, var_381_int); // 0x44b Func
	var_399_bool = var_380_int == 0; // 0x44d Not
	if(var_399_bool == 0) goto Label_1111; // 0x44e JumpB
	var_400_int = 0; var_401_string = ""; // 0x44f PushV
	var_401_string = "egg"; // 0x450 MovS
	func_463(var_400_int, var_401_string); // 0x451 Call
	var_402_int = 0; // 0x453 PushI
	var_403_int = 1; // 0x454 PushI
	AddItem(var_379_bool, var_400_int, var_402_int, var_403_int); // 0x455 ObjFunc
	
Label_1111:
	irand(var_380_int, var_381_int); // 0x457 Func
	var_404_bool = var_380_int == 0; // 0x459 Not
	if(var_404_bool == 0) goto Label_1123; // 0x45a JumpB
	var_405_int = 0; var_406_string = ""; // 0x45b PushV
	var_406_string = "vegetables"; // 0x45c MovS
	func_463(var_405_int, var_406_string); // 0x45d Call
	var_407_int = 0; // 0x45f PushI
	var_408_int = 1; // 0x460 PushI
	AddItem(var_379_bool, var_405_int, var_407_int, var_408_int); // 0x461 ObjFunc
	
Label_1123:
	irand(var_380_int, var_381_int); // 0x463 Func
	var_409_bool = var_380_int == 0; // 0x465 Not
	if(var_409_bool == 0) goto Label_1135; // 0x466 JumpB
	var_410_int = 0; var_411_string = ""; // 0x467 PushV
	var_411_string = "milk"; // 0x468 MovS
	func_463(var_410_int, var_411_string); // 0x469 Call
	var_412_int = 0; // 0x46b PushI
	var_413_int = 1; // 0x46c PushI
	AddItem(var_379_bool, var_410_int, var_412_int, var_413_int); // 0x46d ObjFunc
	
Label_1135:
	irand(var_380_int, var_381_int); // 0x46f Func
	var_414_bool = var_380_int == 0; // 0x471 Not
	if(var_414_bool == 0) goto Label_1147; // 0x472 JumpB
	var_415_int = 0; var_416_string = ""; // 0x473 PushV
	var_416_string = "dried_meat"; // 0x474 MovS
	func_463(var_415_int, var_416_string); // 0x475 Call
	var_417_int = 0; // 0x477 PushI
	var_418_int = 1; // 0x478 PushI
	AddItem(var_379_bool, var_415_int, var_417_int, var_418_int); // 0x479 ObjFunc
	
Label_1147:
	irand(var_380_int, var_381_int); // 0x47b Func
	var_419_bool = var_380_int == 0; // 0x47d Not
	if(var_419_bool == 0) goto Label_1159; // 0x47e JumpB
	var_420_int = 0; var_421_string = ""; // 0x47f PushV
	var_421_string = "smoked_meat"; // 0x480 MovS
	func_463(var_420_int, var_421_string); // 0x481 Call
	var_422_int = 0; // 0x483 PushI
	var_423_int = 1; // 0x484 PushI
	AddItem(var_379_bool, var_420_int, var_422_int, var_423_int); // 0x485 ObjFunc
	
Label_1159:
	irand(var_380_int, var_381_int); // 0x487 Func
	var_424_bool = var_380_int == 0; // 0x489 Not
	if(var_424_bool == 0) goto Label_1171; // 0x48a JumpB
	var_425_int = 0; var_426_string = ""; // 0x48b PushV
	var_426_string = "fresh_fish"; // 0x48c MovS
	func_463(var_425_int, var_426_string); // 0x48d Call
	var_427_int = 0; // 0x48f PushI
	var_428_int = 1; // 0x490 PushI
	AddItem(var_379_bool, var_425_int, var_427_int, var_428_int); // 0x491 ObjFunc
	
Label_1171:
	irand(var_380_int, var_381_int); // 0x493 Func
	var_429_bool = var_380_int == 0; // 0x495 Not
	if(var_429_bool == 0) goto Label_1183; // 0x496 JumpB
	var_430_int = 0; var_431_string = ""; // 0x497 PushV
	var_431_string = "fresh_meat"; // 0x498 MovS
	func_463(var_430_int, var_431_string); // 0x499 Call
	var_432_int = 0; // 0x49b PushI
	var_433_int = 1; // 0x49c PushI
	AddItem(var_379_bool, var_430_int, var_432_int, var_433_int); // 0x49d ObjFunc
	
Label_1183:
	irand(var_380_int, var_381_int); // 0x49f Func
	var_434_bool = var_380_int == 0; // 0x4a1 Not
	if(var_434_bool == 0) goto Label_1195; // 0x4a2 JumpB
	var_435_int = 0; var_436_string = ""; // 0x4a3 PushV
	var_436_string = "bread"; // 0x4a4 MovS
	func_463(var_435_int, var_436_string); // 0x4a5 Call
	var_437_int = 0; // 0x4a7 PushI
	var_438_int = 1; // 0x4a8 PushI
	AddItem(var_379_bool, var_435_int, var_437_int, var_438_int); // 0x4a9 ObjFunc
	
Label_1195:
	var_439_int = 0; var_440_string = ""; // 0x4ab PushV
	var_440_string = "bottle_water"; // 0x4ac MovS
	func_463(var_439_int, var_440_string); // 0x4ad Call
	var_441_int = 0; // 0x4af PushI
	var_442_int = 1; // 0x4b0 PushI
	AddItem(var_379_bool, var_439_int, var_441_int, var_442_int); // 0x4b1 ObjFunc
	var_443_int = 20; // 0x4b3 PushI
	irand(var_380_int, var_443_int); // 0x4b4 Func
	var_444_int = 0; // 0x4b6 PushI
	var_445_bool = var_380_int == var_444_int; // 0x4b7 Eq
	if(var_445_bool == 0) goto Label_1218; // 0x4b8 JumpB
	var_446_int = 0; var_447_string = ""; // 0x4b9 PushV
	var_447_string = "funduk"; // 0x4ba MovS
	func_463(var_446_int, var_447_string); // 0x4bb Call
	var_448_int = 0; // 0x4bd PushI
	var_449_int = 1; // 0x4be PushI
	AddItem(var_379_bool, var_446_int, var_448_int, var_449_int); // 0x4bf ObjFunc
	goto Label_1229; // 0x4c1 Jump
	
Label_1229:
	var_450_int = 2; // 0x4cd PushI
	var_451_bool = var_380_int == var_450_int; // 0x4ce Eq
	if(var_451_bool == 0) goto Label_1240; // 0x4cf JumpB
	var_452_int = 0; var_453_string = ""; // 0x4d0 PushV
	var_453_string = "walnut"; // 0x4d1 MovS
	func_463(var_452_int, var_453_string); // 0x4d2 Call
	var_454_int = 0; // 0x4d4 PushI
	var_455_int = 1; // 0x4d5 PushI
	AddItem(var_379_bool, var_452_int, var_454_int, var_455_int); // 0x4d6 ObjFunc
	
Label_1240:
	var_373_bool = 1; // 0x4d8 MovB
	return 6; // 0x4d9 Return
	
Label_1218:
	var_456_int = 1; // 0x4c2 PushI
	var_457_bool = var_380_int == var_456_int; // 0x4c3 Eq
	if(var_457_bool == 0) goto Label_1229; // 0x4c4 JumpB
	var_458_int = 0; var_459_string = ""; // 0x4c5 PushV
	var_459_string = "peanut"; // 0x4c6 MovS
	func_463(var_458_int, var_459_string); // 0x4c7 Call
	var_460_int = 0; // 0x4c9 PushI
	var_461_int = 1; // 0x4ca PushI
	AddItem(var_379_bool, var_458_int, var_460_int, var_461_int); // 0x4cb ObjFunc
	
Label_1047:
	var_462_int = 5; // 0x417 PushI
	var_463_bool = var_375_int < var_462_int; // 0x418 LT
	if(var_463_bool == 0) goto Label_1052; // 0x419 JumpB
	var_381_int = 3; // 0x41a MovI
	goto Label_1063; // 0x41b Jump
	
Label_1052:
	var_464_int = 7; // 0x41c PushI
	var_465_bool = var_375_int < var_464_int; // 0x41d LT
	if(var_465_bool == 0) goto Label_1057; // 0x41e JumpB
	var_381_int = 3; // 0x41f MovI
	goto Label_1063; // 0x420 Jump
	
Label_1057:
	var_466_int = 7; // 0x421 PushI
	var_467_bool = var_375_int < var_466_int; // 0x422 LT
	if(var_467_bool == 0) goto Label_1062; // 0x423 JumpB
	var_381_int = 4; // 0x424 MovI
	goto Label_1063; // 0x425 Jump
	
Label_1062:
	var_381_int = 5; // 0x426 MovI
}


func_279(var_26_bool)
{
	var_28_bool = 0; var_29_bool = 0; // 0x117 PushV
	IsDead(var_29_bool); // 0x118 ObjFunc
	var_26_bool = var_29_bool; // 0x11a Mov
	return 2; // 0x11b Return
}


func_408()
{
	CameraSwitchToNormal(); // 0x199 Func
	return 0; // 0x19b Return
}


func_153(var_0_bool, var_1_object)
{
	var_527_bool = 0; // 0x99 PushV
	func_355(var_527_bool); // 0x9a Call
	var_530_bool = var_527_bool == 0; // 0x9c Not
	if(var_530_bool == 0) goto Label_163; // 0x9d JumpB
	TaskCall(0); // 0x9f TaskCall
	func_0(); // 0xa0 Call
	TaskReturn(); // 0xa1 TaskReturn
	
Label_163:
	var_1_object = 0; // 0xa3 TMovI
	var_0_bool = 0; // 0xa4 SetNullT
	
Label_165:
	var_531_string = "all"; // 0xa5 PushS
	var_532_string = "idle"; // 0xa6 PushS
	PlayAnimation(var_531_string, var_532_string); // 0xa7 Func
	WaitForAnimEnd(); // 0xa9 Func
	goto Label_165; // 0xab Jump
}


func_28()
{
	var_4_int = 0; var_5_int = 0; var_6_int = 0; var_7_int = 0; var_8_int = 0; var_9_int = 0; var_10_int = 0; var_11_int = 0; var_12_int = 0; var_13_int = 0; // 0x1c PushV
	var_14_bool = 0; var_15_object = Obj(); var_16_string = ""; // 0x1d PushV
	var_17_object = Obj(); // 0x1e PushV
	func_412(var_17_object); // 0x1f Call
	var_15_object = var_17_object; // 0x20 Mov
	var_16_string = "clothes"; // 0x22 MovS
	func_267(var_14_bool, var_15_object, var_16_string); // 0x23 Call
	if(var_14_bool == 0) goto Label_42; // 0x25 JumpB
	var_26_string = "clothes"; // 0x26 PushS
	GetProperty(var_26_string, var_9_int); // 0x27 Func
	goto Label_43; // 0x29 Jump
	
Label_43:
	var_27_bool = 0; var_28_object = Obj(); var_29_string = ""; // 0x2b PushV
	var_30_object = Obj(); // 0x2c PushV
	func_412(var_30_object); // 0x2d Call
	var_28_object = var_30_object; // 0x2e Mov
	var_29_string = "weapon"; // 0x30 MovS
	func_267(var_27_bool, var_28_object, var_29_string); // 0x31 Call
	if(var_27_bool == 0) goto Label_56; // 0x33 JumpB
	var_31_string = "weapon"; // 0x34 PushS
	GetProperty(var_31_string, var_10_int); // 0x35 Func
	goto Label_57; // 0x37 Jump
	
Label_57:
	var_32_bool = 0; var_33_object = Obj(); var_34_string = ""; // 0x39 PushV
	var_35_object = Obj(); // 0x3a PushV
	func_412(var_35_object); // 0x3b Call
	var_33_object = var_35_object; // 0x3c Mov
	var_34_string = "food"; // 0x3e MovS
	func_267(var_32_bool, var_33_object, var_34_string); // 0x3f Call
	if(var_32_bool == 0) goto Label_70; // 0x41 JumpB
	var_36_string = "food"; // 0x42 PushS
	GetProperty(var_36_string, var_11_int); // 0x43 Func
	goto Label_71; // 0x45 Jump
	
Label_71:
	var_37_bool = 0; var_38_object = Obj(); var_39_string = ""; // 0x47 PushV
	var_40_object = Obj(); // 0x48 PushV
	func_412(var_40_object); // 0x49 Call
	var_38_object = var_40_object; // 0x4a Mov
	var_39_string = "medcine"; // 0x4c MovS
	func_267(var_37_bool, var_38_object, var_39_string); // 0x4d Call
	if(var_37_bool == 0) goto Label_84; // 0x4f JumpB
	var_41_string = "medcine"; // 0x50 PushS
	GetProperty(var_41_string, var_12_int); // 0x51 Func
	goto Label_85; // 0x53 Jump
	
Label_85:
	var_42_bool = 0; var_43_object = Obj(); var_44_string = ""; // 0x55 PushV
	var_45_object = Obj(); // 0x56 PushV
	func_412(var_45_object); // 0x57 Call
	var_43_object = var_45_object; // 0x58 Mov
	var_44_string = "other"; // 0x5a MovS
	func_267(var_42_bool, var_43_object, var_44_string); // 0x5b Call
	if(var_42_bool == 0) goto Label_98; // 0x5d JumpB
	var_46_string = "other"; // 0x5e PushS
	GetProperty(var_46_string, var_13_int); // 0x5f Func
	goto Label_99; // 0x61 Jump
	
Label_99:
	var_47_int = GlobalVars[0]; // 0x63 PushGE
	var_47_int = var_9_int; // 0x64 Mov
	GlobalVars[0] = var_47_int; // 0x65 PopGE
	var_48_int = GlobalVars[1]; // 0x66 PushGE
	var_48_int = var_10_int; // 0x67 Mov
	GlobalVars[1] = var_48_int; // 0x68 PopGE
	var_49_int = GlobalVars[2]; // 0x69 PushGE
	var_49_int = var_11_int; // 0x6a Mov
	GlobalVars[2] = var_49_int; // 0x6b PopGE
	var_50_int = GlobalVars[3]; // 0x6c PushGE
	var_50_int = var_12_int; // 0x6d Mov
	GlobalVars[3] = var_50_int; // 0x6e PopGE
	var_51_int = GlobalVars[4]; // 0x6f PushGE
	var_51_int = var_13_int; // 0x70 Mov
	GlobalVars[4] = var_51_int; // 0x71 PopGE
	return 10; // 0x72 Return
	
Label_98:
	var_13_int = 0; // 0x62 MovI
	
Label_84:
	var_12_int = 0; // 0x54 MovI
	
Label_70:
	var_11_int = 0; // 0x46 MovI
	
Label_56:
	var_10_int = 0; // 0x38 MovI
	
Label_42:
	var_9_int = 0; // 0x2a MovI
}


func_284(var_15_bool, var_16_object)
{
	var_17_object = Obj(); var_18_object = Obj(); var_19_object = Obj(); var_20_object = Obj(); // 0x11c PushV
	var_21_bool = var_16_object == 0; // 0x11d NullEq
	if(var_21_bool == 0) goto Label_289; // 0x11e JumpB
	var_15_bool = 0; // 0x11f MovB
	return 4; // 0x120 Return
	
Label_289:
	var_22_bool = 0; // 0x121 PushV
	var_22_bool = 0; // 0x122 MovB
	var_23_string = "IsDead"; // 0x123 PushS
	var_24_int = 1; // 0x124 PushI
	var_25_bool = IsFuncExist(var_16_object, var_23_string, var_24_int); // 0x125 FuncExist
	if(var_25_bool == 0) goto Label_301; // 0x126 JumpB
	var_26_bool = 0; var_27_object = Obj(); // 0x127 PushV
	var_27_object = var_16_object; // 0x128 Mov
	func_279(var_27_object); // 0x129 Call
	if(var_26_bool == 0) goto Label_301; // 0x12b JumpB
	var_22_bool = 1; // 0x12c MovB
	
Label_301:
	if(var_22_bool == 0) goto Label_304; // 0x12d JumpB
	var_15_bool = 0; // 0x12e MovB
	return 4; // 0x12f Return
	
Label_304:
	GetScene(var_19_object); // 0x130 Func
	var_30_bool = var_19_object == 0; // 0x132 NullEq
	if(var_30_bool == 0) goto Label_310; // 0x133 JumpB
	var_15_bool = 0; // 0x134 MovB
	return 4; // 0x135 Return
	
Label_310:
	GetScene(var_20_object); // 0x136 ObjFunc
	var_31_bool = var_19_object != var_20_object; // 0x138 Neq
	if(var_31_bool == 0) goto Label_316; // 0x139 JumpB
	var_15_bool = 0; // 0x13a MovB
	return 4; // 0x13b Return
	
Label_316:
	var_15_bool = 1; // 0x13c MovB
	return 4; // 0x13d Return
}


func_412(var_17_object)
{
	var_18_object = Obj(); var_19_object = Obj(); // 0x19c PushV
	self(var_19_object); // 0x19d Func
	var_17_object = var_19_object; // 0x19f Mov
	return 2; // 0x1a0 Return
}


func_418(var_57_float, var_58_cvector, var_59_cvector)
{
	var_60_float = GetByIndex(var_58_cvector, 0); // 0x1a3 PushE
	var_61_float = GetByIndex(var_59_cvector, 0); // 0x1a4 PushE
	var_62_float = var_60_float * var_61_float; // 0x1a5 Mult
	var_63_float = GetByIndex(var_58_cvector, 2); // 0x1a6 PushE
	var_64_float = GetByIndex(var_59_cvector, 2); // 0x1a7 PushE
	var_65_float = var_63_float * var_64_float; // 0x1a8 Mult
	var_57_float = var_62_float + var_65_float; // 0x1a9 Add2
	return 0; // 0x1aa Return
}


func_427(var_66_float, var_67_cvector)
{
	var_68_float = GetByIndex(var_67_cvector, 0); // 0x1ac PushE
	var_69_float = GetByIndex(var_67_cvector, 0); // 0x1ad PushE
	var_70_float = var_68_float * var_69_float; // 0x1ae Mult
	var_71_float = GetByIndex(var_67_cvector, 2); // 0x1af PushE
	var_72_float = GetByIndex(var_67_cvector, 2); // 0x1b0 PushE
	var_73_float = var_71_float * var_72_float; // 0x1b1 Mult
	var_74_int = var_70_float + var_73_float; // 0x1b2 Add
	var_66_float = sqrt(var_74_int); // 0x1b3 Sqrt2
	return 0; // 0x1b4 Return
}


func_811(var_247_bool, var_249_int)
{
	var_250_bool = 0; var_251_int = 0; var_252_int = 0; var_253_int = 0; var_254_bool = 0; var_255_int = 0; var_256_int = 0; var_257_int = 0; // 0x32b PushV
	var_258_int = 2; // 0x32c PushI
	var_259_bool = var_249_int < var_258_int; // 0x32d LT
	if(var_259_bool == 0) goto Label_817; // 0x32e JumpB
	var_247_bool = 1; // 0x32f MovB
	return 8; // 0x330 Return
	
Label_817:
	var_260_int = 2; // 0x331 PushI
	var_261_bool = var_249_int >= var_260_int; // 0x332 GE
	if(var_261_bool == 0) goto Label_867; // 0x333 JumpB
	var_262_int = 4; // 0x334 PushI
	irand(var_255_int, var_262_int); // 0x335 Func
	var_263_int = 0; // 0x337 PushI
	var_264_bool = var_255_int == var_263_int; // 0x338 Eq
	if(var_264_bool == 0) goto Label_835; // 0x339 JumpB
	var_265_int = 0; var_266_string = ""; // 0x33a PushV
	var_266_string = "alpha_pills"; // 0x33b MovS
	func_463(var_265_int, var_266_string); // 0x33c Call
	var_267_int = 0; // 0x33e PushI
	var_268_int = 1; // 0x33f PushI
	AddItem(var_254_bool, var_265_int, var_267_int, var_268_int); // 0x340 ObjFunc
	goto Label_867; // 0x342 Jump
	
Label_867:
	var_269_int = 4; // 0x363 PushI
	var_270_bool = var_249_int >= var_269_int; // 0x364 GE
	if(var_270_bool == 0) goto Label_941; // 0x365 JumpB
	var_271_int = 6; // 0x366 PushI
	irand(var_256_int, var_271_int); // 0x367 Func
	var_272_int = 0; // 0x369 PushI
	var_273_bool = var_256_int == var_272_int; // 0x36a Eq
	if(var_273_bool == 0) goto Label_885; // 0x36b JumpB
	var_274_int = 0; var_275_string = ""; // 0x36c PushV
	var_275_string = "beta_pills"; // 0x36d MovS
	func_463(var_274_int, var_275_string); // 0x36e Call
	var_276_int = 0; // 0x370 PushI
	var_277_int = 1; // 0x371 PushI
	AddItem(var_254_bool, var_274_int, var_276_int, var_277_int); // 0x372 ObjFunc
	goto Label_941; // 0x374 Jump
	
Label_941:
	var_278_int = 5; // 0x3ad PushI
	var_279_bool = var_249_int >= var_278_int; // 0x3ae GE
	if(var_279_bool == 0) goto Label_1039; // 0x3af JumpB
	var_280_int = 8; // 0x3b0 PushI
	irand(var_257_int, var_280_int); // 0x3b1 Func
	var_281_int = 0; // 0x3b3 PushI
	var_282_bool = var_257_int == var_281_int; // 0x3b4 Eq
	if(var_282_bool == 0) goto Label_959; // 0x3b5 JumpB
	var_283_int = 0; var_284_string = ""; // 0x3b6 PushV
	var_284_string = "gamma_pills"; // 0x3b7 MovS
	func_463(var_283_int, var_284_string); // 0x3b8 Call
	var_285_int = 0; // 0x3ba PushI
	var_286_int = 1; // 0x3bb PushI
	AddItem(var_254_bool, var_283_int, var_285_int, var_286_int); // 0x3bc ObjFunc
	goto Label_1039; // 0x3be Jump
	
Label_1039:
	var_247_bool = 1; // 0x40f MovB
	return 8; // 0x410 Return
	
Label_959:
	var_287_int = 1; // 0x3bf PushI
	var_288_bool = var_257_int == var_287_int; // 0x3c0 Eq
	if(var_288_bool == 0) goto Label_971; // 0x3c1 JumpB
	var_289_int = 0; var_290_string = ""; // 0x3c2 PushV
	var_290_string = "delta_pills"; // 0x3c3 MovS
	func_463(var_289_int, var_290_string); // 0x3c4 Call
	var_291_int = 0; // 0x3c6 PushI
	var_292_int = 1; // 0x3c7 PushI
	AddItem(var_254_bool, var_289_int, var_291_int, var_292_int); // 0x3c8 ObjFunc
	goto Label_1039; // 0x3ca Jump
	
Label_971:
	var_293_int = 2; // 0x3cb PushI
	var_294_bool = var_257_int == var_293_int; // 0x3cc Eq
	if(var_294_bool == 0) goto Label_983; // 0x3cd JumpB
	var_295_int = 0; var_296_string = ""; // 0x3ce PushV
	var_296_string = "monomicin"; // 0x3cf MovS
	func_463(var_295_int, var_296_string); // 0x3d0 Call
	var_297_int = 0; // 0x3d2 PushI
	var_298_int = 1; // 0x3d3 PushI
	AddItem(var_254_bool, var_295_int, var_297_int, var_298_int); // 0x3d4 ObjFunc
	goto Label_1039; // 0x3d6 Jump
	
Label_983:
	var_299_int = 3; // 0x3d7 PushI
	var_300_bool = var_257_int == var_299_int; // 0x3d8 Eq
	if(var_300_bool == 0) goto Label_995; // 0x3d9 JumpB
	var_301_int = 0; var_302_string = ""; // 0x3da PushV
	var_302_string = "morfin"; // 0x3db MovS
	func_463(var_301_int, var_302_string); // 0x3dc Call
	var_303_int = 0; // 0x3de PushI
	var_304_int = 1; // 0x3df PushI
	AddItem(var_254_bool, var_301_int, var_303_int, var_304_int); // 0x3e0 ObjFunc
	goto Label_1039; // 0x3e2 Jump
	
Label_995:
	var_305_int = 4; // 0x3e3 PushI
	var_306_bool = var_257_int == var_305_int; // 0x3e4 Eq
	if(var_306_bool == 0) goto Label_1007; // 0x3e5 JumpB
	var_307_int = 0; var_308_string = ""; // 0x3e6 PushV
	var_308_string = "packet"; // 0x3e7 MovS
	func_463(var_307_int, var_308_string); // 0x3e8 Call
	var_309_int = 0; // 0x3ea PushI
	var_310_int = 1; // 0x3eb PushI
	AddItem(var_254_bool, var_307_int, var_309_int, var_310_int); // 0x3ec ObjFunc
	goto Label_1039; // 0x3ee Jump
	
Label_1007:
	var_311_int = 5; // 0x3ef PushI
	var_312_bool = var_257_int == var_311_int; // 0x3f0 Eq
	if(var_312_bool == 0) goto Label_1019; // 0x3f1 JumpB
	var_313_int = 0; var_314_string = ""; // 0x3f2 PushV
	var_314_string = "blue_vaccine"; // 0x3f3 MovS
	func_463(var_313_int, var_314_string); // 0x3f4 Call
	var_315_int = 0; // 0x3f6 PushI
	var_316_int = 1; // 0x3f7 PushI
	AddItem(var_254_bool, var_313_int, var_315_int, var_316_int); // 0x3f8 ObjFunc
	goto Label_1039; // 0x3fa Jump
	
Label_1019:
	var_317_int = 6; // 0x3fb PushI
	var_318_bool = var_257_int == var_317_int; // 0x3fc Eq
	if(var_318_bool == 0) goto Label_1031; // 0x3fd JumpB
	var_319_int = 0; var_320_string = ""; // 0x3fe PushV
	var_320_string = "etorfin"; // 0x3ff MovS
	func_463(var_319_int, var_320_string); // 0x400 Call
	var_321_int = 0; // 0x402 PushI
	var_322_int = 1; // 0x403 PushI
	AddItem(var_254_bool, var_319_int, var_321_int, var_322_int); // 0x404 ObjFunc
	goto Label_1039; // 0x406 Jump
	
Label_1031:
	var_323_int = 0; var_324_string = ""; // 0x407 PushV
	var_324_string = "feromicin"; // 0x408 MovS
	func_463(var_323_int, var_324_string); // 0x409 Call
	var_325_int = 0; // 0x40b PushI
	var_326_int = 1; // 0x40c PushI
	AddItem(var_254_bool, var_323_int, var_325_int, var_326_int); // 0x40d ObjFunc
	
Label_885:
	var_327_int = 1; // 0x375 PushI
	var_328_bool = var_256_int == var_327_int; // 0x376 Eq
	if(var_328_bool == 0) goto Label_897; // 0x377 JumpB
	var_329_int = 0; var_330_string = ""; // 0x378 PushV
	var_330_string = "neomicin"; // 0x379 MovS
	func_463(var_329_int, var_330_string); // 0x37a Call
	var_331_int = 0; // 0x37c PushI
	var_332_int = 1; // 0x37d PushI
	AddItem(var_254_bool, var_329_int, var_331_int, var_332_int); // 0x37e ObjFunc
	goto Label_941; // 0x380 Jump
	
Label_897:
	var_333_int = 2; // 0x381 PushI
	var_334_bool = var_256_int == var_333_int; // 0x382 Eq
	if(var_334_bool == 0) goto Label_909; // 0x383 JumpB
	var_335_int = 0; var_336_string = ""; // 0x384 PushV
	var_336_string = "novocaine"; // 0x385 MovS
	func_463(var_335_int, var_336_string); // 0x386 Call
	var_337_int = 0; // 0x388 PushI
	var_338_int = 1; // 0x389 PushI
	AddItem(var_254_bool, var_335_int, var_337_int, var_338_int); // 0x38a ObjFunc
	goto Label_941; // 0x38c Jump
	
Label_909:
	var_339_int = 3; // 0x38d PushI
	var_340_bool = var_256_int == var_339_int; // 0x38e Eq
	if(var_340_bool == 0) goto Label_921; // 0x38f JumpB
	var_341_int = 0; var_342_string = ""; // 0x390 PushV
	var_342_string = "black_vaccine"; // 0x391 MovS
	func_463(var_341_int, var_342_string); // 0x392 Call
	var_343_int = 0; // 0x394 PushI
	var_344_int = 1; // 0x395 PushI
	AddItem(var_254_bool, var_341_int, var_343_int, var_344_int); // 0x396 ObjFunc
	goto Label_941; // 0x398 Jump
	
Label_921:
	var_345_int = 4; // 0x399 PushI
	var_346_bool = var_256_int == var_345_int; // 0x39a Eq
	if(var_346_bool == 0) goto Label_933; // 0x39b JumpB
	var_347_int = 0; var_348_string = ""; // 0x39c PushV
	var_348_string = "etorfin"; // 0x39d MovS
	func_463(var_347_int, var_348_string); // 0x39e Call
	var_349_int = 0; // 0x3a0 PushI
	var_350_int = 1; // 0x3a1 PushI
	AddItem(var_254_bool, var_347_int, var_349_int, var_350_int); // 0x3a2 ObjFunc
	goto Label_941; // 0x3a4 Jump
	
Label_933:
	var_351_int = 0; var_352_string = ""; // 0x3a5 PushV
	var_352_string = "meradorm"; // 0x3a6 MovS
	func_463(var_351_int, var_352_string); // 0x3a7 Call
	var_353_int = 0; // 0x3a9 PushI
	var_354_int = 1; // 0x3aa PushI
	AddItem(var_254_bool, var_351_int, var_353_int, var_354_int); // 0x3ab ObjFunc
	
Label_835:
	var_355_int = 1; // 0x343 PushI
	var_356_bool = var_255_int == var_355_int; // 0x344 Eq
	if(var_356_bool == 0) goto Label_847; // 0x345 JumpB
	var_357_int = 0; var_358_string = ""; // 0x346 PushV
	var_358_string = "tvirin"; // 0x347 MovS
	func_463(var_357_int, var_358_string); // 0x348 Call
	var_359_int = 0; // 0x34a PushI
	var_360_int = 1; // 0x34b PushI
	AddItem(var_254_bool, var_357_int, var_359_int, var_360_int); // 0x34c ObjFunc
	goto Label_867; // 0x34e Jump
	
Label_847:
	var_361_int = 2; // 0x34f PushI
	var_362_bool = var_255_int == var_361_int; // 0x350 Eq
	if(var_362_bool == 0) goto Label_859; // 0x351 JumpB
	var_363_int = 0; var_364_string = ""; // 0x352 PushV
	var_364_string = "bandage"; // 0x353 MovS
	func_463(var_363_int, var_364_string); // 0x354 Call
	var_365_int = 0; // 0x356 PushI
	var_366_int = 1; // 0x357 PushI
	AddItem(var_254_bool, var_363_int, var_365_int, var_366_int); // 0x358 ObjFunc
	goto Label_867; // 0x35a Jump
	
Label_859:
	var_367_int = 0; var_368_string = ""; // 0x35b PushV
	var_368_string = "tourniquet"; // 0x35c MovS
	func_463(var_367_int, var_368_string); // 0x35d Call
	var_369_int = 0; // 0x35f PushI
	var_370_int = 1; // 0x360 PushI
	AddItem(var_254_bool, var_367_int, var_369_int, var_370_int); // 0x361 ObjFunc
}


func_437(var_54_float, var_55_cvector, var_56_cvector)
{
	var_57_float = 0; var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); // 0x1b6 PushV
	var_58_cvector = var_55_cvector; // 0x1b7 Mov
	var_59_cvector = var_56_cvector; // 0x1b8 Mov
	func_418(var_57_float, var_58_cvector, var_59_cvector); // 0x1b9 Call
	var_66_float = 0; var_67_cvector = CVector(0,0,0); // 0x1bb PushV
	var_67_cvector = var_55_cvector; // 0x1bc Mov
	func_427(var_66_float, var_67_cvector); // 0x1bd Call
	var_75_float = 0; var_76_cvector = CVector(0,0,0); // 0x1bf PushV
	var_76_cvector = var_56_cvector; // 0x1c0 Mov
	func_427(var_75_float, var_76_cvector); // 0x1c1 Call
	var_77_float = var_66_float * var_75_float; // 0x1c3 Mult
	var_54_float = var_57_float / var_57_float; // 0x1c4 Div2
	return 0; // 0x1c5 Return
}


func_320(var_11_bool, var_12_object)
{
	var_13_int = 0; var_14_int = 0; // 0x140 PushV
	var_15_bool = 0; var_16_object = Obj(); // 0x141 PushV
	var_16_object = var_12_object; // 0x142 Mov
	func_284(var_15_bool, var_16_object); // 0x143 Call
	var_32_bool = var_15_bool == 0; // 0x145 Not
	if(var_32_bool == 0) goto Label_329; // 0x146 JumpB
	var_11_bool = 0; // 0x147 MovB
	return 2; // 0x148 Return
	
Label_329:
	var_33_bool = 0; var_34_object = Obj(); var_35_string = ""; // 0x149 PushV
	var_34_object = var_12_object; // 0x14a Mov
	var_35_string = "noaccess"; // 0x14b MovS
	func_267(var_33_bool, var_34_object, var_35_string); // 0x14c Call
	var_42_bool = var_33_bool == 0; // 0x14e Not
	if(var_42_bool == 0) goto Label_338; // 0x14f JumpB
	var_11_bool = 1; // 0x150 MovB
	return 2; // 0x151 Return
	
Label_338:
	var_43_string = "noaccess"; // 0x152 PushS
	GetProperty(var_43_string, var_14_int); // 0x153 ObjFunc
	var_44_int = 0; // 0x155 PushI
	var_11_bool = var_14_int == var_44_int; // 0x156 Eq2
	return 2; // 0x157 Return
}


func_454(var_52_int)
{
	var_53_float = 0; var_54_float = 0; // 0x1c6 PushV
	GetGameTime(var_54_float); // 0x1c7 Func
	var_55_int = 1; // 0x1c9 PushI
	var_56_int = 0; // 0x1ca PushV
	var_57_int = 24; // 0x1cb PushI
	var_56_int = var_54_float / var_54_float; // 0x1cc Div2
	var_52_int = var_55_int + var_56_int; // 0x1cd Add2
	return 2; // 0x1ce Return
}


func_463(var_96_int, var_97_string)
{
	var_98_int = 0; var_99_int = 0; // 0x1cf PushV
	GetInvItemByName(var_99_int, var_97_string); // 0x1d0 Func
	var_96_int = var_99_int; // 0x1d2 Mov
	return 2; // 0x1d3 Return
}


func_1360(var_5_object)
{
	var_6_bool = 0; var_7_object = Obj(); // 0x551 PushV
	var_7_object = var_5_object; // 0x552 Mov
	func_360(var_7_object); // 0x553 Call
	var_35_bool = var_6_bool == 0; // 0x555 Not
	if(var_35_bool == 0) goto Label_1368; // 0x556 JumpB
	return 0; // 0x557 Return
	
Label_1368:
	var_36_object = Obj(); // 0x558 PushV
	var_36_object = var_5_object; // 0x559 Mov
	TaskCall(1); // 0x55a TaskCall
	func_6(var_36_object); // 0x55b Call
	TaskReturn(); // 0x55c TaskReturn
	var_41_object = Obj(); // 0x55e PushV
	var_41_object = var_5_object; // 0x55f Mov
	func_408(); // 0x560 Call
	return 0; // 0x562 Return
}


func_468(var_65_bool, var_66_object, var_67_int, var_68_int)
{
	var_70_int = 0; // 0x1d5 PushI
	var_71_bool = var_68_int == var_70_int; // 0x1d6 Eq
	if(var_71_bool == 0) goto Label_480; // 0x1d7 JumpB
	var_72_bool = 0; var_73_object = Obj(); var_74_int = 0; // 0x1d8 PushV
	var_73_object = var_66_object; // 0x1d9 Mov
	var_74_int = var_67_int; // 0x1da Mov
	func_519(var_73_object, var_74_int); // 0x1db Call
	var_65_bool = var_72_bool; // 0x1dc Mov
	return 0; // 0x1de Return
	
Label_480:
	var_155_int = 1; // 0x1e0 PushI
	var_156_bool = var_68_int == var_155_int; // 0x1e1 Eq
	if(var_156_bool == 0) goto Label_491; // 0x1e2 JumpB
	var_157_bool = 0; var_158_object = Obj(); var_159_int = 0; // 0x1e3 PushV
	var_158_object = var_66_object; // 0x1e4 Mov
	var_159_int = var_67_int; // 0x1e5 Mov
	func_656(var_158_object, var_159_int); // 0x1e6 Call
	var_65_bool = var_157_bool; // 0x1e7 Mov
	return 0; // 0x1e9 Return
	
Label_491:
	var_245_int = 2; // 0x1eb PushI
	var_246_bool = var_68_int == var_245_int; // 0x1ec Eq
	if(var_246_bool == 0) goto Label_502; // 0x1ed JumpB
	var_247_bool = 0; var_248_object = Obj(); var_249_int = 0; // 0x1ee PushV
	var_248_object = var_66_object; // 0x1ef Mov
	var_249_int = var_67_int; // 0x1f0 Mov
	func_811(var_248_object, var_249_int); // 0x1f1 Call
	var_65_bool = var_247_bool; // 0x1f2 Mov
	return 0; // 0x1f4 Return
	
Label_502:
	var_371_int = 3; // 0x1f6 PushI
	var_372_bool = var_68_int == var_371_int; // 0x1f7 Eq
	if(var_372_bool == 0) goto Label_512; // 0x1f8 JumpB
	var_373_bool = 0; var_374_object = Obj(); var_375_int = 0; // 0x1f9 PushV
	var_374_object = var_66_object; // 0x1fa Mov
	var_375_int = var_67_int; // 0x1fb Mov
	func_1041(var_374_object, var_375_int); // 0x1fc Call
	var_65_bool = var_373_bool; // 0x1fd Mov
	return 0; // 0x1ff Return
	
Label_512:
	var_468_bool = 0; var_469_object = Obj(); var_470_int = 0; // 0x200 PushV
	var_469_object = var_66_object; // 0x201 Mov
	var_470_int = var_67_int; // 0x202 Mov
	func_1242(var_470_int); // 0x203 Call
	var_65_bool = var_468_bool; // 0x204 Mov
	return 0; // 0x206 Return
}


func_344()
{
	var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); var_83_cvector = CVector(0,0,0); var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); // 0x158 PushV
	GetPosition(var_84_cvector); // 0x159 ObjFunc
	GetPosition(var_85_cvector); // 0x15b Func
	var_86_cvector = var_84_cvector - var_85_cvector; // 0x15d Sub2
	var_87_float = GetByIndex(var_86_cvector, 0); // 0x15e PushE
	var_88_float = GetByIndex(var_86_cvector, 2); // 0x15f PushE
	RotateAsync(var_87_float, var_88_float); // 0x160 Func
	return 6; // 0x162 Return
}


func_1242(var_468_bool)
{
	var_471_bool = 0; var_472_int = 0; var_473_bool = 0; var_474_int = 0; // 0x4da PushV
	var_475_int = 5; // 0x4db PushI
	irand(var_474_int, var_475_int); // 0x4dc Func
	var_476_int = 0; // 0x4de PushI
	var_477_bool = var_474_int == var_476_int; // 0x4df Eq
	if(var_477_bool == 0) goto Label_1257; // 0x4e0 JumpB
	var_478_int = 0; var_479_string = ""; // 0x4e1 PushV
	var_479_string = "hook"; // 0x4e2 MovS
	func_463(var_478_int, var_479_string); // 0x4e3 Call
	var_480_int = 0; // 0x4e5 PushI
	var_481_int = 1; // 0x4e6 PushI
	AddItem(var_473_bool, var_478_int, var_480_int, var_481_int); // 0x4e7 ObjFunc
	
Label_1257:
	var_482_int = 5; // 0x4e9 PushI
	irand(var_474_int, var_482_int); // 0x4ea Func
	var_483_int = 0; // 0x4ec PushI
	var_484_bool = var_474_int == var_483_int; // 0x4ed Eq
	if(var_484_bool == 0) goto Label_1271; // 0x4ee JumpB
	var_485_int = 0; var_486_string = ""; // 0x4ef PushV
	var_486_string = "needle"; // 0x4f0 MovS
	func_463(var_485_int, var_486_string); // 0x4f1 Call
	var_487_int = 0; // 0x4f3 PushI
	var_488_int = 1; // 0x4f4 PushI
	AddItem(var_473_bool, var_485_int, var_487_int, var_488_int); // 0x4f5 ObjFunc
	
Label_1271:
	var_489_int = 100; // 0x4f7 PushI
	irand(var_474_int, var_489_int); // 0x4f8 Func
	var_490_int = 0; // 0x4fa PushI
	var_491_bool = var_474_int != var_490_int; // 0x4fb Neq
	if(var_491_bool == 0) goto Label_1284; // 0x4fc JumpB
	var_492_int = 0; var_493_string = ""; // 0x4fd PushV
	var_493_string = "kerosene"; // 0x4fe MovS
	func_463(var_492_int, var_493_string); // 0x4ff Call
	var_494_int = 0; // 0x501 PushI
	AddItem(var_473_bool, var_492_int, var_494_int, var_474_int); // 0x502 ObjFunc
	
Label_1284:
	var_468_bool = 1; // 0x504 MovB
	return 4; // 0x505 Return
}


func_355(var_527_bool)
{
	var_528_bool = 0; var_529_bool = 0; // 0x163 PushV
	IsLoaded(var_529_bool); // 0x164 Func
	var_527_bool = var_529_bool; // 0x166 Mov
	return 2; // 0x167 Return
}


func_360(var_6_bool)
{
	var_8_float = 0; var_9_cvector = CVector(0,0,0); var_10_cvector = CVector(0,0,0); var_11_cvector = CVector(0,0,0); var_12_cvector = CVector(0,0,0); var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0); var_15_bool = 0; var_16_float = 0; var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_bool = 0; // 0x168 PushV
	GetPosition(var_17_cvector); // 0x169 ObjFunc
	GetEyesHeight(var_16_float); // 0x16b ObjFunc
	var_24_float = GetByIndex(var_17_cvector, 1); // 0x16d PushE
	var_24_float = var_24_float + var_16_float; // 0x16e Add2
	SetByIndex(var_17_cvector, 1) = var_24_float; // 0x16f PopE
	GetPosition(var_18_cvector); // 0x170 Func
	GetEyesHeight(var_16_float); // 0x172 Func
	var_25_float = GetByIndex(var_18_cvector, 1); // 0x174 PushE
	var_25_float = var_25_float + var_16_float; // 0x175 Add2
	SetByIndex(var_18_cvector, 1) = var_25_float; // 0x176 PopE
	var_19_cvector = var_17_cvector - var_18_cvector; // 0x177 Sub2
	var_26_float = GetByIndex(var_19_cvector, 1); // 0x178 PushE
	var_26_float = 0; // 0x179 MovI
	SetByIndex(var_19_cvector, 1) = var_26_float; // 0x17a PopE
	var_27_int = var_19_cvector | var_19_cvector; // 0x17b Or
	var_28_float = sqrt(var_27_int); // 0x17c Sqrt
	var_19_cvector = var_19_cvector / var_19_cvector; // 0x17d Div2
	var_20_cvector = -var_19_cvector; // 0x17e Neg2
	var_29_int = 70; // 0x17f PushI
	var_30_float = var_19_cvector * var_29_int; // 0x180 Mult
	var_31_cvector = CVector(0.0, 10.0, 0.0); // 0x181 PushVec
	var_21_cvector = var_30_float - var_31_cvector; // 0x182 Sub2
	var_22_cvector = var_18_cvector + var_21_cvector; // 0x183 Add2
	IsOverrideActive(var_23_bool); // 0x184 Func
	var_32_bool = var_23_bool; // 0x186 Push
	if(var_32_bool == 0) goto Label_394; // 0x187 JumpB
	var_6_bool = 0; // 0x188 MovB
	return 16; // 0x189 Return
	
Label_394:
	StopWorld(); // 0x18a Func
	CameraTransit(var_22_cvector, var_20_cvector); // 0x18c Func
	var_33_float = GetByIndex(var_21_cvector, 0); // 0x18e PushE
	var_34_float = GetByIndex(var_21_cvector, 2); // 0x18f PushE
	Rotate(var_33_float, var_34_float); // 0x190 Func
	CameraWaitForPlayFinish(); // 0x192 Func
	ResumeWorld(); // 0x194 Func
	var_6_bool = 1; // 0x196 MovB
	return 16; // 0x197 Return
}


