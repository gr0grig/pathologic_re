task_0_event_0(var_0_object)
{
	var_1_bool = 0; var_2_bool = 0; var_3_int = 0; var_4_object = Obj(); var_5_bool = 0; var_6_bool = 0; var_7_int = 0; var_8_object = Obj(); // 0xaf PushV
	var_9_bool = 0; // 0xb0 PushV
	var_9_bool = 1; // 0xb1 MovB
	var_10_bool = var_0_object == 0; // 0xb2 Not
	if(var_10_bool == 0) goto Label_186; // 0xb3 JumpB
	var_11_bool = 0; // 0xb4 PushV
	func_241(var_11_bool); // 0xb5 NEW_2
	var_15_bool = var_11_bool == 0; // 0xb7 Not
	if(var_15_bool == 0) goto Label_186; // 0xb8 JumpB
	var_9_bool = 0; // 0xb9 MovB
	
Label_186:
	if(var_9_bool == 0) goto Label_188; // 0xba JumpB
	return 8; // 0xbb Return
	
Label_188:
	IsOnGround(var_5_bool); // 0xbc ObjFunc
	var_16_bool = var_5_bool; // 0xbe Push
	if(var_16_bool == 0) goto Label_209; // 0xbf JumpB
	EventDisable(0); // 0xc0 EventDisable
	IsOverrideActive(var_6_bool); // 0xc1 Func
	var_17_bool = var_6_bool == 0; // 0xc3 Not
	if(var_17_bool == 0) goto Label_208; // 0xc4 JumpB
	GetItemCount(var_7_int); // 0xc5 Func
	var_18_int = var_7_int; // 0xc7 Push
	if(var_18_int == 0) goto Label_206; // 0xc8 JumpB
	GetScene(var_8_object); // 0xc9 Func
	BroadcastSteal(var_0_object, var_8_object); // 0xcb Func
	var_8_object = 0; // 0xcd SetNull
	
Label_206:
	Barter(var_0_object); // 0xce Func
	
Label_208:
	EventEnable(0); // 0xd0 EventEnable
	
Label_209:
	return 8; // 0xd1 Return
}


