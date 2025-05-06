task_0_event_1(var_0_object, var_1_object, var_2_bool)
{
	var_3_bool = 0; var_4_object = Obj(); // 0x16 PushV
	var_4_object = var_2_bool; // 0x17 Mov
	func_1735(var_3_bool, var_4_object); // 0x18 NEW_2
	if(var_3_bool == 0) goto Label_32; // 0x1a JumpB
	var_142_object = Obj(); var_143_bool = 0; // 0x1b PushV
	var_142_object = var_2_bool; // 0x1c Mov
	var_143_bool = 0; // 0x1d MovB
	func_96(var_142_object, var_143_bool); // 0x1e NEW_2
	
Label_32:
	return 0; // 0x20 Return
}


task_0_event_3(var_0_object, var_1_object, var_2_bool)
{
	var_3_bool = 0; var_4_object = Obj(); // 0x22 PushV
	var_4_object = var_2_bool; // 0x23 Mov
	func_1749(var_3_bool, var_4_object); // 0x24 NEW_2
	if(var_3_bool == 0) goto Label_44; // 0x26 JumpB
	var_142_object = Obj(); var_143_bool = 0; // 0x27 PushV
	var_142_object = var_2_bool; // 0x28 Mov
	var_143_bool = 0; // 0x29 MovB
	func_96(var_142_object, var_143_bool); // 0x2a NEW_2
	
Label_44:
	return 0; // 0x2c Return
}


task_0_event_17(var_0_object, var_1_object, var_2_bool)
{
	var_3_bool = 0; var_4_object = Obj(); // 0x2e PushV
	var_4_object = var_2_bool; // 0x2f Mov
	func_634(var_3_bool, var_4_object); // 0x30 NEW_2
	if(var_3_bool == 0) goto Label_60; // 0x32 JumpB
	var_37_object = Obj(); // 0x33 PushV
	var_37_object = var_2_bool; // 0x34 Mov
	func_1520(var_37_object); // 0x35 NEW_2
	var_52_object = Obj(); var_53_bool = 0; // 0x37 PushV
	var_52_object = var_2_bool; // 0x38 Mov
	var_53_bool = 1; // 0x39 MovB
	func_96(var_52_object, var_53_bool); // 0x3a NEW_2
	
Label_60:
	return 0; // 0x3c Return
}


task_0_event_30(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_bool)
{
	var_5_bool = 0; var_6_object = Obj(); var_7_object = Obj(); var_8_bool = 0; // 0x3e PushV
	var_6_object = var_2_bool; // 0x3f Mov
	var_7_object = var_3_object; // 0x40 Mov
	var_8_bool = var_4_bool; // 0x41 Mov
	func_1596(var_5_bool, var_6_object, var_7_object, var_8_bool); // 0x42 NEW_2
	if(var_5_bool == 0) goto Label_83; // 0x44 JumpB
	var_91_bool = 0; var_92_object = Obj(); // 0x45 PushV
	var_92_object = var_2_bool; // 0x46 Mov
	func_634(var_91_bool, var_92_object); // 0x47 NEW_2
	if(var_91_bool == 0) goto Label_83; // 0x49 JumpB
	var_119_object = Obj(); // 0x4a PushV
	var_119_object = var_2_bool; // 0x4b Mov
	func_1520(var_119_object); // 0x4c NEW_2
	var_134_object = Obj(); var_135_bool = 0; // 0x4e PushV
	var_134_object = var_2_bool; // 0x4f Mov
	var_135_bool = 0; // 0x50 MovB
	func_96(var_134_object, var_135_bool); // 0x51 NEW_2
	
Label_83:
	return 0; // 0x53 Return
}


task_0_event_7(var_0_int, var_1_object, var_2_bool)
{
	var_3_int = 75; // 0x55 PushI
	var_4_bool = var_2_bool == var_3_int; // 0x56 Eq
	if(var_4_bool == 0) goto Label_91; // 0x57 JumpB
	ResetAAS(); // 0x58 Func
	goto Label_95; // 0x5a Jump
	
Label_95:
	return 0; // 0x5f Return
	
Label_91:
	var_5_int = 0; // 0x5b PushV
	var_5_int = var_2_bool; // 0x5c Mov
	func_1622(var_5_int); // 0x5d NEW_2
}


task_1_event_1(var_0_object, var_1_bool, var_2_object)
{
	var_3_bool = var_1_bool; // 0xb5 PushT
	if(var_3_bool == 0) goto Label_184; // 0xb6 JumpB
	return 0; // 0xb7 Return
	
Label_184:
	var_4_bool = 0; // 0xb8 PushV
	var_4_bool = 0; // 0xb9 MovB
	var_5_bool = 0; var_6_object = Obj(); // 0xba PushV
	var_6_object = var_2_object; // 0xbb Mov
	func_1735(var_5_bool, var_6_object); // 0xbc NEW_2
	if(var_5_bool == 0) goto Label_198; // 0xbe JumpB
	var_144_bool = 0; var_145_object = Obj(); var_146_object = Obj(); // 0xbf PushV
	var_145_object = var_0_object; // 0xc0 MovT
	var_146_object = var_2_object; // 0xc1 Mov
	func_1763(var_144_bool, var_145_object, var_146_object); // 0xc2 NEW_2
	if(var_144_bool == 0) goto Label_198; // 0xc4 JumpB
	var_4_bool = 1; // 0xc5 MovB
	
Label_198:
	if(var_4_bool == 0) goto Label_202; // 0xc6 JumpB
	var_0_object = var_2_object; // 0xc7 TMov
	Face(var_2_object); // 0xc8 Func
	
Label_202:
	return 0; // 0xca Return
}


task_1_event_3(var_0_object, var_1_bool, var_2_object)
{
	var_3_bool = var_1_bool; // 0xcc PushT
	if(var_3_bool == 0) goto Label_207; // 0xcd JumpB
	return 0; // 0xce Return
	
Label_207:
	var_4_bool = 0; // 0xcf PushV
	var_4_bool = 0; // 0xd0 MovB
	var_5_bool = 0; var_6_object = Obj(); // 0xd1 PushV
	var_6_object = var_2_object; // 0xd2 Mov
	func_1749(var_5_bool, var_6_object); // 0xd3 NEW_2
	if(var_5_bool == 0) goto Label_221; // 0xd5 JumpB
	var_144_bool = 0; var_145_object = Obj(); var_146_object = Obj(); // 0xd6 PushV
	var_145_object = var_0_object; // 0xd7 MovT
	var_146_object = var_2_object; // 0xd8 Mov
	func_1763(var_144_bool, var_145_object, var_146_object); // 0xd9 NEW_2
	if(var_144_bool == 0) goto Label_221; // 0xdb JumpB
	var_4_bool = 1; // 0xdc MovB
	
Label_221:
	if(var_4_bool == 0) goto Label_225; // 0xdd JumpB
	var_0_object = var_2_object; // 0xde TMov
	Face(var_2_object); // 0xdf Func
	
Label_225:
	return 0; // 0xe1 Return
}


	task_1_event_17(var_0_object, var_1_bool, var_2_object, var_3_object, var_4_bool, var_91_object)
	{
	var_92_object = Obj(); // 0xe3 PushV
	var_92_object = var_91_object; // 0xe4 Mov
	func_1520(var_92_object); // 0xe5 NEW_2
	var_107_bool = 0; // 0xe7 PushV
	var_107_bool = 1; // 0xe8 MovB
	var_108_bool = 0; var_109_object = Obj(); // 0xe9 PushV
	var_109_object = var_91_object; // 0xea Mov
	func_634(var_108_bool, var_109_object); // 0xeb NEW_2
	var_136_bool = var_108_bool == 0; // 0xed Not
	if(var_136_bool == 0) goto Label_246; // 0xee JumpB
	var_137_bool = 0; var_138_object = Obj(); // 0xef PushV
	var_138_object = var_91_object; // 0xf0 Mov
	func_1722(var_137_bool, var_138_object); // 0xf1 NEW_2
	var_144_bool = var_137_bool == 0; // 0xf3 Not
	if(var_144_bool == 0) goto Label_246; // 0xf4 JumpB
	var_107_bool = 0; // 0xf5 MovB
	
Label_246:
	if(var_107_bool == 0) goto Label_248; // 0xf6 JumpB
	return 0; // 0xf7 Return
	
Label_248:
	var_0_object = var_91_object; // 0xf8 TMov
	var_1_bool = 1; // 0xf9 TMovB
	Face(var_91_object); // 0xfa Func
	return 0; // 0xfc Return
	}


task_1_event_30(var_0_object, var_1_bool, var_2_object, var_3_object, var_4_bool)
{
	var_5_bool = 0; var_6_object = Obj(); var_7_object = Obj(); var_8_bool = 0; // 0xfe PushV
	var_6_object = var_2_object; // 0xff Mov
	var_7_object = var_3_object; // 0x100 Mov
	var_8_bool = var_4_bool; // 0x101 Mov
	func_1596(var_5_bool, var_6_object, var_7_object, var_8_bool); // 0x102 NEW_2
	if(var_5_bool == 0) goto Label_265; // 0x104 JumpB
	var_91_object = Obj(); // 0x105 PushV
	var_91_object = var_2_object; // 0x106 Mov
	func_226(); // 0x107 NEW_2
	
Label_265:
	return 0; // 0x109 Return
}


task_1_event_7(var_0_object, var_1_bool, var_2_int)
{
	var_3_int = 75; // 0x10b PushI
	var_4_bool = var_2_int == var_3_int; // 0x10c Eq
	if(var_4_bool == 0) goto Label_273; // 0x10d JumpB
	ResetAAS(); // 0x10e Func
	goto Label_277; // 0x110 Jump
	
Label_277:
	return 0; // 0x115 Return
	
Label_273:
	var_5_int = 0; // 0x111 PushV
	var_5_int = var_2_int; // 0x112 Mov
	func_1622(var_5_int); // 0x113 NEW_2
}


task_2_event_0(var_0_object, var_1_bool, var_2_object)
{
	var_3_bool = 0; var_4_bool = 0; // 0x155 PushV
	IsOverrideActive(var_4_bool); // 0x156 Func
	var_5_bool = var_4_bool == 0; // 0x158 Not
	if(var_5_bool == 0) goto Label_350; // 0x159 JumpB
	var_6_object = Obj(); // 0x15a PushV
	var_6_object = var_2_object; // 0x15b Mov
	func_999(var_6_object); // 0x15c NEW_2
	
Label_350:
	return 2; // 0x15e Return
}


task_2_event_22(var_0_object, var_1_bool, var_2_object, var_3_int, var_4_float, var_5_float)
{
	return 0; // 0x1d5 Return
}


task_2_event_16(var_0_object, var_1_bool, var_2_object, var_3_string)
{
	return 0; // 0x1d7 Return
}


task_2_event_41(var_0_object, var_1_bool, var_2_object)
{
	return 0; // 0x1d9 Return
}


event_22(var_0_object, var_1_bool, var_2_object, var_3_int, var_4_float, var_5_float)
{
	var_6_object = Obj(); var_7_int = 0; var_8_float = 0; // 0x618 PushV
	var_6_object = var_2_object; // 0x619 Mov
	var_7_int = var_3_int; // 0x61a Mov
	var_8_float = var_4_float; // 0x61b Mov
	func_702(var_6_object, var_7_int, var_8_float); // 0x61c NEW_2
	return 0; // 0x61e Return
}


event_43(var_0_object, var_1_bool, var_2_object, var_3_int, var_4_float, var_5_float, var_6_cvector, var_7_cvector)
{
	var_8_object = Obj(); var_9_int = 0; var_10_float = 0; var_11_cvector = CVector(0,0,0); var_12_cvector = CVector(0,0,0); // 0x620 PushV
	var_8_object = var_2_object; // 0x621 Mov
	var_9_int = var_3_int; // 0x622 Mov
	var_10_float = var_4_float; // 0x623 Mov
	var_11_cvector = var_6_cvector; // 0x624 Mov
	var_12_cvector = var_7_cvector; // 0x625 Mov
	func_770(var_10_float, var_11_cvector, var_12_cvector); // 0x626 NEW_2
	return 0; // 0x628 Return
}


event_16(var_0_object, var_1_bool, var_2_object, var_3_string)
{
	var_4_float = 0; var_5_float = 0; // 0x629 PushV
	var_6_string = "health"; // 0x62a PushS
	var_7_bool = var_3_string == var_6_string; // 0x62b Eq
	if(var_7_bool == 0) goto Label_1589; // 0x62c JumpB
	var_8_string = "health"; // 0x62d PushS
	GetProperty(var_8_string, var_5_float); // 0x62e Func
	var_9_int = 0; // 0x630 PushI
	var_10_bool = var_5_float <= var_9_int; // 0x631 LE
	if(var_10_bool == 0) goto Label_1589; // 0x632 JumpB
	SignalDeath(var_2_object); // 0x633 Func
	
Label_1589:
	return 2; // 0x635 Return
}


event_41(var_0_object, var_1_bool, var_2_object)
{
	var_3_object = Obj(); // 0x637 PushV
	var_3_object = var_2_object; // 0x638 Mov
	func_1544(var_3_object); // 0x639 NEW_2
	return 0; // 0x63b Return
}


