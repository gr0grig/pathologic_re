task_0_event_5(var_0_int)
{
	StopGroup0(); // 0x8 Func
	sync(); // 0xa Func
	return 0; // 0xc Return
}


task_1_event_0(var_0_int, var_1_object)
{
	var_2_bool = 0; var_3_bool = 0; var_4_float = 0; var_5_bool = 0; var_6_float = 0; var_7_bool = 0; var_8_bool = 0; var_9_float = 0; var_10_bool = 0; var_11_float = 0; // 0x66 PushV
	IsDead(var_7_bool); // 0x67 Func
	var_12_bool = var_7_bool; // 0x69 Push
	if(var_12_bool == 0) goto Label_114; // 0x6a JumpB
	IsOverrideActive(var_8_bool); // 0x6b Func
	var_13_bool = var_8_bool == 0; // 0x6d Not
	if(var_13_bool == 0) goto Label_113; // 0x6e JumpB
	Barter(var_1_object); // 0x6f Func
	
Label_113:
	goto Label_144; // 0x71 Jump
	
Label_144:
	return 10; // 0x90 Return
	
Label_114:
	var_14_string = "agony"; // 0x72 PushS
	GetProperty(var_14_string, var_9_float); // 0x73 Func
	var_15_int = 0; // 0x75 PushI
	var_16_bool = var_9_float == var_15_int; // 0x76 Eq
	if(var_16_bool == 0) goto Label_121; // 0x77 JumpB
	return 10; // 0x78 Return
	
Label_121:
	IsOverrideActive(var_10_bool); // 0x79 Func
	var_17_bool = var_10_bool == 0; // 0x7b Not
	if(var_17_bool == 0) goto Label_144; // 0x7c JumpB
	var_18_string = "agony.xml"; // 0x7d PushS
	var_19_bool = 1; // 0x7e PushB
	var_20_bool = 0; // 0x7f PushB
	var_21_object = Obj(); // 0x80 PushV
	func_342(var_21_object); // 0x81 NEW_2
	ShowWindow(var_18_string, var_19_bool, var_20_bool, var_21_object); // 0x83 Func
	var_24_string = "agony"; // 0x85 PushS
	GetProperty(var_24_string, var_11_float); // 0x86 Func
	var_25_float = 0.001; // 0x88 PushF
	var_26_bool = var_11_float < var_25_float; // 0x89 LT
	if(var_26_bool == 0) goto Label_144; // 0x8a JumpB
	var_27_bool = 0; var_28_object = Obj(); var_29_float = 0; // 0x8b PushV
	var_28_object = var_1_object; // 0x8c Mov
	var_29_float = 0.2; // 0x8d MovF
	func_369(var_27_bool, var_28_object, var_29_float); // 0x8e NEW_2
}


task_1_event_41(var_0_int, var_1_object)
{
	var_2_bool = 0; var_3_bool = 0; var_4_bool = 0; var_5_bool = 0; // 0x91 PushV
	var_6_int = var_0_int; // 0x92 PushT
	if(var_6_int == 0) goto Label_149; // 0x93 JumpB
	return 4; // 0x94 Return
	
Label_149:
	IsPlayerActor(var_1_object, var_4_bool); // 0x95 Func
	var_7_bool = var_4_bool; // 0x97 Push
	if(var_7_bool == 0) goto Label_179; // 0x98 JumpB
	IsDead(var_5_bool); // 0x99 Func
	var_8_bool = var_5_bool == 0; // 0x9b Not
	if(var_8_bool == 0) goto Label_179; // 0x9c JumpB
	SetDeathState(); // 0x9d Func
	var_0_int = -1; // 0x9f TMovI
	var_9_bool = 0; var_10_object = Obj(); var_11_float = 0; // 0xa0 PushV
	var_10_object = var_1_object; // 0xa1 Mov
	var_11_float = -0.3; // 0xa2 MovF
	func_369(var_9_bool, var_10_object, var_11_float); // 0xa3 NEW_2
	var_47_string = "death"; // 0xa5 PushS
	var_48_cvector = CVector(0.0, 40.0, 0.0); // 0xa6 PushVec
	PlayGlobalSound(var_47_string, var_48_cvector); // 0xa7 Func
	var_49_string = "all"; // 0xa9 PushS
	var_50_string = "agony_die"; // 0xaa PushS
	PlayAnimation(var_49_string, var_50_string); // 0xab Func
	WaitForAnimEnd(); // 0xad Func
	var_51_string = "all"; // 0xaf PushS
	var_52_string = "agony_die"; // 0xb0 PushS
	LockAnimationEnd(var_51_string, var_52_string); // 0xb1 Func
	
Label_179:
	return 4; // 0xb3 Return
}


