task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_bool)
{
	var_14_int = 1; // 0xa0 PushI
	if(var_14_int == 0) goto Label_368; // 0xa1 JumpB
	func_760(); // 0xa3 NEW_2
	var_16_int = 21373; // 0xa5 PushI
	var_17_bool = var_13_bool == var_16_int; // 0xa6 Eq
	if(var_17_bool == 0) goto Label_173; // 0xa7 JumpB
	var_18_object = Obj(); var_19_object = Obj(); // 0xa8 PushV
	var_18_object = var_1_object; // 0xa9 MovT
	var_19_object = var_0_object; // 0xaa MovT
	func_838(); // 0xab NEW_2
	
Label_173:
	var_22_int = 21383; // 0xad PushI
	var_23_bool = var_13_bool == var_22_int; // 0xae Eq
	if(var_23_bool == 0) goto Label_181; // 0xaf JumpB
	var_24_object = Obj(); var_25_object = Obj(); // 0xb0 PushV
	var_24_object = var_1_object; // 0xb1 MovT
	var_25_object = var_0_object; // 0xb2 MovT
	func_824(); // 0xb3 NEW_2
	
Label_181:
	var_57_int = 21386; // 0xb5 PushI
	var_58_bool = var_13_bool == var_57_int; // 0xb6 Eq
	if(var_58_bool == 0) goto Label_189; // 0xb7 JumpB
	var_59_object = Obj(); var_60_object = Obj(); // 0xb8 PushV
	var_59_object = var_1_object; // 0xb9 MovT
	var_60_object = var_0_object; // 0xba MovT
	func_824(); // 0xbb NEW_2
	
Label_189:
	var_61_int = 21372; // 0xbd PushI
	var_62_bool = var_12_bool == var_61_int; // 0xbe Eq
	if(var_62_bool == 0) goto Label_217; // 0xbf JumpB
	var_63_string = ""; // 0xc0 PushV
	var_63_string = "Neutral"; // 0xc1 MovS
	func_137(var_13_bool, var_63_string); // 0xc2 NEW_2
	var_80_int = 520182; // 0xc4 PushI
	SetMessage(var_80_int); // 0xc5 TObjFunc
	ClearReplies(); // 0xc7 TObjFunc
	var_81_bool = 0; var_82_object = Obj(); // 0xc9 PushV
	var_82_object = var_1_object; // 0xca MovT
	func_844(var_82_object); // 0xcb NEW_2
	if(var_81_bool == 0) goto Label_211; // 0xcd JumpB
	var_89_int = 520183; // 0xce PushI
	var_90_int = 21374; // 0xcf PushI
	var_91_int = 21373; // 0xd0 PushI
	AddReply(var_89_int, var_90_int, var_91_int); // 0xd1 TObjFunc
	
Label_211:
	var_92_int = 520201; // 0xd3 PushI
	var_93_int = -1; // 0xd4 PushI
	var_94_int = 21393; // 0xd5 PushI
	AddReply(var_92_int, var_93_int, var_94_int); // 0xd6 TObjFunc
	return 0; // 0xd8 Return
	
Label_217:
	var_95_int = 21374; // 0xd9 PushI
	var_96_bool = var_12_bool == var_95_int; // 0xda Eq
	if(var_96_bool == 0) goto Label_235; // 0xdb JumpB
	var_97_string = ""; // 0xdc PushV
	var_97_string = "Neutral"; // 0xdd MovS
	func_137(var_13_bool, var_97_string); // 0xde NEW_2
	var_98_int = 520184; // 0xe0 PushI
	SetMessage(var_98_int); // 0xe1 TObjFunc
	ClearReplies(); // 0xe3 TObjFunc
	var_99_int = 520185; // 0xe5 PushI
	var_100_int = 21376; // 0xe6 PushI
	var_101_int = 21375; // 0xe7 PushI
	AddReply(var_99_int, var_100_int, var_101_int); // 0xe8 TObjFunc
	return 0; // 0xea Return
	
Label_235:
	var_102_int = 21390; // 0xeb PushI
	var_103_bool = var_12_bool == var_102_int; // 0xec Eq
	if(var_103_bool == 0) goto Label_238; // 0xed JumpB
	
Label_238:
	var_104_int = 29678; // 0xee PushI
	var_105_bool = var_12_bool == var_104_int; // 0xef Eq
	if(var_105_bool == 0) goto Label_256; // 0xf0 JumpB
	var_106_string = ""; // 0xf1 PushV
	var_106_string = "Neutral"; // 0xf2 MovS
	func_137(var_13_bool, var_106_string); // 0xf3 NEW_2
	var_107_int = 528308; // 0xf5 PushI
	SetMessage(var_107_int); // 0xf6 TObjFunc
	ClearReplies(); // 0xf8 TObjFunc
	var_108_int = 520200; // 0xfa PushI
	var_109_int = 21376; // 0xfb PushI
	var_110_int = 21391; // 0xfc PushI
	AddReply(var_108_int, var_109_int, var_110_int); // 0xfd TObjFunc
	return 0; // 0xff Return
	
Label_256:
	var_111_int = 21376; // 0x100 PushI
	var_112_bool = var_12_bool == var_111_int; // 0x101 Eq
	if(var_112_bool == 0) goto Label_279; // 0x102 JumpB
	var_113_string = ""; // 0x103 PushV
	var_113_string = "Neutral"; // 0x104 MovS
	func_137(var_13_bool, var_113_string); // 0x105 NEW_2
	var_114_int = 520186; // 0x107 PushI
	SetMessage(var_114_int); // 0x108 TObjFunc
	ClearReplies(); // 0x10a TObjFunc
	var_115_int = 520187; // 0x10c PushI
	var_116_int = 21378; // 0x10d PushI
	var_117_int = 21377; // 0x10e PushI
	AddReply(var_115_int, var_116_int, var_117_int); // 0x10f TObjFunc
	var_118_int = 520197; // 0x111 PushI
	var_119_int = 21378; // 0x112 PushI
	var_120_int = 21387; // 0x113 PushI
	AddReply(var_118_int, var_119_int, var_120_int); // 0x114 TObjFunc
	return 0; // 0x116 Return
	
Label_279:
	var_121_int = 21378; // 0x117 PushI
	var_122_bool = var_12_bool == var_121_int; // 0x118 Eq
	if(var_122_bool == 0) goto Label_302; // 0x119 JumpB
	var_123_string = ""; // 0x11a PushV
	var_123_string = "Neutral"; // 0x11b MovS
	func_137(var_13_bool, var_123_string); // 0x11c NEW_2
	var_124_int = 520188; // 0x11e PushI
	SetMessage(var_124_int); // 0x11f TObjFunc
	ClearReplies(); // 0x121 TObjFunc
	var_125_int = 520189; // 0x123 PushI
	var_126_int = 21380; // 0x124 PushI
	var_127_int = 21379; // 0x125 PushI
	AddReply(var_125_int, var_126_int, var_127_int); // 0x126 TObjFunc
	var_128_int = 520194; // 0x128 PushI
	var_129_int = 21385; // 0x129 PushI
	var_130_int = 21384; // 0x12a PushI
	AddReply(var_128_int, var_129_int, var_130_int); // 0x12b TObjFunc
	return 0; // 0x12d Return
	
Label_302:
	var_131_int = 21385; // 0x12e PushI
	var_132_bool = var_12_bool == var_131_int; // 0x12f Eq
	if(var_132_bool == 0) goto Label_320; // 0x130 JumpB
	var_133_string = ""; // 0x131 PushV
	var_133_string = "Neutral"; // 0x132 MovS
	func_137(var_13_bool, var_133_string); // 0x133 NEW_2
	var_134_int = 520195; // 0x135 PushI
	SetMessage(var_134_int); // 0x136 TObjFunc
	ClearReplies(); // 0x138 TObjFunc
	var_135_int = 520196; // 0x13a PushI
	var_136_int = -1; // 0x13b PushI
	var_137_int = 21386; // 0x13c PushI
	AddReply(var_135_int, var_136_int, var_137_int); // 0x13d TObjFunc
	return 0; // 0x13f Return
	
Label_320:
	var_138_int = 21380; // 0x140 PushI
	var_139_bool = var_12_bool == var_138_int; // 0x141 Eq
	if(var_139_bool == 0) goto Label_338; // 0x142 JumpB
	var_140_string = ""; // 0x143 PushV
	var_140_string = "Neutral"; // 0x144 MovS
	func_137(var_13_bool, var_140_string); // 0x145 NEW_2
	var_141_int = 520190; // 0x147 PushI
	SetMessage(var_141_int); // 0x148 TObjFunc
	ClearReplies(); // 0x14a TObjFunc
	var_142_int = 520191; // 0x14c PushI
	var_143_int = 21382; // 0x14d PushI
	var_144_int = 21381; // 0x14e PushI
	AddReply(var_142_int, var_143_int, var_144_int); // 0x14f TObjFunc
	return 0; // 0x151 Return
	
Label_338:
	var_145_int = 21382; // 0x152 PushI
	var_146_bool = var_12_bool == var_145_int; // 0x153 Eq
	if(var_146_bool == 0) goto Label_356; // 0x154 JumpB
	var_147_string = ""; // 0x155 PushV
	var_147_string = "Neutral"; // 0x156 MovS
	func_137(var_13_bool, var_147_string); // 0x157 NEW_2
	var_148_int = 520192; // 0x159 PushI
	SetMessage(var_148_int); // 0x15a TObjFunc
	ClearReplies(); // 0x15c TObjFunc
	var_149_int = 520193; // 0x15e PushI
	var_150_int = -1; // 0x15f PushI
	var_151_int = 21383; // 0x160 PushI
	AddReply(var_149_int, var_150_int, var_151_int); // 0x161 TObjFunc
	return 0; // 0x163 Return
	
Label_356:
	var_3_string = 1; // 0x164 TMovB
	var_152_bool = 0; // 0x165 PushV
	func_935(var_152_bool); // 0x166 NEW_2
	if(var_152_bool == 0) goto Label_364; // 0x168 JumpB
	lshStopAnimation(); // 0x169 Func
	goto Label_366; // 0x16b Jump
	
Label_366:
	return 0; // 0x16e Return
	
Label_364:
	StopAnimation(); // 0x16c Func
	
Label_368:
	return 0; // 0x170 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object)
{
	func_520(var_11_bool, var_12_object); // 0x179 NEW_2
	var_16_int = 0; var_17_object = Obj(); // 0x17b PushV
	var_17_object = var_12_object; // 0x17c Mov
	TaskCall(0); // 0x17d TaskCall
	func_0(var_18_object, var_16_int, var_17_object); // 0x17e NEW_2
	TaskReturn(); // 0x17f TaskReturn
	return 0; // 0x181 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_string)
{
	var_13_string = "cleanup"; // 0x1a9 PushS
	var_14_bool = var_12_string == var_13_string; // 0x1aa Eq
	if(var_14_bool == 0) goto Label_431; // 0x1ab JumpB
	func_404(var_12_string); // 0x1ad NEW_2
	
Label_431:
	return 0; // 0x1af Return
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_int = var_6_int; // 0x1b0 PushT
	if(var_12_int == 0) goto Label_437; // 0x1b1 JumpB
	func_520(var_10_bool, var_11_bool); // 0x1b3 NEW_2
	
Label_437:
	var_16_bool = 0; // 0x1b5 PushV
	var_16_bool = 0; // 0x1b6 MovB
	var_17_int = var_5_int; // 0x1b7 PushT
	if(var_17_int == 0) goto Label_446; // 0x1b8 JumpB
	var_18_bool = 0; // 0x1b9 PushV
	func_453(var_18_bool); // 0x1ba NEW_2
	if(var_18_bool == 0) goto Label_446; // 0x1bc JumpB
	var_16_bool = 1; // 0x1bd MovB
	
Label_446:
	if(var_16_bool == 0) goto Label_452; // 0x1be JumpB
	var_19_object = Obj(); // 0x1bf PushV
	func_767(var_19_object); // 0x1c0 NEW_2
	RemoveActor(var_19_object); // 0x1c2 Func
	
Label_452:
	return 0; // 0x1c4 Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_int)
{
	var_13_int = 10; // 0x1f2 PushI
	var_14_bool = var_12_int == var_13_int; // 0x1f3 Eq
	if(var_14_bool == 0) goto Label_519; // 0x1f4 JumpB
	var_15_bool = 0; // 0x1f5 PushV
	func_482(var_10_bool, var_11_bool, var_12_int, var_15_bool); // 0x1f6 NEW_2
	if(var_15_bool == 0) goto Label_513; // 0x1f8 JumpB
	var_28_bool = var_2_object == 0; // 0x1f9 Not
	if(var_28_bool == 0) goto Label_512; // 0x1fa JumpB
	var_29_object = Obj(); // 0x1fb PushV
	var_29_object = var_4_bool; // 0x1fc MovT
	func_749(var_29_object); // 0x1fd NEW_2
	var_2_object = 1; // 0x1ff TMovB
	
Label_512:
	goto Label_519; // 0x200 Jump
	
Label_519:
	return 0; // 0x207 Return
	
Label_513:
	var_36_object = var_2_object; // 0x201 PushT
	if(var_36_object == 0) goto Label_519; // 0x202 JumpB
	var_37_string = "head"; // 0x203 PushS
	UnlookAsync(var_37_string); // 0x204 Func
	var_2_object = 0; // 0x206 TMovB
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_float = 0; var_13_float = 0; // 0x171 PushV
	var_12_float = 300; // 0x172 MovI
	var_13_float = 100; // 0x173 MovI
	func_386(var_11_bool, var_12_float, var_13_float); // 0x174 NEW_2
	return 0; // 0x176 Return
}


func_0(var_0_object, var_16_int, var_17_object)
{
	var_19_object = Obj(); var_20_bool = 0; var_21_int = 0; var_22_bool = 0; var_23_object = Obj(); var_24_bool = 0; var_25_int = 0; var_26_bool = 0; // 0x0 PushV
	var_0_object = var_17_object; // 0x1 TMov
	var_27_bool = 0; var_28_object = Obj(); var_29_float = 0; // 0x2 PushV
	var_28_object = var_17_object; // 0x3 Mov
	var_29_float = 70.0; // 0x4 MovF
	func_633(var_28_object, var_29_float); // 0x5 NEW_2
	var_73_bool = var_27_bool == 0; // 0x7 Not
	if(var_73_bool == 0) goto Label_11; // 0x8 JumpB
	var_16_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_23_object); // 0xb Func
	var_74_int = 0; // 0xd PushV
	func_929(var_74_int); // 0xe NEW_2
	SetNPCName(var_74_int); // 0x10 ObjFunc
	var_75_int = 0; // 0x12 PushV
	func_927(var_75_int); // 0x13 NEW_2
	SetNPCDescription(var_75_int); // 0x15 ObjFunc
	var_76_string = ""; // 0x17 PushV
	func_931(var_76_string); // 0x18 NEW_2
	SetPhoto(var_76_string); // 0x1a ObjFunc
	var_77_string = ""; // 0x1c PushV
	func_933(var_77_string); // 0x1d NEW_2
	SetPhoto2(var_77_string); // 0x1f ObjFunc
	var_78_int = 0; // 0x21 PushV
	func_910(var_78_int); // 0x22 NEW_2
	SetPlayerName(var_78_int); // 0x24 ObjFunc
	var_25_int = -1; // 0x26 MovI
	IsOverrideActive(var_24_bool); // 0x27 Func
	var_86_bool = var_24_bool; // 0x29 Push
	if(var_86_bool == 0) goto Label_45; // 0x2a JumpB
	var_16_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_23_object); // 0x2d Func
	var_87_object = Obj(); var_88_object = Obj(); // 0x2f PushV
	var_87_object = var_17_object; // 0x30 Mov
	var_88_object = var_23_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_89_object, var_90_object, var_91_string, var_92_bool, var_87_object, var_88_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_26_bool); // 0x36 ObjFunc
	
Label_56:
	var_144_bool = var_26_bool == 0; // 0x38 Not
	if(var_144_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_26_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_145_object = Obj(); // 0x3f PushV
	var_145_object = var_17_object; // 0x40 Mov
	func_701(); // 0x41 NEW_2
	StopDialog(var_23_object); // 0x43 Func
	GetReturnValue(var_25_int); // 0x45 ObjFunc
	var_16_int = var_25_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_386(var_6_int, var_12_float, var_13_float)
{
	var_14_float = 0; var_15_bool = 0; var_16_float = 0; var_17_bool = 0; // 0x182 PushV
	var_6_int = 0; // 0x183 TMovB
	
Label_388:
	var_18_int = 3; // 0x184 PushI
	rand(var_16_float, var_18_int); // 0x185 Func
	var_19_int = 3; // 0x187 PushI
	var_20_int = var_16_float + var_19_int; // 0x188 Add
	Sleep(var_20_int, var_17_bool); // 0x189 Func
	var_6_int = 1; // 0x18b TMovB
	var_21_float = 0; var_22_float = 0; // 0x18c PushV
	var_21_float = var_12_float; // 0x18d Mov
	var_22_float = var_13_float; // 0x18e Mov
	func_455(var_13_float, var_14_float, var_15_bool, var_16_float, var_17_bool, var_21_float, var_22_float); // 0x18f NEW_2
	var_6_int = 0; // 0x191 TMovB
	goto Label_388; // 0x192 Jump
}


func_773(var_54_cvector, var_55_cvector)
{
	var_57_float = 0; var_58_float = 0; // 0x305 PushV
	var_59_int = var_55_cvector | var_55_cvector; // 0x306 Or
	var_58_float = sqrt(var_59_int); // 0x307 Sqrt2
	var_60_float = 0.0; // 0x308 PushF
	var_61_bool = var_58_float < var_60_float; // 0x309 LT
	if(var_61_bool == 0) goto Label_781; // 0x30a JumpB
	var_54_cvector = CVector(0.0, 0.0, 0.0); // 0x30b MovV
	return 2; // 0x30c Return
	
Label_781:
	var_54_cvector = var_55_cvector / var_55_cvector; // 0x30d Div2
	return 2; // 0x30e Return
}


func_520(var_2_object, var_3_string)
{
	func_615(); // 0x209 NEW_2
	var_13_int = 10; // 0x20b PushI
	KillTimer(var_13_int); // 0x20c Func
	var_14_object = var_2_object; // 0x20e PushT
	if(var_14_object == 0) goto Label_532; // 0x20f JumpB
	var_15_string = "head"; // 0x210 PushS
	UnlookAsync(var_15_string); // 0x211 Func
	var_2_object = 0; // 0x213 TMovB
	
Label_532:
	var_3_string = 1; // 0x214 TMovB
	return 0; // 0x215 Return
}


func_137(var_2_object, var_94_string)
{
	var_95_bool = 0; // 0x8a PushV
	func_935(var_95_bool); // 0x8b NEW_2
	var_96_bool = var_95_bool == 0; // 0x8d Not
	if(var_96_bool == 0) goto Label_144; // 0x8e JumpB
	return 0; // 0x8f Return
	
Label_144:
	var_97_bool = var_94_string == var_2_object; // 0x90 Eq
	if(var_97_bool == 0) goto Label_147; // 0x91 JumpB
	return 0; // 0x92 Return
	
Label_147:
	var_98_string = ""; var_99_bool = 0; // 0x93 PushV
	var_98_string = var_94_string; // 0x94 Mov
	var_100_string = ""; // 0x95 PushS
	var_101_bool = var_94_string == var_100_string; // 0x96 Eq
	if(var_101_bool == 0) goto Label_154; // 0x97 JumpB
	var_99_bool = 0; // 0x98 MovB
	goto Label_155; // 0x99 Jump
	
Label_155:
	func_734(var_98_string, var_99_bool); // 0x9b NEW_2
	var_2_object = var_94_string; // 0x9d TMov
	return 0; // 0x9e Return
	
Label_154:
	var_99_bool = 1; // 0x9a MovB
}


func_910(var_78_int)
{
	var_79_int = 0; var_80_int = 0; // 0x38e PushV
	var_81_string = "branch"; // 0x38f PushS
	GetVariable(var_81_string, var_80_int); // 0x390 Func
	var_82_int = 0; // 0x392 PushI
	var_83_bool = var_80_int == var_82_int; // 0x393 Eq
	if(var_83_bool == 0) goto Label_920; // 0x394 JumpB
	var_78_int = 1; // 0x395 MovI
	return 2; // 0x396 Return
	
Label_920:
	var_84_int = 1; // 0x398 PushI
	var_85_bool = var_80_int == var_84_int; // 0x399 Eq
	if(var_85_bool == 0) goto Label_925; // 0x39a JumpB
	var_78_int = 2; // 0x39b MovI
	return 2; // 0x39c Return
	
Label_925:
	var_78_int = 3; // 0x39d MovI
	return 2; // 0x39e Return
}


func_783(var_114_int, var_115_string)
{
	var_116_int = 0; var_117_int = 0; // 0x30f PushV
	GetVariable(var_115_string, var_117_int); // 0x310 Func
	var_114_int = var_117_int; // 0x312 Mov
	return 2; // 0x313 Return
}


func_404(var_5_int)
{
	var_5_int = 1; // 0x194 TMovB
	var_15_bool = 0; // 0x195 PushV
	var_15_bool = 0; // 0x196 MovB
	var_16_bool = 0; // 0x197 PushV
	func_628(var_16_bool); // 0x198 NEW_2
	var_19_bool = var_16_bool == 0; // 0x19a Not
	if(var_19_bool == 0) goto Label_417; // 0x19b JumpB
	var_20_bool = 0; // 0x19c PushV
	func_453(var_20_bool); // 0x19d NEW_2
	if(var_20_bool == 0) goto Label_417; // 0x19f JumpB
	var_15_bool = 1; // 0x1a0 MovB
	
Label_417:
	if(var_15_bool == 0) goto Label_423; // 0x1a1 JumpB
	var_21_object = Obj(); // 0x1a2 PushV
	func_767(var_21_object); // 0x1a3 NEW_2
	RemoveActor(var_21_object); // 0x1a5 Func
	
Label_423:
	return 0; // 0x1a7 Return
}


func_788(var_51_bool, var_52_string, var_53_string)
{
	var_54_object = Obj(); var_55_object = Obj(); // 0x314 PushV
	FindActor(var_55_object, var_52_string); // 0x315 Func
	var_56_bool = var_55_object == 0; // 0x317 NullEq
	if(var_56_bool == 0) goto Label_795; // 0x318 JumpB
	var_51_bool = 0; // 0x319 MovB
	return 2; // 0x31a Return
	
Label_795:
	Trigger(var_55_object, var_53_string); // 0x31b Func
	var_51_bool = 1; // 0x31d MovB
	return 2; // 0x31e Return
}


func_534()
{
	var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_bool = 0; var_35_float = 0; var_36_bool = 0; var_37_int = 0; var_38_int = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0; var_42_float = 0; var_43_bool = 0; // 0x216 PushV
	WaitForAnimEnd(); // 0x217 Func
	var_44_bool = 0; // 0x219 PushV
	func_628(var_44_bool); // 0x21a NEW_2
	var_45_bool = var_44_bool == 0; // 0x21c Not
	if(var_45_bool == 0) goto Label_543; // 0x21d JumpB
	return 14; // 0x21e Return
	
Label_543:
	var_46_int = 0; // 0x21f PushV
	func_807(var_46_int); // 0x220 NEW_2
	var_37_int = var_46_int; // 0x221 Mov
	var_38_int = 0; // 0x223 MovI
	
Label_548:
	var_59_bool = 0; // 0x224 PushV
	var_59_bool = 0; // 0x225 MovB
	var_60_int = 5; // 0x226 PushI
	var_61_bool = var_38_int < var_60_int; // 0x227 LT
	if(var_61_bool == 0) goto Label_558; // 0x228 JumpB
	var_62_bool = 0; // 0x229 PushV
	func_628(var_62_bool); // 0x22a NEW_2
	if(var_62_bool == 0) goto Label_558; // 0x22c JumpB
	var_59_bool = 1; // 0x22d MovB
	
Label_558:
	if(var_59_bool == 0) goto Label_610; // 0x22e JumpB
	var_63_int = 3; // 0x22f PushI
	irand(var_39_int, var_63_int); // 0x230 Func
	var_64_int = 0; // 0x232 PushI
	var_65_bool = var_39_int == var_64_int; // 0x233 Eq
	if(var_65_bool == 0) goto Label_582; // 0x234 JumpB
	var_66_int = var_37_int; // 0x235 Push
	if(var_66_int == 0) goto Label_581; // 0x236 JumpB
	irand(var_40_int, var_37_int); // 0x237 Func
	var_67_string = "all"; // 0x239 PushS
	var_68_string = ""; var_69_int = 0; // 0x23a PushV
	var_69_int = var_40_int; // 0x23b Mov
	func_800(var_68_string, var_69_int); // 0x23c NEW_2
	PlayAnimation(var_67_string, var_68_string); // 0x23e Func
	WaitForAnimEnd(var_41_bool); // 0x240 Func
	var_70_bool = var_41_bool == 0; // 0x242 Not
	if(var_70_bool == 0) goto Label_581; // 0x243 JumpB
	goto Label_610; // 0x244 Jump
	
Label_610:
	ResetAAS(); // 0x262 Func
	return 14; // 0x264 Return
	
Label_581:
	goto Label_599; // 0x245 Jump
	
Label_599:
	var_71_bool = 0; // 0x257 PushV
	func_613(var_71_bool); // 0x258 NEW_2
	var_72_bool = var_71_bool == 0; // 0x25a Not
	if(var_72_bool == 0) goto Label_605; // 0x25b JumpB
	goto Label_610; // 0x25c Jump
	
Label_605:
	ResetAAS(); // 0x25d Func
	var_73_int = 1; // 0x25f PushI
	var_38_int = var_38_int + var_73_int; // 0x260 Add2
	goto Label_548; // 0x261 Jump
	
Label_582:
	var_74_int = 1; // 0x246 PushI
	var_75_bool = var_39_int == var_74_int; // 0x247 Eq
	if(var_75_bool == 0) goto Label_596; // 0x248 JumpB
	var_76_int = 4; // 0x249 PushI
	rand(var_42_float, var_76_int); // 0x24a Func
	var_77_int = 1; // 0x24c PushI
	var_78_int = var_42_float + var_77_int; // 0x24d Add
	Sleep(var_78_int, var_43_bool); // 0x24e Func
	var_79_bool = var_43_bool == 0; // 0x250 Not
	if(var_79_bool == 0) goto Label_595; // 0x251 JumpB
	goto Label_610; // 0x252 Jump
	
Label_595:
	goto Label_599; // 0x253 Jump
	
Label_596:
	var_80_int = var_38_int; // 0x254 Push
	if(var_80_int == 0) goto Label_599; // 0x255 JumpB
	goto Label_610; // 0x256 Jump
}


func_927(var_75_int)
{
	var_75_int = 518716; // 0x39f MovI
	return 0; // 0x3a0 Return
}


func_800(var_52_string, var_53_int)
{
	var_54_string = ""; var_55_string = ""; // 0x320 PushV
	var_55_string = "idle"; // 0x321 MovS
	var_56_int = var_53_int; // 0x322 Push
	if(var_56_int == 0) goto Label_805; // 0x323 JumpB
	var_55_string = var_55_string + var_53_int; // 0x324 Add2
	
Label_805:
	var_52_string = var_55_string; // 0x325 Mov
	return 2; // 0x326 Return
}


func_929(var_74_int)
{
	var_74_int = 518715; // 0x3a1 MovI
	return 0; // 0x3a2 Return
}


func_931(var_76_string)
{
	var_76_string = "ui/NPC_Prophet.png"; // 0x3a3 MovS
	return 0; // 0x3a4 Return
}


func_933(var_77_string)
{
	var_77_string = "ui/NPC_Prophet_b.png"; // 0x3a5 MovS
	return 0; // 0x3a6 Return
}


func_935(var_69_bool)
{
	var_69_bool = 0; // 0x3a7 MovB
	return 0; // 0x3a8 Return
}


func_807(var_46_int)
{
	var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_bool = 0; // 0x327 PushV
	var_49_int = 0; // 0x328 MovI
	
Label_809:
	var_51_string = "all"; // 0x329 PushS
	var_52_string = ""; var_53_int = 0; // 0x32a PushV
	var_53_int = var_49_int; // 0x32b Mov
	func_800(var_52_string, var_53_int); // 0x32c NEW_2
	HasAnimation(var_50_bool, var_51_string, var_52_string); // 0x32e Func
	var_57_bool = var_50_bool == 0; // 0x330 Not
	if(var_57_bool == 0) goto Label_819; // 0x331 JumpB
	goto Label_822; // 0x332 Jump
	
Label_822:
	var_46_int = var_49_int; // 0x336 Mov
	return 4; // 0x337 Return
	
Label_819:
	var_58_int = 1; // 0x333 PushI
	var_49_int = var_49_int + var_58_int; // 0x334 Add2
	goto Label_809; // 0x335 Jump
}


func_824()
{
	var_26_string = "b5q02"; // 0x339 PushS
	var_27_int = 2; // 0x33a PushI
	SetVariable(var_26_string, var_27_int); // 0x33b Func
	func_856(); // 0x33e NEW_2
	var_51_bool = 0; var_52_string = ""; var_53_string = ""; // 0x340 PushV
	var_52_string = "quest_b5_02"; // 0x341 MovS
	var_53_string = "remove_prophet"; // 0x342 MovS
	func_788(var_51_bool, var_52_string, var_53_string); // 0x343 NEW_2
	return 0; // 0x345 Return
}


func_701()
{
	var_146_bool = 0; var_147_bool = 0; // 0x2bd PushV
	CameraSwitchToNormal(); // 0x2be Func
	var_148_bool = 0; // 0x2c0 PushV
	func_935(var_148_bool); // 0x2c1 NEW_2
	if(var_148_bool == 0) goto Label_709; // 0x2c3 JumpB
	goto Label_717; // 0x2c4 Jump
	
Label_717:
	return 2; // 0x2cd Return
	
Label_709:
	var_149_string = "head"; // 0x2c5 PushS
	HasAnimationTrack(var_147_bool, var_149_string); // 0x2c6 Func
	var_150_bool = var_147_bool; // 0x2c8 Push
	if(var_150_bool == 0) goto Label_717; // 0x2c9 JumpB
	var_151_string = "head"; // 0x2ca PushS
	UnlookAsync(var_151_string); // 0x2cb Func
}


func_453(var_18_bool)
{
	var_18_bool = 1; // 0x1c5 MovB
	return 0; // 0x1c6 Return
}


func_838()
{
	var_20_string = "oob5Prophet1"; // 0x347 PushS
	var_21_int = 1; // 0x348 PushI
	SetVariable(var_20_string, var_21_int); // 0x349 Func
	return 0; // 0x34b Return
}


func_455(var_0_object, var_1_object, var_2_object, var_3_string, var_17_bool, var_21_float, var_22_float)
{
	var_23_bool = 0; // 0x1c8 PushV
	func_628(var_23_bool); // 0x1c9 NEW_2
	var_26_bool = var_23_bool == 0; // 0x1cb Not
	if(var_26_bool == 0) goto Label_462; // 0x1cc JumpB
	return 0; // 0x1cd Return
	
Label_462:
	var_27_string = "player"; // 0x1ce PushS
	FindActor(var_17_bool, var_27_string); // 0x1cf Func
	var_2_object = 0; // 0x1d1 TMovB
	var_3_string = 0; // 0x1d2 TMovB
	var_0_object = var_21_float; // 0x1d3 TMov
	var_1_object = var_22_float; // 0x1d4 TMov
	var_28_int = 10; // 0x1d5 PushI
	var_29_float = 1.0; // 0x1d6 PushF
	SetTimer(var_28_int, var_29_float); // 0x1d7 Func
	func_534(); // 0x1da NEW_2
	var_81_bool = var_3_string == 0; // 0x1dc Not
	if(var_81_bool == 0) goto Label_481; // 0x1dd JumpB
	var_82_int = 10; // 0x1de PushI
	KillTimer(var_82_int); // 0x1df Func
	
Label_481:
	return 0; // 0x1e1 Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_87_object, var_88_object)
{
	var_0_object = var_88_object; // 0x4b TMov
	var_1_object = var_87_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_93_int = 1; // 0x4e PushI
	if(var_93_int == 0) goto Label_107; // 0x4f JumpB
	var_94_string = ""; // 0x50 PushV
	var_94_string = "Neutral"; // 0x51 MovS
	func_137(var_88_object, var_94_string); // 0x52 NEW_2
	var_111_int = 520182; // 0x54 PushI
	SetMessage(var_111_int); // 0x55 TObjFunc
	ClearReplies(); // 0x57 TObjFunc
	var_112_bool = 0; var_113_object = Obj(); // 0x59 PushV
	var_113_object = var_1_object; // 0x5a MovT
	func_844(var_113_object); // 0x5b NEW_2
	if(var_112_bool == 0) goto Label_99; // 0x5d JumpB
	var_120_int = 520183; // 0x5e PushI
	var_121_int = 21374; // 0x5f PushI
	var_122_int = 21373; // 0x60 PushI
	AddReply(var_120_int, var_121_int, var_122_int); // 0x61 TObjFunc
	
Label_99:
	var_123_int = 520201; // 0x63 PushI
	var_124_int = -1; // 0x64 PushI
	var_125_int = 21393; // 0x65 PushI
	AddReply(var_123_int, var_124_int, var_125_int); // 0x66 TObjFunc
	goto Label_107; // 0x68 Jump
	
Label_107:
	var_126_bool = 0; // 0x6b PushV
	func_935(var_126_bool); // 0x6c NEW_2
	if(var_126_bool == 0) goto Label_122; // 0x6e JumpB
	
Label_111:
	lshWaitForAnimEnd(); // 0x6f Func
	var_127_string = var_3_string; // 0x71 PushT
	if(var_127_string == 0) goto Label_116; // 0x72 JumpB
	goto Label_121; // 0x73 Jump
	
Label_121:
	goto Label_136; // 0x79 Jump
	
Label_136:
	return 0; // 0x88 Return
	
Label_116:
	var_128_string = ""; // 0x74 PushV
	var_128_string = var_2_object; // 0x75 MovT
	func_718(var_128_string); // 0x76 NEW_2
	goto Label_111; // 0x78 Jump
	
Label_122:
	var_139_string = "all"; // 0x7a PushS
	var_140_string = "idle"; // 0x7b PushS
	PlayAnimation(var_139_string, var_140_string); // 0x7c Func
	
Label_126:
	WaitForAnimEnd(); // 0x7e Func
	var_141_string = var_3_string; // 0x80 PushT
	if(var_141_string == 0) goto Label_131; // 0x81 JumpB
	goto Label_136; // 0x82 Jump
	
Label_131:
	var_142_string = "all"; // 0x83 PushS
	var_143_string = "idle"; // 0x84 PushS
	PlayAnimation(var_142_string, var_143_string); // 0x85 Func
	goto Label_126; // 0x87 Jump
}


func_844(var_112_bool)
{
	var_114_int = 0; var_115_string = ""; // 0x34d PushV
	var_115_string = "oob5Prophet1"; // 0x34e MovS
	func_783(var_114_int, var_115_string); // 0x34f NEW_2
	var_118_int = 0; // 0x351 PushI
	var_119_bool = var_114_int == var_118_int; // 0x352 Eq
	if(var_119_bool == 0) goto Label_854; // 0x353 JumpB
	var_112_bool = 1; // 0x354 MovB
	return 0; // 0x355 Return
	
Label_854:
	var_112_bool = 0; // 0x356 MovB
	return 0; // 0x357 Return
}


func_718(var_128_string)
{
	var_129_bool = 0; var_130_float = 0; var_131_float = 0; var_132_bool = 0; var_133_float = 0; var_134_float = 0; // 0x2ce PushV
	lshHasAnimation(var_132_bool, var_128_string); // 0x2cf Func
	var_135_bool = var_132_bool; // 0x2d1 Push
	if(var_135_bool == 0) goto Label_729; // 0x2d2 JumpB
	lshGetAnimTimes(var_128_string, var_133_float, var_134_float); // 0x2d3 Func
	var_136_bool = 0; // 0x2d5 PushB
	lshPlayAnimation(var_133_float, var_134_float, var_136_bool); // 0x2d6 Func
	goto Label_733; // 0x2d8 Jump
	
Label_733:
	return 6; // 0x2dd Return
	
Label_729:
	var_137_string = "Can't find lsh animation : "; // 0x2d9 PushS
	var_138_int = var_137_string + var_128_string; // 0x2da Add
	Trace(var_138_int); // 0x2db Func
}


func_856()
{
	var_28_object = Obj(); var_29_object = Obj(); // 0x358 PushV
	var_30_int = 251; // 0x359 PushI
	var_31_int = 2; // 0x35a PushI
	var_32_int = 520667; // 0x35b PushI
	CreateDiaryEntry(var_29_object, var_30_int, var_31_int, var_32_int); // 0x35c Func
	var_33_bool = 0; var_34_object = Obj(); var_35_int = 0; // 0x35e PushV
	var_34_object = var_29_object; // 0x35f Mov
	var_35_int = 249; // 0x360 MovI
	func_882(var_33_bool, var_34_object, var_35_int); // 0x361 NEW_2
	return 2; // 0x363 Return
}


func_734(var_98_string, var_99_bool)
{
	var_102_bool = 0; var_103_float = 0; var_104_float = 0; var_105_bool = 0; var_106_float = 0; var_107_float = 0; // 0x2de PushV
	lshHasAnimation(var_105_bool, var_98_string); // 0x2df Func
	var_108_bool = var_105_bool; // 0x2e1 Push
	if(var_108_bool == 0) goto Label_744; // 0x2e2 JumpB
	lshGetAnimTimes(var_98_string, var_106_float, var_107_float); // 0x2e3 Func
	lshPlayAnimation(var_106_float, var_107_float, var_99_bool); // 0x2e5 Func
	goto Label_748; // 0x2e7 Jump
	
Label_748:
	return 6; // 0x2ec Return
	
Label_744:
	var_109_string = "Can't find lsh animation : "; // 0x2e8 PushS
	var_110_int = var_109_string + var_98_string; // 0x2e9 Add
	Trace(var_110_int); // 0x2ea Func
}


func_482(var_0_object, var_1_object, var_4_bool, var_15_bool)
{
	var_16_float = 0; var_17_float = 0; // 0x1e2 PushV
	var_18_bool = var_4_bool == 0; // 0x1e3 NullEq
	if(var_18_bool == 0) goto Label_487; // 0x1e4 JumpB
	var_15_bool = 0; // 0x1e5 MovB
	return 2; // 0x1e6 Return
	
Label_487:
	var_19_float = 0; var_20_object = Obj(); // 0x1e7 PushV
	var_20_object = var_4_bool; // 0x1e8 MovT
	func_620(var_20_object); // 0x1e9 NEW_2
	var_17_float = sqrt(var_19_float); // 0x1eb Sqrt2
	var_27_object = var_2_object; // 0x1ec PushT
	if(var_27_object == 0) goto Label_495; // 0x1ed JumpB
	var_17_float = var_17_float - var_1_object; // 0x1ee Sub2
	
Label_495:
	var_15_bool = var_17_float < var_0_object; // 0x1ef LT2
	return 2; // 0x1f0 Return
}


func_613(var_71_bool)
{
	var_71_bool = 1; // 0x265 MovB
	return 0; // 0x266 Return
}


func_869(var_42_object)
{
	var_43_object = Obj(); var_44_object = Obj(); // 0x365 PushV
	GetDiaryRoot(var_44_object); // 0x366 Func
	var_45_bool = var_44_object == 0; // 0x368 Not
	if(var_45_bool == 0) goto Label_879; // 0x369 JumpB
	var_46_string = "Can't retrieve diary root"; // 0x36a PushS
	Trace(var_46_string); // 0x36b Func
	var_42_object = 0; // 0x36d MovB
	return 2; // 0x36e Return
	
Label_879:
	var_42_object = var_44_object; // 0x36f Mov
	return 2; // 0x370 Return
}


func_615()
{
	StopAnimation(); // 0x267 Func
	StopGroup0(); // 0x269 Func
	return 0; // 0x26b Return
}


func_620(var_19_float)
{
	var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); // 0x26c PushV
	GetPosition(var_24_cvector); // 0x26d Func
	GetPosition(var_25_cvector); // 0x26f ObjFunc
	var_26_cvector = var_25_cvector - var_24_cvector; // 0x271 Sub2
	var_19_float = var_26_cvector | var_26_cvector; // 0x272 Or2
	return 6; // 0x273 Return
}


func_749(var_29_object)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_float = 0; var_33_cvector = CVector(0,0,0); // 0x2ed PushV
	GetEyesHeight(var_32_float); // 0x2ee ObjFunc
	var_33_cvector = CVector(0.0, 0.0, 0.0); // 0x2f0 MovV
	var_34_float = GetByIndex(var_33_cvector, 1); // 0x2f1 PushE
	var_34_float = var_32_float; // 0x2f2 Mov
	SetByIndex(var_33_cvector, 1) = var_34_float; // 0x2f3 PopE
	var_35_string = "head"; // 0x2f4 PushS
	LookAsync(var_29_object, var_35_string, var_33_cvector); // 0x2f5 Func
	return 4; // 0x2f7 Return
}


func_882(var_33_bool, var_34_object, var_35_int)
{
	var_36_object = Obj(); var_37_object = Obj(); var_38_int = 0; var_39_object = Obj(); var_40_object = Obj(); var_41_int = 0; // 0x372 PushV
	var_42_object = Obj(); // 0x373 PushV
	func_869(var_42_object); // 0x374 NEW_2
	var_39_object = var_42_object; // 0x375 Mov
	Find(var_35_int, var_40_object); // 0x377 ObjFunc
	var_47_bool = var_40_object == 0; // 0x379 Not
	if(var_47_bool == 0) goto Label_897; // 0x37a JumpB
	var_48_string = "Can't find diary parent with id: "; // 0x37b PushS
	var_49_int = var_48_string + var_35_int; // 0x37c Add
	Trace(var_49_int); // 0x37d Func
	var_33_bool = 0; // 0x37f MovB
	return 6; // 0x380 Return
	
Label_897:
	AddChild(var_34_object); // 0x381 ObjFunc
	var_50_int = 7; // 0x383 PushI
	SendWorldWndMessage(var_50_int); // 0x384 Func
	GetCategory(var_41_int); // 0x386 ObjFunc
	SetDiarySection(var_41_int); // 0x388 Func
	var_33_bool = 0; // 0x38a MovB
	return 6; // 0x38b Return
}


func_628(var_23_bool)
{
	var_24_bool = 0; var_25_bool = 0; // 0x274 PushV
	IsLoaded(var_25_bool); // 0x275 Func
	var_23_bool = var_25_bool; // 0x277 Mov
	return 2; // 0x278 Return
}


func_760()
{
	var_15_bool = 0; // 0x2f8 PushV
	func_935(var_15_bool); // 0x2f9 NEW_2
	if(var_15_bool == 0) goto Label_766; // 0x2fb JumpB
	lshStopSpeech(); // 0x2fc Func
	
Label_766:
	return 0; // 0x2fe Return
}


func_633(var_27_bool, var_29_float)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; var_39_float = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0; var_47_bool = 0; // 0x279 PushV
	GetPosition(var_40_cvector); // 0x27a ObjFunc
	GetEyesHeight(var_39_float); // 0x27c ObjFunc
	var_48_float = GetByIndex(var_40_cvector, 1); // 0x27e PushE
	var_48_float = var_48_float + var_39_float; // 0x27f Add2
	SetByIndex(var_40_cvector, 1) = var_48_float; // 0x280 PopE
	GetPosition(var_41_cvector); // 0x281 Func
	GetEyesHeight(var_39_float); // 0x283 Func
	var_49_float = GetByIndex(var_41_cvector, 1); // 0x285 PushE
	var_49_float = var_49_float + var_39_float; // 0x286 Add2
	SetByIndex(var_41_cvector, 1) = var_49_float; // 0x287 PopE
	var_42_cvector = var_40_cvector - var_41_cvector; // 0x288 Sub2
	var_50_float = GetByIndex(var_42_cvector, 1); // 0x289 PushE
	var_50_float = 0; // 0x28a MovI
	SetByIndex(var_42_cvector, 1) = var_50_float; // 0x28b PopE
	var_51_int = var_42_cvector | var_42_cvector; // 0x28c Or
	var_52_float = sqrt(var_51_int); // 0x28d Sqrt
	var_42_cvector = var_42_cvector / var_42_cvector; // 0x28e Div2
	var_43_cvector = -var_42_cvector; // 0x28f Neg2
	var_53_float = var_42_cvector * var_29_float; // 0x290 Mult
	var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); // 0x291 PushV
	var_56_cvector = CVector(0.0, 1.0, 0.0); // 0x292 PushVec
	var_55_cvector = var_43_cvector ^ var_56_cvector; // 0x293 Xor2
	func_773(var_54_cvector, var_55_cvector); // 0x294 NEW_2
	var_62_int = 25; // 0x296 PushI
	var_63_float = var_54_cvector * var_62_int; // 0x297 Mult
	var_64_int = var_53_float + var_63_float; // 0x298 Add
	var_65_cvector = CVector(0.0, 10.0, 0.0); // 0x299 PushVec
	var_44_cvector = var_64_int - var_65_cvector; // 0x29a Sub2
	var_45_cvector = var_41_cvector + var_44_cvector; // 0x29b Add2
	IsOverrideActive(var_46_bool); // 0x29c Func
	var_66_bool = var_46_bool; // 0x29e Push
	if(var_66_bool == 0) goto Label_674; // 0x29f JumpB
	var_27_bool = 0; // 0x2a0 MovB
	return 18; // 0x2a1 Return
	