main(var_0_object, var_1_bool)
{
	var_2_cvector = CVector(0,0,0); var_3_bool = 0; var_4_cvector = CVector(0,0,0); var_5_bool = 0; // 0x0 PushV
	func_1271(); // 0x2 NEW_2
	var_29_int = 75; // 0x4 PushI
	var_30_float = 0.5; // 0x5 PushF
	SetTimer(var_29_int, var_30_float); // 0x6 Func
	GetDirection(var_4_cvector); // 0x8 Func
	
Label_10:
	Hold(); // 0xa Func
	
Label_12:
	var_31_float = GetByIndex(var_4_cvector, 0); // 0xc PushE
	var_32_float = GetByIndex(var_4_cvector, 2); // 0xd PushE
	Rotate(var_31_float, var_32_float, var_5_bool); // 0xe Func
	var_33_bool = var_5_bool == 0; // 0x10 Not
	if(var_33_bool == 0) goto Label_19; // 0x11 JumpB
	goto Label_12; // 0x12 Jump
	
Label_19:
	goto Label_10; // 0x13 Jump
}


func_770(var_8_object, var_11_cvector, var_12_cvector)
{
	var_13_object = Obj(); var_14_object = Obj(); var_15_object = Obj(); var_16_object = Obj(); // 0x302 PushV
	GetScene(var_15_object); // 0x303 Func
	var_17_string = "scripted"; // 0x305 PushS
	var_18_string = "blood_dir.xml"; // 0x306 PushS
	AddActorByType(var_16_object, var_17_string, var_15_object, var_11_cvector, var_12_cvector, var_18_string); // 0x307 Func
	var_19_object = Obj(); // 0x309 PushV
	var_19_object = var_8_object; // 0x30a Mov
	func_658(var_19_object); // 0x30b NEW_2
	return 4; // 0x30d Return
}


func_1544(var_3_object)
{
	var_4_object = Obj(); // 0x609 PushV
	func_927(var_4_object); // 0x60a NEW_2
	var_7_float = -0.13; // 0x60c PushF
	var_8_bool = 1; // 0x60d PushB
	ReportReputationChange(var_3_object, var_4_object, var_7_float, var_8_bool); // 0x60e Func
	var_9_object = Obj(); // 0x610 PushV
	var_9_object = var_3_object; // 0x611 Mov
	TaskCall(2); // 0x612 TaskCall
	func_278(var_9_object); // 0x613 NEW_2
	TaskReturn(); // 0x614 TaskReturn
	return 0; // 0x616 Return
}


func_520(var_57_float, var_58_object, var_59_float, var_60_int)
{
	var_61_int = 0; var_62_string = ""; var_63_int = 0; var_64_float = 0; var_65_float = 0; var_66_float = 0; var_67_int = 0; var_68_string = ""; var_69_int = 0; var_70_float = 0; var_71_float = 0; var_72_float = 0; // 0x208 PushV
	var_73_bool = 0; var_74_object = Obj(); var_75_string = ""; // 0x209 PushV
	var_74_object = var_58_object; // 0x20a Mov
	var_75_string = "health"; // 0x20b MovS
	func_508(var_73_bool, var_74_object, var_75_string); // 0x20c NEW_2
	var_76_bool = var_73_bool == 0; // 0x20e Not
	if(var_76_bool == 0) goto Label_530; // 0x20f JumpB
	var_57_float = 0.0; // 0x210 MovF
	return 12; // 0x211 Return
	
Label_530:
	var_77_bool = 0; var_78_object = Obj(); var_79_string = ""; // 0x212 PushV
	var_78_object = var_58_object; // 0x213 Mov
	var_79_string = "armor"; // 0x214 MovS
	func_508(var_77_bool, var_78_object, var_79_string); // 0x215 NEW_2
	var_80_bool = var_77_bool == 0; // 0x217 Not
	if(var_80_bool == 0) goto Label_539; // 0x218 JumpB
	var_67_int = 0; // 0x219 MovI
	goto Label_542; // 0x21a Jump
	
Label_542:
	var_81_string = "armor_"; // 0x21e PushS
	var_82_string = ""; var_83_int = 0; // 0x21f PushV
	var_83_int = var_60_int; // 0x220 Mov
	func_474(var_82_string, var_83_int); // 0x221 NEW_2
	var_68_string = var_81_string + var_82_string; // 0x223 Add2
	var_88_bool = 0; var_89_object = Obj(); var_90_string = ""; // 0x224 PushV
	var_89_object = var_58_object; // 0x225 Mov
	var_90_string = var_68_string; // 0x226 Mov
	func_508(var_88_bool, var_89_object, var_90_string); // 0x227 NEW_2
	var_91_bool = var_88_bool == 0; // 0x229 Not
	if(var_91_bool == 0) goto Label_557; // 0x22a JumpB
	var_69_int = 0; // 0x22b MovI
	goto Label_559; // 0x22c Jump
	
Label_559:
	var_92_float = 0; var_93_float = 0; var_94_float = 0; // 0x22f PushV
	var_95_int = var_67_int + var_69_int; // 0x230 Add
	var_96_float = 100.0; // 0x231 PushF
	var_93_float = var_95_int / var_95_int; // 0x232 Div2
	var_94_float = 1; // 0x233 MovI
	func_943(var_92_float, var_93_float, var_94_float); // 0x234 NEW_2
	var_70_float = var_92_float; // 0x235 Mov
	var_97_string = "health"; // 0x237 PushS
	GetProperty(var_97_string, var_71_float); // 0x238 ObjFunc
	var_98_int = 1; // 0x23a PushI
	var_99_int = var_98_int - var_70_float; // 0x23b Sub
	var_72_float = var_59_float * var_99_int; // 0x23c Mult2
	var_100_string = "health"; // 0x23d PushS
	var_101_float = 0; var_102_float = 0; var_103_float = 0; var_104_float = 0; // 0x23e PushV
	var_102_float = var_71_float - var_72_float; // 0x23f Sub2
	var_103_float = 0; // 0x240 MovI
	var_104_float = 1; // 0x241 MovI
	func_950(var_101_float, var_102_float, var_103_float, var_104_float); // 0x242 NEW_2
	SetProperty(var_100_string, var_101_float); // 0x244 ObjFunc
	var_107_bool = 0; var_108_object = Obj(); // 0x246 PushV
	var_108_object = var_58_object; // 0x247 Mov
	func_503(var_107_bool, var_108_object); // 0x248 NEW_2
	if(var_107_bool == 0) goto Label_591; // 0x24a JumpB
	var_111_float = 0; // 0x24b PushV
	var_111_float = -var_72_float; // 0x24c Neg2
	func_972(var_111_float); // 0x24d NEW_2
	
Label_591:
	var_57_float = var_72_float; // 0x24f Mov
	return 12; // 0x250 Return
	
Label_557:
	GetProperty(var_68_string, var_69_int); // 0x22d ObjFunc
	
Label_539:
	var_115_string = "armor"; // 0x21b PushS
	GetProperty(var_115_string, var_67_int); // 0x21c ObjFunc
}


func_1418(var_9_bool, var_10_object)
{
	var_11_bool = 0; var_12_float = 0; var_13_float = 0; var_14_string = ""; var_15_float = 0; var_16_bool = 0; var_17_float = 0; var_18_float = 0; var_19_string = ""; var_20_float = 0; // 0x58a PushV
	var_21_bool = 0; var_22_object = Obj(); // 0x58b PushV
	var_22_object = var_10_object; // 0x58c Mov
	func_634(var_21_bool, var_22_object); // 0x58d NEW_2
	var_55_bool = var_21_bool == 0; // 0x58f Not
	if(var_55_bool == 0) goto Label_1427; // 0x590 JumpB
	var_9_bool = 0; // 0x591 MovB
	return 10; // 0x592 Return
	
Label_1427:
	var_56_object = GlobalVars[4]; // 0x593 PushGE
	in(var_16_bool, var_10_object); // 0x594 ObjFunc
	var_57_bool = var_16_bool; // 0x596 Push
	if(var_57_bool == 0) goto Label_1434; // 0x597 JumpB
	var_9_bool = 1; // 0x598 MovB
	return 10; // 0x599 Return
	
Label_1434:
	var_58_bool = 0; var_59_object = Obj(); // 0x59a PushV
	var_59_object = var_10_object; // 0x59b Mov
	func_503(var_58_bool, var_59_object); // 0x59c NEW_2
	if(var_58_bool == 0) goto Label_1453; // 0x59e JumpB
	var_62_string = "reputation"; // 0x59f PushS
	GetProperty(var_62_string, var_17_float); // 0x5a0 ObjFunc
	var_63_float = 0.33; // 0x5a2 PushF
	var_64_bool = var_17_float < var_63_float; // 0x5a3 LT
	if(var_64_bool == 0) goto Label_1447; // 0x5a4 JumpB
	var_9_bool = 1; // 0x5a5 MovB
	return 10; // 0x5a6 Return
	
Label_1447:
	var_65_string = "disease"; // 0x5a7 PushS
	GetProperty(var_65_string, var_18_float); // 0x5a8 ObjFunc
	var_66_float = 0.33; // 0x5aa PushF
	var_9_bool = var_18_float > var_66_float; // 0x5ab GT2
	return 10; // 0x5ac Return
	
Label_1453:
	var_67_bool = 0; var_68_object = Obj(); var_69_string = ""; // 0x5ad PushV
	var_68_object = var_10_object; // 0x5ae Mov
	var_69_string = "class"; // 0x5af MovS
	func_508(var_67_bool, var_68_object, var_69_string); // 0x5b0 NEW_2
	var_70_bool = var_67_bool == 0; // 0x5b2 Not
	if(var_70_bool == 0) goto Label_1462; // 0x5b3 JumpB
	var_9_bool = 0; // 0x5b4 MovB
	return 10; // 0x5b5 Return
	
Label_1462:
	var_71_string = "class"; // 0x5b6 PushS
	GetProperty(var_71_string, var_19_string); // 0x5b7 ObjFunc
	var_72_bool = 0; // 0x5b9 PushV
	var_72_bool = 1; // 0x5ba MovB
	var_73_bool = 0; // 0x5bb PushV
	var_73_bool = 1; // 0x5bc MovB
	var_74_bool = 0; // 0x5bd PushV
	var_74_bool = 1; // 0x5be MovB
	var_75_string = "bomber"; // 0x5bf PushS
	var_76_bool = var_19_string == var_75_string; // 0x5c0 Eq
	if(var_76_bool == 0) goto Label_1478; // 0x5c1 JumpB
	var_77_string = "hunter"; // 0x5c2 PushS
	var_78_bool = var_19_string == var_77_string; // 0x5c3 Eq
	if(var_78_bool == 0) goto Label_1478; // 0x5c4 JumpB
	var_74_bool = 0; // 0x5c5 MovB
	
Label_1478:
	if(var_74_bool == 0) goto Label_1483; // 0x5c6 JumpB
	var_79_string = "grabitel"; // 0x5c7 PushS
	var_80_bool = var_19_string == var_79_string; // 0x5c8 Eq
	if(var_80_bool == 0) goto Label_1483; // 0x5c9 JumpB
	var_73_bool = 0; // 0x5ca MovB
	
Label_1483:
	if(var_73_bool == 0) goto Label_1488; // 0x5cb JumpB
	var_81_string = "rat_big"; // 0x5cc PushS
	var_82_bool = var_19_string == var_81_string; // 0x5cd Eq
	if(var_82_bool == 0) goto Label_1488; // 0x5ce JumpB
	var_72_bool = 0; // 0x5cf MovB
	
Label_1488:
	if(var_72_bool == 0) goto Label_1491; // 0x5d0 JumpB
	var_9_bool = 1; // 0x5d1 MovB
	return 10; // 0x5d2 Return
	
Label_1491:
	var_83_bool = 0; var_84_object = Obj(); var_85_string = ""; // 0x5d3 PushV
	var_84_object = var_10_object; // 0x5d4 Mov
	var_85_string = "disease"; // 0x5d5 MovS
	func_508(var_83_bool, var_84_object, var_85_string); // 0x5d6 NEW_2
	var_86_bool = var_83_bool == 0; // 0x5d8 Not
	if(var_86_bool == 0) goto Label_1500; // 0x5d9 JumpB
	var_9_bool = 0; // 0x5da MovB
	return 10; // 0x5db Return
	
Label_1500:
	var_87_bool = 0; // 0x5dc PushV
	var_87_bool = 1; // 0x5dd MovB
	var_88_bool = 0; var_89_string = ""; // 0x5de PushV
	var_89_string = var_19_string; // 0x5df Mov
	func_840(var_88_bool, var_89_string); // 0x5e0 NEW_2
	if(var_88_bool == 0) goto Label_1511; // 0x5e2 JumpB
	var_127_string = "dog"; // 0x5e3 PushS
	var_128_bool = var_19_string == var_127_string; // 0x5e4 Eq
	if(var_128_bool == 0) goto Label_1511; // 0x5e5 JumpB
	var_87_bool = 0; // 0x5e6 MovB
	
Label_1511:
	if(var_87_bool == 0) goto Label_1518; // 0x5e7 JumpB
	var_129_string = "disease"; // 0x5e8 PushS
	GetProperty(var_129_string, var_20_float); // 0x5e9 ObjFunc
	var_130_int = 0; // 0x5eb PushI
	var_9_bool = var_20_float > var_130_int; // 0x5ec GT2
	return 10; // 0x5ed Return
	
Label_1518:
	var_9_bool = 0; // 0x5ee MovB
	return 10; // 0x5ef Return
}


