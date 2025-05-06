task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	var_8_int = 1; // 0x9b PushI
	if(var_8_int == 0) goto Label_362; // 0x9c JumpB
	func_598(); // 0x9e NEW_2
	var_10_int = 10714; // 0xa0 PushI
	var_11_bool = var_7_bool == var_10_int; // 0xa1 Eq
	if(var_11_bool == 0) goto Label_173; // 0xa2 JumpB
	var_12_object = Obj(); var_13_object = Obj(); // 0xa3 PushV
	var_12_object = var_1_object; // 0xa4 MovT
	var_13_object = var_0_object; // 0xa5 MovT
	func_656(); // 0xa6 NEW_2
	var_30_object = Obj(); var_31_object = Obj(); // 0xa8 PushV
	var_30_object = var_1_object; // 0xa9 MovT
	var_31_object = var_0_object; // 0xaa MovT
	func_672(); // 0xab NEW_2
	
Label_173:
	var_56_int = 10717; // 0xad PushI
	var_57_bool = var_7_bool == var_56_int; // 0xae Eq
	if(var_57_bool == 0) goto Label_186; // 0xaf JumpB
	var_58_object = Obj(); var_59_object = Obj(); // 0xb0 PushV
	var_58_object = var_1_object; // 0xb1 MovT
	var_59_object = var_0_object; // 0xb2 MovT
	func_656(); // 0xb3 NEW_2
	var_60_object = Obj(); var_61_object = Obj(); // 0xb5 PushV
	var_60_object = var_1_object; // 0xb6 MovT
	var_61_object = var_0_object; // 0xb7 MovT
	func_672(); // 0xb8 NEW_2
	
Label_186:
	var_62_int = 10718; // 0xba PushI
	var_63_bool = var_7_bool == var_62_int; // 0xbb Eq
	if(var_63_bool == 0) goto Label_199; // 0xbc JumpB
	var_64_object = Obj(); var_65_object = Obj(); // 0xbd PushV
	var_64_object = var_1_object; // 0xbe MovT
	var_65_object = var_0_object; // 0xbf MovT
	func_656(); // 0xc0 NEW_2
	var_66_object = Obj(); var_67_object = Obj(); // 0xc2 PushV
	var_66_object = var_1_object; // 0xc3 MovT
	var_67_object = var_0_object; // 0xc4 MovT
	func_672(); // 0xc5 NEW_2
	
Label_199:
	var_68_int = 10709; // 0xc7 PushI
	var_69_bool = var_6_int == var_68_int; // 0xc8 Eq
	if(var_69_bool == 0) goto Label_222; // 0xc9 JumpB
	var_70_string = ""; // 0xca PushV
	var_70_string = "Neutral"; // 0xcb MovS
	func_132(var_7_bool, var_70_string); // 0xcc NEW_2
	var_87_int = 509726; // 0xce PushI
	SetMessage(var_87_int); // 0xcf TObjFunc
	ClearReplies(); // 0xd1 TObjFunc
	var_88_int = 509727; // 0xd3 PushI
	var_89_int = 10711; // 0xd4 PushI
	var_90_int = 10710; // 0xd5 PushI
	AddReply(var_88_int, var_89_int, var_90_int); // 0xd6 TObjFunc
	var_91_int = 509742; // 0xd8 PushI
	var_92_int = 10728; // 0xd9 PushI
	var_93_int = 10727; // 0xda PushI
	AddReply(var_91_int, var_92_int, var_93_int); // 0xdb TObjFunc
	return 0; // 0xdd Return
	
Label_222:
	var_94_int = 10728; // 0xde PushI
	var_95_bool = var_6_int == var_94_int; // 0xdf Eq
	if(var_95_bool == 0) goto Label_240; // 0xe0 JumpB
	var_96_string = ""; // 0xe1 PushV
	var_96_string = "Neutral"; // 0xe2 MovS
	func_132(var_7_bool, var_96_string); // 0xe3 NEW_2
	var_97_int = 509743; // 0xe5 PushI
	SetMessage(var_97_int); // 0xe6 TObjFunc
	ClearReplies(); // 0xe8 TObjFunc
	var_98_int = 509744; // 0xea PushI
	var_99_int = 10711; // 0xeb PushI
	var_100_int = 10729; // 0xec PushI
	AddReply(var_98_int, var_99_int, var_100_int); // 0xed TObjFunc
	return 0; // 0xef Return
	
Label_240:
	var_101_int = 10711; // 0xf0 PushI
	var_102_bool = var_6_int == var_101_int; // 0xf1 Eq
	if(var_102_bool == 0) goto Label_263; // 0xf2 JumpB
	var_103_string = ""; // 0xf3 PushV
	var_103_string = "Neutral"; // 0xf4 MovS
	func_132(var_7_bool, var_103_string); // 0xf5 NEW_2
	var_104_int = 509728; // 0xf7 PushI
	SetMessage(var_104_int); // 0xf8 TObjFunc
	ClearReplies(); // 0xfa TObjFunc
	var_105_int = 509729; // 0xfc PushI
	var_106_int = 10713; // 0xfd PushI
	var_107_int = 10712; // 0xfe PushI
	AddReply(var_105_int, var_106_int, var_107_int); // 0xff TObjFunc
	var_108_int = 509736; // 0x101 PushI
	var_109_int = 10720; // 0x102 PushI
	var_110_int = 10719; // 0x103 PushI
	AddReply(var_108_int, var_109_int, var_110_int); // 0x104 TObjFunc
	return 0; // 0x106 Return
	
