task_0_event_7(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_int)
{
	var_6_int = 10; // 0x35 PushI
	var_7_bool = var_5_int == var_6_int; // 0x36 Eq
	if(var_7_bool == 0) goto Label_74; // 0x37 JumpB
	var_8_bool = 0; // 0x38 PushV
	func_37(var_3_bool, var_4_object, var_5_int, var_8_bool); // 0x39 NEW_2
	if(var_8_bool == 0) goto Label_68; // 0x3b JumpB
	var_21_bool = var_2_bool == 0; // 0x3c Not
	if(var_21_bool == 0) goto Label_67; // 0x3d JumpB
	var_22_object = Obj(); // 0x3e PushV
	var_22_object = var_4_object; // 0x3f MovT
	func_169(var_22_object); // 0x40 NEW_2
	var_2_bool = 1; // 0x42 TMovB
	
Label_67:
	goto Label_74; // 0x43 Jump
	
Label_74:
	return 0; // 0x4a Return
	
Label_68:
	var_29_bool = var_2_bool; // 0x44 PushT
	if(var_29_bool == 0) goto Label_74; // 0x45 JumpB
	var_30_string = "head"; // 0x46 PushS
	UnlookAsync(var_30_string); // 0x47 Func
	var_2_bool = 0; // 0x49 TMovB
}


main(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object)
{
	
Label_0:
	var_5_float = 0; var_6_float = 0; // 0x0 PushV
	var_5_float = 300; // 0x1 MovI
	var_6_float = 100; // 0x2 MovI
	func_10(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_float, var_6_float); // 0x3 NEW_2
	var_67_int = 3; // 0x5 PushI
	Sleep(var_67_int); // 0x6 Func
	goto Label_0; // 0x8 Jump
}


func_164(var_7_bool)
{
	var_8_bool = 0; var_9_bool = 0; // 0xa4 PushV
	IsLoaded(var_9_bool); // 0xa5 Func
	var_7_bool = var_9_bool; // 0xa7 Mov
	return 2; // 0xa8 Return
}


func_37(var_0_int, var_1_int, var_4_object, var_8_bool)
{
	var_9_float = 0; var_10_float = 0; // 0x25 PushV
	var_11_bool = var_4_object == 0; // 0x26 NullEq
	if(var_11_bool == 0) goto Label_42; // 0x27 JumpB
	var_8_bool = 0; // 0x28 MovB
	return 2; // 0x29 Return
	
Label_42:
	var_12_float = 0; var_13_object = Obj(); // 0x2a PushV
	var_13_object = var_4_object; // 0x2b MovT
	func_156(var_13_object); // 0x2c NEW_2
	var_10_float = sqrt(var_12_float); // 0x2e Sqrt2
	var_20_bool = var_2_bool; // 0x2f PushT
	if(var_20_bool == 0) goto Label_50; // 0x30 JumpB
	var_10_float = var_10_float - var_1_int; // 0x31 Sub2
	
Label_50:
	var_8_bool = var_10_float < var_0_int; // 0x32 LT2
	return 2; // 0x33 Return
}


func_169(var_22_object)
{
	var_23_float = 0; var_24_cvector = CVector(0,0,0); var_25_float = 0; var_26_cvector = CVector(0,0,0); // 0xa9 PushV
	GetEyesHeight(var_25_float); // 0xaa ObjFunc
	var_26_cvector = CVector(0.0, 0.0, 0.0); // 0xac MovV
	var_27_float = GetByIndex(var_26_cvector, 1); // 0xad PushE
	var_27_float = var_25_float; // 0xae Mov
	SetByIndex(var_26_cvector, 1) = var_27_float; // 0xaf PopE
	var_28_string = "head"; // 0xb0 PushS
	LookAsync(var_22_object, var_28_string, var_26_cvector); // 0xb1 Func
	return 4; // 0xb3 Return
}


