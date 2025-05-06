task_0_event_9(var_0_int, var_1_int, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string, var_7_string)
{
	var_8_int = 0; var_9_int = 0; // 0xd PushV
	var_10_bool = var_4_bool == 0; // 0xe Not
	if(var_10_bool == 0) goto Label_32; // 0xf JumpB
	var_5_bool = 1; // 0x10 TMovB
	var_9_int = 0; // 0x11 MovI
	
Label_18:
	var_11_int = 4; // 0x12 PushI
	var_12_bool = var_9_int < var_11_int; // 0x13 LT
	if(var_12_bool == 0) goto Label_31; // 0x14 JumpB
	var_13_int = -5; // 0x15 PushI
	var_14_string = ""; var_15_int = 0; // 0x16 PushV
	var_15_int = var_9_int; // 0x17 Mov
	func_235(var_14_string, var_15_int); // 0x18 NEW_2
	SendMessage(var_13_int, var_14_string); // 0x1a Func
	var_26_int = 1; // 0x1c PushI
	var_9_int = var_9_int + var_26_int; // 0x1d Add2
	goto Label_18; // 0x1e Jump
	
Label_31:
	var_4_bool = 1; // 0x1f TMovB
	
Label_32:
	var_27_int = -9; // 0x20 PushI
	SendMessageToParent(var_27_int); // 0x21 Func
	return 2; // 0x23 Return
}


task_0_event_15(var_0_int, var_1_int, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string, var_7_string, var_8_int, var_9_int, var_10_float)
{
	SendToParent(); // 0x6d Func
	return 0; // 0x6f Return
}


task_0_event_0(var_0_int, var_1_int, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string, var_7_string)
{
	var_8_bool = var_2_object == 0; // 0x70 Not
	if(var_8_bool == 0) goto Label_115; // 0x71 JumpB
	return 0; // 0x72 Return
	
Label_115:
	var_9_int = 1; // 0x73 PushI
	var_10_int = 1; // 0x74 PushI
	Blit(var_7_string, var_9_int, var_10_int); // 0x75 Func
	var_11_int = 1; // 0x77 PushI
	var_12_bool = var_1_int > var_11_int; // 0x78 GT
	if(var_12_bool == 0) goto Label_127; // 0x79 JumpB
	var_13_string = "default"; // 0x7a PushS
	var_14_int = 2; // 0x7b PushI
	var_15_int = 35; // 0x7c PushI
	Print(var_13_string, var_14_int, var_15_int, var_0_int); // 0x7d Func
	
Label_127:
	return 0; // 0x7f Return
}


task_0_event_2(var_0_int, var_1_int, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string, var_7_string, var_8_int, var_9_int)
{
	var_10_object = var_2_object; // 0x81 PushT
	if(var_10_object == 0) goto Label_134; // 0x82 JumpB
	var_11_int = 0; // 0x83 PushI
	SendMessageToParent(var_11_int); // 0x84 Func
	
Label_134:
	return 0; // 0x86 Return
}


