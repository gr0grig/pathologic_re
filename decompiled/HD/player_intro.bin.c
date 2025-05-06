task_0_event_7(var_0_int)
{
	var_1_bool = 0; var_2_int = 0; // 0x15 PushV
	var_2_int = var_0_int; // 0x16 Mov
	func_58(var_1_bool, var_2_int); // 0x17 NEW_2
	return 0; // 0x19 Return
}


event_44()
{
	func_198(); // 0xe1 NEW_2
	func_146(); // 0xe4 NEW_2
	return 0; // 0xe6 Return
}


event_20()
{
	func_187(); // 0xe8 NEW_2
	func_146(); // 0xeb NEW_2
	return 0; // 0xed Return
}


event_21()
{
	func_167(); // 0xef NEW_2
	func_156(); // 0xf2 NEW_2
	return 0; // 0xf4 Return
}


event_45()
{
	func_177(); // 0xf6 NEW_2
	return 0; // 0xf8 Return
}


main()
{
	var_0_bool = 0; var_1_bool = 0; // 0x0 PushV
	var_2_string = "effects"; // 0x1 PushS
	HasProperty(var_2_string, var_1_bool); // 0x2 Func
	var_3_bool = var_1_bool == 0; // 0x4 Not
	if(var_3_bool == 0) goto Label_16; // 0x5 JumpB
	var_4_string = "effects"; // 0x6 PushS
	var_5_bool = 1; // 0x7 PushB
	SetProperty(var_4_string, var_5_bool); // 0x8 Func
	var_6_string = "player_head.bin"; // 0xa PushS
	ApplyEffect(var_6_string); // 0xb Func
	var_7_string = "player_eyes_height.bin"; // 0xd PushS
	ApplyEffect(var_7_string); // 0xe Func
	
Label_16:
	Hold(); // 0x10 Func
	goto Label_16; // 0x12 Jump
}


func_26(var_22_string, var_23_int)
{
	var_24_int = 1; // 0x1b PushI
	var_25_bool = var_23_int == var_24_int; // 0x1c Eq
	if(var_25_bool == 0) goto Label_33; // 0x1d JumpB
	var_22_string = "wood"; // 0x1e MovS
	return 0; // 0x1f Return
	
Label_33:
	var_26_int = 2; // 0x21 PushI
	var_27_bool = var_23_int == var_26_int; // 0x22 Eq
	if(var_27_bool == 0) goto Label_39; // 0x23 JumpB
	var_22_string = "metal"; // 0x24 MovS
	return 0; // 0x25 Return
	
Label_39:
	var_28_int = 3; // 0x27 PushI
	var_29_bool = var_23_int == var_28_int; // 0x28 Eq
	if(var_29_bool == 0) goto Label_45; // 0x29 JumpB
	var_22_string = "ground"; // 0x2a MovS
	return 0; // 0x2b Return
	
Label_45:
	var_30_int = 4; // 0x2d PushI
	var_31_bool = var_23_int == var_30_int; // 0x2e Eq
	if(var_31_bool == 0) goto Label_51; // 0x2f JumpB
	var_22_string = "water"; // 0x30 MovS
	return 0; // 0x31 Return
	
Label_51:
	var_32_int = 5; // 0x33 PushI
	var_33_bool = var_23_int == var_32_int; // 0x34 Eq
	if(var_33_bool == 0) goto Label_56; // 0x35 JumpB
	var_22_string = "carpet"; // 0x36 MovS
	return 0; // 0x37 Return
	
Label_56:
	var_22_string = "stone"; // 0x38 MovS
	return 0; // 0x39 Return
}


func_198()
{
	func_177(); // 0xc7 NEW_2
	var_5_int = 12; // 0xc9 PushI
	var_6_float = 0.6; // 0xca PushF
	SetTimer(var_5_int, var_6_float); // 0xcb Func
	var_7_int = 1; // 0xcd PushI
	ModNoise(var_7_int); // 0xce Func
	return 0; // 0xd0 Return
}


