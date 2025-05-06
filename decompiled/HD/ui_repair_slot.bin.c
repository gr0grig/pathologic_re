task_0_event_0(var_0_int, var_1_int, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string, var_7_string)
{
	var_8_bool = var_2_object == 0; // 0xd Not
	if(var_8_bool == 0) goto Label_16; // 0xe JumpB
	return 0; // 0xf Return
	
Label_16:
	var_9_int = 1; // 0x10 PushI
	var_10_int = 1; // 0x11 PushI
	Blit(var_7_string, var_9_int, var_10_int); // 0x12 Func
	var_11_int = 1; // 0x14 PushI
	var_12_bool = var_0_int > var_11_int; // 0x15 GT
	if(var_12_bool == 0) goto Label_28; // 0x16 JumpB
	var_13_string = "default"; // 0x17 PushS
	var_14_int = 2; // 0x18 PushI
	var_15_int = 35; // 0x19 PushI
	Print(var_13_string, var_14_int, var_15_int, var_0_int); // 0x1a Func
	
Label_28:
	return 0; // 0x1c Return
}


task_0_event_9(var_0_int, var_1_int, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string, var_7_string)
{
	var_8_int = 0; var_9_int = 0; // 0x1d PushV
	var_10_bool = var_4_bool == 0; // 0x1e Not
	if(var_10_bool == 0) goto Label_48; // 0x1f JumpB
	var_5_bool = 1; // 0x20 TMovB
	var_9_int = 0; // 0x21 MovI
	
Label_34:
	var_11_int = 4; // 0x22 PushI
	var_12_bool = var_9_int < var_11_int; // 0x23 LT
	if(var_12_bool == 0) goto Label_47; // 0x24 JumpB
	var_13_int = -5; // 0x25 PushI
	var_14_string = ""; var_15_int = 0; // 0x26 PushV
	var_15_int = var_9_int; // 0x27 Mov
	func_260(var_14_string, var_15_int); // 0x28 NEW_2
	SendMessage(var_13_int, var_14_string); // 0x2a Func
	var_26_int = 1; // 0x2c PushI
	var_9_int = var_9_int + var_26_int; // 0x2d Add2
	goto Label_34; // 0x2e Jump
	
Label_47:
	var_4_bool = 1; // 0x2f TMovB
	
Label_48:
	var_27_int = -9; // 0x30 PushI
	SendMessageToParent(var_27_int); // 0x31 Func
	return 2; // 0x33 Return
}


task_0_event_2(var_0_int, var_1_int, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string, var_7_string, var_8_int, var_9_int)
{
	var_10_bool = var_2_object == 0; // 0x7d Not
	if(var_10_bool == 0) goto Label_128; // 0x7e JumpB
	return 0; // 0x7f Return
	
Label_128:
	var_11_string = "selected"; // 0x80 PushS
	SetBackground(var_11_string); // 0x81 Func
	var_12_int = 0; // 0x83 PushI
	SendMessageToParent(var_12_int); // 0x84 Func
	return 0; // 0x86 Return
}


task_0_event_6(var_0_int, var_1_int, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string, var_7_string, var_8_int, var_9_int)
{
	var_10_bool = var_2_object == 0; // 0x88 Not
	if(var_10_bool == 0) goto Label_139; // 0x89 JumpB
	return 0; // 0x8a Return
	
Label_139:
	var_11_int = 1; // 0x8b PushI
	SendMessageToParent(var_11_int); // 0x8c Func
	return 0; // 0x8e Return
}


task_0_event_3(var_0_int, var_1_int, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string, var_7_string, var_8_int, var_9_int)
{
	return 0; // 0x90 Return
}


