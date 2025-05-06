task_0_event_9(var_0_int, var_1_int, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_string, var_8_string)
{
	var_9_int = 0; var_10_int = 0; // 0xe PushV
	var_11_bool = var_5_bool == 0; // 0xf Not
	if(var_11_bool == 0) goto Label_33; // 0x10 JumpB
	var_6_bool = 1; // 0x11 TMovB
	var_10_int = 0; // 0x12 MovI
	
Label_19:
	var_12_int = 12; // 0x13 PushI
	var_13_bool = var_10_int < var_12_int; // 0x14 LT
	if(var_13_bool == 0) goto Label_32; // 0x15 JumpB
	var_14_int = -5; // 0x16 PushI
	var_15_string = ""; var_16_int = 0; // 0x17 PushV
	var_16_int = var_10_int; // 0x18 Mov
	func_273(var_15_string, var_16_int); // 0x19 NEW_2
	SendMessage(var_14_int, var_15_string); // 0x1b Func
	var_27_int = 1; // 0x1d PushI
	var_10_int = var_10_int + var_27_int; // 0x1e Add2
	goto Label_19; // 0x1f Jump
	
Label_32:
	var_5_bool = 1; // 0x20 TMovB
	
Label_33:
	var_28_int = -8; // 0x21 PushI
	SendMessageToParent(var_28_int); // 0x22 Func
	return 2; // 0x24 Return
}


task_0_event_10(var_0_int, var_1_int, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_string, var_8_string)
{
	return 0; // 0x25 Return
}


task_0_event_0(var_0_int, var_1_int, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_string, var_8_string)
{
	var_9_bool = var_2_object == 0; // 0x26 Not
	if(var_9_bool == 0) goto Label_41; // 0x27 JumpB
	return 0; // 0x28 Return
	
Label_41:
	var_10_int = 1; // 0x29 PushI
	var_11_int = 1; // 0x2a PushI
	Blit(var_8_string, var_10_int, var_11_int); // 0x2b Func
	var_12_int = 1; // 0x2d PushI
	var_13_bool = var_0_int > var_12_int; // 0x2e GT
	if(var_13_bool == 0) goto Label_53; // 0x2f JumpB
	var_14_string = "default"; // 0x30 PushS
	var_15_int = 2; // 0x31 PushI
	var_16_int = 35; // 0x32 PushI
	Print(var_14_string, var_15_int, var_16_int, var_0_int); // 0x33 Func
	
Label_53:
	var_17_bool = var_4_bool; // 0x35 PushT
	if(var_17_bool == 0) goto Label_62; // 0x36 JumpB
	var_18_string = "disabled"; // 0x37 PushS
	var_19_int = 1; // 0x38 PushI
	var_20_int = 1; // 0x39 PushI
	var_21_int = 50; // 0x3a PushI
	var_22_int = 50; // 0x3b PushI
	StretchBlit(var_18_string, var_19_int, var_20_int, var_21_int, var_22_int); // 0x3c Func
	
Label_62:
	return 0; // 0x3e Return
}


task_0_event_2(var_0_int, var_1_int, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_string, var_8_string, var_9_int, var_10_int)
{
	var_11_string = "selected"; // 0x40 PushS
	SetBackground(var_11_string); // 0x41 Func
	var_12_int = 0; // 0x43 PushI
	SendMessageToParent(var_12_int); // 0x44 Func
	return 0; // 0x46 Return
}


task_0_event_6(var_0_int, var_1_int, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_string, var_8_string, var_9_int, var_10_int)
{
	var_11_int = 1; // 0x48 PushI
	SendMessageToParent(var_11_int); // 0x49 Func
	return 0; // 0x4b Return
}


task_0_event_3(var_0_int, var_1_int, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_string, var_8_string, var_9_int, var_10_int)
{
	return 0; // 0x4d Return
}