task_0_event_200(var_0_int, var_1_int, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string, var_7_string, var_8_int, var_9_string, var_10_object)
{
	var_11_int = 0; var_12_int = 0; // 0x87 PushV
	var_13_int = -7; // 0x88 PushI
	var_14_bool = var_8_int == var_13_int; // 0x89 Eq
	if(var_14_bool == 0) goto Label_145; // 0x8a JumpB
	var_15_bool = var_4_bool; // 0x8b PushT
	if(var_15_bool == 0) goto Label_144; // 0x8c JumpB
	func_36(); // 0x8e NEW_2
	
Label_144:
	return 2; // 0x90 Return
	
Label_145:
	var_30_int = -6; // 0x91 PushI
	var_31_bool = var_8_int == var_30_int; // 0x92 Eq
	if(var_31_bool == 0) goto Label_150; // 0x93 JumpB
	var_4_bool = 1; // 0x94 TMovB
	return 2; // 0x95 Return
	
Label_150:
	var_32_int = -1; // 0x96 PushI
	var_33_bool = var_8_int == var_32_int; // 0x97 Eq
	if(var_33_bool == 0) goto Label_162; // 0x98 JumpB
	var_34_bool = var_10_object != 0; // 0x99 NullNeq
	if(var_34_bool == 0) goto Label_161; // 0x9a JumpB
	var_35_int = 0; // 0x9b PushI
	get(var_8_int, var_35_int); // 0x9c ObjFunc
	var_36_int = 1; // 0x9e PushI
	get(var_7_string, var_36_int); // 0x9f ObjFunc
	
Label_161:
	return 2; // 0xa1 Return
	
Label_162:
	var_37_int = -2; // 0xa2 PushI
	var_38_bool = var_8_int == var_37_int; // 0xa3 Eq
	if(var_38_bool == 0) goto Label_172; // 0xa4 JumpB
	var_39_bool = var_4_bool; // 0xa5 PushT
	if(var_39_bool == 0) goto Label_171; // 0xa6 JumpB
	var_40_string = ""; // 0xa7 PushV
	var_40_string = var_6_string; // 0xa8 MovT
	func_54(var_12_int, var_40_string); // 0xa9 NEW_2
	
Label_171:
	return 2; // 0xab Return
	
Label_172:
	var_68_int = -3; // 0xac PushI
	var_69_bool = var_8_int == var_68_int; // 0xad Eq
	if(var_69_bool == 0) goto Label_182; // 0xae JumpB
	var_70_bool = var_4_bool; // 0xaf PushT
	if(var_70_bool == 0) goto Label_181; // 0xb0 JumpB
	var_71_string = ""; // 0xb1 PushV
	var_71_string = var_7_string; // 0xb2 MovT
	func_54(var_12_int, var_71_string); // 0xb3 NEW_2
	
Label_181:
	return 2; // 0xb5 Return
	
Label_182:
	var_72_int = -4; // 0xb6 PushI
	var_73_bool = var_8_int == var_72_int; // 0xb7 Eq
	if(var_73_bool == 0) goto Label_190; // 0xb8 JumpB
	var_4_bool = 1; // 0xb9 TMovB
	func_36(); // 0xbb NEW_2
	return 2; // 0xbd Return
	
Label_190:
	var_74_int = -5; // 0xbe PushI
	var_75_bool = var_8_int == var_74_int; // 0xbf Eq
	if(var_75_bool == 0) goto Label_199; // 0xc0 JumpB
	var_76_bool = var_5_bool; // 0xc1 PushT
	if(var_76_bool == 0) goto Label_197; // 0xc2 JumpB
	var_5_bool = 0; // 0xc3 TMovB
	goto Label_198; // 0xc4 Jump
	
Label_198:
	return 2; // 0xc6 Return
	
Label_197:
	var_4_bool = 0; // 0xc5 TMovB
	
Label_199:
	var_77_int = 65536; // 0xc7 PushI
	var_78_int = var_8_int & var_77_int; // 0xc8 And
	if(var_78_int == 0) goto Label_205; // 0xc9 JumpB
	var_79_int = 16383; // 0xca PushI
	var_0_int = var_8_int & var_79_int; // 0xcb And2
	return 2; // 0xcc Return
	
Label_205:
	var_80_int = 32768; // 0xcd PushI
	var_81_int = var_8_int & var_80_int; // 0xce And
	if(var_81_int == 0) goto Label_214; // 0xcf JumpB
	var_2_object = 0; // 0xd0 SetNullT
	var_82_int = -1; // 0xd1 PushI
	var_83_string = ""; // 0xd2 PushS
	SetTooltip(var_82_int, var_83_string); // 0xd3 Func
	goto Label_234; // 0xd5 Jump
	
Label_234:
	return 2; // 0xea Return
	
Label_214:
	var_2_object = var_10_object; // 0xd6 TMov
	var_84_object = var_2_object; // 0xd7 PushT
	if(var_84_object == 0) goto Label_230; // 0xd8 JumpB
	GetItemID(var_12_int); // 0xd9 TObjFunc
	GetInvItemSprite(var_10_object, var_12_int); // 0xdb Func
	LoadImage(var_10_object); // 0xdd Func
	GetInvItemMaxStackSize(var_12_int, var_12_int); // 0xdf Func
	var_85_int = 1; // 0xe1 PushI
	var_86_string = ""; // 0xe2 PushS
	SetTooltip(var_85_int, var_86_string, var_85_int); // 0xe3 Func
	goto Label_234; // 0xe5 Jump
	
Label_230:
	var_87_int = -1; // 0xe6 PushI
	var_88_string = ""; // 0xe7 PushS
	SetTooltip(var_87_int, var_88_string); // 0xe8 Func
}


main(var_0_int, var_1_int, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string, var_7_string)
{
	var_2_object = 0; // 0x0 SetNullT
	var_0_int = 1; // 0x1 TMovI
	var_4_bool = 0; // 0x2 TMovB
	var_5_bool = 0; // 0x3 TMovB
	var_8_string = "default"; // 0x4 PushS
	SetBackground(var_8_string); // 0x5 Func
	var_9_bool = 1; // 0x7 PushB
	SetOwnerDraw(var_9_bool); // 0x8 Func
	ProcessEvents(); // 0xa Func
	return 0; // 0xc Return
}


func_235(var_14_string, var_15_int)
{
	var_16_int = 1; // 0xec PushI
	var_17_int = var_15_int + var_16_int; // 0xed Add
	var_18_int = 10; // 0xee PushI
	var_19_bool = var_17_int < var_18_int; // 0xef LT
	if(var_19_bool == 0) goto Label_246; // 0xf0 JumpB
	var_20_string = "cslot0"; // 0xf1 PushS
	var_21_int = 1; // 0xf2 PushI
	var_22_int = var_15_int + var_21_int; // 0xf3 Add
	var_14_string = var_20_string + var_22_int; // 0xf4 Add2
	return 0; // 0xf5 Return
	
Label_246:
	var_23_string = "cslot"; // 0xf6 PushS
	var_24_int = 1; // 0xf7 PushI
	var_25_int = var_15_int + var_24_int; // 0xf8 Add
	var_14_string = var_23_string + var_25_int; // 0xf9 Add2
	return 0; // 0xfa Return
}


