task_0_event_5(var_0_int)
{
	StopGroup0(); // 0x8 Func
	sync(); // 0xa Func
	return 0; // 0xc Return
}


task_1_event_26(var_0_int, var_1_string)
{
	var_2_string = "heal"; // 0xe PushS
	var_3_bool = var_1_string == var_2_string; // 0xf Eq
	if(var_3_bool == 0) goto Label_22; // 0x10 JumpB
	var_4_bool = 0; var_5_string = ""; var_6_string = ""; // 0x11 PushV
	var_5_string = "quest_k11_01"; // 0x12 MovS
	var_6_string = "cure_officer"; // 0x13 MovS
	func_311(var_4_bool, var_5_string, var_6_string); // 0x14 NEW_2
	
Label_22:
	return 0; // 0x16 Return
}


task_1_event_0(var_0_int, var_1_object)
{
	return 0; // 0x18 Return
}


task_1_event_41(var_0_int, var_1_object)
{
	var_2_bool = 0; var_3_bool = 0; var_4_bool = 0; var_5_bool = 0; // 0x49 PushV
	var_6_int = var_0_int; // 0x4a PushT
	if(var_6_int == 0) goto Label_77; // 0x4b JumpB
	return 4; // 0x4c Return
	
Label_77:
	IsPlayerActor(var_1_object, var_4_bool); // 0x4d Func
	var_7_bool = var_4_bool; // 0x4f Push
	if(var_7_bool == 0) goto Label_107; // 0x50 JumpB
	IsDead(var_5_bool); // 0x51 Func
	var_8_bool = var_5_bool == 0; // 0x53 Not
	if(var_8_bool == 0) goto Label_107; // 0x54 JumpB
	SetDeathState(); // 0x55 Func
	var_0_int = -1; // 0x57 TMovI
	var_9_bool = 0; var_10_object = Obj(); var_11_float = 0; // 0x58 PushV
	var_10_object = var_1_object; // 0x59 Mov
	var_11_float = -0.3; // 0x5a MovF
	func_266(var_9_bool, var_10_object, var_11_float); // 0x5b NEW_2
	var_47_string = "death"; // 0x5d PushS
	var_48_cvector = CVector(0.0, 40.0, 0.0); // 0x5e PushVec
	PlayGlobalSound(var_47_string, var_48_cvector); // 0x5f Func
	var_49_string = "all"; // 0x61 PushS
	var_50_string = "agony_die"; // 0x62 PushS
	PlayAnimation(var_49_string, var_50_string); // 0x63 Func
	WaitForAnimEnd(); // 0x65 Func
	var_51_string = "all"; // 0x67 PushS
	var_52_string = "agony_die"; // 0x68 PushS
	LockAnimationEnd(var_51_string, var_52_string); // 0x69 Func
	
Label_107:
	return 4; // 0x6b Return
}


task_1_event_6(var_0_int)
{
	func_363(); // 0x6d NEW_2
	func_144(); // 0x70 NEW_2
	var_5_int = var_0_int; // 0x72 PushT
	if(var_5_int == 0) goto Label_121; // 0x73 JumpB
	var_6_object = Obj(); // 0x74 PushV
	func_244(var_6_object); // 0x75 NEW_2
	RemoveActor(var_6_object); // 0x77 Func
	
Label_121:
	TaskCall(0); // 0x7a TaskCall
	func_0(); // 0x7b NEW_2
	TaskReturn(); // 0x7c TaskReturn
	return 0; // 0x7e Return
}


task_1_event_16(var_0_int, var_1_object, var_2_string)
{
	var_3_float = 0; var_4_float = 0; // 0x7f PushV
	var_5_string = "agony"; // 0x80 PushS
	var_6_bool = var_2_string == var_5_string; // 0x81 Eq
	if(var_6_bool == 0) goto Label_138; // 0x82 JumpB
	var_7_string = "agony"; // 0x83 PushS
	GetProperty(var_7_string, var_4_float); // 0x84 Func
	var_8_float = 0.001; // 0x86 PushF
	var_9_bool = var_4_float < var_8_float; // 0x87 LT
	if(var_9_bool == 0) goto Label_138; // 0x88 JumpB
	var_0_int = 1; // 0x89 TMovI
	
Label_138:
	var_10_object = Obj(); var_11_string = ""; // 0x8a PushV
	var_10_object = var_1_object; // 0x8b Mov
	var_11_string = var_2_string; // 0x8c Mov
	func_323(); // 0x8d NEW_2
	return 2; // 0x8f Return
}


