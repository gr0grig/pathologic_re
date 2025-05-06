task_0_event_6(var_0_bool, var_1_object)
{
	
Label_71:
	Hold(); // 0x47 Func
	goto Label_71; // 0x49 Jump
}


main(var_0_bool, var_1_object)
{
	var_2_object = Obj(); var_3_int = 0; var_4_int = 0; var_5_bool = 0; var_6_object = Obj(); var_7_int = 0; var_8_int = 0; var_9_bool = 0; // 0x0 PushV
	var_10_string = "player"; // 0x1 PushS
	FindActor(var_6_object, var_10_string); // 0x2 Func
	var_0_bool = 0; // 0x4 TMovB
	WaitForAnimEnd(); // 0x5 Func
	var_11_bool = 0; // 0x7 PushV
	func_83(var_11_bool); // 0x8 NEW_2
	var_14_bool = var_11_bool == 0; // 0xa Not
	if(var_14_bool == 0) goto Label_13; // 0xb JumpB
	return 8; // 0xc Return
	
Label_13:
	var_15_int = 0; // 0xd PushV
	func_99(var_15_int); // 0xe NEW_2
	var_7_int = var_15_int; // 0xf Mov
	
Label_17:
	var_28_int = var_7_int; // 0x11 Push
	if(var_28_int == 0) goto Label_66; // 0x12 JumpB
	irand(var_8_int, var_7_int); // 0x13 Func
	var_29_string = "all"; // 0x15 PushS
	var_30_string = ""; var_31_int = 0; // 0x16 PushV
	var_31_int = var_8_int; // 0x17 Mov
	func_116(var_30_string, var_31_int); // 0x18 NEW_2
	PlayAnimation(var_29_string, var_30_string); // 0x1a Func
	var_32_bool = 0; // 0x1c PushV
	var_32_bool = 0; // 0x1d MovB
	var_33_bool = 0; var_34_object = Obj(); // 0x1e PushV
	var_34_object = var_6_object; // 0x1f Mov
	func_123(var_33_bool, var_34_object); // 0x20 NEW_2
	if(var_33_bool == 0) goto Label_38; // 0x22 JumpB
	var_47_bool = var_0_bool == 0; // 0x23 Not
	if(var_47_bool == 0) goto Label_38; // 0x24 JumpB
	var_32_bool = 1; // 0x25 MovB
	
Label_38:
	if(var_32_bool == 0) goto Label_44; // 0x26 JumpB
	var_0_bool = 1; // 0x27 TMovB
	var_48_object = Obj(); // 0x28 PushV
	var_48_object = var_6_object; // 0x29 Mov
	func_88(var_48_object); // 0x2a NEW_2
	
Label_44:
	WaitForAnimEnd(var_9_bool); // 0x2c Func
	var_55_bool = var_9_bool == 0; // 0x2e Not
	if(var_55_bool == 0) goto Label_49; // 0x2f JumpB
	goto Label_66; // 0x30 Jump
	
Label_66:
	Hold(); // 0x42 Func
	goto Label_66; // 0x44 Jump
	
Label_49:
	var_56_bool = 0; // 0x31 PushV
	var_56_bool = 0; // 0x32 MovB
	var_57_bool = 0; var_58_object = Obj(); // 0x33 PushV
	var_58_object = var_6_object; // 0x34 Mov
	func_123(var_57_bool, var_58_object); // 0x35 NEW_2
	var_59_bool = var_57_bool == 0; // 0x37 Not
	if(var_59_bool == 0) goto Label_60; // 0x38 JumpB
	var_60_bool = var_0_bool; // 0x39 PushT
	if(var_60_bool == 0) goto Label_60; // 0x3a JumpB
	var_56_bool = 1; // 0x3b MovB
	
Label_60:
	if(var_56_bool == 0) goto Label_65; // 0x3c JumpB
	var_61_string = "head"; // 0x3d PushS
	UnlookAsync(var_61_string); // 0x3e Func
	var_0_bool = 0; // 0x40 TMovB
	
Label_65:
	goto Label_17; // 0x41 Jump
}


