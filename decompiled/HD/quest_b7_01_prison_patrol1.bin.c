task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	var_8_int = 1; // 0xaa PushI
	if(var_8_int == 0) goto Label_333; // 0xab JumpB
	func_626(); // 0xad NEW_2
	var_10_int = 22203; // 0xaf PushI
	var_11_bool = var_7_bool == var_10_int; // 0xb0 Eq
	if(var_11_bool == 0) goto Label_188; // 0xb1 JumpB
	var_12_object = Obj(); var_13_object = Obj(); // 0xb2 PushV
	var_12_object = var_1_object; // 0xb3 MovT
	var_13_object = var_0_object; // 0xb4 MovT
	func_695(); // 0xb5 NEW_2
	var_61_object = Obj(); var_62_object = Obj(); // 0xb7 PushV
	var_61_object = var_1_object; // 0xb8 MovT
	var_62_object = var_0_object; // 0xb9 MovT
	func_723(); // 0xba NEW_2
	
Label_188:
	var_87_int = 22202; // 0xbc PushI
	var_88_bool = var_6_int == var_87_int; // 0xbd Eq
	if(var_88_bool == 0) goto Label_226; // 0xbe JumpB
	var_89_bool = 0; var_90_object = Obj(); // 0xbf PushV
	var_90_object = var_1_object; // 0xc0 MovT
	func_739(var_90_object); // 0xc1 NEW_2
	if(var_89_bool == 0) goto Label_211; // 0xc3 JumpB
	var_97_string = ""; // 0xc4 PushV
	var_97_string = "Neutral"; // 0xc5 MovS
	func_147(var_7_bool, var_97_string); // 0xc6 NEW_2
	var_114_int = 520989; // 0xc8 PushI
	SetMessage(var_114_int); // 0xc9 TObjFunc
	ClearReplies(); // 0xcb TObjFunc
	var_115_int = 528466; // 0xcd PushI
	var_116_int = 29854; // 0xce PushI
	var_117_int = 29853; // 0xcf PushI
	AddReply(var_115_int, var_116_int, var_117_int); // 0xd0 TObjFunc
	return 0; // 0xd2 Return
	
Label_211:
	var_118_string = ""; // 0xd3 PushV
	var_118_string = "Neutral"; // 0xd4 MovS
	func_147(var_7_bool, var_118_string); // 0xd5 NEW_2
	var_119_int = 528472; // 0xd7 PushI
	SetMessage(var_119_int); // 0xd8 TObjFunc
	ClearReplies(); // 0xda TObjFunc
	var_120_int = 520992; // 0xdc PushI
	var_121_int = -1; // 0xdd PushI
	var_122_int = 22205; // 0xde PushI
	AddReply(var_120_int, var_121_int, var_122_int); // 0xdf TObjFunc
	return 0; // 0xe1 Return
	
Label_226:
	var_123_int = 29854; // 0xe2 PushI
	var_124_bool = var_6_int == var_123_int; // 0xe3 Eq
	if(var_124_bool == 0) goto Label_244; // 0xe4 JumpB
	var_125_string = ""; // 0xe5 PushV
	var_125_string = "Neutral"; // 0xe6 MovS
	func_147(var_7_bool, var_125_string); // 0xe7 NEW_2
	var_126_int = 528467; // 0xe9 PushI
	SetMessage(var_126_int); // 0xea TObjFunc
	ClearReplies(); // 0xec TObjFunc
	var_127_int = 528468; // 0xee PushI
	var_128_int = 29856; // 0xef PushI
	var_129_int = 29855; // 0xf0 PushI
	AddReply(var_127_int, var_128_int, var_129_int); // 0xf1 TObjFunc
	return 0; // 0xf3 Return
	
Label_244:
	var_130_int = 29856; // 0xf4 PushI
	var_131_bool = var_6_int == var_130_int; // 0xf5 Eq
	if(var_131_bool == 0) goto Label_262; // 0xf6 JumpB
	var_132_string = ""; // 0xf7 PushV
	var_132_string = "Neutral"; // 0xf8 MovS
	func_147(var_7_bool, var_132_string); // 0xf9 NEW_2
	var_133_int = 528469; // 0xfb PushI
	SetMessage(var_133_int); // 0xfc TObjFunc
	ClearReplies(); // 0xfe TObjFunc
	var_134_int = 528470; // 0x100 PushI
	var_135_int = 29858; // 0x101 PushI
	var_136_int = 29857; // 0x102 PushI
	AddReply(var_134_int, var_135_int, var_136_int); // 0x103 TObjFunc
	return 0; // 0x105 Return
	
Label_262:
	var_137_int = 29858; // 0x106 PushI
	var_138_bool = var_6_int == var_137_int; // 0x107 Eq
	if(var_138_bool == 0) goto Label_285; // 0x108 JumpB
	var_139_string = ""; // 0x109 PushV
	var_139_string = "Neutral"; // 0x10a MovS
	func_147(var_7_bool, var_139_string); // 0x10b NEW_2
	var_140_int = 528471; // 0x10d PushI
	SetMessage(var_140_int); // 0x10e TObjFunc
	ClearReplies(); // 0x110 TObjFunc
	var_141_int = 528473; // 0x112 PushI
	var_142_int = 29861; // 0x113 PushI
	var_143_int = 29860; // 0x114 PushI
	AddReply(var_141_int, var_142_int, var_143_int); // 0x115 TObjFunc
	var_144_int = 528477; // 0x117 PushI
	var_145_int = 29863; // 0x118 PushI
	var_146_int = 29864; // 0x119 PushI
	AddReply(var_144_int, var_145_int, var_146_int); // 0x11a TObjFunc
	return 0; // 0x11c Return
	