Label_263:
	var_111_int = 10720; // 0x107 PushI
	var_112_bool = var_6_int == var_111_int; // 0x108 Eq
	if(var_112_bool == 0) goto Label_286; // 0x109 JumpB
	var_113_string = ""; // 0x10a PushV
	var_113_string = "Neutral"; // 0x10b MovS
	func_132(var_7_bool, var_113_string); // 0x10c NEW_2
	var_114_int = 509737; // 0x10e PushI
	SetMessage(var_114_int); // 0x10f TObjFunc
	ClearReplies(); // 0x111 TObjFunc
	var_115_int = 509738; // 0x113 PushI
	var_116_int = 10722; // 0x114 PushI
	var_117_int = 10721; // 0x115 PushI
	AddReply(var_115_int, var_116_int, var_117_int); // 0x116 TObjFunc
	var_118_int = 509741; // 0x118 PushI
	var_119_int = 10713; // 0x119 PushI
	var_120_int = 10725; // 0x11a PushI
	AddReply(var_118_int, var_119_int, var_120_int); // 0x11b TObjFunc
	return 0; // 0x11d Return
	
Label_286:
	var_121_int = 10722; // 0x11e PushI
	var_122_bool = var_6_int == var_121_int; // 0x11f Eq
	if(var_122_bool == 0) goto Label_304; // 0x120 JumpB
	var_123_string = ""; // 0x121 PushV
	var_123_string = "Neutral"; // 0x122 MovS
	func_132(var_7_bool, var_123_string); // 0x123 NEW_2
	var_124_int = 509739; // 0x125 PushI
	SetMessage(var_124_int); // 0x126 TObjFunc
	ClearReplies(); // 0x128 TObjFunc
	var_125_int = 509740; // 0x12a PushI
	var_126_int = 10713; // 0x12b PushI
	var_127_int = 10723; // 0x12c PushI
	AddReply(var_125_int, var_126_int, var_127_int); // 0x12d TObjFunc
	return 0; // 0x12f Return
	
Label_304:
	var_128_int = 10713; // 0x130 PushI
	var_129_bool = var_6_int == var_128_int; // 0x131 Eq
	if(var_129_bool == 0) goto Label_327; // 0x132 JumpB
	var_130_string = ""; // 0x133 PushV
	var_130_string = "Neutral"; // 0x134 MovS
	func_132(var_7_bool, var_130_string); // 0x135 NEW_2
	var_131_int = 509730; // 0x137 PushI
	SetMessage(var_131_int); // 0x138 TObjFunc
	ClearReplies(); // 0x13a TObjFunc
	var_132_int = 509731; // 0x13c PushI
	var_133_int = -1; // 0x13d PushI
	var_134_int = 10714; // 0x13e PushI
	AddReply(var_132_int, var_133_int, var_134_int); // 0x13f TObjFunc
	var_135_int = 509732; // 0x141 PushI
	var_136_int = 10716; // 0x142 PushI
	var_137_int = 10715; // 0x143 PushI
	AddReply(var_135_int, var_136_int, var_137_int); // 0x144 TObjFunc
	return 0; // 0x146 Return
	
Label_327:
	var_138_int = 10716; // 0x147 PushI
	var_139_bool = var_6_int == var_138_int; // 0x148 Eq
	if(var_139_bool == 0) goto Label_350; // 0x149 JumpB
	var_140_string = ""; // 0x14a PushV
	var_140_string = "Neutral"; // 0x14b MovS
	func_132(var_7_bool, var_140_string); // 0x14c NEW_2
	var_141_int = 509733; // 0x14e PushI
	SetMessage(var_141_int); // 0x14f TObjFunc
	ClearReplies(); // 0x151 TObjFunc
	var_142_int = 509734; // 0x153 PushI
	var_143_int = -1; // 0x154 PushI
	var_144_int = 10717; // 0x155 PushI
	AddReply(var_142_int, var_143_int, var_144_int); // 0x156 TObjFunc
	var_145_int = 509735; // 0x158 PushI
	var_146_int = -1; // 0x159 PushI
	var_147_int = 10718; // 0x15a PushI
	AddReply(var_145_int, var_146_int, var_147_int); // 0x15b TObjFunc
	return 0; // 0x15d Return
	
Label_350:
	var_3_string = 1; // 0x15e TMovB
	var_148_bool = 0; // 0x15f PushV
	func_763(var_148_bool); // 0x160 NEW_2
	if(var_148_bool == 0) goto Label_358; // 0x162 JumpB
	lshStopAnimation(); // 0x163 Func
	goto Label_360; // 0x165 Jump
	
