task_0_event_0(var_0_object)
{
	var_1_bool = 0; var_2_bool = 0; var_3_bool = 0; var_4_bool = 0; // 0xa3 PushV
	var_5_bool = 0; // 0xa4 PushV
	func_214(var_5_bool); // 0xa5 Call
	var_9_bool = var_5_bool == 0; // 0xa7 Not
	if(var_9_bool == 0) goto Label_170; // 0xa8 JumpB
	return 4; // 0xa9 Return
	
Label_170:
	IsOnGround(var_3_bool); // 0xaa ObjFunc
	var_10_bool = var_3_bool; // 0xac Push
	if(var_10_bool == 0) goto Label_182; // 0xad JumpB
	EventDisable(0); // 0xae EventDisable
	IsOverrideActive(var_4_bool); // 0xaf Func
	var_11_bool = var_4_bool == 0; // 0xb1 Not
	if(var_11_bool == 0) goto Label_181; // 0xb2 JumpB
	Barter(var_0_object); // 0xb3 Func
	
Label_181:
	EventEnable(0); // 0xb5 EventEnable
	
Label_182:
	return 4; // 0xb6 Return
}


main()
{
	var_0_object = Obj(); var_1_bool = 0; var_2_object = Obj(); var_3_bool = 0; // 0x0 PushV
	var_4_bool = 1; // 0x1 PushB
	SetVisibility(var_4_bool); // 0x2 Func
	GetScene(var_2_object); // 0x4 Func
	var_5_string = "nailed"; // 0x6 PushS
	GetProperty(var_5_string, var_3_bool); // 0x7 ObjFunc
	var_6_bool = var_3_bool; // 0x9 Push
	if(var_6_bool == 0) goto Label_53; // 0xa JumpB
	var_7_string = ""; var_8_int = 0; var_9_int = 0; // 0xb PushV
	var_7_string = "Knife"; // 0xc MovS
	var_8_int = 1; // 0xd MovI
	var_9_int = 10; // 0xe MovI
	func_183(var_7_string, var_8_int, var_9_int); // 0xf Call
	var_18_string = ""; var_19_int = 0; var_20_int = 0; var_21_int = 0; // 0x11 PushV
	var_18_string = "tvirin"; // 0x12 MovS
	var_19_int = 1; // 0x13 MovI
	var_20_int = 10; // 0x14 MovI
	var_21_int = 1; // 0x15 MovI
	func_194(var_18_string, var_19_int, var_20_int, var_21_int); // 0x16 Call
	var_32_string = ""; var_33_int = 0; var_34_int = 0; var_35_int = 0; // 0x18 PushV
	var_32_string = "lemon"; // 0x19 MovS
	var_33_int = 1; // 0x1a MovI
	var_34_int = 20; // 0x1b MovI
	var_35_int = 2; // 0x1c MovI
	func_194(var_32_string, var_33_int, var_34_int, var_35_int); // 0x1d Call
	var_36_string = ""; var_37_int = 0; var_38_int = 0; var_39_int = 0; // 0x1f PushV
	var_36_string = "funduk"; // 0x20 MovS
	var_37_int = 1; // 0x21 MovI
	var_38_int = 40; // 0x22 MovI
	var_39_int = 1; // 0x23 MovI
	func_194(var_36_string, var_37_int, var_38_int, var_39_int); // 0x24 Call
	var_40_string = ""; var_41_int = 0; var_42_int = 0; var_43_int = 0; // 0x26 PushV
	var_40_string = "peanut"; // 0x27 MovS
	var_41_int = 1; // 0x28 MovI
	var_42_int = 40; // 0x29 MovI
	var_43_int = 1; // 0x2a MovI
	func_194(var_40_string, var_41_int, var_42_int, var_43_int); // 0x2b Call
	var_44_string = ""; var_45_int = 0; var_46_int = 0; var_47_int = 0; // 0x2d PushV
	var_44_string = "walnut"; // 0x2e MovS
	var_45_int = 1; // 0x2f MovI
	var_46_int = 40; // 0x30 MovI
	var_47_int = 1; // 0x31 MovI
	func_194(var_44_string, var_45_int, var_46_int, var_47_int); // 0x32 Call
	goto Label_154; // 0x34 Jump
	
Label_154:
	func_159(); // 0x9b Call
	return 4; // 0x9d Return
	
Label_53:
	var_48_string = ""; var_49_int = 0; var_50_int = 0; // 0x35 PushV
	var_48_string = "Knife"; // 0x36 MovS
	var_49_int = 1; // 0x37 MovI
	var_50_int = 20; // 0x38 MovI
	func_183(var_48_string, var_49_int, var_50_int); // 0x39 Call
	var_51_string = ""; var_52_int = 0; var_53_int = 0; // 0x3b PushV
	var_51_string = "tvirin"; // 0x3c MovS
	var_52_int = 1; // 0x3d MovI
	var_53_int = 20; // 0x3e MovI
	func_183(var_51_string, var_52_int, var_53_int); // 0x3f Call
	var_54_string = ""; var_55_int = 0; var_56_int = 0; var_57_int = 0; // 0x41 PushV
	var_54_string = "lemon"; // 0x42 MovS
	var_55_int = 1; // 0x43 MovI
	var_56_int = 10; // 0x44 MovI
	var_57_int = 2; // 0x45 MovI
	func_194(var_54_string, var_55_int, var_56_int, var_57_int); // 0x46 Call
	var_58_string = ""; var_59_int = 0; var_60_int = 0; var_61_int = 0; // 0x48 PushV
	var_58_string = "funduk"; // 0x49 MovS
	var_59_int = 1; // 0x4a MovI
	var_60_int = 50; // 0x4b MovI
	var_61_int = 2; // 0x4c MovI
	func_194(var_58_string, var_59_int, var_60_int, var_61_int); // 0x4d Call
	var_62_string = ""; var_63_int = 0; var_64_int = 0; var_65_int = 0; // 0x4f PushV
	var_62_string = "peanut"; // 0x50 MovS
	var_63_int = 1; // 0x51 MovI
	var_64_int = 50; // 0x52 MovI
	var_65_int = 2; // 0x53 MovI
	func_194(var_62_string, var_63_int, var_64_int, var_65_int); // 0x54 Call
	var_66_string = ""; var_67_int = 0; var_68_int = 0; var_69_int = 0; // 0x56 PushV
	var_66_string = "walnut"; // 0x57 MovS
	var_67_int = 1; // 0x58 MovI
	var_68_int = 50; // 0x59 MovI
	var_69_int = 2; // 0x5a MovI
	func_194(var_66_string, var_67_int, var_68_int, var_69_int); // 0x5b Call
	var_70_string = ""; var_71_int = 0; var_72_int = 0; var_73_int = 0; // 0x5d PushV
	var_70_string = "rusk"; // 0x5e MovS
	var_71_int = 1; // 0x5f MovI
	var_72_int = 10; // 0x60 MovI
	var_73_int = 2; // 0x61 MovI
	func_194(var_70_string, var_71_int, var_72_int, var_73_int); // 0x62 Call
	var_74_string = ""; var_75_int = 0; var_76_int = 0; // 0x64 PushV
	var_74_string = "dried_fish"; // 0x65 MovS
	var_75_int = 1; // 0x66 MovI
	var_76_int = 50; // 0x67 MovI
	func_183(var_74_string, var_75_int, var_76_int); // 0x68 Call
	var_77_string = ""; var_78_int = 0; var_79_int = 0; // 0x6a PushV
	var_77_string = "egg"; // 0x6b MovS
	var_78_int = 1; // 0x6c MovI
	var_79_int = 40; // 0x6d MovI
	func_183(var_77_string, var_78_int, var_79_int); // 0x6e Call
	var_80_string = ""; var_81_int = 0; var_82_int = 0; // 0x70 PushV
	var_80_string = "vegetables"; // 0x71 MovS
	var_81_int = 1; // 0x72 MovI
	var_82_int = 50; // 0x73 MovI
	func_183(var_80_string, var_81_int, var_82_int); // 0x74 Call
	var_83_string = ""; var_84_int = 0; var_85_int = 0; // 0x76 PushV
	var_83_string = "milk"; // 0x77 MovS
	var_84_int = 1; // 0x78 MovI
	var_85_int = 30; // 0x79 MovI
	func_183(var_83_string, var_84_int, var_85_int); // 0x7a Call
	var_86_string = ""; var_87_int = 0; var_88_int = 0; // 0x7c PushV
	var_86_string = "dried_meat"; // 0x7d MovS
	var_87_int = 1; // 0x7e MovI
	var_88_int = 50; // 0x7f MovI
	func_183(var_86_string, var_87_int, var_88_int); // 0x80 Call
	var_89_string = ""; var_90_int = 0; var_91_int = 0; // 0x82 PushV
	var_89_string = "smoked_meat"; // 0x83 MovS
	var_90_int = 1; // 0x84 MovI
	var_91_int = 50; // 0x85 MovI
	func_183(var_89_string, var_90_int, var_91_int); // 0x86 Call
	var_92_string = ""; var_93_int = 0; var_94_int = 0; // 0x88 PushV
	var_92_string = "fresh_fish"; // 0x89 MovS
	var_93_int = 1; // 0x8a MovI
	var_94_int = 50; // 0x8b MovI
	func_183(var_92_string, var_93_int, var_94_int); // 0x8c Call
	var_95_string = ""; var_96_int = 0; var_97_int = 0; // 0x8e PushV
	var_95_string = "fresh_meat"; // 0x8f MovS
	var_96_int = 1; // 0x90 MovI
	var_97_int = 50; // 0x91 MovI
	func_183(var_95_string, var_96_int, var_97_int); // 0x92 Call
	var_98_string = ""; var_99_int = 0; var_100_int = 0; // 0x94 PushV
	var_98_string = "bread"; // 0x95 MovS
	var_99_int = 1; // 0x96 MovI
	var_100_int = 10; // 0x97 MovI
	func_183(var_98_string, var_99_int, var_100_int); // 0x98 Call
}


