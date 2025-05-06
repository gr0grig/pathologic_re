task_0_event_0(var_0_object)
{
	var_1_bool = 0; var_2_bool = 0; var_3_bool = 0; var_4_bool = 0; // 0x63 PushV
	var_5_bool = 0; // 0x64 PushV
	var_5_bool = 1; // 0x65 MovB
	var_6_bool = var_0_object == 0; // 0x66 Not
	if(var_6_bool == 0) goto Label_110; // 0x67 JumpB
	var_7_bool = 0; // 0x68 PushV
	func_156(var_7_bool); // 0x69 NEW_2
	var_11_bool = var_7_bool == 0; // 0x6b Not
	if(var_11_bool == 0) goto Label_110; // 0x6c JumpB
	var_5_bool = 0; // 0x6d MovB
	
Label_110:
	if(var_5_bool == 0) goto Label_112; // 0x6e JumpB
	return 4; // 0x6f Return
	
Label_112:
	IsOnGround(var_3_bool); // 0x70 ObjFunc
	var_12_bool = var_3_bool; // 0x72 Push
	if(var_12_bool == 0) goto Label_124; // 0x73 JumpB
	EventDisable(0); // 0x74 EventDisable
	IsOverrideActive(var_4_bool); // 0x75 Func
	var_13_bool = var_4_bool == 0; // 0x77 Not
	if(var_13_bool == 0) goto Label_123; // 0x78 JumpB
	Barter(var_0_object); // 0x79 Func
	
Label_123:
	EventEnable(0); // 0x7b EventEnable
	
Label_124:
	return 4; // 0x7c Return
}


main()
{
	var_0_int = 0; var_1_int = 0; // 0x0 PushV
	var_2_bool = 1; // 0x1 PushB
	SetVisibility(var_2_bool); // 0x2 Func
	DisableUpdate(); // 0x4 Func
	var_3_string = ""; var_4_int = 0; var_5_int = 0; // 0x6 PushV
	var_3_string = "Rifle"; // 0x7 MovS
	var_4_int = 1; // 0x8 MovI
	var_5_int = 250; // 0x9 MovI
	func_125(var_3_string, var_4_int, var_5_int); // 0xa NEW_2
	var_14_string = ""; var_15_int = 0; var_16_int = 0; var_17_int = 0; // 0xc PushV
	var_14_string = "rifle_ammo"; // 0xd MovS
	var_15_int = 1; // 0xe MovI
	var_16_int = 20; // 0xf MovI
	var_17_int = 2; // 0x10 MovI
	func_136(var_14_string, var_15_int, var_16_int, var_17_int); // 0x11 NEW_2
	var_28_string = ""; var_29_int = 0; var_30_int = 0; var_31_int = 0; // 0x13 PushV
	var_28_string = "revolver_ammo"; // 0x14 MovS
	var_29_int = 1; // 0x15 MovI
	var_30_int = 20; // 0x16 MovI
	var_31_int = 2; // 0x17 MovI
	func_136(var_28_string, var_29_int, var_30_int, var_31_int); // 0x18 NEW_2
	var_32_int = 0; // 0x1a PushV
	func_162(var_32_int); // 0x1b NEW_2
	var_1_int = var_32_int; // 0x1c Mov
	var_38_int = 3; // 0x1e PushI
	var_39_bool = var_1_int >= var_38_int; // 0x1f GE
	if(var_39_bool == 0) goto Label_51; // 0x20 JumpB
	var_40_string = ""; var_41_int = 0; var_42_int = 0; // 0x21 PushV
	var_40_string = "halfboot_repel"; // 0x22 MovS
	var_41_int = 1; // 0x23 MovI
	var_42_int = 30; // 0x24 MovI
	func_125(var_40_string, var_41_int, var_42_int); // 0x25 NEW_2
	var_43_string = ""; var_44_int = 0; var_45_int = 0; // 0x27 PushV
	var_43_string = "drapery"; // 0x28 MovS
	var_44_int = 1; // 0x29 MovI
	var_45_int = 40; // 0x2a MovI
	func_125(var_43_string, var_44_int, var_45_int); // 0x2b NEW_2
	var_46_string = ""; var_47_int = 0; var_48_int = 0; // 0x2d PushV
	var_46_string = "glove_disp"; // 0x2e MovS
	var_47_int = 1; // 0x2f MovI
	var_48_int = 40; // 0x30 MovI
	func_125(var_46_string, var_47_int, var_48_int); // 0x31 NEW_2
	
Label_51:
	var_49_int = 5; // 0x33 PushI
	var_50_bool = var_1_int >= var_49_int; // 0x34 GE
	if(var_50_bool == 0) goto Label_66; // 0x35 JumpB
	var_51_string = ""; var_52_int = 0; var_53_int = 0; // 0x36 PushV
	var_51_string = "cloak_repel"; // 0x37 MovS
	var_52_int = 1; // 0x38 MovI
	var_53_int = 70; // 0x39 MovI
	func_125(var_51_string, var_52_int, var_53_int); // 0x3a NEW_2
	var_54_string = ""; var_55_int = 0; var_56_int = 0; // 0x3c PushV
	var_54_string = "glove"; // 0x3d MovS
	var_55_int = 1; // 0x3e MovI
	var_56_int = 70; // 0x3f MovI
	func_125(var_54_string, var_55_int, var_56_int); // 0x40 NEW_2
	
Label_66:
	var_57_int = 6; // 0x42 PushI
	var_58_bool = var_1_int >= var_57_int; // 0x43 GE
	if(var_58_bool == 0) goto Label_75; // 0x44 JumpB
	var_59_string = ""; var_60_int = 0; var_61_int = 0; // 0x45 PushV
	var_59_string = "boot_repel"; // 0x46 MovS
	var_60_int = 1; // 0x47 MovI
	var_61_int = 40; // 0x48 MovI
	func_125(var_59_string, var_60_int, var_61_int); // 0x49 NEW_2
	
Label_75:
	var_62_int = 8; // 0x4b PushI
	var_63_bool = var_1_int >= var_62_int; // 0x4c GE
	if(var_63_bool == 0) goto Label_84; // 0x4d JumpB
	var_64_string = ""; var_65_int = 0; var_66_int = 0; // 0x4e PushV
	var_64_string = "raincoat_repel"; // 0x4f MovS
	var_65_int = 1; // 0x50 MovI
	var_66_int = 80; // 0x51 MovI
	func_125(var_64_string, var_65_int, var_66_int); // 0x52 NEW_2
	
Label_84:
	var_67_string = ""; var_68_int = 0; var_69_int = 0; var_70_int = 0; // 0x54 PushV
	var_67_string = "needle"; // 0x55 MovS
	var_68_int = 1; // 0x56 MovI
	var_69_int = 5; // 0x57 MovI
	var_70_int = 1; // 0x58 MovI
	func_136(var_67_string, var_68_int, var_69_int, var_70_int); // 0x59 NEW_2
	func_95(); // 0x5c NEW_2
	return 2; // 0x5e Return
}