event_16(var_0_int, var_1_object, var_2_string)
{
	var_3_float = 0; var_4_float = 0; // 0x143 PushV
	var_5_string = "health"; // 0x144 PushS
	var_6_bool = var_2_string == var_5_string; // 0x145 Eq
	if(var_6_bool == 0) goto Label_335; // 0x146 JumpB
	var_7_string = "health"; // 0x147 PushS
	GetProperty(var_7_string, var_4_float); // 0x148 Func
	var_8_int = 0; // 0x14a PushI
	var_9_bool = var_4_float <= var_8_int; // 0x14b LE
	if(var_9_bool == 0) goto Label_335; // 0x14c JumpB
	SignalDeath(var_1_object); // 0x14d Func
	
Label_335:
	return 2; // 0x14f Return
}


event_43(var_0_int, var_1_object, var_2_int, var_3_float, var_4_float, var_5_cvector, var_6_cvector)
{
	var_7_object = Obj(); var_8_int = 0; var_9_float = 0; var_10_cvector = CVector(0,0,0); var_11_cvector = CVector(0,0,0); // 0x151 PushV
	var_7_object = var_1_object; // 0x152 Mov
	var_8_int = var_2_int; // 0x153 Mov
	var_9_float = var_3_float; // 0x154 Mov
	var_10_cvector = var_5_cvector; // 0x155 Mov
	var_11_cvector = var_6_cvector; // 0x156 Mov
	func_225(var_9_float, var_10_cvector, var_11_cvector); // 0x157 NEW_2
	return 0; // 0x159 Return
}


event_26(var_0_int, var_1_string)
{
	var_2_bool = 0; var_3_bool = 0; // 0x15a PushV
	var_4_string = "cleanup"; // 0x15b PushS
	var_5_bool = var_1_string == var_4_string; // 0x15c Eq
	if(var_5_bool == 0) goto Label_362; // 0x15d JumpB
	var_6_bool = GlobalVars[0]; // 0x15e PushGE
	var_6_bool = 1; // 0x15f MovB
	GlobalVars[0] = var_6_bool; // 0x160 PopGE
	IsLoaded(var_3_bool); // 0x161 Func
	var_7_bool = var_3_bool == 0; // 0x163 Not
	if(var_7_bool == 0) goto Label_362; // 0x164 JumpB
	var_8_object = Obj(); // 0x165 PushV
	func_244(var_8_object); // 0x166 NEW_2
	RemoveActor(var_8_object); // 0x168 Func
	
Label_362:
	return 2; // 0x16a Return
}


event_6(var_0_int)
{
	var_1_bool = GlobalVars[0]; // 0x16b PushGE
	if(var_1_bool == 0) goto Label_370; // 0x16c JumpB
	var_2_object = Obj(); // 0x16d PushV
	func_244(var_2_object); // 0x16e NEW_2
	RemoveActor(var_2_object); // 0x170 Func
	
Label_370:
	return 0; // 0x172 Return
}