task_1_event_6(var_0_int)
{
	func_463(); // 0xb5 NEW_2
	func_216(); // 0xb8 NEW_2
	var_5_int = var_0_int; // 0xba PushT
	if(var_5_int == 0) goto Label_193; // 0xbb JumpB
	var_6_object = Obj(); // 0xbc PushV
	func_342(var_6_object); // 0xbd NEW_2
	RemoveActor(var_6_object); // 0xbf Func
	
Label_193:
	TaskCall(0); // 0xc2 TaskCall
	func_0(); // 0xc3 NEW_2
	TaskReturn(); // 0xc4 TaskReturn
	return 0; // 0xc6 Return
}


task_1_event_16(var_0_int, var_1_object, var_2_string)
{
	var_3_float = 0; var_4_float = 0; // 0xc7 PushV
	var_5_string = "agony"; // 0xc8 PushS
	var_6_bool = var_2_string == var_5_string; // 0xc9 Eq
	if(var_6_bool == 0) goto Label_210; // 0xca JumpB
	var_7_string = "agony"; // 0xcb PushS
	GetProperty(var_7_string, var_4_float); // 0xcc Func
	var_8_float = 0.001; // 0xce PushF
	var_9_bool = var_4_float < var_8_float; // 0xcf LT
	if(var_9_bool == 0) goto Label_210; // 0xd0 JumpB
	var_0_int = 1; // 0xd1 TMovI
	
Label_210:
	var_10_object = Obj(); var_11_string = ""; // 0xd2 PushV
	var_10_object = var_1_object; // 0xd3 Mov
	var_11_string = var_2_string; // 0xd4 Mov
	func_423(); // 0xd5 NEW_2
	return 2; // 0xd7 Return
}


event_16(var_0_int, var_1_object, var_2_string)
{
	var_3_float = 0; var_4_float = 0; // 0x1a7 PushV
	var_5_string = "health"; // 0x1a8 PushS
	var_6_bool = var_2_string == var_5_string; // 0x1a9 Eq
	if(var_6_bool == 0) goto Label_435; // 0x1aa JumpB
	var_7_string = "health"; // 0x1ab PushS
	GetProperty(var_7_string, var_4_float); // 0x1ac Func
	var_8_int = 0; // 0x1ae PushI
	var_9_bool = var_4_float <= var_8_int; // 0x1af LE
	if(var_9_bool == 0) goto Label_435; // 0x1b0 JumpB
	SignalDeath(var_1_object); // 0x1b1 Func
	
Label_435:
	return 2; // 0x1b3 Return
}


event_43(var_0_int, var_1_object, var_2_int, var_3_float, var_4_float, var_5_cvector, var_6_cvector)
{
	var_7_object = Obj(); var_8_int = 0; var_9_float = 0; var_10_cvector = CVector(0,0,0); var_11_cvector = CVector(0,0,0); // 0x1b5 PushV
	var_7_object = var_1_object; // 0x1b6 Mov
	var_8_int = var_2_int; // 0x1b7 Mov
	var_9_float = var_3_float; // 0x1b8 Mov
	var_10_cvector = var_5_cvector; // 0x1b9 Mov
	var_11_cvector = var_6_cvector; // 0x1ba Mov
	func_297(var_9_float, var_10_cvector, var_11_cvector); // 0x1bb NEW_2
	return 0; // 0x1bd Return
}


event_26(var_0_int, var_1_string)
{
	var_2_bool = 0; var_3_bool = 0; // 0x1be PushV
	var_4_string = "cleanup"; // 0x1bf PushS
	var_5_bool = var_1_string == var_4_string; // 0x1c0 Eq
	if(var_5_bool == 0) goto Label_462; // 0x1c1 JumpB
	var_6_bool = GlobalVars[0]; // 0x1c2 PushGE
	var_6_bool = 1; // 0x1c3 MovB
	GlobalVars[0] = var_6_bool; // 0x1c4 PopGE
	IsLoaded(var_3_bool); // 0x1c5 Func
	var_7_bool = var_3_bool == 0; // 0x1c7 Not
	if(var_7_bool == 0) goto Label_462; // 0x1c8 JumpB
	var_8_object = Obj(); // 0x1c9 PushV
	func_342(var_8_object); // 0x1ca NEW_2
	RemoveActor(var_8_object); // 0x1cc Func
	
Label_462:
	return 2; // 0x1ce Return
}


