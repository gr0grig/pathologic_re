task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object)
{
	var_12_int = 1; // 0xae PushI
	if(var_12_int == 0) goto Label_297; // 0xaf JumpB
	func_626(); // 0xb1 NEW_2
	var_14_int = 27648; // 0xb3 PushI
	var_15_bool = var_11_object == var_14_int; // 0xb4 Eq
	if(var_15_bool == 0) goto Label_202; // 0xb5 JumpB
	var_16_object = Obj(); var_17_object = Obj(); // 0xb6 PushV
	var_16_object = var_1_object; // 0xb7 MovT
	var_17_object = var_0_object; // 0xb8 MovT
	func_733(); // 0xb9 NEW_2
	var_43_object = Obj(); var_44_object = Obj(); // 0xbb PushV
	var_43_object = var_1_object; // 0xbc MovT
	var_44_object = var_0_object; // 0xbd MovT
	func_742(var_44_object); // 0xbe NEW_2
	var_67_object = Obj(); var_68_object = Obj(); // 0xc0 PushV
	var_67_object = var_1_object; // 0xc1 MovT
	var_68_object = var_0_object; // 0xc2 MovT
	func_753(); // 0xc3 NEW_2
	var_71_object = Obj(); var_72_object = Obj(); // 0xc5 PushV
	var_71_object = var_1_object; // 0xc6 MovT
	var_72_object = var_0_object; // 0xc7 MovT
	func_759(); // 0xc8 NEW_2
	
Label_202:
	var_77_int = 27645; // 0xca PushI
	var_78_bool = var_10_bool == var_77_int; // 0xcb Eq
	if(var_78_bool == 0) goto Label_244; // 0xcc JumpB
	var_79_string = ""; // 0xcd PushV
	var_79_string = "Neutral"; // 0xce MovS
	func_151(var_11_object, var_79_string); // 0xcf NEW_2
	var_96_int = 526360; // 0xd1 PushI
	SetMessage(var_96_int); // 0xd2 TObjFunc
	ClearReplies(); // 0xd4 TObjFunc
	var_97_bool = 0; // 0xd6 PushV
	var_97_bool = 0; // 0xd7 MovB
	var_98_bool = 0; var_99_object = Obj(); // 0xd8 PushV
	var_99_object = var_1_object; // 0xd9 MovT
	func_765(var_99_object); // 0xda NEW_2
	if(var_98_bool == 0) goto Label_227; // 0xdc JumpB
	var_106_bool = 0; var_107_object = Obj(); // 0xdd PushV
	var_107_object = var_1_object; // 0xde MovT
	func_777(var_106_bool, var_107_object); // 0xdf NEW_2
	if(var_106_bool == 0) goto Label_227; // 0xe1 JumpB
	var_97_bool = 1; // 0xe2 MovB
	
Label_227:
	if(var_97_bool == 0) goto Label_233; // 0xe3 JumpB
	var_115_int = 526361; // 0xe4 PushI
	var_116_int = 30084; // 0xe5 PushI
	var_117_int = 27646; // 0xe6 PushI
	AddReply(var_115_int, var_116_int, var_117_int); // 0xe7 TObjFunc
	
Label_233:
	var_118_int = 526364; // 0xe9 PushI
	var_119_int = -1; // 0xea PushI
	var_120_int = 27649; // 0xeb PushI
	AddReply(var_118_int, var_119_int, var_120_int); // 0xec TObjFunc
	var_121_int = 528671; // 0xee PushI
	var_122_int = -1; // 0xef PushI
	var_123_int = 30083; // 0xf0 PushI
	AddReply(var_121_int, var_122_int, var_123_int); // 0xf1 TObjFunc
	return 0; // 0xf3 Return
	
Label_244:
	var_124_int = 30084; // 0xf4 PushI
	var_125_bool = var_10_bool == var_124_int; // 0xf5 Eq
	if(var_125_bool == 0) goto Label_267; // 0xf6 JumpB
	var_126_string = ""; // 0xf7 PushV
	var_126_string = "Neutral"; // 0xf8 MovS
	func_151(var_11_object, var_126_string); // 0xf9 NEW_2
	var_127_int = 528672; // 0xfb PushI
	SetMessage(var_127_int); // 0xfc TObjFunc
	ClearReplies(); // 0xfe TObjFunc
	var_128_int = 528673; // 0x100 PushI
	var_129_int = 27647; // 0x101 PushI
	var_130_int = 30085; // 0x102 PushI
	AddReply(var_128_int, var_129_int, var_130_int); // 0x103 TObjFunc
	var_131_int = 528674; // 0x105 PushI
	var_132_int = 27647; // 0x106 PushI
	var_133_int = 30086; // 0x107 PushI
	AddReply(var_131_int, var_132_int, var_133_int); // 0x108 TObjFunc
	return 0; // 0x10a Return
	
Label_267:
	var_134_int = 27647; // 0x10b PushI
	var_135_bool = var_10_bool == var_134_int; // 0x10c Eq
	if(var_135_bool == 0) goto Label_285; // 0x10d JumpB
	var_136_string = ""; // 0x10e PushV
	var_136_string = "Neutral"; // 0x10f MovS
	func_151(var_11_object, var_136_string); // 0x110 NEW_2
	var_137_int = 526362; // 0x112 PushI
	SetMessage(var_137_int); // 0x113 TObjFunc
	ClearReplies(); // 0x115 TObjFunc
	var_138_int = 526363; // 0x117 PushI
	var_139_int = -1; // 0x118 PushI
	var_140_int = 27648; // 0x119 PushI
	AddReply(var_138_int, var_139_int, var_140_int); // 0x11a TObjFunc
	return 0; // 0x11c Return
	
Label_285:
	var_3_string = 1; // 0x11d TMovB
	var_141_bool = 0; // 0x11e PushV
	func_707(var_141_bool); // 0x11f NEW_2
	if(var_141_bool == 0) goto Label_293; // 0x121 JumpB
	lshStopAnimation(); // 0x122 Func
	goto Label_295; // 0x124 Jump
	
Label_295:
	return 0; // 0x127 Return
	
Label_293:
	StopAnimation(); // 0x125 Func
	
Label_297:
	return 0; // 0x129 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object)
{
	func_384(var_9_object, var_10_object); // 0x136 NEW_2
	var_14_int = 0; var_15_object = Obj(); // 0x138 PushV
	var_15_object = var_10_object; // 0x139 Mov
	TaskCall(0); // 0x13a TaskCall
	func_0(var_16_object, var_14_int, var_15_object); // 0x13b NEW_2
	TaskReturn(); // 0x13c TaskReturn
	return 0; // 0x13e Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_int)
{
	var_11_int = 10; // 0x16a PushI
	var_12_bool = var_10_int == var_11_int; // 0x16b Eq
	if(var_12_bool == 0) goto Label_383; // 0x16c JumpB
	var_13_bool = 0; // 0x16d PushV
	func_346(var_8_bool, var_9_object, var_10_int, var_13_bool); // 0x16e NEW_2
	if(var_13_bool == 0) goto Label_377; // 0x170 JumpB
	var_26_bool = var_2_object == 0; // 0x171 Not
	if(var_26_bool == 0) goto Label_376; // 0x172 JumpB
	var_27_object = Obj(); // 0x173 PushV
	var_27_object = var_4_bool; // 0x174 MovT
	func_615(var_27_object); // 0x175 NEW_2
	var_2_object = 1; // 0x177 TMovB
	
Label_376:
	goto Label_383; // 0x178 Jump
	
Label_383:
	return 0; // 0x17f Return
	
Label_377:
	var_34_object = var_2_object; // 0x179 PushT
	if(var_34_object == 0) goto Label_383; // 0x17a JumpB
	var_35_string = "head"; // 0x17b PushS
	UnlookAsync(var_35_string); // 0x17c Func
	var_2_object = 0; // 0x17e TMovB
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object)
{
	
Label_298:
	var_10_float = 0; var_11_float = 0; // 0x12a PushV
	var_10_float = 300; // 0x12b MovI
	var_11_float = 100; // 0x12c MovI
	func_319(var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_float, var_11_float); // 0x12d NEW_2
	var_72_int = 3; // 0x12f PushI
	Sleep(var_72_int); // 0x130 Func
	goto Label_298; // 0x132 Jump
}


func_384(var_2_object, var_3_string)
{
	func_479(); // 0x181 NEW_2
	var_11_int = 10; // 0x183 PushI
	KillTimer(var_11_int); // 0x184 Func
	var_12_object = var_2_object; // 0x186 PushT
	if(var_12_object == 0) goto Label_396; // 0x187 JumpB
	var_13_string = "head"; // 0x188 PushS
	UnlookAsync(var_13_string); // 0x189 Func
	var_2_object = 0; // 0x18b TMovB
	
Label_396:
	var_3_string = 1; // 0x18c TMovB
	return 0; // 0x18d Return
}


func_0(var_0_object, var_14_int, var_15_object)
{
	var_17_object = Obj(); var_18_bool = 0; var_19_int = 0; var_20_bool = 0; var_21_object = Obj(); var_22_bool = 0; var_23_int = 0; var_24_bool = 0; // 0x0 PushV
	var_0_object = var_15_object; // 0x1 TMov
	var_25_bool = 0; var_26_object = Obj(); var_27_float = 0; // 0x2 PushV
	var_26_object = var_15_object; // 0x3 Mov
	var_27_float = 110.0; // 0x4 MovF
	func_497(var_26_object, var_27_float); // 0x5 NEW_2
	var_72_bool = var_25_bool == 0; // 0x7 Not
	if(var_72_bool == 0) goto Label_11; // 0x8 JumpB
	var_14_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_21_object); // 0xb Func
	var_73_int = 0; // 0xd PushV
	func_701(var_73_int); // 0xe NEW_2
	SetNPCName(var_73_int); // 0x10 ObjFunc
	var_74_int = 0; // 0x12 PushV
	func_699(var_74_int); // 0x13 NEW_2
	SetNPCDescription(var_74_int); // 0x15 ObjFunc
	var_75_string = ""; // 0x17 PushV
	func_703(var_75_string); // 0x18 NEW_2
	SetPhoto(var_75_string); // 0x1a ObjFunc
	var_76_string = ""; // 0x1c PushV
	func_705(var_76_string); // 0x1d NEW_2
	SetPhoto2(var_76_string); // 0x1f ObjFunc
	var_77_int = 0; // 0x21 PushV
	func_842(var_77_int); // 0x22 NEW_2
	SetPlayerName(var_77_int); // 0x24 ObjFunc
	var_23_int = -1; // 0x26 MovI
	IsOverrideActive(var_22_bool); // 0x27 Func
	var_85_bool = var_22_bool; // 0x29 Push
	if(var_85_bool == 0) goto Label_45; // 0x2a JumpB
	var_14_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_21_object); // 0x2d Func
	var_86_object = Obj(); var_87_object = Obj(); // 0x2f PushV
	var_86_object = var_15_object; // 0x30 Mov
	var_87_object = var_21_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_88_object, var_89_object, var_90_string, var_91_bool, var_86_object, var_87_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_24_bool); // 0x36 ObjFunc
	