Label_285:
	var_147_int = 29861; // 0x11d PushI
	var_148_bool = var_6_int == var_147_int; // 0x11e Eq
	if(var_148_bool == 0) goto Label_303; // 0x11f JumpB
	var_149_string = ""; // 0x120 PushV
	var_149_string = "Neutral"; // 0x121 MovS
	func_147(var_7_bool, var_149_string); // 0x122 NEW_2
	var_150_int = 528474; // 0x124 PushI
	SetMessage(var_150_int); // 0x125 TObjFunc
	ClearReplies(); // 0x127 TObjFunc
	var_151_int = 528475; // 0x129 PushI
	var_152_int = 29863; // 0x12a PushI
	var_153_int = 29862; // 0x12b PushI
	AddReply(var_151_int, var_152_int, var_153_int); // 0x12c TObjFunc
	return 0; // 0x12e Return
	
Label_303:
	var_154_int = 29863; // 0x12f PushI
	var_155_bool = var_6_int == var_154_int; // 0x130 Eq
	if(var_155_bool == 0) goto Label_321; // 0x131 JumpB
	var_156_string = ""; // 0x132 PushV
	var_156_string = "Neutral"; // 0x133 MovS
	func_147(var_7_bool, var_156_string); // 0x134 NEW_2
	var_157_int = 528476; // 0x136 PushI
	SetMessage(var_157_int); // 0x137 TObjFunc
	ClearReplies(); // 0x139 TObjFunc
	var_158_int = 520990; // 0x13b PushI
	var_159_int = -1; // 0x13c PushI
	var_160_int = 22203; // 0x13d PushI
	AddReply(var_158_int, var_159_int, var_160_int); // 0x13e TObjFunc
	return 0; // 0x140 Return
	
Label_321:
	var_3_string = 1; // 0x141 TMovB
	var_161_bool = 0; // 0x142 PushV
	func_880(var_161_bool); // 0x143 NEW_2
	if(var_161_bool == 0) goto Label_329; // 0x145 JumpB
	lshStopAnimation(); // 0x146 Func
	goto Label_331; // 0x148 Jump
	
Label_331:
	return 0; // 0x14b Return
	
Label_329:
	StopAnimation(); // 0x149 Func
	
Label_333:
	return 0; // 0x14d Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object)
{
	func_498(); // 0x150 NEW_2
	var_7_int = 0; var_8_object = Obj(); // 0x152 PushV
	var_8_object = var_6_object; // 0x153 Mov
	TaskCall(0); // 0x154 TaskCall
	func_0(var_9_object, var_7_int, var_8_object); // 0x155 NEW_2
	TaskReturn(); // 0x156 TaskReturn
	return 0; // 0x158 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string)
{
	var_7_string = "cleanup"; // 0x183 PushS
	var_8_bool = var_6_string == var_7_string; // 0x184 Eq
	if(var_8_bool == 0) goto Label_393; // 0x185 JumpB
	func_366(var_6_string); // 0x187 NEW_2
	
Label_393:
	return 0; // 0x189 Return
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	StopGroup0(); // 0x18a Func
	sync(); // 0x18c Func
	return 0; // 0x18e Return
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_bool = 0; // 0x18f PushV
	var_6_bool = 0; // 0x190 MovB
	var_7_object = var_0_object; // 0x191 PushT
	if(var_7_object == 0) goto Label_408; // 0x192 JumpB
	var_8_bool = 0; // 0x193 PushV
	func_415(var_8_bool); // 0x194 NEW_2
	if(var_8_bool == 0) goto Label_408; // 0x196 JumpB
	var_6_bool = 1; // 0x197 MovB
	
Label_408:
	if(var_6_bool == 0) goto Label_414; // 0x198 JumpB
	var_9_object = Obj(); // 0x199 PushV
	func_633(var_9_object); // 0x19a NEW_2
	RemoveActor(var_9_object); // 0x19c Func
	
Label_414:
	return 0; // 0x19e Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_float = 0; var_7_float = 0; // 0x159 PushV
	
Label_346:
	var_8_bool = 0; // 0x15a PushV
	func_503(var_8_bool); // 0x15b NEW_2
	var_11_bool = var_8_bool == 0; // 0x15d Not
	if(var_11_bool == 0) goto Label_354; // 0x15e JumpB
	Hold(); // 0x15f Func
	goto Label_346; // 0x161 Jump
	
Label_354:
	var_12_int = 3; // 0x162 PushI
	rand(var_7_float, var_12_int); // 0x163 Func
	var_13_int = 3; // 0x165 PushI
	var_14_int = var_7_float + var_13_int; // 0x166 Add
	Sleep(var_14_int); // 0x167 Func
	func_417(); // 0x16a NEW_2
	goto Label_346; // 0x16c Jump
}


func_0(var_0_object, var_7_int, var_8_object)
{
	var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_bool = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0; // 0x0 PushV
	var_0_object = var_8_object; // 0x1 TMov
	var_18_bool = 0; var_19_object = Obj(); var_20_float = 0; // 0x2 PushV
	var_19_object = var_8_object; // 0x3 Mov
	var_20_float = 70.0; // 0x4 MovF
	func_508(var_19_object, var_20_float); // 0x5 NEW_2
	var_65_bool = var_18_bool == 0; // 0x7 Not
	if(var_65_bool == 0) goto Label_11; // 0x8 JumpB
	var_7_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_14_object); // 0xb Func
	var_66_int = 0; // 0xd PushV
	func_874(var_66_int); // 0xe NEW_2
	SetNPCName(var_66_int); // 0x10 ObjFunc
	var_67_int = 0; // 0x12 PushV
	func_872(var_67_int); // 0x13 NEW_2
	SetNPCDescription(var_67_int); // 0x15 ObjFunc
	var_68_string = ""; // 0x17 PushV
	func_876(var_68_string); // 0x18 NEW_2
	SetPhoto(var_68_string); // 0x1a ObjFunc
	var_69_string = ""; // 0x1c PushV
	func_878(var_69_string); // 0x1d NEW_2
	SetPhoto2(var_69_string); // 0x1f ObjFunc
	var_70_int = 0; // 0x21 PushV
	func_855(var_70_int); // 0x22 NEW_2
	SetPlayerName(var_70_int); // 0x24 ObjFunc
	var_16_int = -1; // 0x26 MovI
	IsOverrideActive(var_15_bool); // 0x27 Func
	var_78_bool = var_15_bool; // 0x29 Push
	if(var_78_bool == 0) goto Label_45; // 0x2a JumpB
	var_7_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_14_object); // 0x2d Func
	var_79_object = Obj(); var_80_object = Obj(); // 0x2f PushV
	var_79_object = var_8_object; // 0x30 Mov
	var_80_object = var_14_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_81_object, var_82_object, var_83_string, var_84_bool, var_79_object, var_80_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_17_bool); // 0x36 ObjFunc
	