func_167()
{
	var_0_bool = 0; var_1_bool = 0; // 0xa7 PushV
	var_2_int = 10; // 0xa8 PushI
	KillTimer(var_2_int, var_1_bool); // 0xa9 Func
	var_3_bool = var_1_bool; // 0xab Push
	if(var_3_bool == 0) goto Label_176; // 0xac JumpB
	var_4_int = -2; // 0xad PushI
	ModNoise(var_4_int); // 0xae Func
	
Label_176:
	return 2; // 0xb0 Return
}


func_209()
{
	func_87(); // 0xd2 NEW_2
	return 0; // 0xd4 Return
}


func_146()
{
	var_5_bool = 0; var_6_bool = 0; // 0x92 PushV
	var_7_int = 11; // 0x93 PushI
	KillTimer(var_7_int, var_6_bool); // 0x94 Func
	var_8_bool = var_6_bool; // 0x96 Push
	if(var_8_bool == 0) goto Label_155; // 0x97 JumpB
	var_9_int = -3; // 0x98 PushI
	ModNoise(var_9_int); // 0x99 Func
	
Label_155:
	return 2; // 0x9b Return
}


func_177()
{
	var_0_bool = 0; var_1_bool = 0; // 0xb1 PushV
	var_2_int = 12; // 0xb2 PushI
	KillTimer(var_2_int, var_1_bool); // 0xb3 Func
	var_3_bool = var_1_bool; // 0xb5 Push
	if(var_3_bool == 0) goto Label_186; // 0xb6 JumpB
	var_4_int = -1; // 0xb7 PushI
	ModNoise(var_4_int); // 0xb8 Func
	
Label_186:
	return 2; // 0xba Return
}


func_213()
{
	func_87(); // 0xd6 NEW_2
	return 0; // 0xd8 Return
}


func_87()
{
	var_5_bool = 0; var_6_int = 0; var_7_string = ""; var_8_int = 0; var_9_bool = 0; var_10_int = 0; var_11_string = ""; var_12_string = ""; var_13_bool = 0; var_14_int = 0; var_15_string = ""; var_16_int = 0; var_17_bool = 0; var_18_int = 0; var_19_string = ""; var_20_string = ""; // 0x57 PushV
	GetGroundMaterial(var_13_bool, var_14_int); // 0x58 Func
	var_21_bool = var_13_bool == 0; // 0x5a Not
	if(var_21_bool == 0) goto Label_93; // 0x5b JumpB
	var_14_int = -1; // 0x5c MovI
	
Label_93:
	var_22_string = ""; var_23_int = 0; // 0x5d PushV
	var_23_int = var_14_int; // 0x5e Mov
	func_26(var_22_string, var_23_int); // 0x5f NEW_2
	var_15_string = var_22_string; // 0x60 Mov
	var_16_int = 0; // 0x62 MovI
	
Label_99:
	var_34_string = "step_"; // 0x63 PushS
	var_35_int = var_34_string + var_15_string; // 0x64 Add
	var_36_int = 1; // 0x65 PushI
	var_37_int = var_16_int + var_36_int; // 0x66 Add
	var_38_int = var_35_int + var_37_int; // 0x67 Add
	IsExistingSound(var_17_bool, var_38_int); // 0x68 Func
	var_39_bool = var_17_bool == 0; // 0x6a Not
	if(var_39_bool == 0) goto Label_109; // 0x6b JumpB
	goto Label_112; // 0x6c Jump
	
Label_112:
	var_40_bool = var_16_int == 0; // 0x70 Not
	if(var_40_bool == 0) goto Label_118; // 0x71 JumpB
	var_41_string = GlobalVars[0]; // 0x72 PushGE
	var_41_string = ""; // 0x73 MovS
	GlobalVars[0] = var_41_string; // 0x74 PopGE
	return 16; // 0x75 Return
	
Label_118:
	var_42_int = 1; // 0x76 PushI
	var_43_bool = var_16_int == var_42_int; // 0x77 Eq
	if(var_43_bool == 0) goto Label_123; // 0x78 JumpB
	var_18_int = 0; // 0x79 MovI
	goto Label_135; // 0x7a Jump
	
Label_135:
	var_44_string = "step_"; // 0x87 PushS
	var_45_int = var_44_string + var_15_string; // 0x88 Add
	var_46_int = 1; // 0x89 PushI
	var_47_int = var_18_int + var_46_int; // 0x8a Add
	var_20_string = var_45_int + var_47_int; // 0x8b Add2
	PlaySound(var_20_string); // 0x8c Func
	var_48_string = GlobalVars[0]; // 0x8e PushGE
	var_48_string = var_20_string; // 0x8f Mov
	GlobalVars[0] = var_48_string; // 0x90 PopGE
	return 16; // 0x91 Return
	
Label_123:
	irand(var_18_int, var_16_int); // 0x7b Func
	var_49_string = "step_"; // 0x7d PushS
	var_50_int = var_49_string + var_15_string; // 0x7e Add
	var_51_int = 1; // 0x7f PushI
	var_52_int = var_18_int + var_51_int; // 0x80 Add
	var_19_string = var_50_int + var_52_int; // 0x81 Add2
	var_53_string = GlobalVars[0]; // 0x82 PushGE
	var_54_bool = var_19_string != var_53_string; // 0x83 Neq
	if(var_54_bool == 0) goto Label_134; // 0x84 JumpB
	goto Label_135; // 0x85 Jump
	
Label_134:
	goto Label_123; // 0x86 Jump
	
Label_109:
	var_55_int = 1; // 0x6d PushI
	var_16_int = var_16_int + var_55_int; // 0x6e Add2
	goto Label_99; // 0x6f Jump
}


