task_0_event_0(var_0_string, var_1_string, var_2_string, var_3_string, var_4_int, var_5_int, var_6_int, var_7_int)
{
	var_8_string = "default"; // 0x7b PushS
	var_9_int = 15; // 0x7c PushI
	var_10_int = 15; // 0x7d PushI
	var_11_string = ""; var_12_int = 0; // 0x7e PushV
	var_12_int = 104; // 0x7f MovI
	func_214(var_11_string, var_12_int); // 0x80 NEW_2
	Print(var_8_string, var_9_int, var_10_int, var_11_string); // 0x82 Func
	var_15_string = "default"; // 0x84 PushS
	var_16_int = 15; // 0x85 PushI
	Print(var_15_string, var_6_int, var_16_int, var_0_string); // 0x86 Func
	var_17_string = "default"; // 0x88 PushS
	var_18_int = 15; // 0x89 PushI
	var_19_int = 98; // 0x8a PushI
	var_20_string = ""; var_21_int = 0; // 0x8b PushV
	var_21_int = 105; // 0x8c MovI
	func_214(var_20_string, var_21_int); // 0x8d NEW_2
	Print(var_17_string, var_18_int, var_19_int, var_20_string); // 0x8f Func
	var_22_string = "default"; // 0x91 PushS
	var_23_int = 98; // 0x92 PushI
	Print(var_22_string, var_5_int, var_23_int, var_23_int); // 0x93 Func
	var_24_string = "default"; // 0x95 PushS
	var_25_int = 16; // 0x96 PushI
	var_26_int = 182; // 0x97 PushI
	var_27_string = ""; var_28_int = 0; // 0x98 PushV
	var_28_int = 106; // 0x99 MovI
	func_214(var_27_string, var_28_int); // 0x9a NEW_2
	Print(var_24_string, var_25_int, var_26_int, var_27_string); // 0x9c Func
	var_29_string = "default"; // 0x9e PushS
	var_30_int = 182; // 0x9f PushI
	Print(var_29_string, var_4_int, var_30_int, var_29_string); // 0xa0 Func
	var_31_string = "default"; // 0xa2 PushS
	var_32_int = 16; // 0xa3 PushI
	var_33_int = 265; // 0xa4 PushI
	var_34_string = ""; var_35_int = 0; // 0xa5 PushV
	var_35_int = 107; // 0xa6 MovI
	func_214(var_34_string, var_35_int); // 0xa7 NEW_2
	Print(var_31_string, var_32_int, var_33_int, var_34_string); // 0xa9 Func
	var_36_string = "default"; // 0xab PushS
	var_37_int = 265; // 0xac PushI
	Print(var_36_string, var_3_string, var_37_int, var_7_int); // 0xad Func
	return 0; // 0xaf Return
}


task_0_event_200(var_0_string, var_1_string, var_2_string, var_3_string, var_4_int, var_5_int, var_6_int, var_7_int, var_8_int, var_9_string, var_10_object)
{
	var_11_float = 0; var_12_float = 0; // 0xb0 PushV
	var_13_bool = var_10_object != 0; // 0xb1 NullNeq
	if(var_13_bool == 0) goto Label_213; // 0xb2 JumpB
	var_14_int = 0; // 0xb3 PushI
	get(var_12_float, var_14_int); // 0xb4 ObjFunc
	var_15_int = 105; // 0xb6 PushI
	var_16_bool = var_8_int == var_15_int; // 0xb7 Eq
	if(var_16_bool == 0) goto Label_190; // 0xb8 JumpB
	var_17_float = 0; // 0xb9 PushV
	var_17_float = var_12_float; // 0xba Mov
	func_0(var_11_float, var_12_float, var_17_float); // 0xbb NEW_2
	goto Label_213; // 0xbd Jump
	
Label_213:
	return 2; // 0xd5 Return
	
Label_190:
	var_34_int = 106; // 0xbe PushI
	var_35_bool = var_8_int == var_34_int; // 0xbf Eq
	if(var_35_bool == 0) goto Label_198; // 0xc0 JumpB
	var_36_float = 0; // 0xc1 PushV
	var_36_float = var_12_float; // 0xc2 Mov
	func_22(var_11_float, var_12_float, var_36_float); // 0xc3 NEW_2
	goto Label_213; // 0xc5 Jump
	
Label_198:
	var_51_int = 107; // 0xc6 PushI
	var_52_bool = var_8_int == var_51_int; // 0xc7 Eq
	if(var_52_bool == 0) goto Label_206; // 0xc8 JumpB
	var_53_float = 0; // 0xc9 PushV
	var_53_float = var_12_float; // 0xca Mov
	func_44(var_11_float, var_12_float, var_53_float); // 0xcb NEW_2
	goto Label_213; // 0xcd Jump
	
Label_206:
	var_68_int = 108; // 0xce PushI
	var_69_bool = var_8_int == var_68_int; // 0xcf Eq
	if(var_69_bool == 0) goto Label_213; // 0xd0 JumpB
	var_70_float = 0; // 0xd1 PushV
	var_70_float = var_12_float; // 0xd2 Mov
	func_66(var_11_float, var_12_float, var_70_float); // 0xd3 NEW_2
}