func_162(var_32_int)
{
	var_33_float = 0; var_34_float = 0; // 0xa2 PushV
	GetGameTime(var_34_float); // 0xa3 Func
	var_35_int = 1; // 0xa5 PushI
	var_36_int = 0; // 0xa6 PushV
	var_37_int = 24; // 0xa7 PushI
	var_36_int = var_34_float / var_34_float; // 0xa8 Div2
	var_32_int = var_35_int + var_36_int; // 0xa9 Add2
	return 2; // 0xaa Return
}


func_136(var_14_string, var_15_int, var_16_int, var_17_int)
{
	var_18_int = 0; var_19_bool = 0; var_20_int = 0; var_21_bool = 0; // 0x88 PushV
	var_22_bool = 0; var_23_int = 0; var_24_int = 0; // 0x89 PushV
	var_23_int = var_15_int; // 0x8a Mov
	var_24_int = var_16_int; // 0x8b Mov
	func_151(var_22_bool, var_23_int, var_24_int); // 0x8c NEW_2
	if(var_22_bool == 0) goto Label_150; // 0x8e JumpB
	irand(var_20_int, var_17_int); // 0x8f Func
	var_25_int = 0; // 0x91 PushI
	var_26_int = 1; // 0x92 PushI
	var_27_int = var_20_int + var_26_int; // 0x93 Add
	AddItem(var_21_bool, var_14_string, var_25_int, var_27_int); // 0x94 Func
	
Label_150:
	return 4; // 0x96 Return
}


func_151(var_8_bool, var_9_int, var_10_int)
{
	var_11_int = 0; var_12_int = 0; // 0x97 PushV
	irand(var_12_int, var_10_int); // 0x98 Func
	var_8_bool = var_12_int < var_9_int; // 0x9a LT2
	return 2; // 0x9b Return
}


func_156(var_7_bool)
{
	var_8_int = 0; var_9_int = 0; // 0x9c PushV
	var_10_string = "nouse_container"; // 0x9d PushS
	GetVariable(var_10_string, var_9_int); // 0x9e Func
	var_7_bool = !var_9_int; // 0xa0 Not2
	return 2; // 0xa1 Return
}


func_125(var_3_string, var_4_int, var_5_int)
{
	var_6_bool = 0; var_7_bool = 0; // 0x7d PushV
	var_8_bool = 0; var_9_int = 0; var_10_int = 0; // 0x7e PushV
	var_9_int = var_4_int; // 0x7f Mov
	var_10_int = var_5_int; // 0x80 Mov
	func_151(var_8_bool, var_9_int, var_10_int); // 0x81 NEW_2
	if(var_8_bool == 0) goto Label_135; // 0x83 JumpB
	var_13_int = 0; // 0x84 PushI
	AddItem(var_7_bool, var_3_string, var_13_int); // 0x85 Func
	
Label_135:
	return 2; // 0x87 Return
}


func_95()
{
	
Label_95:
	Hold(); // 0x5f Func
	goto Label_95; // 0x61 Jump
}


