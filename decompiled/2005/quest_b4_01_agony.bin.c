task_0_event_5(var_0_int)
{
	StopGroup0(); // 0x8 Func
	sync(); // 0xa Func
	return 0; // 0xc Return
}


task_1_event_0(var_0_int, var_1_object)
{
	return 0; // 0xe Return
}


task_1_event_41(var_0_int, var_1_object)
{
	var_2_bool = 0; var_3_bool = 0; var_4_bool = 0; var_5_bool = 0; // 0x5d PushV
	var_6_int = var_0_int; // 0x5e PushT
	if(var_6_int == 0) goto Label_97; // 0x5f JumpB
	return 4; // 0x60 Return
	
Label_97:
	IsPlayerActor(var_1_object, var_4_bool); // 0x61 Func
	var_7_bool = var_4_bool; // 0x63 Push
	if(var_7_bool == 0) goto Label_127; // 0x64 JumpB
	IsDead(var_5_bool); // 0x65 Func
	var_8_bool = var_5_bool == 0; // 0x67 Not
	if(var_8_bool == 0) goto Label_127; // 0x68 JumpB
	SetDeathState(); // 0x69 Func
	var_0_int = -1; // 0x6b TMovI
	var_9_bool = 0; var_10_object = Obj(); var_11_float = 0; // 0x6c PushV
	var_10_object = var_1_object; // 0x6d Mov
	var_11_float = -0.3; // 0x6e MovF
	func_286(var_9_bool, var_10_object, var_11_float); // 0x6f NEW_2
	var_47_string = "death"; // 0x71 PushS
	var_48_cvector = CVector(0.0, 40.0, 0.0); // 0x72 PushVec
	PlayGlobalSound(var_47_string, var_48_cvector); // 0x73 Func
	var_49_string = "all"; // 0x75 PushS
	var_50_string = "agony_die"; // 0x76 PushS
	PlayAnimation(var_49_string, var_50_string); // 0x77 Func
	WaitForAnimEnd(); // 0x79 Func
	var_51_string = "all"; // 0x7b PushS
	var_52_string = "agony_die"; // 0x7c PushS
	LockAnimationEnd(var_51_string, var_52_string); // 0x7d Func
	
Label_127:
	return 4; // 0x7f Return
}


task_1_event_6(var_0_int)
{
	func_371(); // 0x81 NEW_2
	func_164(); // 0x84 NEW_2
	var_5_int = var_0_int; // 0x86 PushT
	if(var_5_int == 0) goto Label_141; // 0x87 JumpB
	var_6_object = Obj(); // 0x88 PushV
	func_264(var_6_object); // 0x89 NEW_2
	RemoveActor(var_6_object); // 0x8b Func
	
Label_141:
	TaskCall(0); // 0x8e TaskCall
	func_0(); // 0x8f NEW_2
	TaskReturn(); // 0x90 TaskReturn
	return 0; // 0x92 Return
}


task_1_event_16(var_0_int, var_1_object, var_2_string)
{
	var_3_float = 0; var_4_float = 0; // 0x93 PushV
	var_5_string = "agony"; // 0x94 PushS
	var_6_bool = var_2_string == var_5_string; // 0x95 Eq
	if(var_6_bool == 0) goto Label_158; // 0x96 JumpB
	var_7_string = "agony"; // 0x97 PushS
	GetProperty(var_7_string, var_4_float); // 0x98 Func
	var_8_float = 0.001; // 0x9a PushF
	var_9_bool = var_4_float < var_8_float; // 0x9b LT
	if(var_9_bool == 0) goto Label_158; // 0x9c JumpB
	var_0_int = 1; // 0x9d TMovI
	
Label_158:
	var_10_object = Obj(); var_11_string = ""; // 0x9e PushV
	var_10_object = var_1_object; // 0x9f Mov
	var_11_string = var_2_string; // 0xa0 Mov
	func_331(); // 0xa1 NEW_2
	return 2; // 0xa3 Return
}