task_0_event_200(var_0_int, var_1_int, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_string, var_8_string, var_9_int, var_10_string, var_11_object)
{
	var_12_int = 0; var_13_int = 0; // 0x96 PushV
	var_14_int = -7; // 0x97 PushI
	var_15_bool = var_9_int == var_14_int; // 0x98 Eq
	if(var_15_bool == 0) goto Label_160; // 0x99 JumpB
	var_16_bool = var_5_bool; // 0x9a PushT
	if(var_16_bool == 0) goto Label_159; // 0x9b JumpB
	func_78(); // 0x9d NEW_2
	
Label_159:
	return 2; // 0x9f Return
	
Label_160:
	var_31_int = -6; // 0xa0 PushI
	var_32_bool = var_9_int == var_31_int; // 0xa1 Eq
	if(var_32_bool == 0) goto Label_165; // 0xa2 JumpB
	var_5_bool = 1; // 0xa3 TMovB
	return 2; // 0xa4 Return
	
Label_165:
	var_33_int = -1; // 0xa5 PushI
	var_34_bool = var_9_int == var_33_int; // 0xa6 Eq
	if(var_34_bool == 0) goto Label_177; // 0xa7 JumpB
	var_35_bool = var_11_object != 0; // 0xa8 NullNeq
	if(var_35_bool == 0) goto Label_176; // 0xa9 JumpB
	var_36_int = 0; // 0xaa PushI
	get(var_8_string, var_36_int); // 0xab ObjFunc
	var_37_int = 1; // 0xad PushI
	get(var_7_string, var_37_int); // 0xae ObjFunc
	
Label_176:
	return 2; // 0xb0 Return
	
Label_177:
	var_38_int = -2; // 0xb1 PushI
	var_39_bool = var_9_int == var_38_int; // 0xb2 Eq
	if(var_39_bool == 0) goto Label_187; // 0xb3 JumpB
	var_40_bool = var_5_bool; // 0xb4 PushT
	if(var_40_bool == 0) goto Label_186; // 0xb5 JumpB
	var_41_string = ""; // 0xb6 PushV
	var_41_string = var_7_string; // 0xb7 MovT
	func_96(var_13_int, var_41_string); // 0xb8 NEW_2
	
Label_186:
	return 2; // 0xba Return
	
Label_187:
	var_69_int = -3; // 0xbb PushI
	var_70_bool = var_9_int == var_69_int; // 0xbc Eq
	if(var_70_bool == 0) goto Label_197; // 0xbd JumpB
	var_71_bool = var_5_bool; // 0xbe PushT
	if(var_71_bool == 0) goto Label_196; // 0xbf JumpB
	var_72_string = ""; // 0xc0 PushV
	var_72_string = var_8_string; // 0xc1 MovT
	func_96(var_13_int, var_72_string); // 0xc2 NEW_2
	
Label_196:
	return 2; // 0xc4 Return
	
Label_197:
	var_73_int = -4; // 0xc5 PushI
	var_74_bool = var_9_int == var_73_int; // 0xc6 Eq
	if(var_74_bool == 0) goto Label_205; // 0xc7 JumpB
	var_5_bool = 1; // 0xc8 TMovB
	func_78(); // 0xca NEW_2
	return 2; // 0xcc Return
	
Label_205:
	var_75_int = -5; // 0xcd PushI
	var_76_bool = var_9_int == var_75_int; // 0xce Eq
	if(var_76_bool == 0) goto Label_214; // 0xcf JumpB
	var_77_bool = var_6_bool; // 0xd0 PushT
	if(var_77_bool == 0) goto Label_212; // 0xd1 JumpB
	var_6_bool = 0; // 0xd2 TMovB
	goto Label_213; // 0xd3 Jump
	
Label_213:
	return 2; // 0xd5 Return
	
Label_212:
	var_5_bool = 0; // 0xd4 TMovB
	
Label_214:
	var_78_int = 65536; // 0xd6 PushI
	var_79_int = var_9_int & var_78_int; // 0xd7 And
	if(var_79_int == 0) goto Label_220; // 0xd8 JumpB
	var_80_int = 16383; // 0xd9 PushI
	var_0_int = var_9_int & var_80_int; // 0xda And2
	return 2; // 0xdb Return
	
Label_220:
	var_81_int = 16384; // 0xdc PushI
	var_82_int = var_9_int & var_81_int; // 0xdd And
	if(var_82_int == 0) goto Label_227; // 0xde JumpB
	var_83_string = "selected"; // 0xdf PushS
	SetBackground(var_83_string); // 0xe0 Func
	goto Label_230; // 0xe2 Jump
	
Label_230:
	var_84_int = 32768; // 0xe6 PushI
	var_85_int = var_9_int & var_84_int; // 0xe7 And
	if(var_85_int == 0) goto Label_239; // 0xe8 JumpB
	var_2_object = 0; // 0xe9 SetNullT
	var_86_int = -1; // 0xea PushI
	var_87_string = ""; // 0xeb PushS
	SetTooltip(var_86_int, var_87_string); // 0xec Func
	goto Label_272; // 0xee Jump
	
Label_272:
	return 2; // 0x110 Return
	
Label_239:
	var_88_int = 131072; // 0xef PushI
	var_89_int = var_9_int & var_88_int; // 0xf0 And
	if(var_89_int == 0) goto Label_244; // 0xf1 JumpB
	var_4_bool = 1; // 0xf2 TMovB
	goto Label_245; // 0xf3 Jump
	
Label_245:
	var_2_object = var_11_object; // 0xf5 TMov
	var_90_object = var_2_object; // 0xf6 PushT
	if(var_90_object == 0) goto Label_268; // 0xf7 JumpB
	GetItemID(var_13_int); // 0xf8 TObjFunc
	GetInvItemSprite(var_11_object, var_13_int); // 0xfa Func
	LoadImage(var_11_object); // 0xfc Func
	GetInvItemMaxStackSize(var_13_int, var_13_int); // 0xfe Func
	var_91_bool = var_4_bool; // 0x100 PushT
	if(var_91_bool == 0) goto Label_263; // 0x101 JumpB
	var_92_int = -1; // 0x102 PushI
	var_93_string = ""; // 0x103 PushS
	SetTooltip(var_92_int, var_93_string); // 0x104 Func
	goto Label_267; // 0x106 Jump
	
Label_267:
	goto Label_272; // 0x10b Jump
	
Label_263:
	var_94_int = 1; // 0x107 PushI
	var_95_string = ""; // 0x108 PushS
	SetTooltip(var_94_int, var_95_string, var_94_int); // 0x109 Func
	
Label_268:
	var_96_int = -1; // 0x10c PushI
	var_97_string = ""; // 0x10d PushS
	SetTooltip(var_96_int, var_97_string); // 0x10e Func
	
Label_244:
	var_4_bool = 0; // 0xf4 TMovB
	
Label_227:
	var_98_string = "default"; // 0xe3 PushS
	SetBackground(var_98_string); // 0xe4 Func
}


