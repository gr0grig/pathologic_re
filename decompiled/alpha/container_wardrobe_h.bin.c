task_0_event_0(var_0_object)
{
	var_1_bool = 0; var_2_bool = 0; var_3_bool = 0; var_4_bool = 0; // 0x6c PushV
	var_5_bool = 0; // 0x6d PushV
	func_159(var_5_bool); // 0x6e Call
	var_9_bool = var_5_bool == 0; // 0x70 Not
	if(var_9_bool == 0) goto Label_115; // 0x71 JumpB
	return 4; // 0x72 Return
	
Label_115:
	IsOnGround(var_3_bool); // 0x73 ObjFunc
	var_10_bool = var_3_bool; // 0x75 Push
	if(var_10_bool == 0) goto Label_127; // 0x76 JumpB
	EventDisable(0); // 0x77 EventDisable
	IsOverrideActive(var_4_bool); // 0x78 Func
	var_11_bool = var_4_bool == 0; // 0x7a Not
	if(var_11_bool == 0) goto Label_126; // 0x7b JumpB
	Barter(var_0_object); // 0x7c Func
	
Label_126:
	EventEnable(0); // 0x7e EventEnable
	
Label_127:
	return 4; // 0x7f Return
}


main()
{
	var_0_int = 0; var_1_int = 0; // 0x0 PushV
	var_2_bool = 1; // 0x1 PushB
	SetVisibility(var_2_bool); // 0x2 Func
	var_3_string = ""; var_4_int = 0; var_5_int = 0; // 0x4 PushV
	var_3_string = "Rifle"; // 0x5 MovS
	var_4_int = 1; // 0x6 MovI
	var_5_int = 200; // 0x7 MovI
	func_128(var_3_string, var_4_int, var_5_int); // 0x8 Call
	var_14_string = ""; var_15_int = 0; var_16_int = 0; // 0xa PushV
	var_14_string = "Revolver"; // 0xb MovS
	var_15_int = 1; // 0xc MovI
	var_16_int = 150; // 0xd MovI
	func_128(var_14_string, var_15_int, var_16_int); // 0xe Call
	var_17_string = ""; var_18_int = 0; var_19_int = 0; var_20_int = 0; // 0x10 PushV
	var_17_string = "rifle_ammo"; // 0x11 MovS
	var_18_int = 1; // 0x12 MovI
	var_19_int = 20; // 0x13 MovI
	var_20_int = 3; // 0x14 MovI
	func_139(var_17_string, var_18_int, var_19_int, var_20_int); // 0x15 Call
	var_31_string = ""; var_32_int = 0; var_33_int = 0; var_34_int = 0; // 0x17 PushV
	var_31_string = "revolver_ammo"; // 0x18 MovS
	var_32_int = 1; // 0x19 MovI
	var_33_int = 20; // 0x1a MovI
	var_34_int = 6; // 0x1b MovI
	func_139(var_31_string, var_32_int, var_33_int, var_34_int); // 0x1c Call
	var_35_int = 0; // 0x1e PushV
	func_165(var_35_int); // 0x1f Call
	var_1_int = var_35_int; // 0x20 Mov
	var_41_int = 3; // 0x22 PushI
	var_42_bool = var_1_int >= var_41_int; // 0x23 GE
	if(var_42_bool == 0) goto Label_79; // 0x24 JumpB
	var_43_string = ""; var_44_int = 0; var_45_int = 0; // 0x25 PushV
	var_43_string = "halfboot_repel"; // 0x26 MovS
	var_44_int = 1; // 0x27 MovI
	var_45_int = 15; // 0x28 MovI
	func_128(var_43_string, var_44_int, var_45_int); // 0x29 Call
	var_46_string = ""; var_47_int = 0; var_48_int = 0; // 0x2b PushV
	var_46_string = "boot_repel"; // 0x2c MovS
	var_47_int = 1; // 0x2d MovI
	var_48_int = 20; // 0x2e MovI
	func_128(var_46_string, var_47_int, var_48_int); // 0x2f Call
	var_49_string = ""; var_50_int = 0; var_51_int = 0; // 0x31 PushV
	var_49_string = "drapery"; // 0x32 MovS
	var_50_int = 1; // 0x33 MovI
	var_51_int = 5; // 0x34 MovI
	func_128(var_49_string, var_50_int, var_51_int); // 0x35 Call
	var_52_string = ""; var_53_int = 0; var_54_int = 0; // 0x37 PushV
	var_52_string = "cloak_repel"; // 0x38 MovS
	var_53_int = 1; // 0x39 MovI
	var_54_int = 15; // 0x3a MovI
	func_128(var_52_string, var_53_int, var_54_int); // 0x3b Call
	var_55_string = ""; var_56_int = 0; var_57_int = 0; // 0x3d PushV
	var_55_string = "raincoat_repel"; // 0x3e MovS
	var_56_int = 1; // 0x3f MovI
	var_57_int = 35; // 0x40 MovI
	func_128(var_55_string, var_56_int, var_57_int); // 0x41 Call
	var_58_string = ""; var_59_int = 0; var_60_int = 0; // 0x43 PushV
	var_58_string = "glove_disp"; // 0x44 MovS
	var_59_int = 1; // 0x45 MovI
	var_60_int = 20; // 0x46 MovI
	func_128(var_58_string, var_59_int, var_60_int); // 0x47 Call
	var_61_string = ""; var_62_int = 0; var_63_int = 0; // 0x49 PushV
	var_61_string = "glove"; // 0x4a MovS
	var_62_int = 1; // 0x4b MovI
	var_63_int = 20; // 0x4c MovI
	func_128(var_61_string, var_62_int, var_63_int); // 0x4d Call
	
Label_79:
	var_64_int = 9; // 0x4f PushI
	var_65_bool = var_1_int >= var_64_int; // 0x50 GE
	if(var_65_bool == 0) goto Label_100; // 0x51 JumpB
	var_66_string = ""; var_67_int = 0; var_68_int = 0; // 0x52 PushV
	var_66_string = "boot_army"; // 0x53 MovS
	var_67_int = 1; // 0x54 MovI
	var_68_int = 40; // 0x55 MovI
	func_128(var_66_string, var_67_int, var_68_int); // 0x56 Call
	var_69_string = ""; var_70_int = 0; var_71_int = 0; // 0x58 PushV
	var_69_string = "glove_army"; // 0x59 MovS
	var_70_int = 1; // 0x5a MovI
	var_71_int = 50; // 0x5b MovI
	func_128(var_69_string, var_70_int, var_71_int); // 0x5c Call
	var_72_string = ""; var_73_int = 0; var_74_int = 0; // 0x5e PushV
	var_72_string = "balahon"; // 0x5f MovS
	var_73_int = 1; // 0x60 MovI
	var_74_int = 80; // 0x61 MovI
	func_128(var_72_string, var_73_int, var_74_int); // 0x62 Call
	
Label_100:
	func_104(); // 0x65 Call
	return 2; // 0x67 Return
}


