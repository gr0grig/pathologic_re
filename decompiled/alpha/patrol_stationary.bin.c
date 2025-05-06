task_0_event_1(var_0_object, var_1_float, var_2_float, var_3_object, var_4_cvector, var_5_cvector, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_int)
{
	var_13_bool = 0; var_14_object = Obj(); // 0xf PushV
	var_14_object = var_12_int; // 0x10 Mov
	func_1760(var_13_bool, var_14_object); // 0x11 Call
	if(var_13_bool == 0) goto Label_27; // 0x13 JumpB
	func_69(var_11_bool, var_12_int); // 0x15 Call
	var_65_object = Obj(); // 0x17 PushV
	var_65_object = var_12_int; // 0x18 Mov
	func_1767(var_65_object); // 0x19 Call
	
Label_27:
	return 0; // 0x1b Return
}


	task_0_event_17(var_0_object, var_1_float, var_2_float, var_3_object, var_4_object, var_5_cvector, var_6_cvector, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_int, var_47_object)
	{
	var_48_bool = 0; var_49_object = Obj(); // 0x1d PushV
	var_49_object = var_47_object; // 0x1e Mov
	func_1327(var_48_bool, var_49_object); // 0x1f Call
	var_76_bool = var_48_bool == 0; // 0x21 Not
	if(var_76_bool == 0) goto Label_40; // 0x22 JumpB
	var_77_object = Obj(); // 0x23 PushV
	var_77_object = var_47_object; // 0x24 Mov
	func_1778(var_77_object); // 0x25 Call
	return 0; // 0x27 Return
	
Label_40:
	func_69(var_13_int, var_47_object); // 0x29 Call
	var_85_object = Obj(); // 0x2b PushV
	var_85_object = var_47_object; // 0x2c Mov
	func_1791(var_85_object); // 0x2d Call
	return 0; // 0x2f Return
	}


task_0_event_7(var_0_object, var_1_float, var_2_float, var_3_int, var_4_cvector, var_5_cvector, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_int)
{
	var_13_int = 100; // 0x31 PushI
	var_14_bool = var_12_int != var_13_int; // 0x32 Neq
	if(var_14_bool == 0) goto Label_53; // 0x33 JumpB
	return 0; // 0x34 Return
	
Label_53:
	func_69(var_11_bool, var_12_int); // 0x36 Call
	return 0; // 0x38 Return
}


task_0_event_30(var_0_object, var_1_float, var_2_float, var_3_object, var_4_object, var_5_cvector, var_6_cvector, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_int)
{
	var_14_bool = 0; var_15_object = Obj(); var_16_object = Obj(); // 0x3a PushV
	var_15_object = var_12_bool; // 0x3b Mov
	var_16_object = var_13_int; // 0x3c Mov
	func_1841(var_14_bool, var_15_object, var_16_object); // 0x3d Call
	if(var_14_bool == 0) goto Label_68; // 0x3f JumpB
	var_47_object = Obj(); // 0x40 PushV
	var_47_object = var_12_bool; // 0x41 Mov
	func_28(); // 0x42 Call
	
Label_68:
	return 0; // 0x44 Return
}


task_0_event_41(var_0_object, var_1_float, var_2_float, var_3_object, var_4_cvector, var_5_cvector, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_int)
{
	func_69(var_11_bool, var_12_int); // 0x4f Call
	var_14_object = Obj(); // 0x51 PushV
	var_14_object = var_12_int; // 0x52 Mov
	func_1835(); // 0x53 Call
	return 0; // 0x55 Return
}


task_0_event_3(var_0_object, var_1_float, var_2_float, var_3_object, var_4_cvector, var_5_cvector, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_int)
{
	var_13_bool = 0; // 0x81 PushV
	var_13_bool = 0; // 0x82 MovB
	var_14_bool = var_12_int == var_0_object; // 0x83 Eq
	if(var_14_bool == 0) goto Label_139; // 0x84 JumpB
	var_15_bool = 0; var_16_object = Obj(); // 0x85 PushV
	var_16_object = var_12_int; // 0x86 Mov
	func_1739(var_15_bool, var_16_object); // 0x87 Call
	if(var_15_bool == 0) goto Label_139; // 0x89 JumpB
	var_13_bool = 1; // 0x8a MovB
	
Label_139:
	if(var_13_bool == 0) goto Label_146; // 0x8b JumpB
	Face(var_0_object); // 0x8c Func
	var_69_int = 100; // 0x8e PushI
	var_70_int = 15; // 0x8f PushI
	SetTimer(var_69_int, var_70_int); // 0x90 Func
	
Label_146:
	return 0; // 0x92 Return
}


task_0_event_4(var_0_object, var_1_float, var_2_float, var_3_object, var_4_cvector, var_5_cvector, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_int)
{
	var_13_bool = var_12_int == var_0_object; // 0x94 Eq
	if(var_13_bool == 0) goto Label_155; // 0x95 JumpB
	StopAsync(); // 0x96 Func
	var_14_int = 100; // 0x98 PushI
	KillTimer(var_14_int); // 0x99 Func
	
Label_155:
	return 0; // 0x9b Return
}


task_1_event_41(var_0_object, var_1_float, var_2_float, var_3_cvector, var_4_cvector, var_5_object, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_int)
{
	func_174(); // 0xb4 Call
	var_13_object = Obj(); // 0xb6 PushV
	var_13_object = var_12_int; // 0xb7 Mov
	func_1835(); // 0xb8 Call
	return 0; // 0xba Return
}


task_1_event_1(var_0_object, var_1_float, var_2_float, var_3_cvector, var_4_cvector, var_5_object, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_int)
{
	var_13_bool = 0; var_14_object = Obj(); // 0xbd PushV
	var_14_object = var_12_int; // 0xbe Mov
	func_1760(var_13_bool, var_14_object); // 0xbf Call
	if(var_13_bool == 0) goto Label_201; // 0xc1 JumpB
	func_174(); // 0xc3 Call
	var_64_object = Obj(); // 0xc5 PushV
	var_64_object = var_12_int; // 0xc6 Mov
	func_1767(var_64_object); // 0xc7 Call
	
Label_201:
	return 0; // 0xc9 Return
}


task_1_event_3(var_0_object, var_1_float, var_2_float, var_3_cvector, var_4_cvector, var_5_object, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_int)
{
	var_13_bool = 0; var_14_object = Obj(); // 0xcb PushV
	var_14_object = var_12_int; // 0xcc Mov
	func_1739(var_13_bool, var_14_object); // 0xcd Call
	if(var_13_bool == 0) goto Label_215; // 0xcf JumpB
	func_174(); // 0xd1 Call
	var_67_object = Obj(); // 0xd3 PushV
	var_67_object = var_12_int; // 0xd4 Mov
	func_1752(var_67_object); // 0xd5 Call
	
Label_215:
	return 0; // 0xd7 Return
}


	task_1_event_17(var_0_object, var_1_float, var_2_float, var_3_cvector, var_4_cvector, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_int, var_47_object)
	{
	var_48_bool = 0; var_49_object = Obj(); // 0xd9 PushV
	var_49_object = var_47_object; // 0xda Mov
	func_1327(var_48_bool, var_49_object); // 0xdb Call
	var_76_bool = var_48_bool == 0; // 0xdd Not
	if(var_76_bool == 0) goto Label_228; // 0xde JumpB
	var_77_object = Obj(); // 0xdf PushV
	var_77_object = var_47_object; // 0xe0 Mov
	func_1778(var_77_object); // 0xe1 Call
	return 0; // 0xe3 Return
	
Label_228:
	func_174(); // 0xe5 Call
	var_84_object = Obj(); // 0xe7 PushV
	var_84_object = var_47_object; // 0xe8 Mov
	func_1791(var_84_object); // 0xe9 Call
	return 0; // 0xeb Return
	}


task_1_event_30(var_0_object, var_1_float, var_2_float, var_3_cvector, var_4_cvector, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_int)
{
	var_14_bool = 0; var_15_object = Obj(); var_16_object = Obj(); // 0xed PushV
	var_15_object = var_12_bool; // 0xee Mov
	var_16_object = var_13_int; // 0xef Mov
	func_1841(var_14_bool, var_15_object, var_16_object); // 0xf0 Call
	if(var_14_bool == 0) goto Label_247; // 0xf2 JumpB
	var_47_object = Obj(); // 0xf3 PushV
	var_47_object = var_12_bool; // 0xf4 Mov
	func_216(); // 0xf5 Call
	
Label_247:
	return 0; // 0xf7 Return
}


task_2_event_17(var_0_object, var_1_float, var_2_float, var_3_cvector, var_4_cvector, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_int)
{
	var_13_object = Obj(); // 0x14c PushV
	var_13_object = var_12_int; // 0x14d Mov
	func_1778(var_13_object); // 0x14e Call
	return 0; // 0x150 Return
}


task_2_event_30(var_0_object, var_1_float, var_2_float, var_3_cvector, var_4_cvector, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_int)
{
	var_14_bool = 0; var_15_object = Obj(); var_16_object = Obj(); // 0x152 PushV
	var_15_object = var_12_bool; // 0x153 Mov
	var_16_object = var_13_int; // 0x154 Mov
	func_1841(var_14_bool, var_15_object, var_16_object); // 0x155 Call
	return 0; // 0x157 Return
}


task_2_event_7(var_0_object, var_1_float, var_2_float, var_3_cvector, var_4_cvector, var_5_bool, var_6_object, var_7_int, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_int)
{
	var_13_int = 0; // 0x1bf PushI
	var_14_bool = var_12_int != var_13_int; // 0x1c0 Neq
	if(var_14_bool == 0) goto Label_451; // 0x1c1 JumpB
	return 0; // 0x1c2 Return
	
Label_451:
	var_15_bool = 0; var_16_object = Obj(); // 0x1c3 PushV
	var_16_object = var_1_float; // 0x1c4 MovT
	func_484(var_15_bool, var_16_object); // 0x1c5 Call
	var_51_bool = var_15_bool == 0; // 0x1c7 Not
	if(var_51_bool == 0) goto Label_458; // 0x1c8 JumpB
	var_0_object = 1; // 0x1c9 TMovB
	
Label_458:
	var_52_int = 0; // 0x1ca PushI
	KillTimer(var_52_int); // 0x1cb Func
	Stop(); // 0x1cd Func
	return 0; // 0x1cf Return
}


task_2_event_10(var_0_object, var_1_float, var_2_float, var_3_cvector, var_4_cvector, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_int)
{
	RequestClearPath(var_12_int); // 0x1d1 Func
	return 0; // 0x1d3 Return
}


task_2_event_41(var_0_object, var_1_float, var_2_float, var_3_cvector, var_4_cvector, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_int)
{
	func_468(var_12_int); // 0x1dd Call
	var_14_object = Obj(); // 0x1df PushV
	var_14_object = var_12_int; // 0x1e0 Mov
	func_1835(); // 0x1e1 Call
	return 0; // 0x1e3 Return
}


task_3_event_17(var_0_object, var_1_float, var_2_float, var_3_cvector, var_4_cvector, var_5_bool, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_object)
{
	var_13_object = Obj(); // 0x1fe PushV
	var_13_object = var_12_object; // 0x1ff Mov
	func_1778(var_13_object); // 0x200 Call
	return 0; // 0x202 Return
}


task_3_event_30(var_0_object, var_1_float, var_2_float, var_3_cvector, var_4_cvector, var_5_bool, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_object, var_13_object)
{
	var_14_bool = 0; var_15_object = Obj(); var_16_object = Obj(); // 0x204 PushV
	var_15_object = var_12_object; // 0x205 Mov
	var_16_object = var_13_object; // 0x206 Mov
	func_1841(var_14_bool, var_15_object, var_16_object); // 0x207 Call
	return 0; // 0x209 Return
}


task_4_event_0(var_0_object, var_1_float, var_2_float, var_3_cvector, var_4_cvector, var_5_bool, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_object)
{
	var_13_bool = 0; var_14_bool = 0; // 0x419 PushV
	IsOverrideActive(var_14_bool); // 0x41a Func
	var_15_bool = var_14_bool == 0; // 0x41c Not
	if(var_15_bool == 0) goto Label_1056; // 0x41d JumpB
	WorkWithCorpse(var_12_object); // 0x41e Func
	
Label_1056:
	return 2; // 0x420 Return
}


task_4_event_22(var_0_object, var_1_float, var_2_float, var_3_cvector, var_4_cvector, var_5_bool, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_object, var_13_int, var_14_float, var_15_float)
{
	return 0; // 0x48f Return
}


task_4_event_16(var_0_object, var_1_float, var_2_float, var_3_cvector, var_4_cvector, var_5_bool, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_object, var_13_string)
{
	return 0; // 0x491 Return
}


task_4_event_41(var_0_object, var_1_float, var_2_float, var_3_cvector, var_4_cvector, var_5_bool, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_object)
{
	return 0; // 0x493 Return
}


event_22(var_0_object, var_1_float, var_2_float, var_3_cvector, var_4_cvector, var_5_bool, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_object, var_13_int, var_14_float, var_15_float)
{
	var_16_object = Obj(); var_17_int = 0; var_18_float = 0; // 0x717 PushV
	var_16_object = var_12_object; // 0x718 Mov
	var_17_int = var_13_int; // 0x719 Mov
	var_18_float = var_14_float; // 0x71a Mov
	func_1351(var_17_int, var_18_float); // 0x71b Call
	return 0; // 0x71d Return
}