event_16(var_0_int, var_1_object, var_2_string)
{
	var_3_float = 0; var_4_float = 0; // 0x14b PushV
	var_5_string = "health"; // 0x14c PushS
	var_6_bool = var_2_string == var_5_string; // 0x14d Eq
	if(var_6_bool == 0) goto Label_343; // 0x14e JumpB
	var_7_string = "health"; // 0x14f PushS
	GetProperty(var_7_string, var_4_float); // 0x150 Func
	var_8_int = 0; // 0x152 PushI
	var_9_bool = var_4_float <= var_8_int; // 0x153 LE
	if(var_9_bool == 0) goto Label_343; // 0x154 JumpB
	SignalDeath(var_1_object); // 0x155 Func
	
Label_343:
	return 2; // 0x157 Return
}


event_43(var_0_int, var_1_object, var_2_int, var_3_float, var_4_float, var_5_cvector, var_6_cvector)
{
	var_7_object = Obj(); var_8_int = 0; var_9_float = 0; var_10_cvector = CVector(0,0,0); var_11_cvector = CVector(0,0,0); // 0x159 PushV
	var_7_object = var_1_object; // 0x15a Mov
	var_8_int = var_2_int; // 0x15b Mov
	var_9_float = var_3_float; // 0x15c Mov
	var_10_cvector = var_5_cvector; // 0x15d Mov
	var_11_cvector = var_6_cvector; // 0x15e Mov
	func_245(var_9_float, var_10_cvector, var_11_cvector); // 0x15f NEW_2
	return 0; // 0x161 Return
}


event_26(var_0_int, var_1_string)
{
	var_2_bool = 0; var_3_bool = 0; // 0x162 PushV
	var_4_string = "cleanup"; // 0x163 PushS
	var_5_bool = var_1_string == var_4_string; // 0x164 Eq
	if(var_5_bool == 0) goto Label_370; // 0x165 JumpB
	var_6_bool = GlobalVars[0]; // 0x166 PushGE
	var_6_bool = 1; // 0x167 MovB
	GlobalVars[0] = var_6_bool; // 0x168 PopGE
	IsLoaded(var_3_bool); // 0x169 Func
	var_7_bool = var_3_bool == 0; // 0x16b Not
	if(var_7_bool == 0) goto Label_370; // 0x16c JumpB
	var_8_object = Obj(); // 0x16d PushV
	func_264(var_8_object); // 0x16e NEW_2
	RemoveActor(var_8_object); // 0x170 Func
	
Label_370:
	return 2; // 0x172 Return
}


event_6(var_0_int)
{
	var_1_bool = GlobalVars[0]; // 0x173 PushGE
	if(var_1_bool == 0) goto Label_378; // 0x174 JumpB
	var_2_object = Obj(); // 0x175 PushV
	func_264(var_2_object); // 0x176 NEW_2
	RemoveActor(var_2_object); // 0x178 Func
	
Label_378:
	return 0; // 0x17a Return
}