main(var_0_int)
{
	var_1_bool = 0; var_2_bool = 0; // 0x19 PushV
	var_0_int = 0; // 0x1a TMovI
	RemoveEnvelope(); // 0x1b Func
	var_3_int = 50; // 0x1d PushI
	var_4_int = 40; // 0x1e PushI
	SetRTEnvelope(var_3_int, var_4_int); // 0x1f Func
	var_5_bool = 0; // 0x21 PushV
	func_239(var_5_bool); // 0x22 NEW_2
	var_8_bool = var_5_bool == 0; // 0x24 Not
	if(var_8_bool == 0) goto Label_43; // 0x25 JumpB
	TaskCall(0); // 0x27 TaskCall
	func_0(); // 0x28 NEW_2
	TaskReturn(); // 0x29 TaskReturn
	
Label_43:
	var_11_string = "agony"; // 0x2b PushS
	Is3DSoundLoaded(var_2_bool, var_11_string); // 0x2c Func
	var_12_bool = 0; // 0x2e PushV
	var_12_bool = 0; // 0x2f MovB
	var_13_bool = var_2_bool; // 0x30 Push
	if(var_13_bool == 0) goto Label_56; // 0x31 JumpB
	var_14_bool = 0; var_15_float = 0; // 0x32 PushV
	var_15_float = 0.33333; // 0x33 MovF
	func_261(var_14_bool, var_15_float); // 0x34 NEW_2
	if(var_14_bool == 0) goto Label_56; // 0x36 JumpB
	var_12_bool = 1; // 0x37 MovB
	
Label_56:
	if(var_12_bool == 0) goto Label_61; // 0x38 JumpB
	var_18_string = "agony"; // 0x39 PushS
	var_19_cvector = CVector(0.0, 40.0, 0.0); // 0x3a PushVec
	PlayGlobalSound(var_18_string, var_19_cvector); // 0x3b Func
	
Label_61:
	var_20_string = "all"; // 0x3d PushS
	var_21_string = "agony"; // 0x3e PushS
	PlayAnimation(var_20_string, var_21_string); // 0x3f Func
	var_22_float = 3.0; // 0x41 PushF
	Sleep(var_22_float); // 0x42 Func
	goto Label_43; // 0x44 Jump
}


func_0()
{
	
Label_0:
	Hold(); // 0x0 Func
	var_9_bool = 0; // 0x2 PushV
	func_239(var_9_bool); // 0x3 NEW_2
	var_10_bool = var_9_bool == 0; // 0x5 Not
	if(var_10_bool == 0) goto Label_0; // 0x6 JumpB
	return 0; // 0x7 Return
}


func_225(var_7_object, var_10_cvector, var_11_cvector)
{
	var_12_object = Obj(); var_13_object = Obj(); var_14_object = Obj(); var_15_object = Obj(); // 0xe1 PushV
	GetScene(var_14_object); // 0xe2 Func
	var_16_string = "scripted"; // 0xe4 PushS
	var_17_string = "blood_dir.xml"; // 0xe5 PushS
	AddActorByType(var_15_object, var_16_string, var_14_object, var_10_cvector, var_11_cvector, var_17_string); // 0xe6 Func
	var_18_object = Obj(); // 0xe8 PushV
	var_18_object = var_7_object; // 0xe9 Mov
	func_181(var_18_object); // 0xea NEW_2
	return 4; // 0xec Return
}


func_261(var_14_bool, var_15_float)
{
	var_16_float = 0; var_17_float = 0; // 0x105 PushV
	rand(var_17_float); // 0x106 Func
	var_14_bool = var_17_float < var_15_float; // 0x108 LT2
	return 2; // 0x109 Return
}


func_266(var_9_bool, var_10_object, var_11_float)
{
	var_12_bool = var_10_object == 0; // 0x10b Not
	if(var_12_bool == 0) goto Label_271; // 0x10c JumpB
	var_9_bool = 0; // 0x10d MovB
	return 0; // 0x10e Return
	
Label_271:
	var_13_int = 0; // 0x10f PushI
	var_14_bool = var_11_float > var_13_int; // 0x110 GT
	if(var_14_bool == 0) goto Label_278; // 0x111 JumpB
	var_15_int = 8; // 0x112 PushI
	SendWorldWndMessage(var_15_int); // 0x113 Func
	goto Label_287; // 0x115 Jump
	
Label_287:
	var_16_float = 0; // 0x11f PushV
	var_16_float = var_11_float; // 0x120 Mov
	func_301(var_16_float); // 0x121 NEW_2
	var_20_bool = 0; var_21_object = Obj(); var_22_string = ""; var_23_float = 0; var_24_float = 0; var_25_float = 0; // 0x123 PushV
	var_21_object = var_10_object; // 0x124 Mov
	var_22_string = "reputation"; // 0x125 MovS
	var_23_float = var_11_float; // 0x126 Mov
	var_24_float = 0; // 0x127 MovI
	var_25_float = 1; // 0x128 MovI
	func_159(var_20_bool, var_21_object, var_22_string, var_23_float, var_24_float, var_25_float); // 0x129 NEW_2
	var_9_bool = 1; // 0x12b MovB
	return 0; // 0x12c Return
	
Label_278:
	var_44_int = 0; // 0x116 PushI
	var_45_bool = var_11_float < var_44_int; // 0x117 LT
	if(var_45_bool == 0) goto Label_285; // 0x118 JumpB
	var_46_int = 9; // 0x119 PushI
	SendWorldWndMessage(var_46_int); // 0x11a Func
	goto Label_287; // 0x11c Jump
	
Label_285:
	var_9_bool = 0; // 0x11d MovB
	return 0; // 0x11e Return
}


