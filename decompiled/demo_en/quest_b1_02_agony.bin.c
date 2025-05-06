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
	var_2_bool = 0; var_3_string = ""; var_4_string = ""; // 0x10 PushV
	var_3_string = "quest_b1_02"; // 0x11 MovS
	var_4_string = "agony_dead"; // 0x12 MovS
	func_342(var_2_bool, var_3_string, var_4_string); // 0x13 NEW_2
	var_8_object = Obj(); // 0x15 PushV
	var_8_object = var_1_object; // 0x16 Mov
	func_104(var_1_object, var_8_object); // 0x17 NEW_2
	return 0; // 0x19 Return
}


task_1_event_6(var_0_int)
{
	func_394(); // 0x8c NEW_2
	func_175(); // 0x8f NEW_2
	var_5_int = var_0_int; // 0x91 PushT
	if(var_5_int == 0) goto Label_152; // 0x92 JumpB
	var_6_object = Obj(); // 0x93 PushV
	func_275(var_6_object); // 0x94 NEW_2
	RemoveActor(var_6_object); // 0x96 Func
	
Label_152:
	TaskCall(0); // 0x99 TaskCall
	func_0(); // 0x9a NEW_2
	TaskReturn(); // 0x9b TaskReturn
	return 0; // 0x9d Return
}


task_1_event_16(var_0_int, var_1_object, var_2_string)
{
	var_3_float = 0; var_4_float = 0; // 0x9e PushV
	var_5_string = "agony"; // 0x9f PushS
	var_6_bool = var_2_string == var_5_string; // 0xa0 Eq
	if(var_6_bool == 0) goto Label_169; // 0xa1 JumpB
	var_7_string = "agony"; // 0xa2 PushS
	GetProperty(var_7_string, var_4_float); // 0xa3 Func
	var_8_float = 0.001; // 0xa5 PushF
	var_9_bool = var_4_float < var_8_float; // 0xa6 LT
	if(var_9_bool == 0) goto Label_169; // 0xa7 JumpB
	var_0_int = 1; // 0xa8 TMovI
	
Label_169:
	var_10_object = Obj(); var_11_string = ""; // 0xa9 PushV
	var_10_object = var_1_object; // 0xaa Mov
	var_11_string = var_2_string; // 0xab Mov
	func_354(); // 0xac NEW_2
	return 2; // 0xae Return
}


event_16(var_0_int, var_1_object, var_2_string)
{
	var_3_float = 0; var_4_float = 0; // 0x162 PushV
	var_5_string = "health"; // 0x163 PushS
	var_6_bool = var_2_string == var_5_string; // 0x164 Eq
	if(var_6_bool == 0) goto Label_366; // 0x165 JumpB
	var_7_string = "health"; // 0x166 PushS
	GetProperty(var_7_string, var_4_float); // 0x167 Func
	var_8_int = 0; // 0x169 PushI
	var_9_bool = var_4_float <= var_8_int; // 0x16a LE
	if(var_9_bool == 0) goto Label_366; // 0x16b JumpB
	SignalDeath(var_1_object); // 0x16c Func
	
Label_366:
	return 2; // 0x16e Return
}


event_43(var_0_int, var_1_object, var_2_int, var_3_float, var_4_float, var_5_cvector, var_6_cvector)
{
	var_7_object = Obj(); var_8_int = 0; var_9_float = 0; var_10_cvector = CVector(0,0,0); var_11_cvector = CVector(0,0,0); // 0x170 PushV
	var_7_object = var_1_object; // 0x171 Mov
	var_8_int = var_2_int; // 0x172 Mov
	var_9_float = var_3_float; // 0x173 Mov
	var_10_cvector = var_5_cvector; // 0x174 Mov
	var_11_cvector = var_6_cvector; // 0x175 Mov
	func_256(var_9_float, var_10_cvector, var_11_cvector); // 0x176 NEW_2
	return 0; // 0x178 Return
}