main(var_0_string, var_1_string, var_2_string, var_3_string, var_4_int, var_5_int, var_6_int, var_7_int)
{
	var_8_bool = 1; // 0x72 PushB
	SetOwnerDraw(var_8_bool); // 0x73 Func
	func_88(); // 0x76 NEW_2
	ProcessEvents(); // 0x78 Func
	return 0; // 0x7a Return
}


func_0(var_0_string, var_4_int, var_17_float)
{
	var_18_int = 0; var_19_int = 0; var_20_int = 0; var_21_int = 0; // 0x0 PushV
	var_22_int = 100; // 0x1 PushI
	var_21_int = var_17_float * var_22_int; // 0x2 Mult2
	var_23_int = 0; // 0x3 PushI
	var_24_bool = var_21_int == var_23_int; // 0x4 Eq
	if(var_24_bool == 0) goto Label_12; // 0x5 JumpB
	var_25_string = ""; var_26_int = 0; // 0x6 PushV
	var_26_int = 124; // 0x7 MovI
	func_214(var_25_string, var_26_int); // 0x8 NEW_2
	var_0_string = var_25_string; // 0x9 TMov
	goto Label_14; // 0xb Jump
	
Label_14:
	var_29_string = "default"; // 0xe PushS
	GetTextWidth(var_20_int, var_29_string, var_0_string); // 0xf Func
	var_30_int = 305; // 0x11 PushI
	var_31_int = 2; // 0x12 PushI
	var_32_float = var_20_int / var_31_int; // 0x13 Div
	var_4_int = var_30_int - var_32_float; // 0x14 Sub2
	return 4; // 0x15 Return
	
Label_12:
	var_33_string = "%"; // 0xc PushS
	var_0_string = var_21_int + var_33_string; // 0xd Add2
}


func_66(var_3_string, var_7_int, var_64_float)
{
	var_65_int = 0; var_66_int = 0; var_67_int = 0; var_68_int = 0; // 0x42 PushV
	var_69_int = 100; // 0x43 PushI
	var_68_int = var_64_float * var_69_int; // 0x44 Mult2
	var_70_int = 0; // 0x45 PushI
	var_71_bool = var_68_int == var_70_int; // 0x46 Eq
	if(var_71_bool == 0) goto Label_78; // 0x47 JumpB
	var_72_string = ""; var_73_int = 0; // 0x48 PushV
	var_73_int = 124; // 0x49 MovI
	func_214(var_72_string, var_73_int); // 0x4a NEW_2
	var_3_string = var_72_string; // 0x4b TMov
	goto Label_80; // 0x4d Jump
	
Label_80:
	var_74_string = "default"; // 0x50 PushS
	GetTextWidth(var_67_int, var_74_string, var_67_int); // 0x51 Func
	var_75_int = 305; // 0x53 PushI
	var_76_int = 2; // 0x54 PushI
	var_77_float = var_67_int / var_76_int; // 0x55 Div
	var_7_int = var_75_int - var_77_float; // 0x56 Sub2
	return 4; // 0x57 Return
	
Label_78:
	var_78_string = "%"; // 0x4e PushS
	var_3_string = var_68_int + var_78_string; // 0x4f Add2
}