event_6(var_0_int)
{
	var_1_bool = GlobalVars[0]; // 0x1cf PushGE
	if(var_1_bool == 0) goto Label_470; // 0x1d0 JumpB
	var_2_object = Obj(); // 0x1d1 PushV
	func_342(var_2_object); // 0x1d2 NEW_2
	RemoveActor(var_2_object); // 0x1d4 Func
	
Label_470:
	return 0; // 0x1d6 Return
}


main(var_0_int)
{
	var_1_string = "agony"; // 0xd PushS
	var_2_float = 0.5; // 0xe PushF
	SetProperty(var_1_string, var_2_float); // 0xf Func
	func_25(var_0_int); // 0x12 NEW_2
	return 0; // 0x14 Return
}


func_0()
{
	
Label_0:
	Hold(); // 0x0 Func
	var_11_bool = 0; // 0x2 PushV
	func_311(var_11_bool); // 0x3 NEW_2
	var_12_bool = var_11_bool == 0; // 0x5 Not
	if(var_12_bool == 0) goto Label_0; // 0x6 JumpB
	return 0; // 0x7 Return
}


func_528(var_56_int, var_57_string)
{
	var_58_int = 0; var_59_int = 0; // 0x210 PushV
	GetInvItemByName(var_59_int, var_57_string); // 0x211 Func
	var_56_int = var_59_int; // 0x213 Mov
	return 2; // 0x214 Return
}


func_404(var_16_float)
{
	var_17_object = Obj(); var_18_object = Obj(); // 0x194 PushV
	CreateFloatVector(var_18_object); // 0x195 Func
	add(var_16_float); // 0x197 ObjFunc
	var_19_int = 16; // 0x199 PushI
	SendWorldWndMessage(var_19_int, var_18_object); // 0x19a Func
	return 2; // 0x19c Return
}


func_21()
{
	func_502(); // 0x16 NEW_2
	return 0; // 0x18 Return
}


func_25(var_0_int)
{
	var_3_bool = 0; var_4_bool = 0; // 0x19 PushV
	var_0_int = 0; // 0x1a TMovI
	RemoveEnvelope(); // 0x1b Func
	var_5_int = 50; // 0x1d PushI
	var_6_int = 40; // 0x1e PushI
	SetRTEnvelope(var_5_int, var_6_int); // 0x1f Func
	var_7_bool = 0; // 0x21 PushV
	func_311(var_7_bool); // 0x22 NEW_2
	var_10_bool = var_7_bool == 0; // 0x24 Not
	if(var_10_bool == 0) goto Label_43; // 0x25 JumpB
	TaskCall(0); // 0x27 TaskCall
	func_0(); // 0x28 NEW_2
	TaskReturn(); // 0x29 TaskReturn
	
Label_43:
	var_13_string = "agony"; // 0x2b PushS
	Is3DSoundLoaded(var_4_bool, var_13_string); // 0x2c Func
	var_14_bool = 0; // 0x2e PushV
	var_14_bool = 0; // 0x2f MovB
	var_15_bool = var_4_bool; // 0x30 Push
	if(var_15_bool == 0) goto Label_56; // 0x31 JumpB
	var_16_bool = 0; var_17_float = 0; // 0x32 PushV
	var_17_float = 0.33333; // 0x33 MovF
	func_359(var_16_bool, var_17_float); // 0x34 NEW_2
	if(var_16_bool == 0) goto Label_56; // 0x36 JumpB
	var_14_bool = 1; // 0x37 MovB
	
Label_56:
	if(var_14_bool == 0) goto Label_61; // 0x38 JumpB
	var_20_string = "agony"; // 0x39 PushS
	var_21_cvector = CVector(0.0, 40.0, 0.0); // 0x3a PushVec
	PlayGlobalSound(var_20_string, var_21_cvector); // 0x3b Func
	
Label_61:
	var_22_string = "all"; // 0x3d PushS
	var_23_string = "agony"; // 0x3e PushS
	PlayAnimation(var_22_string, var_23_string); // 0x3f Func
	WaitForAnimEnd(var_4_bool); // 0x41 Func
	var_24_int = 0; // 0x43 PushI
	var_25_bool = var_0_int > var_24_int; // 0x44 GT
	if(var_25_bool == 0) goto Label_93; // 0x45 JumpB
	var_26_bool = var_4_bool; // 0x46 Push
	if(var_26_bool == 0) goto Label_86; // 0x47 JumpB
	var_27_string = "sleep"; // 0x48 PushS
	var_28_cvector = CVector(0.0, 40.0, 0.0); // 0x49 PushVec
	PlayGlobalSound(var_27_string, var_28_cvector); // 0x4a Func
	var_29_string = "all"; // 0x4c PushS
	var_30_string = "agony_sleep"; // 0x4d PushS
	PlayAnimation(var_29_string, var_30_string); // 0x4e Func
	WaitForAnimEnd(); // 0x50 Func
	var_31_string = "all"; // 0x52 PushS
	var_32_string = "agony_sleep"; // 0x53 PushS
	LockAnimationEnd(var_31_string, var_32_string); // 0x54 Func
	
Label_86:
	SetDeathState(); // 0x56 Func
	func_21(); // 0x59 NEW_2
	goto Label_98; // 0x5b Jump
	
Label_98:
	Hold(); // 0x62 Func
	goto Label_98; // 0x64 Jump
	
Label_93:
	var_88_int = 0; // 0x5d PushI
	var_89_bool = var_0_int < var_88_int; // 0x5e LT
	if(var_89_bool == 0) goto Label_97; // 0x5f JumpB
	goto Label_98; // 0x60 Jump
	
Label_97:
	goto Label_43; // 0x61 Jump
}


