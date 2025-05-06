task_0_event_7(var_0_string, var_1_string, var_2_string, var_3_int, var_4_bool, var_5_object)
{
	var_6_string = ""; var_7_string = ""; // 0x13 PushV
	var_8_int = 0; // 0x14 PushI
	var_9_bool = var_5_object == var_8_int; // 0x15 Eq
	if(var_9_bool == 0) goto Label_62; // 0x16 JumpB
	var_10_string = "Music time limit reached"; // 0x17 PushS
	Trace(var_10_string); // 0x18 Func
	var_11_string = ""; // 0x1a PushS
	var_12_bool = var_1_string != var_11_string; // 0x1b Neq
	if(var_12_bool == 0) goto Label_62; // 0x1c JumpB
	var_13_string = ""; // 0x1d PushV
	func_63(var_13_string); // 0x1e NEW_2
	var_7_string = var_13_string; // 0x1f Mov
	var_45_bool = var_0_string == var_7_string; // 0x21 Eq
	if(var_45_bool == 0) goto Label_42; // 0x22 JumpB
	var_46_bool = 0; var_47_string = ""; // 0x23 PushV
	var_47_string = var_7_string; // 0x24 Mov
	func_174(var_7_string, var_46_bool, var_47_string); // 0x25 NEW_2
	if(var_46_bool == 0) goto Label_41; // 0x27 JumpB
	return 2; // 0x28 Return
	
Label_41:
	goto Label_58; // 0x29 Jump
	
Label_58:
	var_55_bool = 0; var_56_bool = 0; // 0x3a PushV
	var_56_bool = 1; // 0x3b MovB
	func_116(var_7_string, var_55_bool, var_56_bool); // 0x3c NEW_2
	
Label_62:
	return 2; // 0x3e Return
	
Label_42:
	var_102_bool = 0; // 0x2a PushV
	var_102_bool = 0; // 0x2b MovB
	var_103_string = "horror"; // 0x2c PushS
	var_104_bool = var_0_string != var_103_string; // 0x2d Neq
	if(var_104_bool == 0) goto Label_51; // 0x2e JumpB
	var_105_string = "horror"; // 0x2f PushS
	var_106_bool = var_7_string != var_105_string; // 0x30 Neq
	if(var_106_bool == 0) goto Label_51; // 0x31 JumpB
	var_102_bool = 1; // 0x32 MovB
	
Label_51:
	if(var_102_bool == 0) goto Label_58; // 0x33 JumpB
	var_107_bool = 0; var_108_string = ""; // 0x34 PushV
	var_108_string = var_7_string; // 0x35 Mov
	func_174(var_7_string, var_107_bool, var_108_string); // 0x36 NEW_2
	if(var_107_bool == 0) goto Label_58; // 0x38 JumpB
	return 2; // 0x39 Return
}


task_0_event_12(var_0_string, var_1_string, var_2_string, var_3_string, var_4_bool, var_5_object)
{
	var_6_string = "attack"; // 0xc0 PushS
	var_7_bool = var_5_object == var_6_string; // 0xc1 Eq
	if(var_7_bool == 0) goto Label_212; // 0xc2 JumpB
	var_8_string = ""; // 0xc3 PushS
	var_9_bool = var_2_string != var_8_string; // 0xc4 Neq
	if(var_9_bool == 0) goto Label_211; // 0xc5 JumpB
	func_187(); // 0xc7 NEW_2
	var_11_string = ""; // 0xc9 PushV
	var_11_string = var_2_string; // 0xca MovT
	TaskCall(1); // 0xcb TaskCall
	func_234(var_13_object, var_11_string); // 0xcc NEW_2
	TaskReturn(); // 0xcd TaskReturn
	var_19_int = 0; // 0xcf PushI
	var_20_int = 15; // 0xd0 PushI
	SetTimer(var_19_int, var_20_int); // 0xd1 Func
	
Label_211:
	goto Label_221; // 0xd3 Jump
	
Label_221:
	return 0; // 0xdd Return
	
Label_212:
	func_187(); // 0xd5 NEW_2
	var_21_string = ""; // 0xd7 PushV
	var_21_string = var_5_object; // 0xd8 Mov
	TaskCall(2); // 0xd9 TaskCall
	func_306(var_21_string); // 0xda NEW_2
	TaskReturn(); // 0xdb TaskReturn
}


