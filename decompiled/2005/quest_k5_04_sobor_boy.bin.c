task_0_event_0(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_object)
{
	func_80(var_4_object, var_5_object); // 0xc NEW_2
	return 0; // 0xe Return
}


task_0_event_7(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_int)
{
	var_6_int = 10; // 0x3a PushI
	var_7_bool = var_5_int == var_6_int; // 0x3b Eq
	if(var_7_bool == 0) goto Label_79; // 0x3c JumpB
	var_8_bool = 0; // 0x3d PushV
	func_42(var_3_bool, var_4_object, var_5_int, var_8_bool); // 0x3e NEW_2
	if(var_8_bool == 0) goto Label_73; // 0x40 JumpB
	var_21_bool = var_2_bool == 0; // 0x41 Not
	if(var_21_bool == 0) goto Label_72; // 0x42 JumpB
	var_22_object = Obj(); // 0x43 PushV
	var_22_object = var_4_object; // 0x44 MovT
	func_193(var_22_object); // 0x45 NEW_2
	var_2_bool = 1; // 0x47 TMovB
	
Label_72:
	goto Label_79; // 0x48 Jump
	
Label_79:
	return 0; // 0x4f Return
	
Label_73:
	var_29_bool = var_2_bool; // 0x49 PushT
	if(var_29_bool == 0) goto Label_79; // 0x4a JumpB
	var_30_string = "head"; // 0x4b PushS
	UnlookAsync(var_30_string); // 0x4c Func
	var_2_bool = 0; // 0x4e TMovB
}


main(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object)
{
	
Label_0:
	var_5_int = 1; // 0x0 PushI
	Sleep(var_5_int); // 0x1 Func
	var_6_float = 0; var_7_float = 0; // 0x3 PushV
	var_6_float = 300; // 0x4 MovI
	var_7_float = 100; // 0x5 MovI
	func_15(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_6_float, var_7_float); // 0x6 NEW_2
	goto Label_0; // 0x8 Jump
}


func_193(var_22_object)
{
	var_23_float = 0; var_24_cvector = CVector(0,0,0); var_25_float = 0; var_26_cvector = CVector(0,0,0); // 0xc1 PushV
	GetEyesHeight(var_25_float); // 0xc2 ObjFunc
	var_26_cvector = CVector(0.0, 0.0, 0.0); // 0xc4 MovV
	var_27_float = GetByIndex(var_26_cvector, 1); // 0xc5 PushE
	var_27_float = var_25_float; // 0xc6 Mov
	SetByIndex(var_26_cvector, 1) = var_27_float; // 0xc7 PopE
	var_28_string = "head"; // 0xc8 PushS
	LookAsync(var_22_object, var_28_string, var_26_cvector); // 0xc9 Func
	return 4; // 0xcb Return
}


func_42(var_0_int, var_1_int, var_4_object, var_8_bool)
{
	var_9_float = 0; var_10_float = 0; // 0x2a PushV
	var_11_bool = var_4_object == 0; // 0x2b NullEq
	if(var_11_bool == 0) goto Label_47; // 0x2c JumpB
	var_8_bool = 0; // 0x2d MovB
	return 2; // 0x2e Return
	
Label_47:
	var_12_float = 0; var_13_object = Obj(); // 0x2f PushV
	var_13_object = var_4_object; // 0x30 MovT
	func_180(var_13_object); // 0x31 NEW_2
	var_10_float = sqrt(var_12_float); // 0x33 Sqrt2
	var_20_bool = var_2_bool; // 0x34 PushT
	if(var_20_bool == 0) goto Label_55; // 0x35 JumpB
	var_10_float = var_10_float - var_1_int; // 0x36 Sub2
	
Label_55:
	var_8_bool = var_10_float < var_0_int; // 0x37 LT2
	return 2; // 0x38 Return
}


func_204(var_37_string, var_38_int)
{
	var_39_string = ""; var_40_string = ""; // 0xcc PushV
	var_40_string = "idle"; // 0xcd MovS
	var_41_int = var_38_int; // 0xce Push
	if(var_41_int == 0) goto Label_209; // 0xcf JumpB
	var_40_string = var_40_string + var_38_int; // 0xd0 Add2
	
Label_209:
	var_37_string = var_40_string; // 0xd1 Mov
	return 2; // 0xd2 Return
}