event_16(var_0_object, var_1_float, var_2_float, var_3_cvector, var_4_cvector, var_5_bool, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_object, var_13_string)
{
	var_14_float = 0; var_15_float = 0; // 0x71e PushV
	var_16_string = "health"; // 0x71f PushS
	var_17_bool = var_13_string == var_16_string; // 0x720 Eq
	if(var_17_bool == 0) goto Label_1834; // 0x721 JumpB
	var_18_string = "health"; // 0x722 PushS
	GetProperty(var_18_string, var_15_float); // 0x723 Func
	var_19_int = 0; // 0x725 PushI
	var_20_bool = var_15_float <= var_19_int; // 0x726 LE
	if(var_20_bool == 0) goto Label_1834; // 0x727 JumpB
	SignalDeath(var_12_object); // 0x728 Func
	
Label_1834:
	return 2; // 0x72a Return
}


event_41(var_0_object, var_1_float, var_2_float, var_3_cvector, var_4_cvector, var_5_bool, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_object)
{
	var_13_object = Obj(); // 0x72c PushV
	var_13_object = var_12_object; // 0x72d Mov
	func_1806(var_13_object); // 0x72e Call
	return 0; // 0x730 Return
}


main(var_0_object, var_1_float, var_2_float, var_3_cvector, var_4_cvector, var_5_bool, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int)
{
	func_1701(); // 0xa8 Call
	func_248(var_10_bool, var_11_int); // 0xab Call
	return 0; // 0xad Return
}


func_0(var_1_float, var_68_object, var_71_float)
{
	GetSeeThreshold(var_68_object); // 0x1 Func
	GetSeeFOV(var_71_float); // 0x3 Func
	var_72_float = 1.5; // 0x5 PushF
	var_73_float = var_1_float / var_72_float; // 0x6 Div
	SetSeeThreshold(var_73_float); // 0x7 Func
	var_74_object = Obj(); // 0x9 PushV
	var_74_object = var_68_object; // 0xa Mov
	func_101(var_68_object, var_74_object); // 0xb Call
	return 0; // 0xd Return
}


func_1286(var_32_bool)
{
	var_34_bool = 0; var_35_bool = 0; // 0x506 PushV
	IsDead(var_35_bool); // 0x507 ObjFunc
	var_32_bool = var_35_bool; // 0x509 Mov
	return 2; // 0x50a Return
}


func_522(var_0_object, var_1_float, var_2_float, var_3_cvector, var_4_cvector, var_93_object, var_94_bool, var_95_float, var_150_bool)
{
	var_96_bool = 0; var_97_bool = 0; var_98_float = 0; var_99_cvector = CVector(0,0,0); var_100_cvector = CVector(0,0,0); var_101_bool = 0; var_102_bool = 0; var_103_cvector = CVector(0,0,0); var_104_float = 0; var_105_float = 0; var_106_bool = 0; var_107_bool = 0; var_108_float = 0; var_109_cvector = CVector(0,0,0); var_110_cvector = CVector(0,0,0); var_111_bool = 0; var_112_bool = 0; var_113_cvector = CVector(0,0,0); var_114_float = 0; var_115_float = 0; // 0x20a PushV
	var_1_float = 0; // 0x20b TMovI
	
Label_524:
	var_116_string = "all"; // 0x20c PushS
	var_117_string = "attack_begin"; // 0x20d PushS
	var_118_int = 1; // 0x20e PushI
	var_119_int = var_1_float + var_118_int; // 0x20f Add
	var_120_int = var_117_string + var_119_int; // 0x210 Add
	HasAnimation(var_106_bool, var_116_string, var_120_int); // 0x211 Func
	var_121_bool = var_106_bool == 0; // 0x213 Not
	if(var_121_bool == 0) goto Label_534; // 0x214 JumpB
	goto Label_537; // 0x215 Jump
	
Label_537:
	var_2_float = 0; // 0x219 TMovI
	
Label_538:
	var_122_string = "attack"; // 0x21a PushS
	var_123_int = 1; // 0x21b PushI
	var_124_int = var_2_float + var_123_int; // 0x21c Add
	var_125_int = var_122_string + var_124_int; // 0x21d Add
	IsExisting3DSound(var_107_bool, var_125_int); // 0x21e Func
	var_126_bool = var_107_bool == 0; // 0x220 Not
	if(var_126_bool == 0) goto Label_547; // 0x221 JumpB
	goto Label_550; // 0x222 Jump
	
Label_550:
	var_4_cvector = 0; // 0x226 TMovI
	var_127_string = "@GetAttackDistance"; // 0x227 PushS
	var_128_int = 1; // 0x228 PushI
	var_129_bool = IsFuncExist(var_93_object, var_127_string, var_128_int); // 0x229 FuncExist
	if(var_129_bool == 0) goto Label_560; // 0x22a JumpB
	GetAttackDistance(var_108_float); // 0x22b ObjFunc
	var_130_int = 50; // 0x22d PushI
	var_108_float = var_108_float + var_130_int; // 0x22e Add2
	goto Label_561; // 0x22f Jump
	
Label_561:
	var_131_int = 150; // 0x231 PushI
	var_132_bool = var_108_float >= var_131_int; // 0x232 GE
	if(var_132_bool == 0) goto Label_565; // 0x233 JumpB
	var_108_float = 150; // 0x234 MovI
	
Label_565:
	var_3_cvector = 0; // 0x235 TMovB
	var_0_object = var_93_object; // 0x236 TMov
	IsPlayerActor(var_0_object, var_111_bool); // 0x237 Func
	var_133_bool = var_94_bool; // 0x239 Push
	if(var_133_bool == 0) goto Label_573; // 0x23a JumpB
	var_112_bool = 0; // 0x23b MovB
	goto Label_574; // 0x23c Jump
	
Label_574:
	var_134_bool = 0; // 0x23e PushV
	var_134_bool = 0; // 0x23f MovB
	var_135_bool = 0; var_136_object = Obj(); // 0x240 PushV
	var_136_object = var_0_object; // 0x241 MovT
	func_1327(var_135_bool, var_136_object); // 0x242 Call
	if(var_135_bool == 0) goto Label_584; // 0x244 JumpB
	var_137_bool = var_3_cvector == 0; // 0x245 Not
	if(var_137_bool == 0) goto Label_584; // 0x246 JumpB
	var_134_bool = 1; // 0x247 MovB
	
Label_584:
	if(var_134_bool == 0) goto Label_710; // 0x248 JumpB
	GetPFPosition(var_109_cvector); // 0x249 TObjFunc
	GetPFPosition(var_110_cvector); // 0x24b Func
	var_113_cvector = var_109_cvector - var_110_cvector; // 0x24d Sub2
	var_114_float = var_113_cvector | var_113_cvector; // 0x24e Or2
	var_138_float = 300.0; // 0x24f PushF
	var_139_int = var_138_float + var_108_float; // 0x250 Add
	var_140_float = 300.0; // 0x251 PushF
	var_141_int = var_140_float + var_108_float; // 0x252 Add
	var_142_float = var_139_int * var_141_int; // 0x253 Mult
	var_143_bool = var_114_float >= var_142_float; // 0x254 GE
	if(var_143_bool == 0) goto Label_613; // 0x255 JumpB
	var_144_bool = 0; var_145_object = Obj(); var_146_float = 0; var_147_float = 0; var_148_bool = 0; var_149_bool = 0; // 0x256 PushV
	var_145_object = var_0_object; // 0x257 MovT
	var_146_float = var_108_float; // 0x258 Mov
	var_147_float = 3000.0; // 0x259 MovF
	var_148_bool = 1; // 0x25a MovB
	var_149_bool = 0; // 0x25b MovB
	TaskCall(2); // 0x25c TaskCall
	func_344(var_150_bool, var_151_object, var_144_bool, var_145_object, var_146_float, var_147_float, var_148_bool, var_149_bool); // 0x25d Call
	TaskReturn(); // 0x25e TaskReturn
	var_197_bool = var_150_bool == 0; // 0x260 Not
	if(var_197_bool == 0) goto Label_611; // 0x261 JumpB
	goto Label_710; // 0x262 Jump
	
Label_710:
	WaitForAnimEnd(); // 0x2c6 Func
	var_198_cvector = var_3_cvector; // 0x2c8 PushT
	if(var_198_cvector == 0) goto Label_715; // 0x2c9 JumpB
	return 20; // 0x2ca Return
	
Label_715:
	var_199_string = "all"; // 0x2cb PushS
	var_200_string = "attack_off"; // 0x2cc PushS
	PlayAnimation(var_199_string, var_200_string); // 0x2cd Func
	WaitForAnimEnd(); // 0x2cf Func
	var_201_bool = var_111_bool; // 0x2d1 Push
	if(var_201_bool == 0) goto Label_726; // 0x2d2 JumpB
	var_202_float = 2.0; // 0x2d3 PushF
	Sleep(var_202_float); // 0x2d4 Func
	
Label_726:
	return 20; // 0x2d6 Return
	
Label_611:
	var_112_bool = 0; // 0x263 MovB
	goto Label_709; // 0x264 Jump
	
Label_709:
	goto Label_574; // 0x2c5 Jump
	
Label_613:
	var_203_float = var_95_float * var_95_float; // 0x265 Mult
	var_204_bool = var_114_float >= var_203_float; // 0x266 GE
	if(var_204_bool == 0) goto Label_701; // 0x267 JumpB
	var_205_bool = var_112_bool == 0; // 0x268 Not
	if(var_205_bool == 0) goto Label_631; // 0x269 JumpB
	var_206_object = Obj(); // 0x26a PushV
	var_206_object = var_0_object; // 0x26b MovT
	func_1418(); // 0x26c Call
	var_215_string = "all"; // 0x26e PushS
	var_216_string = "attack_on"; // 0x26f PushS
	PlayAnimation(var_215_string, var_216_string); // 0x270 Func
	WaitForAnimEnd(); // 0x272 Func
	StopAsync(); // 0x274 Func
	var_112_bool = 1; // 0x276 MovB
	
Label_631:
	rand(var_115_float); // 0x277 Func
	var_217_bool = 0; // 0x279 PushV
	var_217_bool = 1; // 0x27a MovB
	var_218_float = 0.6; // 0x27b PushF
	var_219_bool = var_115_float < var_218_float; // 0x27c LT
	if(var_219_bool == 0) goto Label_643; // 0x27d JumpB
	var_220_bool = 0; // 0x27e PushV
	func_962(var_217_bool, var_220_bool); // 0x27f Call
	if(var_220_bool == 0) goto Label_643; // 0x281 JumpB
	var_217_bool = 0; // 0x282 MovB
	
Label_643:
	if(var_217_bool == 0) goto Label_657; // 0x283 JumpB
	Face(var_0_object); // 0x284 Func
	var_226_string = "all"; // 0x286 PushS
	var_227_string = "attack_stay"; // 0x287 PushS
	PlayAnimation(var_226_string, var_227_string); // 0x288 Func
	var_228_bool = 0; var_229_float = 0; // 0x28a PushV
	var_229_float = var_95_float; // 0x28b Mov
	func_870(var_115_float, var_228_bool, var_229_float); // 0x28c Call
	StopAsync(); // 0x28e Func
	goto Label_700; // 0x290 Jump
	
Label_700:
	goto Label_709; // 0x2bc Jump
	
Label_657:
	Face(var_0_object); // 0x291 Func
	var_395_string = "all"; // 0x293 PushS
	var_396_string = "fjump"; // 0x294 PushS
	PlayAnimation(var_395_string, var_396_string); // 0x295 Func
	WaitForAnimEnd(); // 0x297 Func
	var_397_cvector = CVector(0.0, 0.0, 0.0); // 0x299 PushVec
	SetSpeed(var_397_cvector); // 0x29a Func
	Stop(); // 0x29c Func
	StopAsync(); // 0x29e Func
	var_398_bool = 0; // 0x2a0 PushV
	func_962(var_115_float, var_398_bool); // 0x2a1 Call
	var_399_bool = var_398_bool == 0; // 0x2a3 Not
	if(var_399_bool == 0) goto Label_700; // 0x2a4 JumpB
	var_400_bool = 0; var_401_object = Obj(); // 0x2a5 PushV
	var_401_object = var_0_object; // 0x2a6 MovT
	func_1327(var_400_bool, var_401_object); // 0x2a7 Call
	var_402_bool = var_400_bool == 0; // 0x2a9 Not
	if(var_402_bool == 0) goto Label_684; // 0x2aa JumpB
	goto Label_710; // 0x2ab Jump
	
Label_684:
	GetPFPosition(var_109_cvector); // 0x2ac TObjFunc
	GetPFPosition(var_110_cvector); // 0x2ae Func
	var_113_cvector = var_109_cvector - var_110_cvector; // 0x2b0 Sub2
	var_114_float = var_113_cvector | var_113_cvector; // 0x2b1 Or2
	var_403_float = var_95_float * var_95_float; // 0x2b2 Mult
	var_404_bool = var_114_float < var_403_float; // 0x2b3 LT
	if(var_404_bool == 0) goto Label_700; // 0x2b4 JumpB
	var_405_bool = 0; var_406_float = 0; // 0x2b5 PushV
	var_406_float = var_95_float; // 0x2b6 Mov
	func_766(var_115_float, var_405_bool, var_406_float); // 0x2b7 Call
	var_407_bool = var_405_bool == 0; // 0x2b9 Not
	if(var_407_bool == 0) goto Label_700; // 0x2ba JumpB
	goto Label_710; // 0x2bb Jump
	
Label_701:
	var_408_bool = 0; var_409_float = 0; // 0x2bd PushV
	var_409_float = var_95_float; // 0x2be Mov
	func_766(var_115_float, var_408_bool, var_409_float); // 0x2bf Call
	var_410_bool = var_408_bool == 0; // 0x2c1 Not
	if(var_410_bool == 0) goto Label_708; // 0x2c2 JumpB
	goto Label_710; // 0x2c3 Jump
	
Label_708:
	var_112_bool = 1; // 0x2c4 MovB
	
Label_573:
	var_112_bool = 1; // 0x23d MovB
	
Label_560:
	var_108_float = var_95_float; // 0x230 Mov
	
Label_547:
	var_411_int = 1; // 0x223 PushI
	var_2_float = var_2_float + var_411_int; // 0x224 Add2
	goto Label_538; // 0x225 Jump
	
Label_534:
	var_412_int = 1; // 0x216 PushI
	var_1_float = var_1_float + var_412_int; // 0x217 Add2
	goto Label_524; // 0x218 Jump
}


