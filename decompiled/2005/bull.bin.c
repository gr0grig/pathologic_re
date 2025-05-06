task_0_event_5()
{
	StopGroup0(); // 0x8 Func
	sync(); // 0xa Func
	return 0; // 0xc Return
}


task_2_event_6()
{
	StopAnimation(); // 0x46 Func
	return 0; // 0x48 Return
}


main()
{
	RemoveEnvelope(); // 0xd Func
	RemoveRTEnvelope(); // 0xf Func
	
Label_17:
	var_0_bool = 0; // 0x11 PushV
	func_73(var_0_bool); // 0x12 NEW_2
	var_3_bool = var_0_bool == 0; // 0x14 Not
	if(var_3_bool == 0) goto Label_27; // 0x15 JumpB
	TaskCall(0); // 0x17 TaskCall
	func_0(); // 0x18 NEW_2
	TaskReturn(); // 0x19 TaskReturn
	
Label_27:
	TaskCall(2); // 0x1c TaskCall
	func_34(); // 0x1d NEW_2
	TaskReturn(); // 0x1e TaskReturn
	goto Label_17; // 0x20 Jump
}


func_0()
{
	
Label_0:
	Hold(); // 0x0 Func
	var_4_bool = 0; // 0x2 PushV
	func_73(var_4_bool); // 0x3 NEW_2
	var_5_bool = var_4_bool == 0; // 0x5 Not
	if(var_5_bool == 0) goto Label_0; // 0x6 JumpB
	return 0; // 0x7 Return
}


func_34()
{
	var_6_int = 0; var_7_int = 0; var_8_int = 0; var_9_string = ""; var_10_int = 0; var_11_int = 0; var_12_int = 0; var_13_string = ""; // 0x22 PushV
	var_14_int = 3; // 0x23 PushI
	irand(var_10_int, var_14_int); // 0x24 Func
	var_15_bool = var_10_int == 0; // 0x26 Not
	if(var_15_bool == 0) goto Label_63; // 0x27 JumpB
	var_16_int = 0; // 0x28 PushV
	func_132(var_16_int); // 0x29 NEW_2
	var_11_int = var_16_int; // 0x2a Mov
	var_30_int = var_11_int; // 0x2c Push
	if(var_30_int == 0) goto Label_62; // 0x2d JumpB
	irand(var_12_int, var_11_int); // 0x2e Func
	var_31_string = ""; var_32_int = 0; // 0x30 PushV
	var_32_int = var_12_int; // 0x31 Mov
	func_126(var_31_string, var_32_int); // 0x32 NEW_2
	var_13_string = var_31_string; // 0x33 Mov
	var_36_string = "all"; // 0x35 PushS
	PlayAnimation(var_36_string, var_13_string); // 0x36 Func
	var_37_string = ""; // 0x38 PushV
	var_37_string = var_13_string; // 0x39 Mov
	func_78(var_37_string); // 0x3a NEW_2
	WaitForAnimEnd(); // 0x3c Func
	
Label_62:
	goto Label_69; // 0x3e Jump
	
Label_69:
	return 8; // 0x45 Return
	
Label_63:
	var_66_string = "all"; // 0x3f PushS
	var_67_string = "idle"; // 0x40 PushS
	PlayAnimation(var_66_string, var_67_string); // 0x41 Func
	WaitForAnimEnd(); // 0x43 Func
}


func_132(var_16_int)
{
	var_17_int = 0; var_18_bool = 0; var_19_int = 0; var_20_bool = 0; // 0x84 PushV
	var_19_int = 0; // 0x85 MovI
	
Label_134:
	var_21_string = "all"; // 0x86 PushS
	var_22_string = ""; var_23_int = 0; // 0x87 PushV
	var_24_int = 1; // 0x88 PushI
	var_23_int = var_19_int + var_24_int; // 0x89 Add2
	func_119(var_22_string, var_23_int); // 0x8a NEW_2
	HasAnimation(var_20_bool, var_21_string, var_22_string); // 0x8c Func
	var_28_bool = var_20_bool == 0; // 0x8e Not
	if(var_28_bool == 0) goto Label_145; // 0x8f JumpB
	goto Label_148; // 0x90 Jump
	
Label_148:
	var_16_int = var_19_int; // 0x94 Mov
	return 4; // 0x95 Return
	
Label_145:
	var_29_int = 1; // 0x91 PushI
	var_19_int = var_19_int + var_29_int; // 0x92 Add2
	goto Label_134; // 0x93 Jump
}