func_128(var_3_string, var_4_int, var_5_int)
{
	var_6_bool = 0; var_7_bool = 0; // 0x80 PushV
	var_8_bool = 0; var_9_int = 0; var_10_int = 0; // 0x81 PushV
	var_9_int = var_4_int; // 0x82 Mov
	var_10_int = var_5_int; // 0x83 Mov
	func_154(var_8_bool, var_9_int, var_10_int); // 0x84 Call
	if(var_8_bool == 0) goto Label_138; // 0x86 JumpB
	var_13_int = 0; // 0x87 PushI
	AddItem(var_7_bool, var_3_string, var_13_int); // 0x88 Func
	
Label_138:
	return 2; // 0x8a Return
}


func_165(var_35_int)
{
	var_36_float = 0; var_37_float = 0; // 0xa5 PushV
	GetGameTime(var_37_float); // 0xa6 Func
	var_38_int = 1; // 0xa8 PushI
	var_39_int = 0; // 0xa9 PushV
	var_40_int = 24; // 0xaa PushI
	var_39_int = var_37_float / var_37_float; // 0xab Div2
	var_35_int = var_38_int + var_39_int; // 0xac Add2
	return 2; // 0xad Return
}


func_104()
{
	
Label_104:
	Hold(); // 0x68 Func
	goto Label_104; // 0x6a Jump
}


func_139(var_17_string, var_18_int, var_19_int, var_20_int)
{
	var_21_int = 0; var_22_bool = 0; var_23_int = 0; var_24_bool = 0; // 0x8b PushV
	var_25_bool = 0; var_26_int = 0; var_27_int = 0; // 0x8c PushV
	var_26_int = var_18_int; // 0x8d Mov
	var_27_int = var_19_int; // 0x8e Mov
	func_154(var_25_bool, var_26_int, var_27_int); // 0x8f Call
	if(var_25_bool == 0) goto Label_153; // 0x91 JumpB
	irand(var_23_int, var_20_int); // 0x92 Func
	var_28_int = 0; // 0x94 PushI
	var_29_int = 1; // 0x95 PushI
	var_30_int = var_20_int + var_29_int; // 0x96 Add
	AddItem(var_24_bool, var_17_string, var_28_int, var_30_int); // 0x97 Func
	
Label_153:
	return 4; // 0x99 Return
}


func_154(var_8_bool, var_9_int, var_10_int)
{
	var_11_int = 0; var_12_int = 0; // 0x9a PushV
	irand(var_12_int, var_10_int); // 0x9b Func
	var_8_bool = var_12_int < var_9_int; // 0x9d LT2
	return 2; // 0x9e Return
}


func_159(var_5_bool)
{
	var_6_int = 0; var_7_int = 0; // 0x9f PushV
	var_8_string = "nouse_container"; // 0xa0 PushS
	GetVariable(var_8_string, var_7_int); // 0xa1 Func
	var_5_bool = !var_7_int; // 0xa3 Not2
	return 2; // 0xa4 Return
}