func_1034(var_173_object)
{
	EventDisable(0); // 0x40b EventDisable
	var_174_object = Obj(); // 0x40c PushV
	var_174_object = var_173_object; // 0x40d Mov
	func_1057(var_174_object); // 0x40e Call
	var_224_int = 50; // 0x410 PushI
	var_225_int = 40; // 0x411 PushI
	SetRTEnvelope(var_224_int, var_225_int); // 0x412 Func
	EventEnable(0); // 0x414 EventEnable
	
Label_1045:
	Hold(); // 0x415 Func
	goto Label_1045; // 0x417 Jump
}


func_1418()
{
	var_207_cvector = CVector(0,0,0); var_208_cvector = CVector(0,0,0); var_209_cvector = CVector(0,0,0); var_210_cvector = CVector(0,0,0); var_211_cvector = CVector(0,0,0); var_212_cvector = CVector(0,0,0); // 0x58a PushV
	GetPosition(var_210_cvector); // 0x58b ObjFunc
	GetPosition(var_211_cvector); // 0x58d Func
	var_212_cvector = var_210_cvector - var_211_cvector; // 0x58f Sub2
	var_213_float = GetByIndex(var_212_cvector, 0); // 0x590 PushE
	var_214_float = GetByIndex(var_212_cvector, 2); // 0x591 PushE
	RotateAsync(var_213_float, var_214_float); // 0x592 Func
	return 6; // 0x594 Return
}


func_1291(var_21_bool, var_22_object)
{
	var_23_object = Obj(); var_24_object = Obj(); var_25_object = Obj(); var_26_object = Obj(); // 0x50b PushV
	var_27_bool = var_22_object == 0; // 0x50c NullEq
	if(var_27_bool == 0) goto Label_1296; // 0x50d JumpB
	var_21_bool = 0; // 0x50e MovB
	return 4; // 0x50f Return
	
Label_1296:
	var_28_bool = 0; // 0x510 PushV
	var_28_bool = 0; // 0x511 MovB
	var_29_string = "IsDead"; // 0x512 PushS
	var_30_int = 1; // 0x513 PushI
	var_31_bool = IsFuncExist(var_22_object, var_29_string, var_30_int); // 0x514 FuncExist
	if(var_31_bool == 0) goto Label_1308; // 0x515 JumpB
	var_32_bool = 0; var_33_object = Obj(); // 0x516 PushV
	var_33_object = var_22_object; // 0x517 Mov
	func_1286(var_33_object); // 0x518 Call
	if(var_32_bool == 0) goto Label_1308; // 0x51a JumpB
	var_28_bool = 1; // 0x51b MovB
	
Label_1308:
	if(var_28_bool == 0) goto Label_1311; // 0x51c JumpB
	var_21_bool = 0; // 0x51d MovB
	return 4; // 0x51e Return
	
Label_1311:
	GetScene(var_25_object); // 0x51f Func
	var_36_bool = var_25_object == 0; // 0x521 NullEq
	if(var_36_bool == 0) goto Label_1317; // 0x522 JumpB
	var_21_bool = 0; // 0x523 MovB
	return 4; // 0x524 Return
	
Label_1317:
	GetScene(var_26_object); // 0x525 ObjFunc
	var_37_bool = var_25_object != var_26_object; // 0x527 Neq
	if(var_37_bool == 0) goto Label_1323; // 0x528 JumpB
	var_21_bool = 0; // 0x529 MovB
	return 4; // 0x52a Return
	
Label_1323:
	var_21_bool = 1; // 0x52b MovB
	return 4; // 0x52c Return
}


func_910(var_0_object, var_241_bool)
{
	var_242_cvector = CVector(0,0,0); var_243_cvector = CVector(0,0,0); var_244_cvector = CVector(0,0,0); var_245_float = 0; var_246_float = 0; var_247_cvector = CVector(0,0,0); var_248_cvector = CVector(0,0,0); var_249_cvector = CVector(0,0,0); var_250_float = 0; var_251_float = 0; // 0x38e PushV
	var_252_bool = 0; var_253_object = Obj(); // 0x38f PushV
	var_253_object = var_0_object; // 0x390 MovT
	func_1327(var_252_bool, var_253_object); // 0x391 Call
	var_254_bool = var_252_bool == 0; // 0x393 Not
	if(var_254_bool == 0) goto Label_919; // 0x394 JumpB
	var_241_bool = 0; // 0x395 MovB
	return 10; // 0x396 Return
	
Label_919:
	var_255_bool = 0; // 0x397 PushV
	func_962(var_251_float, var_255_bool); // 0x398 Call
	if(var_255_bool == 0) goto Label_941; // 0x39a JumpB
	GetPFPosition(var_247_cvector); // 0x39b TObjFunc
	GetPFPosition(var_248_cvector); // 0x39d Func
	var_249_cvector = var_247_cvector - var_248_cvector; // 0x39f Sub2
	var_250_float = var_249_cvector | var_249_cvector; // 0x3a0 Or2
	GetAttackDistance(var_251_float); // 0x3a1 TObjFunc
	var_256_int = 50; // 0x3a3 PushI
	var_251_float = var_251_float + var_256_int; // 0x3a4 Add2
	var_257_float = var_251_float * var_251_float; // 0x3a5 Mult
	var_258_bool = var_250_float <= var_257_float; // 0x3a6 LE
	if(var_258_bool == 0) goto Label_941; // 0x3a7 JumpB
	func_943(var_251_float); // 0x3a9 Call
	var_241_bool = 1; // 0x3ab MovB
	return 10; // 0x3ac Return
	
Label_941:
	var_241_bool = 0; // 0x3ad MovB
	return 10; // 0x3ae Return
}


func_1806(var_13_object)
{
	var_14_object = Obj(); // 0x70f PushV
	var_14_object = var_13_object; // 0x710 Mov
	TaskCall(4); // 0x711 TaskCall
	func_1013(var_14_object); // 0x712 Call
	TaskReturn(); // 0x713 TaskReturn
	return 0; // 0x715 Return
}


func_1172(var_342_string, var_343_int)
{
	var_344_int = 1; // 0x495 PushI
	var_345_bool = var_343_int == var_344_int; // 0x496 Eq
	if(var_345_bool == 0) goto Label_1178; // 0x497 JumpB
	var_342_string = "fire"; // 0x498 MovS
	return 0; // 0x499 Return
	
Label_1178:
	var_342_string = "phys"; // 0x49a MovS
	return 0; // 0x49b Return
}


func_1429(var_28_float, var_29_cvector, var_30_cvector)
{
	var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); // 0x595 PushV
	var_32_cvector = var_30_cvector - var_29_cvector; // 0x596 Sub2
	var_28_float = var_32_cvector | var_32_cvector; // 0x597 Or2
	return 2; // 0x598 Return
}


func_1433(var_350_float, var_351_float, var_352_float)
{
	var_355_bool = var_351_float < var_352_float; // 0x59a LT
	if(var_355_bool == 0) goto Label_1438; // 0x59b JumpB
	var_350_float = var_351_float; // 0x59c Mov
	goto Label_1439; // 0x59d Jump
	
Label_1439:
	return 0; // 0x59f Return
	
Label_1438:
	var_350_float = var_352_float; // 0x59e Mov
}


func_156(var_0_object)
{
	Stop(); // 0x9c Func
	StopGroup0(); // 0x9e Func
	StopAsync(); // 0xa0 Func
	var_92_int = 100; // 0xa2 PushI
	KillTimer(var_92_int); // 0xa3 Func
	var_0_object = 0; // 0xa5 SetNullT
	return 0; // 0xa6 Return
}


func_1180(var_36_float)
{
	var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); // 0x49c PushV
	GetPosition(var_41_cvector); // 0x49d Func
	GetPosition(var_42_cvector); // 0x49f ObjFunc
	var_43_cvector = var_42_cvector - var_41_cvector; // 0x4a1 Sub2
	var_36_float = var_43_cvector | var_43_cvector; // 0x4a2 Or2
	return 6; // 0x4a3 Return
}


func_1440(var_36_float, var_37_float, var_38_float, var_39_float)
{
	var_40_bool = var_37_float < var_38_float; // 0x5a1 LT
	if(var_40_bool == 0) goto Label_1445; // 0x5a2 JumpB
	var_36_float = var_38_float; // 0x5a3 Mov
	return 0; // 0x5a4 Return
	
Label_1445:
	var_41_bool = var_37_float > var_39_float; // 0x5a5 GT
	if(var_41_bool == 0) goto Label_1449; // 0x5a6 JumpB
	var_36_float = var_39_float; // 0x5a7 Mov
	return 0; // 0x5a8 Return
	
Label_1449:
	var_36_float = var_37_float; // 0x5a9 Mov
	return 0; // 0x5aa Return
}


func_1057(var_174_object)
{
	var_175_cvector = CVector(0,0,0); var_176_cvector = CVector(0,0,0); var_177_cvector = CVector(0,0,0); var_178_cvector = CVector(0,0,0); var_179_string = ""; var_180_object = Obj(); var_181_bool = 0; var_182_bool = 0; var_183_float = 0; var_184_cvector = CVector(0,0,0); var_185_cvector = CVector(0,0,0); var_186_cvector = CVector(0,0,0); var_187_cvector = CVector(0,0,0); var_188_cvector = CVector(0,0,0); var_189_string = ""; var_190_object = Obj(); var_191_bool = 0; var_192_bool = 0; var_193_float = 0; var_194_cvector = CVector(0,0,0); // 0x421 PushV
	var_195_bool = var_174_object == 0; // 0x422 NullEq
	if(var_195_bool == 0) goto Label_1065; // 0x423 JumpB
	var_196_string = ""; // 0x424 PushV
	var_196_string = "fdie"; // 0x425 MovS
	func_1144(var_196_string); // 0x426 Call
	goto Label_1143; // 0x428 Jump
	
Label_1143:
	return 20; // 0x477 Return
	
Label_1065:
	GetPosition(var_185_cvector); // 0x429 ObjFunc
	GetPosition(var_186_cvector); // 0x42b Func
	GetDirection(var_187_cvector); // 0x42d Func
	var_188_cvector = var_186_cvector - var_185_cvector; // 0x42f Sub2
	var_199_float = GetByIndex(var_188_cvector, 0); // 0x430 PushE
	var_200_float = GetByIndex(var_187_cvector, 0); // 0x431 PushE
	var_201_float = var_199_float * var_200_float; // 0x432 Mult
	var_202_float = GetByIndex(var_188_cvector, 2); // 0x433 PushE
	var_203_float = GetByIndex(var_187_cvector, 2); // 0x434 PushE
	var_204_float = var_202_float * var_203_float; // 0x435 Mult
	var_205_int = var_201_float + var_204_float; // 0x436 Add
	var_206_int = 0; // 0x437 PushI
	var_207_bool = var_205_int >= var_206_int; // 0x438 GE
	if(var_207_bool == 0) goto Label_1084; // 0x439 JumpB
	var_189_string = "fdie"; // 0x43a MovS
	goto Label_1085; // 0x43b Jump
	
Label_1085:
	RemoveRTEnvelope(); // 0x43d Func
	SetDeathState(); // 0x43f Func
	Stop(); // 0x441 Func
	StopAsync(); // 0x443 Func
	var_190_object = var_174_object; // 0x445 Mov
	var_208_string = "GetScriptProperty"; // 0x446 PushS
	var_209_int = 2; // 0x447 PushI
	var_210_bool = IsFuncExist(var_174_object, var_208_string, var_209_int); // 0x448 FuncExist
	if(var_210_bool == 0) goto Label_1109; // 0x449 JumpB
	var_211_string = "Owner"; // 0x44a PushS
	HasScriptProperty(var_191_bool, var_211_string); // 0x44b ObjFunc
	var_212_bool = var_191_bool; // 0x44d Push
	if(var_212_bool == 0) goto Label_1109; // 0x44e JumpB
	var_213_string = "Owner"; // 0x44f PushS
	GetScriptProperty(var_190_object, var_213_string); // 0x450 ObjFunc
	var_214_bool = var_190_object == 0; // 0x452 NullEq
	if(var_214_bool == 0) goto Label_1109; // 0x453 JumpB
	var_190_object = var_174_object; // 0x454 Mov
	
Label_1109:
	var_215_string = "@GetEyesHeight"; // 0x455 PushS
	var_216_int = 1; // 0x456 PushI
	var_217_bool = IsFuncExist(var_190_object, var_215_string, var_216_int); // 0x457 FuncExist
	if(var_217_bool == 0) goto Label_1124; // 0x458 JumpB
	GetEyesHeight(var_193_float); // 0x459 ObjFunc
	var_194_cvector = CVector(0.0, 0.0, 0.0); // 0x45b MovV
	var_218_float = GetByIndex(var_194_cvector, 1); // 0x45c PushE
	var_218_float = var_193_float; // 0x45d Mov
	SetByIndex(var_194_cvector, 1) = var_218_float; // 0x45e PopE
	var_219_string = "head"; // 0x45f PushS
	LookAsync(var_174_object, var_219_string, var_194_cvector); // 0x460 Func
	var_192_bool = 1; // 0x462 MovB
	goto Label_1125; // 0x463 Jump
	
Label_1125:
	var_220_string = "all"; // 0x465 PushS
	PlayAnimation(var_220_string, var_189_string); // 0x466 Func
	WaitForAnimEnd(); // 0x468 Func
	var_221_bool = var_192_bool; // 0x46a Push
	if(var_221_bool == 0) goto Label_1137; // 0x46b JumpB
	StopAsync(); // 0x46c Func
	var_222_string = "head"; // 0x46e PushS
	UnlookAsync(var_222_string); // 0x46f Func
	
Label_1137:
	var_223_string = "all"; // 0x471 PushS
	LockAnimationEnd(var_223_string, var_189_string); // 0x472 Func
	RemoveEnvelope(); // 0x474 Func
	var_190_object = 0; // 0x476 SetNull
	
Label_1124:
	var_192_bool = 0; // 0x464 MovB
	
Label_1084:
	var_189_string = "bdie"; // 0x43c MovS
}