Label_360:
	return 0; // 0x168 Return
	
Label_358:
	StopAnimation(); // 0x166 Func
	
Label_362:
	return 0; // 0x16a Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object)
{
	var_7_bool = var_0_object == 0; // 0x175 Not
	if(var_7_bool == 0) goto Label_390; // 0x176 JumpB
	var_0_object = 1; // 0x177 TMovB
	func_472(); // 0x179 NEW_2
	var_8_int = 0; var_9_object = Obj(); // 0x17b PushV
	var_9_object = var_6_object; // 0x17c Mov
	TaskCall(0); // 0x17d TaskCall
	func_0(var_10_object, var_8_int, var_9_object); // 0x17e NEW_2
	TaskReturn(); // 0x17f TaskReturn
	var_136_bool = 0; var_137_string = ""; var_138_string = ""; // 0x181 PushV
	var_137_string = "quest_d4_01"; // 0x182 MovS
	var_138_string = "wastedwoman_done"; // 0x183 MovS
	func_615(var_136_bool, var_137_string, var_138_string); // 0x184 NEW_2
	
Label_390:
	return 0; // 0x186 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_0_object = 0; // 0x16b TMovB
	
Label_364:
	var_6_int = 3; // 0x16c PushI
	Sleep(var_6_int); // 0x16d Func
	func_391(); // 0x170 NEW_2
	goto Label_364; // 0x172 Jump
}


func_0(var_0_object, var_8_int, var_9_object)
{
	var_11_object = Obj(); var_12_bool = 0; var_13_int = 0; var_14_bool = 0; var_15_object = Obj(); var_16_bool = 0; var_17_int = 0; var_18_bool = 0; // 0x0 PushV
	var_0_object = var_9_object; // 0x1 TMov
	var_19_bool = 0; var_20_object = Obj(); var_21_float = 0; // 0x2 PushV
	var_20_object = var_9_object; // 0x3 Mov
	var_21_float = 70.0; // 0x4 MovF
	func_482(var_20_object, var_21_float); // 0x5 NEW_2
	var_65_bool = var_19_bool == 0; // 0x7 Not
	if(var_65_bool == 0) goto Label_11; // 0x8 JumpB
	var_8_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_15_object); // 0xb Func
	var_66_int = 0; // 0xd PushV
	func_757(var_66_int); // 0xe NEW_2
	SetNPCName(var_66_int); // 0x10 ObjFunc
	var_67_int = 0; // 0x12 PushV
	func_755(var_67_int); // 0x13 NEW_2
	SetNPCDescription(var_67_int); // 0x15 ObjFunc
	var_68_string = ""; // 0x17 PushV
	func_759(var_68_string); // 0x18 NEW_2
	SetPhoto(var_68_string); // 0x1a ObjFunc
	var_69_string = ""; // 0x1c PushV
	func_761(var_69_string); // 0x1d NEW_2
	SetPhoto2(var_69_string); // 0x1f ObjFunc
	var_70_int = 0; // 0x21 PushV
	func_738(var_70_int); // 0x22 NEW_2
	SetPlayerName(var_70_int); // 0x24 ObjFunc
	var_17_int = -1; // 0x26 MovI
	IsOverrideActive(var_16_bool); // 0x27 Func
	var_78_bool = var_16_bool; // 0x29 Push
	if(var_78_bool == 0) goto Label_45; // 0x2a JumpB
	var_8_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_15_object); // 0x2d Func
	var_79_object = Obj(); var_80_object = Obj(); // 0x2f PushV
	var_79_object = var_9_object; // 0x30 Mov
	var_80_object = var_15_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_81_object, var_82_object, var_83_string, var_84_bool, var_79_object, var_80_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_18_bool); // 0x36 ObjFunc
	