func_414(var_38_int)
{
	var_39_float = 0; var_40_float = 0; // 0x19e PushV
	GetGameTime(var_40_float); // 0x19f Func
	var_41_int = 1; // 0x1a1 PushI
	var_42_int = 0; // 0x1a2 PushV
	var_43_int = 24; // 0x1a3 PushI
	var_42_int = var_40_float / var_40_float; // 0x1a4 Div2
	var_38_int = var_41_int + var_42_int; // 0x1a5 Add2
	return 2; // 0x1a6 Return
}


func_297(var_7_object, var_10_cvector, var_11_cvector)
{
	var_12_object = Obj(); var_13_object = Obj(); var_14_object = Obj(); var_15_object = Obj(); // 0x129 PushV
	GetScene(var_14_object); // 0x12a Func
	var_16_string = "scripted"; // 0x12c PushS
	var_17_string = "blood_dir.xml"; // 0x12d PushS
	AddActorByType(var_15_object, var_16_string, var_14_object, var_10_cvector, var_11_cvector, var_17_string); // 0x12e Func
	var_18_object = Obj(); // 0x130 PushV
	var_18_object = var_7_object; // 0x131 Mov
	func_253(var_18_object); // 0x132 NEW_2
	return 4; // 0x134 Return
}


func_311(var_7_bool)
{
	var_8_bool = 0; var_9_bool = 0; // 0x137 PushV
	IsLoaded(var_9_bool); // 0x138 Func
	var_7_bool = var_9_bool; // 0x13a Mov
	return 2; // 0x13b Return
}


func_316(var_79_string, var_80_int, var_81_int)
{
	var_82_bool = 0; var_83_bool = 0; // 0x13c PushV
	var_84_bool = 0; var_85_int = 0; var_86_int = 0; // 0x13d PushV
	var_85_int = var_80_int; // 0x13e Mov
	var_86_int = var_81_int; // 0x13f Mov
	func_364(var_84_bool, var_85_int, var_86_int); // 0x140 NEW_2
	if(var_84_bool == 0) goto Label_326; // 0x142 JumpB
	var_87_int = 0; // 0x143 PushI
	AddItem(var_83_bool, var_79_string, var_87_int); // 0x144 Func
	
Label_326:
	return 2; // 0x146 Return
}