func_784(var_81_string, var_82_int, var_83_int, var_84_int)
{
	var_85_int = 0; var_86_bool = 0; var_87_int = 0; var_88_bool = 0; // 0x310 PushV
	var_89_bool = 0; var_90_int = 0; var_91_int = 0; // 0x311 PushV
	var_90_int = var_82_int; // 0x312 Mov
	var_91_int = var_83_int; // 0x313 Mov
	func_961(var_89_bool, var_90_int, var_91_int); // 0x314 NEW_2
	if(var_89_bool == 0) goto Label_798; // 0x316 JumpB
	irand(var_87_int, var_84_int); // 0x317 Func
	var_94_int = 0; // 0x319 PushI
	var_95_int = 1; // 0x31a PushI
	var_96_int = var_87_int + var_95_int; // 0x31b Add
	AddItem(var_88_bool, var_81_string, var_94_int, var_96_int); // 0x31c Func
	
Label_798:
	return 4; // 0x31e Return
}


func_658(var_19_object)
{
	var_20_bool = 0; var_21_int = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_string = ""; var_27_bool = 0; var_28_int = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_string = ""; // 0x292 PushV
	var_34_bool = var_19_object == 0; // 0x293 NullEq
	if(var_34_bool == 0) goto Label_662; // 0x294 JumpB
	return 14; // 0x295 Return
	
Label_662:
	IsDead(var_27_bool); // 0x296 Func
	var_35_bool = var_27_bool; // 0x298 Push
	if(var_35_bool == 0) goto Label_667; // 0x299 JumpB
	return 14; // 0x29a Return
	
Label_667:
	GetSecondaryAnimationType(var_28_int); // 0x29b Func
	var_36_int = 0; // 0x29d PushI
	var_37_bool = var_28_int < var_36_int; // 0x29e LT
	if(var_37_bool == 0) goto Label_673; // 0x29f JumpB
	return 14; // 0x2a0 Return
	
Label_673:
	GetPosition(var_29_cvector); // 0x2a1 ObjFunc
	GetPosition(var_30_cvector); // 0x2a3 Func
	GetDirection(var_31_cvector); // 0x2a5 Func
	var_32_cvector = var_30_cvector - var_29_cvector; // 0x2a7 Sub2
	var_38_float = GetByIndex(var_32_cvector, 0); // 0x2a8 PushE
	var_39_float = GetByIndex(var_31_cvector, 0); // 0x2a9 PushE
	var_40_float = var_38_float * var_39_float; // 0x2aa Mult
	var_41_float = GetByIndex(var_32_cvector, 2); // 0x2ab PushE
	var_42_float = GetByIndex(var_31_cvector, 2); // 0x2ac PushE
	var_43_float = var_41_float * var_42_float; // 0x2ad Mult
	var_44_int = var_40_float + var_43_float; // 0x2ae Add
	var_45_int = 0; // 0x2af PushI
	var_46_bool = var_44_int >= var_45_int; // 0x2b0 GE
	if(var_46_bool == 0) goto Label_692; // 0x2b1 JumpB
	var_33_string = "fhit"; // 0x2b2 MovS
	goto Label_693; // 0x2b3 Jump
	
Label_693:
	var_47_string = "hit_react"; // 0x2b5 PushS
	var_48_string = "1"; // 0x2b6 PushS
	var_49_int = var_33_string + var_48_string; // 0x2b7 Add
	var_50_string = "2"; // 0x2b8 PushS
	var_51_int = var_33_string + var_50_string; // 0x2b9 Add
	var_52_int = -10; // 0x2ba PushI
	FadeSecondaryAnimation(var_47_string, var_49_int, var_51_int, var_52_int); // 0x2bb Func
	return 14; // 0x2bd Return
	
Label_692:
	var_33_string = "bhit"; // 0x2b4 MovS
}


func_1043(var_119_string)
{
	var_120_object = Obj(); var_121_int = 0; var_122_bool = 0; var_123_object = Obj(); var_124_int = 0; var_125_bool = 0; // 0x413 PushV
	CreateInvItem(var_123_object); // 0x414 Func
	SetItemName(var_119_string); // 0x416 ObjFunc
	var_126_string = "Organ"; // 0x418 PushS
	var_127_int = 1; // 0x419 PushI
	SetProperty(var_126_string, var_127_int); // 0x41a ObjFunc
	GetItemID(var_124_int); // 0x41c ObjFunc
	var_128_int = 0; // 0x41e PushI
	var_129_int = 1; // 0x41f PushI
	AddItem(var_125_bool, var_123_object, var_128_int, var_129_int); // 0x420 Func
	return 6; // 0x422 Return
}


func_278(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x116 PushV
	var_12_int = 75; // 0x117 PushI
	KillTimer(var_12_int); // 0x118 Func
	var_13_bool = 0; var_14_object = Obj(); // 0x11a PushV
	var_14_object = var_9_object; // 0x11b Mov
	func_503(var_13_bool, var_14_object); // 0x11c NEW_2
	if(var_13_bool == 0) goto Label_295; // 0x11e JumpB
	GetScene(var_11_object); // 0x11f Func
	var_17_object = Obj(); // 0x121 PushV
	func_927(var_17_object); // 0x122 NEW_2
	RemoveStationaryActor(var_17_object); // 0x124 ObjFunc
	var_11_object = 0; // 0x126 SetNull
	
Label_295:
	var_18_object = Obj(); // 0x127 PushV
	var_18_object = var_9_object; // 0x128 Mov
	func_300(var_18_object); // 0x129 NEW_2
	return 2; // 0x12b Return
}


func_927(var_20_object)
{
	var_21_object = Obj(); var_22_object = Obj(); // 0x39f PushV
	self(var_22_object); // 0x3a0 Func
	var_20_object = var_22_object; // 0x3a2 Mov
	return 2; // 0x3a3 Return
}


func_1312(var_22_bool)
{
	var_23_float = 0; var_24_float = 0; var_25_object = Obj(); var_26_cvector = CVector(0,0,0); var_27_float = 0; var_28_float = 0; var_29_float = 0; var_30_object = Obj(); var_31_cvector = CVector(0,0,0); var_32_float = 0; // 0x520 PushV
	var_33_bool = var_22_bool; // 0x521 Push
	if(var_33_bool == 0) goto Label_1319; // 0x522 JumpB
	var_34_float = GlobalVars[2]; // 0x523 PushGE
	var_28_float = var_34_float; // 0x524 Mov
	goto Label_1320; // 0x526 Jump
	
Label_1320:
	var_35_object = GlobalVars[0]; // 0x528 PushGE
	GetLength(var_29_float); // 0x529 ObjFunc
	var_36_bool = var_28_float < var_29_float; // 0x52b LT
	if(var_36_bool == 0) goto Label_1326; // 0x52c JumpB
	var_29_float = var_28_float; // 0x52d Mov
	
Label_1326:
	var_37_object = GlobalVars[0]; // 0x52e PushGE
	SetLength(var_29_float); // 0x52f ObjFunc
	var_38_bool = GlobalVars[3]; // 0x531 PushGE
	var_39_bool = var_38_bool != var_22_bool; // 0x532 Neq
	if(var_39_bool == 0) goto Label_1367; // 0x533 JumpB
	var_40_bool = var_22_bool; // 0x534 Push
	if(var_40_bool == 0) goto Label_1357; // 0x535 JumpB
	var_41_object = GlobalVars[1]; // 0x536 PushGE
	var_42_bool = var_41_object == 0; // 0x537 NullEq
	if(var_42_bool == 0) goto Label_1352; // 0x538 JumpB
	var_31_cvector = CVector(0.0, 0.0, 0.0); // 0x539 MovV
	GetHeight(var_32_float); // 0x53a Func
	var_43_float = GetByIndex(var_31_cvector, 1); // 0x53c PushE
	var_43_float = var_32_float; // 0x53d Mov
	SetByIndex(var_31_cvector, 1) = var_43_float; // 0x53e PopE
	var_44_string = "flame_loop"; // 0x53f PushS
	var_45_int = 0; // 0x540 PushI
	var_46_int = 200; // 0x541 PushI
	PlayLoopedGlobalSound(var_30_object, var_44_string, var_31_cvector, var_45_int, var_46_int); // 0x542 Func
	var_47_object = GlobalVars[1]; // 0x544 PushGE
	var_47_object = var_30_object; // 0x545 Mov
	GlobalVars[1] = var_47_object; // 0x546 PopGE
	var_30_object = 0; // 0x547 SetNull
	
Label_1352:
	var_48_object = GlobalVars[1]; // 0x548 PushGE
	var_49_int = 2; // 0x549 PushI
	FadeIn(var_49_int); // 0x54a ObjFunc
	goto Label_1364; // 0x54c Jump
	
Label_1364:
	var_50_bool = GlobalVars[3]; // 0x554 PushGE
	var_50_bool = var_22_bool; // 0x555 Mov
	GlobalVars[3] = var_50_bool; // 0x556 PopGE
	
Label_1367:
	return 10; // 0x557 Return
	
Label_1357:
	var_51_object = GlobalVars[1]; // 0x54d PushGE
	var_52_bool = var_51_object != 0; // 0x54e NullNeq
	if(var_52_bool == 0) goto Label_1364; // 0x54f JumpB
	var_53_object = GlobalVars[1]; // 0x550 PushGE
	var_54_int = 2; // 0x551 PushI
	FadeOut(var_54_int); // 0x552 ObjFunc
	
Label_1319:
	var_28_float = 0.05; // 0x527 MovF
}


func_799(var_157_string)
{
	var_158_bool = 0; var_159_int = 0; var_160_bool = 0; var_161_int = 0; var_162_bool = 0; var_163_float = 0; var_164_cvector = CVector(0,0,0); var_165_cvector = CVector(0,0,0); var_166_bool = 0; var_167_int = 0; var_168_bool = 0; var_169_int = 0; var_170_bool = 0; var_171_float = 0; var_172_cvector = CVector(0,0,0); var_173_cvector = CVector(0,0,0); // 0x31f PushV
	IsExisting3DSound(var_166_bool, var_157_string); // 0x320 Func
	var_174_bool = var_166_bool == 0; // 0x322 Not
	if(var_174_bool == 0) goto Label_824; // 0x323 JumpB
	var_167_int = 0; // 0x324 MovI
	
Label_805:
	var_175_int = 1; // 0x325 PushI
	var_176_int = var_167_int + var_175_int; // 0x326 Add
	var_177_int = var_157_string + var_176_int; // 0x327 Add
	IsExisting3DSound(var_168_bool, var_177_int); // 0x328 Func
	var_178_bool = var_168_bool == 0; // 0x32a Not
	if(var_178_bool == 0) goto Label_813; // 0x32b JumpB
	goto Label_816; // 0x32c Jump
	
Label_816:
	var_179_bool = var_167_int == 0; // 0x330 Not
	if(var_179_bool == 0) goto Label_819; // 0x331 JumpB
	return 16; // 0x332 Return
	
Label_819:
	irand(var_169_int, var_167_int); // 0x333 Func
	var_180_int = 1; // 0x335 PushI
	var_181_int = var_169_int + var_180_int; // 0x336 Add
	var_157_string = var_157_string + var_181_int; // 0x337 Add2
	
Label_824:
	Is3DSoundLoaded(var_170_bool, var_157_string); // 0x338 Func
	var_182_bool = var_170_bool; // 0x33a Push
	if(var_182_bool == 0) goto Label_839; // 0x33b JumpB
	GetEyesHeight(var_171_float); // 0x33c Func
	GetDirection(var_172_cvector); // 0x33e Func
	var_183_int = 50; // 0x340 PushI
	var_173_cvector = var_172_cvector * var_183_int; // 0x341 Mult2
	var_184_float = GetByIndex(var_173_cvector, 1); // 0x342 PushE
	var_184_float = var_184_float + var_171_float; // 0x343 Add2
	SetByIndex(var_173_cvector, 1) = var_184_float; // 0x344 PopE
	PlayGlobalSound(var_157_string, var_173_cvector); // 0x345 Func
	
Label_839:
	return 16; // 0x347 Return
	
Label_813:
	var_185_int = 1; // 0x32d PushI
	var_167_int = var_167_int + var_185_int; // 0x32e Add2
	goto Label_805; // 0x32f Jump
}


func_1060()
{
	var_113_int = 0; // 0x424 PushV
	func_993(var_113_int); // 0x425 NEW_2
	var_117_int = 1; // 0x427 PushI
	var_118_bool = var_113_int != var_117_int; // 0x428 Neq
	if(var_118_bool == 0) goto Label_1067; // 0x429 JumpB
	return 0; // 0x42a Return
	
Label_1067:
	var_119_string = ""; // 0x42b PushV
	var_119_string = "liver"; // 0x42c MovS
	func_1043(var_119_string); // 0x42d NEW_2
	var_130_string = ""; // 0x42f PushV
	var_130_string = "kidney"; // 0x430 MovS
	func_1043(var_130_string); // 0x431 NEW_2
	var_131_string = ""; // 0x433 PushV
	var_131_string = "heart"; // 0x434 MovS
	func_1043(var_131_string); // 0x435 NEW_2
	var_132_string = ""; // 0x437 PushV
	var_132_string = "blood"; // 0x438 MovS
	func_1043(var_132_string); // 0x439 NEW_2
	return 0; // 0x43b Return
}