main(var_0_int)
{
	var_1_bool = 0; var_2_bool = 0; // 0x10 PushV
	var_0_int = 0; // 0x11 TMovI
	RemoveEnvelope(); // 0x12 Func
	var_3_int = 50; // 0x14 PushI
	var_4_int = 40; // 0x15 PushI
	SetRTEnvelope(var_3_int, var_4_int); // 0x16 Func
	var_5_bool = 0; // 0x18 PushV
	func_259(var_5_bool); // 0x19 NEW_2
	var_8_bool = var_5_bool == 0; // 0x1b Not
	if(var_8_bool == 0) goto Label_34; // 0x1c JumpB
	TaskCall(0); // 0x1e TaskCall
	func_0(); // 0x1f NEW_2
	TaskReturn(); // 0x20 TaskReturn
	
Label_34:
	var_11_string = "agony"; // 0x22 PushS
	Is3DSoundLoaded(var_2_bool, var_11_string); // 0x23 Func
	var_12_bool = 0; // 0x25 PushV
	var_12_bool = 0; // 0x26 MovB
	var_13_bool = var_2_bool; // 0x27 Push
	if(var_13_bool == 0) goto Label_47; // 0x28 JumpB
	var_14_bool = 0; var_15_float = 0; // 0x29 PushV
	var_15_float = 0.33333; // 0x2a MovF
	func_281(var_14_bool, var_15_float); // 0x2b NEW_2
	if(var_14_bool == 0) goto Label_47; // 0x2d JumpB
	var_12_bool = 1; // 0x2e MovB
	
Label_47:
	if(var_12_bool == 0) goto Label_52; // 0x2f JumpB
	var_18_string = "agony"; // 0x30 PushS
	var_19_cvector = CVector(0.0, 40.0, 0.0); // 0x31 PushVec
	PlayGlobalSound(var_18_string, var_19_cvector); // 0x32 Func
	
Label_52:
	var_20_string = "all"; // 0x34 PushS
	var_21_string = "agony"; // 0x35 PushS
	PlayAnimation(var_20_string, var_21_string); // 0x36 Func
	WaitForAnimEnd(var_2_bool); // 0x38 Func
	var_22_int = 0; // 0x3a PushI
	var_23_bool = var_0_int > var_22_int; // 0x3b GT
	if(var_23_bool == 0) goto Label_84; // 0x3c JumpB
	var_24_bool = var_2_bool; // 0x3d Push
	if(var_24_bool == 0) goto Label_77; // 0x3e JumpB
	var_25_string = "sleep"; // 0x3f PushS
	var_26_cvector = CVector(0.0, 40.0, 0.0); // 0x40 PushVec
	PlayGlobalSound(var_25_string, var_26_cvector); // 0x41 Func
	var_27_string = "all"; // 0x43 PushS
	var_28_string = "agony_sleep"; // 0x44 PushS
	PlayAnimation(var_27_string, var_28_string); // 0x45 Func
	WaitForAnimEnd(); // 0x47 Func
	var_29_string = "all"; // 0x49 PushS
	var_30_string = "agony_sleep"; // 0x4a PushS
	LockAnimationEnd(var_29_string, var_30_string); // 0x4b Func
	
Label_77:
	SetDeathState(); // 0x4d Func
	func_15(); // 0x50 NEW_2
	goto Label_89; // 0x52 Jump
	
Label_89:
	Hold(); // 0x59 Func
	goto Label_89; // 0x5b Jump
	
Label_84:
	var_31_int = 0; // 0x54 PushI
	var_32_bool = var_0_int < var_31_int; // 0x55 LT
	if(var_32_bool == 0) goto Label_88; // 0x56 JumpB
	goto Label_89; // 0x57 Jump
	
Label_88:
	goto Label_34; // 0x58 Jump
}


func_0()
{
	
Label_0:
	Hold(); // 0x0 Func
	var_9_bool = 0; // 0x2 PushV
	func_259(var_9_bool); // 0x3 NEW_2
	var_10_bool = var_9_bool == 0; // 0x5 Not
	if(var_10_bool == 0) goto Label_0; // 0x6 JumpB
	return 0; // 0x7 Return
}


func_321(var_16_float)
{
	var_17_object = Obj(); var_18_object = Obj(); // 0x141 PushV
	CreateFloatVector(var_18_object); // 0x142 Func
	add(var_16_float); // 0x144 ObjFunc
	var_19_int = 16; // 0x146 PushI
	SendWorldWndMessage(var_19_int, var_18_object); // 0x147 Func
	return 2; // 0x149 Return
}


func_259(var_5_bool)
{
	var_6_bool = 0; var_7_bool = 0; // 0x103 PushV
	IsLoaded(var_7_bool); // 0x104 Func
	var_5_bool = var_7_bool; // 0x106 Mov
	return 2; // 0x107 Return
}


func_164()
{
	StopAnimation(); // 0xa4 Func
	return 0; // 0xa6 Return
}


func_167(var_28_bool, var_29_object, var_30_string)
{
	var_31_bool = 0; var_32_bool = 0; // 0xa7 PushV
	var_33_string = "HasProperty"; // 0xa8 PushS
	var_34_int = 2; // 0xa9 PushI
	var_35_bool = IsFuncExist(var_29_object, var_33_string, var_34_int); // 0xaa FuncExist
	var_36_bool = var_35_bool == 0; // 0xab Not
	if(var_36_bool == 0) goto Label_175; // 0xac JumpB
	var_28_bool = 0; // 0xad MovB
	return 2; // 0xae Return
	
Label_175:
	HasProperty(var_30_string, var_32_bool); // 0xaf ObjFunc
	var_28_bool = var_32_bool; // 0xb1 Mov
	return 2; // 0xb2 Return
}


