main(var_0_bool)
{
	var_1_bool = 0; var_2_string = ""; var_3_float = 0; var_4_float = 0; var_5_float = 0; // 0x0 PushV
	var_2_string = "health"; // 0x1 MovS
	var_3_float = 0.05; // 0x2 MovF
	var_4_float = 0; // 0x3 MovI
	var_5_float = 1; // 0x4 MovI
	func_85(var_1_bool, var_2_string, var_3_float, var_4_float, var_5_float); // 0x5 NEW_2
	var_17_float = 0; // 0x7 PushV
	var_17_float = 0.05; // 0x8 MovF
	func_148(var_17_float); // 0x9 NEW_2
	var_21_bool = 0; var_22_string = ""; var_23_float = 0; var_24_float = 0; var_25_float = 0; // 0xb PushV
	var_22_string = "immunity"; // 0xc MovS
	var_23_float = 0.05; // 0xd MovF
	var_24_float = 0; // 0xe MovI
	var_25_float = 1; // 0xf MovI
	func_85(var_21_bool, var_22_string, var_23_float, var_24_float, var_25_float); // 0x10 NEW_2
	var_26_float = 0; // 0x12 PushV
	var_26_float = 0.05; // 0x13 MovF
	func_138(var_26_float); // 0x14 NEW_2
	var_30_bool = 0; var_31_string = ""; var_32_float = 0; var_33_float = 0; var_34_float = 0; // 0x16 PushV
	var_31_string = "tiredness"; // 0x17 MovS
	var_32_float = 0.05; // 0x18 MovF
	var_33_float = 0; // 0x19 MovI
	var_34_float = 1; // 0x1a MovI
	func_85(var_30_bool, var_31_string, var_32_float, var_33_float, var_34_float); // 0x1b NEW_2
	var_35_float = 0; // 0x1d PushV
	var_35_float = 0.05; // 0x1e MovF
	func_128(var_35_float); // 0x1f NEW_2
	var_39_float = 0; // 0x21 PushV
	var_39_float = 12.0; // 0x22 MovF
	func_53(var_39_float); // 0x23 NEW_2
	return 0; // 0x25 Return
}


func_128(var_35_float)
{
	var_36_object = Obj(); var_37_object = Obj(); // 0x80 PushV
	CreateFloatVector(var_37_object); // 0x81 Func
	add(var_35_float); // 0x83 ObjFunc
	var_38_int = 11; // 0x85 PushI
	SendWorldWndMessage(var_38_int, var_37_object); // 0x86 Func
	return 2; // 0x88 Return
}


func_38(var_51_bool, var_52_float)
{
	var_53_bool = 0; // 0x27 PushV
	func_104(var_53_bool); // 0x28 NEW_2
	if(var_53_bool == 0) goto Label_51; // 0x2a JumpB
	var_61_bool = 0; var_62_string = ""; var_63_float = 0; var_64_float = 0; var_65_float = 0; // 0x2b PushV
	var_62_string = "tiredness"; // 0x2c MovS
	var_66_float = -0.1; // 0x2d PushF
	var_63_float = var_52_float * var_66_float; // 0x2e Mult2
	var_64_float = 0; // 0x2f MovI
	var_65_float = 1; // 0x30 MovI
	func_85(var_61_bool, var_62_string, var_63_float, var_64_float, var_65_float); // 0x31 NEW_2
	
Label_51:
	var_51_bool = 0; // 0x33 MovB
	return 0; // 0x34 Return
}


func_104(var_53_bool)
{
	var_54_bool = 0; var_55_bool = 0; var_56_bool = 0; var_57_bool = 0; // 0x68 PushV
	var_58_string = "sleeping"; // 0x69 PushS
	HasProperty(var_58_string, var_56_bool); // 0x6a Func
	var_59_bool = var_56_bool == 0; // 0x6c Not
	if(var_59_bool == 0) goto Label_112; // 0x6d JumpB
	var_53_bool = 0; // 0x6e MovB
	return 4; // 0x6f Return
	
Label_112:
	var_60_string = "sleeping"; // 0x70 PushS
	GetProperty(var_60_string, var_57_bool); // 0x71 Func
	var_53_bool = var_57_bool; // 0x73 Mov
	return 4; // 0x74 Return
}


func_138(var_26_float)
{
	var_27_object = Obj(); var_28_object = Obj(); // 0x8a PushV
	CreateFloatVector(var_28_object); // 0x8b Func
	add(var_26_float); // 0x8d ObjFunc
	var_29_int = 13; // 0x8f PushI
	SendWorldWndMessage(var_29_int, var_28_object); // 0x90 Func
	return 2; // 0x92 Return
}