func_10(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_float, var_6_float)
{
	var_7_bool = 0; // 0xb PushV
	func_164(var_7_bool); // 0xc NEW_2
	var_10_bool = var_7_bool == 0; // 0xe Not
	if(var_10_bool == 0) goto Label_17; // 0xf JumpB
	return 0; // 0x10 Return
	
Label_17:
	var_11_string = "player"; // 0x11 PushS
	FindActor(var_4_object, var_11_string); // 0x12 Func
	var_2_bool = 0; // 0x14 TMovB
	var_3_bool = 0; // 0x15 TMovB
	var_0_int = var_5_float; // 0x16 TMov
	var_1_int = var_6_float; // 0x17 TMov
	var_12_int = 10; // 0x18 PushI
	var_13_float = 1.0; // 0x19 PushF
	SetTimer(var_12_int, var_13_float); // 0x1a Func
	func_75(); // 0x1d NEW_2
	var_65_bool = var_3_bool == 0; // 0x1f Not
	if(var_65_bool == 0) goto Label_36; // 0x20 JumpB
	var_66_int = 10; // 0x21 PushI
	KillTimer(var_66_int); // 0x22 Func
	
Label_36:
	return 0; // 0x24 Return
}


func_75()
{
	var_14_int = 0; var_15_int = 0; var_16_int = 0; var_17_int = 0; var_18_bool = 0; var_19_float = 0; var_20_bool = 0; var_21_int = 0; var_22_int = 0; var_23_int = 0; var_24_int = 0; var_25_bool = 0; var_26_float = 0; var_27_bool = 0; // 0x4b PushV
	WaitForAnimEnd(); // 0x4c Func
	var_28_bool = 0; // 0x4e PushV
	func_164(var_28_bool); // 0x4f NEW_2
	var_29_bool = var_28_bool == 0; // 0x51 Not
	if(var_29_bool == 0) goto Label_84; // 0x52 JumpB
	return 14; // 0x53 Return
	
Label_84:
	var_30_int = 0; // 0x54 PushV
	func_187(var_30_int); // 0x55 NEW_2
	var_21_int = var_30_int; // 0x56 Mov
	var_22_int = 0; // 0x58 MovI
	
Label_89:
	var_43_bool = 0; // 0x59 PushV
	var_43_bool = 0; // 0x5a MovB
	var_44_int = 5; // 0x5b PushI
	var_45_bool = var_22_int < var_44_int; // 0x5c LT
	if(var_45_bool == 0) goto Label_99; // 0x5d JumpB
	var_46_bool = 0; // 0x5e PushV
	func_164(var_46_bool); // 0x5f NEW_2
	if(var_46_bool == 0) goto Label_99; // 0x61 JumpB
	var_43_bool = 1; // 0x62 MovB
	
Label_99:
	if(var_43_bool == 0) goto Label_151; // 0x63 JumpB
	var_47_int = 3; // 0x64 PushI
	irand(var_23_int, var_47_int); // 0x65 Func
	var_48_int = 0; // 0x67 PushI
	var_49_bool = var_23_int == var_48_int; // 0x68 Eq
	if(var_49_bool == 0) goto Label_123; // 0x69 JumpB
	var_50_int = var_21_int; // 0x6a Push
	if(var_50_int == 0) goto Label_122; // 0x6b JumpB
	irand(var_24_int, var_21_int); // 0x6c Func
	var_51_string = "all"; // 0x6e PushS
	var_52_string = ""; var_53_int = 0; // 0x6f PushV
	var_53_int = var_24_int; // 0x70 Mov
	func_180(var_52_string, var_53_int); // 0x71 NEW_2
	PlayAnimation(var_51_string, var_52_string); // 0x73 Func
	WaitForAnimEnd(var_25_bool); // 0x75 Func
	var_54_bool = var_25_bool == 0; // 0x77 Not
	if(var_54_bool == 0) goto Label_122; // 0x78 JumpB
	goto Label_151; // 0x79 Jump
	
Label_151:
	ResetAAS(); // 0x97 Func
	return 14; // 0x99 Return
	
Label_122:
	goto Label_140; // 0x7a Jump
	
Label_140:
	var_55_bool = 0; // 0x8c PushV
	func_154(var_55_bool); // 0x8d NEW_2
	var_56_bool = var_55_bool == 0; // 0x8f Not
	if(var_56_bool == 0) goto Label_146; // 0x90 JumpB
	goto Label_151; // 0x91 Jump
	
Label_146:
	ResetAAS(); // 0x92 Func
	var_57_int = 1; // 0x94 PushI
	var_22_int = var_22_int + var_57_int; // 0x95 Add2
	goto Label_89; // 0x96 Jump
	
Label_123:
	var_58_int = 1; // 0x7b PushI
	var_59_bool = var_23_int == var_58_int; // 0x7c Eq
	if(var_59_bool == 0) goto Label_137; // 0x7d JumpB
	var_60_int = 4; // 0x7e PushI
	rand(var_26_float, var_60_int); // 0x7f Func
	var_61_int = 1; // 0x81 PushI
	var_62_int = var_26_float + var_61_int; // 0x82 Add
	Sleep(var_62_int, var_27_bool); // 0x83 Func
	var_63_bool = var_27_bool == 0; // 0x85 Not
	if(var_63_bool == 0) goto Label_136; // 0x86 JumpB
	goto Label_151; // 0x87 Jump
	
Label_136:
	goto Label_140; // 0x88 Jump
	
Label_137:
	var_64_int = var_22_int; // 0x89 Push
	if(var_64_int == 0) goto Label_140; // 0x8a JumpB
	goto Label_151; // 0x8b Jump
}


