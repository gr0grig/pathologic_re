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
	var_25_bool = 0; var_26_string = ""; var_27_float = 0; var_28_float = 0; var_29_float = 0; // 0xb PushV
	var_26_string = "immunity"; // 0xc MovS
	var_27_float = 0.05; // 0xd MovF
	var_28_float = 0; // 0xe MovI
	var_29_float = 1; // 0xf MovI
	func_85(var_25_bool, var_26_string, var_27_float, var_28_float, var_29_float); // 0x10 NEW_2
	var_30_float = 0; // 0x12 PushV
	var_30_float = 0.05; // 0x13 MovF
	func_138(var_30_float); // 0x14 NEW_2
	var_34_bool = 0; var_35_string = ""; var_36_float = 0; var_37_float = 0; var_38_float = 0; // 0x16 PushV
	var_35_string = "tiredness"; // 0x17 MovS
	var_36_float = 0.05; // 0x18 MovF
	var_37_float = 0; // 0x19 MovI
	var_38_float = 1; // 0x1a MovI
	func_85(var_34_bool, var_35_string, var_36_float, var_37_float, var_38_float); // 0x1b NEW_2
	var_39_float = 0; // 0x1d PushV
	var_39_float = 0.05; // 0x1e MovF
	func_128(var_39_float); // 0x1f NEW_2
	var_43_float = 0; // 0x21 PushV
	var_43_float = 12.0; // 0x22 MovF
	func_53(var_43_float); // 0x23 NEW_2
	return 0; // 0x25 Return
}


func_128(var_39_float)
{
	var_40_object = Obj(); var_41_object = Obj(); // 0x80 PushV
	CreateFloatVector(var_41_object); // 0x81 Func
	add(var_39_float); // 0x83 ObjFunc
	var_42_int = 11; // 0x85 PushI
	SendWorldWndMessage(var_42_int, var_41_object); // 0x86 Func
	return 2; // 0x88 Return
}


func_38(var_55_bool, var_56_float)
{
	var_57_bool = 0; // 0x27 PushV
	func_104(var_57_bool); // 0x28 NEW_2
	if(var_57_bool == 0) goto Label_51; // 0x2a JumpB
	var_65_bool = 0; var_66_string = ""; var_67_float = 0; var_68_float = 0; var_69_float = 0; // 0x2b PushV
	var_66_string = "tiredness"; // 0x2c MovS
	var_70_float = -0.1; // 0x2d PushF
	var_67_float = var_56_float * var_70_float; // 0x2e Mult2
	var_68_float = 0; // 0x2f MovI
	var_69_float = 1; // 0x30 MovI
	func_85(var_65_bool, var_66_string, var_67_float, var_68_float, var_69_float); // 0x31 NEW_2
	
Label_51:
	var_55_bool = 0; // 0x33 MovB
	return 0; // 0x34 Return
}


func_104(var_57_bool)
{
	var_58_bool = 0; var_59_bool = 0; var_60_bool = 0; var_61_bool = 0; // 0x68 PushV
	var_62_string = "sleeping"; // 0x69 PushS
	HasProperty(var_62_string, var_60_bool); // 0x6a Func
	var_63_bool = var_60_bool == 0; // 0x6c Not
	if(var_63_bool == 0) goto Label_112; // 0x6d JumpB
	var_57_bool = 0; // 0x6e MovB
	return 4; // 0x6f Return
	
Label_112:
	var_64_string = "sleeping"; // 0x70 PushS
	GetProperty(var_64_string, var_61_bool); // 0x71 Func
	var_57_bool = var_61_bool; // 0x73 Mov
	return 4; // 0x74 Return
}


func_138(var_30_float)
{
	var_31_object = Obj(); var_32_object = Obj(); // 0x8a PushV
	CreateFloatVector(var_32_object); // 0x8b Func
	add(var_30_float); // 0x8d ObjFunc
	var_33_int = 13; // 0x8f PushI
	SendWorldWndMessage(var_33_int, var_32_object); // 0x90 Func
	return 2; // 0x92 Return
}


func_148(var_17_float)
{
	var_18_object = Obj(); var_19_object = Obj(); // 0x94 PushV
	CreateFloatVector(var_19_object); // 0x95 Func
	add(var_17_float); // 0x97 ObjFunc
	var_20_int = 0; // 0x99 PushI
	var_21_bool = var_17_float < var_20_int; // 0x9a LT
	if(var_21_bool == 0) goto Label_160; // 0x9b JumpB
	var_22_float = 0.7; // 0x9c PushF
	var_23_int = 500; // 0x9d PushI
	RumblePlay(var_22_float, var_23_int); // 0x9e Func
	
Label_160:
	var_24_int = 15; // 0xa0 PushI
	SendWorldWndMessage(var_24_int, var_19_object); // 0xa1 Func
	return 2; // 0xa3 Return
}


func_53(var_43_float)
{
	var_44_float = 0; var_45_float = 0; var_46_float = 0; var_47_float = 0; var_48_float = 0; var_49_float = 0; var_50_float = 0; var_51_float = 0; // 0x35 PushV
	GetGameTime(var_48_float); // 0x36 Func
	var_49_float = var_48_float + var_43_float; // 0x38 Add2
	var_50_float = var_48_float; // 0x39 Mov
	
Label_58:
	sync(); // 0x3a Func
	var_52_bool = var_0_bool; // 0x3c PushT
	if(var_52_bool == 0) goto Label_63; // 0x3d JumpB
	goto Label_84; // 0x3e Jump
	
Label_84:
	return 8; // 0x54 Return
	
Label_63:
	GetGameTime(var_51_float); // 0x3f Func
	var_53_bool = var_51_float <= var_50_float; // 0x41 LE
	if(var_53_bool == 0) goto Label_68; // 0x42 JumpB
	goto Label_83; // 0x43 Jump
	
Label_83:
	goto Label_58; // 0x53 Jump
	
Label_68:
	var_54_bool = var_51_float >= var_49_float; // 0x44 GE
	if(var_54_bool == 0) goto Label_76; // 0x45 JumpB
	var_55_bool = 0; var_56_float = 0; // 0x46 PushV
	var_56_float = var_49_float - var_50_float; // 0x47 Sub2
	func_38(var_55_bool, var_56_float); // 0x48 NEW_2
	goto Label_84; // 0x4a Jump
	
Label_76:
	var_71_bool = 0; var_72_float = 0; // 0x4c PushV
	var_72_float = var_51_float - var_50_float; // 0x4d Sub2
	func_38(var_71_bool, var_72_float); // 0x4e NEW_2
	if(var_71_bool == 0) goto Label_82; // 0x50 JumpB
	goto Label_84; // 0x51 Jump
	
Label_82:
	var_50_float = var_51_float; // 0x52 Mov
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