main()
{
	var_0_object = Obj(); var_1_bool = 0; var_2_object = Obj(); var_3_bool = 0; // 0x0 PushV
	var_4_bool = 1; // 0x1 PushB
	SetVisibility(var_4_bool); // 0x2 Func
	DisableUpdate(); // 0x4 Func
	GetScene(var_2_object); // 0x6 Func
	var_5_string = "nailed"; // 0x8 PushS
	GetProperty(var_5_string, var_3_bool); // 0x9 ObjFunc
	var_6_bool = var_3_bool; // 0xb Push
	if(var_6_bool == 0) goto Label_58; // 0xc JumpB
	var_7_string = ""; var_8_int = 0; var_9_int = 0; // 0xd PushV
	var_7_string = "Knife"; // 0xe MovS
	var_8_int = 1; // 0xf MovI
	var_9_int = 30; // 0x10 MovI
	func_210(var_7_string, var_8_int, var_9_int); // 0x11 NEW_2
	var_18_string = ""; var_19_int = 0; var_20_int = 0; // 0x13 PushV
	var_18_string = "tvirin"; // 0x14 MovS
	var_19_int = 1; // 0x15 MovI
	var_20_int = 10; // 0x16 MovI
	func_210(var_18_string, var_19_int, var_20_int); // 0x17 NEW_2
	var_21_string = ""; var_22_int = 0; var_23_int = 0; var_24_int = 0; // 0x19 PushV
	var_21_string = "lemon"; // 0x1a MovS
	var_22_int = 1; // 0x1b MovI
	var_23_int = 20; // 0x1c MovI
	var_24_int = 2; // 0x1d MovI
	func_221(var_21_string, var_22_int, var_23_int, var_24_int); // 0x1e NEW_2
	var_35_string = ""; var_36_int = 0; var_37_int = 0; // 0x20 PushV
	var_35_string = "funduk"; // 0x21 MovS
	var_36_int = 1; // 0x22 MovI
	var_37_int = 40; // 0x23 MovI
	func_210(var_35_string, var_36_int, var_37_int); // 0x24 NEW_2
	var_38_string = ""; var_39_int = 0; var_40_int = 0; // 0x26 PushV
	var_38_string = "peanut"; // 0x27 MovS
	var_39_int = 1; // 0x28 MovI
	var_40_int = 40; // 0x29 MovI
	func_210(var_38_string, var_39_int, var_40_int); // 0x2a NEW_2
	var_41_string = ""; var_42_int = 0; var_43_int = 0; // 0x2c PushV
	var_41_string = "walnut"; // 0x2d MovS
	var_42_int = 1; // 0x2e MovI
	var_43_int = 40; // 0x2f MovI
	func_210(var_41_string, var_42_int, var_43_int); // 0x30 NEW_2
	var_44_string = ""; var_45_int = 0; var_46_int = 0; var_47_int = 0; // 0x32 PushV
	var_44_string = "Money"; // 0x33 MovS
	var_45_int = 1; // 0x34 MovI
	var_46_int = 2; // 0x35 MovI
	var_47_int = 5; // 0x36 MovI
	func_221(var_44_string, var_45_int, var_46_int, var_47_int); // 0x37 NEW_2
	goto Label_166; // 0x39 Jump
	
Label_166:
	func_171(); // 0xa7 NEW_2
	return 4; // 0xa9 Return
	
Label_58:
	var_48_string = ""; var_49_int = 0; var_50_int = 0; // 0x3a PushV
	var_48_string = "Knife"; // 0x3b MovS
	var_49_int = 1; // 0x3c MovI
	var_50_int = 30; // 0x3d MovI
	func_210(var_48_string, var_49_int, var_50_int); // 0x3e NEW_2
	var_51_string = ""; var_52_int = 0; var_53_int = 0; // 0x40 PushV
	var_51_string = "tvirin"; // 0x41 MovS
	var_52_int = 1; // 0x42 MovI
	var_53_int = 20; // 0x43 MovI
	func_210(var_51_string, var_52_int, var_53_int); // 0x44 NEW_2
	var_54_string = ""; var_55_int = 0; var_56_int = 0; var_57_int = 0; // 0x46 PushV
	var_54_string = "lemon"; // 0x47 MovS
	var_55_int = 1; // 0x48 MovI
	var_56_int = 10; // 0x49 MovI
	var_57_int = 2; // 0x4a MovI
	func_221(var_54_string, var_55_int, var_56_int, var_57_int); // 0x4b NEW_2
	var_58_string = ""; var_59_int = 0; var_60_int = 0; var_61_int = 0; // 0x4d PushV
	var_58_string = "funduk"; // 0x4e MovS
	var_59_int = 1; // 0x4f MovI
	var_60_int = 50; // 0x50 MovI
	var_61_int = 2; // 0x51 MovI
	func_221(var_58_string, var_59_int, var_60_int, var_61_int); // 0x52 NEW_2
	var_62_string = ""; var_63_int = 0; var_64_int = 0; var_65_int = 0; // 0x54 PushV
	var_62_string = "peanut"; // 0x55 MovS
	var_63_int = 1; // 0x56 MovI
	var_64_int = 50; // 0x57 MovI
	var_65_int = 2; // 0x58 MovI
	func_221(var_62_string, var_63_int, var_64_int, var_65_int); // 0x59 NEW_2
	var_66_string = ""; var_67_int = 0; var_68_int = 0; var_69_int = 0; // 0x5b PushV
	var_66_string = "walnut"; // 0x5c MovS
	var_67_int = 1; // 0x5d MovI
	var_68_int = 50; // 0x5e MovI
	var_69_int = 2; // 0x5f MovI
	func_221(var_66_string, var_67_int, var_68_int, var_69_int); // 0x60 NEW_2
	var_70_string = ""; var_71_int = 0; var_72_int = 0; var_73_int = 0; // 0x62 PushV
	var_70_string = "rusk"; // 0x63 MovS
	var_71_int = 1; // 0x64 MovI
	var_72_int = 10; // 0x65 MovI
	var_73_int = 2; // 0x66 MovI
	func_221(var_70_string, var_71_int, var_72_int, var_73_int); // 0x67 NEW_2
	var_74_string = ""; var_75_int = 0; var_76_int = 0; // 0x69 PushV
	var_74_string = "dried_fish"; // 0x6a MovS
	var_75_int = 1; // 0x6b MovI
	var_76_int = 50; // 0x6c MovI
	func_210(var_74_string, var_75_int, var_76_int); // 0x6d NEW_2
	var_77_string = ""; var_78_int = 0; var_79_int = 0; // 0x6f PushV
	var_77_string = "egg"; // 0x70 MovS
	var_78_int = 1; // 0x71 MovI
	var_79_int = 40; // 0x72 MovI
	func_210(var_77_string, var_78_int, var_79_int); // 0x73 NEW_2
	var_80_string = ""; var_81_int = 0; var_82_int = 0; // 0x75 PushV
	var_80_string = "vegetables"; // 0x76 MovS
	var_81_int = 1; // 0x77 MovI
	var_82_int = 50; // 0x78 MovI
	func_210(var_80_string, var_81_int, var_82_int); // 0x79 NEW_2
	var_83_string = ""; var_84_int = 0; var_85_int = 0; // 0x7b PushV
	var_83_string = "milk"; // 0x7c MovS
	var_84_int = 1; // 0x7d MovI
	var_85_int = 30; // 0x7e MovI
	func_210(var_83_string, var_84_int, var_85_int); // 0x7f NEW_2
	var_86_string = ""; var_87_int = 0; var_88_int = 0; // 0x81 PushV
	var_86_string = "dried_meat"; // 0x82 MovS
	var_87_int = 1; // 0x83 MovI
	var_88_int = 50; // 0x84 MovI
	func_210(var_86_string, var_87_int, var_88_int); // 0x85 NEW_2
	var_89_string = ""; var_90_int = 0; var_91_int = 0; // 0x87 PushV
	var_89_string = "smoked_meat"; // 0x88 MovS
	var_90_int = 1; // 0x89 MovI
	var_91_int = 50; // 0x8a MovI
	func_210(var_89_string, var_90_int, var_91_int); // 0x8b NEW_2
	var_92_string = ""; var_93_int = 0; var_94_int = 0; // 0x8d PushV
	var_92_string = "fresh_fish"; // 0x8e MovS
	var_93_int = 1; // 0x8f MovI
	var_94_int = 50; // 0x90 MovI
	func_210(var_92_string, var_93_int, var_94_int); // 0x91 NEW_2
	var_95_string = ""; var_96_int = 0; var_97_int = 0; // 0x93 PushV
	var_95_string = "fresh_meat"; // 0x94 MovS
	var_96_int = 1; // 0x95 MovI
	var_97_int = 50; // 0x96 MovI
	func_210(var_95_string, var_96_int, var_97_int); // 0x97 NEW_2
	var_98_string = ""; var_99_int = 0; var_100_int = 0; // 0x99 PushV
	var_98_string = "bread"; // 0x9a MovS
	var_99_int = 1; // 0x9b MovI
	var_100_int = 10; // 0x9c MovI
	func_210(var_98_string, var_99_int, var_100_int); // 0x9d NEW_2
	var_101_string = ""; var_102_int = 0; var_103_int = 0; var_104_int = 0; // 0x9f PushV
	var_101_string = "Money"; // 0xa0 MovS
	var_102_int = 1; // 0xa1 MovI
	var_103_int = 2; // 0xa2 MovI
	var_104_int = 3; // 0xa3 MovI
	func_221(var_101_string, var_102_int, var_103_int, var_104_int); // 0xa4 NEW_2
}