Label_56:
	var_138_bool = var_17_bool == 0; // 0x38 Not
	if(var_138_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_17_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_139_object = Obj(); // 0x3f PushV
	var_139_object = var_8_object; // 0x40 Mov
	func_577(); // 0x41 NEW_2
	StopDialog(var_14_object); // 0x43 Func
	GetReturnValue(var_16_int); // 0x45 ObjFunc
	var_7_int = var_16_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_649(var_88_int, var_89_string)
{
	var_90_int = 0; var_91_int = 0; // 0x289 PushV
	GetVariable(var_89_string, var_91_int); // 0x28a Func
	var_88_int = var_91_int; // 0x28c Mov
	return 2; // 0x28d Return
}


func_777(var_37_bool, var_38_object, var_39_int)
{
	var_40_object = Obj(); var_41_object = Obj(); var_42_int = 0; var_43_object = Obj(); var_44_object = Obj(); var_45_int = 0; // 0x309 PushV
	var_46_object = Obj(); // 0x30a PushV
	func_764(var_46_object); // 0x30b NEW_2
	var_43_object = var_46_object; // 0x30c Mov
	Find(var_39_int, var_44_object); // 0x30e ObjFunc
	var_51_bool = var_44_object == 0; // 0x310 Not
	if(var_51_bool == 0) goto Label_792; // 0x311 JumpB
	var_52_string = "Can't find diary parent with id: "; // 0x312 PushS
	var_53_int = var_52_string + var_39_int; // 0x313 Add
	Trace(var_53_int); // 0x314 Func
	var_37_bool = 0; // 0x316 MovB
	return 6; // 0x317 Return
	
Label_792:
	AddChild(var_38_object); // 0x318 ObjFunc
	var_54_int = 7; // 0x31a PushI
	SendWorldWndMessage(var_54_int); // 0x31b Func
	GetCategory(var_45_int); // 0x31d ObjFunc
	SetDiarySection(var_45_int); // 0x31f Func
	var_37_bool = 0; // 0x321 MovB
	return 6; // 0x322 Return
}


func_654(var_55_bool, var_56_string, var_57_string)
{
	var_58_object = Obj(); var_59_object = Obj(); // 0x28e PushV
	FindActor(var_59_object, var_56_string); // 0x28f Func
	var_60_bool = var_59_object == 0; // 0x291 NullEq
	if(var_60_bool == 0) goto Label_661; // 0x292 JumpB
	var_55_bool = 0; // 0x293 MovB
	return 2; // 0x294 Return
	
Label_661:
	Trigger(var_59_object, var_57_string); // 0x295 Func
	var_55_bool = 1; // 0x297 MovB
	return 2; // 0x298 Return
}


func_147(var_2_object, var_94_string)
{
	var_95_bool = 0; // 0x94 PushV
	func_880(var_95_bool); // 0x95 NEW_2
	var_96_bool = var_95_bool == 0; // 0x97 Not
	if(var_96_bool == 0) goto Label_154; // 0x98 JumpB
	return 0; // 0x99 Return
	
Label_154:
	var_97_bool = var_94_string == var_2_object; // 0x9a Eq
	if(var_97_bool == 0) goto Label_157; // 0x9b JumpB
	return 0; // 0x9c Return
	
Label_157:
	var_98_string = ""; var_99_bool = 0; // 0x9d PushV
	var_98_string = var_94_string; // 0x9e Mov
	var_100_string = ""; // 0x9f PushS
	var_101_bool = var_94_string == var_100_string; // 0xa0 Eq
	if(var_101_bool == 0) goto Label_164; // 0xa1 JumpB
	var_99_bool = 0; // 0xa2 MovB
	goto Label_165; // 0xa3 Jump
	
Label_165:
	func_611(var_98_string, var_99_bool); // 0xa5 NEW_2
	var_2_object = var_94_string; // 0xa7 TMov
	return 0; // 0xa8 Return
	
Label_164:
	var_99_bool = 1; // 0xa4 MovB
}


func_666(var_29_float)
{
	var_30_float = 0; var_31_float = 0; // 0x29a PushV
	GetGameTime(var_31_float); // 0x29b Func
	var_29_float = var_31_float; // 0x29d Mov
	return 2; // 0x29e Return
}


func_671(var_37_string, var_38_int)
{
	var_39_string = ""; var_40_string = ""; // 0x29f PushV
	var_40_string = "idle"; // 0x2a0 MovS
	var_41_int = var_38_int; // 0x2a1 Push
	if(var_41_int == 0) goto Label_676; // 0x2a2 JumpB
	var_40_string = var_40_string + var_38_int; // 0x2a3 Add2
	
Label_676:
	var_37_string = var_40_string; // 0x2a4 Mov
	return 2; // 0x2a5 Return
}


func_415(var_8_bool)
{
	var_8_bool = 1; // 0x19f MovB
	return 0; // 0x1a0 Return
}


func_417()
{
	var_15_int = 0; var_16_int = 0; var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_float = 0; var_21_bool = 0; var_22_int = 0; var_23_int = 0; var_24_int = 0; var_25_int = 0; var_26_bool = 0; var_27_float = 0; var_28_bool = 0; // 0x1a1 PushV
	WaitForAnimEnd(); // 0x1a2 Func
	var_29_bool = 0; // 0x1a4 PushV
	func_503(var_29_bool); // 0x1a5 NEW_2
	var_30_bool = var_29_bool == 0; // 0x1a7 Not
	if(var_30_bool == 0) goto Label_426; // 0x1a8 JumpB
	return 14; // 0x1a9 Return
	
Label_426:
	var_31_int = 0; // 0x1aa PushV
	func_678(var_31_int); // 0x1ab NEW_2
	var_22_int = var_31_int; // 0x1ac Mov
	var_23_int = 0; // 0x1ae MovI
	
Label_431:
	var_44_bool = 0; // 0x1af PushV
	var_44_bool = 0; // 0x1b0 MovB
	var_45_int = 5; // 0x1b1 PushI
	var_46_bool = var_23_int < var_45_int; // 0x1b2 LT
	if(var_46_bool == 0) goto Label_441; // 0x1b3 JumpB
	var_47_bool = 0; // 0x1b4 PushV
	func_503(var_47_bool); // 0x1b5 NEW_2
	if(var_47_bool == 0) goto Label_441; // 0x1b7 JumpB
	var_44_bool = 1; // 0x1b8 MovB
	
Label_441:
	if(var_44_bool == 0) goto Label_493; // 0x1b9 JumpB
	var_48_int = 3; // 0x1ba PushI
	irand(var_24_int, var_48_int); // 0x1bb Func
	var_49_int = 0; // 0x1bd PushI
	var_50_bool = var_24_int == var_49_int; // 0x1be Eq
	if(var_50_bool == 0) goto Label_465; // 0x1bf JumpB
	var_51_int = var_22_int; // 0x1c0 Push
	if(var_51_int == 0) goto Label_464; // 0x1c1 JumpB
	irand(var_25_int, var_22_int); // 0x1c2 Func
	var_52_string = "all"; // 0x1c4 PushS
	var_53_string = ""; var_54_int = 0; // 0x1c5 PushV
	var_54_int = var_25_int; // 0x1c6 Mov
	func_671(var_53_string, var_54_int); // 0x1c7 NEW_2
	PlayAnimation(var_52_string, var_53_string); // 0x1c9 Func
	WaitForAnimEnd(var_26_bool); // 0x1cb Func
	var_55_bool = var_26_bool == 0; // 0x1cd Not
	if(var_55_bool == 0) goto Label_464; // 0x1ce JumpB
	goto Label_493; // 0x1cf Jump
	
Label_493:
	ResetAAS(); // 0x1ed Func
	return 14; // 0x1ef Return
	
Label_464:
	goto Label_482; // 0x1d0 Jump
	
Label_482:
	var_56_bool = 0; // 0x1e2 PushV
	func_496(var_56_bool); // 0x1e3 NEW_2
	var_57_bool = var_56_bool == 0; // 0x1e5 Not
	if(var_57_bool == 0) goto Label_488; // 0x1e6 JumpB
	goto Label_493; // 0x1e7 Jump
	
Label_488:
	ResetAAS(); // 0x1e8 Func
	var_58_int = 1; // 0x1ea PushI
	var_23_int = var_23_int + var_58_int; // 0x1eb Add2
	goto Label_431; // 0x1ec Jump
	
Label_465:
	var_59_int = 1; // 0x1d1 PushI
	var_60_bool = var_24_int == var_59_int; // 0x1d2 Eq
	if(var_60_bool == 0) goto Label_479; // 0x1d3 JumpB
	var_61_int = 4; // 0x1d4 PushI
	rand(var_27_float, var_61_int); // 0x1d5 Func
	var_62_int = 1; // 0x1d7 PushI
	var_63_int = var_27_float + var_62_int; // 0x1d8 Add
	Sleep(var_63_int, var_28_bool); // 0x1d9 Func
	var_64_bool = var_28_bool == 0; // 0x1db Not
	if(var_64_bool == 0) goto Label_478; // 0x1dc JumpB
	goto Label_493; // 0x1dd Jump
	
Label_478:
	goto Label_482; // 0x1de Jump
	
Label_479:
	var_65_int = var_23_int; // 0x1df Push
	if(var_65_int == 0) goto Label_482; // 0x1e0 JumpB
	goto Label_493; // 0x1e1 Jump
}


func_805(var_18_object)
{
	var_19_object = Obj(); var_20_object = Obj(); var_21_object = Obj(); var_22_object = Obj(); // 0x325 PushV
	GetMainOutdoorScene(var_21_object); // 0x326 Func
	var_23_bool = var_21_object == 0; // 0x328 NullEq
	if(var_23_bool == 0) goto Label_816; // 0x329 JumpB
	var_24_string = "Can't find main outdoor scene"; // 0x32a PushS
	Trace(var_24_string); // 0x32b Func
	var_22_object = 0; // 0x32d SetNull
	var_18_object = var_22_object; // 0x32e Mov
	return 4; // 0x32f Return
	
Label_816:
	GetMap(var_22_object); // 0x330 ObjFunc
	var_18_object = var_22_object; // 0x332 Mov
	return 4; // 0x333 Return
}


func_678(var_31_int)
{
	var_32_int = 0; var_33_bool = 0; var_34_int = 0; var_35_bool = 0; // 0x2a6 PushV
	var_34_int = 0; // 0x2a7 MovI
	
Label_680:
	var_36_string = "all"; // 0x2a8 PushS
	var_37_string = ""; var_38_int = 0; // 0x2a9 PushV
	var_38_int = var_34_int; // 0x2aa Mov
	func_671(var_37_string, var_38_int); // 0x2ab NEW_2
	HasAnimation(var_35_bool, var_36_string, var_37_string); // 0x2ad Func
	var_42_bool = var_35_bool == 0; // 0x2af Not
	if(var_42_bool == 0) goto Label_690; // 0x2b0 JumpB
	goto Label_693; // 0x2b1 Jump
	
Label_693:
	var_31_int = var_34_int; // 0x2b5 Mov
	return 4; // 0x2b6 Return
	
Label_690:
	var_43_int = 1; // 0x2b2 PushI
	var_34_int = var_34_int + var_43_int; // 0x2b3 Add2
	goto Label_680; // 0x2b4 Jump
}


func_822(var_63_object, var_64_string, var_65_float)
{
	var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_object = Obj(); var_70_bool = 0; var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_object = Obj(); var_74_bool = 0; // 0x336 PushV
	GetMainOutdoorScene(var_73_object); // 0x337 Func
	var_75_bool = var_73_object == 0; // 0x339 NullEq
	if(var_75_bool == 0) goto Label_831; // 0x33a JumpB
	var_76_string = "Can't find main outdoor scene"; // 0x33b PushS
	Trace(var_76_string); // 0x33c Func
	return 8; // 0x33e Return
	
Label_831:
	GetLocator(var_64_string, var_74_bool, var_71_cvector, var_72_cvector); // 0x33f ObjFunc
	var_77_bool = var_74_bool == 0; // 0x341 Not
	if(var_77_bool == 0) goto Label_841; // 0x342 JumpB
	var_78_string = "Warning: outdoor scene locator "; // 0x343 PushS
	var_79_int = var_78_string + var_64_string; // 0x344 Add
	var_80_string = " doesnt exist"; // 0x345 PushS
	var_81_int = var_79_int + var_80_string; // 0x346 Add
	Trace(var_81_int); // 0x347 Func
	
Label_841:
	GetMap(var_63_object); // 0x349 ObjFunc
	var_82_bool = var_63_object == 0; // 0x34b NullEq
	if(var_82_bool == 0) goto Label_849; // 0x34c JumpB
	var_83_string = "Can't find map"; // 0x34d PushS
	Trace(var_83_string); // 0x34e Func
	return 8; // 0x350 Return
	
Label_849:
	var_84_float = GetByIndex(var_71_cvector, 0); // 0x351 PushE
	var_85_float = GetByIndex(var_71_cvector, 2); // 0x352 PushE
	SetMapParams(var_84_float, var_85_float, var_65_float); // 0x353 ObjFunc
	return 8; // 0x355 Return
}


func_695()
{
	var_14_object = Obj(); var_15_object = Obj(); // 0x2b7 PushV
	var_16_string = "b7q01"; // 0x2b8 PushS
	var_17_int = 4; // 0x2b9 PushI
	SetVariable(var_16_string, var_17_int); // 0x2ba Func
	var_18_object = Obj(); // 0x2bc PushV
	func_805(var_18_object); // 0x2bd NEW_2
	var_15_object = var_18_object; // 0x2be Mov
	var_25_string = "b7q01PatrolGotoGorbun"; // 0x2c0 PushS
	var_26_string = "pt_map_gorbun"; // 0x2c1 PushS
	var_27_int = 1; // 0x2c2 PushI
	var_28_int = 521025; // 0x2c3 PushI
	var_29_float = 0; // 0x2c4 PushV
	func_666(var_29_float); // 0x2c5 NEW_2
	AddMark(var_25_string, var_26_string, var_27_int, var_28_int, var_29_float); // 0x2c7 ObjFunc
	func_751(); // 0x2ca NEW_2
	var_55_bool = 0; var_56_string = ""; var_57_string = ""; // 0x2cc PushV
	var_56_string = "quest_b7_01"; // 0x2cd MovS
	var_57_string = "init_gorbun_house"; // 0x2ce MovS
	func_654(var_55_bool, var_56_string, var_57_string); // 0x2cf NEW_2
	return 2; // 0x2d1 Return
}


func_577()
{
	var_140_bool = 0; var_141_bool = 0; // 0x241 PushV
	var_142_bool = 1; // 0x242 PushB
	CameraSwitchToNormal(var_142_bool); // 0x243 Func
	var_143_bool = 0; // 0x245 PushV
	func_880(var_143_bool); // 0x246 NEW_2
	if(var_143_bool == 0) goto Label_586; // 0x248 JumpB
	goto Label_594; // 0x249 Jump
	
Label_594:
	return 2; // 0x252 Return
	
Label_586:
	var_144_string = "head"; // 0x24a PushS
	HasAnimationTrack(var_141_bool, var_144_string); // 0x24b Func
	var_145_bool = var_141_bool; // 0x24d Push
	if(var_145_bool == 0) goto Label_594; // 0x24e JumpB
	var_146_string = "head"; // 0x24f PushS
	UnlookAsync(var_146_string); // 0x250 Func
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_79_object, var_80_object)
{
	var_0_object = var_80_object; // 0x4b TMov
	var_1_object = var_79_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_85_int = 1; // 0x4e PushI
	if(var_85_int == 0) goto Label_117; // 0x4f JumpB
	var_86_bool = 0; var_87_object = Obj(); // 0x50 PushV
	var_87_object = var_1_object; // 0x51 MovT
	func_739(var_87_object); // 0x52 NEW_2
	if(var_86_bool == 0) goto Label_100; // 0x54 JumpB
	var_94_string = ""; // 0x55 PushV
	var_94_string = "Neutral"; // 0x56 MovS
	func_147(var_80_object, var_94_string); // 0x57 NEW_2
	var_111_int = 520989; // 0x59 PushI
	SetMessage(var_111_int); // 0x5a TObjFunc
	ClearReplies(); // 0x5c TObjFunc
	var_112_int = 528466; // 0x5e PushI
	var_113_int = 29854; // 0x5f PushI
	var_114_int = 29853; // 0x60 PushI
	AddReply(var_112_int, var_113_int, var_114_int); // 0x61 TObjFunc
	goto Label_117; // 0x63 Jump
	
Label_117:
	var_115_bool = 0; // 0x75 PushV
	func_880(var_115_bool); // 0x76 NEW_2
	if(var_115_bool == 0) goto Label_132; // 0x78 JumpB
	
Label_121:
	lshWaitForAnimEnd(); // 0x79 Func
	var_116_string = var_3_string; // 0x7b PushT
	if(var_116_string == 0) goto Label_126; // 0x7c JumpB
	goto Label_131; // 0x7d Jump
	
Label_131:
	goto Label_146; // 0x83 Jump
	
Label_146:
	return 0; // 0x92 Return
	
Label_126:
	var_117_string = ""; // 0x7e PushV
	var_117_string = var_2_object; // 0x7f MovT
	func_595(var_117_string); // 0x80 NEW_2
	goto Label_121; // 0x82 Jump
	
Label_132:
	var_128_string = "all"; // 0x84 PushS
	var_129_string = "idle"; // 0x85 PushS
	PlayAnimation(var_128_string, var_129_string); // 0x86 Func
	
Label_136:
	WaitForAnimEnd(); // 0x88 Func
	var_130_string = var_3_string; // 0x8a PushT
	if(var_130_string == 0) goto Label_141; // 0x8b JumpB
	goto Label_146; // 0x8c Jump
	
Label_141:
	var_131_string = "all"; // 0x8d PushS
	var_132_string = "idle"; // 0x8e PushS
	PlayAnimation(var_131_string, var_132_string); // 0x8f Func
	goto Label_136; // 0x91 Jump
	
Label_100:
	var_133_string = ""; // 0x64 PushV
	var_133_string = "Neutral"; // 0x65 MovS
	func_147(var_80_object, var_133_string); // 0x66 NEW_2
	var_134_int = 528472; // 0x68 PushI
	SetMessage(var_134_int); // 0x69 TObjFunc
	ClearReplies(); // 0x6b TObjFunc
	var_135_int = 520992; // 0x6d PushI
	var_136_int = -1; // 0x6e PushI
	var_137_int = 22205; // 0x6f PushI
	AddReply(var_135_int, var_136_int, var_137_int); // 0x70 TObjFunc
	goto Label_117; // 0x72 Jump
}


func_595(var_117_string)
{
	var_118_bool = 0; var_119_float = 0; var_120_float = 0; var_121_bool = 0; var_122_float = 0; var_123_float = 0; // 0x253 PushV
	lshHasAnimation(var_121_bool, var_117_string); // 0x254 Func
	var_124_bool = var_121_bool; // 0x256 Push
	if(var_124_bool == 0) goto Label_606; // 0x257 JumpB
	lshGetAnimTimes(var_117_string, var_122_float, var_123_float); // 0x258 Func
	var_125_bool = 0; // 0x25a PushB
	lshPlayAnimation(var_122_float, var_123_float, var_125_bool); // 0x25b Func
	goto Label_610; // 0x25d Jump
	
Label_610:
	return 6; // 0x262 Return
	
Label_606:
	var_126_string = "Can't find lsh animation : "; // 0x25e PushS
	var_127_int = var_126_string + var_117_string; // 0x25f Add
	Trace(var_127_int); // 0x260 Func
}


func_723()
{
	var_63_object = Obj(); var_64_string = ""; var_65_float = 0; // 0x2d4 PushV
	var_66_object = Obj(); // 0x2d5 PushV
	func_805(var_66_object); // 0x2d6 NEW_2
	var_63_object = var_66_object; // 0x2d7 Mov
	var_64_string = "pt_map_gorbun"; // 0x2d9 MovS
	var_65_float = 2; // 0x2da MovI
	func_822(var_63_object, var_64_string, var_65_float); // 0x2db NEW_2
	var_86_object = Obj(); // 0x2dd PushV
	func_805(var_86_object); // 0x2de NEW_2
	ShowMap(var_86_object); // 0x2e0 ObjFunc
	return 0; // 0x2e2 Return
}


func_855(var_70_int)
{
	var_71_int = 0; var_72_int = 0; // 0x357 PushV
	var_73_string = "branch"; // 0x358 PushS
	GetVariable(var_73_string, var_72_int); // 0x359 Func
	var_74_int = 0; // 0x35b PushI
	var_75_bool = var_72_int == var_74_int; // 0x35c Eq
	if(var_75_bool == 0) goto Label_865; // 0x35d JumpB
	var_70_int = 1; // 0x35e MovI
	return 2; // 0x35f Return
	
Label_865:
	var_76_int = 1; // 0x361 PushI
	var_77_bool = var_72_int == var_76_int; // 0x362 Eq
	if(var_77_bool == 0) goto Label_870; // 0x363 JumpB
	var_70_int = 2; // 0x364 MovI
	return 2; // 0x365 Return
	
Label_870:
	var_70_int = 3; // 0x366 MovI
	return 2; // 0x367 Return
}


func_739(var_86_bool)
{
	var_88_int = 0; var_89_string = ""; // 0x2e4 PushV
	var_89_string = "b7q01"; // 0x2e5 MovS
	func_649(var_88_int, var_89_string); // 0x2e6 NEW_2
	var_92_int = 3; // 0x2e8 PushI
	var_93_bool = var_88_int == var_92_int; // 0x2e9 Eq
	if(var_93_bool == 0) goto Label_749; // 0x2ea JumpB
	var_86_bool = 1; // 0x2eb MovB
	return 0; // 0x2ec Return
	
Label_749:
	var_86_bool = 0; // 0x2ed MovB
	return 0; // 0x2ee Return
}


func_611(var_98_string, var_99_bool)
{
	var_102_bool = 0; var_103_float = 0; var_104_float = 0; var_105_bool = 0; var_106_float = 0; var_107_float = 0; // 0x263 PushV
	lshHasAnimation(var_105_bool, var_98_string); // 0x264 Func
	var_108_bool = var_105_bool; // 0x266 Push
	if(var_108_bool == 0) goto Label_621; // 0x267 JumpB
	lshGetAnimTimes(var_98_string, var_106_float, var_107_float); // 0x268 Func
	lshPlayAnimation(var_106_float, var_107_float, var_99_bool); // 0x26a Func
	goto Label_625; // 0x26c Jump
	
Label_625:
	return 6; // 0x271 Return
	
Label_621:
	var_109_string = "Can't find lsh animation : "; // 0x26d PushS
	var_110_int = var_109_string + var_98_string; // 0x26e Add
	Trace(var_110_int); // 0x26f Func
}


func_872(var_67_int)
{
	var_67_int = 515572; // 0x368 MovI
	return 0; // 0x369 Return
}


func_874(var_66_int)
{
	var_66_int = 504031; // 0x36a MovI
	return 0; // 0x36b Return
}


func_876(var_68_string)
{
	var_68_string = "ui/NPC_Citizen2.png"; // 0x36c MovS
	return 0; // 0x36d Return
}


func_508(var_18_bool, var_20_float)
{
	var_21_float = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_bool = 0; var_29_bool = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; // 0x1fc PushV
	GetPosition(var_31_cvector); // 0x1fd ObjFunc
	GetEyesHeight(var_30_float); // 0x1ff ObjFunc
	var_39_float = GetByIndex(var_31_cvector, 1); // 0x201 PushE
	var_39_float = var_39_float + var_30_float; // 0x202 Add2
	SetByIndex(var_31_cvector, 1) = var_39_float; // 0x203 PopE
	GetPosition(var_32_cvector); // 0x204 Func
	GetEyesHeight(var_30_float); // 0x206 Func
	var_40_float = GetByIndex(var_32_cvector, 1); // 0x208 PushE
	var_40_float = var_40_float + var_30_float; // 0x209 Add2
	SetByIndex(var_32_cvector, 1) = var_40_float; // 0x20a PopE
	var_33_cvector = var_31_cvector - var_32_cvector; // 0x20b Sub2
	var_41_float = GetByIndex(var_33_cvector, 1); // 0x20c PushE
	var_41_float = 0; // 0x20d MovI
	SetByIndex(var_33_cvector, 1) = var_41_float; // 0x20e PopE
	var_42_int = var_33_cvector | var_33_cvector; // 0x20f Or
	var_43_float = sqrt(var_42_int); // 0x210 Sqrt
	var_33_cvector = var_33_cvector / var_33_cvector; // 0x211 Div2
	var_34_cvector = -var_33_cvector; // 0x212 Neg2
	var_44_float = var_33_cvector * var_20_float; // 0x213 Mult
	var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); // 0x214 PushV
	var_47_cvector = CVector(0.0, 1.0, 0.0); // 0x215 PushVec
	var_46_cvector = var_34_cvector ^ var_47_cvector; // 0x216 Xor2
	func_639(var_45_cvector, var_46_cvector); // 0x217 NEW_2
	var_53_int = 25; // 0x219 PushI
	var_54_float = var_45_cvector * var_53_int; // 0x21a Mult
	var_55_int = var_44_float + var_54_float; // 0x21b Add
	var_56_cvector = CVector(0.0, 10.0, 0.0); // 0x21c PushVec
	var_35_cvector = var_55_int - var_56_cvector; // 0x21d Sub2
	var_36_cvector = var_32_cvector + var_35_cvector; // 0x21e Add2
	IsOverrideActive(var_37_bool); // 0x21f Func
	var_57_bool = var_37_bool; // 0x221 Push
	if(var_57_bool == 0) goto Label_549; // 0x222 JumpB
	var_18_bool = 0; // 0x223 MovB
	return 18; // 0x224 Return
	
Label_549:
	StopWorld(); // 0x225 Func
	var_58_bool = 1; // 0x227 PushB
	CameraTransit(var_36_cvector, var_34_cvector, var_58_bool); // 0x228 Func
	var_59_float = GetByIndex(var_35_cvector, 0); // 0x22a PushE
	var_60_float = GetByIndex(var_35_cvector, 2); // 0x22b PushE
	Rotate(var_59_float, var_60_float); // 0x22c Func
	var_61_bool = 0; // 0x22e PushV
	func_880(var_61_bool); // 0x22f NEW_2
	if(var_61_bool == 0) goto Label_563; // 0x231 JumpB
	goto Label_571; // 0x232 Jump
	
Label_571:
	CameraWaitForPlayFinish(); // 0x23b Func
	ResumeWorld(); // 0x23d Func
	var_18_bool = 1; // 0x23f MovB
	return 18; // 0x240 Return
	
Label_563:
	var_62_string = "head"; // 0x233 PushS
	HasAnimationTrack(var_38_bool, var_62_string); // 0x234 Func
	var_63_bool = var_38_bool; // 0x236 Push
	if(var_63_bool == 0) goto Label_571; // 0x237 JumpB
	var_64_string = "head"; // 0x238 PushS
	LookAsyncCamera(var_64_string); // 0x239 Func
}