task_0_event_8(var_0_string, var_1_string, var_2_string, var_3_bool, var_4_object)
{
	var_5_bool = 0; var_6_string = ""; // 0xde PushV
	var_7_string = ""; // 0xdf PushV
	func_63(var_7_string); // 0xe0 NEW_2
	var_6_string = var_7_string; // 0xe1 Mov
	func_174(var_4_object, var_5_bool, var_6_string); // 0xe3 NEW_2
	var_46_bool = var_5_bool == 0; // 0xe5 Not
	if(var_46_bool == 0) goto Label_233; // 0xe6 JumpB
	StopMusic1(); // 0xe7 Func
	
Label_233:
	return 0; // 0xe9 Return
}


task_1_event_12(var_0_string, var_1_string, var_2_string, var_3_bool, var_4_object, var_5_string)
{
	var_6_string = "attack"; // 0x101 PushS
	var_7_bool = var_5_string == var_6_string; // 0x102 Eq
	if(var_7_bool == 0) goto Label_266; // 0x103 JumpB
	var_8_int = 1; // 0x104 PushI
	var_9_int = 10; // 0x105 PushI
	SetTimer(var_8_int, var_9_int); // 0x106 Func
	var_0_string = 0; // 0x108 TMovB
	goto Label_278; // 0x109 Jump
	
Label_278:
	return 0; // 0x116 Return
	
Label_266:
	var_10_string = ""; // 0x10a PushS
	var_11_bool = var_5_string != var_10_string; // 0x10b Neq
	if(var_11_bool == 0) goto Label_278; // 0x10c JumpB
	func_291(var_5_string); // 0x10e NEW_2
	var_13_string = ""; // 0x110 PushV
	var_13_string = var_5_string; // 0x111 Mov
	TaskCall(2); // 0x112 TaskCall
	func_306(var_13_string); // 0x113 NEW_2
	TaskReturn(); // 0x114 TaskReturn
}


task_1_event_7(var_0_string, var_1_string, var_2_string, var_3_bool, var_4_object, var_5_int)
{
	var_6_int = 1; // 0x118 PushI
	var_7_bool = var_5_int == var_6_int; // 0x119 Eq
	if(var_7_bool == 0) goto Label_290; // 0x11a JumpB
	var_8_int = 2; // 0x11b PushI
	FadeMusic1(var_8_int); // 0x11c Func
	var_9_int = 1; // 0x11e PushI
	KillTimer(var_9_int); // 0x11f Func
	var_0_string = 1; // 0x121 TMovB
	
Label_290:
	return 0; // 0x122 Return
}


task_1_event_8(var_0_string, var_1_string, var_2_string, var_3_bool, var_4_object)
{
	var_5_object = Obj(); var_6_object = Obj(); // 0x128 PushV
	GetActiveScene(var_6_object); // 0x129 Func
	var_7_bool = var_1_string != var_6_object; // 0x12b Neq
	if(var_7_bool == 0) goto Label_304; // 0x12c JumpB
	var_0_string = 1; // 0x12d TMovB
	StopMusic1(); // 0x12e Func
	
Label_304:
	return 2; // 0x130 Return
}


task_2_event_12(var_0_string, var_1_string, var_2_string, var_3_bool, var_4_object, var_5_string)
{
	var_6_string = ""; // 0x139 PushS
	var_7_bool = var_5_string == var_6_string; // 0x13a Eq
	if(var_7_bool == 0) goto Label_319; // 0x13b JumpB
	var_8_int = 1; // 0x13c PushI
	FadeMusic1(var_8_int); // 0x13d Func
	
Label_319:
	return 0; // 0x13f Return
}