func_933(var_34_cvector, var_35_cvector)
{
	var_42_float = 0; var_43_float = 0; // 0x3a5 PushV
	var_44_int = var_35_cvector | var_35_cvector; // 0x3a6 Or
	var_43_float = sqrt(var_44_int); // 0x3a7 Sqrt2
	var_45_float = 0.0; // 0x3a8 PushF
	var_46_bool = var_43_float < var_45_float; // 0x3a9 LT
	if(var_46_bool == 0) goto Label_941; // 0x3aa JumpB
	var_34_cvector = CVector(0.0, 0.0, 0.0); // 0x3ab MovV
	return 2; // 0x3ac Return
	
Label_941:
	var_34_cvector = var_35_cvector / var_35_cvector; // 0x3ad Div2
	return 2; // 0x3ae Return
}


func_300(var_18_object)
{
	var_19_bool = 0; var_20_bool = 0; // 0x12c PushV
	var_21_int = 70; // 0x12d PushI
	KillTimer(var_21_int); // 0x12e Func
	var_22_bool = 0; // 0x130 PushV
	var_22_bool = 0; // 0x131 MovB
	func_1312(var_22_bool); // 0x132 NEW_2
	var_55_object = GlobalVars[0]; // 0x134 PushGE
	RemoveActor(var_55_object); // 0x135 Func
	IsPlayerActor(var_18_object, var_20_bool); // 0x137 Func
	var_56_bool = var_20_bool; // 0x139 Push
	if(var_56_bool == 0) goto Label_318; // 0x13a JumpB
	func_1084(); // 0x13c NEW_2
	
Label_318:
	func_1060(); // 0x13f NEW_2
	var_133_object = Obj(); // 0x141 PushV
	var_133_object = var_18_object; // 0x142 Mov
	func_326(var_133_object); // 0x143 NEW_2
	return 2; // 0x145 Return
}


func_943(var_29_float, var_30_float, var_31_float)
{
	var_33_bool = var_30_float < var_31_float; // 0x3b0 LT
	if(var_33_bool == 0) goto Label_948; // 0x3b1 JumpB
	var_29_float = var_30_float; // 0x3b2 Mov
	goto Label_949; // 0x3b3 Jump
	
Label_949:
	return 0; // 0x3b5 Return
	
Label_948:
	var_29_float = var_31_float; // 0x3b4 Mov
}


func_950(var_101_float, var_102_float, var_103_float, var_104_float)
{
	var_105_bool = var_102_float < var_103_float; // 0x3b7 LT
	if(var_105_bool == 0) goto Label_955; // 0x3b8 JumpB
	var_101_float = var_103_float; // 0x3b9 Mov
	return 0; // 0x3ba Return
	
Label_955:
	var_106_bool = var_102_float > var_104_float; // 0x3bb GT
	if(var_106_bool == 0) goto Label_959; // 0x3bc JumpB
	var_101_float = var_104_float; // 0x3bd Mov
	return 0; // 0x3be Return
	
Label_959:
	var_101_float = var_102_float; // 0x3bf Mov
	return 0; // 0x3c0 Return
}


func_1722(var_137_bool, var_138_object)
{
	var_137_bool = 0; // 0x6bb MovB
	var_139_bool = var_138_object != 0; // 0x6bc NullNeq
	if(var_139_bool == 0) goto Label_1734; // 0x6bd JumpB
	var_140_float = 0; var_141_object = Obj(); // 0x6be PushV
	var_141_object = var_138_object; // 0x6bf Mov
	func_495(var_141_object); // 0x6c0 NEW_2
	var_142_float = 302500.0; // 0x6c2 PushF
	var_143_bool = var_140_float <= var_142_float; // 0x6c3 LE
	if(var_143_bool == 0) goto Label_1734; // 0x6c4 JumpB
	var_137_bool = 1; // 0x6c5 MovB
	
Label_1734:
	return 0; // 0x6c6 Return
}


func_442(var_156_string)
{
	RemoveRTEnvelope(); // 0x1bb Func
	SetDeathState(); // 0x1bd Func
	Stop(); // 0x1bf Func
	StopAsync(); // 0x1c1 Func
	StopSecondaryAnimation(); // 0x1c3 Func
	var_157_string = ""; // 0x1c5 PushV
	var_157_string = var_156_string; // 0x1c6 Mov
	func_799(var_157_string); // 0x1c7 NEW_2
	var_186_string = "all"; // 0x1c9 PushS
	PlayAnimation(var_186_string, var_156_string); // 0x1ca Func
	WaitForAnimEnd(); // 0x1cc Func
	var_187_string = "all"; // 0x1ce PushS
	LockAnimationEnd(var_187_string, var_156_string); // 0x1cf Func
	RemoveEnvelope(); // 0x1d1 Func
	return 0; // 0x1d3 Return
}


func_1084()
{
	var_57_int = 0; var_58_bool = 0; var_59_int = 0; var_60_bool = 0; // 0x43c PushV
	var_61_int = 0; // 0x43d PushI
	ClearSubContainer(var_61_int); // 0x43e Func
	var_62_int = 0; var_63_int = 0; // 0x440 PushV
	var_62_int = 600; // 0x441 MovI
	var_63_int = 1500; // 0x442 MovI
	func_1012(var_62_int, var_63_int); // 0x443 NEW_2
	var_81_string = ""; var_82_int = 0; var_83_int = 0; var_84_int = 0; // 0x445 PushV
	var_81_string = "rusk"; // 0x446 MovS
	var_82_int = 1; // 0x447 MovI
	var_83_int = 3; // 0x448 MovI
	var_84_int = 2; // 0x449 MovI
	func_784(var_81_string, var_82_int, var_83_int, var_84_int); // 0x44a NEW_2
	var_97_string = ""; var_98_int = 0; var_99_int = 0; var_100_int = 0; // 0x44c PushV
	var_97_string = "alpha_pills"; // 0x44d MovS
	var_98_int = 1; // 0x44e MovI
	var_99_int = 3; // 0x44f MovI
	var_100_int = 5; // 0x450 MovI
	func_784(var_97_string, var_98_int, var_99_int, var_100_int); // 0x451 NEW_2
	var_101_string = ""; var_102_int = 0; var_103_int = 0; var_104_int = 0; // 0x453 PushV
	var_101_string = "beta_pills"; // 0x454 MovS
	var_102_int = 1; // 0x455 MovI
	var_103_int = 6; // 0x456 MovI
	var_104_int = 4; // 0x457 MovI
	func_784(var_101_string, var_102_int, var_103_int, var_104_int); // 0x458 NEW_2
	var_105_string = ""; var_106_int = 0; var_107_int = 0; var_108_int = 0; // 0x45a PushV
	var_105_string = "gamma_pills"; // 0x45b MovS
	var_106_int = 1; // 0x45c MovI
	var_107_int = 12; // 0x45d MovI
	var_108_int = 3; // 0x45e MovI
	func_784(var_105_string, var_106_int, var_107_int, var_108_int); // 0x45f NEW_2
	var_109_int = 0; var_110_string = ""; // 0x461 PushV
	var_110_string = "ognemet_ammo"; // 0x462 MovS
	func_1130(var_109_int, var_110_string); // 0x463 NEW_2
	var_111_int = 0; // 0x465 PushI
	var_112_int = 1; // 0x466 PushI
	AddItem(var_60_bool, var_109_int, var_111_int, var_112_int); // 0x467 Func
	return 4; // 0x469 Return
}


func_1596(var_5_bool, var_6_object, var_7_object, var_8_bool)
{
	var_9_bool = 0; var_10_bool = 0; // 0x63c PushV
	var_11_bool = 0; var_12_object = Obj(); var_13_bool = 0; // 0x63d PushV
	var_12_object = var_7_object; // 0x63e Mov
	var_13_bool = !var_8_bool; // 0x63f Not2
	func_1135(var_11_bool, var_12_object, var_13_bool); // 0x640 NEW_2
	if(var_11_bool == 0) goto Label_1620; // 0x642 JumpB
	CanSee(var_10_bool, var_6_object); // 0x643 Func
	var_79_bool = 0; // 0x645 PushV
	var_79_bool = 1; // 0x646 MovB
	var_80_bool = var_10_bool; // 0x647 Push
	if(var_80_bool == 0) goto Label_1617; // 0x648 JumpB
	var_81_float = 0; var_82_object = Obj(); // 0x649 PushV
	var_82_object = var_6_object; // 0x64a Mov
	func_495(var_82_object); // 0x64b NEW_2
	var_89_float = 490000.0; // 0x64d PushF
	var_90_bool = var_81_float <= var_89_float; // 0x64e LE
	if(var_90_bool == 0) goto Label_1617; // 0x64f JumpB
	var_79_bool = 0; // 0x650 MovB
	
Label_1617:
	if(var_79_bool == 0) goto Label_1620; // 0x651 JumpB
	var_5_bool = 1; // 0x652 MovB
	return 2; // 0x653 Return
	
Label_1620:
	var_5_bool = 0; // 0x654 MovB
	return 2; // 0x655 Return
}


func_702(var_6_object, var_7_int, var_8_float)
{
	var_9_cvector = CVector(0,0,0); var_10_object = Obj(); var_11_int = 0; var_12_bool = 0; var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0); var_15_int = 0; var_16_int = 0; var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_object = Obj(); var_20_int = 0; var_21_bool = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_int = 0; var_25_int = 0; var_26_cvector = CVector(0,0,0); // 0x2be PushV
	var_27_bool = 0; // 0x2bf PushV
	var_27_bool = 0; // 0x2c0 MovB
	var_28_bool = 0; // 0x2c1 PushV
	var_28_bool = 0; // 0x2c2 MovB
	var_29_object = var_6_object; // 0x2c3 Push
	if(var_29_object == 0) goto Label_713; // 0x2c4 JumpB
	var_30_int = 4; // 0x2c5 PushI
	var_31_bool = var_7_int != var_30_int; // 0x2c6 Neq
	if(var_31_bool == 0) goto Label_713; // 0x2c7 JumpB
	var_28_bool = 1; // 0x2c8 MovB
	
Label_713:
	if(var_28_bool == 0) goto Label_718; // 0x2c9 JumpB
	var_32_int = 5; // 0x2ca PushI
	var_33_bool = var_7_int != var_32_int; // 0x2cb Neq
	if(var_33_bool == 0) goto Label_718; // 0x2cc JumpB
	var_27_bool = 1; // 0x2cd MovB
	
Label_718:
	if(var_27_bool == 0) goto Label_765; // 0x2ce JumpB
	var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); // 0x2cf PushV
	var_36_cvector = CVector(0,0,0); var_37_object = Obj(); // 0x2d0 PushV
	var_37_object = var_6_object; // 0x2d1 Mov
	func_488(var_37_object); // 0x2d2 NEW_2
	var_35_cvector = var_36_cvector; // 0x2d3 Mov
	func_933(var_34_cvector, var_35_cvector); // 0x2d5 NEW_2
	var_18_cvector = var_34_cvector; // 0x2d6 Mov
	CreateVectorVector(var_19_object); // 0x2d8 Func
	var_20_int = 1; // 0x2da MovI
	
Label_731:
	var_47_string = "hit"; // 0x2db PushS
	var_48_int = var_47_string + var_20_int; // 0x2dc Add
	GetGeometryLocator(var_48_int, var_21_bool, var_22_cvector, var_23_cvector); // 0x2dd Func
	var_49_bool = var_21_bool == 0; // 0x2df Not
	if(var_49_bool == 0) goto Label_738; // 0x2e0 JumpB
	goto Label_747; // 0x2e1 Jump
	
Label_747:
	size(var_24_int); // 0x2eb ObjFunc
	var_50_int = var_24_int; // 0x2ed Push
	if(var_50_int == 0) goto Label_764; // 0x2ee JumpB
	irand(var_25_int, var_24_int); // 0x2ef Func
	get(var_26_cvector, var_25_int); // 0x2f1 ObjFunc
	var_51_object = Obj(); var_52_int = 0; var_53_float = 0; var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); // 0x2f3 PushV
	var_51_object = var_6_object; // 0x2f4 Mov
	var_52_int = var_7_int; // 0x2f5 Mov
	var_53_float = var_8_float; // 0x2f6 Mov
	var_54_cvector = var_26_cvector; // 0x2f7 Mov
	var_55_cvector = -var_18_cvector; // 0x2f8 Neg2
	func_770(var_53_float, var_54_cvector, var_55_cvector); // 0x2f9 NEW_2
	return 18; // 0x2fb Return
	
Label_764:
	var_19_object = 0; // 0x2fc SetNull
	
Label_765:
	var_96_object = Obj(); // 0x2fd PushV
	var_96_object = var_6_object; // 0x2fe Mov
	func_658(var_96_object); // 0x2ff NEW_2
	return 18; // 0x301 Return
	
Label_738:
	var_97_int = var_23_cvector | var_18_cvector; // 0x2e2 Or
	var_98_float = 0.70711; // 0x2e3 PushF
	var_99_bool = var_97_int >= var_98_float; // 0x2e4 GE
	if(var_99_bool == 0) goto Label_744; // 0x2e5 JumpB
	add(var_22_cvector); // 0x2e6 ObjFunc
	
Label_744:
	var_100_int = 1; // 0x2e8 PushI
	var_20_int = var_20_int + var_100_int; // 0x2e9 Add2
	goto Label_731; // 0x2ea Jump
}


