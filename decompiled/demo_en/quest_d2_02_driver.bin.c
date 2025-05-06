task_0_event_0(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object)
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


event_6(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object)
{
	var_5_bool = 0; var_6_string = ""; var_7_string = ""; // 0xd9 PushV
	var_6_string = "quest_d2_02"; // 0xda MovS
	var_7_string = "driver_unload"; // 0xdb MovS
	func_181(var_5_bool, var_6_string, var_7_string); // 0xdc NEW_2
	return 0; // 0xde Return
}


main(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object)
{
	
Label_0:
	var_5_float = 0; var_6_float = 0; // 0x0 PushV
	var_5_float = 300; // 0x1 MovI
	var_6_float = 100; // 0x2 MovI
	func_11(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_float, var_6_float); // 0x3 NEW_2
	var_67_int = 3; // 0x5 PushI
	Sleep(var_67_int); // 0x6 Func
	goto Label_0; // 0x8 Jump
}


func_193(var_36_string, var_37_int)
{
	var_38_string = ""; var_39_string = ""; // 0xc1 PushV
	var_39_string = "idle"; // 0xc2 MovS
	var_40_int = var_37_int; // 0xc3 Push
	if(var_40_int == 0) goto Label_198; // 0xc4 JumpB
	var_39_string = var_39_string + var_37_int; // 0xc5 Add2
	
Label_198:
	var_36_string = var_39_string; // 0xc6 Mov
	return 2; // 0xc7 Return
}