main(var_0_int, var_1_int, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_string, var_8_string)
{
	var_2_object = 0; // 0x0 SetNullT
	var_0_int = 1; // 0x1 TMovI
	var_5_bool = 0; // 0x2 TMovB
	var_6_bool = 0; // 0x3 TMovB
	var_4_bool = 0; // 0x4 TMovB
	var_9_string = "default"; // 0x5 PushS
	SetBackground(var_9_string); // 0x6 Func
	var_10_bool = 1; // 0x8 PushB
	SetOwnerDraw(var_10_bool); // 0x9 Func
	ProcessEvents(); // 0xb Func
	return 0; // 0xd Return
}


func_96(var_5_bool, var_41_string)
{
	var_42_int = 0; var_43_int = 0; var_44_int = 0; var_45_int = 0; var_46_int = 0; var_47_int = 0; var_48_int = 0; var_49_int = 0; var_50_int = 0; var_51_int = 0; var_52_int = 0; var_53_int = 0; // 0x60 PushV
	var_54_string = ""; // 0x61 PushS
	var_55_bool = var_41_string != var_54_string; // 0x62 Neq
	if(var_55_bool == 0) goto Label_149; // 0x63 JumpB
	var_48_int = 0; // 0x64 MovI
	var_49_int = 0; // 0x65 MovI
	var_50_int = 0; // 0x66 MovI
	var_51_int = 0; // 0x67 MovI
	ClientToScreen(var_48_int, var_49_int); // 0x68 Func
	GetWindowSize(var_50_int, var_51_int); // 0x6a Func
	var_52_int = 0; // 0x6c MovI
	var_53_int = 0; // 0x6d MovI
	GetCursorPos(var_52_int, var_53_int); // 0x6e Func
	var_56_bool = 0; // 0x70 PushV
	var_56_bool = 0; // 0x71 MovB
	var_57_bool = 0; // 0x72 PushV
	var_57_bool = 0; // 0x73 MovB
	var_58_bool = 0; // 0x74 PushV
	var_58_bool = 0; // 0x75 MovB
	var_59_bool = var_52_int > var_48_int; // 0x76 GT
	if(var_59_bool == 0) goto Label_123; // 0x77 JumpB
	var_60_bool = var_53_int > var_49_int; // 0x78 GT
	if(var_60_bool == 0) goto Label_123; // 0x79 JumpB
	var_58_bool = 1; // 0x7a MovB
	
Label_123:
	if(var_58_bool == 0) goto Label_128; // 0x7b JumpB
	var_61_int = var_48_int + var_50_int; // 0x7c Add
	var_62_bool = var_52_int < var_61_int; // 0x7d LT
	if(var_62_bool == 0) goto Label_128; // 0x7e JumpB
	var_57_bool = 1; // 0x7f MovB
	
Label_128:
	if(var_57_bool == 0) goto Label_133; // 0x80 JumpB
	var_63_int = var_49_int + var_51_int; // 0x81 Add
	var_64_bool = var_53_int < var_63_int; // 0x82 LT
	if(var_64_bool == 0) goto Label_133; // 0x83 JumpB
	var_56_bool = 1; // 0x84 MovB
	
Label_133:
	if(var_56_bool == 0) goto Label_146; // 0x85 JumpB
	var_5_bool = 0; // 0x86 TMovB
	var_65_string = "$parent"; // 0x87 PushS
	var_66_bool = var_41_string == var_65_string; // 0x88 Eq
	if(var_66_bool == 0) goto Label_142; // 0x89 JumpB
	var_67_int = -4; // 0x8a PushI
	SendMessageToParent(var_67_int); // 0x8b Func
	goto Label_145; // 0x8d Jump
	
Label_145:
	goto Label_149; // 0x91 Jump
	
Label_149:
	return 12; // 0x95 Return
	
Label_142:
	var_68_int = -4; // 0x8e PushI
	SendMessage(var_68_int, var_41_string); // 0x8f Func
	
Label_146:
	func_78(); // 0x93 NEW_2
}