func_1696(var_82_int, var_83_string)
{
	var_84_int = 0; var_85_int = 0; // 0x6a0 PushV
	GetInvItemByName(var_85_int, var_83_string); // 0x6a1 Func
	var_82_int = var_85_int; // 0x6a3 Mov
	return 2; // 0x6a4 Return
}


func_1188(var_26_bool, var_27_object, var_28_string)
{
	var_29_bool = 0; var_30_bool = 0; // 0x4a4 PushV
	var_31_string = "HasProperty"; // 0x4a5 PushS
	var_32_int = 2; // 0x4a6 PushI
	var_33_bool = IsFuncExist(var_27_object, var_31_string, var_32_int); // 0x4a7 FuncExist
	var_34_bool = var_33_bool == 0; // 0x4a8 Not
	if(var_34_bool == 0) goto Label_1196; // 0x4a9 JumpB
	var_26_bool = 0; // 0x4aa MovB
	return 2; // 0x4ab Return
	
Label_1196:
	HasProperty(var_28_string, var_30_bool); // 0x4ac ObjFunc
	var_26_bool = var_30_bool; // 0x4ae Mov
	return 2; // 0x4af Return
}


func_1701()
{
	var_12_object = GlobalVars[0]; // 0x6a5 PushGE
	var_13_object = Obj(); // 0x6a6 PushV
	func_1451(var_13_object); // 0x6a7 Call
	var_12_object = var_13_object; // 0x6a8 Mov
	GlobalVars[0] = var_12_object; // 0x6aa PopGE
	return 0; // 0x6ab Return
}


func_1451(var_13_object)
{
	var_14_object = Obj(); var_15_object = Obj(); // 0x5ab PushV
	CreateObjectSet(var_15_object); // 0x5ac Func
	var_13_object = var_15_object; // 0x5ae Mov
	return 2; // 0x5af Return
}


func_1708(var_18_bool, var_19_object)
{
	var_20_bool = 0; var_21_float = 0; var_22_bool = 0; var_23_float = 0; // 0x6ac PushV
	var_24_bool = 0; var_25_object = Obj(); // 0x6ad PushV
	var_25_object = var_19_object; // 0x6ae Mov
	func_1327(var_24_bool, var_25_object); // 0x6af Call
	var_58_bool = var_24_bool == 0; // 0x6b1 Not
	if(var_58_bool == 0) goto Label_1717; // 0x6b2 JumpB
	var_18_bool = 0; // 0x6b3 MovB
	return 4; // 0x6b4 Return
	
Label_1717:
	var_59_object = GlobalVars[0]; // 0x6b5 PushGE
	in(var_22_bool, var_19_object); // 0x6b6 ObjFunc
	var_60_bool = var_22_bool; // 0x6b8 Push
	if(var_60_bool == 0) goto Label_1724; // 0x6b9 JumpB
	var_18_bool = 1; // 0x6ba MovB
	return 4; // 0x6bb Return
	
Label_1724:
	var_61_bool = 0; var_62_object = Obj(); var_63_string = ""; // 0x6bc PushV
	var_62_object = var_19_object; // 0x6bd Mov
	var_63_string = "reputation"; // 0x6be MovS
	func_1188(var_61_bool, var_62_object, var_63_string); // 0x6bf Call
	var_64_bool = var_61_bool == 0; // 0x6c1 Not
	if(var_64_bool == 0) goto Label_1733; // 0x6c2 JumpB
	var_18_bool = 0; // 0x6c3 MovB
	return 4; // 0x6c4 Return
	
Label_1733:
	var_65_string = "reputation"; // 0x6c5 PushS
	GetProperty(var_65_string, var_23_float); // 0x6c6 ObjFunc
	var_66_float = 0.1; // 0x6c8 PushF
	var_18_bool = var_23_float < var_66_float; // 0x6c9 LT2
	return 4; // 0x6ca Return
}


func_174()
{
	func_326(); // 0xaf Call
	return 0; // 0xb1 Return
}


func_1327(var_17_bool, var_18_object)
{
	var_19_int = 0; var_20_int = 0; // 0x52f PushV
	var_21_bool = 0; var_22_object = Obj(); // 0x530 PushV
	var_22_object = var_18_object; // 0x531 Mov
	func_1291(var_21_bool, var_22_object); // 0x532 Call
	var_38_bool = var_21_bool == 0; // 0x534 Not
	if(var_38_bool == 0) goto Label_1336; // 0x535 JumpB
	var_17_bool = 0; // 0x536 MovB
	return 2; // 0x537 Return
	
Label_1336:
	var_39_bool = 0; var_40_object = Obj(); var_41_string = ""; // 0x538 PushV
	var_40_object = var_18_object; // 0x539 Mov
	var_41_string = "noaccess"; // 0x53a MovS
	func_1188(var_39_bool, var_40_object, var_41_string); // 0x53b Call
	var_48_bool = var_39_bool == 0; // 0x53d Not
	if(var_48_bool == 0) goto Label_1345; // 0x53e JumpB
	var_17_bool = 1; // 0x53f MovB
	return 2; // 0x540 Return
	
Label_1345:
	var_49_string = "noaccess"; // 0x541 PushS
	GetProperty(var_49_string, var_20_int); // 0x542 ObjFunc
	var_50_int = 0; // 0x544 PushI
	var_17_bool = var_20_int == var_50_int; // 0x545 Eq2
	return 2; // 0x546 Return
}


func_943(var_0_object)
{
	var_259_cvector = CVector(0,0,0); var_260_cvector = CVector(0,0,0); var_261_cvector = CVector(0,0,0); var_262_cvector = CVector(0,0,0); // 0x3af PushV
	Face(var_0_object); // 0x3b0 Func
	var_263_string = "all"; // 0x3b2 PushS
	var_264_string = "bjump"; // 0x3b3 PushS
	PlayAnimation(var_263_string, var_264_string); // 0x3b4 Func
	GetPFPosition(var_261_cvector); // 0x3b6 TObjFunc
	GetPFPosition(var_262_cvector); // 0x3b8 Func
	WaitForAnimEnd(); // 0x3ba Func
	StopAsync(); // 0x3bc Func
	var_265_cvector = CVector(0.0, 0.0, 0.0); // 0x3be PushVec
	SetSpeed(var_265_cvector); // 0x3bf Func
	return 4; // 0x3c1 Return
}


func_1841(var_14_bool, var_15_object, var_16_object)
{
	var_17_float = 0; var_18_bool = 0; var_19_float = 0; var_20_bool = 0; // 0x731 PushV
	var_21_bool = 0; var_22_object = Obj(); var_23_string = ""; // 0x732 PushV
	var_22_object = var_16_object; // 0x733 Mov
	var_23_string = "reputation"; // 0x734 MovS
	func_1188(var_21_bool, var_22_object, var_23_string); // 0x735 Call
	var_30_bool = var_21_bool == 0; // 0x737 Not
	if(var_30_bool == 0) goto Label_1851; // 0x738 JumpB
	var_14_bool = 0; // 0x739 MovB
	return 4; // 0x73a Return
	
Label_1851:
	var_31_string = "reputation"; // 0x73b PushS
	GetProperty(var_31_string, var_19_float); // 0x73c ObjFunc
	var_32_float = 0.5; // 0x73e PushF
	var_33_bool = var_19_float < var_32_float; // 0x73f LT
	if(var_33_bool == 0) goto Label_1859; // 0x740 JumpB
	var_14_bool = 0; // 0x741 MovB
	return 4; // 0x742 Return
	
Label_1859:
	CanSee(var_20_bool, var_15_object); // 0x743 Func
	var_34_bool = 0; // 0x745 PushV
	var_34_bool = 1; // 0x746 MovB
	var_35_bool = var_20_bool; // 0x747 Push
	if(var_35_bool == 0) goto Label_1873; // 0x748 JumpB
	var_36_float = 0; var_37_object = Obj(); // 0x749 PushV
	var_37_object = var_15_object; // 0x74a Mov
	func_1180(var_37_object); // 0x74b Call
	var_44_float = 160000.0; // 0x74d PushF
	var_45_bool = var_36_float <= var_44_float; // 0x74e LE
	if(var_45_bool == 0) goto Label_1873; // 0x74f JumpB
	var_34_bool = 0; // 0x750 MovB
	
Label_1873:
	if(var_34_bool == 0) goto Label_1879; // 0x751 JumpB
	var_46_float = -0.2; // 0x752 PushF
	ReportReputationChange(var_15_object, var_16_object, var_46_float); // 0x753 Func
	var_14_bool = 1; // 0x755 MovB
	return 4; // 0x756 Return
	
Label_1879:
	var_14_bool = 0; // 0x757 MovB
	return 4; // 0x758 Return
}


func_1200(var_18_bool, var_19_object, var_20_string, var_21_float, var_22_float, var_23_float)
{
	var_24_float = 0; var_25_float = 0; // 0x4b0 PushV
	var_26_bool = 0; var_27_object = Obj(); var_28_string = ""; // 0x4b1 PushV
	var_27_object = var_19_object; // 0x4b2 Mov
	var_28_string = var_20_string; // 0x4b3 Mov
	func_1188(var_26_bool, var_27_object, var_28_string); // 0x4b4 Call
	var_35_bool = var_26_bool == 0; // 0x4b6 Not
	if(var_35_bool == 0) goto Label_1210; // 0x4b7 JumpB
	var_18_bool = 0; // 0x4b8 MovB
	return 2; // 0x4b9 Return
	
Label_1210:
	GetProperty(var_20_string, var_25_float); // 0x4ba ObjFunc
	var_36_float = 0; var_37_float = 0; var_38_float = 0; var_39_float = 0; // 0x4bc PushV
	var_37_float = var_25_float + var_21_float; // 0x4bd Add2
	var_38_float = var_22_float; // 0x4be Mov
	var_39_float = var_23_float; // 0x4bf Mov
	func_1440(var_36_float, var_37_float, var_38_float, var_39_float); // 0x4c0 Call
	SetProperty(var_20_string, var_36_float); // 0x4c2 ObjFunc
	var_18_bool = 1; // 0x4c4 MovB
	return 2; // 0x4c5 Return
}


func_1457(var_52_int)
{
	var_53_float = 0; var_54_float = 0; // 0x5b1 PushV
	GetGameTime(var_54_float); // 0x5b2 Func
	var_55_int = 1; // 0x5b4 PushI
	var_56_int = 0; // 0x5b5 PushV
	var_57_int = 24; // 0x5b6 PushI
	var_56_int = var_54_float / var_54_float; // 0x5b7 Div2
	var_52_int = var_55_int + var_56_int; // 0x5b8 Add2
	return 2; // 0x5b9 Return
}