main(var_0_string, var_1_string, var_2_string, var_3_bool, var_4_object)
{
	sync(); // 0x0 Func
	var_5_int = 0; // 0x2 PushI
	var_6_int = 15; // 0x3 PushI
	SetTimer(var_5_int, var_6_int); // 0x4 Func
	
Label_6:
	var_7_bool = 0; var_8_bool = 0; // 0x6 PushV
	var_8_bool = 0; // 0x7 MovB
	func_116(var_4_object, var_7_bool, var_8_bool); // 0x8 NEW_2
	if(var_7_bool == 0) goto Label_14; // 0xa JumpB
	WaitForMusicEnd1(); // 0xb Func
	goto Label_17; // 0xd Jump
	
Label_17:
	goto Label_6; // 0x11 Jump
	
Label_14:
	var_85_int = 1; // 0xe PushI
	Sleep(var_85_int); // 0xf Func
}


func_320(var_27_string, var_28_int)
{
	var_30_string = "Region"; // 0x141 PushS
	var_31_int = var_30_string + var_28_int; // 0x142 Add
	var_32_string = "State"; // 0x143 PushS
	var_27_string = var_31_int + var_32_string; // 0x144 Add2
	return 0; // 0x145 Return
}


func_291(var_0_string)
{
	var_0_string = 1; // 0x123 TMovB
	var_12_int = 1; // 0x124 PushI
	KillTimer(var_12_int); // 0x125 Func
	return 0; // 0x127 Return
}


func_326(var_59_string, var_60_string)
{
	var_61_int = 0; var_62_bool = 0; var_63_int = 0; var_64_string = ""; var_65_int = 0; var_66_bool = 0; var_67_int = 0; var_68_string = ""; // 0x146 PushV
	var_65_int = 0; // 0x147 MovI
	
Label_328:
	var_69_string = "agressive"; // 0x148 PushS
	var_70_int = 1; // 0x149 PushI
	var_71_int = var_65_int + var_70_int; // 0x14a Add
	var_72_int = var_69_string + var_71_int; // 0x14b Add
	HasMusicValue(var_66_bool, var_60_string, var_72_int); // 0x14c Func
	var_73_bool = var_66_bool == 0; // 0x14e Not
	if(var_73_bool == 0) goto Label_337; // 0x14f JumpB
	goto Label_340; // 0x150 Jump
	
Label_340:
	var_74_int = var_65_int; // 0x154 Push
	if(var_74_int == 0) goto Label_352; // 0x155 JumpB
	irand(var_67_int, var_65_int); // 0x156 Func
	var_75_string = "agressive"; // 0x158 PushS
	var_76_int = 1; // 0x159 PushI
	var_77_int = var_67_int + var_76_int; // 0x15a Add
	var_78_int = var_75_string + var_77_int; // 0x15b Add
	GetMusicValue(var_68_string, var_60_string, var_78_int); // 0x15c Func
	var_59_string = var_68_string; // 0x15e Mov
	return 8; // 0x15f Return
	
Label_352:
	var_59_string = ""; // 0x160 MovS
	return 8; // 0x161 Return
	
Label_337:
	var_79_int = 1; // 0x151 PushI
	var_65_int = var_65_int + var_79_int; // 0x152 Add2
	goto Label_328; // 0x153 Jump
}


func_234(var_0_string, var_11_string)
{
	var_14_int = 1; // 0xeb PushI
	var_15_int = 10; // 0xec PushI
	SetTimer(var_14_int, var_15_int); // 0xed Func
	var_0_string = 0; // 0xef TMovB
	GetActiveScene(var_11_string); // 0xf0 Func
	var_16_bool = 1; // 0xf2 PushB
	SwitchMusic1(var_11_string, var_16_bool); // 0xf3 Func
	WaitForMusicEnd1(); // 0xf5 Func
	
Label_247:
	var_17_bool = var_0_string == 0; // 0xf7 Not
	if(var_17_bool == 0) goto Label_255; // 0xf8 JumpB
	var_18_bool = 1; // 0xf9 PushB
	PlayMusic1(var_11_string, var_18_bool); // 0xfa Func
	WaitForMusicEnd1(); // 0xfc Func
	goto Label_247; // 0xfe Jump
	
Label_255:
	return 0; // 0xff Return
}


