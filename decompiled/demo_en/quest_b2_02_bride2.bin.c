task_0_event_0(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_object)
{
	return 0; // 0xa Return
}


task_0_event_7(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_int)
{
	var_6_int = 10; // 0x36 PushI
	var_7_bool = var_5_int == var_6_int; // 0x37 Eq
	if(var_7_bool == 0) goto Label_75; // 0x38 JumpB
	var_8_bool = 0; // 0x39 PushV
	func_38(var_3_bool, var_4_object, var_5_int, var_8_bool); // 0x3a NEW_2
	if(var_8_bool == 0) goto Label_69; // 0x3c JumpB
	var_21_bool = var_2_bool == 0; // 0x3d Not
	if(var_21_bool == 0) goto Label_68; // 0x3e JumpB
	var_22_object = Obj(); // 0x3f PushV
	var_22_object = var_4_object; // 0x40 MovT
	func_170(var_22_object); // 0x41 NEW_2
	var_2_bool = 1; // 0x43 TMovB
	
Label_68:
	goto Label_75; // 0x44 Jump
	
Label_75:
	return 0; // 0x4b Return
	
Label_69:
	var_29_bool = var_2_bool; // 0x45 PushT
	if(var_29_bool == 0) goto Label_75; // 0x46 JumpB
	var_30_string = "head"; // 0x47 PushS
	UnlookAsync(var_30_string); // 0x48 Func
	var_2_bool = 0; // 0x4a TMovB
}


main(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object)
{
	
Label_0:
	var_5_bool = 1; // 0x0 PushB
	if(var_5_bool == 0) goto Label_8; // 0x1 JumpB
	var_6_float = 0; var_7_float = 0; // 0x2 PushV
	var_6_float = 300; // 0x3 MovI
	var_7_float = 100; // 0x4 MovI
	func_11(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_6_float, var_7_float); // 0x5 NEW_2
	goto Label_0; // 0x7 Jump
	
Label_8:
	return 0; // 0x8 Return
}


func_165(var_8_bool)
{
	var_9_bool = 0; var_10_bool = 0; // 0xa5 PushV
	IsLoaded(var_10_bool); // 0xa6 Func
	var_8_bool = var_10_bool; // 0xa8 Mov
	return 2; // 0xa9 Return
}


func_38(var_0_int, var_1_int, var_4_object, var_8_bool)
{
	var_9_float = 0; var_10_float = 0; // 0x26 PushV
	var_11_bool = var_4_object == 0; // 0x27 NullEq
	if(var_11_bool == 0) goto Label_43; // 0x28 JumpB
	var_8_bool = 0; // 0x29 MovB
	return 2; // 0x2a Return
	
Label_43:
	var_12_float = 0; var_13_object = Obj(); // 0x2b PushV
	var_13_object = var_4_object; // 0x2c MovT
	func_157(var_13_object); // 0x2d NEW_2
	var_10_float = sqrt(var_12_float); // 0x2f Sqrt2
	var_20_bool = var_2_bool; // 0x30 PushT
	if(var_20_bool == 0) goto Label_51; // 0x31 JumpB
	var_10_float = var_10_float - var_1_int; // 0x32 Sub2
	
Label_51:
	var_8_bool = var_10_float < var_0_int; // 0x33 LT2
	return 2; // 0x34 Return
}


func_170(var_22_object)
{
	var_23_float = 0; var_24_cvector = CVector(0,0,0); var_25_float = 0; var_26_cvector = CVector(0,0,0); // 0xaa PushV
	GetEyesHeight(var_25_float); // 0xab ObjFunc
	var_26_cvector = CVector(0.0, 0.0, 0.0); // 0xad MovV
	var_27_float = GetByIndex(var_26_cvector, 1); // 0xae PushE
	var_27_float = var_25_float; // 0xaf Mov
	SetByIndex(var_26_cvector, 1) = var_27_float; // 0xb0 PopE
	var_28_string = "head"; // 0xb1 PushS
	LookAsync(var_22_object, var_28_string, var_26_cvector); // 0xb2 Func
	return 4; // 0xb4 Return
}