func_73(var_0_bool)
{
	var_1_bool = 0; var_2_bool = 0; // 0x49 PushV
	IsLoaded(var_2_bool); // 0x4a Func
	var_0_bool = var_2_bool; // 0x4c Mov
	return 2; // 0x4d Return
}


func_78(var_37_string)
{
	var_38_bool = 0; var_39_int = 0; var_40_bool = 0; var_41_int = 0; var_42_bool = 0; var_43_float = 0; var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0; var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_bool = 0; var_51_float = 0; var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); // 0x4e PushV
	IsExisting3DSound(var_46_bool, var_37_string); // 0x4f Func
	var_54_bool = var_46_bool == 0; // 0x51 Not
	if(var_54_bool == 0) goto Label_103; // 0x52 JumpB
	var_47_int = 0; // 0x53 MovI
	
Label_84:
	var_55_int = 1; // 0x54 PushI
	var_56_int = var_47_int + var_55_int; // 0x55 Add
	var_57_int = var_37_string + var_56_int; // 0x56 Add
	IsExisting3DSound(var_48_bool, var_57_int); // 0x57 Func
	var_58_bool = var_48_bool == 0; // 0x59 Not
	if(var_58_bool == 0) goto Label_92; // 0x5a JumpB
	goto Label_95; // 0x5b Jump
	
Label_95:
	var_59_bool = var_47_int == 0; // 0x5f Not
	if(var_59_bool == 0) goto Label_98; // 0x60 JumpB
	return 16; // 0x61 Return
	
Label_98:
	irand(var_49_int, var_47_int); // 0x62 Func
	var_60_int = 1; // 0x64 PushI
	var_61_int = var_49_int + var_60_int; // 0x65 Add
	var_37_string = var_37_string + var_61_int; // 0x66 Add2
	
Label_103:
	Is3DSoundLoaded(var_50_bool, var_37_string); // 0x67 Func
	var_62_bool = var_50_bool; // 0x69 Push
	if(var_62_bool == 0) goto Label_118; // 0x6a JumpB
	GetEyesHeight(var_51_float); // 0x6b Func
	GetDirection(var_52_cvector); // 0x6d Func
	var_63_int = 50; // 0x6f PushI
	var_53_cvector = var_52_cvector * var_63_int; // 0x70 Mult2
	var_64_float = GetByIndex(var_53_cvector, 1); // 0x71 PushE
	var_64_float = var_64_float + var_51_float; // 0x72 Add2
	SetByIndex(var_53_cvector, 1) = var_64_float; // 0x73 PopE
	PlayGlobalSound(var_37_string, var_53_cvector); // 0x74 Func
	
Label_118:
	return 16; // 0x76 Return
	
Label_92:
	var_65_int = 1; // 0x5c PushI
	var_47_int = var_47_int + var_65_int; // 0x5d Add2
	goto Label_84; // 0x5e Jump
}


func_119(var_22_string, var_23_int)
{
	var_25_string = ""; var_26_string = ""; // 0x77 PushV
	var_26_string = "idle"; // 0x78 MovS
	var_27_int = var_23_int; // 0x79 Push
	if(var_27_int == 0) goto Label_124; // 0x7a JumpB
	var_26_string = var_26_string + var_23_int; // 0x7b Add2
	
Label_124:
	var_22_string = var_26_string; // 0x7c Mov
	return 2; // 0x7d Return
}


func_126(var_31_string, var_32_int)
{
	var_33_string = "idle"; // 0x7f PushS
	var_34_int = 1; // 0x80 PushI
	var_35_int = var_32_int + var_34_int; // 0x81 Add
	var_31_string = var_33_string + var_35_int; // 0x82 Add2
	return 0; // 0x83 Return
}