func_173(var_56_bool)
{
	var_56_bool = 1; // 0xad MovB
	return 0; // 0xae Return
}


func_15(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_6_float, var_7_float)
{
	var_8_bool = 0; // 0x10 PushV
	func_188(var_8_bool); // 0x11 NEW_2
	var_11_bool = var_8_bool == 0; // 0x13 Not
	if(var_11_bool == 0) goto Label_22; // 0x14 JumpB
	return 0; // 0x15 Return
	
Label_22:
	var_12_string = "player"; // 0x16 PushS
	FindActor(var_4_object, var_12_string); // 0x17 Func
	var_2_bool = 0; // 0x19 TMovB
	var_3_bool = 0; // 0x1a TMovB
	var_0_int = var_6_float; // 0x1b TMov
	var_1_int = var_7_float; // 0x1c TMov
	var_13_int = 10; // 0x1d PushI
	var_14_float = 1.0; // 0x1e PushF
	SetTimer(var_13_int, var_14_float); // 0x1f Func
	func_94(); // 0x22 NEW_2
	var_66_bool = var_3_bool == 0; // 0x24 Not
	if(var_66_bool == 0) goto Label_41; // 0x25 JumpB
	var_67_int = 10; // 0x26 PushI
	KillTimer(var_67_int); // 0x27 Func
	
Label_41:
	return 0; // 0x29 Return
}


func_80(var_2_bool, var_3_bool)
{
	func_175(); // 0x51 NEW_2
	var_6_int = 10; // 0x53 PushI
	KillTimer(var_6_int); // 0x54 Func
	var_7_bool = var_2_bool; // 0x56 PushT
	if(var_7_bool == 0) goto Label_92; // 0x57 JumpB
	var_8_string = "head"; // 0x58 PushS
	UnlookAsync(var_8_string); // 0x59 Func
	var_2_bool = 0; // 0x5b TMovB
	
Label_92:
	var_3_bool = 1; // 0x5c TMovB
	return 0; // 0x5d Return
}


func_175()
{
	StopAnimation(); // 0xaf Func
	StopGroup0(); // 0xb1 Func
	return 0; // 0xb3 Return
}


func_211(var_31_int)
{
	var_32_int = 0; var_33_bool = 0; var_34_int = 0; var_35_bool = 0; // 0xd3 PushV
	var_34_int = 0; // 0xd4 MovI
	
Label_213:
	var_36_string = "all"; // 0xd5 PushS
	var_37_string = ""; var_38_int = 0; // 0xd6 PushV
	var_38_int = var_34_int; // 0xd7 Mov
	func_204(var_37_string, var_38_int); // 0xd8 NEW_2
	HasAnimation(var_35_bool, var_36_string, var_37_string); // 0xda Func
	var_42_bool = var_35_bool == 0; // 0xdc Not
	if(var_42_bool == 0) goto Label_223; // 0xdd JumpB
	goto Label_226; // 0xde Jump
	
Label_226:
	var_31_int = var_34_int; // 0xe2 Mov
	return 4; // 0xe3 Return
	
Label_223:
	var_43_int = 1; // 0xdf PushI
	var_34_int = var_34_int + var_43_int; // 0xe0 Add2
	goto Label_213; // 0xe1 Jump
}


func_180(var_12_float)
{
	var_14_cvector = CVector(0,0,0); var_15_cvector = CVector(0,0,0); var_16_cvector = CVector(0,0,0); var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); // 0xb4 PushV
	GetPosition(var_17_cvector); // 0xb5 Func
	GetPosition(var_18_cvector); // 0xb7 ObjFunc
	var_19_cvector = var_18_cvector - var_17_cvector; // 0xb9 Sub2
	var_12_float = var_19_cvector | var_19_cvector; // 0xba Or2
	return 6; // 0xbb Return
}


func_188(var_8_bool)
{
	var_9_bool = 0; var_10_bool = 0; // 0xbc PushV
	IsLoaded(var_10_bool); // 0xbd Func
	var_8_bool = var_10_bool; // 0xbf Mov
	return 2; // 0xc0 Return
}


