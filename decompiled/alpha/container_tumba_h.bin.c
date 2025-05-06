task_0_event_0(var_0_object)
{
	var_1_bool = 0; var_2_bool = 0; var_3_bool = 0; var_4_bool = 0; // 0x9e PushV
	var_5_bool = 0; // 0x9f PushV
	func_209(var_5_bool); // 0xa0 Call
	var_9_bool = var_5_bool == 0; // 0xa2 Not
	if(var_9_bool == 0) goto Label_165; // 0xa3 JumpB
	return 4; // 0xa4 Return
	
Label_165:
	IsOnGround(var_3_bool); // 0xa5 ObjFunc
	var_10_bool = var_3_bool; // 0xa7 Push
	if(var_10_bool == 0) goto Label_177; // 0xa8 JumpB
	EventDisable(0); // 0xa9 EventDisable
	IsOverrideActive(var_4_bool); // 0xaa Func
	var_11_bool = var_4_bool == 0; // 0xac Not
	if(var_11_bool == 0) goto Label_176; // 0xad JumpB
	Barter(var_0_object); // 0xae Func
	
Label_176:
	EventEnable(0); // 0xb0 EventEnable
	
Label_177:
	return 4; // 0xb1 Return
}


main()
{
	var_0_int = 0; var_1_int = 0; // 0x0 PushV
	var_2_bool = 1; // 0x1 PushB
	SetVisibility(var_2_bool); // 0x2 Func
	var_3_string = ""; var_4_int = 0; var_5_int = 0; var_6_int = 0; // 0x4 PushV
	var_3_string = "revolver_ammo"; // 0x5 MovS
	var_4_int = 1; // 0x6 MovI
	var_5_int = 15; // 0x7 MovI
	var_6_int = 2; // 0x8 MovI
	func_189(var_3_string, var_4_int, var_5_int, var_6_int); // 0x9 Call
	var_19_string = ""; var_20_int = 0; var_21_int = 0; var_22_int = 0; // 0xb PushV
	var_19_string = "rifle_ammo"; // 0xc MovS
	var_20_int = 1; // 0xd MovI
	var_21_int = 20; // 0xe MovI
	var_22_int = 2; // 0xf MovI
	func_189(var_19_string, var_20_int, var_21_int, var_22_int); // 0x10 Call
	var_23_string = ""; var_24_int = 0; var_25_int = 0; var_26_int = 0; // 0x12 PushV
	var_23_string = "alpha_pills"; // 0x13 MovS
	var_24_int = 1; // 0x14 MovI
	var_25_int = 3; // 0x15 MovI
	var_26_int = 4; // 0x16 MovI
	func_189(var_23_string, var_24_int, var_25_int, var_26_int); // 0x17 Call
	var_27_string = ""; var_28_int = 0; var_29_int = 0; var_30_int = 0; // 0x19 PushV
	var_27_string = "beta_pills"; // 0x1a MovS
	var_28_int = 1; // 0x1b MovI
	var_29_int = 6; // 0x1c MovI
	var_30_int = 3; // 0x1d MovI
	func_189(var_27_string, var_28_int, var_29_int, var_30_int); // 0x1e Call
	var_31_string = ""; var_32_int = 0; var_33_int = 0; var_34_int = 0; // 0x20 PushV
	var_31_string = "gamma_pills"; // 0x21 MovS
	var_32_int = 1; // 0x22 MovI
	var_33_int = 8; // 0x23 MovI
	var_34_int = 2; // 0x24 MovI
	func_189(var_31_string, var_32_int, var_33_int, var_34_int); // 0x25 Call
	var_35_string = ""; var_36_int = 0; var_37_int = 0; // 0x27 PushV
	var_35_string = "delta_pills"; // 0x28 MovS
	var_36_int = 1; // 0x29 MovI
	var_37_int = 12; // 0x2a MovI
	func_178(var_35_string, var_36_int, var_37_int); // 0x2b Call
	var_44_string = ""; var_45_int = 0; var_46_int = 0; // 0x2d PushV
	var_44_string = "tvirin"; // 0x2e MovS
	var_45_int = 1; // 0x2f MovI
	var_46_int = 12; // 0x30 MovI
	func_178(var_44_string, var_45_int, var_46_int); // 0x31 Call
	var_47_string = ""; var_48_int = 0; var_49_int = 0; var_50_int = 0; // 0x33 PushV
	var_47_string = "lemon"; // 0x34 MovS
	var_48_int = 1; // 0x35 MovI
	var_49_int = 10; // 0x36 MovI
	var_50_int = 2; // 0x37 MovI
	func_189(var_47_string, var_48_int, var_49_int, var_50_int); // 0x38 Call
	var_51_string = ""; var_52_int = 0; var_53_int = 0; // 0x3a PushV
	var_51_string = "powder"; // 0x3b MovS
	var_52_int = 1; // 0x3c MovI
	var_53_int = 500; // 0x3d MovI
	func_178(var_51_string, var_52_int, var_53_int); // 0x3e Call
	var_54_string = ""; var_55_int = 0; var_56_int = 0; // 0x40 PushV
	var_54_string = "neomicin"; // 0x41 MovS
	var_55_int = 1; // 0x42 MovI
	var_56_int = 10; // 0x43 MovI
	func_178(var_54_string, var_55_int, var_56_int); // 0x44 Call
	var_57_string = ""; var_58_int = 0; var_59_int = 0; // 0x46 PushV
	var_57_string = "monomicin"; // 0x47 MovS
	var_58_int = 1; // 0x48 MovI
	var_59_int = 20; // 0x49 MovI
	func_178(var_57_string, var_58_int, var_59_int); // 0x4a Call
	var_60_string = ""; var_61_int = 0; var_62_int = 0; // 0x4c PushV
	var_60_string = "feromicin"; // 0x4d MovS
	var_61_int = 1; // 0x4e MovI
	var_62_int = 30; // 0x4f MovI
	func_178(var_60_string, var_61_int, var_62_int); // 0x50 Call
	var_63_string = ""; var_64_int = 0; var_65_int = 0; // 0x52 PushV
	var_63_string = "meradorm"; // 0x53 MovS
	var_64_int = 1; // 0x54 MovI
	var_65_int = 20; // 0x55 MovI
	func_178(var_63_string, var_64_int, var_65_int); // 0x56 Call
	var_66_string = ""; var_67_int = 0; var_68_int = 0; // 0x58 PushV
	var_66_string = "novocaine"; // 0x59 MovS
	var_67_int = 1; // 0x5a MovI
	var_68_int = 10; // 0x5b MovI
	func_178(var_66_string, var_67_int, var_68_int); // 0x5c Call
	var_69_string = ""; var_70_int = 0; var_71_int = 0; // 0x5e PushV
	var_69_string = "morfin"; // 0x5f MovS
	var_70_int = 1; // 0x60 MovI
	var_71_int = 20; // 0x61 MovI
	func_178(var_69_string, var_70_int, var_71_int); // 0x62 Call
	var_72_string = ""; var_73_int = 0; var_74_int = 0; // 0x64 PushV
	var_72_string = "etorfin"; // 0x65 MovS
	var_73_int = 1; // 0x66 MovI
	var_74_int = 30; // 0x67 MovI
	func_178(var_72_string, var_73_int, var_74_int); // 0x68 Call
	var_75_string = ""; var_76_int = 0; var_77_int = 0; // 0x6a PushV
	var_75_string = "syringe"; // 0x6b MovS
	var_76_int = 1; // 0x6c MovI
	var_77_int = 20; // 0x6d MovI
	func_178(var_75_string, var_76_int, var_77_int); // 0x6e Call
	var_78_string = ""; var_79_int = 0; var_80_int = 0; var_81_int = 0; // 0x70 PushV
	var_78_string = "kerosene"; // 0x71 MovS
	var_79_int = 2; // 0x72 MovI
	var_80_int = 5; // 0x73 MovI
	var_81_int = 10; // 0x74 MovI
	func_189(var_78_string, var_79_int, var_80_int, var_81_int); // 0x75 Call
	var_82_string = ""; var_83_int = 0; var_84_int = 0; // 0x77 PushV
	var_82_string = "lockpick"; // 0x78 MovS
	var_83_int = 1; // 0x79 MovI
	var_84_int = 20; // 0x7a MovI
	func_178(var_82_string, var_83_int, var_84_int); // 0x7b Call
	var_85_int = 0; // 0x7d PushV
	func_215(var_85_int); // 0x7e Call
	var_1_int = var_85_int; // 0x7f Mov
	var_91_int = 3; // 0x81 PushI
	var_92_bool = var_1_int >= var_91_int; // 0x82 GE
	if(var_92_bool == 0) goto Label_150; // 0x83 JumpB
	var_93_string = ""; var_94_int = 0; var_95_int = 0; // 0x84 PushV
	var_93_string = "glove_disp"; // 0x85 MovS
	var_94_int = 1; // 0x86 MovI
	var_95_int = 20; // 0x87 MovI
	func_178(var_93_string, var_94_int, var_95_int); // 0x88 Call
	var_96_string = ""; var_97_int = 0; var_98_int = 0; // 0x8a PushV
	var_96_string = "glove"; // 0x8b MovS
	var_97_int = 1; // 0x8c MovI
	var_98_int = 20; // 0x8d MovI
	func_178(var_96_string, var_97_int, var_98_int); // 0x8e Call
	var_99_string = ""; var_100_int = 0; var_101_int = 0; // 0x90 PushV
	var_99_string = "mask"; // 0x91 MovS
	var_100_int = 1; // 0x92 MovI
	var_101_int = 40; // 0x93 MovI
	func_178(var_99_string, var_100_int, var_101_int); // 0x94 Call
	
Label_150:
	func_154(); // 0x97 Call
	return 2; // 0x99 Return
}


