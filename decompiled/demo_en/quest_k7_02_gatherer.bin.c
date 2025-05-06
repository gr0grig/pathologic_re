task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object)
{
	var_12_int = 1; // 0xae PushI
	if(var_12_int == 0) goto Label_297; // 0xaf JumpB
	func_624(); // 0xb1 NEW_2
	var_14_int = 27648; // 0xb3 PushI
	var_15_bool = var_11_object == var_14_int; // 0xb4 Eq
	if(var_15_bool == 0) goto Label_202; // 0xb5 JumpB
	var_16_object = Obj(); var_17_object = Obj(); // 0xb6 PushV
	var_16_object = var_1_object; // 0xb7 MovT
	var_17_object = var_0_object; // 0xb8 MovT
	func_731(); // 0xb9 NEW_2
	var_43_object = Obj(); var_44_object = Obj(); // 0xbb PushV
	var_43_object = var_1_object; // 0xbc MovT
	var_44_object = var_0_object; // 0xbd MovT
	func_740(var_44_object); // 0xbe NEW_2
	var_67_object = Obj(); var_68_object = Obj(); // 0xc0 PushV
	var_67_object = var_1_object; // 0xc1 MovT
	var_68_object = var_0_object; // 0xc2 MovT
	func_751(); // 0xc3 NEW_2
	var_71_object = Obj(); var_72_object = Obj(); // 0xc5 PushV
	var_71_object = var_1_object; // 0xc6 MovT
	var_72_object = var_0_object; // 0xc7 MovT
	func_757(); // 0xc8 NEW_2
	
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
	func_763(var_99_object); // 0xda NEW_2
	if(var_98_bool == 0) goto Label_227; // 0xdc JumpB
	var_106_bool = 0; var_107_object = Obj(); // 0xdd PushV
	var_107_object = var_1_object; // 0xde MovT
	func_775(var_106_bool, var_107_object); // 0xdf NEW_2
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
	func_705(var_141_bool); // 0x11f NEW_2
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
	func_613(var_27_object); // 0x175 NEW_2
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
	var_71_bool = var_25_bool == 0; // 0x7 Not
	if(var_71_bool == 0) goto Label_11; // 0x8 JumpB
	var_14_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_21_object); // 0xb Func
	var_72_int = 0; // 0xd PushV
	func_699(var_72_int); // 0xe NEW_2
	SetNPCName(var_72_int); // 0x10 ObjFunc
	var_73_int = 0; // 0x12 PushV
	func_697(var_73_int); // 0x13 NEW_2
	SetNPCDescription(var_73_int); // 0x15 ObjFunc
	var_74_string = ""; // 0x17 PushV
	func_701(var_74_string); // 0x18 NEW_2
	SetPhoto(var_74_string); // 0x1a ObjFunc
	var_75_string = ""; // 0x1c PushV
	func_703(var_75_string); // 0x1d NEW_2
	SetPhoto2(var_75_string); // 0x1f ObjFunc
	var_76_int = 0; // 0x21 PushV
	func_840(var_76_int); // 0x22 NEW_2
	SetPlayerName(var_76_int); // 0x24 ObjFunc
	var_23_int = -1; // 0x26 MovI
	IsOverrideActive(var_22_bool); // 0x27 Func
	var_84_bool = var_22_bool; // 0x29 Push
	if(var_84_bool == 0) goto Label_45; // 0x2a JumpB
	var_14_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_21_object); // 0x2d Func
	var_85_object = Obj(); var_86_object = Obj(); // 0x2f PushV
	var_85_object = var_15_object; // 0x30 Mov
	var_86_object = var_21_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_87_object, var_88_object, var_89_string, var_90_bool, var_85_object, var_86_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_24_bool); // 0x36 ObjFunc
	