func_961(var_89_bool, var_90_int, var_91_int)
{
	var_92_int = 0; var_93_int = 0; // 0x3c1 PushV
	irand(var_93_int, var_91_int); // 0x3c2 Func
	var_89_bool = var_93_int < var_90_int; // 0x3c4 LT2
	return 2; // 0x3c5 Return
}


func_326(var_133_object)
{
	EventDisable(0); // 0x147 EventDisable
	var_134_object = Obj(); // 0x148 PushV
	var_134_object = var_133_object; // 0x149 Mov
	func_351(var_134_object); // 0x14a NEW_2
	var_214_int = 50; // 0x14c PushI
	var_215_int = 40; // 0x14d PushI
	SetRTEnvelope(var_214_int, var_215_int); // 0x14e Func
	EventEnable(0); // 0x150 EventEnable
	
Label_337:
	Hold(); // 0x151 Func
	goto Label_337; // 0x153 Jump
}


func_1735(var_5_bool, var_6_object)
{
	var_5_bool = 0; // 0x6c8 MovB
	var_7_bool = 0; var_8_object = Obj(); // 0x6c9 PushV
	var_8_object = var_6_object; // 0x6ca Mov
	func_1789(var_7_bool, var_8_object); // 0x6cb NEW_2
	if(var_7_bool == 0) goto Label_1748; // 0x6cd JumpB
	var_131_bool = 0; var_132_object = Obj(); // 0x6ce PushV
	var_132_object = var_6_object; // 0x6cf Mov
	func_1722(var_131_bool, var_132_object); // 0x6d0 NEW_2
	if(var_131_bool == 0) goto Label_1748; // 0x6d2 JumpB
	var_5_bool = 1; // 0x6d3 MovB
	
Label_1748:
	return 0; // 0x6d4 Return
}


func_966(var_13_object)
{
	var_14_object = Obj(); var_15_object = Obj(); // 0x3c6 PushV
	CreateObjectSet(var_15_object); // 0x3c7 Func
	var_13_object = var_15_object; // 0x3c9 Mov
	return 2; // 0x3ca Return
}


func_840(var_88_bool, var_89_string)
{
	var_88_bool = 1; // 0x349 MovB
	var_90_bool = 0; // 0x34a PushV
	var_90_bool = 1; // 0x34b MovB
	var_91_bool = 0; // 0x34c PushV
	var_91_bool = 1; // 0x34d MovB
	var_92_bool = 0; // 0x34e PushV
	var_92_bool = 1; // 0x34f MovB
	var_93_bool = 0; // 0x350 PushV
	var_93_bool = 1; // 0x351 MovB
	var_94_bool = 0; // 0x352 PushV
	var_94_bool = 1; // 0x353 MovB
	var_95_bool = 0; // 0x354 PushV
	var_95_bool = 1; // 0x355 MovB
	var_96_bool = 0; // 0x356 PushV
	var_96_bool = 1; // 0x357 MovB
	var_97_bool = 0; // 0x358 PushV
	var_97_bool = 1; // 0x359 MovB
	var_98_bool = 0; // 0x35a PushV
	var_98_bool = 1; // 0x35b MovB
	var_99_bool = 0; // 0x35c PushV
	var_99_bool = 1; // 0x35d MovB
	var_100_bool = 0; // 0x35e PushV
	var_100_bool = 1; // 0x35f MovB
	var_101_string = "woman"; // 0x360 PushS
	var_102_bool = var_89_string == var_101_string; // 0x361 Eq
	if(var_102_bool == 0) goto Label_871; // 0x362 JumpB
	var_103_string = "worker"; // 0x363 PushS
	var_104_bool = var_89_string == var_103_string; // 0x364 Eq
	if(var_104_bool == 0) goto Label_871; // 0x365 JumpB
	var_100_bool = 0; // 0x366 MovB
	
Label_871:
	if(var_100_bool == 0) goto Label_876; // 0x367 JumpB
	var_105_string = "butcher"; // 0x368 PushS
	var_106_bool = var_89_string == var_105_string; // 0x369 Eq
	if(var_106_bool == 0) goto Label_876; // 0x36a JumpB
	var_99_bool = 0; // 0x36b MovB
	
Label_876:
	if(var_99_bool == 0) goto Label_881; // 0x36c JumpB
	var_107_string = "wasted_girl"; // 0x36d PushS
	var_108_bool = var_89_string == var_107_string; // 0x36e Eq
	if(var_108_bool == 0) goto Label_881; // 0x36f JumpB
	var_98_bool = 0; // 0x370 MovB
	
Label_881:
	if(var_98_bool == 0) goto Label_886; // 0x371 JumpB
	var_109_string = "boy"; // 0x372 PushS
	var_110_bool = var_89_string == var_109_string; // 0x373 Eq
	if(var_110_bool == 0) goto Label_886; // 0x374 JumpB
	var_97_bool = 0; // 0x375 MovB
	
Label_886:
	if(var_97_bool == 0) goto Label_891; // 0x376 JumpB
	var_111_string = "vaxxabitka"; // 0x377 PushS
	var_112_bool = var_89_string == var_111_string; // 0x378 Eq
	if(var_112_bool == 0) goto Label_891; // 0x379 JumpB
	var_96_bool = 0; // 0x37a MovB
	
Label_891:
	if(var_96_bool == 0) goto Label_896; // 0x37b JumpB
	var_113_string = "unosha"; // 0x37c PushS
	var_114_bool = var_89_string == var_113_string; // 0x37d Eq
	if(var_114_bool == 0) goto Label_896; // 0x37e JumpB
	var_95_bool = 0; // 0x37f MovB
	
Label_896:
	if(var_95_bool == 0) goto Label_901; // 0x380 JumpB
	var_115_string = "wasted_male"; // 0x381 PushS
	var_116_bool = var_89_string == var_115_string; // 0x382 Eq
	if(var_116_bool == 0) goto Label_901; // 0x383 JumpB
	var_94_bool = 0; // 0x384 MovB
	
Label_901:
	if(var_94_bool == 0) goto Label_906; // 0x385 JumpB
	var_117_string = "alkash"; // 0x386 PushS
	var_118_bool = var_89_string == var_117_string; // 0x387 Eq
	if(var_118_bool == 0) goto Label_906; // 0x388 JumpB
	var_93_bool = 0; // 0x389 MovB
	
Label_906:
	if(var_93_bool == 0) goto Label_911; // 0x38a JumpB
	var_119_string = "dohodyaga"; // 0x38b PushS
	var_120_bool = var_89_string == var_119_string; // 0x38c Eq
	if(var_120_bool == 0) goto Label_911; // 0x38d JumpB
	var_92_bool = 0; // 0x38e MovB
	
Label_911:
	if(var_92_bool == 0) goto Label_916; // 0x38f JumpB
	var_121_string = "vaxxabit"; // 0x390 PushS
	var_122_bool = var_89_string == var_121_string; // 0x391 Eq
	if(var_122_bool == 0) goto Label_916; // 0x392 JumpB
	var_91_bool = 0; // 0x393 MovB
	
Label_916:
	if(var_91_bool == 0) goto Label_921; // 0x394 JumpB
	var_123_string = "nudegirl"; // 0x395 PushS
	var_124_bool = var_89_string == var_123_string; // 0x396 Eq
	if(var_124_bool == 0) goto Label_921; // 0x397 JumpB
	var_90_bool = 0; // 0x398 MovB
	
Label_921:
	if(var_90_bool == 0) goto Label_926; // 0x399 JumpB
	var_125_string = "morlok"; // 0x39a PushS
	var_126_bool = var_89_string == var_125_string; // 0x39b Eq
	if(var_126_bool == 0) goto Label_926; // 0x39c JumpB
	var_88_bool = 0; // 0x39d MovB
	
Label_926:
	return 0; // 0x39e Return
}


func_972(var_111_float)
{
	var_112_object = Obj(); var_113_object = Obj(); // 0x3cc PushV
	CreateFloatVector(var_113_object); // 0x3cd Func
	add(var_111_float); // 0x3cf ObjFunc
	var_114_int = 15; // 0x3d1 PushI
	SendWorldWndMessage(var_114_int, var_113_object); // 0x3d2 Func
	return 2; // 0x3d4 Return
}


func_593(var_123_bool)
{
	var_125_bool = 0; var_126_bool = 0; // 0x251 PushV
	IsDead(var_126_bool); // 0x252 ObjFunc
	var_123_bool = var_126_bool; // 0x254 Mov
	return 2; // 0x255 Return
}


func_1749(var_5_bool, var_6_object)
{
	var_5_bool = 0; // 0x6d6 MovB
	var_7_bool = 0; var_8_object = Obj(); // 0x6d7 PushV
	var_8_object = var_6_object; // 0x6d8 Mov
	func_1789(var_7_bool, var_8_object); // 0x6d9 NEW_2
	if(var_7_bool == 0) goto Label_1762; // 0x6db JumpB
	var_131_bool = 0; var_132_object = Obj(); // 0x6dc PushV
	var_132_object = var_6_object; // 0x6dd Mov
	func_1722(var_131_bool, var_132_object); // 0x6de NEW_2
	if(var_131_bool == 0) goto Label_1762; // 0x6e0 JumpB
	var_5_bool = 1; // 0x6e1 MovB
	
Label_1762:
	return 0; // 0x6e2 Return
}


func_1622(var_5_int)
{
	var_6_object = Obj(); var_7_float = 0; var_8_object = Obj(); var_9_bool = 0; var_10_string = ""; var_11_float = 0; var_12_float = 0; var_13_float = 0; var_14_object = Obj(); var_15_float = 0; var_16_object = Obj(); var_17_bool = 0; var_18_string = ""; var_19_float = 0; var_20_float = 0; var_21_float = 0; // 0x656 PushV
	var_22_int = 70; // 0x657 PushI
	var_23_bool = var_5_int != var_22_int; // 0x658 Neq
	if(var_23_bool == 0) goto Label_1627; // 0x659 JumpB
	return 16; // 0x65a Return
	
Label_1627:
	var_24_object = GlobalVars[0]; // 0x65b PushGE
	var_25_bool = var_24_object == 0; // 0x65c NullEq
	if(var_25_bool == 0) goto Label_1631; // 0x65d JumpB
	return 16; // 0x65e Return
	
Label_1631:
	var_26_object = GlobalVars[0]; // 0x65f PushGE
	Intersect(var_14_object, var_15_float); // 0x660 ObjFunc
	var_27_object = GlobalVars[0]; // 0x662 PushGE
	var_28_bool = GlobalVars[3]; // 0x663 PushGE
	if(var_28_bool == 0) goto Label_1645; // 0x664 JumpB
	var_29_float = 0; var_30_float = 0; var_31_float = 0; // 0x665 PushV
	var_30_float = var_15_float; // 0x666 Mov
	var_32_float = GlobalVars[2]; // 0x667 PushGE
	var_31_float = var_32_float; // 0x668 Mov
	func_943(var_29_float, var_30_float, var_31_float); // 0x66a NEW_2
	goto Label_1646; // 0x66c Jump
	
Label_1646:
	SetLength(var_29_float); // 0x66e ObjFunc
	func_982(); // 0x671 NEW_2
	
Label_1651:
	Next(var_17_bool, var_16_object); // 0x673 ObjFunc
	var_40_bool = var_17_bool; // 0x675 Push
	if(var_40_bool == 0) goto Label_1719; // 0x676 JumpB
	var_41_bool = 0; // 0x677 PushV
	var_41_bool = 0; // 0x678 MovB
	var_42_bool = var_16_object != 0; // 0x679 NullNeq
	if(var_42_bool == 0) goto Label_1665; // 0x67a JumpB
	var_43_object = Obj(); // 0x67b PushV
	func_927(var_43_object); // 0x67c NEW_2
	var_44_bool = var_16_object != var_43_object; // 0x67e Neq
	if(var_44_bool == 0) goto Label_1665; // 0x67f JumpB
	var_41_bool = 1; // 0x680 MovB
	
Label_1665:
	if(var_41_bool == 0) goto Label_1718; // 0x681 JumpB
	var_45_bool = 0; var_46_object = Obj(); var_47_string = ""; // 0x682 PushV
	var_46_object = var_16_object; // 0x683 Mov
	var_47_string = "class"; // 0x684 MovS
	func_508(var_45_bool, var_46_object, var_47_string); // 0x685 NEW_2
	if(var_45_bool == 0) goto Label_1675; // 0x687 JumpB
	var_54_string = "class"; // 0x688 PushS
	GetProperty(var_54_string, var_18_string); // 0x689 ObjFunc
	
Label_1675:
	var_55_string = "sanitar"; // 0x68b PushS
	var_56_bool = var_18_string != var_55_string; // 0x68c Neq
	if(var_56_bool == 0) goto Label_1718; // 0x68d JumpB
	var_57_float = 0; var_58_object = Obj(); var_59_float = 0; var_60_int = 0; // 0x68e PushV
	var_58_object = var_16_object; // 0x68f Mov
	var_59_float = 0.1; // 0x690 MovF
	var_60_int = 2; // 0x691 MovI
	func_520(var_57_float, var_58_object, var_59_float, var_60_int); // 0x692 NEW_2
	var_19_float = var_57_float; // 0x693 Mov
	var_116_bool = 0; var_117_object = Obj(); var_118_string = ""; // 0x695 PushV
	var_117_object = var_16_object; // 0x696 Mov
	var_118_string = "disease"; // 0x697 MovS
	func_508(var_116_bool, var_117_object, var_118_string); // 0x698 NEW_2
	if(var_116_bool == 0) goto Label_1704; // 0x69a JumpB
	var_119_string = "disease"; // 0x69b PushS
	GetProperty(var_119_string, var_20_float); // 0x69c ObjFunc
	var_120_float = 0.1; // 0x69e PushF
	var_121_bool = var_20_float <= var_120_float; // 0x69f LE
	if(var_121_bool == 0) goto Label_1699; // 0x6a0 JumpB
	var_20_float = 0; // 0x6a1 MovI
	goto Label_1701; // 0x6a2 Jump
	
Label_1701:
	var_122_string = "disease"; // 0x6a5 PushS
	SetProperty(var_122_string, var_20_float); // 0x6a6 ObjFunc
	
Label_1704:
	var_123_bool = 0; var_124_object = Obj(); var_125_string = ""; // 0x6a8 PushV
	var_124_object = var_16_object; // 0x6a9 Mov
	var_125_string = "fire"; // 0x6aa MovS
	func_508(var_123_bool, var_124_object, var_125_string); // 0x6ab NEW_2
	if(var_123_bool == 0) goto Label_1718; // 0x6ad JumpB
	var_126_string = "fire"; // 0x6ae PushS
	GetProperty(var_126_string, var_21_float); // 0x6af ObjFunc
	var_127_string = "fire"; // 0x6b1 PushS
	var_128_float = 0.1; // 0x6b2 PushF
	var_129_int = var_21_float + var_128_float; // 0x6b3 Add
	SetProperty(var_127_string, var_129_int); // 0x6b4 ObjFunc
	
Label_1718:
	goto Label_1651; // 0x6b6 Jump
	
Label_1699:
	var_130_float = 0.1; // 0x6a3 PushF
	var_20_float = var_20_float - var_130_float; // 0x6a4 Sub2
	
Label_1719:
	return 16; // 0x6b7 Return
	
Label_1645:
	var_131_float = 0.05; // 0x66d PushF
}