func_217()
{
	func_87(); // 0xda NEW_2
	func_146(); // 0xdd NEW_2
	return 0; // 0xdf Return
}


func_58(var_1_bool, var_2_int)
{
	var_3_int = 10; // 0x3b PushI
	var_4_bool = var_2_int == var_3_int; // 0x3c Eq
	if(var_4_bool == 0) goto Label_68; // 0x3d JumpB
	func_209(); // 0x3f NEW_2
	var_1_bool = 1; // 0x41 MovB
	return 0; // 0x42 Return
	
Label_68:
	var_56_int = 11; // 0x44 PushI
	var_57_bool = var_2_int == var_56_int; // 0x45 Eq
	if(var_57_bool == 0) goto Label_77; // 0x46 JumpB
	func_217(); // 0x48 NEW_2
	var_1_bool = 1; // 0x4a MovB
	return 0; // 0x4b Return
	
Label_77:
	var_63_int = 12; // 0x4d PushI
	var_64_bool = var_2_int == var_63_int; // 0x4e Eq
	if(var_64_bool == 0) goto Label_85; // 0x4f JumpB
	func_213(); // 0x51 NEW_2
	var_1_bool = 1; // 0x53 MovB
	return 0; // 0x54 Return
	
Label_85:
	var_1_bool = 0; // 0x55 MovB
	return 0; // 0x56 Return
}


func_187()
{
	func_167(); // 0xbc NEW_2
	var_5_int = 10; // 0xbe PushI
	var_6_float = 0.35; // 0xbf PushF
	SetTimer(var_5_int, var_6_float); // 0xc0 Func
	var_7_int = 2; // 0xc2 PushI
	ModNoise(var_7_int); // 0xc3 Func
	return 0; // 0xc5 Return
}


func_156()
{
	func_146(); // 0x9d NEW_2
	var_10_int = 11; // 0x9f PushI
	var_11_float = 0.15; // 0xa0 PushF
	SetTimer(var_10_int, var_11_float); // 0xa1 Func
	var_12_int = 3; // 0xa3 PushI
	ModNoise(var_12_int); // 0xa4 Func
	return 0; // 0xa6 Return
}


