task_0_event_0(var_0_object)
{
	var_1_bool = 0; var_2_bool = 0; var_3_bool = 0; var_4_bool = 0; // 0xc7 PushV
	var_5_bool = 0; // 0xc8 PushV
	func_250(var_5_bool); // 0xc9 Call
	var_9_bool = var_5_bool == 0; // 0xcb Not
	if(var_9_bool == 0) goto Label_206; // 0xcc JumpB
	return 4; // 0xcd Return
	
Label_206:
	IsOnGround(var_3_bool); // 0xce ObjFunc
	var_10_bool = var_3_bool; // 0xd0 Push
	if(var_10_bool == 0) goto Label_218; // 0xd1 JumpB
	EventDisable(0); // 0xd2 EventDisable
	IsOverrideActive(var_4_bool); // 0xd3 Func
	var_11_bool = var_4_bool == 0; // 0xd5 Not
	if(var_11_bool == 0) goto Label_217; // 0xd6 JumpB
	Barter(var_0_object); // 0xd7 Func
	
Label_217:
	EventEnable(0); // 0xd9 EventEnable
	
Label_218:
	return 4; // 0xda Return
}


main()
{
	var_0_object = Obj(); var_1_bool = 0; var_2_int = 0; var_3_int = 0; var_4_object = Obj(); var_5_bool = 0; var_6_int = 0; var_7_int = 0; // 0x0 PushV
	var_8_bool = 1; // 0x1 PushB
	SetVisibility(var_8_bool); // 0x2 Func
	GetScene(var_4_object); // 0x4 Func
	var_9_string = "nailed"; // 0x6 PushS
	GetProperty(var_9_string, var_5_bool); // 0x7 ObjFunc
	var_10_bool = var_5_bool; // 0x9 Push
	if(var_10_bool == 0) goto Label_108; // 0xa JumpB
	var_11_string = ""; var_12_int = 0; var_13_int = 0; // 0xb PushV
	var_11_string = "Rifle"; // 0xc MovS
	var_12_int = 1; // 0xd MovI
	var_13_int = 150; // 0xe MovI
	func_219(var_11_string, var_12_int, var_13_int); // 0xf Call
	var_22_string = ""; var_23_int = 0; var_24_int = 0; // 0x11 PushV
	var_22_string = "Revolver"; // 0x12 MovS
	var_23_int = 1; // 0x13 MovI
	var_24_int = 100; // 0x14 MovI
	func_219(var_22_string, var_23_int, var_24_int); // 0x15 Call
	var_25_string = ""; var_26_int = 0; var_27_int = 0; var_28_int = 0; // 0x17 PushV
	var_25_string = "rifle_ammo"; // 0x18 MovS
	var_26_int = 1; // 0x19 MovI
	var_27_int = 15; // 0x1a MovI
	var_28_int = 3; // 0x1b MovI
	func_230(var_25_string, var_26_int, var_27_int, var_28_int); // 0x1c Call
	var_39_string = ""; var_40_int = 0; var_41_int = 0; var_42_int = 0; // 0x1e PushV
	var_39_string = "revolver_ammo"; // 0x1f MovS
	var_40_int = 1; // 0x20 MovI
	var_41_int = 15; // 0x21 MovI
	var_42_int = 6; // 0x22 MovI
	func_230(var_39_string, var_40_int, var_41_int, var_42_int); // 0x23 Call
	var_43_int = 0; // 0x25 PushV
	func_256(var_43_int); // 0x26 Call
	var_6_int = var_43_int; // 0x27 Mov
	var_49_int = 3; // 0x29 PushI
	var_50_bool = var_6_int >= var_49_int; // 0x2a GE
	if(var_50_bool == 0) goto Label_86; // 0x2b JumpB
	var_51_string = ""; var_52_int = 0; var_53_int = 0; // 0x2c PushV
	var_51_string = "halfboot_repel"; // 0x2d MovS
	var_52_int = 1; // 0x2e MovI
	var_53_int = 15; // 0x2f MovI
	func_219(var_51_string, var_52_int, var_53_int); // 0x30 Call
	var_54_string = ""; var_55_int = 0; var_56_int = 0; // 0x32 PushV
	var_54_string = "boot_repel"; // 0x33 MovS
	var_55_int = 1; // 0x34 MovI
	var_56_int = 20; // 0x35 MovI
	func_219(var_54_string, var_55_int, var_56_int); // 0x36 Call
	var_57_string = ""; var_58_int = 0; var_59_int = 0; // 0x38 PushV
	var_57_string = "drapery"; // 0x39 MovS
	var_58_int = 1; // 0x3a MovI
	var_59_int = 5; // 0x3b MovI
	func_219(var_57_string, var_58_int, var_59_int); // 0x3c Call
	var_60_string = ""; var_61_int = 0; var_62_int = 0; // 0x3e PushV
	var_60_string = "cloak_repel"; // 0x3f MovS
	var_61_int = 1; // 0x40 MovI
	var_62_int = 15; // 0x41 MovI
	func_219(var_60_string, var_61_int, var_62_int); // 0x42 Call
	var_63_string = ""; var_64_int = 0; var_65_int = 0; // 0x44 PushV
	var_63_string = "raincoat_repel"; // 0x45 MovS
	var_64_int = 1; // 0x46 MovI
	var_65_int = 35; // 0x47 MovI
	func_219(var_63_string, var_64_int, var_65_int); // 0x48 Call
	var_66_string = ""; var_67_int = 0; var_68_int = 0; // 0x4a PushV
	var_66_string = "glove_disp"; // 0x4b MovS
	var_67_int = 1; // 0x4c MovI
	var_68_int = 20; // 0x4d MovI
	func_219(var_66_string, var_67_int, var_68_int); // 0x4e Call
	var_69_string = ""; var_70_int = 0; var_71_int = 0; // 0x50 PushV
	var_69_string = "glove"; // 0x51 MovS
	var_70_int = 1; // 0x52 MovI
	var_71_int = 20; // 0x53 MovI
	func_219(var_69_string, var_70_int, var_71_int); // 0x54 Call
	
Label_86:
	var_72_int = 9; // 0x56 PushI
	var_73_bool = var_6_int >= var_72_int; // 0x57 GE
	if(var_73_bool == 0) goto Label_107; // 0x58 JumpB
	var_74_string = ""; var_75_int = 0; var_76_int = 0; // 0x59 PushV
	var_74_string = "boot_army"; // 0x5a MovS
	var_75_int = 1; // 0x5b MovI
	var_76_int = 40; // 0x5c MovI
	func_219(var_74_string, var_75_int, var_76_int); // 0x5d Call
	var_77_string = ""; var_78_int = 0; var_79_int = 0; // 0x5f PushV
	var_77_string = "glove_army"; // 0x60 MovS
	var_78_int = 1; // 0x61 MovI
	var_79_int = 50; // 0x62 MovI
	func_219(var_77_string, var_78_int, var_79_int); // 0x63 Call
	var_80_string = ""; var_81_int = 0; var_82_int = 0; // 0x65 PushV
	var_80_string = "balahon"; // 0x66 MovS
	var_81_int = 1; // 0x67 MovI
	var_82_int = 70; // 0x68 MovI
	func_219(var_80_string, var_81_int, var_82_int); // 0x69 Call
	
Label_107:
	goto Label_190; // 0x6b Jump
	
Label_190:
	func_195(); // 0xbf Call
	return 8; // 0xc1 Return
	
Label_108:
	var_83_string = ""; var_84_int = 0; var_85_int = 0; // 0x6c PushV
	var_83_string = "Rifle"; // 0x6d MovS
	var_84_int = 1; // 0x6e MovI
	var_85_int = 300; // 0x6f MovI
	func_219(var_83_string, var_84_int, var_85_int); // 0x70 Call
	var_86_string = ""; var_87_int = 0; var_88_int = 0; // 0x72 PushV
	var_86_string = "Revolver"; // 0x73 MovS
	var_87_int = 1; // 0x74 MovI
	var_88_int = 200; // 0x75 MovI
	func_219(var_86_string, var_87_int, var_88_int); // 0x76 Call
	var_89_int = 0; // 0x78 PushV
	func_256(var_89_int); // 0x79 Call
	var_7_int = var_89_int; // 0x7a Mov
	var_90_int = 3; // 0x7c PushI
	var_91_bool = var_7_int >= var_90_int; // 0x7d GE
	if(var_91_bool == 0) goto Label_169; // 0x7e JumpB
	var_92_string = ""; var_93_int = 0; var_94_int = 0; // 0x7f PushV
	var_92_string = "halfboot_repel"; // 0x80 MovS
	var_93_int = 1; // 0x81 MovI
	var_94_int = 30; // 0x82 MovI
	func_219(var_92_string, var_93_int, var_94_int); // 0x83 Call
	var_95_string = ""; var_96_int = 0; var_97_int = 0; // 0x85 PushV
	var_95_string = "boot_repel"; // 0x86 MovS
	var_96_int = 1; // 0x87 MovI
	var_97_int = 50; // 0x88 MovI
	func_219(var_95_string, var_96_int, var_97_int); // 0x89 Call
	var_98_string = ""; var_99_int = 0; var_100_int = 0; // 0x8b PushV
	var_98_string = "drapery"; // 0x8c MovS
	var_99_int = 1; // 0x8d MovI
	var_100_int = 10; // 0x8e MovI
	func_219(var_98_string, var_99_int, var_100_int); // 0x8f Call
	var_101_string = ""; var_102_int = 0; var_103_int = 0; // 0x91 PushV
	var_101_string = "cloak_repel"; // 0x92 MovS
	var_102_int = 1; // 0x93 MovI
	var_103_int = 20; // 0x94 MovI
	func_219(var_101_string, var_102_int, var_103_int); // 0x95 Call
	var_104_string = ""; var_105_int = 0; var_106_int = 0; // 0x97 PushV
	var_104_string = "raincoat_repel"; // 0x98 MovS
	var_105_int = 1; // 0x99 MovI
	var_106_int = 40; // 0x9a MovI
	func_219(var_104_string, var_105_int, var_106_int); // 0x9b Call
	var_107_string = ""; var_108_int = 0; var_109_int = 0; // 0x9d PushV
	var_107_string = "glove_disp"; // 0x9e MovS
	var_108_int = 1; // 0x9f MovI
	var_109_int = 30; // 0xa0 MovI
	func_219(var_107_string, var_108_int, var_109_int); // 0xa1 Call
	var_110_string = ""; var_111_int = 0; var_112_int = 0; // 0xa3 PushV
	var_110_string = "glove"; // 0xa4 MovS
	var_111_int = 1; // 0xa5 MovI
	var_112_int = 30; // 0xa6 MovI
	func_219(var_110_string, var_111_int, var_112_int); // 0xa7 Call
	
Label_169:
	var_113_int = 9; // 0xa9 PushI
	var_114_bool = var_7_int >= var_113_int; // 0xaa GE
	if(var_114_bool == 0) goto Label_190; // 0xab JumpB
	var_115_string = ""; var_116_int = 0; var_117_int = 0; // 0xac PushV
	var_115_string = "boot_army"; // 0xad MovS
	var_116_int = 1; // 0xae MovI
	var_117_int = 50; // 0xaf MovI
	func_219(var_115_string, var_116_int, var_117_int); // 0xb0 Call
	var_118_string = ""; var_119_int = 0; var_120_int = 0; // 0xb2 PushV
	var_118_string = "glove_army"; // 0xb3 MovS
	var_119_int = 1; // 0xb4 MovI
	var_120_int = 50; // 0xb5 MovI
	func_219(var_118_string, var_119_int, var_120_int); // 0xb6 Call
	var_121_string = ""; var_122_int = 0; var_123_int = 0; // 0xb8 PushV
	var_121_string = "balahon"; // 0xb9 MovS
	var_122_int = 1; // 0xba MovI
	var_123_int = 100; // 0xbb MovI
	func_219(var_121_string, var_122_int, var_123_int); // 0xbc Call
}


