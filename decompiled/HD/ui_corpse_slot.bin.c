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
	func_236(var_14_string, var_15_int); // 0x18 NEW_2
	SendMessage(var_13_int, var_14_string); // 0x1a Func
	var_26_int = 1; // 0x1c PushI
	var_9_int = var_9_int + var_26_int; // 0x1d Add2
	goto Label_18; // 0x1e Jump
	
Label_31:
	var_4_bool = 1; // 0x1f TMovB
	
Label_32:
	var_27_int = -10; // 0x20 PushI
	SendMessageToParent(var_27_int); // 0x21 Func
	return 2; // 0x23 Return
}


task_0_event_0(var_0_int, var_1_int, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string, var_7_string)
{
	var_8_bool = var_2_object == 0; // 0x6c Not
	if(var_8_bool == 0) goto Label_116; // 0x6d JumpB
	var_9_string = "scalpel"; // 0x6e PushS
	var_10_int = 1; // 0x6f PushI
	var_11_int = 1; // 0x70 PushI
	Blit(var_9_string, var_10_int, var_11_int); // 0x71 Func
	return 0; // 0x73 Return
	
Label_116:
	var_12_int = 1; // 0x74 PushI
	var_13_int = 1; // 0x75 PushI
	Blit(var_7_string, var_12_int, var_13_int); // 0x76 Func
	var_14_int = 1; // 0x78 PushI
	var_15_bool = var_1_int > var_14_int; // 0x79 GT
	if(var_15_bool == 0) goto Label_128; // 0x7a JumpB
	var_16_string = "default"; // 0x7b PushS
	var_17_int = 2; // 0x7c PushI
	var_18_int = 35; // 0x7d PushI
	Print(var_16_string, var_17_int, var_18_int, var_0_int); // 0x7e Func
	
Label_128:
	return 0; // 0x80 Return
}


task_0_event_2(var_0_int, var_1_int, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string, var_7_string, var_8_int, var_9_int)
{
	var_10_object = var_2_object; // 0x82 PushT
	if(var_10_object == 0) goto Label_135; // 0x83 JumpB
	var_11_int = 0; // 0x84 PushI
	SendMessageToParent(var_11_int); // 0x85 Func
	
Label_135:
	return 0; // 0x87 Return
}