func_94()
{
	var_15_int = 0; var_16_int = 0; var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_float = 0; var_21_bool = 0; var_22_int = 0; var_23_int = 0; var_24_int = 0; var_25_int = 0; var_26_bool = 0; var_27_float = 0; var_28_bool = 0; // 0x5e PushV
	WaitForAnimEnd(); // 0x5f Func
	var_29_bool = 0; // 0x61 PushV
	func_188(var_29_bool); // 0x62 NEW_2
	var_30_bool = var_29_bool == 0; // 0x64 Not
	if(var_30_bool == 0) goto Label_103; // 0x65 JumpB
	return 14; // 0x66 Return
	
Label_103:
	var_31_int = 0; // 0x67 PushV
	func_211(var_31_int); // 0x68 NEW_2
	var_22_int = var_31_int; // 0x69 Mov
	var_23_int = 0; // 0x6b MovI
	
Label_108:
	var_44_bool = 0; // 0x6c PushV
	var_44_bool = 0; // 0x6d MovB
	var_45_int = 5; // 0x6e PushI
	var_46_bool = var_23_int < var_45_int; // 0x6f LT
	if(var_46_bool == 0) goto Label_118; // 0x70 JumpB
	var_47_bool = 0; // 0x71 PushV
	func_188(var_47_bool); // 0x72 NEW_2
	if(var_47_bool == 0) goto Label_118; // 0x74 JumpB
	var_44_bool = 1; // 0x75 MovB
	
Label_118:
	if(var_44_bool == 0) goto Label_170; // 0x76 JumpB
	var_48_int = 3; // 0x77 PushI
	irand(var_24_int, var_48_int); // 0x78 Func
	var_49_int = 0; // 0x7a PushI
	var_50_bool = var_24_int == var_49_int; // 0x7b Eq
	if(var_50_bool == 0) goto Label_142; // 0x7c JumpB
	var_51_int = var_22_int; // 0x7d Push
	if(var_51_int == 0) goto Label_141; // 0x7e JumpB
	irand(var_25_int, var_22_int); // 0x7f Func
	var_52_string = "all"; // 0x81 PushS
	var_53_string = ""; var_54_int = 0; // 0x82 PushV
	var_54_int = var_25_int; // 0x83 Mov
	func_204(var_53_string, var_54_int); // 0x84 NEW_2
	PlayAnimation(var_52_string, var_53_string); // 0x86 Func
	WaitForAnimEnd(var_26_bool); // 0x88 Func
	var_55_bool = var_26_bool == 0; // 0x8a Not
	if(var_55_bool == 0) goto Label_141; // 0x8b JumpB
	goto Label_170; // 0x8c Jump
	
Label_170:
	ResetAAS(); // 0xaa Func
	return 14; // 0xac Return
	
Label_141:
	goto Label_159; // 0x8d Jump
	
Label_159:
	var_56_bool = 0; // 0x9f PushV
	func_173(var_56_bool); // 0xa0 NEW_2
	var_57_bool = var_56_bool == 0; // 0xa2 Not
	if(var_57_bool == 0) goto Label_165; // 0xa3 JumpB
	goto Label_170; // 0xa4 Jump
	
Label_165:
	ResetAAS(); // 0xa5 Func
	var_58_int = 1; // 0xa7 PushI
	var_23_int = var_23_int + var_58_int; // 0xa8 Add2
	goto Label_108; // 0xa9 Jump
	
Label_142:
	var_59_int = 1; // 0x8e PushI
	var_60_bool = var_24_int == var_59_int; // 0x8f Eq
	if(var_60_bool == 0) goto Label_156; // 0x90 JumpB
	var_61_int = 4; // 0x91 PushI
	rand(var_27_float, var_61_int); // 0x92 Func
	var_62_int = 1; // 0x94 PushI
	var_63_int = var_27_float + var_62_int; // 0x95 Add
	Sleep(var_63_int, var_28_bool); // 0x96 Func
	var_64_bool = var_28_bool == 0; // 0x98 Not
	if(var_64_bool == 0) goto Label_155; // 0x99 JumpB
	goto Label_170; // 0x9a Jump
	
Label_155:
	goto Label_159; // 0x9b Jump
	
Label_156:
	var_65_int = var_23_int; // 0x9c Push
	if(var_65_int == 0) goto Label_159; // 0x9d JumpB
	goto Label_170; // 0x9e Jump
}