func_301(var_16_float)
{
	var_17_object = Obj(); var_18_object = Obj(); // 0x12d PushV
	CreateFloatVector(var_18_object); // 0x12e Func
	add(var_16_float); // 0x130 ObjFunc
	var_19_int = 16; // 0x132 PushI
	SendWorldWndMessage(var_19_int, var_18_object); // 0x133 Func
	return 2; // 0x135 Return
}


func_239(var_5_bool)
{
	var_6_bool = 0; var_7_bool = 0; // 0xef PushV
	IsLoaded(var_7_bool); // 0xf0 Func
	var_5_bool = var_7_bool; // 0xf2 Mov
	return 2; // 0xf3 Return
}


func_144()
{
	StopAnimation(); // 0x90 Func
	return 0; // 0x92 Return
}


func_147(var_28_bool, var_29_object, var_30_string)
{
	var_31_bool = 0; var_32_bool = 0; // 0x93 PushV
	var_33_string = "HasProperty"; // 0x94 PushS
	var_34_int = 2; // 0x95 PushI
	var_35_bool = IsFuncExist(var_29_object, var_33_string, var_34_int); // 0x96 FuncExist
	var_36_bool = var_35_bool == 0; // 0x97 Not
	if(var_36_bool == 0) goto Label_155; // 0x98 JumpB
	var_28_bool = 0; // 0x99 MovB
	return 2; // 0x9a Return
	
Label_155:
	HasProperty(var_30_string, var_32_bool); // 0x9b ObjFunc
	var_28_bool = var_32_bool; // 0x9d Mov
	return 2; // 0x9e Return
}


func_244(var_2_object)
{
	var_3_object = Obj(); var_4_object = Obj(); // 0xf4 PushV
	self(var_4_object); // 0xf5 Func
	var_2_object = var_4_object; // 0xf7 Mov
	return 2; // 0xf8 Return
}


func_181(var_18_object)
{
	var_19_bool = 0; var_20_int = 0; var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_string = ""; var_26_bool = 0; var_27_int = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_string = ""; // 0xb5 PushV
	var_33_bool = var_18_object == 0; // 0xb6 NullEq
	if(var_33_bool == 0) goto Label_185; // 0xb7 JumpB
	return 14; // 0xb8 Return
	
Label_185:
	IsDead(var_26_bool); // 0xb9 Func
	var_34_bool = var_26_bool; // 0xbb Push
	if(var_34_bool == 0) goto Label_190; // 0xbc JumpB
	return 14; // 0xbd Return
	
Label_190:
	GetSecondaryAnimationType(var_27_int); // 0xbe Func
	var_35_int = 0; // 0xc0 PushI
	var_36_bool = var_27_int < var_35_int; // 0xc1 LT
	if(var_36_bool == 0) goto Label_196; // 0xc2 JumpB
	return 14; // 0xc3 Return
	
Label_196:
	GetPosition(var_28_cvector); // 0xc4 ObjFunc
	GetPosition(var_29_cvector); // 0xc6 Func
	GetDirection(var_30_cvector); // 0xc8 Func
	var_31_cvector = var_29_cvector - var_28_cvector; // 0xca Sub2
	var_37_float = GetByIndex(var_31_cvector, 0); // 0xcb PushE
	var_38_float = GetByIndex(var_30_cvector, 0); // 0xcc PushE
	var_39_float = var_37_float * var_38_float; // 0xcd Mult
	var_40_float = GetByIndex(var_31_cvector, 2); // 0xce PushE
	var_41_float = GetByIndex(var_30_cvector, 2); // 0xcf PushE
	var_42_float = var_40_float * var_41_float; // 0xd0 Mult
	var_43_int = var_39_float + var_42_float; // 0xd1 Add
	var_44_int = 0; // 0xd2 PushI
	var_45_bool = var_43_int >= var_44_int; // 0xd3 GE
	if(var_45_bool == 0) goto Label_215; // 0xd4 JumpB
	var_32_string = "fhit"; // 0xd5 MovS
	goto Label_216; // 0xd6 Jump
	
Label_216:
	var_46_string = "hit_react"; // 0xd8 PushS
	var_47_string = "1"; // 0xd9 PushS
	var_48_int = var_32_string + var_47_string; // 0xda Add
	var_49_string = "2"; // 0xdb PushS
	var_50_int = var_32_string + var_49_string; // 0xdc Add
	var_51_int = -10; // 0xdd PushI
	FadeSecondaryAnimation(var_46_string, var_48_int, var_50_int, var_51_int); // 0xde Func
	return 14; // 0xe0 Return
	
Label_215:
	var_32_string = "bhit"; // 0xd7 MovS
}