func_878(var_69_string)
{
	var_69_string = "ui/NPC_Citizen2_b.png"; // 0x36e MovS
	return 0; // 0x36f Return
}


func_366(var_0_object)
{
	var_9_bool = 0; var_10_bool = 0; // 0x16e PushV
	var_0_object = 1; // 0x16f TMovB
	IsLoaded(var_10_bool); // 0x170 Func
	var_11_bool = 0; // 0x172 PushV
	var_11_bool = 0; // 0x173 MovB
	var_12_bool = var_10_bool == 0; // 0x174 Not
	if(var_12_bool == 0) goto Label_379; // 0x175 JumpB
	var_13_bool = 0; // 0x176 PushV
	func_415(var_13_bool); // 0x177 NEW_2
	if(var_13_bool == 0) goto Label_379; // 0x179 JumpB
	var_11_bool = 1; // 0x17a MovB
	
Label_379:
	if(var_11_bool == 0) goto Label_385; // 0x17b JumpB
	var_14_object = Obj(); // 0x17c PushV
	func_633(var_14_object); // 0x17d NEW_2
	RemoveActor(var_14_object); // 0x17f Func
	
Label_385:
	return 2; // 0x181 Return
}


func_880(var_61_bool)
{
	var_61_bool = 0; // 0x370 MovB
	return 0; // 0x371 Return
}