func_264(var_2_object)
{
	var_3_object = Obj(); var_4_object = Obj(); // 0x108 PushV
	self(var_4_object); // 0x109 Func
	var_2_object = var_4_object; // 0x10b Mov
	return 2; // 0x10c Return
}


func_201(var_18_object)
{
	var_19_bool = 0; var_20_int = 0; var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_string = ""; var_26_bool = 0; var_27_int = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_string = ""; // 0xc9 PushV
	var_33_bool = var_18_object == 0; // 0xca NullEq
	if(var_33_bool == 0) goto Label_205; // 0xcb JumpB
	return 14; // 0xcc Return
	
Label_205:
	IsDead(var_26_bool); // 0xcd Func
	var_34_bool = var_26_bool; // 0xcf Push
	if(var_34_bool == 0) goto Label_210; // 0xd0 JumpB
	return 14; // 0xd1 Return
	
Label_210:
	GetSecondaryAnimationType(var_27_int); // 0xd2 Func
	var_35_int = 0; // 0xd4 PushI
	var_36_bool = var_27_int < var_35_int; // 0xd5 LT
	if(var_36_bool == 0) goto Label_216; // 0xd6 JumpB
	return 14; // 0xd7 Return
	
Label_216:
	GetPosition(var_28_cvector); // 0xd8 ObjFunc
	GetPosition(var_29_cvector); // 0xda Func
	GetDirection(var_30_cvector); // 0xdc Func
	var_31_cvector = var_29_cvector - var_28_cvector; // 0xde Sub2
	var_37_float = GetByIndex(var_31_cvector, 0); // 0xdf PushE
	var_38_float = GetByIndex(var_30_cvector, 0); // 0xe0 PushE
	var_39_float = var_37_float * var_38_float; // 0xe1 Mult
	var_40_float = GetByIndex(var_31_cvector, 2); // 0xe2 PushE
	var_41_float = GetByIndex(var_30_cvector, 2); // 0xe3 PushE
	var_42_float = var_40_float * var_41_float; // 0xe4 Mult
	var_43_int = var_39_float + var_42_float; // 0xe5 Add
	var_44_int = 0; // 0xe6 PushI
	var_45_bool = var_43_int >= var_44_int; // 0xe7 GE
	if(var_45_bool == 0) goto Label_235; // 0xe8 JumpB
	var_32_string = "fhit"; // 0xe9 MovS
	goto Label_236; // 0xea Jump
	
Label_236:
	var_46_string = "hit_react"; // 0xec PushS
	var_47_string = "1"; // 0xed PushS
	var_48_int = var_32_string + var_47_string; // 0xee Add
	var_49_string = "2"; // 0xef PushS
	var_50_int = var_32_string + var_49_string; // 0xf0 Add
	var_51_int = -10; // 0xf1 PushI
	FadeSecondaryAnimation(var_46_string, var_48_int, var_50_int, var_51_int); // 0xf2 Func
	return 14; // 0xf4 Return
	
Label_235:
	var_32_string = "bhit"; // 0xeb MovS
}


func_270(var_38_float, var_39_float, var_40_float, var_41_float)
{
	var_42_bool = var_39_float < var_40_float; // 0x10f LT
	if(var_42_bool == 0) goto Label_275; // 0x110 JumpB
	var_38_float = var_40_float; // 0x111 Mov
	return 0; // 0x112 Return
	
Label_275:
	var_43_bool = var_39_float > var_41_float; // 0x113 GT
	if(var_43_bool == 0) goto Label_279; // 0x114 JumpB
	var_38_float = var_41_float; // 0x115 Mov
	return 0; // 0x116 Return
	
Label_279:
	var_38_float = var_39_float; // 0x117 Mov
	return 0; // 0x118 Return
}


func_15()
{
	return 0; // 0xf Return
}