func_598(var_112_bool, var_113_object)
{
	var_114_object = Obj(); var_115_object = Obj(); var_116_object = Obj(); var_117_object = Obj(); // 0x256 PushV
	var_118_bool = var_113_object == 0; // 0x257 NullEq
	if(var_118_bool == 0) goto Label_603; // 0x258 JumpB
	var_112_bool = 0; // 0x259 MovB
	return 4; // 0x25a Return
	
Label_603:
	var_119_bool = 0; // 0x25b PushV
	var_119_bool = 0; // 0x25c MovB
	var_120_string = "IsDead"; // 0x25d PushS
	var_121_int = 1; // 0x25e PushI
	var_122_bool = IsFuncExist(var_113_object, var_120_string, var_121_int); // 0x25f FuncExist
	if(var_122_bool == 0) goto Label_615; // 0x260 JumpB
	var_123_bool = 0; var_124_object = Obj(); // 0x261 PushV
	var_124_object = var_113_object; // 0x262 Mov
	func_593(var_124_object); // 0x263 NEW_2
	if(var_123_bool == 0) goto Label_615; // 0x265 JumpB
	var_119_bool = 1; // 0x266 MovB
	
Label_615:
	if(var_119_bool == 0) goto Label_618; // 0x267 JumpB
	var_112_bool = 0; // 0x268 MovB
	return 4; // 0x269 Return
	
Label_618:
	GetScene(var_116_object); // 0x26a Func
	var_127_bool = var_116_object == 0; // 0x26c NullEq
	if(var_127_bool == 0) goto Label_624; // 0x26d JumpB
	var_112_bool = 0; // 0x26e MovB
	return 4; // 0x26f Return
	
Label_624:
	GetScene(var_117_object); // 0x270 ObjFunc
	var_128_bool = var_116_object != var_117_object; // 0x272 Neq
	if(var_128_bool == 0) goto Label_630; // 0x273 JumpB
	var_112_bool = 0; // 0x274 MovB
	return 4; // 0x275 Return
	
Label_630:
	var_112_bool = 1; // 0x276 MovB
	return 4; // 0x277 Return
}


func_1368(var_296_cvector)
{
	var_297_cvector = CVector(0,0,0); var_298_float = 0; var_299_cvector = CVector(0,0,0); var_300_float = 0; var_301_bool = 0; var_302_cvector = CVector(0,0,0); var_303_float = 0; var_304_cvector = CVector(0,0,0); var_305_float = 0; var_306_bool = 0; // 0x558 PushV
	GetPosition(var_302_cvector); // 0x559 Func
	GetHeight(var_303_float); // 0x55b Func
	var_307_float = GetByIndex(var_302_cvector, 1); // 0x55d PushE
	var_308_int = 2; // 0x55e PushI
	var_309_float = var_303_float / var_308_int; // 0x55f Div
	var_307_float = var_307_float + var_309_float; // 0x560 Add2
	SetByIndex(var_302_cvector, 1) = var_307_float; // 0x561 PopE
	var_304_cvector = var_296_cvector - var_302_cvector; // 0x562 Sub2
	var_310_int = var_304_cvector | var_304_cvector; // 0x563 Or
	var_305_float = sqrt(var_310_int); // 0x564 Sqrt2
	var_311_int = 50; // 0x565 PushI
	var_312_bool = var_305_float < var_311_int; // 0x566 LT
	if(var_312_bool == 0) goto Label_1386; // 0x567 JumpB
	var_306_bool = 0; // 0x568 MovB
	goto Label_1390; // 0x569 Jump
	
Label_1390:
	var_313_string = "all"; // 0x56e PushS
	var_314_bool = var_306_bool; // 0x56f Push
	if(var_314_bool == 0) goto Label_1395; // 0x570 JumpB
	var_315_string = "cattack"; // 0x571 PushS
	goto Label_1396; // 0x572 Jump
	
Label_1396:
	PlayAnimation(var_313_string, var_315_string); // 0x574 Func
	return 10; // 0x576 Return
	
Label_1395:
	var_316_string = "attack"; // 0x573 PushS
	
Label_1386:
	var_317_float = GetByIndex(var_304_cvector, 1); // 0x56a PushE
	var_318_float = var_317_float / var_305_float; // 0x56b Div
	var_319_float = -0.14286; // 0x56c PushF
	var_306_bool = var_318_float < var_319_float; // 0x56d LT2
}


func_982()
{
	var_34_object = Obj(); var_35_object = Obj(); // 0x3d6 PushV
	GetScene(var_35_object); // 0x3d7 Func
	var_36_string = "battle"; // 0x3d9 PushS
	var_37_object = Obj(); // 0x3da PushV
	func_927(var_37_object); // 0x3db NEW_2
	BroadcastMessage(var_36_string, var_37_object, var_35_object); // 0x3dd Func
	return 2; // 0x3df Return
}


func_474(var_82_string, var_83_int)
{
	var_84_int = 2; // 0x1db PushI
	var_85_bool = var_83_int == var_84_int; // 0x1dc Eq
	if(var_85_bool == 0) goto Label_481; // 0x1dd JumpB
	var_82_string = "fire"; // 0x1de MovS
	return 0; // 0x1df Return
	
Label_481:
	var_86_int = 1; // 0x1e1 PushI
	var_87_bool = var_83_int == var_86_int; // 0x1e2 Eq
	if(var_87_bool == 0) goto Label_486; // 0x1e3 JumpB
	var_82_string = "bullet"; // 0x1e4 MovS
	return 0; // 0x1e5 Return
	
Label_486:
	var_82_string = "phys"; // 0x1e6 MovS
	return 0; // 0x1e7 Return
}


func_351(var_134_object)
{
	var_135_cvector = CVector(0,0,0); var_136_cvector = CVector(0,0,0); var_137_cvector = CVector(0,0,0); var_138_cvector = CVector(0,0,0); var_139_string = ""; var_140_object = Obj(); var_141_bool = 0; var_142_bool = 0; var_143_float = 0; var_144_cvector = CVector(0,0,0); var_145_cvector = CVector(0,0,0); var_146_cvector = CVector(0,0,0); var_147_cvector = CVector(0,0,0); var_148_cvector = CVector(0,0,0); var_149_string = ""; var_150_object = Obj(); var_151_bool = 0; var_152_bool = 0; var_153_float = 0; var_154_cvector = CVector(0,0,0); // 0x15f PushV
	var_155_bool = var_134_object == 0; // 0x160 NullEq
	if(var_155_bool == 0) goto Label_359; // 0x161 JumpB
	var_156_string = ""; // 0x162 PushV
	var_156_string = "fdie"; // 0x163 MovS
	func_442(var_156_string); // 0x164 NEW_2
	goto Label_441; // 0x166 Jump
	
Label_441:
	return 20; // 0x1b9 Return
	
Label_359:
	GetPosition(var_145_cvector); // 0x167 ObjFunc
	GetPosition(var_146_cvector); // 0x169 Func
	GetDirection(var_147_cvector); // 0x16b Func
	var_148_cvector = var_146_cvector - var_145_cvector; // 0x16d Sub2
	var_188_float = GetByIndex(var_148_cvector, 0); // 0x16e PushE
	var_189_float = GetByIndex(var_147_cvector, 0); // 0x16f PushE
	var_190_float = var_188_float * var_189_float; // 0x170 Mult
	var_191_float = GetByIndex(var_148_cvector, 2); // 0x171 PushE
	var_192_float = GetByIndex(var_147_cvector, 2); // 0x172 PushE
	var_193_float = var_191_float * var_192_float; // 0x173 Mult
	var_194_int = var_190_float + var_193_float; // 0x174 Add
	var_195_int = 0; // 0x175 PushI
	var_196_bool = var_194_int >= var_195_int; // 0x176 GE
	if(var_196_bool == 0) goto Label_378; // 0x177 JumpB
	var_149_string = "fdie"; // 0x178 MovS
	goto Label_379; // 0x179 Jump
	
Label_379:
	RemoveRTEnvelope(); // 0x17b Func
	SetDeathState(); // 0x17d Func
	Stop(); // 0x17f Func
	StopAsync(); // 0x181 Func
	var_150_object = var_134_object; // 0x183 Mov
	var_197_string = "GetScriptProperty"; // 0x184 PushS
	var_198_int = 2; // 0x185 PushI
	var_199_bool = IsFuncExist(var_134_object, var_197_string, var_198_int); // 0x186 FuncExist
	if(var_199_bool == 0) goto Label_403; // 0x187 JumpB
	var_200_string = "Owner"; // 0x188 PushS
	HasScriptProperty(var_151_bool, var_200_string); // 0x189 ObjFunc
	var_201_bool = var_151_bool; // 0x18b Push
	if(var_201_bool == 0) goto Label_403; // 0x18c JumpB
	var_202_string = "Owner"; // 0x18d PushS
	GetScriptProperty(var_150_object, var_202_string); // 0x18e ObjFunc
	var_203_bool = var_150_object == 0; // 0x190 NullEq
	if(var_203_bool == 0) goto Label_403; // 0x191 JumpB
	var_150_object = var_134_object; // 0x192 Mov
	
Label_403:
	var_204_string = "@GetEyesHeight"; // 0x193 PushS
	var_205_int = 1; // 0x194 PushI
	var_206_bool = IsFuncExist(var_150_object, var_204_string, var_205_int); // 0x195 FuncExist
	if(var_206_bool == 0) goto Label_418; // 0x196 JumpB
	GetEyesHeight(var_153_float); // 0x197 ObjFunc
	var_154_cvector = CVector(0.0, 0.0, 0.0); // 0x199 MovV
	var_207_float = GetByIndex(var_154_cvector, 1); // 0x19a PushE
	var_207_float = var_153_float; // 0x19b Mov
	SetByIndex(var_154_cvector, 1) = var_207_float; // 0x19c PopE
	var_208_string = "head"; // 0x19d PushS
	LookAsync(var_134_object, var_208_string, var_154_cvector); // 0x19e Func
	var_152_bool = 1; // 0x1a0 MovB
	goto Label_419; // 0x1a1 Jump
	
Label_419:
	var_209_string = ""; // 0x1a3 PushV
	var_209_string = var_149_string; // 0x1a4 Mov
	func_799(var_209_string); // 0x1a5 NEW_2
	var_210_string = "all"; // 0x1a7 PushS
	PlayAnimation(var_210_string, var_149_string); // 0x1a8 Func
	WaitForAnimEnd(); // 0x1aa Func
	var_211_bool = var_152_bool; // 0x1ac Push
	if(var_211_bool == 0) goto Label_435; // 0x1ad JumpB
	StopAsync(); // 0x1ae Func
	var_212_string = "head"; // 0x1b0 PushS
	UnlookAsync(var_212_string); // 0x1b1 Func
	
Label_435:
	var_213_string = "all"; // 0x1b3 PushS
	LockAnimationEnd(var_213_string, var_149_string); // 0x1b4 Func
	RemoveEnvelope(); // 0x1b6 Func
	var_150_object = 0; // 0x1b8 SetNull
	
Label_418:
	var_152_bool = 0; // 0x1a2 MovB
	
Label_378:
	var_149_string = "bdie"; // 0x17a MovS
}