func_1466(var_49_int, var_50_int)
{
	var_60_int = 0; var_61_int = 0; var_62_int = 0; var_63_bool = 0; var_64_int = 0; var_65_int = 0; var_66_int = 0; var_67_bool = 0; // 0x5ba PushV
	var_68_bool = var_49_int > var_50_int; // 0x5bb GT
	if(var_68_bool == 0) goto Label_1473; // 0x5bc JumpB
	var_69_string = "GenerateMoney: iMin > iMax"; // 0x5bd PushS
	Trace(var_69_string); // 0x5be Func
	return 8; // 0x5c0 Return
	
Label_1473:
	var_64_int = 0; // 0x5c1 MovI
	var_70_bool = var_49_int != var_50_int; // 0x5c2 Neq
	if(var_70_bool == 0) goto Label_1480; // 0x5c3 JumpB
	var_71_int = var_50_int - var_49_int; // 0x5c4 Sub
	irand(var_65_int, var_71_int); // 0x5c5 Func
	goto Label_1484; // 0x5c7 Jump
	
Label_1484:
	var_64_int = var_64_int + var_49_int; // 0x5cc Add2
	var_72_int = 0; // 0x5cd PushI
	var_73_bool = var_64_int == var_72_int; // 0x5ce Eq
	if(var_73_bool == 0) goto Label_1489; // 0x5cf JumpB
	return 8; // 0x5d0 Return
	
Label_1489:
	var_74_string = "Money"; // 0x5d1 PushS
	GetInvItemByName(var_66_int, var_74_string); // 0x5d2 Func
	var_75_int = 0; // 0x5d4 PushI
	AddItem(var_67_bool, var_66_int, var_75_int, var_64_int); // 0x5d5 Func
	return 8; // 0x5d7 Return
	
Label_1480:
	var_76_int = 0; // 0x5c8 PushI
	var_77_bool = var_49_int == var_76_int; // 0x5c9 Eq
	if(var_77_bool == 0) goto Label_1484; // 0x5ca JumpB
	return 8; // 0x5cb Return
}


func_187()
{
	return 0; // 0xbb Return
}


func_962(var_0_object, var_220_bool)
{
	var_221_bool = 0; var_222_bool = 0; // 0x3c2 PushV
	var_223_string = "IsAttacking"; // 0x3c3 PushS
	var_224_int = 1; // 0x3c4 PushI
	var_225_bool = IsFuncExist(var_0_object, var_223_string, var_224_int); // 0x3c5 FuncExist
	if(var_225_bool == 0) goto Label_971; // 0x3c6 JumpB
	IsAttacking(var_222_bool); // 0x3c7 TObjFunc
	var_220_bool = var_222_bool; // 0x3c9 Mov
	return 2; // 0x3ca Return
	
Label_971:
	var_220_bool = 0; // 0x3cb MovB
	return 2; // 0x3cc Return
}


func_69(var_77_bool, var_78_int)
{
	SetSeeThreshold(var_78_int); // 0x45 Func
	SetSeeFOV(var_77_bool); // 0x47 Func
	func_156(var_78_int); // 0x4a Call
	return 0; // 0x4c Return
}


func_326()
{
	StopGroup0(); // 0x146 Func
	Stop(); // 0x148 Func
	return 0; // 0x14a Return
}


func_1222(var_314_float, var_315_object, var_316_float, var_317_int)
{
	var_321_int = 0; var_322_string = ""; var_323_int = 0; var_324_float = 0; var_325_float = 0; var_326_float = 0; var_327_int = 0; var_328_string = ""; var_329_int = 0; var_330_float = 0; var_331_float = 0; var_332_float = 0; // 0x4c6 PushV
	var_333_bool = 0; var_334_object = Obj(); var_335_string = ""; // 0x4c7 PushV
	var_334_object = var_315_object; // 0x4c8 Mov
	var_335_string = "health"; // 0x4c9 MovS
	func_1188(var_333_bool, var_334_object, var_335_string); // 0x4ca Call
	var_336_bool = var_333_bool == 0; // 0x4cc Not
	if(var_336_bool == 0) goto Label_1232; // 0x4cd JumpB
	var_314_float = 0.0; // 0x4ce MovF
	return 12; // 0x4cf Return
	
Label_1232:
	var_337_bool = 0; var_338_object = Obj(); var_339_string = ""; // 0x4d0 PushV
	var_338_object = var_315_object; // 0x4d1 Mov
	var_339_string = "armor"; // 0x4d2 MovS
	func_1188(var_337_bool, var_338_object, var_339_string); // 0x4d3 Call
	var_340_bool = var_337_bool == 0; // 0x4d5 Not
	if(var_340_bool == 0) goto Label_1241; // 0x4d6 JumpB
	var_327_int = 0; // 0x4d7 MovI
	goto Label_1244; // 0x4d8 Jump
	
Label_1244:
	var_341_string = "armor_"; // 0x4dc PushS
	var_342_string = ""; var_343_int = 0; // 0x4dd PushV
	var_343_int = var_317_int; // 0x4de Mov
	func_1172(var_342_string, var_343_int); // 0x4df Call
	var_328_string = var_341_string + var_342_string; // 0x4e1 Add2
	var_346_bool = 0; var_347_object = Obj(); var_348_string = ""; // 0x4e2 PushV
	var_347_object = var_315_object; // 0x4e3 Mov
	var_348_string = var_328_string; // 0x4e4 Mov
	func_1188(var_346_bool, var_347_object, var_348_string); // 0x4e5 Call
	var_349_bool = var_346_bool == 0; // 0x4e7 Not
	if(var_349_bool == 0) goto Label_1259; // 0x4e8 JumpB
	var_329_int = 0; // 0x4e9 MovI
	goto Label_1261; // 0x4ea Jump
	
Label_1261:
	var_350_float = 0; var_351_float = 0; var_352_float = 0; // 0x4ed PushV
	var_353_int = var_327_int + var_329_int; // 0x4ee Add
	var_354_float = 100.0; // 0x4ef PushF
	var_351_float = var_353_int / var_353_int; // 0x4f0 Div2
	var_352_float = 1; // 0x4f1 MovI
	func_1433(var_350_float, var_351_float, var_352_float); // 0x4f2 Call
	var_330_float = var_350_float; // 0x4f3 Mov
	var_356_string = "health"; // 0x4f5 PushS
	GetProperty(var_356_string, var_331_float); // 0x4f6 ObjFunc
	var_357_int = 1; // 0x4f8 PushI
	var_358_int = var_357_int - var_330_float; // 0x4f9 Sub
	var_332_float = var_316_float * var_358_int; // 0x4fa Mult2
	var_359_string = "health"; // 0x4fb PushS
	var_360_float = 0; var_361_float = 0; var_362_float = 0; var_363_float = 0; // 0x4fc PushV
	var_361_float = var_331_float - var_332_float; // 0x4fd Sub2
	var_362_float = 0; // 0x4fe MovI
	var_363_float = 1; // 0x4ff MovI
	func_1440(var_360_float, var_361_float, var_362_float, var_363_float); // 0x500 Call
	SetProperty(var_359_string, var_360_float); // 0x502 ObjFunc
	var_314_float = var_332_float; // 0x504 Mov
	return 12; // 0x505 Return
	
Label_1259:
	GetProperty(var_328_string, var_329_int); // 0x4eb ObjFunc
	
Label_1241:
	var_366_string = "armor"; // 0x4d9 PushS
	GetProperty(var_366_string, var_327_int); // 0x4da ObjFunc
}


func_1351(var_16_object, var_17_int)
{
	var_19_object = Obj(); var_20_object = Obj(); var_21_cvector = CVector(0,0,0); var_22_float = 0; var_23_int = 0; var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_string = ""; var_29_object = Obj(); var_30_object = Obj(); var_31_cvector = CVector(0,0,0); var_32_float = 0; var_33_int = 0; var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_string = ""; // 0x547 PushV
	var_39_bool = 0; // 0x548 PushV
	var_39_bool = 0; // 0x549 MovB
	var_40_int = 4; // 0x54a PushI
	var_41_bool = var_17_int != var_40_int; // 0x54b Neq
	if(var_41_bool == 0) goto Label_1361; // 0x54c JumpB
	var_42_int = 5; // 0x54d PushI
	var_43_bool = var_17_int != var_42_int; // 0x54e Neq
	if(var_43_bool == 0) goto Label_1361; // 0x54f JumpB
	var_39_bool = 1; // 0x550 MovB
	
Label_1361:
	if(var_39_bool == 0) goto Label_1380; // 0x551 JumpB
	GetScene(var_29_object); // 0x552 Func
	GetPosition(var_31_cvector); // 0x554 Func
	GetEyesHeight(var_32_float); // 0x556 Func
	var_44_float = GetByIndex(var_31_cvector, 1); // 0x558 PushE
	var_45_int = 2; // 0x559 PushI
	var_46_float = var_32_float / var_45_int; // 0x55a Div
	var_44_float = var_44_float + var_46_float; // 0x55b Add2
	SetByIndex(var_31_cvector, 1) = var_44_float; // 0x55c PopE
	var_47_string = "scripted"; // 0x55d PushS
	var_48_cvector = CVector(0.0, 0.0, 1.0); // 0x55e PushVec
	var_49_string = "blood.xml"; // 0x55f PushS
	AddActorByType(var_30_object, var_47_string, var_29_object, var_31_cvector, var_48_cvector, var_49_string); // 0x560 Func
	var_30_object = 0; // 0x562 SetNull
	var_29_object = 0; // 0x563 SetNull
	
Label_1380:
	var_50_bool = var_16_object == 0; // 0x564 NullEq
	if(var_50_bool == 0) goto Label_1383; // 0x565 JumpB
	return 20; // 0x566 Return
	
Label_1383:
	GetSecondaryAnimationType(var_33_int); // 0x567 Func
	var_51_int = 0; // 0x569 PushI
	var_52_bool = var_33_int < var_51_int; // 0x56a LT
	if(var_52_bool == 0) goto Label_1389; // 0x56b JumpB
	return 20; // 0x56c Return
	
Label_1389:
	GetPosition(var_34_cvector); // 0x56d ObjFunc
	GetPosition(var_35_cvector); // 0x56f Func
	GetDirection(var_36_cvector); // 0x571 Func
	var_37_cvector = var_35_cvector - var_34_cvector; // 0x573 Sub2
	var_53_float = GetByIndex(var_37_cvector, 0); // 0x574 PushE
	var_54_float = GetByIndex(var_36_cvector, 0); // 0x575 PushE
	var_55_float = var_53_float * var_54_float; // 0x576 Mult
	var_56_float = GetByIndex(var_37_cvector, 2); // 0x577 PushE
	var_57_float = GetByIndex(var_36_cvector, 2); // 0x578 PushE
	var_58_float = var_56_float * var_57_float; // 0x579 Mult
	var_59_int = var_55_float + var_58_float; // 0x57a Add
	var_60_int = 0; // 0x57b PushI
	var_61_bool = var_59_int >= var_60_int; // 0x57c GE
	if(var_61_bool == 0) goto Label_1408; // 0x57d JumpB
	var_38_string = "fhit"; // 0x57e MovS
	goto Label_1409; // 0x57f Jump
	
Label_1409:
	var_62_string = "hit_react"; // 0x581 PushS
	var_63_string = "1"; // 0x582 PushS
	var_64_int = var_38_string + var_63_string; // 0x583 Add
	var_65_string = "2"; // 0x584 PushS
	var_66_int = var_38_string + var_65_string; // 0x585 Add
	var_67_int = -10; // 0x586 PushI
	FadeSecondaryAnimation(var_62_string, var_64_int, var_66_int, var_67_int); // 0x587 Func
	return 20; // 0x589 Return
	
Label_1408:
	var_38_string = "bhit"; // 0x580 MovS
}


func_1739(var_13_bool, var_14_object)
{
	var_15_bool = 0; var_16_bool = 0; // 0x6cb PushV
	IsPlayerActor(var_14_object, var_16_bool); // 0x6cc Func
	var_17_bool = var_16_bool == 0; // 0x6ce Not
	if(var_17_bool == 0) goto Label_1746; // 0x6cf JumpB
	var_13_bool = 0; // 0x6d0 MovB
	return 2; // 0x6d1 Return
	
Label_1746:
	var_18_bool = 0; var_19_object = Obj(); // 0x6d2 PushV
	var_19_object = var_14_object; // 0x6d3 Mov
	func_1708(var_18_bool, var_19_object); // 0x6d4 Call
	var_13_bool = var_18_bool; // 0x6d5 Mov
	return 2; // 0x6d7 Return
}


func_973(var_2_float, var_4_cvector)
{
	var_282_float = 0; var_283_int = 0; var_284_float = 0; var_285_int = 0; // 0x3cd PushV
	var_286_bool = var_2_float == 0; // 0x3ce Not
	if(var_286_bool == 0) goto Label_977; // 0x3cf JumpB
	return 4; // 0x3d0 Return
	
Label_977:
	var_287_cvector = var_4_cvector; // 0x3d1 PushT
	if(var_287_cvector == 0) goto Label_985; // 0x3d2 JumpB
	var_288_int = -1; // 0x3d3 PushI
	var_4_cvector = var_4_cvector + var_288_int; // 0x3d4 Add2
	var_289_int = 0; // 0x3d5 PushI
	var_290_bool = var_4_cvector > var_289_int; // 0x3d6 GT
	if(var_290_bool == 0) goto Label_985; // 0x3d7 JumpB
	return 4; // 0x3d8 Return
	
Label_985:
	rand(var_284_float); // 0x3d9 Func
	var_291_float = 0; // 0x3db PushV
	func_1011(var_291_float); // 0x3dc Call
	var_292_bool = var_284_float < var_291_float; // 0x3de LT
	if(var_292_bool == 0) goto Label_1004; // 0x3df JumpB
	irand(var_285_int, var_284_float); // 0x3e0 Func
	var_293_int = 1; // 0x3e2 PushI
	var_285_int = var_285_int + var_293_int; // 0x3e3 Add2
	var_294_string = "attack"; // 0x3e4 PushS
	var_295_int = var_294_string + var_285_int; // 0x3e5 Add
	Speak(var_295_int); // 0x3e6 Func
	var_296_int = 0; // 0x3e8 PushV
	func_1009(var_296_int); // 0x3e9 Call
	var_4_cvector = var_296_int; // 0x3ea TMov
	
Label_1004:
	return 4; // 0x3ec Return
}