func_311(var_4_bool, var_5_string, var_6_string)
{
	var_7_object = Obj(); var_8_object = Obj(); // 0x137 PushV
	FindActor(var_8_object, var_5_string); // 0x138 Func
	var_9_bool = var_8_object == 0; // 0x13a NullEq
	if(var_9_bool == 0) goto Label_318; // 0x13b JumpB
	var_4_bool = 0; // 0x13c MovB
	return 2; // 0x13d Return
	
Label_318:
	Trigger(var_8_object, var_6_string); // 0x13e Func
	var_4_bool = 1; // 0x140 MovB
	return 2; // 0x141 Return
}


func_250(var_38_float, var_39_float, var_40_float, var_41_float)
{
	var_42_bool = var_39_float < var_40_float; // 0xfb LT
	if(var_42_bool == 0) goto Label_255; // 0xfc JumpB
	var_38_float = var_40_float; // 0xfd Mov
	return 0; // 0xfe Return
	
Label_255:
	var_43_bool = var_39_float > var_41_float; // 0xff GT
	if(var_43_bool == 0) goto Label_259; // 0x100 JumpB
	var_38_float = var_41_float; // 0x101 Mov
	return 0; // 0x102 Return
	
Label_259:
	var_38_float = var_39_float; // 0x103 Mov
	return 0; // 0x104 Return
}


func_159(var_20_bool, var_21_object, var_22_string, var_23_float, var_24_float, var_25_float)
{
	var_26_float = 0; var_27_float = 0; // 0x9f PushV
	var_28_bool = 0; var_29_object = Obj(); var_30_string = ""; // 0xa0 PushV
	var_29_object = var_21_object; // 0xa1 Mov
	var_30_string = var_22_string; // 0xa2 Mov
	func_147(var_28_bool, var_29_object, var_30_string); // 0xa3 NEW_2
	var_37_bool = var_28_bool == 0; // 0xa5 Not
	if(var_37_bool == 0) goto Label_169; // 0xa6 JumpB
	var_20_bool = 0; // 0xa7 MovB
	return 2; // 0xa8 Return
	
Label_169:
	GetProperty(var_22_string, var_27_float); // 0xa9 ObjFunc
	var_38_float = 0; var_39_float = 0; var_40_float = 0; var_41_float = 0; // 0xab PushV
	var_39_float = var_27_float + var_23_float; // 0xac Add2
	var_40_float = var_24_float; // 0xad Mov
	var_41_float = var_25_float; // 0xae Mov
	func_250(var_38_float, var_39_float, var_40_float, var_41_float); // 0xaf NEW_2
	SetProperty(var_22_string, var_38_float); // 0xb1 ObjFunc
	var_20_bool = 1; // 0xb3 MovB
	return 2; // 0xb4 Return
}