func_11(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_6_float, var_7_float)
{
	var_8_bool = 0; // 0xc PushV
	func_165(var_8_bool); // 0xd NEW_2
	var_11_bool = var_8_bool == 0; // 0xf Not
	if(var_11_bool == 0) goto Label_18; // 0x10 JumpB
	return 0; // 0x11 Return
	
Label_18:
	var_12_string = "player"; // 0x12 PushS
	FindActor(var_4_object, var_12_string); // 0x13 Func
	var_2_bool = 0; // 0x15 TMovB
	var_3_bool = 0; // 0x16 TMovB
	var_0_int = var_6_float; // 0x17 TMov
	var_1_int = var_7_float; // 0x18 TMov
	var_13_int = 10; // 0x19 PushI
	var_14_float = 1.0; // 0x1a PushF
	SetTimer(var_13_int, var_14_float); // 0x1b Func
	func_76(); // 0x1e NEW_2
	var_66_bool = var_3_bool == 0; // 0x20 Not
	if(var_66_bool == 0) goto Label_37; // 0x21 JumpB
	var_67_int = 10; // 0x22 PushI
	KillTimer(var_67_int); // 0x23 Func
	
Label_37:
	return 0; // 0x25 Return
}


func_76()
{
	var_15_int = 0; var_16_int = 0; var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_float = 0; var_21_bool = 0; var_22_int = 0; var_23_int = 0; var_24_int = 0; var_25_int = 0; var_26_bool = 0; var_27_float = 0; var_28_bool = 0; // 0x4c PushV
	WaitForAnimEnd(); // 0x4d Func
	var_29_bool = 0; // 0x4f PushV
	func_165(var_29_bool); // 0x50 NEW_2
	var_30_bool = var_29_bool == 0; // 0x52 Not
	if(var_30_bool == 0) goto Label_85; // 0x53 JumpB
	return 14; // 0x54 Return
	
Label_85:
	var_31_int = 0; // 0x55 PushV
	func_188(var_31_int); // 0x56 NEW_2
	var_22_int = var_31_int; // 0x57 Mov
	var_23_int = 0; // 0x59 MovI
	
Label_90:
	var_44_bool = 0; // 0x5a PushV
	var_44_bool = 0; // 0x5b MovB
	var_45_int = 5; // 0x5c PushI
	var_46_bool = var_23_int < var_45_int; // 0x5d LT
	if(var_46_bool == 0) goto Label_100; // 0x5e JumpB
	var_47_bool = 0; // 0x5f PushV
	func_165(var_47_bool); // 0x60 NEW_2
	if(var_47_bool == 0) goto Label_100; // 0x62 JumpB
	var_44_bool = 1; // 0x63 MovB
	
Label_100:
	if(var_44_bool == 0) goto Label_152; // 0x64 JumpB
	var_48_int = 3; // 0x65 PushI
	irand(var_24_int, var_48_int); // 0x66 Func
	var_49_int = 0; // 0x68 PushI
	var_50_bool = var_24_int == var_49_int; // 0x69 Eq
	if(var_50_bool == 0) goto Label_124; // 0x6a JumpB
	var_51_int = var_22_int; // 0x6b Push
	if(var_51_int == 0) goto Label_123; // 0x6c JumpB
	irand(var_25_int, var_22_int); // 0x6d Func
	var_52_string = "all"; // 0x6f PushS
	var_53_string = ""; var_54_int = 0; // 0x70 PushV
	var_54_int = var_25_int; // 0x71 Mov
	func_181(var_53_string, var_54_int); // 0x72 NEW_2
	PlayAnimation(var_52_string, var_53_string); // 0x74 Func
	WaitForAnimEnd(var_26_bool); // 0x76 Func
	var_55_bool = var_26_bool == 0; // 0x78 Not
	if(var_55_bool == 0) goto Label_123; // 0x79 JumpB
	goto Label_152; // 0x7a Jump
	
Label_152:
	ResetAAS(); // 0x98 Func
	return 14; // 0x9a Return
	
Label_123:
	goto Label_141; // 0x7b Jump
	
Label_141:
	var_56_bool = 0; // 0x8d PushV
	func_155(var_56_bool); // 0x8e NEW_2
	var_57_bool = var_56_bool == 0; // 0x90 Not
	if(var_57_bool == 0) goto Label_147; // 0x91 JumpB
	goto Label_152; // 0x92 Jump
	
Label_147:
	ResetAAS(); // 0x93 Func
	var_58_int = 1; // 0x95 PushI
	var_23_int = var_23_int + var_58_int; // 0x96 Add2
	goto Label_90; // 0x97 Jump
	
Label_124:
	var_59_int = 1; // 0x7c PushI
	var_60_bool = var_24_int == var_59_int; // 0x7d Eq
	if(var_60_bool == 0) goto Label_138; // 0x7e JumpB
	var_61_int = 4; // 0x7f PushI
	rand(var_27_float, var_61_int); // 0x80 Func
	var_62_int = 1; // 0x82 PushI
	var_63_int = var_27_float + var_62_int; // 0x83 Add
	Sleep(var_63_int, var_28_bool); // 0x84 Func
	var_64_bool = var_28_bool == 0; // 0x86 Not
	if(var_64_bool == 0) goto Label_137; // 0x87 JumpB
	goto Label_152; // 0x88 Jump
	
Label_137:
	goto Label_141; // 0x89 Jump
	
Label_138:
	var_65_int = var_23_int; // 0x8a Push
	if(var_65_int == 0) goto Label_141; // 0x8b JumpB
	goto Label_152; // 0x8c Jump
}