Label_56:
	var_128_bool = var_18_bool == 0; // 0x38 Not
	if(var_128_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_18_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_129_object = Obj(); // 0x3f PushV
	var_129_object = var_9_object; // 0x40 Mov
	func_550(); // 0x41 NEW_2
	StopDialog(var_15_object); // 0x43 Func
	GetReturnValue(var_17_int); // 0x45 ObjFunc
	var_8_int = var_17_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_705(var_32_object, var_33_string, var_34_float)
{
	var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_object = Obj(); var_39_bool = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_object = Obj(); var_43_bool = 0; // 0x2c1 PushV
	GetMainOutdoorScene(var_42_object); // 0x2c2 Func
	var_44_bool = var_42_object == 0; // 0x2c4 NullEq
	if(var_44_bool == 0) goto Label_714; // 0x2c5 JumpB
	var_45_string = "Can't find main outdoor scene"; // 0x2c6 PushS
	Trace(var_45_string); // 0x2c7 Func
	return 8; // 0x2c9 Return
	
Label_714:
	GetLocator(var_33_string, var_43_bool, var_40_cvector, var_41_cvector); // 0x2ca ObjFunc
	var_46_bool = var_43_bool == 0; // 0x2cc Not
	if(var_46_bool == 0) goto Label_724; // 0x2cd JumpB
	var_47_string = "Warning: outdoor scene locator "; // 0x2ce PushS
	var_48_int = var_47_string + var_33_string; // 0x2cf Add
	var_49_string = " doesnt exist"; // 0x2d0 PushS
	var_50_int = var_48_int + var_49_string; // 0x2d1 Add
	Trace(var_50_int); // 0x2d2 Func
	
Label_724:
	GetMap(var_32_object); // 0x2d4 ObjFunc
	var_51_bool = var_32_object == 0; // 0x2d6 NullEq
	if(var_51_bool == 0) goto Label_732; // 0x2d7 JumpB
	var_52_string = "Can't find map"; // 0x2d8 PushS
	Trace(var_52_string); // 0x2d9 Func
	return 8; // 0x2db Return
	
Label_732:
	var_53_float = GetByIndex(var_40_cvector, 0); // 0x2dc PushE
	var_54_float = GetByIndex(var_40_cvector, 2); // 0x2dd PushE
	SetMapParams(var_53_float, var_54_float, var_34_float); // 0x2de ObjFunc
	return 8; // 0x2e0 Return
}


func_132(var_2_object, var_86_string)
{
	var_87_bool = 0; // 0x85 PushV
	func_763(var_87_bool); // 0x86 NEW_2
	var_88_bool = var_87_bool == 0; // 0x88 Not
	if(var_88_bool == 0) goto Label_139; // 0x89 JumpB
	return 0; // 0x8a Return
	
Label_139:
	var_89_bool = var_86_string == var_2_object; // 0x8b Eq
	if(var_89_bool == 0) goto Label_142; // 0x8c JumpB
	return 0; // 0x8d Return
	
Label_142:
	var_90_string = ""; var_91_bool = 0; // 0x8e PushV
	var_90_string = var_86_string; // 0x8f Mov
	var_92_string = ""; // 0x90 PushS
	var_93_bool = var_86_string == var_92_string; // 0x91 Eq
	if(var_93_bool == 0) goto Label_149; // 0x92 JumpB
	var_91_bool = 0; // 0x93 MovB
	goto Label_150; // 0x94 Jump
	
Label_150:
	func_583(var_90_string, var_91_bool); // 0x96 NEW_2
	var_2_object = var_86_string; // 0x98 TMov
	return 0; // 0x99 Return
	
Label_149:
	var_91_bool = 1; // 0x95 MovB
}


func_391()
{
	var_7_int = 0; var_8_int = 0; var_9_int = 0; var_10_int = 0; var_11_bool = 0; var_12_float = 0; var_13_bool = 0; var_14_int = 0; var_15_int = 0; var_16_int = 0; var_17_int = 0; var_18_bool = 0; var_19_float = 0; var_20_bool = 0; // 0x187 PushV
	WaitForAnimEnd(); // 0x188 Func
	var_21_bool = 0; // 0x18a PushV
	func_477(var_21_bool); // 0x18b NEW_2
	var_24_bool = var_21_bool == 0; // 0x18d Not
	if(var_24_bool == 0) goto Label_400; // 0x18e JumpB
	return 14; // 0x18f Return
	
Label_400:
	var_25_int = 0; // 0x190 PushV
	func_639(var_25_int); // 0x191 NEW_2
	var_14_int = var_25_int; // 0x192 Mov
	var_15_int = 0; // 0x194 MovI
	
Label_405:
	var_38_bool = 0; // 0x195 PushV
	var_38_bool = 0; // 0x196 MovB
	var_39_int = 5; // 0x197 PushI
	var_40_bool = var_15_int < var_39_int; // 0x198 LT
	if(var_40_bool == 0) goto Label_415; // 0x199 JumpB
	var_41_bool = 0; // 0x19a PushV
	func_477(var_41_bool); // 0x19b NEW_2
	if(var_41_bool == 0) goto Label_415; // 0x19d JumpB
	var_38_bool = 1; // 0x19e MovB
	
Label_415:
	if(var_38_bool == 0) goto Label_467; // 0x19f JumpB
	var_42_int = 3; // 0x1a0 PushI
	irand(var_16_int, var_42_int); // 0x1a1 Func
	var_43_int = 0; // 0x1a3 PushI
	var_44_bool = var_16_int == var_43_int; // 0x1a4 Eq
	if(var_44_bool == 0) goto Label_439; // 0x1a5 JumpB
	var_45_int = var_14_int; // 0x1a6 Push
	if(var_45_int == 0) goto Label_438; // 0x1a7 JumpB
	irand(var_17_int, var_14_int); // 0x1a8 Func
	var_46_string = "all"; // 0x1aa PushS
	var_47_string = ""; var_48_int = 0; // 0x1ab PushV
	var_48_int = var_17_int; // 0x1ac Mov
	func_632(var_47_string, var_48_int); // 0x1ad NEW_2
	PlayAnimation(var_46_string, var_47_string); // 0x1af Func
	WaitForAnimEnd(var_18_bool); // 0x1b1 Func
	var_49_bool = var_18_bool == 0; // 0x1b3 Not
	if(var_49_bool == 0) goto Label_438; // 0x1b4 JumpB
	goto Label_467; // 0x1b5 Jump
	
Label_467:
	ResetAAS(); // 0x1d3 Func
	return 14; // 0x1d5 Return
	
Label_438:
	goto Label_456; // 0x1b6 Jump
	
Label_456:
	var_50_bool = 0; // 0x1c8 PushV
	func_470(var_50_bool); // 0x1c9 NEW_2
	var_51_bool = var_50_bool == 0; // 0x1cb Not
	if(var_51_bool == 0) goto Label_462; // 0x1cc JumpB
	goto Label_467; // 0x1cd Jump
	
Label_462:
	ResetAAS(); // 0x1ce Func
	var_52_int = 1; // 0x1d0 PushI
	var_15_int = var_15_int + var_52_int; // 0x1d1 Add2
	goto Label_405; // 0x1d2 Jump
	
Label_439:
	var_53_int = 1; // 0x1b7 PushI
	var_54_bool = var_16_int == var_53_int; // 0x1b8 Eq
	if(var_54_bool == 0) goto Label_453; // 0x1b9 JumpB
	var_55_int = 4; // 0x1ba PushI
	rand(var_19_float, var_55_int); // 0x1bb Func
	var_56_int = 1; // 0x1bd PushI
	var_57_int = var_19_float + var_56_int; // 0x1be Add
	Sleep(var_57_int, var_20_bool); // 0x1bf Func
	var_58_bool = var_20_bool == 0; // 0x1c1 Not
	if(var_58_bool == 0) goto Label_452; // 0x1c2 JumpB
	goto Label_467; // 0x1c3 Jump
	
Label_452:
	goto Label_456; // 0x1c4 Jump
	
Label_453:
	var_59_int = var_15_int; // 0x1c5 Push
	if(var_59_int == 0) goto Label_456; // 0x1c6 JumpB
	goto Label_467; // 0x1c7 Jump
}


func_583(var_90_string, var_91_bool)
{
	var_94_bool = 0; var_95_float = 0; var_96_float = 0; var_97_bool = 0; var_98_float = 0; var_99_float = 0; // 0x247 PushV
	lshHasAnimation(var_97_bool, var_90_string); // 0x248 Func
	var_100_bool = var_97_bool; // 0x24a Push
	if(var_100_bool == 0) goto Label_593; // 0x24b JumpB
	lshGetAnimTimes(var_90_string, var_98_float, var_99_float); // 0x24c Func
	lshPlayAnimation(var_98_float, var_99_float, var_91_bool); // 0x24e Func
	goto Label_597; // 0x250 Jump
	
Label_597:
	return 6; // 0x255 Return
	
Label_593:
	var_101_string = "Can't find lsh animation : "; // 0x251 PushS
	var_102_int = var_101_string + var_90_string; // 0x252 Add
	Trace(var_102_int); // 0x253 Func
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_79_object, var_80_object)
{
	var_0_object = var_80_object; // 0x4b TMov
	var_1_object = var_79_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_85_int = 1; // 0x4e PushI
	if(var_85_int == 0) goto Label_102; // 0x4f JumpB
	var_86_string = ""; // 0x50 PushV
	var_86_string = "Neutral"; // 0x51 MovS
	func_132(var_80_object, var_86_string); // 0x52 NEW_2
	var_103_int = 509726; // 0x54 PushI
	SetMessage(var_103_int); // 0x55 TObjFunc
	ClearReplies(); // 0x57 TObjFunc
	var_104_int = 509727; // 0x59 PushI
	var_105_int = 10711; // 0x5a PushI
	var_106_int = 10710; // 0x5b PushI
	AddReply(var_104_int, var_105_int, var_106_int); // 0x5c TObjFunc
	var_107_int = 509742; // 0x5e PushI
	var_108_int = 10728; // 0x5f PushI
	var_109_int = 10727; // 0x60 PushI
	AddReply(var_107_int, var_108_int, var_109_int); // 0x61 TObjFunc
	goto Label_102; // 0x63 Jump
	
Label_102:
	var_110_bool = 0; // 0x66 PushV
	func_763(var_110_bool); // 0x67 NEW_2
	if(var_110_bool == 0) goto Label_117; // 0x69 JumpB
	
Label_106:
	lshWaitForAnimEnd(); // 0x6a Func
	var_111_string = var_3_string; // 0x6c PushT
	if(var_111_string == 0) goto Label_111; // 0x6d JumpB
	goto Label_116; // 0x6e Jump
	
Label_116:
	goto Label_131; // 0x74 Jump
	
Label_131:
	return 0; // 0x83 Return
	
Label_111:
	var_112_string = ""; // 0x6f PushV
	var_112_string = var_2_object; // 0x70 MovT
	func_567(var_112_string); // 0x71 NEW_2
	goto Label_106; // 0x73 Jump
	
Label_117:
	var_123_string = "all"; // 0x75 PushS
	var_124_string = "idle"; // 0x76 PushS
	PlayAnimation(var_123_string, var_124_string); // 0x77 Func
	
Label_121:
	WaitForAnimEnd(); // 0x79 Func
	var_125_string = var_3_string; // 0x7b PushT
	if(var_125_string == 0) goto Label_126; // 0x7c JumpB
	goto Label_131; // 0x7d Jump
	
Label_126:
	var_126_string = "all"; // 0x7e PushS
	var_127_string = "idle"; // 0x7f PushS
	PlayAnimation(var_126_string, var_127_string); // 0x80 Func
	goto Label_121; // 0x82 Jump
}


func_656()
{
	var_14_object = Obj(); var_15_object = Obj(); // 0x290 PushV
	var_16_object = Obj(); // 0x291 PushV
	func_688(var_16_object); // 0x292 NEW_2
	var_15_object = var_16_object; // 0x293 Mov
	var_23_string = "d4q01WastedMale"; // 0x295 PushS
	var_24_string = "pt_d4q01_key2_region"; // 0x296 PushS
	var_25_int = 1; // 0x297 PushI
	var_26_int = 511522; // 0x298 PushI
	var_27_float = 0; // 0x299 PushV
	func_627(var_27_float); // 0x29a NEW_2
	AddMark(var_23_string, var_24_string, var_25_int, var_26_int, var_27_float); // 0x29c ObjFunc
	return 2; // 0x29e Return
}


func_598()
{
	var_9_bool = 0; // 0x256 PushV
	func_763(var_9_bool); // 0x257 NEW_2
	if(var_9_bool == 0) goto Label_604; // 0x259 JumpB
	lshStopSpeech(); // 0x25a Func
	
Label_604:
	return 0; // 0x25c Return
}


func_470(var_50_bool)
{
	var_50_bool = 1; // 0x1d6 MovB
	return 0; // 0x1d7 Return
}


func_472()
{
	StopAnimation(); // 0x1d8 Func
	StopGroup0(); // 0x1da Func
	return 0; // 0x1dc Return
}


func_605(var_46_cvector, var_47_cvector)
{
	var_49_float = 0; var_50_float = 0; // 0x25d PushV
	var_51_int = var_47_cvector | var_47_cvector; // 0x25e Or
	var_50_float = sqrt(var_51_int); // 0x25f Sqrt2
	var_52_float = 0.0; // 0x260 PushF
	var_53_bool = var_50_float < var_52_float; // 0x261 LT
	if(var_53_bool == 0) goto Label_613; // 0x262 JumpB
	var_46_cvector = CVector(0.0, 0.0, 0.0); // 0x263 MovV
	return 2; // 0x264 Return
	
Label_613:
	var_46_cvector = var_47_cvector / var_47_cvector; // 0x265 Div2
	return 2; // 0x266 Return
}


func_477(var_21_bool)
{
	var_22_bool = 0; var_23_bool = 0; // 0x1dd PushV
	IsLoaded(var_23_bool); // 0x1de Func
	var_21_bool = var_23_bool; // 0x1e0 Mov
	return 2; // 0x1e1 Return
}


func_672()
{
	var_32_object = Obj(); var_33_string = ""; var_34_float = 0; // 0x2a1 PushV
	var_35_object = Obj(); // 0x2a2 PushV
	func_688(var_35_object); // 0x2a3 NEW_2
	var_32_object = var_35_object; // 0x2a4 Mov
	var_33_string = "pt_d4q01_key2_region"; // 0x2a6 MovS
	var_34_float = 2; // 0x2a7 MovI
	func_705(var_32_object, var_33_string, var_34_float); // 0x2a8 NEW_2
	var_55_object = Obj(); // 0x2aa PushV
	func_688(var_55_object); // 0x2ab NEW_2
	ShowMap(var_55_object); // 0x2ad ObjFunc
	return 0; // 0x2af Return
}


func_482(var_19_bool, var_21_float)
{
	var_22_float = 0; var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_bool = 0; var_30_bool = 0; var_31_float = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_bool = 0; var_39_bool = 0; // 0x1e2 PushV
	GetPosition(var_32_cvector); // 0x1e3 ObjFunc
	GetEyesHeight(var_31_float); // 0x1e5 ObjFunc
	var_40_float = GetByIndex(var_32_cvector, 1); // 0x1e7 PushE
	var_40_float = var_40_float + var_31_float; // 0x1e8 Add2
	SetByIndex(var_32_cvector, 1) = var_40_float; // 0x1e9 PopE
	GetPosition(var_33_cvector); // 0x1ea Func
	GetEyesHeight(var_31_float); // 0x1ec Func
	var_41_float = GetByIndex(var_33_cvector, 1); // 0x1ee PushE
	var_41_float = var_41_float + var_31_float; // 0x1ef Add2
	SetByIndex(var_33_cvector, 1) = var_41_float; // 0x1f0 PopE
	var_34_cvector = var_32_cvector - var_33_cvector; // 0x1f1 Sub2
	var_42_float = GetByIndex(var_34_cvector, 1); // 0x1f2 PushE
	var_42_float = 0; // 0x1f3 MovI
	SetByIndex(var_34_cvector, 1) = var_42_float; // 0x1f4 PopE
	var_43_int = var_34_cvector | var_34_cvector; // 0x1f5 Or
	var_44_float = sqrt(var_43_int); // 0x1f6 Sqrt
	var_34_cvector = var_34_cvector / var_34_cvector; // 0x1f7 Div2
	var_35_cvector = -var_34_cvector; // 0x1f8 Neg2
	var_45_float = var_34_cvector * var_21_float; // 0x1f9 Mult
	var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); // 0x1fa PushV
	var_48_cvector = CVector(0.0, 1.0, 0.0); // 0x1fb PushVec
	var_47_cvector = var_35_cvector ^ var_48_cvector; // 0x1fc Xor2
	func_605(var_46_cvector, var_47_cvector); // 0x1fd NEW_2
	var_54_int = 25; // 0x1ff PushI
	var_55_float = var_46_cvector * var_54_int; // 0x200 Mult
	var_56_int = var_45_float + var_55_float; // 0x201 Add
	var_57_cvector = CVector(0.0, 10.0, 0.0); // 0x202 PushVec
	var_36_cvector = var_56_int - var_57_cvector; // 0x203 Sub2
	var_37_cvector = var_33_cvector + var_36_cvector; // 0x204 Add2
	IsOverrideActive(var_38_bool); // 0x205 Func
	var_58_bool = var_38_bool; // 0x207 Push
	if(var_58_bool == 0) goto Label_523; // 0x208 JumpB
	var_19_bool = 0; // 0x209 MovB
	return 18; // 0x20a Return
	
Label_523:
	StopWorld(); // 0x20b Func
	CameraTransit(var_37_cvector, var_35_cvector); // 0x20d Func
	var_59_float = GetByIndex(var_36_cvector, 0); // 0x20f PushE
	var_60_float = GetByIndex(var_36_cvector, 2); // 0x210 PushE
	Rotate(var_59_float, var_60_float); // 0x211 Func
	var_61_bool = 0; // 0x213 PushV
	func_763(var_61_bool); // 0x214 NEW_2
	if(var_61_bool == 0) goto Label_536; // 0x216 JumpB
	goto Label_544; // 0x217 Jump
	
Label_544:
	CameraWaitForPlayFinish(); // 0x220 Func
	ResumeWorld(); // 0x222 Func
	var_19_bool = 1; // 0x224 MovB
	return 18; // 0x225 Return
	
Label_536:
	var_62_string = "head"; // 0x218 PushS
	HasAnimationTrack(var_39_bool, var_62_string); // 0x219 Func
	var_63_bool = var_39_bool; // 0x21b Push
	if(var_63_bool == 0) goto Label_544; // 0x21c JumpB
	var_64_string = "head"; // 0x21d PushS
	LookAsyncCamera(var_64_string); // 0x21e Func
}


