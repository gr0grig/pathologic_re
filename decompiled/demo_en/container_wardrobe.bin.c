task_0_event_0(var_0_object)
{
	var_1_bool = 0; var_2_bool = 0; var_3_int = 0; var_4_object = Obj(); var_5_bool = 0; var_6_bool = 0; var_7_int = 0; var_8_object = Obj(); // 0xa5 PushV
	var_9_bool = 0; // 0xa6 PushV
	var_9_bool = 1; // 0xa7 MovB
	var_10_bool = var_0_object == 0; // 0xa8 Not
	if(var_10_bool == 0) goto Label_176; // 0xa9 JumpB
	var_11_bool = 0; // 0xaa PushV
	func_231(var_11_bool); // 0xab NEW_2
	var_15_bool = var_11_bool == 0; // 0xad Not
	if(var_15_bool == 0) goto Label_176; // 0xae JumpB
	var_9_bool = 0; // 0xaf MovB
	
Label_176:
	if(var_9_bool == 0) goto Label_178; // 0xb0 JumpB
	return 8; // 0xb1 Return
	
Label_178:
	IsOnGround(var_5_bool); // 0xb2 ObjFunc
	var_16_bool = var_5_bool; // 0xb4 Push
	if(var_16_bool == 0) goto Label_199; // 0xb5 JumpB
	EventDisable(0); // 0xb6 EventDisable
	IsOverrideActive(var_6_bool); // 0xb7 Func
	var_17_bool = var_6_bool == 0; // 0xb9 Not
	if(var_17_bool == 0) goto Label_198; // 0xba JumpB
	GetItemCount(var_7_int); // 0xbb Func
	var_18_int = var_7_int; // 0xbd Push
	if(var_18_int == 0) goto Label_196; // 0xbe JumpB
	GetScene(var_8_object); // 0xbf Func
	BroadcastSteal(var_0_object, var_8_object); // 0xc1 Func
	var_8_object = 0; // 0xc3 SetNull
	
Label_196:
	Barter(var_0_object); // 0xc4 Func
	
Label_198:
	EventEnable(0); // 0xc6 EventEnable
	
Label_199:
	return 8; // 0xc7 Return
}