func_256(var_43_int)
{
	var_44_float = 0; var_45_float = 0; // 0x100 PushV
	GetGameTime(var_45_float); // 0x101 Func
	var_46_int = 1; // 0x103 PushI
	var_47_int = 0; // 0x104 PushV
	var_48_int = 24; // 0x105 PushI
	var_47_int = var_45_float / var_45_float; // 0x106 Div2
	var_43_int = var_46_int + var_47_int; // 0x107 Add2
	return 2; // 0x108 Return
}


func_195()
{
	
Label_195:
	Hold(); // 0xc3 Func
	goto Label_195; // 0xc5 Jump
}


func_230(var_25_string, var_26_int, var_27_int, var_28_int)
{
	var_29_int = 0; var_30_bool = 0; var_31_int = 0; var_32_bool = 0; // 0xe6 PushV
	var_33_bool = 0; var_34_int = 0; var_35_int = 0; // 0xe7 PushV
	var_34_int = var_26_int; // 0xe8 Mov
	var_35_int = var_27_int; // 0xe9 Mov
	func_245(var_33_bool, var_34_int, var_35_int); // 0xea Call
	if(var_33_bool == 0) goto Label_244; // 0xec JumpB
	irand(var_31_int, var_28_int); // 0xed Func
	var_36_int = 0; // 0xef PushI
	var_37_int = 1; // 0xf0 PushI
	var_38_int = var_28_int + var_37_int; // 0xf1 Add
	AddItem(var_32_bool, var_25_string, var_36_int, var_38_int); // 0xf2 Func
	
Label_244:
	return 4; // 0xf4 Return
}