func_738(var_70_int)
{
	var_71_int = 0; var_72_int = 0; // 0x2e2 PushV
	var_73_string = "branch"; // 0x2e3 PushS
	GetVariable(var_73_string, var_72_int); // 0x2e4 Func
	var_74_int = 0; // 0x2e6 PushI
	var_75_bool = var_72_int == var_74_int; // 0x2e7 Eq
	if(var_75_bool == 0) goto Label_748; // 0x2e8 JumpB
	var_70_int = 1; // 0x2e9 MovI
	return 2; // 0x2ea Return
	
Label_748:
	var_76_int = 1; // 0x2ec PushI
	var_77_bool = var_72_int == var_76_int; // 0x2ed Eq
	if(var_77_bool == 0) goto Label_753; // 0x2ee JumpB
	var_70_int = 2; // 0x2ef MovI
	return 2; // 0x2f0 Return
	
Label_753:
	var_70_int = 3; // 0x2f1 MovI
	return 2; // 0x2f2 Return
}


func_550()
{
	var_130_bool = 0; var_131_bool = 0; // 0x226 PushV
	CameraSwitchToNormal(); // 0x227 Func
	var_132_bool = 0; // 0x229 PushV
	func_763(var_132_bool); // 0x22a NEW_2
	if(var_132_bool == 0) goto Label_558; // 0x22c JumpB
	goto Label_566; // 0x22d Jump
	
Label_566:
	return 2; // 0x236 Return
	
Label_558:
	var_133_string = "head"; // 0x22e PushS
	HasAnimationTrack(var_131_bool, var_133_string); // 0x22f Func
	var_134_bool = var_131_bool; // 0x231 Push
	if(var_134_bool == 0) goto Label_566; // 0x232 JumpB
	var_135_string = "head"; // 0x233 PushS
	UnlookAsync(var_135_string); // 0x234 Func
}