main()
{
	var_0_object = Obj(); var_1_bool = 0; var_2_int = 0; var_3_int = 0; var_4_object = Obj(); var_5_bool = 0; var_6_int = 0; var_7_int = 0; // 0x0 PushV
	var_8_bool = 1; // 0x1 PushB
	SetVisibility(var_8_bool); // 0x2 Func
	DisableUpdate(); // 0x4 Func
	GetScene(var_4_object); // 0x6 Func
	var_9_string = "nailed"; // 0x8 PushS
	GetProperty(var_9_string, var_5_bool); // 0x9 ObjFunc
	var_10_bool = var_5_bool; // 0xb Push
	if(var_10_bool == 0) goto Label_91; // 0xc JumpB
	var_11_string = ""; var_12_int = 0; var_13_int = 0; // 0xd PushV
	var_11_string = "Rifle"; // 0xe MovS
	var_12_int = 1; // 0xf MovI
	var_13_int = 250; // 0x10 MovI
	func_200(var_11_string, var_12_int, var_13_int); // 0x11 NEW_2
	var_22_string = ""; var_23_int = 0; var_24_int = 0; // 0x13 PushV
	var_22_string = "Revolver"; // 0x14 MovS
	var_23_int = 1; // 0x15 MovI
	var_24_int = 250; // 0x16 MovI
	func_200(var_22_string, var_23_int, var_24_int); // 0x17 NEW_2
	var_25_int = 0; // 0x19 PushV
	func_237(var_25_int); // 0x1a NEW_2
	var_6_int = var_25_int; // 0x1b Mov
	var_31_int = 3; // 0x1d PushI
	var_32_bool = var_6_int >= var_31_int; // 0x1e GE
	if(var_32_bool == 0) goto Label_50; // 0x1f JumpB
	var_33_string = ""; var_34_int = 0; var_35_int = 0; // 0x20 PushV
	var_33_string = "halfboot_repel"; // 0x21 MovS
	var_34_int = 1; // 0x22 MovI
	var_35_int = 40; // 0x23 MovI
	func_200(var_33_string, var_34_int, var_35_int); // 0x24 NEW_2
	var_36_string = ""; var_37_int = 0; var_38_int = 0; // 0x26 PushV
	var_36_string = "drapery"; // 0x27 MovS
	var_37_int = 1; // 0x28 MovI
	var_38_int = 30; // 0x29 MovI
	func_200(var_36_string, var_37_int, var_38_int); // 0x2a NEW_2
	var_39_string = ""; var_40_int = 0; var_41_int = 0; // 0x2c PushV
	var_39_string = "glove_disp"; // 0x2d MovS
	var_40_int = 1; // 0x2e MovI
	var_41_int = 40; // 0x2f MovI
	func_200(var_39_string, var_40_int, var_41_int); // 0x30 NEW_2
	
Label_50:
	var_42_int = 5; // 0x32 PushI
	var_43_bool = var_6_int >= var_42_int; // 0x33 GE
	if(var_43_bool == 0) goto Label_65; // 0x34 JumpB
	var_44_string = ""; var_45_int = 0; var_46_int = 0; // 0x35 PushV
	var_44_string = "cloak_repel"; // 0x36 MovS
	var_45_int = 1; // 0x37 MovI
	var_46_int = 40; // 0x38 MovI
	func_200(var_44_string, var_45_int, var_46_int); // 0x39 NEW_2
	var_47_string = ""; var_48_int = 0; var_49_int = 0; // 0x3b PushV
	var_47_string = "glove"; // 0x3c MovS
	var_48_int = 1; // 0x3d MovI
	var_49_int = 40; // 0x3e MovI
	func_200(var_47_string, var_48_int, var_49_int); // 0x3f NEW_2
	
Label_65:
	var_50_int = 6; // 0x41 PushI
	var_51_bool = var_6_int >= var_50_int; // 0x42 GE
	if(var_51_bool == 0) goto Label_74; // 0x43 JumpB
	var_52_string = ""; var_53_int = 0; var_54_int = 0; // 0x44 PushV
	var_52_string = "boot_repel"; // 0x45 MovS
	var_53_int = 1; // 0x46 MovI
	var_54_int = 70; // 0x47 MovI
	func_200(var_52_string, var_53_int, var_54_int); // 0x48 NEW_2
	
Label_74:
	var_55_int = 8; // 0x4a PushI
	var_56_bool = var_6_int >= var_55_int; // 0x4b GE
	if(var_56_bool == 0) goto Label_83; // 0x4c JumpB
	var_57_string = ""; var_58_int = 0; var_59_int = 0; // 0x4d PushV
	var_57_string = "raincoat_repel"; // 0x4e MovS
	var_58_int = 1; // 0x4f MovI
	var_59_int = 60; // 0x50 MovI
	func_200(var_57_string, var_58_int, var_59_int); // 0x51 NEW_2
	
Label_83:
	var_60_string = ""; var_61_int = 0; var_62_int = 0; var_63_int = 0; // 0x53 PushV
	var_60_string = "Money"; // 0x54 MovS
	var_61_int = 1; // 0x55 MovI
	var_62_int = 2; // 0x56 MovI
	var_63_int = 5; // 0x57 MovI
	func_211(var_60_string, var_61_int, var_62_int, var_63_int); // 0x58 NEW_2
	goto Label_156; // 0x5a Jump
	
Label_156:
	func_161(); // 0x9d NEW_2
	return 8; // 0x9f Return
	
Label_91:
	var_74_int = 0; // 0x5b PushV
	func_237(var_74_int); // 0x5c NEW_2
	var_7_int = var_74_int; // 0x5d Mov
	var_75_int = 3; // 0x5f PushI
	var_76_bool = var_7_int >= var_75_int; // 0x60 GE
	if(var_76_bool == 0) goto Label_116; // 0x61 JumpB
	var_77_string = ""; var_78_int = 0; var_79_int = 0; // 0x62 PushV
	var_77_string = "halfboot_repel"; // 0x63 MovS
	var_78_int = 1; // 0x64 MovI
	var_79_int = 60; // 0x65 MovI
	func_200(var_77_string, var_78_int, var_79_int); // 0x66 NEW_2
	var_80_string = ""; var_81_int = 0; var_82_int = 0; // 0x68 PushV
	var_80_string = "drapery"; // 0x69 MovS
	var_81_int = 1; // 0x6a MovI
	var_82_int = 40; // 0x6b MovI
	func_200(var_80_string, var_81_int, var_82_int); // 0x6c NEW_2
	var_83_string = ""; var_84_int = 0; var_85_int = 0; // 0x6e PushV
	var_83_string = "glove_disp"; // 0x6f MovS
	var_84_int = 1; // 0x70 MovI
	var_85_int = 60; // 0x71 MovI
	func_200(var_83_string, var_84_int, var_85_int); // 0x72 NEW_2
	
Label_116:
	var_86_int = 5; // 0x74 PushI
	var_87_bool = var_7_int >= var_86_int; // 0x75 GE
	if(var_87_bool == 0) goto Label_131; // 0x76 JumpB
	var_88_string = ""; var_89_int = 0; var_90_int = 0; // 0x77 PushV
	var_88_string = "cloak_repel"; // 0x78 MovS
	var_89_int = 1; // 0x79 MovI
	var_90_int = 60; // 0x7a MovI
	func_200(var_88_string, var_89_int, var_90_int); // 0x7b NEW_2
	var_91_string = ""; var_92_int = 0; var_93_int = 0; // 0x7d PushV
	var_91_string = "glove"; // 0x7e MovS
	var_92_int = 1; // 0x7f MovI
	var_93_int = 60; // 0x80 MovI
	func_200(var_91_string, var_92_int, var_93_int); // 0x81 NEW_2
	
Label_131:
	var_94_int = 8; // 0x83 PushI
	var_95_bool = var_7_int >= var_94_int; // 0x84 GE
	if(var_95_bool == 0) goto Label_140; // 0x85 JumpB
	var_96_string = ""; var_97_int = 0; var_98_int = 0; // 0x86 PushV
	var_96_string = "boot_repel"; // 0x87 MovS
	var_97_int = 1; // 0x88 MovI
	var_98_int = 80; // 0x89 MovI
	func_200(var_96_string, var_97_int, var_98_int); // 0x8a NEW_2
	
Label_140:
	var_99_int = 8; // 0x8c PushI
	var_100_bool = var_7_int >= var_99_int; // 0x8d GE
	if(var_100_bool == 0) goto Label_149; // 0x8e JumpB
	var_101_string = ""; var_102_int = 0; var_103_int = 0; // 0x8f PushV
	var_101_string = "raincoat_repel"; // 0x90 MovS
	var_102_int = 1; // 0x91 MovI
	var_103_int = 80; // 0x92 MovI
	func_200(var_101_string, var_102_int, var_103_int); // 0x93 NEW_2
	
Label_149:
	var_104_string = ""; var_105_int = 0; var_106_int = 0; var_107_int = 0; // 0x95 PushV
	var_104_string = "Money"; // 0x96 MovS
	var_105_int = 1; // 0x97 MovI
	var_106_int = 2; // 0x98 MovI
	var_107_int = 3; // 0x99 MovI
	func_211(var_104_string, var_105_int, var_106_int, var_107_int); // 0x9a NEW_2
}