func_174(var_1_string, var_5_bool, var_6_string)
{
	var_39_bool = 0; var_40_string = ""; var_41_bool = 0; var_42_string = ""; // 0xae PushV
	var_43_string = "music"; // 0xaf PushS
	HasMusicValue(var_41_bool, var_6_string, var_43_string); // 0xb0 Func
	var_44_bool = var_41_bool; // 0xb2 Push
	if(var_44_bool == 0) goto Label_185; // 0xb3 JumpB
	var_45_string = "music"; // 0xb4 PushS
	GetMusicValue(var_42_string, var_6_string, var_45_string); // 0xb5 Func
	var_5_bool = var_1_string == var_42_string; // 0xb7 Eq2
	return 4; // 0xb8 Return
	
Label_185:
	var_5_bool = 0; // 0xb9 MovB
	return 4; // 0xba Return
}


func_145(var_1_string, var_2_string, var_48_string, var_49_string, var_50_bool)
{
	var_1_string = var_49_string; // 0x92 TMov
	var_51_string = ""; // 0x93 PushS
	var_52_bool = var_49_string != var_51_string; // 0x94 Neq
	if(var_52_bool == 0) goto Label_164; // 0x95 JumpB
	var_53_string = "Playing: '"; // 0x96 PushS
	var_54_int = var_53_string + var_49_string; // 0x97 Add
	var_55_string = "' from category: "; // 0x98 PushS
	var_56_int = var_54_int + var_55_string; // 0x99 Add
	var_57_int = var_56_int + var_48_string; // 0x9a Add
	Trace(var_57_int); // 0x9b Func
	var_58_bool = var_50_bool; // 0x9d Push
	if(var_58_bool == 0) goto Label_162; // 0x9e JumpB
	SwitchMusic1(var_49_string); // 0x9f Func
	goto Label_164; // 0xa1 Jump
	
Label_164:
	var_59_string = ""; var_60_string = ""; // 0xa4 PushV
	var_60_string = var_48_string; // 0xa5 Mov
	func_326(var_59_string, var_60_string); // 0xa6 NEW_2
	var_2_string = var_59_string; // 0xa7 TMov
	var_80_string = "Chosen agressive: "; // 0xa9 PushS
	var_81_int = var_80_string + var_2_string; // 0xaa Add
	Trace(var_81_int); // 0xab Func
	return 0; // 0xad Return
	
Label_162:
	PlayMusic1(var_49_string); // 0xa2 Func
}


func_306(var_13_string)
{
	PlayMusic1(var_13_string); // 0x133 Func
	WaitForMusicEnd1(); // 0x135 Func
	return 0; // 0x137 Return
}


func_116(var_0_string, var_7_bool, var_8_bool)
{
	var_9_bool = 0; var_10_string = ""; var_11_bool = 0; var_12_string = ""; // 0x74 PushV
	var_13_string = ""; // 0x75 PushV
	func_63(var_13_string); // 0x76 NEW_2
	var_0_string = var_13_string; // 0x77 TMov
	var_45_string = "music"; // 0x79 PushS
	HasMusicValue(var_11_bool, var_0_string, var_45_string); // 0x7a Func
	var_46_bool = var_11_bool; // 0x7c Push
	if(var_46_bool == 0) goto Label_137; // 0x7d JumpB
	var_47_string = "music"; // 0x7e PushS
	GetMusicValue(var_12_string, var_0_string, var_47_string); // 0x7f Func
	var_48_string = ""; var_49_string = ""; var_50_bool = 0; // 0x81 PushV
	var_48_string = var_0_string; // 0x82 MovT
	var_49_string = var_12_string; // 0x83 Mov
	var_50_bool = var_8_bool; // 0x84 Mov
	func_145(var_11_bool, var_12_string, var_48_string, var_49_string, var_50_bool); // 0x85 NEW_2
	var_7_bool = 1; // 0x87 MovB
	return 4; // 0x88 Return
	
Label_137:
	var_82_string = ""; var_83_string = ""; var_84_bool = 0; // 0x89 PushV
	var_82_string = var_0_string; // 0x8a MovT
	var_83_string = ""; // 0x8b MovS
	var_84_bool = var_8_bool; // 0x8c Mov
	func_145(var_11_bool, var_12_string, var_82_string, var_83_string, var_84_bool); // 0x8d NEW_2
	var_7_bool = 0; // 0x8f MovB
	return 4; // 0x90 Return
}