func_181(var_37_string, var_38_int)
{
	var_39_string = ""; var_40_string = ""; // 0xb5 PushV
	var_40_string = "idle"; // 0xb6 MovS
	var_41_int = var_38_int; // 0xb7 Push
	if(var_41_int == 0) goto Label_186; // 0xb8 JumpB
	var_40_string = var_40_string + var_38_int; // 0xb9 Add2
	
Label_186:
	var_37_string = var_40_string; // 0xba Mov
	return 2; // 0xbb Return
}


func_155(var_56_bool)
{
	var_56_bool = 1; // 0x9b MovB
	return 0; // 0x9c Return
}


func_188(var_31_int)
{
	var_32_int = 0; var_33_bool = 0; var_34_int = 0; var_35_bool = 0; // 0xbc PushV
	var_34_int = 0; // 0xbd MovI
	
Label_190:
	var_36_string = "all"; // 0xbe PushS
	var_37_string = ""; var_38_int = 0; // 0xbf PushV
	var_38_int = var_34_int; // 0xc0 Mov
	func_181(var_37_string, var_38_int); // 0xc1 NEW_2
	HasAnimation(var_35_bool, var_36_string, var_37_string); // 0xc3 Func
	var_42_bool = var_35_bool == 0; // 0xc5 Not
	if(var_42_bool == 0) goto Label_200; // 0xc6 JumpB
	goto Label_203; // 0xc7 Jump
	
Label_203:
	var_31_int = var_34_int; // 0xcb Mov
	return 4; // 0xcc Return
	
Label_200:
	var_43_int = 1; // 0xc8 PushI
	var_34_int = var_34_int + var_43_int; // 0xc9 Add2
	goto Label_190; // 0xca Jump
}


func_157(var_12_float)
{
	var_14_cvector = CVector(0,0,0); var_15_cvector = CVector(0,0,0); var_16_cvector = CVector(0,0,0); var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); // 0x9d PushV
	GetPosition(var_17_cvector); // 0x9e Func
	GetPosition(var_18_cvector); // 0xa0 ObjFunc
	var_19_cvector = var_18_cvector - var_17_cvector; // 0xa2 Sub2
	var_12_float = var_19_cvector | var_19_cvector; // 0xa3 Or2
	return 6; // 0xa4 Return
}