func_44(var_2_string, var_6_int, var_49_float)
{
	var_50_int = 0; var_51_int = 0; var_52_int = 0; var_53_int = 0; // 0x2c PushV
	var_54_int = 100; // 0x2d PushI
	var_53_int = var_49_float * var_54_int; // 0x2e Mult2
	var_55_int = 0; // 0x2f PushI
	var_56_bool = var_53_int == var_55_int; // 0x30 Eq
	if(var_56_bool == 0) goto Label_56; // 0x31 JumpB
	var_57_string = ""; var_58_int = 0; // 0x32 PushV
	var_58_int = 124; // 0x33 MovI
	func_214(var_57_string, var_58_int); // 0x34 NEW_2
	var_2_string = var_57_string; // 0x35 TMov
	goto Label_58; // 0x37 Jump
	
Label_58:
	var_59_string = "default"; // 0x3a PushS
	GetTextWidth(var_52_int, var_59_string, var_53_int); // 0x3b Func
	var_60_int = 305; // 0x3d PushI
	var_61_int = 2; // 0x3e PushI
	var_62_float = var_52_int / var_61_int; // 0x3f Div
	var_6_int = var_60_int - var_62_float; // 0x40 Sub2
	return 4; // 0x41 Return
	
Label_56:
	var_63_string = "%"; // 0x38 PushS
	var_2_string = var_53_int + var_63_string; // 0x39 Add2
}


func_214(var_25_string, var_26_int)
{
	var_27_string = ""; var_28_string = ""; // 0xd6 PushV
	GetStringByID(var_28_string, var_26_int); // 0xd7 Func
	var_25_string = var_28_string; // 0xd9 Mov
	return 2; // 0xda Return
}


func_22(var_1_string, var_5_int, var_34_float)
{
	var_35_int = 0; var_36_int = 0; var_37_int = 0; var_38_int = 0; // 0x16 PushV
	var_39_int = 100; // 0x17 PushI
	var_38_int = var_34_float * var_39_int; // 0x18 Mult2
	var_40_int = 0; // 0x19 PushI
	var_41_bool = var_38_int == var_40_int; // 0x1a Eq
	if(var_41_bool == 0) goto Label_34; // 0x1b JumpB
	var_42_string = ""; var_43_int = 0; // 0x1c PushV
	var_43_int = 124; // 0x1d MovI
	func_214(var_42_string, var_43_int); // 0x1e NEW_2
	var_1_string = var_42_string; // 0x1f TMov
	goto Label_36; // 0x21 Jump
	
Label_36:
	var_44_string = "default"; // 0x24 PushS
	GetTextWidth(var_37_int, var_44_string, var_44_string); // 0x25 Func
	var_45_int = 305; // 0x27 PushI
	var_46_int = 2; // 0x28 PushI
	var_47_float = var_37_int / var_46_int; // 0x29 Div
	var_5_int = var_45_int - var_47_float; // 0x2a Sub2
	return 4; // 0x2b Return
	
Label_34:
	var_48_string = "%"; // 0x22 PushS
	var_1_string = var_38_int + var_48_string; // 0x23 Add2
}


func_88()
{
	var_9_float = 0; var_10_float = 0; var_11_float = 0; var_12_float = 0; var_13_float = 0; var_14_float = 0; var_15_float = 0; var_16_float = 0; // 0x58 PushV
	GetVolMaster(var_13_float); // 0x59 Func
	GetVolMusic(var_14_float); // 0x5b Func
	GetVolVoice(var_15_float); // 0x5d Func
	GetVolSounds(var_16_float); // 0x5f Func
	var_17_float = 0; // 0x61 PushV
	var_17_float = var_13_float; // 0x62 Mov
	func_0(var_15_float, var_16_float, var_17_float); // 0x63 NEW_2
	var_34_float = 0; // 0x65 PushV
	var_34_float = var_14_float; // 0x66 Mov
	func_22(var_15_float, var_16_float, var_34_float); // 0x67 NEW_2
	var_49_float = 0; // 0x69 PushV
	var_49_float = var_15_float; // 0x6a Mov
	func_44(var_15_float, var_16_float, var_49_float); // 0x6b NEW_2
	var_64_float = 0; // 0x6d PushV
	var_64_float = var_16_float; // 0x6e Mov
	func_66(var_15_float, var_16_float, var_64_float); // 0x6f NEW_2
	return 8; // 0x71 Return
}