Label_56:
	var_155_bool = var_24_bool == 0; // 0x38 Not
	if(var_155_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_24_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_156_object = Obj(); // 0x3f PushV
	var_156_object = var_15_object; // 0x40 Mov
	func_565(); // 0x41 NEW_2
	StopDialog(var_21_object); // 0x43 Func
	GetReturnValue(var_23_int); // 0x45 ObjFunc
	var_14_int = var_23_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_641(var_113_int, var_114_string)
{
	var_115_int = 0; var_116_int = 0; // 0x281 PushV
	GetVariable(var_114_string, var_116_int); // 0x282 Func
	var_113_int = var_116_int; // 0x284 Mov
	return 2; // 0x285 Return
}


func_646(var_62_int, var_63_int)
{
	var_64_object = Obj(); var_65_object = Obj(); // 0x286 PushV
	CreateIntVector(var_65_object); // 0x287 Func
	add(var_62_int); // 0x289 ObjFunc
	add(var_63_int); // 0x28b ObjFunc
	var_66_int = 3; // 0x28d PushI
	SendWorldWndMessage(var_66_int, var_65_object); // 0x28e Func
	return 2; // 0x290 Return
}


func_775(var_119_bool, var_120_object)
{
	var_121_bool = 0; var_122_object = Obj(); var_123_string = ""; // 0x308 PushV
	var_122_object = var_120_object; // 0x309 Mov
	var_123_string = "Samopal"; // 0x30a MovS
	func_690(var_122_object, var_123_string); // 0x30b NEW_2
	if(var_121_bool == 0) goto Label_784; // 0x30d JumpB
	var_119_bool = 1; // 0x30e MovB
	return 0; // 0x30f Return
	
Label_784:
	var_119_bool = 0; // 0x310 MovB
	return 0; // 0x311 Return
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
	func_714(var_35_int); // 0x198 NEW_2
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
	func_707(var_57_string, var_58_int); // 0x1b4 NEW_2
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


func_658(var_52_object, var_53_int)
{
	var_54_int = 0; var_55_int = 0; var_56_bool = 0; var_57_int = 0; var_58_int = 0; var_59_bool = 0; // 0x292 PushV
	GetItemID(var_57_int); // 0x293 ObjFunc
	var_60_string = "Category"; // 0x295 PushS
	GetInvItemProperty(var_58_int, var_57_int, var_60_string); // 0x296 Func
	AddItem(var_59_bool, var_52_object, var_58_int, var_53_int); // 0x298 ObjFunc
	var_61_bool = var_59_bool == 0; // 0x29a Not
	if(var_61_bool == 0) goto Label_671; // 0x29b JumpB
	DropItems(var_52_object, var_53_int); // 0x29c ObjFunc
	goto Label_676; // 0x29e Jump
	
Label_676:
	return 6; // 0x2a4 Return
	
Label_671:
	var_62_int = 0; var_63_int = 0; // 0x29f PushV
	var_62_int = var_57_int; // 0x2a0 Mov
	var_63_int = var_53_int; // 0x2a1 Mov
	func_646(var_62_int, var_63_int); // 0x2a2 NEW_2
}


func_786()
{
	var_20_object = Obj(); var_21_object = Obj(); // 0x312 PushV
	var_22_int = 432; // 0x313 PushI
	var_23_int = 2; // 0x314 PushI
	var_24_int = 526370; // 0x315 PushI
	CreateDiaryEntry(var_21_object, var_22_int, var_23_int, var_24_int); // 0x316 Func
	var_25_bool = 0; var_26_object = Obj(); var_27_int = 0; // 0x318 PushV
	var_26_object = var_21_object; // 0x319 Mov
	var_27_int = 430; // 0x31a MovI
	func_812(var_25_bool, var_26_object, var_27_int); // 0x31b NEW_2
	return 2; // 0x31d Return
}


func_151(var_2_object, var_92_string)
{
	var_93_bool = 0; // 0x98 PushV
	func_705(var_93_bool); // 0x99 NEW_2
	var_94_bool = var_93_bool == 0; // 0x9b Not
	if(var_94_bool == 0) goto Label_158; // 0x9c JumpB
	return 0; // 0x9d Return
	
Label_158:
	var_95_bool = var_92_string == var_2_object; // 0x9e Eq
	if(var_95_bool == 0) goto Label_161; // 0x9f JumpB
	return 0; // 0xa0 Return
	
Label_161:
	var_96_string = ""; var_97_bool = 0; // 0xa1 PushV
	var_96_string = var_92_string; // 0xa2 Mov
	var_98_string = ""; // 0xa3 PushS
	var_99_bool = var_92_string == var_98_string; // 0xa4 Eq
	if(var_99_bool == 0) goto Label_168; // 0xa5 JumpB
	var_97_bool = 0; // 0xa6 MovB
	goto Label_169; // 0xa7 Jump
	
Label_169:
	func_598(var_96_string, var_97_bool); // 0xa9 NEW_2
	var_2_object = var_92_string; // 0xab TMov
	return 0; // 0xac Return
	
Label_168:
	var_97_bool = 1; // 0xa8 MovB
}


func_799(var_34_object)
{
	var_35_object = Obj(); var_36_object = Obj(); // 0x31f PushV
	GetDiaryRoot(var_36_object); // 0x320 Func
	var_37_bool = var_36_object == 0; // 0x322 Not
	if(var_37_bool == 0) goto Label_809; // 0x323 JumpB
	var_38_string = "Can't retrieve diary root"; // 0x324 PushS
	Trace(var_38_string); // 0x325 Func
	var_34_object = 0; // 0x327 MovB
	return 2; // 0x328 Return
	
Label_809:
	var_34_object = var_36_object; // 0x329 Mov
	return 2; // 0x32a Return
}


func_677(var_46_object, var_47_string, var_48_int)
{
	var_49_object = Obj(); var_50_object = Obj(); // 0x2a5 PushV
	CreateInvItem(var_50_object); // 0x2a6 Func
	SetItemName(var_47_string); // 0x2a8 ObjFunc
	var_51_object = Obj(); var_52_object = Obj(); var_53_int = 0; // 0x2aa PushV
	var_51_object = var_46_object; // 0x2ab Mov
	var_52_object = var_50_object; // 0x2ac Mov
	var_53_int = var_48_int; // 0x2ad Mov
	func_658(var_52_object, var_53_int); // 0x2ae NEW_2
	return 2; // 0x2b0 Return
}


func_812(var_25_bool, var_26_object, var_27_int)
{
	var_28_object = Obj(); var_29_object = Obj(); var_30_int = 0; var_31_object = Obj(); var_32_object = Obj(); var_33_int = 0; // 0x32c PushV
	var_34_object = Obj(); // 0x32d PushV
	func_799(var_34_object); // 0x32e NEW_2
	var_31_object = var_34_object; // 0x32f Mov
	Find(var_27_int, var_32_object); // 0x331 ObjFunc
	var_39_bool = var_32_object == 0; // 0x333 Not
	if(var_39_bool == 0) goto Label_827; // 0x334 JumpB
	var_40_string = "Can't find diary parent with id: "; // 0x335 PushS
	var_41_int = var_40_string + var_27_int; // 0x336 Add
	Trace(var_41_int); // 0x337 Func
	var_25_bool = 0; // 0x339 MovB
	return 6; // 0x33a Return
	
Label_827:
	AddChild(var_26_object); // 0x33b ObjFunc
	var_42_int = 7; // 0x33d PushI
	SendWorldWndMessage(var_42_int); // 0x33e Func
	GetCategory(var_33_int); // 0x340 ObjFunc
	SetDiarySection(var_33_int); // 0x342 Func
	var_25_bool = 0; // 0x344 MovB
	return 6; // 0x345 Return
}


func_690(var_121_bool, var_123_string)
{
	var_124_int = 0; var_125_bool = 0; var_126_int = 0; var_127_bool = 0; // 0x2b2 PushV
	GetInvItemByName(var_126_int, var_123_string); // 0x2b3 Func
	HasItem(var_126_int, var_127_bool); // 0x2b5 ObjFunc
	var_121_bool = var_127_bool; // 0x2b7 Mov
	return 4; // 0x2b8 Return
}


func_565()
{
	var_157_bool = 0; var_158_bool = 0; // 0x235 PushV
	CameraSwitchToNormal(); // 0x236 Func
	var_159_bool = 0; // 0x238 PushV
	func_705(var_159_bool); // 0x239 NEW_2
	if(var_159_bool == 0) goto Label_573; // 0x23b JumpB
	goto Label_581; // 0x23c Jump
	
Label_581:
	return 2; // 0x245 Return
	
Label_573:
	var_160_string = "head"; // 0x23d PushS
	HasAnimationTrack(var_158_bool, var_160_string); // 0x23e Func
	var_161_bool = var_158_bool; // 0x240 Push
	if(var_161_bool == 0) goto Label_581; // 0x241 JumpB
	var_162_string = "head"; // 0x242 PushS
	UnlookAsync(var_162_string); // 0x243 Func
}


func_697(var_73_int)
{
	var_73_int = 521048; // 0x2b9 MovI
	return 0; // 0x2ba Return
}


func_699(var_72_int)
{
	var_72_int = 521047; // 0x2bb MovI
	return 0; // 0x2bc Return
}


func_701(var_74_string)
{
	var_74_string = "ui/NPC_Citizen2.png"; // 0x2bd MovS
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
	var_75_string = "ui/NPC_Citizen2_b.png"; // 0x2bf MovS
	return 0; // 0x2c0 Return
}


func_705(var_67_bool)
{
	var_67_bool = 0; // 0x2c1 MovB
	return 0; // 0x2c2 Return
}


func_707(var_41_string, var_42_int)
{
	var_43_string = ""; var_44_string = ""; // 0x2c3 PushV
	var_44_string = "idle"; // 0x2c4 MovS
	var_45_int = var_42_int; // 0x2c5 Push
	if(var_45_int == 0) goto Label_712; // 0x2c6 JumpB
	var_44_string = var_44_string + var_42_int; // 0x2c7 Add2
	
Label_712:
	var_41_string = var_44_string; // 0x2c8 Mov
	return 2; // 0x2c9 Return
}


func_582(var_139_string)
{
	var_140_bool = 0; var_141_float = 0; var_142_float = 0; var_143_bool = 0; var_144_float = 0; var_145_float = 0; // 0x246 PushV
	lshHasAnimation(var_143_bool, var_139_string); // 0x247 Func
	var_146_bool = var_143_bool; // 0x249 Push
	if(var_146_bool == 0) goto Label_593; // 0x24a JumpB
	lshGetAnimTimes(var_139_string, var_144_float, var_145_float); // 0x24b Func
	var_147_bool = 0; // 0x24d PushB
	lshPlayAnimation(var_144_float, var_145_float, var_147_bool); // 0x24e Func
	goto Label_597; // 0x250 Jump
	
Label_597:
	return 6; // 0x255 Return
	
Label_593:
	var_148_string = "Can't find lsh animation : "; // 0x251 PushS
	var_149_int = var_148_string + var_139_string; // 0x252 Add
	Trace(var_149_int); // 0x253 Func
}


func_840(var_76_int)
{
	var_77_int = 0; var_78_int = 0; // 0x348 PushV
	var_79_string = "branch"; // 0x349 PushS
	GetVariable(var_79_string, var_78_int); // 0x34a Func
	var_80_int = 0; // 0x34c PushI
	var_81_bool = var_78_int == var_80_int; // 0x34d Eq
	if(var_81_bool == 0) goto Label_850; // 0x34e JumpB
	var_76_int = 1; // 0x34f MovI
	return 2; // 0x350 Return
	
Label_850:
	var_82_int = 1; // 0x352 PushI
	var_83_bool = var_78_int == var_82_int; // 0x353 Eq
	if(var_83_bool == 0) goto Label_855; // 0x354 JumpB
	var_76_int = 2; // 0x355 MovI
	return 2; // 0x356 Return
	
Label_855:
	var_76_int = 3; // 0x357 MovI
	return 2; // 0x358 Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_85_object, var_86_object)
{
	var_0_object = var_86_object; // 0x4b TMov
	var_1_object = var_85_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_91_int = 1; // 0x4e PushI
	if(var_91_int == 0) goto Label_121; // 0x4f JumpB
	var_92_string = ""; // 0x50 PushV
	var_92_string = "Neutral"; // 0x51 MovS
	func_151(var_86_object, var_92_string); // 0x52 NEW_2
	var_109_int = 526360; // 0x54 PushI
	SetMessage(var_109_int); // 0x55 TObjFunc
	ClearReplies(); // 0x57 TObjFunc
	var_110_bool = 0; // 0x59 PushV
	var_110_bool = 0; // 0x5a MovB
	var_111_bool = 0; var_112_object = Obj(); // 0x5b PushV
	var_112_object = var_1_object; // 0x5c MovT
	func_763(var_112_object); // 0x5d NEW_2
	if(var_111_bool == 0) goto Label_102; // 0x5f JumpB
	var_119_bool = 0; var_120_object = Obj(); // 0x60 PushV
	var_120_object = var_1_object; // 0x61 MovT
	func_775(var_119_bool, var_120_object); // 0x62 NEW_2
	if(var_119_bool == 0) goto Label_102; // 0x64 JumpB
	var_110_bool = 1; // 0x65 MovB
	
Label_102:
	if(var_110_bool == 0) goto Label_108; // 0x66 JumpB
	var_128_int = 526361; // 0x67 PushI
	var_129_int = 30084; // 0x68 PushI
	var_130_int = 27646; // 0x69 PushI
	AddReply(var_128_int, var_129_int, var_130_int); // 0x6a TObjFunc
	
Label_108:
	var_131_int = 526364; // 0x6c PushI
	var_132_int = -1; // 0x6d PushI
	var_133_int = 27649; // 0x6e PushI
	AddReply(var_131_int, var_132_int, var_133_int); // 0x6f TObjFunc
	var_134_int = 528671; // 0x71 PushI
	var_135_int = -1; // 0x72 PushI
	var_136_int = 30083; // 0x73 PushI
	AddReply(var_134_int, var_135_int, var_136_int); // 0x74 TObjFunc
	goto Label_121; // 0x76 Jump
	
Label_121:
	var_137_bool = 0; // 0x79 PushV
	func_705(var_137_bool); // 0x7a NEW_2
	if(var_137_bool == 0) goto Label_136; // 0x7c JumpB
	
Label_125:
	lshWaitForAnimEnd(); // 0x7d Func
	var_138_string = var_3_string; // 0x7f PushT
	if(var_138_string == 0) goto Label_130; // 0x80 JumpB
	goto Label_135; // 0x81 Jump
	
Label_135:
	goto Label_150; // 0x87 Jump
	
Label_150:
	return 0; // 0x96 Return
	
Label_130:
	var_139_string = ""; // 0x82 PushV
	var_139_string = var_2_object; // 0x83 MovT
	func_582(var_139_string); // 0x84 NEW_2
	goto Label_125; // 0x86 Jump
	
Label_136:
	var_150_string = "all"; // 0x88 PushS
	var_151_string = "idle"; // 0x89 PushS
	PlayAnimation(var_150_string, var_151_string); // 0x8a Func
	
Label_140:
	WaitForAnimEnd(); // 0x8c Func
	var_152_string = var_3_string; // 0x8e PushT
	if(var_152_string == 0) goto Label_145; // 0x8f JumpB
	goto Label_150; // 0x90 Jump
	
Label_145:
	var_153_string = "all"; // 0x91 PushS
	var_154_string = "idle"; // 0x92 PushS
	PlayAnimation(var_153_string, var_154_string); // 0x93 Func
	goto Label_140; // 0x95 Jump
}


func_714(var_35_int)
{
	var_36_int = 0; var_37_bool = 0; var_38_int = 0; var_39_bool = 0; // 0x2ca PushV
	var_38_int = 0; // 0x2cb MovI
	
Label_716:
	var_40_string = "all"; // 0x2cc PushS
	var_41_string = ""; var_42_int = 0; // 0x2cd PushV
	var_42_int = var_38_int; // 0x2ce Mov
	func_707(var_41_string, var_42_int); // 0x2cf NEW_2
	HasAnimation(var_39_bool, var_40_string, var_41_string); // 0x2d1 Func
	var_46_bool = var_39_bool == 0; // 0x2d3 Not
	if(var_46_bool == 0) goto Label_726; // 0x2d4 JumpB
	goto Label_729; // 0x2d5 Jump
	
Label_729:
	var_35_int = var_38_int; // 0x2d9 Mov
	return 4; // 0x2da Return
	
Label_726:
	var_47_int = 1; // 0x2d6 PushI
	var_38_int = var_38_int + var_47_int; // 0x2d7 Add2
	goto Label_716; // 0x2d8 Jump
}


func_598(var_96_string, var_97_bool)
{
	var_100_bool = 0; var_101_float = 0; var_102_float = 0; var_103_bool = 0; var_104_float = 0; var_105_float = 0; // 0x256 PushV
	lshHasAnimation(var_103_bool, var_96_string); // 0x257 Func
	var_106_bool = var_103_bool; // 0x259 Push
	if(var_106_bool == 0) goto Label_608; // 0x25a JumpB
	lshGetAnimTimes(var_96_string, var_104_float, var_105_float); // 0x25b Func
	lshPlayAnimation(var_104_float, var_105_float, var_97_bool); // 0x25d Func
	goto Label_612; // 0x25f Jump
	
Label_612:
	return 6; // 0x264 Return
	
Label_608:
	var_107_string = "Can't find lsh animation : "; // 0x260 PushS
	var_108_int = var_107_string + var_96_string; // 0x261 Add
	Trace(var_108_int); // 0x262 Func
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


func_731()
{
	var_18_string = "k7q02"; // 0x2dc PushS
	var_19_int = 2; // 0x2dd PushI
	SetVariable(var_18_string, var_19_int); // 0x2de Func
	func_786(); // 0x2e1 NEW_2
	return 0; // 0x2e3 Return
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


func_740(var_43_object)
{
	var_45_string = "white plet 10 is given"; // 0x2e5 PushS
	Trace(var_45_string); // 0x2e6 Func
	var_46_object = Obj(); var_47_string = ""; var_48_int = 0; // 0x2e8 PushV
	var_46_object = var_43_object; // 0x2e9 Mov
	var_47_string = "grass_white_plet"; // 0x2ea MovS
	var_48_int = 10; // 0x2eb MovI
	func_677(var_46_object, var_47_string, var_48_int); // 0x2ec NEW_2
	return 0; // 0x2ee Return
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


func_613(var_27_object)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_float = 0; var_31_cvector = CVector(0,0,0); // 0x265 PushV
	GetEyesHeight(var_30_float); // 0x266 ObjFunc
	var_31_cvector = CVector(0.0, 0.0, 0.0); // 0x268 MovV
	var_32_float = GetByIndex(var_31_cvector, 1); // 0x269 PushE
	var_32_float = var_30_float; // 0x26a Mov
	SetByIndex(var_31_cvector, 1) = var_32_float; // 0x26b PopE
	var_33_string = "head"; // 0x26c PushS
	LookAsync(var_27_object, var_33_string, var_31_cvector); // 0x26d Func
	return 4; // 0x26f Return
}


func_492(var_12_bool)
{
	var_13_bool = 0; var_14_bool = 0; // 0x1ec PushV
	IsLoaded(var_14_bool); // 0x1ed Func
	var_12_bool = var_14_bool; // 0x1ef Mov
	return 2; // 0x1f0 Return
}


func_751()
{
	var_69_string = "playsound"; // 0x2f0 PushS
	var_70_string = "giveitem"; // 0x2f1 PushS
	TriggerWorld(var_69_string, var_70_string); // 0x2f2 Func
	return 0; // 0x2f4 Return
}


func_624()
{
	var_13_bool = 0; // 0x270 PushV
	func_705(var_13_bool); // 0x271 NEW_2
	if(var_13_bool == 0) goto Label_630; // 0x273 JumpB
	lshStopSpeech(); // 0x274 Func
	
Label_630:
	return 0; // 0x276 Return
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
	func_631(var_52_cvector, var_53_cvector); // 0x20c NEW_2
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
	CameraTransit(var_43_cvector, var_41_cvector); // 0x21c Func
	var_65_float = GetByIndex(var_42_cvector, 0); // 0x21e PushE
	var_66_float = GetByIndex(var_42_cvector, 2); // 0x21f PushE
	Rotate(var_65_float, var_66_float); // 0x220 Func
	var_67_bool = 0; // 0x222 PushV
	func_705(var_67_bool); // 0x223 NEW_2
	if(var_67_bool == 0) goto Label_551; // 0x225 JumpB
	goto Label_559; // 0x226 Jump
	
Label_559:
	CameraWaitForPlayFinish(); // 0x22f Func
	ResumeWorld(); // 0x231 Func
	var_25_bool = 1; // 0x233 MovB
	return 18; // 0x234 Return
	
Label_551:
	var_68_string = "head"; // 0x227 PushS
	HasAnimationTrack(var_45_bool, var_68_string); // 0x228 Func
	var_69_bool = var_45_bool; // 0x22a Push
	if(var_69_bool == 0) goto Label_559; // 0x22b JumpB
	var_70_string = "head"; // 0x22c PushS
	LookAsyncCamera(var_70_string); // 0x22d Func
}


func_757()
{
	var_73_int = 0; var_74_int = 0; // 0x2f5 PushV
	var_75_string = "Samopal"; // 0x2f6 PushS
	var_76_int = 1; // 0x2f7 PushI
	RemoveItemByType(var_74_int, var_75_string, var_76_int); // 0x2f8 ObjFunc
	return 2; // 0x2fa Return
}


func_631(var_52_cvector, var_53_cvector)
{
	var_55_float = 0; var_56_float = 0; // 0x277 PushV
	var_57_int = var_53_cvector | var_53_cvector; // 0x278 Or
	var_56_float = sqrt(var_57_int); // 0x279 Sqrt2
	var_58_float = 0.0; // 0x27a PushF
	var_59_bool = var_56_float < var_58_float; // 0x27b LT
	if(var_59_bool == 0) goto Label_639; // 0x27c JumpB
	var_52_cvector = CVector(0.0, 0.0, 0.0); // 0x27d MovV
	return 2; // 0x27e Return
	
Label_639:
	var_52_cvector = var_53_cvector / var_53_cvector; // 0x27f Div2
	return 2; // 0x280 Return
}


func_763(var_111_bool)
{
	var_113_int = 0; var_114_string = ""; // 0x2fc PushV
	var_114_string = "k7q02"; // 0x2fd MovS
	func_641(var_113_int, var_114_string); // 0x2fe NEW_2
	var_117_int = 1; // 0x300 PushI
	var_118_bool = var_113_int == var_117_int; // 0x301 Eq
	if(var_118_bool == 0) goto Label_773; // 0x302 JumpB
	var_111_bool = 1; // 0x303 MovB
	return 0; // 0x304 Return
	
Label_773:
	var_111_bool = 0; // 0x305 MovB
	return 0; // 0x306 Return
}