func_615(var_136_bool, var_137_string, var_138_string)
{
	var_139_object = Obj(); var_140_object = Obj(); // 0x267 PushV
	FindActor(var_140_object, var_137_string); // 0x268 Func
	var_141_bool = var_140_object == 0; // 0x26a NullEq
	if(var_141_bool == 0) goto Label_622; // 0x26b JumpB
	var_136_bool = 0; // 0x26c MovB
	return 2; // 0x26d Return
	
Label_622:
	Trigger(var_140_object, var_138_string); // 0x26e Func
	var_136_bool = 1; // 0x270 MovB
	return 2; // 0x271 Return
}


func_759(var_68_string)
{
	var_68_string = "ui/NPC_Citizen2.png"; // 0x2f7 MovS
	return 0; // 0x2f8 Return
}


func_688(var_16_object)
{
	var_17_object = Obj(); var_18_object = Obj(); var_19_object = Obj(); var_20_object = Obj(); // 0x2b0 PushV
	GetMainOutdoorScene(var_19_object); // 0x2b1 Func
	var_21_bool = var_19_object == 0; // 0x2b3 NullEq
	if(var_21_bool == 0) goto Label_699; // 0x2b4 JumpB
	var_22_string = "Can't find main outdoor scene"; // 0x2b5 PushS
	Trace(var_22_string); // 0x2b6 Func
	var_20_object = 0; // 0x2b8 SetNull
	var_16_object = var_20_object; // 0x2b9 Mov
	return 4; // 0x2ba Return
	
Label_699:
	GetMap(var_20_object); // 0x2bb ObjFunc
	var_16_object = var_20_object; // 0x2bd Mov
	return 4; // 0x2be Return
}