func_165(var_7_bool)
{
	var_8_bool = 0; var_9_bool = 0; // 0xa5 PushV
	IsLoaded(var_9_bool); // 0xa6 Func
	var_7_bool = var_9_bool; // 0xa8 Mov
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


func_200(var_30_int)
{
	var_31_int = 0; var_32_bool = 0; var_33_int = 0; var_34_bool = 0; // 0xc8 PushV
	var_33_int = 0; // 0xc9 MovI
	
Label_202:
	var_35_string = "all"; // 0xca PushS
	var_36_string = ""; var_37_int = 0; // 0xcb PushV
	var_37_int = var_33_int; // 0xcc Mov
	func_193(var_36_string, var_37_int); // 0xcd NEW_2
	HasAnimation(var_34_bool, var_35_string, var_36_string); // 0xcf Func
	var_41_bool = var_34_bool == 0; // 0xd1 Not
	if(var_41_bool == 0) goto Label_212; // 0xd2 JumpB
	goto Label_215; // 0xd3 Jump
	
Label_215:
	var_30_int = var_33_int; // 0xd7 Mov
	return 4; // 0xd8 Return
	
Label_212:
	var_42_int = 1; // 0xd4 PushI
	var_33_int = var_33_int + var_42_int; // 0xd5 Add2
	goto Label_202; // 0xd6 Jump
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


func_11(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_float, var_6_float)
{
	var_7_bool = 0; // 0xc PushV
	func_165(var_7_bool); // 0xd NEW_2
	var_10_bool = var_7_bool == 0; // 0xf Not
	if(var_10_bool == 0) goto Label_18; // 0x10 JumpB
	return 0; // 0x11 Return
	
Label_18:
	var_11_string = "player"; // 0x12 PushS
	FindActor(var_4_object, var_11_string); // 0x13 Func
	var_2_bool = 0; // 0x15 TMovB
	var_3_bool = 0; // 0x16 TMovB
	var_0_int = var_5_float; // 0x17 TMov
	var_1_int = var_6_float; // 0x18 TMov
	var_12_int = 10; // 0x19 PushI
	var_13_float = 1.0; // 0x1a PushF
	SetTimer(var_12_int, var_13_float); // 0x1b Func
	func_76(); // 0x1e NEW_2
	var_65_bool = var_3_bool == 0; // 0x20 Not
	if(var_65_bool == 0) goto Label_37; // 0x21 JumpB
	var_66_int = 10; // 0x22 PushI
	KillTimer(var_66_int); // 0x23 Func
	
Label_37:
	return 0; // 0x25 Return
}


func_76()
{
	var_14_int = 0; var_15_int = 0; var_16_int = 0; var_17_int = 0; var_18_bool = 0; var_19_float = 0; var_20_bool = 0; var_21_int = 0; var_22_int = 0; var_23_int = 0; var_24_int = 0; var_25_bool = 0; var_26_float = 0; var_27_bool = 0; // 0x4c PushV
	WaitForAnimEnd(); // 0x4d Func
	var_28_bool = 0; // 0x4f PushV
	func_165(var_28_bool); // 0x50 NEW_2
	var_29_bool = var_28_bool == 0; // 0x52 Not
	if(var_29_bool == 0) goto Label_85; // 0x53 JumpB
	return 14; // 0x54 Return
	
Label_85:
	var_30_int = 0; // 0x55 PushV
	func_200(var_30_int); // 0x56 NEW_2
	var_21_int = var_30_int; // 0x57 Mov
	var_22_int = 0; // 0x59 MovI
	
Label_90:
	var_43_bool = 0; // 0x5a PushV
	var_43_bool = 0; // 0x5b MovB
	var_44_int = 5; // 0x5c PushI
	var_45_bool = var_22_int < var_44_int; // 0x5d LT
	if(var_45_bool == 0) goto Label_100; // 0x5e JumpB
	var_46_bool = 0; // 0x5f PushV
	func_165(var_46_bool); // 0x60 NEW_2
	if(var_46_bool == 0) goto Label_100; // 0x62 JumpB
	var_43_bool = 1; // 0x63 MovB
	
Label_100:
	if(var_43_bool == 0) goto Label_152; // 0x64 JumpB
	var_47_int = 3; // 0x65 PushI
	irand(var_23_int, var_47_int); // 0x66 Func
	var_48_int = 0; // 0x68 PushI
	var_49_bool = var_23_int == var_48_int; // 0x69 Eq
	if(var_49_bool == 0) goto Label_124; // 0x6a JumpB
	var_50_int = var_21_int; // 0x6b Push
	if(var_50_int == 0) goto Label_123; // 0x6c JumpB
	irand(var_24_int, var_21_int); // 0x6d Func
	var_51_string = "all"; // 0x6f PushS
	var_52_string = ""; var_53_int = 0; // 0x70 PushV
	var_53_int = var_24_int; // 0x71 Mov
	func_193(var_52_string, var_53_int); // 0x72 NEW_2
	PlayAnimation(var_51_string, var_52_string); // 0x74 Func
	WaitForAnimEnd(var_25_bool); // 0x76 Func
	var_54_bool = var_25_bool == 0; // 0x78 Not
	if(var_54_bool == 0) goto Label_123; // 0x79 JumpB
	goto Label_152; // 0x7a Jump
	
Label_152:
	ResetAAS(); // 0x98 Func
	return 14; // 0x9a Return
	
Label_123:
	goto Label_141; // 0x7b Jump
	
Label_141:
	var_55_bool = 0; // 0x8d PushV
	func_155(var_55_bool); // 0x8e NEW_2
	var_56_bool = var_55_bool == 0; // 0x90 Not
	if(var_56_bool == 0) goto Label_147; // 0x91 JumpB
	goto Label_152; // 0x92 Jump
	
Label_147:
	ResetAAS(); // 0x93 Func
	var_57_int = 1; // 0x95 PushI
	var_22_int = var_22_int + var_57_int; // 0x96 Add2
	goto Label_90; // 0x97 Jump
	
Label_124:
	var_58_int = 1; // 0x7c PushI
	var_59_bool = var_23_int == var_58_int; // 0x7d Eq
	if(var_59_bool == 0) goto Label_138; // 0x7e JumpB
	var_60_int = 4; // 0x7f PushI
	rand(var_26_float, var_60_int); // 0x80 Func
	var_61_int = 1; // 0x82 PushI
	var_62_int = var_26_float + var_61_int; // 0x83 Add
	Sleep(var_62_int, var_27_bool); // 0x84 Func
	var_63_bool = var_27_bool == 0; // 0x86 Not
	if(var_63_bool == 0) goto Label_137; // 0x87 JumpB
	goto Label_152; // 0x88 Jump
	
Label_137:
	goto Label_141; // 0x89 Jump
	
Label_138:
	var_64_int = var_22_int; // 0x8a Push
	if(var_64_int == 0) goto Label_141; // 0x8b JumpB
	goto Label_152; // 0x8c Jump
}


func_181(var_5_bool, var_6_string, var_7_string)
{
	var_8_object = Obj(); var_9_object = Obj(); // 0xb5 PushV
	FindActor(var_9_object, var_6_string); // 0xb6 Func
	var_10_bool = var_9_object == 0; // 0xb8 NullEq
	if(var_10_bool == 0) goto Label_188; // 0xb9 JumpB
	var_5_bool = 0; // 0xba MovB
	return 2; // 0xbb Return
	
Label_188:
	Trigger(var_9_object, var_7_string); // 0xbc Func
	var_5_bool = 1; // 0xbe MovB
	return 2; // 0xbf Return
}


func_155(var_55_bool)
{
	var_55_bool = 1; // 0x9b MovB
	return 0; // 0x9c Return
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


