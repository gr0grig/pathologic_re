task_0_event_0(var_0_object)
{
	var_1_bool = 0; var_2_bool = 0; var_3_bool = 0; var_4_bool = 0; // 0x81 PushV
	var_5_bool = 0; // 0x82 PushV
	var_5_bool = 1; // 0x83 MovB
	var_6_bool = var_0_object == 0; // 0x84 Not
	if(var_6_bool == 0) goto Label_140; // 0x85 JumpB
	var_7_bool = 0; // 0x86 PushV
	func_186(var_7_bool); // 0x87 NEW_2
	var_11_bool = var_7_bool == 0; // 0x89 Not
	if(var_11_bool == 0) goto Label_140; // 0x8a JumpB
	var_5_bool = 0; // 0x8b MovB
	
Label_140:
	if(var_5_bool == 0) goto Label_142; // 0x8c JumpB
	return 4; // 0x8d Return
	
Label_142:
	IsOnGround(var_3_bool); // 0x8e ObjFunc
	var_12_bool = var_3_bool; // 0x90 Push
	if(var_12_bool == 0) goto Label_154; // 0x91 JumpB
	EventDisable(0); // 0x92 EventDisable
	IsOverrideActive(var_4_bool); // 0x93 Func
	var_13_bool = var_4_bool == 0; // 0x95 Not
	if(var_13_bool == 0) goto Label_153; // 0x96 JumpB
	Barter(var_0_object); // 0x97 Func
	
Label_153:
	EventEnable(0); // 0x99 EventEnable
	
Label_154:
	return 4; // 0x9a Return
}