event_26(var_0_int, var_1_string)
{
	var_2_bool = 0; var_3_bool = 0; // 0x179 PushV
	var_4_string = "cleanup"; // 0x17a PushS
	var_5_bool = var_1_string == var_4_string; // 0x17b Eq
	if(var_5_bool == 0) goto Label_393; // 0x17c JumpB
	var_6_bool = GlobalVars[0]; // 0x17d PushGE
	var_6_bool = 1; // 0x17e MovB
	GlobalVars[0] = var_6_bool; // 0x17f PopGE
	IsLoaded(var_3_bool); // 0x180 Func
	var_7_bool = var_3_bool == 0; // 0x182 Not
	if(var_7_bool == 0) goto Label_393; // 0x183 JumpB
	var_8_object = Obj(); // 0x184 PushV
	func_275(var_8_object); // 0x185 NEW_2
	RemoveActor(var_8_object); // 0x187 Func
	
Label_393:
	return 2; // 0x189 Return
}


event_6(var_0_int)
{
	var_1_bool = GlobalVars[0]; // 0x18a PushGE
	if(var_1_bool == 0) goto Label_401; // 0x18b JumpB
	var_2_object = Obj(); // 0x18c PushV
	func_275(var_2_object); // 0x18d NEW_2
	RemoveActor(var_2_object); // 0x18f Func
	
Label_401:
	return 0; // 0x191 Return
}


main(var_0_int)
{
	var_1_bool = 0; var_2_bool = 0; // 0x1b PushV
	var_0_int = 0; // 0x1c TMovI
	RemoveEnvelope(); // 0x1d Func
	var_3_int = 50; // 0x1f PushI
	var_4_int = 40; // 0x20 PushI
	SetRTEnvelope(var_3_int, var_4_int); // 0x21 Func
	var_5_bool = 0; // 0x23 PushV
	func_270(var_5_bool); // 0x24 NEW_2
	var_8_bool = var_5_bool == 0; // 0x26 Not
	if(var_8_bool == 0) goto Label_45; // 0x27 JumpB
	TaskCall(0); // 0x29 TaskCall
	func_0(); // 0x2a NEW_2
	TaskReturn(); // 0x2b TaskReturn
	
Label_45:
	var_11_string = "agony"; // 0x2d PushS
	Is3DSoundLoaded(var_2_bool, var_11_string); // 0x2e Func
	var_12_bool = 0; // 0x30 PushV
	var_12_bool = 0; // 0x31 MovB
	var_13_bool = var_2_bool; // 0x32 Push
	if(var_13_bool == 0) goto Label_58; // 0x33 JumpB
	var_14_bool = 0; var_15_float = 0; // 0x34 PushV
	var_15_float = 0.33333; // 0x35 MovF
	func_292(var_14_bool, var_15_float); // 0x36 NEW_2
	if(var_14_bool == 0) goto Label_58; // 0x38 JumpB
	var_12_bool = 1; // 0x39 MovB
	
Label_58:
	if(var_12_bool == 0) goto Label_63; // 0x3a JumpB
	var_18_string = "agony"; // 0x3b PushS
	var_19_cvector = CVector(0.0, 40.0, 0.0); // 0x3c PushVec
	PlayGlobalSound(var_18_string, var_19_cvector); // 0x3d Func
	
Label_63:
	var_20_string = "all"; // 0x3f PushS
	var_21_string = "agony"; // 0x40 PushS
	PlayAnimation(var_20_string, var_21_string); // 0x41 Func
	WaitForAnimEnd(var_2_bool); // 0x43 Func
	var_22_int = 0; // 0x45 PushI
	var_23_bool = var_0_int > var_22_int; // 0x46 GT
	if(var_23_bool == 0) goto Label_95; // 0x47 JumpB
	var_24_bool = var_2_bool; // 0x48 Push
	if(var_24_bool == 0) goto Label_88; // 0x49 JumpB
	var_25_string = "sleep"; // 0x4a PushS
	var_26_cvector = CVector(0.0, 40.0, 0.0); // 0x4b PushVec
	PlayGlobalSound(var_25_string, var_26_cvector); // 0x4c Func
	var_27_string = "all"; // 0x4e PushS
	var_28_string = "agony_sleep"; // 0x4f PushS
	PlayAnimation(var_27_string, var_28_string); // 0x50 Func
	WaitForAnimEnd(); // 0x52 Func
	var_29_string = "all"; // 0x54 PushS
	var_30_string = "agony_sleep"; // 0x55 PushS
	LockAnimationEnd(var_29_string, var_30_string); // 0x56 Func
	
Label_88:
	SetDeathState(); // 0x58 Func
	func_26(); // 0x5b NEW_2
	goto Label_100; // 0x5d Jump
	
Label_100:
	Hold(); // 0x64 Func
	goto Label_100; // 0x66 Jump
	
Label_95:
	var_31_int = 0; // 0x5f PushI
	var_32_bool = var_0_int < var_31_int; // 0x60 LT
	if(var_32_bool == 0) goto Label_99; // 0x61 JumpB
	goto Label_100; // 0x62 Jump
	
Label_99:
	goto Label_45; // 0x63 Jump
}