func_496(var_56_bool)
{
	var_56_bool = 1; // 0x1f0 MovB
	return 0; // 0x1f1 Return
}


func_626()
{
	var_9_bool = 0; // 0x272 PushV
	func_880(var_9_bool); // 0x273 NEW_2
	if(var_9_bool == 0) goto Label_632; // 0x275 JumpB
	lshStopSpeech(); // 0x276 Func
	
Label_632:
	return 0; // 0x278 Return
}


func_498()
{
	StopAnimation(); // 0x1f2 Func
	StopGroup0(); // 0x1f4 Func
	return 0; // 0x1f6 Return
}


func_751()
{
	var_32_object = Obj(); var_33_object = Obj(); // 0x2ef PushV
	var_34_int = 257; // 0x2f0 PushI
	var_35_int = 1; // 0x2f1 PushI
	var_36_int = 521029; // 0x2f2 PushI
	CreateDiaryEntry(var_33_object, var_34_int, var_35_int, var_36_int); // 0x2f3 Func
	var_37_bool = 0; var_38_object = Obj(); var_39_int = 0; // 0x2f5 PushV
	var_38_object = var_33_object; // 0x2f6 Mov
	var_39_int = 253; // 0x2f7 MovI
	func_777(var_37_bool, var_38_object, var_39_int); // 0x2f8 NEW_2
	return 2; // 0x2fa Return
}