func_755(var_67_int)
{
	var_67_int = 515555; // 0x2f3 MovI
	return 0; // 0x2f4 Return
}


func_627(var_27_float)
{
	var_28_float = 0; var_29_float = 0; // 0x273 PushV
	GetGameTime(var_29_float); // 0x274 Func
	var_27_float = var_29_float; // 0x276 Mov
	return 2; // 0x277 Return
}


func_757(var_66_int)
{
	var_66_int = 503340; // 0x2f5 MovI
	return 0; // 0x2f6 Return
}


func_567(var_112_string)
{
	var_113_bool = 0; var_114_float = 0; var_115_float = 0; var_116_bool = 0; var_117_float = 0; var_118_float = 0; // 0x237 PushV
	lshHasAnimation(var_116_bool, var_112_string); // 0x238 Func
	var_119_bool = var_116_bool; // 0x23a Push
	if(var_119_bool == 0) goto Label_578; // 0x23b JumpB
	lshGetAnimTimes(var_112_string, var_117_float, var_118_float); // 0x23c Func
	var_120_bool = 0; // 0x23e PushB
	lshPlayAnimation(var_117_float, var_118_float, var_120_bool); // 0x23f Func
	goto Label_582; // 0x241 Jump
	
Label_582:
	return 6; // 0x246 Return
	
Label_578:
	var_121_string = "Can't find lsh animation : "; // 0x242 PushS
	var_122_int = var_121_string + var_112_string; // 0x243 Add
	Trace(var_122_int); // 0x244 Func
}