func_96(var_134_object, var_135_bool)
{
	StopGroup0(); // 0x61 Func
	var_136_object = Obj(); var_137_bool = 0; // 0x63 PushV
	var_136_object = var_134_object; // 0x64 Mov
	var_137_bool = var_135_bool; // 0x65 Mov
	TaskCall(1); // 0x66 TaskCall
	func_107(var_138_object, var_139_bool, var_136_object, var_137_bool); // 0x67 NEW_2
	TaskReturn(); // 0x68 TaskReturn
	return 0; // 0x6a Return
}


func_993(var_113_int)
{
	var_114_int = 0; var_115_int = 0; // 0x3e1 PushV
	var_116_string = "branch"; // 0x3e2 PushS
	GetVariable(var_116_string, var_115_int); // 0x3e3 Func
	var_113_int = var_115_int; // 0x3e5 Mov
	return 2; // 0x3e6 Return
}


func_1763(var_144_bool, var_145_object, var_146_object)
{
	var_147_bool = var_146_object == 0; // 0x6e4 NullEq
	if(var_147_bool == 0) goto Label_1768; // 0x6e5 JumpB
	var_144_bool = 0; // 0x6e6 MovB
	return 0; // 0x6e7 Return
	
Label_1768:
	var_144_bool = 1; // 0x6e8 MovB
	var_148_bool = 0; var_149_object = Obj(); // 0x6e9 PushV
	var_149_object = var_145_object; // 0x6ea Mov
	func_1789(var_148_bool, var_149_object); // 0x6eb NEW_2
	var_150_bool = var_148_bool == 0; // 0x6ed Not
	if(var_150_bool == 0) goto Label_1788; // 0x6ee JumpB
	var_151_float = 0; var_152_object = Obj(); // 0x6ef PushV
	var_152_object = var_146_object; // 0x6f0 Mov
	func_495(var_152_object); // 0x6f1 NEW_2
	var_153_float = 0; var_154_object = Obj(); // 0x6f3 PushV
	var_154_object = var_145_object; // 0x6f4 Mov
	func_495(var_154_object); // 0x6f5 NEW_2
	var_155_int = 25; // 0x6f7 PushI
	var_156_int = var_153_float - var_155_int; // 0x6f8 Sub
	var_157_bool = var_151_float < var_156_int; // 0x6f9 LT
	if(var_157_bool == 0) goto Label_1788; // 0x6fa JumpB
	var_144_bool = 0; // 0x6fb MovB
	
Label_1788:
	return 0; // 0x6fc Return
}


func_999(var_6_object)
{
	var_7_int = 0; // 0x3e8 PushV
	func_993(var_7_int); // 0x3e9 NEW_2
	var_11_int = 1; // 0x3eb PushI
	var_12_bool = var_7_int == var_11_int; // 0x3ec Eq
	if(var_12_bool == 0) goto Label_1009; // 0x3ed JumpB
	WorkWithCorpse(var_6_object); // 0x3ee Func
	goto Label_1011; // 0x3f0 Jump
	
Label_1011:
	return 0; // 0x3f3 Return
	
Label_1009:
	Barter(var_6_object); // 0x3f1 Func
}


func_488(var_36_cvector)
{
	var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); // 0x1e8 PushV
	GetPosition(var_40_cvector); // 0x1e9 Func
	GetPosition(var_41_cvector); // 0x1eb ObjFunc
	var_36_cvector = var_41_cvector - var_40_cvector; // 0x1ed Sub2
	return 4; // 0x1ee Return
}


func_1130(var_74_int, var_75_string)
{
	var_76_int = 0; var_77_int = 0; // 0x46a PushV
	GetInvItemByName(var_77_int, var_75_string); // 0x46b Func
	var_74_int = var_77_int; // 0x46d Mov
	return 2; // 0x46e Return
}


func_107(var_0_object, var_1_object, var_136_object, var_137_bool)
{
	var_0_object = var_136_object; // 0x6c TMov
	var_1_object = var_137_bool; // 0x6d TMov
	Face(var_0_object); // 0x6e Func
	
Label_112:
	var_140_bool = 0; // 0x70 PushV
	var_140_bool = 1; // 0x71 MovB
	func_1312(var_140_bool); // 0x72 NEW_2
	var_173_bool = 1; // 0x74 PushB
	SetAttackState(var_173_bool); // 0x75 Func
	var_174_string = "all"; // 0x77 PushS
	var_175_string = "attack_on"; // 0x78 PushS
	PlayAnimation(var_174_string, var_175_string); // 0x79 Func
	WaitForAnimEnd(); // 0x7b Func
	
Label_125:
	var_176_bool = 0; // 0x7d PushV
	var_176_bool = 0; // 0x7e MovB
	var_177_bool = 0; // 0x7f PushV
	var_177_bool = 1; // 0x80 MovB
	var_178_bool = var_0_object == 0; // 0x81 NullEq
	if(var_178_bool == 0) goto Label_134; // 0x82 JumpB
	var_179_bool = var_1_object == 0; // 0x83 Not
	if(var_179_bool == 0) goto Label_134; // 0x84 JumpB
	var_177_bool = 0; // 0x85 MovB
	
Label_134:
	if(var_177_bool == 0) goto Label_152; // 0x86 JumpB
	var_180_bool = 0; // 0x87 PushV
	var_180_bool = 1; // 0x88 MovB
	var_181_bool = 0; var_182_object = Obj(); // 0x89 PushV
	var_182_object = var_0_object; // 0x8a MovT
	func_1789(var_181_bool, var_182_object); // 0x8b NEW_2
	var_271_bool = var_181_bool == 0; // 0x8d Not
	if(var_271_bool == 0) goto Label_150; // 0x8e JumpB
	var_272_bool = 0; var_273_object = Obj(); // 0x8f PushV
	var_273_object = var_0_object; // 0x90 MovT
	func_1722(var_272_bool, var_273_object); // 0x91 NEW_2
	var_279_bool = var_272_bool == 0; // 0x93 Not
	if(var_279_bool == 0) goto Label_150; // 0x94 JumpB
	var_180_bool = 0; // 0x95 MovB
	
Label_150:
	if(var_180_bool == 0) goto Label_152; // 0x96 JumpB
	var_176_bool = 1; // 0x97 MovB
	
Label_152:
	if(var_176_bool == 0) goto Label_154; // 0x98 JumpB
	goto Label_161; // 0x99 Jump
	
Label_161:
	var_0_object = 0; // 0xa1 SetNullT
	var_280_bool = 0; // 0xa2 PushB
	SetAttackState(var_280_bool); // 0xa3 Func
	var_281_bool = 0; // 0xa5 PushV
	var_281_bool = 0; // 0xa6 MovB
	func_1312(var_281_bool); // 0xa7 NEW_2
	StopAsync(); // 0xa9 Func
	var_282_string = "all"; // 0xab PushS
	var_283_string = "attack_off"; // 0xac PushS
	PlayAnimation(var_282_string, var_283_string); // 0xad Func
	WaitForAnimEnd(); // 0xaf Func
	var_284_bool = var_0_object != 0; // 0xb1 NullNeq
	if(var_284_bool == 0) goto Label_112; // 0xb2 JumpB
	return 0; // 0xb3 Return
	
Label_154:
	var_285_object = Obj(); // 0x9a PushV
	var_285_object = var_0_object; // 0x9b MovT
	func_1399(var_285_object); // 0x9c NEW_2
	WaitForAnimEnd(); // 0x9e Func
	goto Label_125; // 0xa0 Jump
}


func_1135(var_11_bool, var_12_object, var_13_bool)
{
	var_14_string = ""; var_15_string = ""; // 0x46f PushV
	var_16_bool = 0; var_17_object = Obj(); var_18_string = ""; // 0x470 PushV
	var_17_object = var_12_object; // 0x471 Mov
	var_18_string = "class"; // 0x472 MovS
	func_508(var_16_bool, var_17_object, var_18_string); // 0x473 NEW_2
	var_25_bool = var_16_bool == 0; // 0x475 Not
	if(var_25_bool == 0) goto Label_1145; // 0x476 JumpB
	var_11_bool = 0; // 0x477 MovB
	return 2; // 0x478 Return
	
Label_1145:
	var_26_string = "class"; // 0x479 PushS
	GetProperty(var_26_string, var_15_string); // 0x47a ObjFunc
	var_27_bool = 0; // 0x47c PushV
	var_27_bool = 1; // 0x47d MovB
	var_28_bool = 0; // 0x47e PushV
	var_28_bool = 1; // 0x47f MovB
	var_29_bool = 0; // 0x480 PushV
	var_29_bool = 1; // 0x481 MovB
	var_30_bool = 0; // 0x482 PushV
	var_30_bool = 1; // 0x483 MovB
	var_31_bool = 0; // 0x484 PushV
	var_31_bool = 1; // 0x485 MovB
	var_32_bool = 0; // 0x486 PushV
	var_32_bool = 1; // 0x487 MovB
	var_33_bool = 0; // 0x488 PushV
	var_33_bool = 1; // 0x489 MovB
	var_34_bool = 0; // 0x48a PushV
	var_34_bool = 1; // 0x48b MovB
	var_35_bool = 0; // 0x48c PushV
	var_35_bool = 1; // 0x48d MovB
	var_36_bool = 0; // 0x48e PushV
	var_36_bool = 1; // 0x48f MovB
	var_37_string = "patrol"; // 0x490 PushS
	var_38_bool = var_15_string == var_37_string; // 0x491 Eq
	if(var_38_bool == 0) goto Label_1175; // 0x492 JumpB
	var_39_string = "sanitar"; // 0x493 PushS
	var_40_bool = var_15_string == var_39_string; // 0x494 Eq
	if(var_40_bool == 0) goto Label_1175; // 0x495 JumpB
	var_36_bool = 0; // 0x496 MovB
	
Label_1175:
	if(var_36_bool == 0) goto Label_1180; // 0x497 JumpB
	var_41_string = "soldier"; // 0x498 PushS
	var_42_bool = var_15_string == var_41_string; // 0x499 Eq
	if(var_42_bool == 0) goto Label_1180; // 0x49a JumpB
	var_35_bool = 0; // 0x49b MovB
	
Label_1180:
	if(var_35_bool == 0) goto Label_1185; // 0x49c JumpB
	var_43_string = "woman"; // 0x49d PushS
	var_44_bool = var_15_string == var_43_string; // 0x49e Eq
	if(var_44_bool == 0) goto Label_1185; // 0x49f JumpB
	var_34_bool = 0; // 0x4a0 MovB
	
Label_1185:
	if(var_34_bool == 0) goto Label_1190; // 0x4a1 JumpB
	var_45_string = "wasted_girl"; // 0x4a2 PushS
	var_46_bool = var_15_string == var_45_string; // 0x4a3 Eq
	if(var_46_bool == 0) goto Label_1190; // 0x4a4 JumpB
	var_33_bool = 0; // 0x4a5 MovB
	
Label_1190:
	if(var_33_bool == 0) goto Label_1195; // 0x4a6 JumpB
	var_47_string = "vaxxabitka"; // 0x4a7 PushS
	var_48_bool = var_15_string == var_47_string; // 0x4a8 Eq
	if(var_48_bool == 0) goto Label_1195; // 0x4a9 JumpB
	var_32_bool = 0; // 0x4aa MovB
	
Label_1195:
	if(var_32_bool == 0) goto Label_1200; // 0x4ab JumpB
	var_49_string = "vaxxabit"; // 0x4ac PushS
	var_50_bool = var_15_string == var_49_string; // 0x4ad Eq
	if(var_50_bool == 0) goto Label_1200; // 0x4ae JumpB
	var_31_bool = 0; // 0x4af MovB
	
Label_1200:
	if(var_31_bool == 0) goto Label_1205; // 0x4b0 JumpB
	var_51_string = "little_girl"; // 0x4b1 PushS
	var_52_bool = var_15_string == var_51_string; // 0x4b2 Eq
	if(var_52_bool == 0) goto Label_1205; // 0x4b3 JumpB
	var_30_bool = 0; // 0x4b4 MovB
	
Label_1205:
	if(var_30_bool == 0) goto Label_1210; // 0x4b5 JumpB
	var_53_string = "girl"; // 0x4b6 PushS
	var_54_bool = var_15_string == var_53_string; // 0x4b7 Eq
	if(var_54_bool == 0) goto Label_1210; // 0x4b8 JumpB
	var_29_bool = 0; // 0x4b9 MovB
	
Label_1210:
	if(var_29_bool == 0) goto Label_1215; // 0x4ba JumpB
	var_55_string = "dohodyaga"; // 0x4bb PushS
	var_56_bool = var_15_string == var_55_string; // 0x4bc Eq
	if(var_56_bool == 0) goto Label_1215; // 0x4bd JumpB
	var_28_bool = 0; // 0x4be MovB
	
Label_1215:
	if(var_28_bool == 0) goto Label_1220; // 0x4bf JumpB
	var_57_string = "nudegirl"; // 0x4c0 PushS
	var_58_bool = var_15_string == var_57_string; // 0x4c1 Eq
	if(var_58_bool == 0) goto Label_1220; // 0x4c2 JumpB
	var_27_bool = 0; // 0x4c3 MovB
	
Label_1220:
	if(var_27_bool == 0) goto Label_1223; // 0x4c4 JumpB
	var_11_bool = 1; // 0x4c5 MovB
	return 2; // 0x4c6 Return
	
Label_1223:
	var_59_bool = var_13_bool; // 0x4c7 Push
	if(var_59_bool == 0) goto Label_1227; // 0x4c8 JumpB
	var_11_bool = 0; // 0x4c9 MovB
	return 2; // 0x4ca Return
	
Label_1227:
	var_11_bool = 1; // 0x4cb MovB
	var_60_bool = 0; // 0x4cc PushV
	var_60_bool = 1; // 0x4cd MovB
	var_61_bool = 0; // 0x4ce PushV
	var_61_bool = 1; // 0x4cf MovB
	var_62_bool = 0; // 0x4d0 PushV
	var_62_bool = 1; // 0x4d1 MovB
	var_63_bool = 0; // 0x4d2 PushV
	var_63_bool = 1; // 0x4d3 MovB
	var_64_bool = 0; // 0x4d4 PushV
	var_64_bool = 1; // 0x4d5 MovB
	var_65_string = "worker"; // 0x4d6 PushS
	var_66_bool = var_15_string == var_65_string; // 0x4d7 Eq
	if(var_66_bool == 0) goto Label_1245; // 0x4d8 JumpB
	var_67_string = "butcher"; // 0x4d9 PushS
	var_68_bool = var_15_string == var_67_string; // 0x4da Eq
	if(var_68_bool == 0) goto Label_1245; // 0x4db JumpB
	var_64_bool = 0; // 0x4dc MovB
	
Label_1245:
	if(var_64_bool == 0) goto Label_1250; // 0x4dd JumpB
	var_69_string = "boy"; // 0x4de PushS
	var_70_bool = var_15_string == var_69_string; // 0x4df Eq
	if(var_70_bool == 0) goto Label_1250; // 0x4e0 JumpB
	var_63_bool = 0; // 0x4e1 MovB
	
Label_1250:
	if(var_63_bool == 0) goto Label_1255; // 0x4e2 JumpB
	var_71_string = "unosha"; // 0x4e3 PushS
	var_72_bool = var_15_string == var_71_string; // 0x4e4 Eq
	if(var_72_bool == 0) goto Label_1255; // 0x4e5 JumpB
	var_62_bool = 0; // 0x4e6 MovB
	
Label_1255:
	if(var_62_bool == 0) goto Label_1260; // 0x4e7 JumpB
	var_73_string = "wasted_male"; // 0x4e8 PushS
	var_74_bool = var_15_string == var_73_string; // 0x4e9 Eq
	if(var_74_bool == 0) goto Label_1260; // 0x4ea JumpB
	var_61_bool = 0; // 0x4eb MovB
	
Label_1260:
	if(var_61_bool == 0) goto Label_1265; // 0x4ec JumpB
	var_75_string = "alkash"; // 0x4ed PushS
	var_76_bool = var_15_string == var_75_string; // 0x4ee Eq
	if(var_76_bool == 0) goto Label_1265; // 0x4ef JumpB
	var_60_bool = 0; // 0x4f0 MovB
	
Label_1265:
	if(var_60_bool == 0) goto Label_1270; // 0x4f1 JumpB
	var_77_string = "morlok"; // 0x4f2 PushS
	var_78_bool = var_15_string == var_77_string; // 0x4f3 Eq
	if(var_78_bool == 0) goto Label_1270; // 0x4f4 JumpB
	var_11_bool = 0; // 0x4f5 MovB
	
Label_1270:
	return 2; // 0x4f6 Return
}