func_327(var_63_string, var_64_int, var_65_int, var_66_int)
{
	var_67_int = 0; var_68_bool = 0; var_69_int = 0; var_70_bool = 0; // 0x147 PushV
	var_71_bool = 0; var_72_int = 0; var_73_int = 0; // 0x148 PushV
	var_72_int = var_64_int; // 0x149 Mov
	var_73_int = var_65_int; // 0x14a Mov
	func_364(var_71_bool, var_72_int, var_73_int); // 0x14b NEW_2
	if(var_71_bool == 0) goto Label_341; // 0x14d JumpB
	irand(var_69_int, var_66_int); // 0x14e Func
	var_76_int = 0; // 0x150 PushI
	var_77_int = 1; // 0x151 PushI
	var_78_int = var_69_int + var_77_int; // 0x152 Add
	AddItem(var_70_bool, var_63_string, var_76_int, var_78_int); // 0x153 Func
	
Label_341:
	return 4; // 0x155 Return
}


func_342(var_2_object)
{
	var_3_object = Obj(); var_4_object = Obj(); // 0x156 PushV
	self(var_4_object); // 0x157 Func
	var_2_object = var_4_object; // 0x159 Mov
	return 2; // 0x15a Return
}


func_471(var_35_int, var_36_int)
{
	var_46_int = 0; var_47_bool = 0; var_48_int = 0; var_49_bool = 0; // 0x1d7 PushV
	var_50_bool = var_35_int > var_36_int; // 0x1d8 GT
	if(var_50_bool == 0) goto Label_478; // 0x1d9 JumpB
	var_51_string = "GenerateMoney: iMin > iMax"; // 0x1da PushS
	Trace(var_51_string); // 0x1db Func
	return 4; // 0x1dd Return
	
Label_478:
	var_48_int = 0; // 0x1de MovI
	var_52_bool = var_35_int != var_36_int; // 0x1df Neq
	if(var_52_bool == 0) goto Label_485; // 0x1e0 JumpB
	var_53_int = var_36_int - var_35_int; // 0x1e1 Sub
	irand(var_48_int, var_53_int); // 0x1e2 Func
	goto Label_489; // 0x1e4 Jump
	
Label_489:
	var_48_int = var_48_int + var_35_int; // 0x1e9 Add2
	var_54_int = 0; // 0x1ea PushI
	var_55_bool = var_48_int == var_54_int; // 0x1eb Eq
	if(var_55_bool == 0) goto Label_494; // 0x1ec JumpB
	return 4; // 0x1ed Return
	
Label_494:
	var_56_int = 0; var_57_string = ""; // 0x1ee PushV
	var_57_string = "Money"; // 0x1ef MovS
	func_528(var_56_int, var_57_string); // 0x1f0 NEW_2
	var_60_int = 0; // 0x1f2 PushI
	AddItem(var_49_bool, var_56_int, var_60_int, var_48_int); // 0x1f3 Func
	return 4; // 0x1f5 Return
	
Label_485:
	var_61_int = 0; // 0x1e5 PushI
	var_62_bool = var_35_int == var_61_int; // 0x1e6 Eq
	if(var_62_bool == 0) goto Label_489; // 0x1e7 JumpB
	return 4; // 0x1e8 Return
}


func_216()
{
	StopAnimation(); // 0xd8 Func
	return 0; // 0xda Return
}


func_219(var_28_bool, var_29_object, var_30_string)
{
	var_31_bool = 0; var_32_bool = 0; // 0xdb PushV
	var_33_string = "HasProperty"; // 0xdc PushS
	var_34_int = 2; // 0xdd PushI
	var_35_bool = IsFuncExist(var_29_object, var_33_string, var_34_int); // 0xde FuncExist
	var_36_bool = var_35_bool == 0; // 0xdf Not
	if(var_36_bool == 0) goto Label_227; // 0xe0 JumpB
	var_28_bool = 0; // 0xe1 MovB
	return 2; // 0xe2 Return
	
Label_227:
	HasProperty(var_30_string, var_32_bool); // 0xe3 ObjFunc
	var_28_bool = var_32_bool; // 0xe5 Mov
	return 2; // 0xe6 Return
}


func_348(var_38_float, var_39_float, var_40_float, var_41_float)
{
	var_42_bool = var_39_float < var_40_float; // 0x15d LT
	if(var_42_bool == 0) goto Label_353; // 0x15e JumpB
	var_38_float = var_40_float; // 0x15f Mov
	return 0; // 0x160 Return
	
Label_353:
	var_43_bool = var_39_float > var_41_float; // 0x161 GT
	if(var_43_bool == 0) goto Label_357; // 0x162 JumpB
	var_38_float = var_41_float; // 0x163 Mov
	return 0; // 0x164 Return
	
Label_357:
	var_38_float = var_39_float; // 0x165 Mov
	return 0; // 0x166 Return
}