func_0()
{
	
Label_0:
	Hold(); // 0x0 Func
	var_9_bool = 0; // 0x2 PushV
	func_270(var_9_bool); // 0x3 NEW_2
	var_10_bool = var_9_bool == 0; // 0x5 Not
	if(var_10_bool == 0) goto Label_0; // 0x6 JumpB
	return 0; // 0x7 Return
}


func_256(var_7_object, var_10_cvector, var_11_cvector)
{
	var_12_object = Obj(); var_13_object = Obj(); var_14_object = Obj(); var_15_object = Obj(); // 0x100 PushV
	GetScene(var_14_object); // 0x101 Func
	var_16_string = "scripted"; // 0x103 PushS
	var_17_string = "blood_dir.xml"; // 0x104 PushS
	AddActorByType(var_15_object, var_16_string, var_14_object, var_10_cvector, var_11_cvector, var_17_string); // 0x105 Func
	var_18_object = Obj(); // 0x107 PushV
	var_18_object = var_7_object; // 0x108 Mov
	func_212(var_18_object); // 0x109 NEW_2
	return 4; // 0x10b Return
}


func_292(var_14_bool, var_15_float)
{
	var_16_float = 0; var_17_float = 0; // 0x124 PushV
	rand(var_17_float); // 0x125 Func
	var_14_bool = var_17_float < var_15_float; // 0x127 LT2
	return 2; // 0x128 Return
}


func_104(var_0_int, var_8_object)
{
	var_9_bool = 0; var_10_bool = 0; var_11_bool = 0; var_12_bool = 0; // 0x68 PushV
	var_13_int = var_0_int; // 0x69 PushT
	if(var_13_int == 0) goto Label_108; // 0x6a JumpB
	return 4; // 0x6b Return
	
Label_108:
	IsPlayerActor(var_8_object, var_11_bool); // 0x6c Func
	var_14_bool = var_11_bool; // 0x6e Push
	if(var_14_bool == 0) goto Label_138; // 0x6f JumpB
	IsDead(var_12_bool); // 0x70 Func
	var_15_bool = var_12_bool == 0; // 0x72 Not
	if(var_15_bool == 0) goto Label_138; // 0x73 JumpB
	SetDeathState(); // 0x74 Func
	var_0_int = -1; // 0x76 TMovI
	var_16_bool = 0; var_17_object = Obj(); var_18_float = 0; // 0x77 PushV
	var_17_object = var_8_object; // 0x78 Mov
	var_18_float = -0.3; // 0x79 MovF
	func_297(var_16_bool, var_17_object, var_18_float); // 0x7a NEW_2
	var_54_string = "death"; // 0x7c PushS
	var_55_cvector = CVector(0.0, 40.0, 0.0); // 0x7d PushVec
	PlayGlobalSound(var_54_string, var_55_cvector); // 0x7e Func
	var_56_string = "all"; // 0x80 PushS
	var_57_string = "agony_die"; // 0x81 PushS
	PlayAnimation(var_56_string, var_57_string); // 0x82 Func
	WaitForAnimEnd(); // 0x84 Func
	var_58_string = "all"; // 0x86 PushS
	var_59_string = "agony_die"; // 0x87 PushS
	LockAnimationEnd(var_58_string, var_59_string); // 0x88 Func
	
Label_138:
	return 4; // 0x8a Return
}