func_1520(var_92_object)
{
	var_93_bool = 0; var_94_bool = 0; // 0x5f0 PushV
	var_95_bool = var_92_object == 0; // 0x5f1 NullEq
	if(var_95_bool == 0) goto Label_1524; // 0x5f2 JumpB
	return 2; // 0x5f3 Return
	
Label_1524:
	var_96_object = GlobalVars[4]; // 0x5f4 PushGE
	in(var_94_bool, var_92_object); // 0x5f5 ObjFunc
	var_97_bool = var_94_bool == 0; // 0x5f7 Not
	if(var_97_bool == 0) goto Label_1532; // 0x5f8 JumpB
	var_98_object = GlobalVars[4]; // 0x5f9 PushGE
	add(var_92_object); // 0x5fa ObjFunc
	
Label_1532:
	var_99_bool = 0; var_100_object = Obj(); // 0x5fc PushV
	var_100_object = var_92_object; // 0x5fd Mov
	func_503(var_99_bool, var_100_object); // 0x5fe NEW_2
	if(var_99_bool == 0) goto Label_1543; // 0x600 JumpB
	var_103_object = Obj(); // 0x601 PushV
	func_927(var_103_object); // 0x602 NEW_2
	var_106_float = -0.07; // 0x604 PushF
	ReportReputationChange(var_92_object, var_103_object, var_106_float); // 0x605 Func
	
Label_1543:
	return 2; // 0x607 Return
}


func_495(var_81_float)
{
	var_83_cvector = CVector(0,0,0); var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); var_88_cvector = CVector(0,0,0); // 0x1ef PushV
	GetPosition(var_86_cvector); // 0x1f0 Func
	GetPosition(var_87_cvector); // 0x1f2 ObjFunc
	var_88_cvector = var_87_cvector - var_86_cvector; // 0x1f4 Sub2
	var_81_float = var_88_cvector | var_88_cvector; // 0x1f5 Or2
	return 6; // 0x1f6 Return
}


func_1012(var_62_int, var_63_int)
{
	var_64_int = 0; var_65_bool = 0; var_66_int = 0; var_67_bool = 0; // 0x3f4 PushV
	var_68_bool = var_62_int > var_63_int; // 0x3f5 GT
	if(var_68_bool == 0) goto Label_1019; // 0x3f6 JumpB
	var_69_string = "GenerateMoney: iMin > iMax"; // 0x3f7 PushS
	Trace(var_69_string); // 0x3f8 Func
	return 4; // 0x3fa Return
	
Label_1019:
	var_66_int = 0; // 0x3fb MovI
	var_70_bool = var_62_int != var_63_int; // 0x3fc Neq
	if(var_70_bool == 0) goto Label_1026; // 0x3fd JumpB
	var_71_int = var_63_int - var_62_int; // 0x3fe Sub
	irand(var_66_int, var_71_int); // 0x3ff Func
	goto Label_1030; // 0x401 Jump
	
Label_1030:
	var_66_int = var_66_int + var_62_int; // 0x406 Add2
	var_72_int = 0; // 0x407 PushI
	var_73_bool = var_66_int == var_72_int; // 0x408 Eq
	if(var_73_bool == 0) goto Label_1035; // 0x409 JumpB
	return 4; // 0x40a Return
	
Label_1035:
	var_74_int = 0; var_75_string = ""; // 0x40b PushV
	var_75_string = "Money"; // 0x40c MovS
	func_1130(var_74_int, var_75_string); // 0x40d NEW_2
	var_78_int = 0; // 0x40f PushI
	AddItem(var_67_bool, var_74_int, var_78_int, var_66_int); // 0x410 Func
	return 4; // 0x412 Return
	
Label_1026:
	var_79_int = 0; // 0x402 PushI
	var_80_bool = var_62_int == var_79_int; // 0x403 Eq
	if(var_80_bool == 0) goto Label_1030; // 0x404 JumpB
	return 4; // 0x405 Return
}


func_503(var_13_bool, var_14_object)
{
	var_15_bool = 0; var_16_bool = 0; // 0x1f7 PushV
	IsPlayerActor(var_14_object, var_16_bool); // 0x1f8 Func
	var_13_bool = var_16_bool; // 0x1fa Mov
	return 2; // 0x1fb Return
}


func_634(var_108_bool, var_109_object)
{
	var_110_int = 0; var_111_int = 0; // 0x27a PushV
	var_112_bool = 0; var_113_object = Obj(); // 0x27b PushV
	var_113_object = var_109_object; // 0x27c Mov
	func_598(var_112_bool, var_113_object); // 0x27d NEW_2
	var_129_bool = var_112_bool == 0; // 0x27f Not
	if(var_129_bool == 0) goto Label_643; // 0x280 JumpB
	var_108_bool = 0; // 0x281 MovB
	return 2; // 0x282 Return
	
Label_643:
	var_130_bool = 0; var_131_object = Obj(); var_132_string = ""; // 0x283 PushV
	var_131_object = var_109_object; // 0x284 Mov
	var_132_string = "noaccess"; // 0x285 MovS
	func_508(var_130_bool, var_131_object, var_132_string); // 0x286 NEW_2
	var_133_bool = var_130_bool == 0; // 0x288 Not
	if(var_133_bool == 0) goto Label_652; // 0x289 JumpB
	var_108_bool = 1; // 0x28a MovB
	return 2; // 0x28b Return
	
Label_652:
	var_134_string = "noaccess"; // 0x28c PushS
	GetProperty(var_134_string, var_111_int); // 0x28d ObjFunc
	var_135_int = 0; // 0x28f PushI
	var_108_bool = var_111_int == var_135_int; // 0x290 Eq2
	return 2; // 0x291 Return
}


func_1271()
{
	var_6_float = 0; var_7_object = Obj(); var_8_object = Obj(); var_9_float = 0; var_10_object = Obj(); var_11_object = Obj(); // 0x4f7 PushV
	var_12_object = GlobalVars[4]; // 0x4f8 PushGE
	var_13_object = Obj(); // 0x4f9 PushV
	func_966(var_13_object); // 0x4fa NEW_2
	var_12_object = var_13_object; // 0x4fb Mov
	GlobalVars[4] = var_12_object; // 0x4fd PopGE
	GetAttackDistance(var_9_float); // 0x4fe Func
	var_16_float = GlobalVars[2]; // 0x500 PushGE
	var_17_float = 600.0; // 0x501 PushF
	var_16_float = var_9_float / var_9_float; // 0x502 Div2
	GlobalVars[2] = var_16_float; // 0x503 PopGE
	GetScene(var_10_object); // 0x504 Func
	var_18_string = "flame"; // 0x506 PushS
	var_19_cvector = CVector(0.0, 0.0, 0.0); // 0x507 PushVec
	AddActorByType(var_11_object, var_18_string, var_10_object, var_19_cvector); // 0x508 Func
	var_20_object = Obj(); // 0x50a PushV
	func_927(var_20_object); // 0x50b NEW_2
	var_23_string = "flame"; // 0x50d PushS
	Attach(var_20_object, var_23_string); // 0x50e ObjFunc
	var_24_bool = GlobalVars[3]; // 0x510 PushGE
	var_24_bool = 0; // 0x511 MovB
	GlobalVars[3] = var_24_bool; // 0x512 PopGE
	var_25_float = 0.05; // 0x513 PushF
	SetLength(var_25_float); // 0x514 ObjFunc
	var_26_object = GlobalVars[0]; // 0x516 PushGE
	var_26_object = var_11_object; // 0x517 Mov
	GlobalVars[0] = var_26_object; // 0x518 PopGE
	var_27_int = 70; // 0x519 PushI
	var_28_float = 0.1; // 0x51a PushF
	SetTimer(var_27_int, var_28_float); // 0x51b Func
	return 6; // 0x51d Return
}


func_508(var_45_bool, var_46_object, var_47_string)
{
	var_48_bool = 0; var_49_bool = 0; // 0x1fc PushV
	var_50_string = "HasProperty"; // 0x1fd PushS
	var_51_int = 2; // 0x1fe PushI
	var_52_bool = IsFuncExist(var_46_object, var_50_string, var_51_int); // 0x1ff FuncExist
	var_53_bool = var_52_bool == 0; // 0x200 Not
	if(var_53_bool == 0) goto Label_516; // 0x201 JumpB
	var_45_bool = 0; // 0x202 MovB
	return 2; // 0x203 Return
	
Label_516:
	HasProperty(var_47_string, var_49_bool); // 0x204 ObjFunc
	var_45_bool = var_49_bool; // 0x206 Mov
	return 2; // 0x207 Return
}


func_1789(var_7_bool, var_8_object)
{
	var_9_bool = 0; var_10_object = Obj(); // 0x6fe PushV
	var_10_object = var_8_object; // 0x6ff Mov
	func_1418(var_9_bool, var_10_object); // 0x700 NEW_2
	var_7_bool = var_9_bool; // 0x701 Mov
	return 0; // 0x703 Return
}


func_1399(var_285_object)
{
	var_286_cvector = CVector(0,0,0); var_287_float = 0; var_288_cvector = CVector(0,0,0); var_289_float = 0; // 0x577 PushV
	GetPosition(var_288_cvector); // 0x578 ObjFunc
	var_290_string = "@GetHeight"; // 0x57a PushS
	var_291_int = 1; // 0x57b PushI
	var_292_bool = IsFuncExist(var_285_object, var_290_string, var_291_int); // 0x57c FuncExist
	if(var_292_bool == 0) goto Label_1413; // 0x57d JumpB
	GetHeight(var_289_float); // 0x57e ObjFunc
	var_293_float = GetByIndex(var_288_cvector, 1); // 0x580 PushE
	var_294_int = 2; // 0x581 PushI
	var_295_float = var_289_float / var_294_int; // 0x582 Div
	var_293_float = var_293_float + var_295_float; // 0x583 Add2
	SetByIndex(var_288_cvector, 1) = var_293_float; // 0x584 PopE
	
Label_1413:
	var_296_cvector = CVector(0,0,0); // 0x585 PushV
	var_296_cvector = var_288_cvector; // 0x586 Mov
	func_1368(var_296_cvector); // 0x587 NEW_2
	return 4; // 0x589 Return
}