func_273(var_15_string, var_16_int)
{
	var_17_int = 1; // 0x112 PushI
	var_18_int = var_16_int + var_17_int; // 0x113 Add
	var_19_int = 10; // 0x114 PushI
	var_20_bool = var_18_int < var_19_int; // 0x115 LT
	if(var_20_bool == 0) goto Label_284; // 0x116 JumpB
	var_21_string = "slot0"; // 0x117 PushS
	var_22_int = 1; // 0x118 PushI
	var_23_int = var_16_int + var_22_int; // 0x119 Add
	var_15_string = var_21_string + var_23_int; // 0x11a Add2
	return 0; // 0x11b Return
	
Label_284:
	var_24_string = "slot"; // 0x11c PushS
	var_25_int = 1; // 0x11d PushI
	var_26_int = var_16_int + var_25_int; // 0x11e Add
	var_15_string = var_24_string + var_26_int; // 0x11f Add2
	return 0; // 0x120 Return
}


func_78()
{
	var_17_int = 0; var_18_int = 0; var_19_int = 0; var_20_int = 0; var_21_int = 0; var_22_int = 0; var_23_int = 0; var_24_int = 0; // 0x4e PushV
	var_21_int = 0; // 0x4f MovI
	var_22_int = 0; // 0x50 MovI
	var_23_int = 0; // 0x51 MovI
	var_24_int = 0; // 0x52 MovI
	ClientToScreen(var_21_int, var_22_int); // 0x53 Func
	GetWindowSize(var_23_int, var_24_int); // 0x55 Func
	var_25_int = 2; // 0x57 PushI
	var_26_float = var_23_int / var_25_int; // 0x58 Div
	var_27_int = var_21_int + var_26_float; // 0x59 Add
	var_28_int = 2; // 0x5a PushI
	var_29_float = var_24_int / var_28_int; // 0x5b Div
	var_30_int = var_22_int + var_29_float; // 0x5c Add
	SetMousePos(var_27_int, var_30_int); // 0x5d Func
	return 8; // 0x5f Return
}