func_99(var_15_int)
{
	var_16_int = 0; var_17_bool = 0; var_18_int = 0; var_19_bool = 0; // 0x63 PushV
	var_18_int = 0; // 0x64 MovI
	
Label_101:
	var_20_string = "all"; // 0x65 PushS
	var_21_string = ""; var_22_int = 0; // 0x66 PushV
	var_22_int = var_18_int; // 0x67 Mov
	func_116(var_21_string, var_22_int); // 0x68 NEW_2
	HasAnimation(var_19_bool, var_20_string, var_21_string); // 0x6a Func
	var_26_bool = var_19_bool == 0; // 0x6c Not
	if(var_26_bool == 0) goto Label_111; // 0x6d JumpB
	goto Label_114; // 0x6e Jump
	
Label_114:
	var_15_int = var_18_int; // 0x72 Mov
	return 4; // 0x73 Return
	
Label_111:
	var_27_int = 1; // 0x6f PushI
	var_18_int = var_18_int + var_27_int; // 0x70 Add2
	goto Label_101; // 0x71 Jump
}


func_75(var_38_float)
{
	var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); // 0x4b PushV
	GetPosition(var_43_cvector); // 0x4c Func
	GetPosition(var_44_cvector); // 0x4e ObjFunc
	var_45_cvector = var_44_cvector - var_43_cvector; // 0x50 Sub2
	var_38_float = var_45_cvector | var_45_cvector; // 0x51 Or2
	return 6; // 0x52 Return
}


func_83(var_11_bool)
{
	var_12_bool = 0; var_13_bool = 0; // 0x53 PushV
	IsLoaded(var_13_bool); // 0x54 Func
	var_11_bool = var_13_bool; // 0x56 Mov
	return 2; // 0x57 Return
}


func_116(var_21_string, var_22_int)
{
	var_23_string = ""; var_24_string = ""; // 0x74 PushV
	var_24_string = "dance"; // 0x75 MovS
	var_25_int = var_22_int; // 0x76 Push
	if(var_25_int == 0) goto Label_121; // 0x77 JumpB
	var_24_string = var_24_string + var_22_int; // 0x78 Add2
	
Label_121:
	var_21_string = var_24_string; // 0x79 Mov
	return 2; // 0x7a Return
}


func_88(var_48_object)
{
	var_49_float = 0; var_50_cvector = CVector(0,0,0); var_51_float = 0; var_52_cvector = CVector(0,0,0); // 0x58 PushV
	GetEyesHeight(var_51_float); // 0x59 ObjFunc
	var_52_cvector = CVector(0.0, 0.0, 0.0); // 0x5b MovV
	var_53_float = GetByIndex(var_52_cvector, 1); // 0x5c PushE
	var_53_float = var_51_float; // 0x5d Mov
	SetByIndex(var_52_cvector, 1) = var_53_float; // 0x5e PopE
	var_54_string = "head"; // 0x5f PushS
	LookAsync(var_48_object, var_54_string, var_52_cvector); // 0x60 Func
	return 4; // 0x62 Return
}


func_123(var_33_bool, var_34_object)
{
	var_35_float = 0; var_36_float = 0; // 0x7b PushV
	var_37_bool = var_34_object == 0; // 0x7c NullEq
	if(var_37_bool == 0) goto Label_128; // 0x7d JumpB
	var_33_bool = 0; // 0x7e MovB
	return 2; // 0x7f Return
	
Label_128:
	var_38_float = 0; var_39_object = Obj(); // 0x80 PushV
	var_39_object = var_34_object; // 0x81 Mov
	func_75(var_39_object); // 0x82 NEW_2
	var_36_float = sqrt(var_38_float); // 0x84 Sqrt2
	var_46_int = 350; // 0x85 PushI
	var_33_bool = var_36_float < var_46_int; // 0x86 LT2
	return 2; // 0x87 Return
}