func_187()
{
	var_10_int = 0; // 0xbb PushI
	KillTimer(var_10_int); // 0xbc Func
	return 0; // 0xbe Return
}


func_63(var_13_string)
{
	var_14_bool = 0; var_15_string = ""; var_16_int = 0; var_17_int = 0; var_18_float = 0; var_19_bool = 0; var_20_string = ""; var_21_int = 0; var_22_int = 0; var_23_float = 0; // 0x3f PushV
	var_24_string = "id"; // 0x40 PushS
	HasMusicAttribute(var_19_bool, var_24_string); // 0x41 Func
	var_25_bool = var_19_bool; // 0x43 Push
	if(var_25_bool == 0) goto Label_114; // 0x44 JumpB
	var_26_string = "id"; // 0x45 PushS
	GetMusicAttribute(var_20_string, var_26_string); // 0x46 Func
	_strtoi(var_21_int, var_20_string); // 0x48 Func
	var_27_string = ""; var_28_int = 0; // 0x4a PushV
	var_29_int = 1; // 0x4b PushI
	var_28_int = var_21_int - var_29_int; // 0x4c Sub2
	func_320(var_27_string, var_28_int); // 0x4d NEW_2
	GetVariable(var_27_string, var_22_int); // 0x4f Func
	var_33_int = 3; // 0x51 PushI
	var_22_int = var_22_int & var_33_int; // 0x52 And2
	var_34_bool = 0; // 0x53 PushV
	var_34_bool = 1; // 0x54 MovB
	var_35_int = 1; // 0x55 PushI
	var_36_bool = var_22_int == var_35_int; // 0x56 Eq
	if(var_36_bool == 0) goto Label_92; // 0x57 JumpB
	var_37_int = 2; // 0x58 PushI
	var_38_bool = var_22_int == var_37_int; // 0x59 Eq
	if(var_38_bool == 0) goto Label_92; // 0x5a JumpB
	var_34_bool = 0; // 0x5b MovB
	
Label_92:
	if(var_34_bool == 0) goto Label_96; // 0x5c JumpB
	var_13_string = "horror"; // 0x5d MovS
	return 10; // 0x5e Return
	
Label_96:
	GetGameTime(var_23_float); // 0x60 Func
	var_39_int = 24; // 0x62 PushI
	var_23_float = var_23_float % var_39_int; // 0x63 Mod2
	var_40_bool = 0; // 0x64 PushV
	var_40_bool = 0; // 0x65 MovB
	var_41_int = 9; // 0x66 PushI
	var_42_bool = var_23_float >= var_41_int; // 0x67 GE
	if(var_42_bool == 0) goto Label_109; // 0x68 JumpB
	var_43_int = 19; // 0x69 PushI
	var_44_bool = var_23_float <= var_43_int; // 0x6a LE
	if(var_44_bool == 0) goto Label_109; // 0x6b JumpB
	var_40_bool = 1; // 0x6c MovB
	
Label_109:
	if(var_40_bool == 0) goto Label_112; // 0x6d JumpB
	var_13_string = "day"; // 0x6e MovS
	goto Label_113; // 0x6f Jump
	
Label_113:
	return 10; // 0x71 Return
	
Label_112:
	var_13_string = "night"; // 0x70 MovS
	
Label_114:
	var_13_string = "general"; // 0x72 MovS
	return 10; // 0x73 Return
}