func_503(var_8_bool)
{
	var_9_bool = 0; var_10_bool = 0; // 0x1f7 PushV
	IsLoaded(var_10_bool); // 0x1f8 Func
	var_8_bool = var_10_bool; // 0x1fa Mov
	return 2; // 0x1fb Return
}


func_633(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x279 PushV
	self(var_11_object); // 0x27a Func
	var_9_object = var_11_object; // 0x27c Mov
	return 2; // 0x27d Return
}


func_764(var_46_object)
{
	var_47_object = Obj(); var_48_object = Obj(); // 0x2fc PushV
	GetDiaryRoot(var_48_object); // 0x2fd Func
	var_49_bool = var_48_object == 0; // 0x2ff Not
	if(var_49_bool == 0) goto Label_774; // 0x300 JumpB
	var_50_string = "Can't retrieve diary root"; // 0x301 PushS
	Trace(var_50_string); // 0x302 Func
	var_46_object = 0; // 0x304 MovB
	return 2; // 0x305 Return
	
Label_774:
	var_46_object = var_48_object; // 0x306 Mov
	return 2; // 0x307 Return
}


func_639(var_45_cvector, var_46_cvector)
{
	var_48_float = 0; var_49_float = 0; // 0x27f PushV
	var_50_int = var_46_cvector | var_46_cvector; // 0x280 Or
	var_49_float = sqrt(var_50_int); // 0x281 Sqrt2
	var_51_float = 0.0; // 0x282 PushF
	var_52_bool = var_49_float < var_51_float; // 0x283 LT
	if(var_52_bool == 0) goto Label_647; // 0x284 JumpB
	var_45_cvector = CVector(0.0, 0.0, 0.0); // 0x285 MovV
	return 2; // 0x286 Return
	
Label_647:
	var_45_cvector = var_46_cvector / var_46_cvector; // 0x287 Div2
	return 2; // 0x288 Return
}