func_359(var_16_bool, var_17_float)
{
	var_18_float = 0; var_19_float = 0; // 0x167 PushV
	rand(var_19_float); // 0x168 Func
	var_16_bool = var_19_float < var_17_float; // 0x16a LT2
	return 2; // 0x16b Return
}


func_231(var_20_bool, var_21_object, var_22_string, var_23_float, var_24_float, var_25_float)
{
	var_26_float = 0; var_27_float = 0; // 0xe7 PushV
	var_28_bool = 0; var_29_object = Obj(); var_30_string = ""; // 0xe8 PushV
	var_29_object = var_21_object; // 0xe9 Mov
	var_30_string = var_22_string; // 0xea Mov
	func_219(var_28_bool, var_29_object, var_30_string); // 0xeb NEW_2
	var_37_bool = var_28_bool == 0; // 0xed Not
	if(var_37_bool == 0) goto Label_241; // 0xee JumpB
	var_20_bool = 0; // 0xef MovB
	return 2; // 0xf0 Return
	
Label_241:
	GetProperty(var_22_string, var_27_float); // 0xf1 ObjFunc
	var_38_float = 0; var_39_float = 0; var_40_float = 0; var_41_float = 0; // 0xf3 PushV
	var_39_float = var_27_float + var_23_float; // 0xf4 Add2
	var_40_float = var_24_float; // 0xf5 Mov
	var_41_float = var_25_float; // 0xf6 Mov
	func_348(var_38_float, var_39_float, var_40_float, var_41_float); // 0xf7 NEW_2
	SetProperty(var_22_string, var_38_float); // 0xf9 ObjFunc
	var_20_bool = 1; // 0xfb MovB
	return 2; // 0xfc Return
}


func_364(var_71_bool, var_72_int, var_73_int)
{
	var_74_int = 0; var_75_int = 0; // 0x16c PushV
	irand(var_75_int, var_73_int); // 0x16d Func
	var_71_bool = var_75_int < var_72_int; // 0x16f LT2
	return 2; // 0x170 Return
}


func_369(var_9_bool, var_10_object, var_11_float)
{
	var_12_bool = var_10_object == 0; // 0x172 Not
	if(var_12_bool == 0) goto Label_374; // 0x173 JumpB
	var_9_bool = 0; // 0x174 MovB
	return 0; // 0x175 Return
	
Label_374:
	var_13_int = 0; // 0x176 PushI
	var_14_bool = var_11_float > var_13_int; // 0x177 GT
	if(var_14_bool == 0) goto Label_381; // 0x178 JumpB
	var_15_int = 8; // 0x179 PushI
	SendWorldWndMessage(var_15_int); // 0x17a Func
	goto Label_390; // 0x17c Jump
	
Label_390:
	var_16_float = 0; // 0x186 PushV
	var_16_float = var_11_float; // 0x187 Mov
	func_404(var_16_float); // 0x188 NEW_2
	var_20_bool = 0; var_21_object = Obj(); var_22_string = ""; var_23_float = 0; var_24_float = 0; var_25_float = 0; // 0x18a PushV
	var_21_object = var_10_object; // 0x18b Mov
	var_22_string = "reputation"; // 0x18c MovS
	var_23_float = var_11_float; // 0x18d Mov
	var_24_float = 0; // 0x18e MovI
	var_25_float = 1; // 0x18f MovI
	func_231(var_20_bool, var_21_object, var_22_string, var_23_float, var_24_float, var_25_float); // 0x190 NEW_2
	var_9_bool = 1; // 0x192 MovB
	return 0; // 0x193 Return
	
Label_381:
	var_44_int = 0; // 0x17d PushI
	var_45_bool = var_11_float < var_44_int; // 0x17e LT
	if(var_45_bool == 0) goto Label_388; // 0x17f JumpB
	var_46_int = 9; // 0x180 PushI
	SendWorldWndMessage(var_46_int); // 0x181 Func
	goto Label_390; // 0x183 Jump
	
Label_388:
	var_9_bool = 0; // 0x184 MovB
	return 0; // 0x185 Return
}