func_632(var_31_string, var_32_int)
{
	var_33_string = ""; var_34_string = ""; // 0x278 PushV
	var_34_string = "idle"; // 0x279 MovS
	var_35_int = var_32_int; // 0x27a Push
	if(var_35_int == 0) goto Label_637; // 0x27b JumpB
	var_34_string = var_34_string + var_32_int; // 0x27c Add2
	
Label_637:
	var_31_string = var_34_string; // 0x27d Mov
	return 2; // 0x27e Return
}


func_761(var_69_string)
{
	var_69_string = "ui/NPC_Citizen2_b.png"; // 0x2f9 MovS
	return 0; // 0x2fa Return
}


func_763(var_61_bool)
{
	var_61_bool = 0; // 0x2fb MovB
	return 0; // 0x2fc Return
}


func_639(var_25_int)
{
	var_26_int = 0; var_27_bool = 0; var_28_int = 0; var_29_bool = 0; // 0x27f PushV
	var_28_int = 0; // 0x280 MovI
	
Label_641:
	var_30_string = "all"; // 0x281 PushS
	var_31_string = ""; var_32_int = 0; // 0x282 PushV
	var_32_int = var_28_int; // 0x283 Mov
	func_632(var_31_string, var_32_int); // 0x284 NEW_2
	HasAnimation(var_29_bool, var_30_string, var_31_string); // 0x286 Func
	var_36_bool = var_29_bool == 0; // 0x288 Not
	if(var_36_bool == 0) goto Label_651; // 0x289 JumpB
	goto Label_654; // 0x28a Jump
	
Label_654:
	var_25_int = var_28_int; // 0x28e Mov
	return 4; // 0x28f Return
	
Label_651:
	var_37_int = 1; // 0x28b PushI
	var_28_int = var_28_int + var_37_int; // 0x28c Add2
	goto Label_641; // 0x28d Jump
}