main()
{
	var_0_int = 0; var_1_int = 0; // 0x0 PushV
	var_2_bool = 1; // 0x1 PushB
	SetVisibility(var_2_bool); // 0x2 Func
	DisableUpdate(); // 0x4 Func
	var_3_string = ""; var_4_int = 0; var_5_int = 0; // 0x6 PushV
	var_3_string = "meradorm"; // 0x7 MovS
	var_4_int = 1; // 0x8 MovI
	var_5_int = 20; // 0x9 MovI
	func_155(var_3_string, var_4_int, var_5_int); // 0xa NEW_2
	var_14_string = ""; var_15_int = 0; var_16_int = 0; var_17_int = 0; // 0xc PushV
	var_14_string = "alpha_pills"; // 0xd MovS
	var_15_int = 1; // 0xe MovI
	var_16_int = 25; // 0xf MovI
	var_17_int = 4; // 0x10 MovI
	func_166(var_14_string, var_15_int, var_16_int, var_17_int); // 0x11 NEW_2
	var_28_string = ""; var_29_int = 0; var_30_int = 0; // 0x13 PushV
	var_28_string = "tvirin"; // 0x14 MovS
	var_29_int = 1; // 0x15 MovI
	var_30_int = 12; // 0x16 MovI
	func_155(var_28_string, var_29_int, var_30_int); // 0x17 NEW_2
	var_31_string = ""; var_32_int = 0; var_33_int = 0; var_34_int = 0; // 0x19 PushV
	var_31_string = "lemon"; // 0x1a MovS
	var_32_int = 1; // 0x1b MovI
	var_33_int = 10; // 0x1c MovI
	var_34_int = 2; // 0x1d MovI
	func_166(var_31_string, var_32_int, var_33_int, var_34_int); // 0x1e NEW_2
	var_35_int = 0; // 0x20 PushV
	func_192(var_35_int); // 0x21 NEW_2
	var_1_int = var_35_int; // 0x22 Mov
	var_41_int = 5; // 0x24 PushI
	var_42_bool = var_1_int >= var_41_int; // 0x25 GE
	if(var_42_bool == 0) goto Label_45; // 0x26 JumpB
	var_43_string = ""; var_44_int = 0; var_45_int = 0; // 0x27 PushV
	var_43_string = "novocaine"; // 0x28 MovS
	var_44_int = 1; // 0x29 MovI
	var_45_int = 10; // 0x2a MovI
	func_155(var_43_string, var_44_int, var_45_int); // 0x2b NEW_2
	
Label_45:
	var_46_int = 7; // 0x2d PushI
	var_47_bool = var_1_int >= var_46_int; // 0x2e GE
	if(var_47_bool == 0) goto Label_54; // 0x2f JumpB
	var_48_string = ""; var_49_int = 0; var_50_int = 0; // 0x30 PushV
	var_48_string = "morfin"; // 0x31 MovS
	var_49_int = 1; // 0x32 MovI
	var_50_int = 20; // 0x33 MovI
	func_155(var_48_string, var_49_int, var_50_int); // 0x34 NEW_2
	
Label_54:
	var_51_int = 10; // 0x36 PushI
	var_52_bool = var_1_int >= var_51_int; // 0x37 GE
	if(var_52_bool == 0) goto Label_63; // 0x38 JumpB
	var_53_string = ""; var_54_int = 0; var_55_int = 0; // 0x39 PushV
	var_53_string = "etorfin"; // 0x3a MovS
	var_54_int = 1; // 0x3b MovI
	var_55_int = 30; // 0x3c MovI
	func_155(var_53_string, var_54_int, var_55_int); // 0x3d NEW_2
	
Label_63:
	var_56_string = ""; var_57_int = 0; var_58_int = 0; var_59_int = 0; // 0x3f PushV
	var_56_string = "revolver_ammo"; // 0x40 MovS
	var_57_int = 1; // 0x41 MovI
	var_58_int = 20; // 0x42 MovI
	var_59_int = 2; // 0x43 MovI
	func_166(var_56_string, var_57_int, var_58_int, var_59_int); // 0x44 NEW_2
	var_60_string = ""; var_61_int = 0; var_62_int = 0; // 0x46 PushV
	var_60_string = "rifle_ammo"; // 0x47 MovS
	var_61_int = 1; // 0x48 MovI
	var_62_int = 10; // 0x49 MovI
	func_155(var_60_string, var_61_int, var_62_int); // 0x4a NEW_2
	var_63_string = ""; var_64_int = 0; var_65_int = 0; // 0x4c PushV
	var_63_string = "powder"; // 0x4d MovS
	var_64_int = 1; // 0x4e MovI
	var_65_int = 500; // 0x4f MovI
	func_155(var_63_string, var_64_int, var_65_int); // 0x50 NEW_2
	var_66_string = ""; var_67_int = 0; var_68_int = 0; // 0x52 PushV
	var_66_string = "syringe"; // 0x53 MovS
	var_67_int = 1; // 0x54 MovI
	var_68_int = 20; // 0x55 MovI
	func_155(var_66_string, var_67_int, var_68_int); // 0x56 NEW_2
	var_69_string = ""; var_70_int = 0; var_71_int = 0; var_72_int = 0; // 0x58 PushV
	var_69_string = "kerosene"; // 0x59 MovS
	var_70_int = 1; // 0x5a MovI
	var_71_int = 4; // 0x5b MovI
	var_72_int = 10; // 0x5c MovI
	func_166(var_69_string, var_70_int, var_71_int, var_72_int); // 0x5d NEW_2
	var_73_string = ""; var_74_int = 0; var_75_int = 0; // 0x5f PushV
	var_73_string = "lockpick"; // 0x60 MovS
	var_74_int = 1; // 0x61 MovI
	var_75_int = 20; // 0x62 MovI
	func_155(var_73_string, var_74_int, var_75_int); // 0x63 NEW_2
	var_76_string = ""; var_77_int = 0; var_78_int = 0; var_79_int = 0; // 0x65 PushV
	var_76_string = "hook"; // 0x66 MovS
	var_77_int = 1; // 0x67 MovI
	var_78_int = 15; // 0x68 MovI
	var_79_int = 5; // 0x69 MovI
	func_166(var_76_string, var_77_int, var_78_int, var_79_int); // 0x6a NEW_2
	var_80_string = ""; var_81_int = 0; var_82_int = 0; var_83_int = 0; // 0x6c PushV
	var_80_string = "needle"; // 0x6d MovS
	var_81_int = 1; // 0x6e MovI
	var_82_int = 15; // 0x6f MovI
	var_83_int = 3; // 0x70 MovI
	func_166(var_80_string, var_81_int, var_82_int, var_83_int); // 0x71 NEW_2
	var_84_string = ""; var_85_int = 0; var_86_int = 0; // 0x73 PushV
	var_84_string = "glove"; // 0x74 MovS
	var_85_int = 1; // 0x75 MovI
	var_86_int = 70; // 0x76 MovI
	func_155(var_84_string, var_85_int, var_86_int); // 0x77 NEW_2
	func_125(); // 0x7a NEW_2
	return 2; // 0x7c Return
}