func_502()
{
	var_33_bool = 0; var_34_bool = 0; // 0x1f6 PushV
	var_35_int = 0; var_36_int = 0; // 0x1f7 PushV
	var_35_int = 0; // 0x1f8 MovI
	var_37_int = 10; // 0x1f9 PushI
	var_38_int = 0; // 0x1fa PushV
	func_414(var_38_int); // 0x1fb NEW_2
	var_44_int = 100; // 0x1fd PushI
	var_45_float = var_38_int * var_44_int; // 0x1fe Mult
	var_36_int = var_37_int + var_45_float; // 0x1ff Add2
	func_471(var_35_int, var_36_int); // 0x200 NEW_2
	var_63_string = ""; var_64_int = 0; var_65_int = 0; var_66_int = 0; // 0x202 PushV
	var_63_string = "bottle_water"; // 0x203 MovS
	var_64_int = 1; // 0x204 MovI
	var_65_int = 4; // 0x205 MovI
	var_66_int = 4; // 0x206 MovI
	func_327(var_63_string, var_64_int, var_65_int, var_66_int); // 0x207 NEW_2
	var_79_string = ""; var_80_int = 0; var_81_int = 0; // 0x209 PushV
	var_79_string = "lockpick"; // 0x20a MovS
	var_80_int = 1; // 0x20b MovI
	var_81_int = 6; // 0x20c MovI
	func_316(var_79_string, var_80_int, var_81_int); // 0x20d NEW_2
	return 2; // 0x20f Return
}


func_253(var_18_object)
{
	var_19_bool = 0; var_20_int = 0; var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_string = ""; var_26_bool = 0; var_27_int = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_string = ""; // 0xfd PushV
	var_33_bool = var_18_object == 0; // 0xfe NullEq
	if(var_33_bool == 0) goto Label_257; // 0xff JumpB
	return 14; // 0x100 Return
	
Label_257:
	IsDead(var_26_bool); // 0x101 Func
	var_34_bool = var_26_bool; // 0x103 Push
	if(var_34_bool == 0) goto Label_262; // 0x104 JumpB
	return 14; // 0x105 Return
	
Label_262:
	GetSecondaryAnimationType(var_27_int); // 0x106 Func
	var_35_int = 0; // 0x108 PushI
	var_36_bool = var_27_int < var_35_int; // 0x109 LT
	if(var_36_bool == 0) goto Label_268; // 0x10a JumpB
	return 14; // 0x10b Return
	
Label_268:
	GetPosition(var_28_cvector); // 0x10c ObjFunc
	GetPosition(var_29_cvector); // 0x10e Func
	GetDirection(var_30_cvector); // 0x110 Func
	var_31_cvector = var_29_cvector - var_28_cvector; // 0x112 Sub2
	var_37_float = GetByIndex(var_31_cvector, 0); // 0x113 PushE
	var_38_float = GetByIndex(var_30_cvector, 0); // 0x114 PushE
	var_39_float = var_37_float * var_38_float; // 0x115 Mult
	var_40_float = GetByIndex(var_31_cvector, 2); // 0x116 PushE
	var_41_float = GetByIndex(var_30_cvector, 2); // 0x117 PushE
	var_42_float = var_40_float * var_41_float; // 0x118 Mult
	var_43_int = var_39_float + var_42_float; // 0x119 Add
	var_44_int = 0; // 0x11a PushI
	var_45_bool = var_43_int >= var_44_int; // 0x11b GE
	if(var_45_bool == 0) goto Label_287; // 0x11c JumpB
	var_32_string = "fhit"; // 0x11d MovS
	goto Label_288; // 0x11e Jump
	
Label_288:
	var_46_string = "hit_react"; // 0x120 PushS
	var_47_string = "1"; // 0x121 PushS
	var_48_int = var_32_string + var_47_string; // 0x122 Add
	var_49_string = "2"; // 0x123 PushS
	var_50_int = var_32_string + var_49_string; // 0x124 Add
	var_51_int = -10; // 0x125 PushI
	FadeSecondaryAnimation(var_46_string, var_48_int, var_50_int, var_51_int); // 0x126 Func
	return 14; // 0x128 Return
	
Label_287:
	var_32_string = "bhit"; // 0x11f MovS
}