Label_56:
	var_156_bool = var_24_bool == 0; // 0x38 Not
	if(var_156_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_24_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_157_object = Obj(); // 0x3f PushV
	var_157_object = var_15_object; // 0x40 Mov
	func_566(); // 0x41 NEW_2
	StopDialog(var_21_object); // 0x43 Func
	GetReturnValue(var_23_int); // 0x45 ObjFunc
	var_14_int = var_23_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_643(var_114_int, var_115_string)
{
	var_116_int = 0; var_117_int = 0; // 0x283 PushV
	GetVariable(var_115_string, var_117_int); // 0x284 Func
	var_114_int = var_117_int; // 0x286 Mov
	return 2; // 0x287 Return
}


func_648(var_62_int, var_63_int)
{
	var_64_object = Obj(); var_65_object = Obj(); // 0x288 PushV
	CreateIntVector(var_65_object); // 0x289 Func
	add(var_62_int); // 0x28b ObjFunc
	add(var_63_int); // 0x28d ObjFunc
	var_66_int = 3; // 0x28f PushI
	SendWorldWndMessage(var_66_int, var_65_object); // 0x290 Func
	return 2; // 0x292 Return
}


func_777(var_120_bool, var_121_object)
{
	var_122_bool = 0; var_123_object = Obj(); var_124_string = ""; // 0x30a PushV
	var_123_object = var_121_object; // 0x30b Mov
	var_124_string = "Samopal"; // 0x30c MovS
	func_692(var_123_object, var_124_string); // 0x30d NEW_2
	if(var_122_bool == 0) goto Label_786; // 0x30f JumpB
	var_120_bool = 1; // 0x310 MovB
	return 0; // 0x311 Return
	
Label_786:
	var_120_bool = 0; // 0x312 MovB
	return 0; // 0x313 Return
}


func_398()
{
	var_19_int = 0; var_20_int = 0; var_21_int = 0; var_22_int = 0; var_23_bool = 0; var_24_float = 0; var_25_bool = 0; var_26_int = 0; var_27_int = 0; var_28_int = 0; var_29_int = 0; var_30_bool = 0; var_31_float = 0; var_32_bool = 0; // 0x18e PushV
	WaitForAnimEnd(); // 0x18f Func
	var_33_bool = 0; // 0x191 PushV
	func_492(var_33_bool); // 0x192 NEW_2
	var_34_bool = var_33_bool == 0; // 0x194 Not
	if(var_34_bool == 0) goto Label_407; // 0x195 JumpB
	return 14; // 0x196 Return
	
Label_407:
	var_35_int = 0; // 0x197 PushV
	func_716(var_35_int); // 0x198 NEW_2
	var_26_int = var_35_int; // 0x199 Mov
	var_27_int = 0; // 0x19b MovI
	
Label_412:
	var_48_bool = 0; // 0x19c PushV
	var_48_bool = 0; // 0x19d MovB
	var_49_int = 5; // 0x19e PushI
	var_50_bool = var_27_int < var_49_int; // 0x19f LT
	if(var_50_bool == 0) goto Label_422; // 0x1a0 JumpB
	var_51_bool = 0; // 0x1a1 PushV
	func_492(var_51_bool); // 0x1a2 NEW_2
	if(var_51_bool == 0) goto Label_422; // 0x1a4 JumpB
	var_48_bool = 1; // 0x1a5 MovB
	
Label_422:
	if(var_48_bool == 0) goto Label_474; // 0x1a6 JumpB
	var_52_int = 3; // 0x1a7 PushI
	irand(var_28_int, var_52_int); // 0x1a8 Func
	var_53_int = 0; // 0x1aa PushI
	var_54_bool = var_28_int == var_53_int; // 0x1ab Eq
	if(var_54_bool == 0) goto Label_446; // 0x1ac JumpB
	var_55_int = var_26_int; // 0x1ad Push
	if(var_55_int == 0) goto Label_445; // 0x1ae JumpB
	irand(var_29_int, var_26_int); // 0x1af Func
	var_56_string = "all"; // 0x1b1 PushS
	var_57_string = ""; var_58_int = 0; // 0x1b2 PushV
	var_58_int = var_29_int; // 0x1b3 Mov
	func_709(var_57_string, var_58_int); // 0x1b4 NEW_2
	PlayAnimation(var_56_string, var_57_string); // 0x1b6 Func
	WaitForAnimEnd(var_30_bool); // 0x1b8 Func
	var_59_bool = var_30_bool == 0; // 0x1ba Not
	if(var_59_bool == 0) goto Label_445; // 0x1bb JumpB
	goto Label_474; // 0x1bc Jump
	
Label_474:
	ResetAAS(); // 0x1da Func
	return 14; // 0x1dc Return
	
Label_445:
	goto Label_463; // 0x1bd Jump
	
Label_463:
	var_60_bool = 0; // 0x1cf PushV
	func_477(var_60_bool); // 0x1d0 NEW_2
	var_61_bool = var_60_bool == 0; // 0x1d2 Not
	if(var_61_bool == 0) goto Label_469; // 0x1d3 JumpB
	goto Label_474; // 0x1d4 Jump
	
Label_469:
	ResetAAS(); // 0x1d5 Func
	var_62_int = 1; // 0x1d7 PushI
	var_27_int = var_27_int + var_62_int; // 0x1d8 Add2
	goto Label_412; // 0x1d9 Jump
	
Label_446:
	var_63_int = 1; // 0x1be PushI
	var_64_bool = var_28_int == var_63_int; // 0x1bf Eq
	if(var_64_bool == 0) goto Label_460; // 0x1c0 JumpB
	var_65_int = 4; // 0x1c1 PushI
	rand(var_31_float, var_65_int); // 0x1c2 Func
	var_66_int = 1; // 0x1c4 PushI
	var_67_int = var_31_float + var_66_int; // 0x1c5 Add
	Sleep(var_67_int, var_32_bool); // 0x1c6 Func
	var_68_bool = var_32_bool == 0; // 0x1c8 Not
	if(var_68_bool == 0) goto Label_459; // 0x1c9 JumpB
	goto Label_474; // 0x1ca Jump
	
Label_459:
	goto Label_463; // 0x1cb Jump
	
Label_460:
	var_69_int = var_27_int; // 0x1cc Push
	if(var_69_int == 0) goto Label_463; // 0x1cd JumpB
	goto Label_474; // 0x1ce Jump
}


func_660(var_52_object, var_53_int)
{
	var_54_int = 0; var_55_int = 0; var_56_bool = 0; var_57_int = 0; var_58_int = 0; var_59_bool = 0; // 0x294 PushV
	GetItemID(var_57_int); // 0x295 ObjFunc
	var_60_string = "Category"; // 0x297 PushS
	GetInvItemProperty(var_58_int, var_57_int, var_60_string); // 0x298 Func
	AddItem(var_59_bool, var_52_object, var_58_int, var_53_int); // 0x29a ObjFunc
	var_61_bool = var_59_bool == 0; // 0x29c Not
	if(var_61_bool == 0) goto Label_673; // 0x29d JumpB
	DropItems(var_52_object, var_53_int); // 0x29e ObjFunc
	goto Label_678; // 0x2a0 Jump
	
Label_678:
	return 6; // 0x2a6 Return
	
Label_673:
	var_62_int = 0; var_63_int = 0; // 0x2a1 PushV
	var_62_int = var_57_int; // 0x2a2 Mov
	var_63_int = var_53_int; // 0x2a3 Mov
	func_648(var_62_int, var_63_int); // 0x2a4 NEW_2
}


func_788()
{
	var_20_object = Obj(); var_21_object = Obj(); // 0x314 PushV
	var_22_int = 432; // 0x315 PushI
	var_23_int = 2; // 0x316 PushI
	var_24_int = 526370; // 0x317 PushI
	CreateDiaryEntry(var_21_object, var_22_int, var_23_int, var_24_int); // 0x318 Func
	var_25_bool = 0; var_26_object = Obj(); var_27_int = 0; // 0x31a PushV
	var_26_object = var_21_object; // 0x31b Mov
	var_27_int = 430; // 0x31c MovI
	func_814(var_25_bool, var_26_object, var_27_int); // 0x31d NEW_2
	return 2; // 0x31f Return
}


func_151(var_2_object, var_93_string)
{
	var_94_bool = 0; // 0x98 PushV
	func_707(var_94_bool); // 0x99 NEW_2
	var_95_bool = var_94_bool == 0; // 0x9b Not
	if(var_95_bool == 0) goto Label_158; // 0x9c JumpB
	return 0; // 0x9d Return
	
Label_158:
	var_96_bool = var_93_string == var_2_object; // 0x9e Eq
	if(var_96_bool == 0) goto Label_161; // 0x9f JumpB
	return 0; // 0xa0 Return
	
Label_161:
	var_97_string = ""; var_98_bool = 0; // 0xa1 PushV
	var_97_string = var_93_string; // 0xa2 Mov
	var_99_string = ""; // 0xa3 PushS
	var_100_bool = var_93_string == var_99_string; // 0xa4 Eq
	if(var_100_bool == 0) goto Label_168; // 0xa5 JumpB
	var_98_bool = 0; // 0xa6 MovB
	goto Label_169; // 0xa7 Jump
	
Label_169:
	func_600(var_97_string, var_98_bool); // 0xa9 NEW_2
	var_2_object = var_93_string; // 0xab TMov
	return 0; // 0xac Return
	
Label_168:
	var_98_bool = 1; // 0xa8 MovB
}


func_801(var_34_object)
{
	var_35_object = Obj(); var_36_object = Obj(); // 0x321 PushV
	GetDiaryRoot(var_36_object); // 0x322 Func
	var_37_bool = var_36_object == 0; // 0x324 Not
	if(var_37_bool == 0) goto Label_811; // 0x325 JumpB
	var_38_string = "Can't retrieve diary root"; // 0x326 PushS
	Trace(var_38_string); // 0x327 Func
	var_34_object = 0; // 0x329 MovB
	return 2; // 0x32a Return
	
Label_811:
	var_34_object = var_36_object; // 0x32b Mov
	return 2; // 0x32c Return
}


func_679(var_46_object, var_47_string, var_48_int)
{
	var_49_object = Obj(); var_50_object = Obj(); // 0x2a7 PushV
	CreateInvItem(var_50_object); // 0x2a8 Func
	SetItemName(var_47_string); // 0x2aa ObjFunc
	var_51_object = Obj(); var_52_object = Obj(); var_53_int = 0; // 0x2ac PushV
	var_51_object = var_46_object; // 0x2ad Mov
	var_52_object = var_50_object; // 0x2ae Mov
	var_53_int = var_48_int; // 0x2af Mov
	func_660(var_52_object, var_53_int); // 0x2b0 NEW_2
	return 2; // 0x2b2 Return
}


func_814(var_25_bool, var_26_object, var_27_int)
{
	var_28_object = Obj(); var_29_object = Obj(); var_30_int = 0; var_31_object = Obj(); var_32_object = Obj(); var_33_int = 0; // 0x32e PushV
	var_34_object = Obj(); // 0x32f PushV
	func_801(var_34_object); // 0x330 NEW_2
	var_31_object = var_34_object; // 0x331 Mov
	Find(var_27_int, var_32_object); // 0x333 ObjFunc
	var_39_bool = var_32_object == 0; // 0x335 Not
	if(var_39_bool == 0) goto Label_829; // 0x336 JumpB
	var_40_string = "Can't find diary parent with id: "; // 0x337 PushS
	var_41_int = var_40_string + var_27_int; // 0x338 Add
	Trace(var_41_int); // 0x339 Func
	var_25_bool = 0; // 0x33b MovB
	return 6; // 0x33c Return
	
Label_829:
	AddChild(var_26_object); // 0x33d ObjFunc
	var_42_int = 7; // 0x33f PushI
	SendWorldWndMessage(var_42_int); // 0x340 Func
	GetCategory(var_33_int); // 0x342 ObjFunc
	SetDiarySection(var_33_int); // 0x344 Func
	var_25_bool = 0; // 0x346 MovB
	return 6; // 0x347 Return
}


func_692(var_122_bool, var_124_string)
{
	var_125_int = 0; var_126_bool = 0; var_127_int = 0; var_128_bool = 0; // 0x2b4 PushV
	GetInvItemByName(var_127_int, var_124_string); // 0x2b5 Func
	HasItem(var_127_int, var_128_bool); // 0x2b7 ObjFunc
	var_122_bool = var_128_bool; // 0x2b9 Mov
	return 4; // 0x2ba Return
}


func_566()
{
	var_158_bool = 0; var_159_bool = 0; // 0x236 PushV
	var_160_bool = 1; // 0x237 PushB
	CameraSwitchToNormal(var_160_bool); // 0x238 Func
	var_161_bool = 0; // 0x23a PushV
	func_707(var_161_bool); // 0x23b NEW_2
	if(var_161_bool == 0) goto Label_575; // 0x23d JumpB
	goto Label_583; // 0x23e Jump
	
Label_583:
	return 2; // 0x247 Return
	
Label_575:
	var_162_string = "head"; // 0x23f PushS
	HasAnimationTrack(var_159_bool, var_162_string); // 0x240 Func
	var_163_bool = var_159_bool; // 0x242 Push
	if(var_163_bool == 0) goto Label_583; // 0x243 JumpB
	var_164_string = "head"; // 0x244 PushS
	UnlookAsync(var_164_string); // 0x245 Func
}


func_699(var_74_int)
{
	var_74_int = 521048; // 0x2bb MovI
	return 0; // 0x2bc Return
}


func_701(var_73_int)
{
	var_73_int = 521047; // 0x2bd MovI
	return 0; // 0x2be Return
}


func_319(var_0_object, var_1_object, var_2_object, var_3_string, var_9_object, var_10_float, var_11_float)
{
	var_12_bool = 0; // 0x140 PushV
	func_492(var_12_bool); // 0x141 NEW_2
	var_15_bool = var_12_bool == 0; // 0x143 Not
	if(var_15_bool == 0) goto Label_326; // 0x144 JumpB
	return 0; // 0x145 Return
	
Label_326:
	var_16_string = "player"; // 0x146 PushS
	FindActor(var_9_object, var_16_string); // 0x147 Func
	var_2_object = 0; // 0x149 TMovB
	var_3_string = 0; // 0x14a TMovB
	var_0_object = var_10_float; // 0x14b TMov
	var_1_object = var_11_float; // 0x14c TMov
	var_17_int = 10; // 0x14d PushI
	var_18_float = 1.0; // 0x14e PushF
	SetTimer(var_17_int, var_18_float); // 0x14f Func
	func_398(); // 0x152 NEW_2
	var_70_bool = var_3_string == 0; // 0x154 Not
	if(var_70_bool == 0) goto Label_345; // 0x155 JumpB
	var_71_int = 10; // 0x156 PushI
	KillTimer(var_71_int); // 0x157 Func
	
Label_345:
	return 0; // 0x159 Return
}


func_703(var_75_string)
{
	var_75_string = "ui/NPC_Morlok.png"; // 0x2bf MovS
	return 0; // 0x2c0 Return
}


func_705(var_76_string)
{
	var_76_string = "ui/NPC_Morlok_b.png"; // 0x2c1 MovS
	return 0; // 0x2c2 Return
}


func_707(var_68_bool)
{
	var_68_bool = 0; // 0x2c3 MovB
	return 0; // 0x2c4 Return
}


func_709(var_41_string, var_42_int)
{
	var_43_string = ""; var_44_string = ""; // 0x2c5 PushV
	var_44_string = "idle"; // 0x2c6 MovS
	var_45_int = var_42_int; // 0x2c7 Push
	if(var_45_int == 0) goto Label_714; // 0x2c8 JumpB
	var_44_string = var_44_string + var_42_int; // 0x2c9 Add2
	
Label_714:
	var_41_string = var_44_string; // 0x2ca Mov
	return 2; // 0x2cb Return
}


func_584(var_140_string)
{
	var_141_bool = 0; var_142_float = 0; var_143_float = 0; var_144_bool = 0; var_145_float = 0; var_146_float = 0; // 0x248 PushV
	lshHasAnimation(var_144_bool, var_140_string); // 0x249 Func
	var_147_bool = var_144_bool; // 0x24b Push
	if(var_147_bool == 0) goto Label_595; // 0x24c JumpB
	lshGetAnimTimes(var_140_string, var_145_float, var_146_float); // 0x24d Func
	var_148_bool = 0; // 0x24f PushB
	lshPlayAnimation(var_145_float, var_146_float, var_148_bool); // 0x250 Func
	goto Label_599; // 0x252 Jump
	
Label_599:
	return 6; // 0x257 Return
	
Label_595:
	var_149_string = "Can't find lsh animation : "; // 0x253 PushS
	var_150_int = var_149_string + var_140_string; // 0x254 Add
	Trace(var_150_int); // 0x255 Func
}


func_842(var_77_int)
{
	var_78_int = 0; var_79_int = 0; // 0x34a PushV
	var_80_string = "branch"; // 0x34b PushS
	GetVariable(var_80_string, var_79_int); // 0x34c Func
	var_81_int = 0; // 0x34e PushI
	var_82_bool = var_79_int == var_81_int; // 0x34f Eq
	if(var_82_bool == 0) goto Label_852; // 0x350 JumpB
	var_77_int = 1; // 0x351 MovI
	return 2; // 0x352 Return
	
Label_852:
	var_83_int = 1; // 0x354 PushI
	var_84_bool = var_79_int == var_83_int; // 0x355 Eq
	if(var_84_bool == 0) goto Label_857; // 0x356 JumpB
	var_77_int = 2; // 0x357 MovI
	return 2; // 0x358 Return
	
Label_857:
	var_77_int = 3; // 0x359 MovI
	return 2; // 0x35a Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_86_object, var_87_object)
{
	var_0_object = var_87_object; // 0x4b TMov
	var_1_object = var_86_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_92_int = 1; // 0x4e PushI
	if(var_92_int == 0) goto Label_121; // 0x4f JumpB
	var_93_string = ""; // 0x50 PushV
	var_93_string = "Neutral"; // 0x51 MovS
	func_151(var_87_object, var_93_string); // 0x52 NEW_2
	var_110_int = 526360; // 0x54 PushI
	SetMessage(var_110_int); // 0x55 TObjFunc
	ClearReplies(); // 0x57 TObjFunc
	var_111_bool = 0; // 0x59 PushV
	var_111_bool = 0; // 0x5a MovB
	var_112_bool = 0; var_113_object = Obj(); // 0x5b PushV
	var_113_object = var_1_object; // 0x5c MovT
	func_765(var_113_object); // 0x5d NEW_2
	if(var_112_bool == 0) goto Label_102; // 0x5f JumpB
	var_120_bool = 0; var_121_object = Obj(); // 0x60 PushV
	var_121_object = var_1_object; // 0x61 MovT
	func_777(var_120_bool, var_121_object); // 0x62 NEW_2
	if(var_120_bool == 0) goto Label_102; // 0x64 JumpB
	var_111_bool = 1; // 0x65 MovB
	
Label_102:
	if(var_111_bool == 0) goto Label_108; // 0x66 JumpB
	var_129_int = 526361; // 0x67 PushI
	var_130_int = 30084; // 0x68 PushI
	var_131_int = 27646; // 0x69 PushI
	AddReply(var_129_int, var_130_int, var_131_int); // 0x6a TObjFunc
	
Label_108:
	var_132_int = 526364; // 0x6c PushI
	var_133_int = -1; // 0x6d PushI
	var_134_int = 27649; // 0x6e PushI
	AddReply(var_132_int, var_133_int, var_134_int); // 0x6f TObjFunc
	var_135_int = 528671; // 0x71 PushI
	var_136_int = -1; // 0x72 PushI
	var_137_int = 30083; // 0x73 PushI
	AddReply(var_135_int, var_136_int, var_137_int); // 0x74 TObjFunc
	goto Label_121; // 0x76 Jump
	
Label_121:
	var_138_bool = 0; // 0x79 PushV
	func_707(var_138_bool); // 0x7a NEW_2
	if(var_138_bool == 0) goto Label_136; // 0x7c JumpB
	
Label_125:
	lshWaitForAnimEnd(); // 0x7d Func
	var_139_string = var_3_string; // 0x7f PushT
	if(var_139_string == 0) goto Label_130; // 0x80 JumpB
	goto Label_135; // 0x81 Jump
	
Label_135:
	goto Label_150; // 0x87 Jump
	
Label_150:
	return 0; // 0x96 Return
	
Label_130:
	var_140_string = ""; // 0x82 PushV
	var_140_string = var_2_object; // 0x83 MovT
	func_584(var_140_string); // 0x84 NEW_2
	goto Label_125; // 0x86 Jump
	
Label_136:
	var_151_string = "all"; // 0x88 PushS
	var_152_string = "idle"; // 0x89 PushS
	PlayAnimation(var_151_string, var_152_string); // 0x8a Func
	
Label_140:
	WaitForAnimEnd(); // 0x8c Func
	var_153_string = var_3_string; // 0x8e PushT
	if(var_153_string == 0) goto Label_145; // 0x8f JumpB
	goto Label_150; // 0x90 Jump
	
Label_145:
	var_154_string = "all"; // 0x91 PushS
	var_155_string = "idle"; // 0x92 PushS
	PlayAnimation(var_154_string, var_155_string); // 0x93 Func
	goto Label_140; // 0x95 Jump
}


func_716(var_35_int)
{
	var_36_int = 0; var_37_bool = 0; var_38_int = 0; var_39_bool = 0; // 0x2cc PushV
	var_38_int = 0; // 0x2cd MovI
	
Label_718:
	var_40_string = "all"; // 0x2ce PushS
	var_41_string = ""; var_42_int = 0; // 0x2cf PushV
	var_42_int = var_38_int; // 0x2d0 Mov
	func_709(var_41_string, var_42_int); // 0x2d1 NEW_2
	HasAnimation(var_39_bool, var_40_string, var_41_string); // 0x2d3 Func
	var_46_bool = var_39_bool == 0; // 0x2d5 Not
	if(var_46_bool == 0) goto Label_728; // 0x2d6 JumpB
	goto Label_731; // 0x2d7 Jump
	
Label_731:
	var_35_int = var_38_int; // 0x2db Mov
	return 4; // 0x2dc Return
	
Label_728:
	var_47_int = 1; // 0x2d8 PushI
	var_38_int = var_38_int + var_47_int; // 0x2d9 Add2
	goto Label_718; // 0x2da Jump
}


func_600(var_97_string, var_98_bool)
{
	var_101_bool = 0; var_102_float = 0; var_103_float = 0; var_104_bool = 0; var_105_float = 0; var_106_float = 0; // 0x258 PushV
	lshHasAnimation(var_104_bool, var_97_string); // 0x259 Func
	var_107_bool = var_104_bool; // 0x25b Push
	if(var_107_bool == 0) goto Label_610; // 0x25c JumpB
	lshGetAnimTimes(var_97_string, var_105_float, var_106_float); // 0x25d Func
	lshPlayAnimation(var_105_float, var_106_float, var_98_bool); // 0x25f Func
	goto Label_614; // 0x261 Jump
	
Label_614:
	return 6; // 0x266 Return
	
Label_610:
	var_108_string = "Can't find lsh animation : "; // 0x262 PushS
	var_109_int = var_108_string + var_97_string; // 0x263 Add
	Trace(var_109_int); // 0x264 Func
}


func_346(var_0_object, var_1_object, var_4_bool, var_13_bool)
{
	var_14_float = 0; var_15_float = 0; // 0x15a PushV
	var_16_bool = var_4_bool == 0; // 0x15b NullEq
	if(var_16_bool == 0) goto Label_351; // 0x15c JumpB
	var_13_bool = 0; // 0x15d MovB
	return 2; // 0x15e Return
	
Label_351:
	var_17_float = 0; var_18_object = Obj(); // 0x15f PushV
	var_18_object = var_4_bool; // 0x160 MovT
	func_484(var_18_object); // 0x161 NEW_2
	var_15_float = sqrt(var_17_float); // 0x163 Sqrt2
	var_25_object = var_2_object; // 0x164 PushT
	if(var_25_object == 0) goto Label_359; // 0x165 JumpB
	var_15_float = var_15_float - var_1_object; // 0x166 Sub2
	
Label_359:
	var_13_bool = var_15_float < var_0_object; // 0x167 LT2
	return 2; // 0x168 Return
}


func_733()
{
	var_18_string = "k7q02"; // 0x2de PushS
	var_19_int = 2; // 0x2df PushI
	SetVariable(var_18_string, var_19_int); // 0x2e0 Func
	func_788(); // 0x2e3 NEW_2
	return 0; // 0x2e5 Return
}


func_477(var_60_bool)
{
	var_60_bool = 1; // 0x1dd MovB
	return 0; // 0x1de Return
}


func_479()
{
	StopAnimation(); // 0x1df Func
	StopGroup0(); // 0x1e1 Func
	return 0; // 0x1e3 Return
}


func_484(var_17_float)
{
	var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); // 0x1e4 PushV
	GetPosition(var_22_cvector); // 0x1e5 Func
	GetPosition(var_23_cvector); // 0x1e7 ObjFunc
	var_24_cvector = var_23_cvector - var_22_cvector; // 0x1e9 Sub2
	var_17_float = var_24_cvector | var_24_cvector; // 0x1ea Or2
	return 6; // 0x1eb Return
}


func_742(var_43_object)
{
	var_45_string = "white plet 10 is given"; // 0x2e7 PushS
	Trace(var_45_string); // 0x2e8 Func
	var_46_object = Obj(); var_47_string = ""; var_48_int = 0; // 0x2ea PushV
	var_46_object = var_43_object; // 0x2eb Mov
	var_47_string = "grass_white_plet"; // 0x2ec MovS
	var_48_int = 10; // 0x2ed MovI
	func_679(var_46_object, var_47_string, var_48_int); // 0x2ee NEW_2
	return 0; // 0x2f0 Return
}


func_615(var_27_object)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_float = 0; var_31_cvector = CVector(0,0,0); // 0x267 PushV
	GetEyesHeight(var_30_float); // 0x268 ObjFunc
	var_31_cvector = CVector(0.0, 0.0, 0.0); // 0x26a MovV
	var_32_float = GetByIndex(var_31_cvector, 1); // 0x26b PushE
	var_32_float = var_30_float; // 0x26c Mov
	SetByIndex(var_31_cvector, 1) = var_32_float; // 0x26d PopE
	var_33_string = "head"; // 0x26e PushS
	LookAsync(var_27_object, var_33_string, var_31_cvector); // 0x26f Func
	return 4; // 0x271 Return
}