func_846(var_386_bool, var_387_float)
{
	var_388_float = 0; var_389_bool = 0; var_390_float = 0; var_391_bool = 0; // 0x34e PushV
	rand(var_390_float); // 0x34f Func
	var_392_bool = var_390_float < var_387_float; // 0x351 LT
	if(var_392_bool == 0) goto Label_866; // 0x352 JumpB
	
Label_851:
	IsAnimationPlaying(var_391_bool); // 0x353 Func
	var_393_bool = var_391_bool == 0; // 0x355 Not
	if(var_393_bool == 0) goto Label_856; // 0x356 JumpB
	goto Label_865; // 0x357 Jump
	
Label_865:
	goto Label_868; // 0x361 Jump
	
Label_868:
	var_386_bool = 0; // 0x364 MovB
	return 4; // 0x365 Return
	
Label_856:
	var_394_bool = 0; // 0x358 PushV
	func_910(var_391_bool, var_394_bool); // 0x359 Call
	if(var_394_bool == 0) goto Label_862; // 0x35b JumpB
	var_386_bool = 1; // 0x35c MovB
	return 4; // 0x35d Return
	
Label_862:
	sync(); // 0x35e Func
	goto Label_851; // 0x360 Jump
	
Label_866:
	WaitForAnimEnd(); // 0x362 Func
}


func_468(var_0_object)
{
	var_0_object = 1; // 0x1d4 TMovB
	var_13_int = 0; // 0x1d5 PushI
	KillTimer(var_13_int); // 0x1d6 Func
	Stop(); // 0x1d8 Func
	return 0; // 0x1da Return
}


func_86(var_2_float, var_85_bool)
{
	var_86_bool = 0; var_87_bool = 0; // 0x56 PushV
	var_88_float = 1.8; // 0x57 PushF
	var_89_float = var_2_float * var_88_float; // 0x58 Mult
	SetSeeFOV(var_89_float); // 0x59 Func
	var_90_string = "all"; // 0x5b PushS
	var_91_string = "hunt"; // 0x5c PushS
	PlayAnimation(var_90_string, var_91_string); // 0x5d Func
	WaitForAnimEnd(var_87_bool); // 0x5f Func
	SetSeeFOV(var_86_bool); // 0x61 Func
	var_85_bool = !var_87_bool; // 0x63 Not2
	return 2; // 0x64 Return
}


func_727(var_0_object, var_300_float, var_301_int)
{
	var_302_object = Obj(); var_303_float = 0; var_304_float = 0; var_305_object = Obj(); var_306_float = 0; var_307_float = 0; // 0x2d7 PushV
	var_308_float = 0.9; // 0x2d8 PushF
	var_309_float = var_300_float * var_308_float; // 0x2d9 Mult
	GetVictim(var_309_float, var_305_object); // 0x2da Func
	ReportAttack(var_0_object); // 0x2dc Func
	var_310_bool = var_305_object == var_0_object; // 0x2de Eq
	if(var_310_bool == 0) goto Label_764; // 0x2df JumpB
	var_311_float = 0; var_312_object = Obj(); var_313_int = 0; // 0x2e0 PushV
	var_312_object = var_305_object; // 0x2e1 Mov
	var_313_int = var_301_int; // 0x2e2 Mov
	func_503(var_313_int); // 0x2e3 Call
	var_306_float = var_311_float; // 0x2e4 Mov
	var_314_float = 0; var_315_object = Obj(); var_316_float = 0; var_317_int = 0; // 0x2e6 PushV
	var_315_object = var_305_object; // 0x2e7 Mov
	var_316_float = var_306_float; // 0x2e8 Mov
	var_318_int = 0; var_319_object = Obj(); var_320_int = 0; // 0x2e9 PushV
	var_319_object = var_305_object; // 0x2ea Mov
	var_320_int = var_301_int; // 0x2eb Mov
	func_506(var_320_int); // 0x2ec Call
	var_317_int = var_318_int; // 0x2ed Mov
	func_1222(var_314_float, var_315_object, var_316_float, var_317_int); // 0x2ef Call
	var_307_float = var_314_float; // 0x2f0 Mov
	var_367_int = 0; // 0x2f2 PushV
	func_1005(var_367_int); // 0x2f3 Call
	ReportHit(var_0_object, var_367_int, var_307_float, var_306_float); // 0x2f5 Func
	var_368_object = Obj(); var_369_float = 0; // 0x2f7 PushV
	var_368_object = var_305_object; // 0x2f8 Mov
	var_369_float = var_307_float; // 0x2f9 Mov
	func_1007(); // 0x2fa Call
	
Label_764:
	return 6; // 0x2fc Return
}


func_1752(var_67_object)
{
	var_68_object = Obj(); // 0x6d9 PushV
	var_68_object = var_67_object; // 0x6da Mov
	TaskCall(0); // 0x6db TaskCall
	func_0(var_70_float, var_71_float, var_68_object); // 0x6dc Call
	TaskReturn(); // 0x6dd TaskReturn
	return 0; // 0x6df Return
}


func_344(var_0_object, var_1_float, var_144_bool, var_145_object, var_146_float, var_147_float, var_148_bool, var_149_bool)
{
	var_152_bool = 0; var_153_bool = 0; var_154_object = Obj(); var_155_cvector = CVector(0,0,0); var_156_cvector = CVector(0,0,0); var_157_cvector = CVector(0,0,0); var_158_float = 0; var_159_object = Obj(); var_160_bool = 0; var_161_bool = 0; var_162_object = Obj(); var_163_cvector = CVector(0,0,0); var_164_cvector = CVector(0,0,0); var_165_cvector = CVector(0,0,0); var_166_float = 0; var_167_object = Obj(); // 0x158 PushV
	var_0_object = 0; // 0x159 TMovB
	var_1_float = var_145_object; // 0x15a TMov
	var_161_bool = var_149_bool; // 0x15b Mov
	
Label_348:
	var_168_bool = 0; var_169_object = Obj(); // 0x15c PushV
	var_169_object = var_145_object; // 0x15d Mov
	func_484(var_168_bool, var_169_object); // 0x15e Call
	var_172_bool = var_168_bool == 0; // 0x160 Not
	if(var_172_bool == 0) goto Label_356; // 0x161 JumpB
	var_144_bool = 0; // 0x162 MovB
	return 16; // 0x163 Return
	
Label_356:
	GetPosition(var_163_cvector); // 0x164 ObjFunc
	GetPosition(var_164_cvector); // 0x166 Func
	var_165_cvector = var_163_cvector - var_164_cvector; // 0x168 Sub2
	var_166_float = var_165_cvector | var_165_cvector; // 0x169 Or2
	var_173_bool = 0; // 0x16a PushV
	var_173_bool = 0; // 0x16b MovB
	var_174_int = 0; // 0x16c PushI
	var_175_bool = var_147_float > var_174_int; // 0x16d GT
	if(var_175_bool == 0) goto Label_371; // 0x16e JumpB
	var_176_float = var_147_float * var_147_float; // 0x16f Mult
	var_177_bool = var_166_float > var_176_float; // 0x170 GT
	if(var_177_bool == 0) goto Label_371; // 0x171 JumpB
	var_173_bool = 1; // 0x172 MovB
	
Label_371:
	if(var_173_bool == 0) goto Label_376; // 0x173 JumpB
	Stop(); // 0x174 Func
	var_144_bool = 0; // 0x176 MovB
	return 16; // 0x177 Return
	
Label_376:
	var_178_float = var_146_float * var_146_float; // 0x178 Mult
	var_179_bool = var_166_float > var_178_float; // 0x179 GT
	if(var_179_bool == 0) goto Label_438; // 0x17a JumpB
	GetPFPosition(var_163_cvector); // 0x17b ObjFunc
	FindPathTo(var_167_object, var_163_cvector); // 0x17d Func
	var_180_bool = var_167_object != 0; // 0x17f NullNeq
	if(var_180_bool == 0) goto Label_387; // 0x180 JumpB
	var_162_object = var_167_object; // 0x181 Mov
	var_167_object = 0; // 0x182 SetNull
	
Label_387:
	var_181_bool = var_162_object != 0; // 0x183 NullNeq
	if(var_181_bool == 0) goto Label_420; // 0x184 JumpB
	var_182_bool = var_161_bool; // 0x185 Push
	if(var_182_bool == 0) goto Label_397; // 0x186 JumpB
	var_161_bool = 0; // 0x187 MovB
	RotatePath(var_162_object, var_160_bool); // 0x188 Func
	var_183_bool = var_160_bool == 0; // 0x18a Not
	if(var_183_bool == 0) goto Label_397; // 0x18b JumpB
	goto Label_444; // 0x18c Jump
	
Label_444:
	var_144_bool = !var_0_object; // 0x1bc Not2
	return 16; // 0x1bd Return
	
Label_397:
	var_184_int = 0; // 0x18d PushI
	var_185_float = 0.3; // 0x18e PushF
	SetTimer(var_184_int, var_185_float); // 0x18f Func
	var_186_string = ""; // 0x191 PushV
	func_491(var_186_string); // 0x192 Call
	var_187_string = ""; // 0x194 PushV
	func_493(var_187_string); // 0x195 Call
	FollowPath(var_162_object, var_148_bool, var_160_bool, var_186_string, var_187_string); // 0x197 Func
	var_188_bool = var_160_bool == 0; // 0x199 Not
	if(var_188_bool == 0) goto Label_418; // 0x19a JumpB
	var_189_object = var_0_object; // 0x19b PushT
	if(var_189_object == 0) goto Label_416; // 0x19c JumpB
	var_162_object = 0; // 0x19d SetNull
	goto Label_444; // 0x19e Jump
	
Label_416:
	goto Label_443; // 0x1a0 Jump
	
Label_443:
	goto Label_348; // 0x1bb Jump
	
Label_418:
	var_162_object = 0; // 0x1a2 SetNull
	goto Label_436; // 0x1a3 Jump
	
Label_436:
	var_167_object = 0; // 0x1b4 SetNull
	goto Label_442; // 0x1b5 Jump
	
Label_442:
	var_162_object = 0; // 0x1ba SetNull
	
Label_420:
	var_190_int = 0; // 0x1a4 PushI
	KillTimer(var_190_int); // 0x1a5 Func
	var_191_float = 0.5; // 0x1a7 PushF
	Sleep(var_191_float, var_160_bool); // 0x1a8 Func
	var_192_bool = var_160_bool == 0; // 0x1aa Not
	if(var_192_bool == 0) goto Label_432; // 0x1ab JumpB
	var_193_object = var_0_object; // 0x1ac PushT
	if(var_193_object == 0) goto Label_432; // 0x1ad JumpB
	var_162_object = 0; // 0x1ae SetNull
	goto Label_444; // 0x1af Jump
	
Label_432:
	var_194_int = 0; // 0x1b0 PushI
	var_195_float = 0.3; // 0x1b1 PushF
	SetTimer(var_194_int, var_195_float); // 0x1b2 Func
	
Label_438:
	var_196_int = 0; // 0x1b6 PushI
	KillTimer(var_196_int); // 0x1b7 Func
	goto Label_444; // 0x1b9 Jump
}