func_204(var_11_bool, var_12_int, var_13_int)
{
	var_14_int = 0; var_15_int = 0; // 0xcc PushV
	irand(var_15_int, var_13_int); // 0xcd Func
	var_11_bool = var_15_int < var_12_int; // 0xcf LT2
	return 2; // 0xd0 Return
}


func_209(var_5_bool)
{
	var_6_int = 0; var_7_int = 0; // 0xd1 PushV
	var_8_string = "nouse_container"; // 0xd2 PushS
	GetVariable(var_8_string, var_7_int); // 0xd3 Func
	var_5_bool = !var_7_int; // 0xd5 Not2
	return 2; // 0xd6 Return
}


func_178(var_35_string, var_36_int, var_37_int)
{
	var_38_bool = 0; var_39_bool = 0; // 0xb2 PushV
	var_40_bool = 0; var_41_int = 0; var_42_int = 0; // 0xb3 PushV
	var_41_int = var_36_int; // 0xb4 Mov
	var_42_int = var_37_int; // 0xb5 Mov
	func_204(var_40_bool, var_41_int, var_42_int); // 0xb6 Call
	if(var_40_bool == 0) goto Label_188; // 0xb8 JumpB
	var_43_int = 0; // 0xb9 PushI
	AddItem(var_39_bool, var_35_string, var_43_int); // 0xba Func
	
Label_188:
	return 2; // 0xbc Return
}