func_492(var_12_bool)
{
	var_13_bool = 0; var_14_bool = 0; // 0x1ec PushV
	IsLoaded(var_14_bool); // 0x1ed Func
	var_12_bool = var_14_bool; // 0x1ef Mov
	return 2; // 0x1f0 Return
}


func_497(var_25_bool, var_27_float)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_bool = 0; var_36_bool = 0; var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_bool = 0; var_45_bool = 0; // 0x1f1 PushV
	GetPosition(var_38_cvector); // 0x1f2 ObjFunc
	GetEyesHeight(var_37_float); // 0x1f4 ObjFunc
	var_46_float = GetByIndex(var_38_cvector, 1); // 0x1f6 PushE
	var_46_float = var_46_float + var_37_float; // 0x1f7 Add2
	SetByIndex(var_38_cvector, 1) = var_46_float; // 0x1f8 PopE
	GetPosition(var_39_cvector); // 0x1f9 Func
	GetEyesHeight(var_37_float); // 0x1fb Func
	var_47_float = GetByIndex(var_39_cvector, 1); // 0x1fd PushE
	var_47_float = var_47_float + var_37_float; // 0x1fe Add2
	SetByIndex(var_39_cvector, 1) = var_47_float; // 0x1ff PopE
	var_40_cvector = var_38_cvector - var_39_cvector; // 0x200 Sub2
	var_48_float = GetByIndex(var_40_cvector, 1); // 0x201 PushE
	var_48_float = 0; // 0x202 MovI
	SetByIndex(var_40_cvector, 1) = var_48_float; // 0x203 PopE
	var_49_int = var_40_cvector | var_40_cvector; // 0x204 Or
	var_50_float = sqrt(var_49_int); // 0x205 Sqrt
	var_40_cvector = var_40_cvector / var_40_cvector; // 0x206 Div2
	var_41_cvector = -var_40_cvector; // 0x207 Neg2
	var_51_float = var_40_cvector * var_27_float; // 0x208 Mult
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); // 0x209 PushV
	var_54_cvector = CVector(0.0, 1.0, 0.0); // 0x20a PushVec
	var_53_cvector = var_41_cvector ^ var_54_cvector; // 0x20b Xor2
	func_633(var_52_cvector, var_53_cvector); // 0x20c NEW_2
	var_60_int = 25; // 0x20e PushI
	var_61_float = var_52_cvector * var_60_int; // 0x20f Mult
	var_62_int = var_51_float + var_61_float; // 0x210 Add
	var_63_cvector = CVector(0.0, 10.0, 0.0); // 0x211 PushVec
	var_42_cvector = var_62_int - var_63_cvector; // 0x212 Sub2
	var_43_cvector = var_39_cvector + var_42_cvector; // 0x213 Add2
	IsOverrideActive(var_44_bool); // 0x214 Func
	var_64_bool = var_44_bool; // 0x216 Push
	if(var_64_bool == 0) goto Label_538; // 0x217 JumpB
	var_25_bool = 0; // 0x218 MovB
	return 18; // 0x219 Return
	