task_0_event_200(var_0_int, var_1_int, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string, var_7_string, var_8_int, var_9_string, var_10_object)
{
	var_11_int = 0; var_12_int = 0; // 0x88 PushV
	var_13_int = -7; // 0x89 PushI
	var_14_bool = var_8_int == var_13_int; // 0x8a Eq
	if(var_14_bool == 0) goto Label_146; // 0x8b JumpB
	var_15_bool = var_4_bool; // 0x8c PushT
	if(var_15_bool == 0) goto Label_145; // 0x8d JumpB
	func_36(); // 0x8f NEW_2
	
Label_145:
	return 2; // 0x91 Return
	
Label_146:
	var_30_int = -6; // 0x92 PushI
	var_31_bool = var_8_int == var_30_int; // 0x93 Eq
	if(var_31_bool == 0) goto Label_151; // 0x94 JumpB
	var_4_bool = 1; // 0x95 TMovB
	return 2; // 0x96 Return
	
Label_151:
	var_32_int = -1; // 0x97 PushI
	var_33_bool = var_8_int == var_32_int; // 0x98 Eq
	if(var_33_bool == 0) goto Label_163; // 0x99 JumpB
	var_34_bool = var_10_object != 0; // 0x9a NullNeq
	if(var_34_bool == 0) goto Label_162; // 0x9b JumpB
	var_35_int = 0; // 0x9c PushI
	get(var_8_int, var_35_int); // 0x9d ObjFunc
	var_36_int = 1; // 0x9f PushI
	get(var_7_string, var_36_int); // 0xa0 ObjFunc
	
Label_162:
	return 2; // 0xa2 Return
	
Label_163:
	var_37_int = -2; // 0xa3 PushI
	var_38_bool = var_8_int == var_37_int; // 0xa4 Eq
	if(var_38_bool == 0) goto Label_173; // 0xa5 JumpB
	var_39_bool = var_4_bool; // 0xa6 PushT
	if(var_39_bool == 0) goto Label_172; // 0xa7 JumpB
	var_40_string = ""; // 0xa8 PushV
	var_40_string = var_6_string; // 0xa9 MovT
	func_54(var_12_int, var_40_string); // 0xaa NEW_2
	
Label_172:
	return 2; // 0xac Return
	
Label_173:
	var_68_int = -3; // 0xad PushI
	var_69_bool = var_8_int == var_68_int; // 0xae Eq
	if(var_69_bool == 0) goto Label_183; // 0xaf JumpB
	var_70_bool = var_4_bool; // 0xb0 PushT
	if(var_70_bool == 0) goto Label_182; // 0xb1 JumpB
	var_71_string = ""; // 0xb2 PushV
	var_71_string = var_7_string; // 0xb3 MovT
	func_54(var_12_int, var_71_string); // 0xb4 NEW_2
	
Label_182:
	return 2; // 0xb6 Return
	
Label_183:
	var_72_int = -4; // 0xb7 PushI
	var_73_bool = var_8_int == var_72_int; // 0xb8 Eq
	if(var_73_bool == 0) goto Label_191; // 0xb9 JumpB
	var_4_bool = 1; // 0xba TMovB
	func_36(); // 0xbc NEW_2
	return 2; // 0xbe Return
	
Label_191:
	var_74_int = -5; // 0xbf PushI
	var_75_bool = var_8_int == var_74_int; // 0xc0 Eq
	if(var_75_bool == 0) goto Label_200; // 0xc1 JumpB
	var_76_bool = var_5_bool; // 0xc2 PushT
	if(var_76_bool == 0) goto Label_198; // 0xc3 JumpB
	var_5_bool = 0; // 0xc4 TMovB
	goto Label_199; // 0xc5 Jump
	
Label_199:
	return 2; // 0xc7 Return
	
Label_198:
	var_4_bool = 0; // 0xc6 TMovB
	
Label_200:
	var_77_int = 65536; // 0xc8 PushI
	var_78_int = var_8_int & var_77_int; // 0xc9 And
	if(var_78_int == 0) goto Label_206; // 0xca JumpB
	var_79_int = 16383; // 0xcb PushI
	var_0_int = var_8_int & var_79_int; // 0xcc And2
	return 2; // 0xcd Return
	
Label_206:
	var_80_int = 32768; // 0xce PushI
	var_81_int = var_8_int & var_80_int; // 0xcf And
	if(var_81_int == 0) goto Label_215; // 0xd0 JumpB
	var_2_object = 0; // 0xd1 SetNullT
	var_82_int = -1; // 0xd2 PushI
	var_83_string = ""; // 0xd3 PushS
	SetTooltip(var_82_int, var_83_string); // 0xd4 Func
	goto Label_235; // 0xd6 Jump
	
Label_235:
	return 2; // 0xeb Return
	
Label_215:
	var_2_object = var_10_object; // 0xd7 TMov
	var_84_object = var_2_object; // 0xd8 PushT
	if(var_84_object == 0) goto Label_231; // 0xd9 JumpB
	GetItemID(var_12_int); // 0xda TObjFunc
	GetInvItemSprite(var_10_object, var_12_int); // 0xdc Func
	LoadImage(var_10_object); // 0xde Func
	GetInvItemMaxStackSize(var_12_int, var_12_int); // 0xe0 Func
	var_85_int = 1; // 0xe2 PushI
	var_86_string = ""; // 0xe3 PushS
	SetTooltip(var_85_int, var_86_string, var_85_int); // 0xe4 Func
	goto Label_235; // 0xe6 Jump
	
Label_231:
	var_87_int = -1; // 0xe7 PushI
	var_88_string = ""; // 0xe8 PushS
	SetTooltip(var_87_int, var_88_string); // 0xe9 Func
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


func_236(var_14_string, var_15_int)
{
	var_16_int = 1; // 0xed PushI
	var_17_int = var_15_int + var_16_int; // 0xee Add
	var_18_int = 10; // 0xef PushI
	var_19_bool = var_17_int < var_18_int; // 0xf0 LT
	if(var_19_bool == 0) goto Label_247; // 0xf1 JumpB
	var_20_string = "ccslot0"; // 0xf2 PushS
	var_21_int = 1; // 0xf3 PushI
	var_22_int = var_15_int + var_21_int; // 0xf4 Add
	var_14_string = var_20_string + var_22_int; // 0xf5 Add2
	return 0; // 0xf6 Return
	
Label_247:
	var_23_string = "ccslot"; // 0xf7 PushS
	var_24_int = 1; // 0xf8 PushI
	var_25_int = var_15_int + var_24_int; // 0xf9 Add
	var_14_string = var_23_string + var_25_int; // 0xfa Add2
	return 0; // 0xfb Return
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