func_179(var_20_bool, var_21_object, var_22_string, var_23_float, var_24_float, var_25_float)
{
	var_26_float = 0; var_27_float = 0; // 0xb3 PushV
	var_28_bool = 0; var_29_object = Obj(); var_30_string = ""; // 0xb4 PushV
	var_29_object = var_21_object; // 0xb5 Mov
	var_30_string = var_22_string; // 0xb6 Mov
	func_167(var_28_bool, var_29_object, var_30_string); // 0xb7 NEW_2
	var_37_bool = var_28_bool == 0; // 0xb9 Not
	if(var_37_bool == 0) goto Label_189; // 0xba JumpB
	var_20_bool = 0; // 0xbb MovB
	return 2; // 0xbc Return
	
Label_189:
	GetProperty(var_22_string, var_27_float); // 0xbd ObjFunc
	var_38_float = 0; var_39_float = 0; var_40_float = 0; var_41_float = 0; // 0xbf PushV
	var_39_float = var_27_float + var_23_float; // 0xc0 Add2
	var_40_float = var_24_float; // 0xc1 Mov
	var_41_float = var_25_float; // 0xc2 Mov
	func_270(var_38_float, var_39_float, var_40_float, var_41_float); // 0xc3 NEW_2
	SetProperty(var_22_string, var_38_float); // 0xc5 ObjFunc
	var_20_bool = 1; // 0xc7 MovB
	return 2; // 0xc8 Return
}


func_245(var_7_object, var_10_cvector, var_11_cvector)
{
	var_12_object = Obj(); var_13_object = Obj(); var_14_object = Obj(); var_15_object = Obj(); // 0xf5 PushV
	GetScene(var_14_object); // 0xf6 Func
	var_16_string = "scripted"; // 0xf8 PushS
	var_17_string = "blood_dir.xml"; // 0xf9 PushS
	AddActorByType(var_15_object, var_16_string, var_14_object, var_10_cvector, var_11_cvector, var_17_string); // 0xfa Func
	var_18_object = Obj(); // 0xfc PushV
	var_18_object = var_7_object; // 0xfd Mov
	func_201(var_18_object); // 0xfe NEW_2
	return 4; // 0x100 Return
}


func_281(var_14_bool, var_15_float)
{
	var_16_float = 0; var_17_float = 0; // 0x119 PushV
	rand(var_17_float); // 0x11a Func
	var_14_bool = var_17_float < var_15_float; // 0x11c LT2
	return 2; // 0x11d Return
}


func_286(var_9_bool, var_10_object, var_11_float)
{
	var_12_bool = var_10_object == 0; // 0x11f Not
	if(var_12_bool == 0) goto Label_291; // 0x120 JumpB
	var_9_bool = 0; // 0x121 MovB
	return 0; // 0x122 Return
	
Label_291:
	var_13_int = 0; // 0x123 PushI
	var_14_bool = var_11_float > var_13_int; // 0x124 GT
	if(var_14_bool == 0) goto Label_298; // 0x125 JumpB
	var_15_int = 8; // 0x126 PushI
	SendWorldWndMessage(var_15_int); // 0x127 Func
	goto Label_307; // 0x129 Jump
	
Label_307:
	var_16_float = 0; // 0x133 PushV
	var_16_float = var_11_float; // 0x134 Mov
	func_321(var_16_float); // 0x135 NEW_2
	var_20_bool = 0; var_21_object = Obj(); var_22_string = ""; var_23_float = 0; var_24_float = 0; var_25_float = 0; // 0x137 PushV
	var_21_object = var_10_object; // 0x138 Mov
	var_22_string = "reputation"; // 0x139 MovS
	var_23_float = var_11_float; // 0x13a Mov
	var_24_float = 0; // 0x13b MovI
	var_25_float = 1; // 0x13c MovI
	func_179(var_20_bool, var_21_object, var_22_string, var_23_float, var_24_float, var_25_float); // 0x13d NEW_2
	var_9_bool = 1; // 0x13f MovB
	return 0; // 0x140 Return
	
Label_298:
	var_44_int = 0; // 0x12a PushI
	var_45_bool = var_11_float < var_44_int; // 0x12b LT
	if(var_45_bool == 0) goto Label_305; // 0x12c JumpB
	var_46_int = 9; // 0x12d PushI
	SendWorldWndMessage(var_46_int); // 0x12e Func
	goto Label_307; // 0x130 Jump
	
Label_305:
	var_9_bool = 0; // 0x131 MovB
	return 0; // 0x132 Return
}