func_161()
{
	
Label_161:
	Hold(); // 0xa1 Func
	goto Label_161; // 0xa3 Jump
}


func_226(var_16_bool, var_17_int, var_18_int)
{
	var_19_int = 0; var_20_int = 0; // 0xe2 PushV
	irand(var_20_int, var_18_int); // 0xe3 Func
	var_16_bool = var_20_int < var_17_int; // 0xe5 LT2
	return 2; // 0xe6 Return
}


func_231(var_11_bool)
{
	var_12_int = 0; var_13_int = 0; // 0xe7 PushV
	var_14_string = "nouse_container"; // 0xe8 PushS
	GetVariable(var_14_string, var_13_int); // 0xe9 Func
	var_11_bool = !var_13_int; // 0xeb Not2
	return 2; // 0xec Return
}


func_200(var_11_string, var_12_int, var_13_int)
{
	var_14_bool = 0; var_15_bool = 0; // 0xc8 PushV
	var_16_bool = 0; var_17_int = 0; var_18_int = 0; // 0xc9 PushV
	var_17_int = var_12_int; // 0xca Mov
	var_18_int = var_13_int; // 0xcb Mov
	func_226(var_16_bool, var_17_int, var_18_int); // 0xcc NEW_2
	if(var_16_bool == 0) goto Label_210; // 0xce JumpB
	var_21_int = 0; // 0xcf PushI
	AddItem(var_15_bool, var_11_string, var_21_int); // 0xd0 Func
	
Label_210:
	return 2; // 0xd2 Return
}


func_237(var_25_int)
{
	var_26_float = 0; var_27_float = 0; // 0xed PushV
	GetGameTime(var_27_float); // 0xee Func
	var_28_int = 1; // 0xf0 PushI
	var_29_int = 0; // 0xf1 PushV
	var_30_int = 24; // 0xf2 PushI
	var_29_int = var_27_float / var_27_float; // 0xf3 Div2
	var_25_int = var_28_int + var_29_int; // 0xf4 Add2
	return 2; // 0xf5 Return
}


func_211(var_60_string, var_61_int, var_62_int, var_63_int)
{
	var_64_int = 0; var_65_bool = 0; var_66_int = 0; var_67_bool = 0; // 0xd3 PushV
	var_68_bool = 0; var_69_int = 0; var_70_int = 0; // 0xd4 PushV
	var_69_int = var_61_int; // 0xd5 Mov
	var_70_int = var_62_int; // 0xd6 Mov
	func_226(var_68_bool, var_69_int, var_70_int); // 0xd7 NEW_2
	if(var_68_bool == 0) goto Label_225; // 0xd9 JumpB
	irand(var_66_int, var_63_int); // 0xda Func
	var_71_int = 0; // 0xdc PushI
	var_72_int = 1; // 0xdd PushI
	var_73_int = var_66_int + var_72_int; // 0xde Add
	AddItem(var_67_bool, var_60_string, var_71_int, var_73_int); // 0xdf Func
	
Label_225:
	return 4; // 0xe1 Return
}