func_192(var_35_int)
{
	var_36_float = 0; var_37_float = 0; // 0xc0 PushV
	GetGameTime(var_37_float); // 0xc1 Func
	var_38_int = 1; // 0xc3 PushI
	var_39_int = 0; // 0xc4 PushV
	var_40_int = 24; // 0xc5 PushI
	var_39_int = var_37_float / var_37_float; // 0xc6 Div2
	var_35_int = var_38_int + var_39_int; // 0xc7 Add2
	return 2; // 0xc8 Return
}


func_166(var_14_string, var_15_int, var_16_int, var_17_int)
{
	var_18_int = 0; var_19_bool = 0; var_20_int = 0; var_21_bool = 0; // 0xa6 PushV
	var_22_bool = 0; var_23_int = 0; var_24_int = 0; // 0xa7 PushV
	var_23_int = var_15_int; // 0xa8 Mov
	var_24_int = var_16_int; // 0xa9 Mov
	func_181(var_22_bool, var_23_int, var_24_int); // 0xaa NEW_2
	if(var_22_bool == 0) goto Label_180; // 0xac JumpB
	irand(var_20_int, var_17_int); // 0xad Func
	var_25_int = 0; // 0xaf PushI
	var_26_int = 1; // 0xb0 PushI
	var_27_int = var_20_int + var_26_int; // 0xb1 Add
	AddItem(var_21_bool, var_14_string, var_25_int, var_27_int); // 0xb2 Func
	
Label_180:
	return 4; // 0xb4 Return
}


func_181(var_8_bool, var_9_int, var_10_int)
{
	var_11_int = 0; var_12_int = 0; // 0xb5 PushV
	irand(var_12_int, var_10_int); // 0xb6 Func
	var_8_bool = var_12_int < var_9_int; // 0xb8 LT2
	return 2; // 0xb9 Return
}


func_186(var_7_bool)
{
	var_8_int = 0; var_9_int = 0; // 0xba PushV
	var_10_string = "nouse_container"; // 0xbb PushS
	GetVariable(var_10_string, var_9_int); // 0xbc Func
	var_7_bool = !var_9_int; // 0xbe Not2
	return 2; // 0xbf Return
}


func_155(var_3_string, var_4_int, var_5_int)
{
	var_6_bool = 0; var_7_bool = 0; // 0x9b PushV
	var_8_bool = 0; var_9_int = 0; var_10_int = 0; // 0x9c PushV
	var_9_int = var_4_int; // 0x9d Mov
	var_10_int = var_5_int; // 0x9e Mov
	func_181(var_8_bool, var_9_int, var_10_int); // 0x9f NEW_2
	if(var_8_bool == 0) goto Label_165; // 0xa1 JumpB
	var_13_int = 0; // 0xa2 PushI
	AddItem(var_7_bool, var_3_string, var_13_int); // 0xa3 Func
	
Label_165:
	return 2; // 0xa5 Return
}


func_125()
{
	
Label_125:
	Hold(); // 0x7d Func
	goto Label_125; // 0x7f Jump
}