func_297(var_16_bool, var_17_object, var_18_float)
{
	var_19_bool = var_17_object == 0; // 0x12a Not
	if(var_19_bool == 0) goto Label_302; // 0x12b JumpB
	var_16_bool = 0; // 0x12c MovB
	return 0; // 0x12d Return
	
Label_302:
	var_20_int = 0; // 0x12e PushI
	var_21_bool = var_18_float > var_20_int; // 0x12f GT
	if(var_21_bool == 0) goto Label_309; // 0x130 JumpB
	var_22_int = 8; // 0x131 PushI
	SendWorldWndMessage(var_22_int); // 0x132 Func
	goto Label_318; // 0x134 Jump
	
Label_318:
	var_23_float = 0; // 0x13e PushV
	var_23_float = var_18_float; // 0x13f Mov
	func_332(var_23_float); // 0x140 NEW_2
	var_27_bool = 0; var_28_object = Obj(); var_29_string = ""; var_30_float = 0; var_31_float = 0; var_32_float = 0; // 0x142 PushV
	var_28_object = var_17_object; // 0x143 Mov
	var_29_string = "reputation"; // 0x144 MovS
	var_30_float = var_18_float; // 0x145 Mov
	var_31_float = 0; // 0x146 MovI
	var_32_float = 1; // 0x147 MovI
	func_190(var_27_bool, var_28_object, var_29_string, var_30_float, var_31_float, var_32_float); // 0x148 NEW_2
	var_16_bool = 1; // 0x14a MovB
	return 0; // 0x14b Return
	
Label_309:
	var_51_int = 0; // 0x135 PushI
	var_52_bool = var_18_float < var_51_int; // 0x136 LT
	if(var_52_bool == 0) goto Label_316; // 0x137 JumpB
	var_53_int = 9; // 0x138 PushI
	SendWorldWndMessage(var_53_int); // 0x139 Func
	goto Label_318; // 0x13b Jump
	
Label_316:
	var_16_bool = 0; // 0x13c MovB
	return 0; // 0x13d Return
}


func_332(var_23_float)
{
	var_24_object = Obj(); var_25_object = Obj(); // 0x14c PushV
	CreateFloatVector(var_25_object); // 0x14d Func
	add(var_23_float); // 0x14f ObjFunc
	var_26_int = 16; // 0x151 PushI
	SendWorldWndMessage(var_26_int, var_25_object); // 0x152 Func
	return 2; // 0x154 Return
}


func_270(var_5_bool)
{
	var_6_bool = 0; var_7_bool = 0; // 0x10e PushV
	IsLoaded(var_7_bool); // 0x10f Func
	var_5_bool = var_7_bool; // 0x111 Mov
	return 2; // 0x112 Return
}


func_175()
{
	StopAnimation(); // 0xaf Func
	return 0; // 0xb1 Return
}


func_178(var_35_bool, var_36_object, var_37_string)
{
	var_38_bool = 0; var_39_bool = 0; // 0xb2 PushV
	var_40_string = "HasProperty"; // 0xb3 PushS
	var_41_int = 2; // 0xb4 PushI
	var_42_bool = IsFuncExist(var_36_object, var_40_string, var_41_int); // 0xb5 FuncExist
	var_43_bool = var_42_bool == 0; // 0xb6 Not
	if(var_43_bool == 0) goto Label_186; // 0xb7 JumpB
	var_35_bool = 0; // 0xb8 MovB
	return 2; // 0xb9 Return
	
Label_186:
	HasProperty(var_37_string, var_39_bool); // 0xba ObjFunc
	var_35_bool = var_39_bool; // 0xbc Mov
	return 2; // 0xbd Return
}


func_275(var_2_object)
{
	var_3_object = Obj(); var_4_object = Obj(); // 0x113 PushV
	self(var_4_object); // 0x114 Func
	var_2_object = var_4_object; // 0x116 Mov
	return 2; // 0x117 Return
}