func_1496()
{
	var_42_int = 0; var_43_bool = 0; var_44_int = 0; var_45_int = 0; var_46_bool = 0; var_47_int = 0; // 0x5d8 PushV
	var_48_int = 0; // 0x5d9 PushI
	ClearSubContainer(var_48_int); // 0x5da Func
	var_49_int = 0; var_50_int = 0; // 0x5dc PushV
	var_49_int = 0; // 0x5dd MovI
	var_51_int = 100; // 0x5de PushI
	var_52_int = 0; // 0x5df PushV
	func_1457(var_52_int); // 0x5e0 Call
	var_58_int = 100; // 0x5e2 PushI
	var_59_float = var_52_int * var_58_int; // 0x5e3 Mult
	var_50_int = var_51_int + var_59_float; // 0x5e4 Add2
	func_1466(var_49_int, var_50_int); // 0x5e5 Call
	var_78_int = 0; // 0x5e7 PushV
	func_1457(var_78_int); // 0x5e8 Call
	var_47_int = var_78_int; // 0x5e9 Mov
	var_79_int = 3; // 0x5eb PushI
	irand(var_45_int, var_79_int); // 0x5ec Func
	var_80_int = 0; // 0x5ee PushI
	var_81_bool = var_45_int == var_80_int; // 0x5ef Eq
	if(var_81_bool == 0) goto Label_1529; // 0x5f0 JumpB
	var_82_int = 0; var_83_string = ""; // 0x5f1 PushV
	var_83_string = "bottle_water"; // 0x5f2 MovS
	func_1696(var_82_int, var_83_string); // 0x5f3 Call
	var_86_int = 0; // 0x5f5 PushI
	var_87_int = 1; // 0x5f6 PushI
	AddItem(var_46_bool, var_82_int, var_86_int, var_87_int); // 0x5f7 Func
	
Label_1529:
	var_88_int = 3; // 0x5f9 PushI
	irand(var_45_int, var_88_int); // 0x5fa Func
	var_89_int = 0; // 0x5fc PushI
	var_90_bool = var_45_int == var_89_int; // 0x5fd Eq
	if(var_90_bool == 0) goto Label_1543; // 0x5fe JumpB
	var_91_int = 0; var_92_string = ""; // 0x5ff PushV
	var_92_string = "rusk"; // 0x600 MovS
	func_1696(var_91_int, var_92_string); // 0x601 Call
	var_93_int = 0; // 0x603 PushI
	var_94_int = 1; // 0x604 PushI
	AddItem(var_46_bool, var_91_int, var_93_int, var_94_int); // 0x605 Func
	
Label_1543:
	var_95_int = 7; // 0x607 PushI
	irand(var_45_int, var_95_int); // 0x608 Func
	var_96_int = 0; // 0x60a PushI
	var_97_bool = var_45_int == var_96_int; // 0x60b Eq
	if(var_97_bool == 0) goto Label_1557; // 0x60c JumpB
	var_98_int = 0; var_99_string = ""; // 0x60d PushV
	var_99_string = "bandage"; // 0x60e MovS
	func_1696(var_98_int, var_99_string); // 0x60f Call
	var_100_int = 0; // 0x611 PushI
	var_101_int = 1; // 0x612 PushI
	AddItem(var_46_bool, var_98_int, var_100_int, var_101_int); // 0x613 Func
	
Label_1557:
	var_102_int = 7; // 0x615 PushI
	irand(var_45_int, var_102_int); // 0x616 Func
	var_103_int = 0; // 0x618 PushI
	var_104_bool = var_45_int == var_103_int; // 0x619 Eq
	if(var_104_bool == 0) goto Label_1571; // 0x61a JumpB
	var_105_int = 0; var_106_string = ""; // 0x61b PushV
	var_106_string = "tourniquet"; // 0x61c MovS
	func_1696(var_105_int, var_106_string); // 0x61d Call
	var_107_int = 0; // 0x61f PushI
	var_108_int = 1; // 0x620 PushI
	AddItem(var_46_bool, var_105_int, var_107_int, var_108_int); // 0x621 Func
	
Label_1571:
	var_109_int = 20; // 0x623 PushI
	irand(var_45_int, var_109_int); // 0x624 Func
	var_110_int = 0; // 0x626 PushI
	var_111_bool = var_45_int == var_110_int; // 0x627 Eq
	if(var_111_bool == 0) goto Label_1585; // 0x628 JumpB
	var_112_int = 0; var_113_string = ""; // 0x629 PushV
	var_113_string = "packet"; // 0x62a MovS
	func_1696(var_112_int, var_113_string); // 0x62b Call
	var_114_int = 0; // 0x62d PushI
	var_115_int = 1; // 0x62e PushI
	AddItem(var_46_bool, var_112_int, var_114_int, var_115_int); // 0x62f Func
	
Label_1585:
	var_116_int = 20; // 0x631 PushI
	irand(var_45_int, var_116_int); // 0x632 Func
	var_117_int = 0; // 0x634 PushI
	var_118_bool = var_45_int == var_117_int; // 0x635 Eq
	if(var_118_bool == 0) goto Label_1599; // 0x636 JumpB
	var_119_int = 0; var_120_string = ""; // 0x637 PushV
	var_120_string = "hook"; // 0x638 MovS
	func_1696(var_119_int, var_120_string); // 0x639 Call
	var_121_int = 0; // 0x63b PushI
	var_122_int = 1; // 0x63c PushI
	AddItem(var_46_bool, var_119_int, var_121_int, var_122_int); // 0x63d Func
	
Label_1599:
	var_123_int = 30; // 0x63f PushI
	irand(var_45_int, var_123_int); // 0x640 Func
	var_124_int = 0; // 0x642 PushI
	var_125_bool = var_45_int == var_124_int; // 0x643 Eq
	if(var_125_bool == 0) goto Label_1613; // 0x644 JumpB
	var_126_int = 0; var_127_string = ""; // 0x645 PushV
	var_127_string = "watch"; // 0x646 MovS
	func_1696(var_126_int, var_127_string); // 0x647 Call
	var_128_int = 0; // 0x649 PushI
	var_129_int = 1; // 0x64a PushI
	AddItem(var_46_bool, var_126_int, var_128_int, var_129_int); // 0x64b Func
	
Label_1613:
	var_130_int = 3; // 0x64d PushI
	var_131_bool = var_47_int >= var_130_int; // 0x64e GE
	if(var_131_bool == 0) goto Label_1630; // 0x64f JumpB
	var_132_int = 2; // 0x650 PushI
	irand(var_45_int, var_132_int); // 0x651 Func
	var_133_int = 0; // 0x653 PushI
	var_134_bool = var_45_int == var_133_int; // 0x654 Eq
	if(var_134_bool == 0) goto Label_1630; // 0x655 JumpB
	var_135_int = 0; var_136_string = ""; // 0x656 PushV
	var_136_string = "alpha_pills"; // 0x657 MovS
	func_1696(var_135_int, var_136_string); // 0x658 Call
	var_137_int = 0; // 0x65a PushI
	var_138_int = 1; // 0x65b PushI
	AddItem(var_46_bool, var_135_int, var_137_int, var_138_int); // 0x65c Func
	
Label_1630:
	var_139_int = 4; // 0x65e PushI
	var_140_bool = var_47_int >= var_139_int; // 0x65f GE
	if(var_140_bool == 0) goto Label_1647; // 0x660 JumpB
	var_141_int = 5; // 0x661 PushI
	irand(var_45_int, var_141_int); // 0x662 Func
	var_142_int = 0; // 0x664 PushI
	var_143_bool = var_45_int == var_142_int; // 0x665 Eq
	if(var_143_bool == 0) goto Label_1647; // 0x666 JumpB
	var_144_int = 0; var_145_string = ""; // 0x667 PushV
	var_145_string = "beta_pills"; // 0x668 MovS
	func_1696(var_144_int, var_145_string); // 0x669 Call
	var_146_int = 0; // 0x66b PushI
	var_147_int = 1; // 0x66c PushI
	AddItem(var_46_bool, var_144_int, var_146_int, var_147_int); // 0x66d Func
	
Label_1647:
	var_148_int = 6; // 0x66f PushI
	var_149_bool = var_47_int >= var_148_int; // 0x670 GE
	if(var_149_bool == 0) goto Label_1664; // 0x671 JumpB
	var_150_int = 8; // 0x672 PushI
	irand(var_45_int, var_150_int); // 0x673 Func
	var_151_int = 0; // 0x675 PushI
	var_152_bool = var_45_int == var_151_int; // 0x676 Eq
	if(var_152_bool == 0) goto Label_1664; // 0x677 JumpB
	var_153_int = 0; var_154_string = ""; // 0x678 PushV
	var_154_string = "gamma_pills"; // 0x679 MovS
	func_1696(var_153_int, var_154_string); // 0x67a Call
	var_155_int = 0; // 0x67c PushI
	var_156_int = 1; // 0x67d PushI
	AddItem(var_46_bool, var_153_int, var_155_int, var_156_int); // 0x67e Func
	
Label_1664:
	var_157_int = 8; // 0x680 PushI
	var_158_bool = var_47_int >= var_157_int; // 0x681 GE
	if(var_158_bool == 0) goto Label_1695; // 0x682 JumpB
	var_159_int = 2; // 0x683 PushI
	irand(var_45_int, var_159_int); // 0x684 Func
	var_160_int = 0; // 0x686 PushI
	var_161_bool = var_45_int == var_160_int; // 0x687 Eq
	if(var_161_bool == 0) goto Label_1681; // 0x688 JumpB
	var_162_int = 0; var_163_string = ""; // 0x689 PushV
	var_163_string = "revolver_ammo"; // 0x68a MovS
	func_1696(var_162_int, var_163_string); // 0x68b Call
	var_164_int = 0; // 0x68d PushI
	var_165_int = 1; // 0x68e PushI
	AddItem(var_46_bool, var_162_int, var_164_int, var_165_int); // 0x68f Func
	
Label_1681:
	var_166_int = 2; // 0x691 PushI
	irand(var_45_int, var_166_int); // 0x692 Func
	var_167_int = 0; // 0x694 PushI
	var_168_bool = var_45_int == var_167_int; // 0x695 Eq
	if(var_168_bool == 0) goto Label_1695; // 0x696 JumpB
	var_169_int = 0; var_170_string = ""; // 0x697 PushV
	var_170_string = "rifle_ammo"; // 0x698 MovS
	func_1696(var_169_int, var_170_string); // 0x699 Call
	var_171_int = 0; // 0x69b PushI
	var_172_int = 1; // 0x69c PushI
	AddItem(var_46_bool, var_169_int, var_171_int, var_172_int); // 0x69d Func
	
Label_1695:
	return 6; // 0x69f Return
}


func_1760(var_13_bool, var_14_object)
{
	var_15_bool = 0; var_16_object = Obj(); // 0x6e1 PushV
	var_16_object = var_14_object; // 0x6e2 Mov
	func_1708(var_15_bool, var_16_object); // 0x6e3 Call
	var_13_bool = var_15_bool; // 0x6e4 Mov
	return 0; // 0x6e6 Return
}


func_484(var_15_bool, var_16_object)
{
	var_17_bool = 0; var_18_object = Obj(); // 0x1e5 PushV
	var_18_object = var_16_object; // 0x1e6 Mov
	func_1327(var_17_bool, var_18_object); // 0x1e7 Call
	var_15_bool = var_17_bool; // 0x1e8 Mov
	return 0; // 0x1ea Return
}


func_101(var_0_object, var_74_object)
{
	var_75_bool = 0; var_76_int = 0; var_77_bool = 0; var_78_int = 0; // 0x65 PushV
	var_0_object = var_74_object; // 0x66 TMov
	Face(var_0_object); // 0x67 Func
	var_79_int = 100; // 0x69 PushI
	var_80_int = 15; // 0x6a PushI
	SetTimer(var_79_int, var_80_int); // 0x6b Func
	
Label_109:
	var_81_bool = var_0_object != 0; // 0x6d NullNeq
	if(var_81_bool == 0) goto Label_124; // 0x6e JumpB
	var_82_int = 5; // 0x6f PushI
	irand(var_78_int, var_82_int); // 0x70 Func
	var_83_int = 5; // 0x72 PushI
	var_84_int = var_78_int + var_83_int; // 0x73 Add
	Sleep(var_84_int, var_77_bool); // 0x74 Func
	var_85_bool = 0; // 0x76 PushV
	func_86(var_78_int, var_85_bool); // 0x77 Call
	if(var_85_bool == 0) goto Label_123; // 0x79 JumpB
	goto Label_124; // 0x7a Jump
	
Label_124:
	func_69(var_77_bool, var_78_int); // 0x7d Call
	return 4; // 0x7f Return
	
Label_123:
	goto Label_109; // 0x7b Jump
}


func_870(var_0_object, var_228_bool, var_229_float)
{
	var_230_bool = 0; var_231_cvector = CVector(0,0,0); var_232_cvector = CVector(0,0,0); var_233_cvector = CVector(0,0,0); var_234_float = 0; var_235_bool = 0; var_236_cvector = CVector(0,0,0); var_237_cvector = CVector(0,0,0); var_238_cvector = CVector(0,0,0); var_239_float = 0; // 0x366 PushV
	
Label_871:
	IsAnimationPlaying(var_235_bool); // 0x367 Func
	var_240_bool = var_235_bool == 0; // 0x369 Not
	if(var_240_bool == 0) goto Label_876; // 0x36a JumpB
	goto Label_908; // 0x36b Jump
	
Label_908:
	var_228_bool = 0; // 0x38c MovB
	return 10; // 0x38d Return
	
Label_876:
	var_241_bool = 0; // 0x36c PushV
	func_910(var_239_float, var_241_bool); // 0x36d Call
	if(var_241_bool == 0) goto Label_882; // 0x36f JumpB
	var_228_bool = 1; // 0x370 MovB
	return 10; // 0x371 Return
	
Label_882:
	var_266_bool = 0; var_267_object = Obj(); // 0x372 PushV
	var_267_object = var_0_object; // 0x373 MovT
	func_1327(var_266_bool, var_267_object); // 0x374 Call
	var_268_bool = var_266_bool == 0; // 0x376 Not
	if(var_268_bool == 0) goto Label_890; // 0x377 JumpB
	var_228_bool = 0; // 0x378 MovB
	return 10; // 0x379 Return
	
Label_890:
	GetPFPosition(var_236_cvector); // 0x37a TObjFunc
	GetPFPosition(var_237_cvector); // 0x37c Func
	var_238_cvector = var_236_cvector - var_237_cvector; // 0x37e Sub2
	var_239_float = var_238_cvector | var_238_cvector; // 0x37f Or2
	var_269_float = var_229_float * var_229_float; // 0x380 Mult
	var_270_bool = var_239_float < var_269_float; // 0x381 LT
	if(var_270_bool == 0) goto Label_905; // 0x382 JumpB
	var_271_bool = 0; var_272_float = 0; // 0x383 PushV
	var_272_float = var_229_float; // 0x384 Mov
	func_766(var_239_float, var_271_bool, var_272_float); // 0x385 Call
	var_228_bool = 1; // 0x387 MovB
	return 10; // 0x388 Return
	
Label_905:
	sync(); // 0x389 Func
	goto Label_871; // 0x38b Jump
}