Label_538:
	StopWorld(); // 0x21a Func
	var_65_bool = 1; // 0x21c PushB
	CameraTransit(var_43_cvector, var_41_cvector, var_65_bool); // 0x21d Func
	var_66_float = GetByIndex(var_42_cvector, 0); // 0x21f PushE
	var_67_float = GetByIndex(var_42_cvector, 2); // 0x220 PushE
	Rotate(var_66_float, var_67_float); // 0x221 Func
	var_68_bool = 0; // 0x223 PushV
	func_707(var_68_bool); // 0x224 NEW_2
	if(var_68_bool == 0) goto Label_552; // 0x226 JumpB
	goto Label_560; // 0x227 Jump
	
Label_560:
	CameraWaitForPlayFinish(); // 0x230 Func
	ResumeWorld(); // 0x232 Func
	var_25_bool = 1; // 0x234 MovB
	return 18; // 0x235 Return
	
Label_552:
	var_69_string = "head"; // 0x228 PushS
	HasAnimationTrack(var_45_bool, var_69_string); // 0x229 Func
	var_70_bool = var_45_bool; // 0x22b Push
	if(var_70_bool == 0) goto Label_560; // 0x22c JumpB
	var_71_string = "head"; // 0x22d PushS
	LookAsyncCamera(var_71_string); // 0x22e Func
}