func_212(var_18_object)
{
	var_19_bool = 0; var_20_int = 0; var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_string = ""; var_26_bool = 0; var_27_int = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_string = ""; // 0xd4 PushV
	var_33_bool = var_18_object == 0; // 0xd5 NullEq
	if(var_33_bool == 0) goto Label_216; // 0xd6 JumpB
	return 14; // 0xd7 Return
	
Label_216:
	IsDead(var_26_bool); // 0xd8 Func
	var_34_bool = var_26_bool; // 0xda Push
	if(var_34_bool == 0) goto Label_221; // 0xdb JumpB
	return 14; // 0xdc Return
	
Label_221:
	GetSecondaryAnimationType(var_27_int); // 0xdd Func
	var_35_int = 0; // 0xdf PushI
	var_36_bool = var_27_int < var_35_int; // 0xe0 LT
	if(var_36_bool == 0) goto Label_227; // 0xe1 JumpB
	return 14; // 0xe2 Return
	
Label_227:
	GetPosition(var_28_cvector); // 0xe3 ObjFunc
	GetPosition(var_29_cvector); // 0xe5 Func
	GetDirection(var_30_cvector); // 0xe7 Func
	var_31_cvector = var_29_cvector - var_28_cvector; // 0xe9 Sub2
	var_37_float = GetByIndex(var_31_cvector, 0); // 0xea PushE
	var_38_float = GetByIndex(var_30_cvector, 0); // 0xeb PushE
	var_39_float = var_37_float * var_38_float; // 0xec Mult
	var_40_float = GetByIndex(var_31_cvector, 2); // 0xed PushE
	var_41_float = GetByIndex(var_30_cvector, 2); // 0xee PushE
	var_42_float = var_40_float * var_41_float; // 0xef Mult
	var_43_int = var_39_float + var_42_float; // 0xf0 Add
	var_44_int = 0; // 0xf1 PushI
	var_45_bool = var_43_int >= var_44_int; // 0xf2 GE
	if(var_45_bool == 0) goto Label_246; // 0xf3 JumpB
	var_32_string = "fhit"; // 0xf4 MovS
	goto Label_247; // 0xf5 Jump
	
Label_247:
	var_46_string = "hit_react"; // 0xf7 PushS
	var_47_string = "1"; // 0xf8 PushS
	var_48_int = var_32_string + var_47_string; // 0xf9 Add
	var_49_string = "2"; // 0xfa PushS
	var_50_int = var_32_string + var_49_string; // 0xfb Add
	var_51_int = -10; // 0xfc PushI
	FadeSecondaryAnimation(var_46_string, var_48_int, var_50_int, var_51_int); // 0xfd Func
	return 14; // 0xff Return
	
Label_246:
	var_32_string = "bhit"; // 0xf6 MovS
}


func_342(var_2_bool, var_3_string, var_4_string)
{
	var_5_object = Obj(); var_6_object = Obj(); // 0x156 PushV
	FindActor(var_6_object, var_3_string); // 0x157 Func
	var_7_bool = var_6_object == 0; // 0x159 NullEq
	if(var_7_bool == 0) goto Label_349; // 0x15a JumpB
	var_2_bool = 0; // 0x15b MovB
	return 2; // 0x15c Return
	
Label_349:
	Trigger(var_6_object, var_4_string); // 0x15d Func
	var_2_bool = 1; // 0x15f MovB
	return 2; // 0x160 Return
}


func_281(var_45_float, var_46_float, var_47_float, var_48_float)
{
	var_49_bool = var_46_float < var_47_float; // 0x11a LT
	if(var_49_bool == 0) goto Label_286; // 0x11b JumpB
	var_45_float = var_47_float; // 0x11c Mov
	return 0; // 0x11d Return
	
Label_286:
	var_50_bool = var_46_float > var_48_float; // 0x11e GT
	if(var_50_bool == 0) goto Label_290; // 0x11f JumpB
	var_45_float = var_48_float; // 0x120 Mov
	return 0; // 0x121 Return
	
Label_290:
	var_45_float = var_46_float; // 0x122 Mov
	return 0; // 0x123 Return
}


func_26()
{
	return 0; // 0x1a Return
}


func_190(var_27_bool, var_28_object, var_29_string, var_30_float, var_31_float, var_32_float)
{
	var_33_float = 0; var_34_float = 0; // 0xbe PushV
	var_35_bool = 0; var_36_object = Obj(); var_37_string = ""; // 0xbf PushV
	var_36_object = var_28_object; // 0xc0 Mov
	var_37_string = var_29_string; // 0xc1 Mov
	func_178(var_35_bool, var_36_object, var_37_string); // 0xc2 NEW_2
	var_44_bool = var_35_bool == 0; // 0xc4 Not
	if(var_44_bool == 0) goto Label_200; // 0xc5 JumpB
	var_27_bool = 0; // 0xc6 MovB
	return 2; // 0xc7 Return
	
Label_200:
	GetProperty(var_29_string, var_34_float); // 0xc8 ObjFunc
	var_45_float = 0; var_46_float = 0; var_47_float = 0; var_48_float = 0; // 0xca PushV
	var_46_float = var_34_float + var_30_float; // 0xcb Add2
	var_47_float = var_31_float; // 0xcc Mov
	var_48_float = var_32_float; // 0xcd Mov
	func_281(var_45_float, var_46_float, var_47_float, var_48_float); // 0xce NEW_2
	SetProperty(var_29_string, var_45_float); // 0xd0 ObjFunc
	var_27_bool = 1; // 0xd2 MovB
	return 2; // 0xd3 Return
}