Label_674:
	StopWorld(); // 0x2a2 Func
	CameraTransit(var_45_cvector, var_43_cvector); // 0x2a4 Func
	var_67_float = GetByIndex(var_44_cvector, 0); // 0x2a6 PushE
	var_68_float = GetByIndex(var_44_cvector, 2); // 0x2a7 PushE
	Rotate(var_67_float, var_68_float); // 0x2a8 Func
	var_69_bool = 0; // 0x2aa PushV
	func_935(var_69_bool); // 0x2ab NEW_2
	if(var_69_bool == 0) goto Label_687; // 0x2ad JumpB
	goto Label_695; // 0x2ae Jump
	
Label_695:
	CameraWaitForPlayFinish(); // 0x2b7 Func
	ResumeWorld(); // 0x2b9 Func
	var_27_bool = 1; // 0x2bb MovB
	return 18; // 0x2bc Return
	
Label_687:
	var_70_string = "head"; // 0x2af PushS
	HasAnimationTrack(var_47_bool, var_70_string); // 0x2b0 Func
	var_71_bool = var_47_bool; // 0x2b2 Push
	if(var_71_bool == 0) goto Label_695; // 0x2b3 JumpB
	var_72_string = "head"; // 0x2b4 PushS
	LookAsyncCamera(var_72_string); // 0x2b5 Func
}


func_767(var_19_object)
{
	var_20_object = Obj(); var_21_object = Obj(); // 0x2ff PushV
	self(var_21_object); // 0x300 Func
	var_19_object = var_21_object; // 0x302 Mov
	return 2; // 0x303 Return
}