func_626()
{
	var_13_bool = 0; // 0x272 PushV
	func_707(var_13_bool); // 0x273 NEW_2
	if(var_13_bool == 0) goto Label_632; // 0x275 JumpB
	lshStopSpeech(); // 0x276 Func
	
Label_632:
	return 0; // 0x278 Return
}


func_753()
{
	var_69_string = "playsound"; // 0x2f2 PushS
	var_70_string = "giveitem"; // 0x2f3 PushS
	TriggerWorld(var_69_string, var_70_string); // 0x2f4 Func
	return 0; // 0x2f6 Return
}


func_759()
{
	var_73_int = 0; var_74_int = 0; // 0x2f7 PushV
	var_75_string = "Samopal"; // 0x2f8 PushS
	var_76_int = 1; // 0x2f9 PushI
	RemoveItemByType(var_74_int, var_75_string, var_76_int); // 0x2fa ObjFunc
	return 2; // 0x2fc Return
}


func_633(var_52_cvector, var_53_cvector)
{
	var_55_float = 0; var_56_float = 0; // 0x279 PushV
	var_57_int = var_53_cvector | var_53_cvector; // 0x27a Or
	var_56_float = sqrt(var_57_int); // 0x27b Sqrt2
	var_58_float = 0.0; // 0x27c PushF
	var_59_bool = var_56_float < var_58_float; // 0x27d LT
	if(var_59_bool == 0) goto Label_641; // 0x27e JumpB
	var_52_cvector = CVector(0.0, 0.0, 0.0); // 0x27f MovV
	return 2; // 0x280 Return
	
Label_641:
	var_52_cvector = var_53_cvector / var_53_cvector; // 0x281 Div2
	return 2; // 0x282 Return
}


func_765(var_112_bool)
{
	var_114_int = 0; var_115_string = ""; // 0x2fe PushV
	var_115_string = "k7q02"; // 0x2ff MovS
	func_643(var_114_int, var_115_string); // 0x300 NEW_2
	var_118_int = 1; // 0x302 PushI
	var_119_bool = var_114_int == var_118_int; // 0x303 Eq
	if(var_119_bool == 0) goto Label_775; // 0x304 JumpB
	var_112_bool = 1; // 0x305 MovB
	return 0; // 0x306 Return
	
Label_775:
	var_112_bool = 0; // 0x307 MovB
	return 0; // 0x308 Return
}