func_194(var_18_string, var_19_int, var_20_int, var_21_int)
{
	var_22_int = 0; var_23_bool = 0; var_24_int = 0; var_25_bool = 0; // 0xc2 PushV
	var_26_bool = 0; var_27_int = 0; var_28_int = 0; // 0xc3 PushV
	var_27_int = var_19_int; // 0xc4 Mov
	var_28_int = var_20_int; // 0xc5 Mov
	func_209(var_26_bool, var_27_int, var_28_int); // 0xc6 Call
	if(var_26_bool == 0) goto Label_208; // 0xc8 JumpB
	irand(var_24_int, var_21_int); // 0xc9 Func
	var_29_int = 0; // 0xcb PushI
	var_30_int = 1; // 0xcc PushI
	var_31_int = var_21_int + var_30_int; // 0xcd Add
	AddItem(var_25_bool, var_18_string, var_29_int, var_31_int); // 0xce Func
	
Label_208:
	return 4; // 0xd0 Return
}


func_209(var_12_bool, var_13_int, var_14_int)
{
	var_15_int = 0; var_16_int = 0; // 0xd1 PushV
	irand(var_16_int, var_14_int); // 0xd2 Func
	var_12_bool = var_16_int < var_13_int; // 0xd4 LT2
	return 2; // 0xd5 Return
}


func_214(var_5_bool)
{
	var_6_int = 0; var_7_int = 0; // 0xd6 PushV
	var_8_string = "nouse_container"; // 0xd7 PushS
	GetVariable(var_8_string, var_7_int); // 0xd8 Func
	var_5_bool = !var_7_int; // 0xda Not2
	return 2; // 0xdb Return
}


func_183(var_7_string, var_8_int, var_9_int)
{
	var_10_bool = 0; var_11_bool = 0; // 0xb7 PushV
	var_12_bool = 0; var_13_int = 0; var_14_int = 0; // 0xb8 PushV
	var_13_int = var_8_int; // 0xb9 Mov
	var_14_int = var_9_int; // 0xba Mov
	func_209(var_12_bool, var_13_int, var_14_int); // 0xbb Call
	if(var_12_bool == 0) goto Label_193; // 0xbd JumpB
	var_17_int = 0; // 0xbe PushI
	AddItem(var_11_bool, var_7_string, var_17_int); // 0xbf Func
	
Label_193:
	return 2; // 0xc1 Return
}


func_159()
{
	
Label_159:
	Hold(); // 0x9f Func
	goto Label_159; // 0xa1 Jump
}