func_245(var_16_bool, var_17_int, var_18_int)
{
	var_19_int = 0; var_20_int = 0; // 0xf5 PushV
	irand(var_20_int, var_18_int); // 0xf6 Func
	var_16_bool = var_20_int < var_17_int; // 0xf8 LT2
	return 2; // 0xf9 Return
}


func_250(var_5_bool)
{
	var_6_int = 0; var_7_int = 0; // 0xfa PushV
	var_8_string = "nouse_container"; // 0xfb PushS
	GetVariable(var_8_string, var_7_int); // 0xfc Func
	var_5_bool = !var_7_int; // 0xfe Not2
	return 2; // 0xff Return
}


func_219(var_11_string, var_12_int, var_13_int)
{
	var_14_bool = 0; var_15_bool = 0; // 0xdb PushV
	var_16_bool = 0; var_17_int = 0; var_18_int = 0; // 0xdc PushV
	var_17_int = var_12_int; // 0xdd Mov
	var_18_int = var_13_int; // 0xde Mov
	func_245(var_16_bool, var_17_int, var_18_int); // 0xdf Call
	if(var_16_bool == 0) goto Label_229; // 0xe1 JumpB
	var_21_int = 0; // 0xe2 PushI
	AddItem(var_15_bool, var_11_string, var_21_int); // 0xe3 Func
	
Label_229:
	return 2; // 0xe5 Return
}