func_171()
{
	
Label_171:
	Hold(); // 0xab Func
	goto Label_171; // 0xad Jump
}


func_236(var_12_bool, var_13_int, var_14_int)
{
	var_15_int = 0; var_16_int = 0; // 0xec PushV
	irand(var_16_int, var_14_int); // 0xed Func
	var_12_bool = var_16_int < var_13_int; // 0xef LT2
	return 2; // 0xf0 Return
}


func_241(var_11_bool)
{
	var_12_int = 0; var_13_int = 0; // 0xf1 PushV
	var_14_string = "nouse_container"; // 0xf2 PushS
	GetVariable(var_14_string, var_13_int); // 0xf3 Func
	var_11_bool = !var_13_int; // 0xf5 Not2
	return 2; // 0xf6 Return
}


func_210(var_7_string, var_8_int, var_9_int)
{
	var_10_bool = 0; var_11_bool = 0; // 0xd2 PushV
	var_12_bool = 0; var_13_int = 0; var_14_int = 0; // 0xd3 PushV
	var_13_int = var_8_int; // 0xd4 Mov
	var_14_int = var_9_int; // 0xd5 Mov
	func_236(var_12_bool, var_13_int, var_14_int); // 0xd6 NEW_2
	if(var_12_bool == 0) goto Label_220; // 0xd8 JumpB
	var_17_int = 0; // 0xd9 PushI
	AddItem(var_11_bool, var_7_string, var_17_int); // 0xda Func
	
Label_220:
	return 2; // 0xdc Return
}


func_221(var_21_string, var_22_int, var_23_int, var_24_int)
{
	var_25_int = 0; var_26_bool = 0; var_27_int = 0; var_28_bool = 0; // 0xdd PushV
	var_29_bool = 0; var_30_int = 0; var_31_int = 0; // 0xde PushV
	var_30_int = var_22_int; // 0xdf Mov
	var_31_int = var_23_int; // 0xe0 Mov
	func_236(var_29_bool, var_30_int, var_31_int); // 0xe1 NEW_2
	if(var_29_bool == 0) goto Label_235; // 0xe3 JumpB
	irand(var_27_int, var_24_int); // 0xe4 Func
	var_32_int = 0; // 0xe6 PushI
	var_33_int = 1; // 0xe7 PushI
	var_34_int = var_27_int + var_33_int; // 0xe8 Add
	AddItem(var_28_bool, var_21_string, var_32_int, var_34_int); // 0xe9 Func
	
Label_235:
	return 4; // 0xeb Return
}