func_1767(var_64_object)
{
	var_65_object = Obj(); var_66_bool = 0; // 0x6e8 PushV
	var_65_object = var_64_object; // 0x6e9 Mov
	var_66_bool = 1; // 0x6ea MovB
	TaskCall(3); // 0x6eb TaskCall
	func_495(var_65_object, var_66_bool); // 0x6ec Call
	TaskReturn(); // 0x6ed TaskReturn
	ResetAAS(); // 0x6ef Func
	return 0; // 0x6f1 Return
}


func_491(var_186_string)
{
	var_186_string = "walk"; // 0x1eb MovS
	return 0; // 0x1ec Return
}


func_493(var_187_string)
{
	var_187_string = "run"; // 0x1ed MovS
	return 0; // 0x1ee Return
}


func_1005(var_367_int)
{
	var_367_int = 0; // 0x3ed MovI
	return 0; // 0x3ee Return
}


func_1007()
{
	return 0; // 0x3f0 Return
}


func_495(var_86_object, var_87_bool)
{
	var_93_object = Obj(); var_94_bool = 0; var_95_float = 0; // 0x1f0 PushV
	var_93_object = var_86_object; // 0x1f1 Mov
	var_94_bool = var_87_bool; // 0x1f2 Mov
	var_95_float = 180.0; // 0x1f3 MovF
	func_522(var_89_int, var_90_int, var_91_bool, var_92_int, var_86_object, var_87_bool, var_93_object, var_94_bool, var_95_float); // 0x1f4 Call
	return 0; // 0x1f6 Return
}


func_1009(var_296_int)
{
	var_296_int = 1; // 0x3f1 MovI
	return 0; // 0x3f2 Return
}


func_1778(var_13_object)
{
	var_14_bool = 0; var_15_bool = 0; // 0x6f2 PushV
	var_16_bool = var_13_object == 0; // 0x6f3 NullEq
	if(var_16_bool == 0) goto Label_1782; // 0x6f4 JumpB
	return 2; // 0x6f5 Return
	
Label_1782:
	var_17_object = GlobalVars[0]; // 0x6f6 PushGE
	in(var_15_bool, var_13_object); // 0x6f7 ObjFunc
	var_18_bool = var_15_bool == 0; // 0x6f9 Not
	if(var_18_bool == 0) goto Label_1790; // 0x6fa JumpB
	var_19_object = GlobalVars[0]; // 0x6fb PushGE
	add(var_13_object); // 0x6fc ObjFunc
	
Label_1790:
	return 2; // 0x6fe Return
}


func_1011(var_291_float)
{
	var_291_float = 0.5; // 0x3f3 MovF
	return 0; // 0x3f4 Return
}


func_1013(var_14_object)
{
	var_15_bool = 0; var_16_bool = 0; // 0x3f5 PushV
	IsPlayerActor(var_14_object, var_16_bool); // 0x3f6 Func
	var_17_bool = var_16_bool; // 0x3f8 Push
	if(var_17_bool == 0) goto Label_1026; // 0x3f9 JumpB
	var_18_bool = 0; var_19_object = Obj(); var_20_string = ""; var_21_float = 0; var_22_float = 0; var_23_float = 0; // 0x3fa PushV
	var_19_object = var_14_object; // 0x3fb Mov
	var_20_string = "reputation"; // 0x3fc MovS
	var_21_float = -0.3; // 0x3fd MovF
	var_22_float = 0; // 0x3fe MovI
	var_23_float = 1; // 0x3ff MovI
	func_1200(var_18_bool, var_19_object, var_20_string, var_21_float, var_22_float, var_23_float); // 0x400 Call
	
Label_1026:
	func_1496(); // 0x403 Call
	var_173_object = Obj(); // 0x405 PushV
	var_173_object = var_14_object; // 0x406 Mov
	func_1034(var_173_object); // 0x407 Call
	return 2; // 0x409 Return
}


func_503(var_311_float)
{
	var_311_float = 0.1; // 0x1f8 MovF
	return 0; // 0x1f9 Return
}


func_248(var_0_object, var_1_float)
{
	var_16_int = 0; var_17_bool = 0; var_18_cvector = CVector(0,0,0); var_19_object = Obj(); var_20_int = 0; var_21_bool = 0; var_22_cvector = CVector(0,0,0); var_23_object = Obj(); // 0xf8 PushV
	GetPFPosition(var_23_object); // 0xf9 Func
	GetDirection(var_0_object); // 0xfb Func
	
Label_253:
	var_24_int = 60; // 0xfd PushI
	irand(var_20_int, var_24_int); // 0xfe Func
	var_25_int = 30; // 0x100 PushI
	var_26_int = var_20_int + var_25_int; // 0x101 Add
	Sleep(var_26_int, var_21_bool); // 0x102 Func
	var_27_bool = var_21_bool; // 0x104 Push
	if(var_27_bool == 0) goto Label_266; // 0x105 JumpB
	func_187(); // 0x107 Call
	goto Label_324; // 0x109 Jump
	
Label_324:
	goto Label_253; // 0x144 Jump
	
Label_266:
	GetPFPosition(var_22_cvector); // 0x10a Func
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); // 0x10c PushV
	var_29_cvector = var_1_float; // 0x10d MovT
	var_30_cvector = var_22_cvector; // 0x10e Mov
	func_1429(var_28_float, var_29_cvector, var_30_cvector); // 0x10f Call
	var_33_int = 40000; // 0x111 PushI
	var_34_bool = var_28_float > var_33_int; // 0x112 GT
	if(var_34_bool == 0) goto Label_310; // 0x113 JumpB
	FindPathTo(var_23_object, var_23_object); // 0x114 Func
	var_35_bool = var_23_object != 0; // 0x116 NullNeq
	if(var_35_bool == 0) goto Label_305; // 0x117 JumpB
	RotatePath(var_23_object, var_21_bool); // 0x118 Func
	var_36_bool = var_21_bool == 0; // 0x11a Not
	if(var_36_bool == 0) goto Label_285; // 0x11b JumpB
	goto Label_323; // 0x11c Jump
	
Label_323:
	goto Label_266; // 0x143 Jump
	
Label_285:
	var_37_bool = 0; // 0x11d PushB
	FollowPath(var_23_object, var_37_bool, var_21_bool); // 0x11e Func
	var_38_bool = var_21_bool == 0; // 0x120 Not
	if(var_38_bool == 0) goto Label_291; // 0x121 JumpB
	goto Label_323; // 0x122 Jump
	
Label_291:
	var_39_float = GetByIndex(var_0_object, 0); // 0x123 PushE
	var_40_float = GetByIndex(var_0_object, 2); // 0x124 PushE
	Rotate(var_39_float, var_40_float, var_21_bool); // 0x125 Func
	var_41_bool = var_21_bool == 0; // 0x127 Not
	if(var_41_bool == 0) goto Label_298; // 0x128 JumpB
	goto Label_323; // 0x129 Jump
	
Label_298:
	WaitForAnimEnd(var_21_bool); // 0x12a Func
	var_42_bool = var_21_bool == 0; // 0x12c Not
	if(var_42_bool == 0) goto Label_303; // 0x12d JumpB
	goto Label_323; // 0x12e Jump
	
Label_303:
	goto Label_324; // 0x12f Jump
	
Label_305:
	var_43_int = 1; // 0x131 PushI
	Sleep(var_43_int); // 0x132 Func
	var_23_object = 0; // 0x134 SetNull
	goto Label_323; // 0x135 Jump
	
Label_310:
	var_44_float = GetByIndex(var_0_object, 0); // 0x136 PushE
	var_45_float = GetByIndex(var_0_object, 2); // 0x137 PushE
	Rotate(var_44_float, var_45_float, var_21_bool); // 0x138 Func
	var_46_bool = var_21_bool == 0; // 0x13a Not
	if(var_46_bool == 0) goto Label_317; // 0x13b JumpB
	goto Label_323; // 0x13c Jump
	
Label_317:
	WaitForAnimEnd(var_21_bool); // 0x13d Func
	var_47_bool = var_21_bool == 0; // 0x13f Not
	if(var_47_bool == 0) goto Label_322; // 0x140 JumpB
	goto Label_323; // 0x141 Jump
	
Label_322:
	goto Label_324; // 0x142 Jump
}


func_506(var_318_int)
{
	var_318_int = 0; // 0x1fb MovI
	return 0; // 0x1fc Return
}


func_1144(var_196_string)
{
	RemoveRTEnvelope(); // 0x479 Func
	SetDeathState(); // 0x47b Func
	Stop(); // 0x47d Func
	StopAsync(); // 0x47f Func
	StopSecondaryAnimation(); // 0x481 Func
	var_197_string = "all"; // 0x483 PushS
	PlayAnimation(var_197_string, var_196_string); // 0x484 Func
	WaitForAnimEnd(); // 0x486 Func
	var_198_string = "all"; // 0x488 PushS
	LockAnimationEnd(var_198_string, var_196_string); // 0x489 Func
	RemoveEnvelope(); // 0x48b Func
	return 0; // 0x48d Return
}


func_766(var_0_object, var_271_bool, var_272_float)
{
	var_273_int = 0; var_274_bool = 0; var_275_int = 0; var_276_bool = 0; // 0x2fe PushV
	irand(var_275_int, var_276_bool); // 0x2ff Func
	var_277_int = 1; // 0x301 PushI
	var_275_int = var_275_int + var_277_int; // 0x302 Add2
	Face(var_0_object); // 0x303 Func
	var_278_bool = 1; // 0x305 PushB
	SetAttackState(var_278_bool); // 0x306 Func
	var_279_string = "all"; // 0x308 PushS
	var_280_string = "attack_begin"; // 0x309 PushS
	var_281_int = var_280_string + var_275_int; // 0x30a Add
	PlayAnimation(var_279_string, var_281_int); // 0x30b Func
	WaitForAnimEnd(); // 0x30d Func
	func_973(var_275_int, var_276_bool); // 0x310 Call
	var_297_bool = 0; var_298_object = Obj(); // 0x312 PushV
	var_298_object = var_0_object; // 0x313 MovT
	func_1327(var_297_bool, var_298_object); // 0x314 Call
	var_299_bool = var_297_bool == 0; // 0x316 Not
	if(var_299_bool == 0) goto Label_796; // 0x317 JumpB
	StopAsync(); // 0x318 Func
	var_271_bool = 0; // 0x31a MovB
	return 4; // 0x31b Return
	
Label_796:
	var_300_float = 0; var_301_int = 0; // 0x31c PushV
	var_300_float = var_272_float; // 0x31d Mov
	var_301_int = var_275_int; // 0x31e Mov
	func_727(var_276_bool, var_300_float, var_301_int); // 0x31f Call
	var_370_string = "all"; // 0x321 PushS
	var_371_string = "attack_middle"; // 0x322 PushS
	var_372_int = var_371_string + var_275_int; // 0x323 Add
	HasAnimation(var_276_bool, var_370_string, var_372_int); // 0x324 Func
	var_373_bool = var_276_bool; // 0x326 Push
	if(var_373_bool == 0) goto Label_830; // 0x327 JumpB
	var_374_string = "all"; // 0x328 PushS
	var_375_string = "attack_middle"; // 0x329 PushS
	var_376_int = var_375_string + var_275_int; // 0x32a Add
	PlayAnimation(var_374_string, var_376_int); // 0x32b Func
	WaitForAnimEnd(); // 0x32d Func
	var_377_bool = 0; var_378_object = Obj(); // 0x32f PushV
	var_378_object = var_0_object; // 0x330 MovT
	func_1327(var_377_bool, var_378_object); // 0x331 Call
	var_379_bool = var_377_bool == 0; // 0x333 Not
	if(var_379_bool == 0) goto Label_825; // 0x334 JumpB
	StopAsync(); // 0x335 Func
	var_271_bool = 0; // 0x337 MovB
	return 4; // 0x338 Return
	
Label_825:
	var_380_float = 0; var_381_int = 0; // 0x339 PushV
	var_380_float = var_272_float; // 0x33a Mov
	var_381_int = var_275_int; // 0x33b Mov
	func_727(var_276_bool, var_380_float, var_381_int); // 0x33c Call
	
Label_830:
	var_382_bool = 0; // 0x33e PushB
	SetAttackState(var_382_bool); // 0x33f Func
	var_383_string = "all"; // 0x341 PushS
	var_384_string = "attack_end"; // 0x342 PushS
	var_385_int = var_384_string + var_275_int; // 0x343 Add
	PlayAnimation(var_383_string, var_385_int); // 0x344 Func
	var_386_bool = 0; var_387_float = 0; // 0x346 PushV
	var_387_float = 0.75; // 0x347 MovF
	func_846(var_386_bool, var_387_float); // 0x348 Call
	StopAsync(); // 0x34a Func
	var_271_bool = 1; // 0x34c MovB
	return 4; // 0x34d Return
}


func_1791(var_84_object)
{
	var_85_object = Obj(); // 0x700 PushV
	var_85_object = var_84_object; // 0x701 Mov
	func_1778(var_85_object); // 0x702 Call
	var_86_object = Obj(); var_87_bool = 0; // 0x704 PushV
	var_86_object = var_84_object; // 0x705 Mov
	var_87_bool = 1; // 0x706 MovB
	TaskCall(3); // 0x707 TaskCall
	func_495(var_86_object, var_87_bool); // 0x708 Call
	TaskReturn(); // 0x709 TaskReturn
	ResetAAS(); // 0x70b Func
	return 0; // 0x70d Return
}