func_180(var_36_string, var_37_int)
{
	var_38_string = ""; var_39_string = ""; // 0xb4 PushV
	var_39_string = "idle"; // 0xb5 MovS
	var_40_int = var_37_int; // 0xb6 Push
	if(var_40_int == 0) goto Label_185; // 0xb7 JumpB
	var_39_string = var_39_string + var_37_int; // 0xb8 Add2
	
Label_185:
	var_36_string = var_39_string; // 0xb9 Mov
	return 2; // 0xba Return
}


func_154(var_55_bool)
{
	var_55_bool = 1; // 0x9a MovB
	return 0; // 0x9b Return
}


func_187(var_30_int)
{
	var_31_int = 0; var_32_bool = 0; var_33_int = 0; var_34_bool = 0; // 0xbb PushV
	var_33_int = 0; // 0xbc MovI
	
Label_189:
	var_35_string = "all"; // 0xbd PushS
	var_36_string = ""; var_37_int = 0; // 0xbe PushV
	var_37_int = var_33_int; // 0xbf Mov
	func_180(var_36_string, var_37_int); // 0xc0 NEW_2
	HasAnimation(var_34_bool, var_35_string, var_36_string); // 0xc2 Func
	var_41_bool = var_34_bool == 0; // 0xc4 Not
	if(var_41_bool == 0) goto Label_199; // 0xc5 JumpB
	goto Label_202; // 0xc6 Jump
	
Label_202:
	var_30_int = var_33_int; // 0xca Mov
	return 4; // 0xcb Return
	
Label_199:
	var_42_int = 1; // 0xc7 PushI
	var_33_int = var_33_int + var_42_int; // 0xc8 Add2
	goto Label_189; // 0xc9 Jump
}


func_156(var_12_float)
{
	var_14_cvector = CVector(0,0,0); var_15_cvector = CVector(0,0,0); var_16_cvector = CVector(0,0,0); var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); // 0x9c PushV
	GetPosition(var_17_cvector); // 0x9d Func
	GetPosition(var_18_cvector); // 0x9f ObjFunc
	var_19_cvector = var_18_cvector - var_17_cvector; // 0xa1 Sub2
	var_12_float = var_19_cvector | var_19_cvector; // 0xa2 Or2
	return 6; // 0xa3 Return
}