func_148(var_17_float)
{
	var_18_object = Obj(); var_19_object = Obj(); // 0x94 PushV
	CreateFloatVector(var_19_object); // 0x95 Func
	add(var_17_float); // 0x97 ObjFunc
	var_20_int = 15; // 0x99 PushI
	SendWorldWndMessage(var_20_int, var_19_object); // 0x9a Func
	return 2; // 0x9c Return
}


func_53(var_39_float)
{
	var_40_float = 0; var_41_float = 0; var_42_float = 0; var_43_float = 0; var_44_float = 0; var_45_float = 0; var_46_float = 0; var_47_float = 0; // 0x35 PushV
	GetGameTime(var_44_float); // 0x36 Func
	var_45_float = var_44_float + var_39_float; // 0x38 Add2
	var_46_float = var_44_float; // 0x39 Mov
	
Label_58:
	sync(); // 0x3a Func
	var_48_bool = var_0_bool; // 0x3c PushT
	if(var_48_bool == 0) goto Label_63; // 0x3d JumpB
	goto Label_84; // 0x3e Jump
	
Label_84:
	return 8; // 0x54 Return
	
Label_63:
	GetGameTime(var_47_float); // 0x3f Func
	var_49_bool = var_47_float <= var_46_float; // 0x41 LE
	if(var_49_bool == 0) goto Label_68; // 0x42 JumpB
	goto Label_83; // 0x43 Jump
	
Label_83:
	goto Label_58; // 0x53 Jump
	
Label_68:
	var_50_bool = var_47_float >= var_45_float; // 0x44 GE
	if(var_50_bool == 0) goto Label_76; // 0x45 JumpB
	var_51_bool = 0; var_52_float = 0; // 0x46 PushV
	var_52_float = var_45_float - var_46_float; // 0x47 Sub2
	func_38(var_51_bool, var_52_float); // 0x48 NEW_2
	goto Label_84; // 0x4a Jump
	
Label_76:
	var_67_bool = 0; var_68_float = 0; // 0x4c PushV
	var_68_float = var_47_float - var_46_float; // 0x4d Sub2
	func_38(var_67_bool, var_68_float); // 0x4e NEW_2
	if(var_67_bool == 0) goto Label_82; // 0x50 JumpB
	goto Label_84; // 0x51 Jump
	
Label_82:
	var_46_float = var_47_float; // 0x52 Mov
}


func_85(var_1_bool, var_2_string, var_3_float, var_4_float, var_5_float)
{
	var_6_bool = 0; var_7_float = 0; var_8_bool = 0; var_9_float = 0; // 0x55 PushV
	HasProperty(var_2_string, var_8_bool); // 0x56 Func
	var_10_bool = var_8_bool == 0; // 0x58 Not
	if(var_10_bool == 0) goto Label_92; // 0x59 JumpB
	var_1_bool = 0; // 0x5a MovB
	return 4; // 0x5b Return
	
Label_92:
	GetProperty(var_2_string, var_9_float); // 0x5c Func
	var_11_float = 0; var_12_float = 0; var_13_float = 0; var_14_float = 0; // 0x5e PushV
	var_12_float = var_9_float + var_3_float; // 0x5f Add2
	var_13_float = var_4_float; // 0x60 Mov
	var_14_float = var_5_float; // 0x61 Mov
	func_117(var_11_float, var_12_float, var_13_float, var_14_float); // 0x62 NEW_2
	SetProperty(var_2_string, var_11_float); // 0x64 Func
	var_1_bool = 1; // 0x66 MovB
	return 4; // 0x67 Return
}


func_117(var_11_float, var_12_float, var_13_float, var_14_float)
{
	var_15_bool = var_12_float < var_13_float; // 0x76 LT
	if(var_15_bool == 0) goto Label_122; // 0x77 JumpB
	var_11_float = var_13_float; // 0x78 Mov
	return 0; // 0x79 Return
	
Label_122:
	var_16_bool = var_12_float > var_14_float; // 0x7a GT
	if(var_16_bool == 0) goto Label_126; // 0x7b JumpB
	var_11_float = var_14_float; // 0x7c Mov
	return 0; // 0x7d Return
	
Label_126:
	var_11_float = var_12_float; // 0x7e Mov
	return 0; // 0x7f Return
}