func_215(var_85_int)
{
	var_86_float = 0; var_87_float = 0; // 0xd7 PushV
	GetGameTime(var_87_float); // 0xd8 Func
	var_88_int = 1; // 0xda PushI
	var_89_int = 0; // 0xdb PushV
	var_90_int = 24; // 0xdc PushI
	var_89_int = var_87_float / var_87_float; // 0xdd Div2
	var_85_int = var_88_int + var_89_int; // 0xde Add2
	return 2; // 0xdf Return
}


func_154()
{
	
Label_154:
	Hold(); // 0x9a Func
	goto Label_154; // 0x9c Jump
}


func_189(var_3_string, var_4_int, var_5_int, var_6_int)
{
	var_7_int = 0; var_8_bool = 0; var_9_int = 0; var_10_bool = 0; // 0xbd PushV
	var_11_bool = 0; var_12_int = 0; var_13_int = 0; // 0xbe PushV
	var_12_int = var_4_int; // 0xbf Mov
	var_13_int = var_5_int; // 0xc0 Mov
	func_204(var_11_bool, var_12_int, var_13_int); // 0xc1 Call
	if(var_11_bool == 0) goto Label_203; // 0xc3 JumpB
	irand(var_9_int, var_6_int); // 0xc4 Func
	var_16_int = 0; // 0xc6 PushI
	var_17_int = 1; // 0xc7 PushI
	var_18_int = var_6_int + var_17_int; // 0xc8 Add
	AddItem(var_10_bool, var_3_string, var_16_int, var_18_int); // 0xc9 Func
	
Label_203:
	return 4; // 0xcb Return
}