func_36()
{
	var_16_int = 0; var_17_int = 0; var_18_int = 0; var_19_int = 0; var_20_int = 0; var_21_int = 0; var_22_int = 0; var_23_int = 0; // 0x24 PushV
	var_20_int = 0; // 0x25 MovI
	var_21_int = 0; // 0x26 MovI
	var_22_int = 0; // 0x27 MovI
	var_23_int = 0; // 0x28 MovI
	ClientToScreen(var_20_int, var_21_int); // 0x29 Func
	GetWindowSize(var_22_int, var_23_int); // 0x2b Func
	var_24_int = 2; // 0x2d PushI
	var_25_float = var_22_int / var_24_int; // 0x2e Div
	var_26_int = var_20_int + var_25_float; // 0x2f Add
	var_27_int = 2; // 0x30 PushI
	var_28_float = var_23_int / var_27_int; // 0x31 Div
	var_29_int = var_21_int + var_28_float; // 0x32 Add
	SetMousePos(var_26_int, var_29_int); // 0x33 Func
	return 8; // 0x35 Return
}


func_54(var_4_bool, var_40_string)
{
	var_41_int = 0; var_42_int = 0; var_43_int = 0; var_44_int = 0; var_45_int = 0; var_46_int = 0; var_47_int = 0; var_48_int = 0; var_49_int = 0; var_50_int = 0; var_51_int = 0; var_52_int = 0; // 0x36 PushV
	var_53_string = ""; // 0x37 PushS
	var_54_bool = var_40_string != var_53_string; // 0x38 Neq
	if(var_54_bool == 0) goto Label_107; // 0x39 JumpB
	var_47_int = 0; // 0x3a MovI
	var_48_int = 0; // 0x3b MovI
	var_49_int = 0; // 0x3c MovI
	var_50_int = 0; // 0x3d MovI
	ClientToScreen(var_47_int, var_48_int); // 0x3e Func
	GetWindowSize(var_49_int, var_50_int); // 0x40 Func
	var_51_int = 0; // 0x42 MovI
	var_52_int = 0; // 0x43 MovI
	GetCursorPos(var_51_int, var_52_int); // 0x44 Func
	var_55_bool = 0; // 0x46 PushV
	var_55_bool = 0; // 0x47 MovB
	var_56_bool = 0; // 0x48 PushV
	var_56_bool = 0; // 0x49 MovB
	var_57_bool = 0; // 0x4a PushV
	var_57_bool = 0; // 0x4b MovB
	var_58_bool = var_51_int > var_47_int; // 0x4c GT
	if(var_58_bool == 0) goto Label_81; // 0x4d JumpB
	var_59_bool = var_52_int > var_48_int; // 0x4e GT
	if(var_59_bool == 0) goto Label_81; // 0x4f JumpB
	var_57_bool = 1; // 0x50 MovB
	
Label_81:
	if(var_57_bool == 0) goto Label_86; // 0x51 JumpB
	var_60_int = var_47_int + var_49_int; // 0x52 Add
	var_61_bool = var_51_int < var_60_int; // 0x53 LT
	if(var_61_bool == 0) goto Label_86; // 0x54 JumpB
	var_56_bool = 1; // 0x55 MovB
	
Label_86:
	if(var_56_bool == 0) goto Label_91; // 0x56 JumpB
	var_62_int = var_48_int + var_50_int; // 0x57 Add
	var_63_bool = var_52_int < var_62_int; // 0x58 LT
	if(var_63_bool == 0) goto Label_91; // 0x59 JumpB
	var_55_bool = 1; // 0x5a MovB
	
Label_91:
	if(var_55_bool == 0) goto Label_104; // 0x5b JumpB
	var_4_bool = 0; // 0x5c TMovB
	var_64_string = "$parent"; // 0x5d PushS
	var_65_bool = var_40_string == var_64_string; // 0x5e Eq
	if(var_65_bool == 0) goto Label_100; // 0x5f JumpB
	var_66_int = -4; // 0x60 PushI
	SendMessageToParent(var_66_int); // 0x61 Func
	goto Label_103; // 0x63 Jump
	
Label_103:
	goto Label_107; // 0x67 Jump
	
Label_107:
	return 12; // 0x6b Return
	
Label_100:
	var_67_int = -4; // 0x64 PushI
	SendMessage(var_67_int, var_40_string); // 0x65 Func
	
Label_104:
	func_36(); // 0x69 NEW_2
}