task_0_event_200(var_0_int, var_1_int, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string, var_7_string, var_8_int, var_9_string, var_10_object)
{
	var_11_int = 0; var_12_string = ""; var_13_int = 0; var_14_int = 0; var_15_string = ""; var_16_int = 0; // 0x91 PushV
	var_17_int = -7; // 0x92 PushI
	var_18_bool = var_8_int == var_17_int; // 0x93 Eq
	if(var_18_bool == 0) goto Label_155; // 0x94 JumpB
	var_19_bool = var_4_bool; // 0x95 PushT
	if(var_19_bool == 0) goto Label_154; // 0x96 JumpB
	func_52(); // 0x98 NEW_2
	
Label_154:
	return 6; // 0x9a Return
	
Label_155:
	var_34_int = -6; // 0x9b PushI
	var_35_bool = var_8_int == var_34_int; // 0x9c Eq
	if(var_35_bool == 0) goto Label_160; // 0x9d JumpB
	var_4_bool = 1; // 0x9e TMovB
	return 6; // 0x9f Return
	
Label_160:
	var_36_int = -1; // 0xa0 PushI
	var_37_bool = var_8_int == var_36_int; // 0xa1 Eq
	if(var_37_bool == 0) goto Label_172; // 0xa2 JumpB
	var_38_bool = var_10_object != 0; // 0xa3 NullNeq
	if(var_38_bool == 0) goto Label_171; // 0xa4 JumpB
	var_39_int = 0; // 0xa5 PushI
	get(var_12_string, var_39_int); // 0xa6 ObjFunc
	var_40_int = 1; // 0xa8 PushI
	get(var_11_int, var_40_int); // 0xa9 ObjFunc
	
Label_171:
	return 6; // 0xab Return
	
Label_172:
	var_41_int = -2; // 0xac PushI
	var_42_bool = var_8_int == var_41_int; // 0xad Eq
	if(var_42_bool == 0) goto Label_182; // 0xae JumpB
	var_43_bool = var_4_bool; // 0xaf PushT
	if(var_43_bool == 0) goto Label_181; // 0xb0 JumpB
	var_44_string = ""; // 0xb1 PushV
	var_44_string = var_6_string; // 0xb2 MovT
	func_70(var_16_int, var_44_string); // 0xb3 NEW_2
	
Label_181:
	return 6; // 0xb5 Return
	
Label_182:
	var_72_int = -3; // 0xb6 PushI
	var_73_bool = var_8_int == var_72_int; // 0xb7 Eq
	if(var_73_bool == 0) goto Label_192; // 0xb8 JumpB
	var_74_bool = var_4_bool; // 0xb9 PushT
	if(var_74_bool == 0) goto Label_191; // 0xba JumpB
	var_75_string = ""; // 0xbb PushV
	var_75_string = var_7_string; // 0xbc MovT
	func_70(var_16_int, var_75_string); // 0xbd NEW_2
	
Label_191:
	return 6; // 0xbf Return
	
Label_192:
	var_76_int = -4; // 0xc0 PushI
	var_77_bool = var_8_int == var_76_int; // 0xc1 Eq
	if(var_77_bool == 0) goto Label_200; // 0xc2 JumpB
	var_4_bool = 1; // 0xc3 TMovB
	func_52(); // 0xc5 NEW_2
	return 6; // 0xc7 Return
	
Label_200:
	var_78_int = -5; // 0xc8 PushI
	var_79_bool = var_8_int == var_78_int; // 0xc9 Eq
	if(var_79_bool == 0) goto Label_209; // 0xca JumpB
	var_80_bool = var_5_bool; // 0xcb PushT
	if(var_80_bool == 0) goto Label_207; // 0xcc JumpB
	var_5_bool = 0; // 0xcd TMovB
	goto Label_208; // 0xce Jump
	
Label_208:
	return 6; // 0xd0 Return
	
Label_207:
	var_4_bool = 0; // 0xcf TMovB
	
Label_209:
	var_81_int = 65536; // 0xd1 PushI
	var_82_int = var_8_int & var_81_int; // 0xd2 And
	if(var_82_int == 0) goto Label_215; // 0xd3 JumpB
	var_83_int = 16383; // 0xd4 PushI
	var_0_int = var_8_int & var_83_int; // 0xd5 And2
	return 6; // 0xd6 Return
	
Label_215:
	var_84_int = 16384; // 0xd7 PushI
	var_85_int = var_8_int & var_84_int; // 0xd8 And
	if(var_85_int == 0) goto Label_222; // 0xd9 JumpB
	var_86_string = "selected"; // 0xda PushS
	SetBackground(var_86_string); // 0xdb Func
	goto Label_225; // 0xdd Jump
	
Label_225:
	var_87_int = 32768; // 0xe1 PushI
	var_88_int = var_8_int & var_87_int; // 0xe2 And
	if(var_88_int == 0) goto Label_234; // 0xe3 JumpB
	var_2_object = 0; // 0xe4 SetNullT
	var_89_int = -1; // 0xe5 PushI
	var_90_string = ""; // 0xe6 PushS
	SetTooltip(var_89_int, var_90_string); // 0xe7 Func
	goto Label_259; // 0xe9 Jump
	
Label_259:
	return 6; // 0x103 Return
	
Label_234:
	var_91_int = 16383; // 0xea PushI
	var_14_int = var_8_int & var_91_int; // 0xeb And2
	var_92_int = 1007; // 0xec PushI
	GetStringByID(var_15_string, var_92_int); // 0xed Func
	var_15_string = var_15_string + var_14_int; // 0xef Add2
	var_2_object = var_10_object; // 0xf0 TMov
	var_93_object = var_2_object; // 0xf1 PushT
	if(var_93_object == 0) goto Label_255; // 0xf2 JumpB
	GetItemID(var_16_int); // 0xf3 TObjFunc
	GetInvItemSprite(var_14_int, var_16_int); // 0xf5 Func
	LoadImage(var_14_int); // 0xf7 Func
	GetInvItemMaxStackSize(var_16_int, var_16_int); // 0xf9 Func
	var_94_int = 1; // 0xfb PushI
	SetTooltip(var_94_int, var_15_string, var_16_int); // 0xfc Func
	goto Label_259; // 0xfe Jump
	
Label_255:
	var_95_int = -1; // 0xff PushI
	var_96_string = ""; // 0x100 PushS
	SetTooltip(var_95_int, var_96_string); // 0x101 Func
	
Label_222:
	var_97_string = "default"; // 0xde PushS
	SetBackground(var_97_string); // 0xdf Func
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


func_260(var_14_string, var_15_int)
{
	var_16_int = 1; // 0x105 PushI
	var_17_int = var_15_int + var_16_int; // 0x106 Add
	var_18_int = 10; // 0x107 PushI
	var_19_bool = var_17_int < var_18_int; // 0x108 LT
	if(var_19_bool == 0) goto Label_271; // 0x109 JumpB
	var_20_string = "slot0"; // 0x10a PushS
	var_21_int = 1; // 0x10b PushI
	var_22_int = var_15_int + var_21_int; // 0x10c Add
	var_14_string = var_20_string + var_22_int; // 0x10d Add2
	return 0; // 0x10e Return
	
Label_271:
	var_23_string = "slot"; // 0x10f PushS
	var_24_int = 1; // 0x110 PushI
	var_25_int = var_15_int + var_24_int; // 0x111 Add
	var_14_string = var_23_string + var_25_int; // 0x112 Add2
	return 0; // 0x113 Return
}


func_70(var_4_bool, var_44_string)
{
	var_45_int = 0; var_46_int = 0; var_47_int = 0; var_48_int = 0; var_49_int = 0; var_50_int = 0; var_51_int = 0; var_52_int = 0; var_53_int = 0; var_54_int = 0; var_55_int = 0; var_56_int = 0; // 0x46 PushV
	var_57_string = ""; // 0x47 PushS
	var_58_bool = var_44_string != var_57_string; // 0x48 Neq
	if(var_58_bool == 0) goto Label_123; // 0x49 JumpB
	var_51_int = 0; // 0x4a MovI
	var_52_int = 0; // 0x4b MovI
	var_53_int = 0; // 0x4c MovI
	var_54_int = 0; // 0x4d MovI
	ClientToScreen(var_51_int, var_52_int); // 0x4e Func
	GetWindowSize(var_53_int, var_54_int); // 0x50 Func
	var_55_int = 0; // 0x52 MovI
	var_56_int = 0; // 0x53 MovI
	GetCursorPos(var_55_int, var_56_int); // 0x54 Func
	var_59_bool = 0; // 0x56 PushV
	var_59_bool = 0; // 0x57 MovB
	var_60_bool = 0; // 0x58 PushV
	var_60_bool = 0; // 0x59 MovB
	var_61_bool = 0; // 0x5a PushV
	var_61_bool = 0; // 0x5b MovB
	var_62_bool = var_55_int > var_51_int; // 0x5c GT
	if(var_62_bool == 0) goto Label_97; // 0x5d JumpB
	var_63_bool = var_56_int > var_52_int; // 0x5e GT
	if(var_63_bool == 0) goto Label_97; // 0x5f JumpB
	var_61_bool = 1; // 0x60 MovB
	
Label_97:
	if(var_61_bool == 0) goto Label_102; // 0x61 JumpB
	var_64_int = var_51_int + var_53_int; // 0x62 Add
	var_65_bool = var_55_int < var_64_int; // 0x63 LT
	if(var_65_bool == 0) goto Label_102; // 0x64 JumpB
	var_60_bool = 1; // 0x65 MovB
	
Label_102:
	if(var_60_bool == 0) goto Label_107; // 0x66 JumpB
	var_66_int = var_52_int + var_54_int; // 0x67 Add
	var_67_bool = var_56_int < var_66_int; // 0x68 LT
	if(var_67_bool == 0) goto Label_107; // 0x69 JumpB
	var_59_bool = 1; // 0x6a MovB
	
Label_107:
	if(var_59_bool == 0) goto Label_120; // 0x6b JumpB
	var_4_bool = 0; // 0x6c TMovB
	var_68_string = "$parent"; // 0x6d PushS
	var_69_bool = var_44_string == var_68_string; // 0x6e Eq
	if(var_69_bool == 0) goto Label_116; // 0x6f JumpB
	var_70_int = -4; // 0x70 PushI
	SendMessageToParent(var_70_int); // 0x71 Func
	goto Label_119; // 0x73 Jump
	
Label_119:
	goto Label_123; // 0x77 Jump
	
Label_123:
	return 12; // 0x7b Return
	
Label_116:
	var_71_int = -4; // 0x74 PushI
	SendMessage(var_71_int, var_44_string); // 0x75 Func
	
Label_120:
	func_52(); // 0x79 NEW_2
}


func_52()
{
	var_20_int = 0; var_21_int = 0; var_22_int = 0; var_23_int = 0; var_24_int = 0; var_25_int = 0; var_26_int = 0; var_27_int = 0; // 0x34 PushV
	var_24_int = 0; // 0x35 MovI
	var_25_int = 0; // 0x36 MovI
	var_26_int = 0; // 0x37 MovI
	var_27_int = 0; // 0x38 MovI
	ClientToScreen(var_24_int, var_25_int); // 0x39 Func
	GetWindowSize(var_26_int, var_27_int); // 0x3b Func
	var_28_int = 2; // 0x3d PushI
	var_29_float = var_26_int / var_28_int; // 0x3e Div
	var_30_int = var_24_int + var_29_float; // 0x3f Add
	var_31_int = 2; // 0x40 PushI
	var_32_float = var_27_int / var_31_int; // 0x41 Div
	var_33_int = var_25_int + var_32_float; // 0x42 Add
	SetMousePos(var_30_int, var_33_int); // 0x43 Func
	return 8; // 0x45 Return
}


