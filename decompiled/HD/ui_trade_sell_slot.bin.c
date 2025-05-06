task_0_event_15(var_0_int, var_1_int, var_2_object, var_3_bool, var_4_string, var_5_bool, var_6_bool, var_7_string, var_8_string, var_9_string, var_10_string, var_11_int, var_12_int, var_13_int, var_14_float)
{
	SendToParent(); // 0x10 Func
	return 0; // 0x12 Return
}


task_0_event_0(var_0_int, var_1_int, var_2_object, var_3_bool, var_4_string, var_5_bool, var_6_bool, var_7_string, var_8_string, var_9_string, var_10_string, var_11_int)
{
	var_12_string = ""; var_13_int = 0; var_14_int = 0; var_15_string = ""; var_16_int = 0; var_17_int = 0; // 0x13 PushV
	var_18_bool = var_2_object == 0; // 0x14 Not
	if(var_18_bool == 0) goto Label_23; // 0x15 JumpB
	return 6; // 0x16 Return
	
Label_23:
	var_19_int = 1; // 0x17 PushI
	var_20_int = 1; // 0x18 PushI
	Blit(var_16_int, var_19_int, var_20_int); // 0x19 Func
	var_21_bool = 0; // 0x1b PushV
	var_21_bool = 0; // 0x1c MovB
	var_22_int = 1; // 0x1d PushI
	var_23_bool = var_1_int > var_22_int; // 0x1e GT
	if(var_23_bool == 0) goto Label_35; // 0x1f JumpB
	var_24_bool = var_3_bool == 0; // 0x20 Not
	if(var_24_bool == 0) goto Label_35; // 0x21 JumpB
	var_21_bool = 1; // 0x22 MovB
	
Label_35:
	if(var_21_bool == 0) goto Label_52; // 0x23 JumpB
	var_25_string = "/"; // 0x24 PushS
	var_26_int = var_0_int + var_25_string; // 0x25 Add
	var_15_string = var_26_int + var_1_int; // 0x26 Add2
	var_27_string = "default"; // 0x27 PushS
	GetTextWidth(var_16_int, var_27_string, var_15_string); // 0x28 Func
	var_28_int = 48; // 0x2a PushI
	var_17_int = var_28_int - var_16_int; // 0x2b Sub2
	var_29_int = 2; // 0x2c PushI
	var_30_bool = var_17_int < var_29_int; // 0x2d LT
	if(var_30_bool == 0) goto Label_48; // 0x2e JumpB
	var_17_int = 2; // 0x2f MovI
	
Label_48:
	var_31_string = "default"; // 0x30 PushS
	var_32_int = 35; // 0x31 PushI
	Print(var_31_string, var_17_int, var_32_int, var_15_string); // 0x32 Func
	
Label_52:
	var_33_bool = var_3_bool; // 0x34 PushT
	if(var_33_bool == 0) goto Label_61; // 0x35 JumpB
	var_34_string = "disabled"; // 0x36 PushS
	var_35_int = 1; // 0x37 PushI
	var_36_int = 1; // 0x38 PushI
	var_37_int = 50; // 0x39 PushI
	var_38_int = 50; // 0x3a PushI
	StretchBlit(var_34_string, var_35_int, var_36_int, var_37_int, var_38_int); // 0x3b Func
	
Label_61:
	return 6; // 0x3d Return
}


task_0_event_2(var_0_int, var_1_int, var_2_object, var_3_bool, var_4_string, var_5_bool, var_6_bool, var_7_string, var_8_string, var_9_string, var_10_string, var_11_int, var_12_int, var_13_int)
{
	var_14_int = 0; // 0x3f PushI
	SendMessageToParent(var_14_int); // 0x40 Func
	return 0; // 0x42 Return
}


task_0_event_6(var_0_int, var_1_int, var_2_object, var_3_bool, var_4_string, var_5_bool, var_6_bool, var_7_string, var_8_string, var_9_string, var_10_string, var_11_int, var_12_int, var_13_int)
{
	var_14_int = 1; // 0x44 PushI
	SendMessageToParent(var_14_int); // 0x45 Func
	return 0; // 0x47 Return
}


task_0_event_3(var_0_int, var_1_int, var_2_object, var_3_bool, var_4_string, var_5_bool, var_6_bool, var_7_string, var_8_string, var_9_string, var_10_string, var_11_int, var_12_int, var_13_int)
{
	return 0; // 0x49 Return
}


task_0_event_9(var_0_int, var_1_int, var_2_object, var_3_bool, var_4_string, var_5_bool, var_6_bool, var_7_string, var_8_string, var_9_string, var_10_string, var_11_int)
{
	var_12_int = 0; var_13_int = 0; // 0x5c PushV
	var_14_bool = var_5_bool == 0; // 0x5d Not
	if(var_14_bool == 0) goto Label_120; // 0x5e JumpB
	var_15_int = -20; // 0x5f PushI
	SendMessageToParent(var_15_int); // 0x60 Func
	var_6_bool = 1; // 0x62 TMovB
	var_13_int = 0; // 0x63 MovI
	
Label_100:
	var_16_bool = var_13_int < var_11_int; // 0x64 LT
	if(var_16_bool == 0) goto Label_119; // 0x65 JumpB
	var_17_int = -5; // 0x66 PushI
	var_18_string = ""; var_19_int = 0; // 0x67 PushV
	var_19_int = var_13_int; // 0x68 Mov
	func_337(var_18_string, var_19_int); // 0x69 NEW_2
	SendMessage(var_17_int, var_18_string); // 0x6b Func
	var_30_int = -5; // 0x6d PushI
	var_31_string = ""; var_32_int = 0; // 0x6e PushV
	var_32_int = var_13_int; // 0x6f Mov
	func_353(var_31_string, var_32_int); // 0x70 NEW_2
	SendMessage(var_30_int, var_31_string); // 0x72 Func
	var_43_int = 1; // 0x74 PushI
	var_13_int = var_13_int + var_43_int; // 0x75 Add2
	goto Label_100; // 0x76 Jump
	
Label_119:
	var_5_bool = 1; // 0x77 TMovB
	
Label_120:
	return 2; // 0x78 Return
}


task_0_event_200(var_0_int, var_1_int, var_2_object, var_3_bool, var_4_string, var_5_bool, var_6_bool, var_7_string, var_8_string, var_9_string, var_10_string, var_11_int, var_12_int, var_13_string, var_14_object)
{
	var_15_int = 0; var_16_int = 0; // 0xaf PushV
	var_17_int = -1; // 0xb0 PushI
	var_18_bool = var_12_int == var_17_int; // 0xb1 Eq
	if(var_18_bool == 0) goto Label_194; // 0xb2 JumpB
	var_19_bool = var_14_object != 0; // 0xb3 NullNeq
	if(var_19_bool == 0) goto Label_193; // 0xb4 JumpB
	var_20_int = 0; // 0xb5 PushI
	get(var_11_int, var_20_int); // 0xb6 ObjFunc
	var_21_int = 1; // 0xb8 PushI
	get(var_10_string, var_21_int); // 0xb9 ObjFunc
	var_22_int = 2; // 0xbb PushI
	get(var_9_string, var_22_int); // 0xbc ObjFunc
	var_23_int = 3; // 0xbe PushI
	get(var_8_string, var_23_int); // 0xbf ObjFunc
	
Label_193:
	return 2; // 0xc1 Return
	
Label_194:
	var_24_int = -19; // 0xc2 PushI
	var_25_bool = var_12_int == var_24_int; // 0xc3 Eq
	if(var_25_bool == 0) goto Label_201; // 0xc4 JumpB
	var_26_int = 0; // 0xc5 PushI
	get(var_7_string, var_26_int); // 0xc6 ObjFunc
	return 2; // 0xc8 Return
	
Label_201:
	var_27_int = -7; // 0xc9 PushI
	var_28_bool = var_12_int == var_27_int; // 0xca Eq
	if(var_28_bool == 0) goto Label_210; // 0xcb JumpB
	var_29_bool = var_5_bool; // 0xcc PushT
	if(var_29_bool == 0) goto Label_209; // 0xcd JumpB
	func_74(); // 0xcf NEW_2
	
Label_209:
	return 2; // 0xd1 Return
	
Label_210:
	var_44_int = -6; // 0xd2 PushI
	var_45_bool = var_12_int == var_44_int; // 0xd3 Eq
	if(var_45_bool == 0) goto Label_215; // 0xd4 JumpB
	var_5_bool = 1; // 0xd5 TMovB
	return 2; // 0xd6 Return
	
Label_215:
	var_46_int = -13; // 0xd7 PushI
	var_47_bool = var_12_int == var_46_int; // 0xd8 Eq
	if(var_47_bool == 0) goto Label_225; // 0xd9 JumpB
	var_48_bool = var_5_bool; // 0xda PushT
	if(var_48_bool == 0) goto Label_224; // 0xdb JumpB
	var_49_string = ""; // 0xdc PushV
	var_49_string = var_7_string; // 0xdd MovT
	func_121(var_16_int, var_49_string); // 0xde NEW_2
	
Label_224:
	return 2; // 0xe0 Return
	
Label_225:
	var_77_int = -14; // 0xe1 PushI
	var_78_bool = var_12_int == var_77_int; // 0xe2 Eq
	if(var_78_bool == 0) goto Label_235; // 0xe3 JumpB
	var_79_bool = var_5_bool; // 0xe4 PushT
	if(var_79_bool == 0) goto Label_234; // 0xe5 JumpB
	var_80_string = ""; // 0xe6 PushV
	var_80_string = var_8_string; // 0xe7 MovT
	func_121(var_16_int, var_80_string); // 0xe8 NEW_2
	
Label_234:
	return 2; // 0xea Return
	
Label_235:
	var_81_int = -15; // 0xeb PushI
	var_82_bool = var_12_int == var_81_int; // 0xec Eq
	if(var_82_bool == 0) goto Label_245; // 0xed JumpB
	var_83_bool = var_5_bool; // 0xee PushT
	if(var_83_bool == 0) goto Label_244; // 0xef JumpB
	var_84_string = ""; // 0xf0 PushV
	var_84_string = var_9_string; // 0xf1 MovT
	func_121(var_16_int, var_84_string); // 0xf2 NEW_2
	
Label_244:
	return 2; // 0xf4 Return
	
Label_245:
	var_85_int = -16; // 0xf5 PushI
	var_86_bool = var_12_int == var_85_int; // 0xf6 Eq
	if(var_86_bool == 0) goto Label_255; // 0xf7 JumpB
	var_87_bool = var_5_bool; // 0xf8 PushT
	if(var_87_bool == 0) goto Label_254; // 0xf9 JumpB
	var_88_string = ""; // 0xfa PushV
	var_88_string = var_10_string; // 0xfb MovT
	func_121(var_16_int, var_88_string); // 0xfc NEW_2
	
Label_254:
	return 2; // 0xfe Return
	
Label_255:
	var_89_int = -4; // 0xff PushI
	var_90_bool = var_12_int == var_89_int; // 0x100 Eq
	if(var_90_bool == 0) goto Label_263; // 0x101 JumpB
	var_5_bool = 1; // 0x102 TMovB
	func_74(); // 0x104 NEW_2
	return 2; // 0x106 Return
	
Label_263:
	var_91_int = -5; // 0x107 PushI
	var_92_bool = var_12_int == var_91_int; // 0x108 Eq
	if(var_92_bool == 0) goto Label_272; // 0x109 JumpB
	var_93_bool = var_6_bool; // 0x10a PushT
	if(var_93_bool == 0) goto Label_270; // 0x10b JumpB
	var_6_bool = 0; // 0x10c TMovB
	goto Label_271; // 0x10d Jump
	
Label_271:
	return 2; // 0x10f Return
	
Label_270:
	var_5_bool = 0; // 0x10e TMovB
	
Label_272:
	var_94_int = 0; // 0x110 PushI
	var_95_bool = var_12_int < var_94_int; // 0x111 LT
	if(var_95_bool == 0) goto Label_276; // 0x112 JumpB
	return 2; // 0x113 Return
	
Label_276:
	var_96_int = 65536; // 0x114 PushI
	var_97_int = var_12_int & var_96_int; // 0x115 And
	if(var_97_int == 0) goto Label_286; // 0x116 JumpB
	var_98_int = 0; // 0x117 PushI
	get(var_0_int, var_98_int); // 0x118 ObjFunc
	var_99_int = 1; // 0x11a PushI
	get(var_99_int, var_99_int); // 0x11b ObjFunc
	return 2; // 0x11d Return
	
Label_286:
	var_100_int = 16384; // 0x11e PushI
	var_101_int = var_12_int & var_100_int; // 0x11f And
	if(var_101_int == 0) goto Label_293; // 0x120 JumpB
	var_102_string = "selected"; // 0x121 PushS
	SetBackground(var_102_string); // 0x122 Func
	goto Label_296; // 0x124 Jump
	
Label_296:
	var_103_int = 32768; // 0x128 PushI
	var_104_int = var_12_int & var_103_int; // 0x129 And
	if(var_104_int == 0) goto Label_305; // 0x12a JumpB
	var_2_object = 0; // 0x12b SetNullT
	var_105_int = -1; // 0x12c PushI
	var_106_string = ""; // 0x12d PushS
	SetTooltip(var_105_int, var_106_string); // 0x12e Func
	return 2; // 0x130 Return
	
Label_305:
	var_107_int = 131072; // 0x131 PushI
	var_108_int = var_12_int & var_107_int; // 0x132 And
	if(var_108_int == 0) goto Label_310; // 0x133 JumpB
	var_3_bool = 1; // 0x134 TMovB
	goto Label_311; // 0x135 Jump
	
Label_311:
	var_2_object = var_14_object; // 0x137 TMov
	var_109_object = var_2_object; // 0x138 PushT
	if(var_109_object == 0) goto Label_332; // 0x139 JumpB
	GetItemID(var_16_int); // 0x13a TObjFunc
	GetItemImage(var_16_int, var_13_string); // 0x13c Func
	LoadImage(var_13_string); // 0x13e Func
	var_110_bool = var_3_bool; // 0x140 PushT
	if(var_110_bool == 0) goto Label_327; // 0x141 JumpB
	var_111_int = -1; // 0x142 PushI
	var_112_string = ""; // 0x143 PushS
	SetTooltip(var_111_int, var_112_string); // 0x144 Func
	goto Label_331; // 0x146 Jump
	
Label_331:
	goto Label_336; // 0x14b Jump
	
Label_336:
	return 2; // 0x150 Return
	
Label_327:
	var_113_int = 3; // 0x147 PushI
	var_114_string = ""; // 0x148 PushS
	SetTooltip(var_113_int, var_114_string, var_113_int); // 0x149 Func
	
Label_332:
	var_115_int = -1; // 0x14c PushI
	var_116_string = ""; // 0x14d PushS
	SetTooltip(var_115_int, var_116_string); // 0x14e Func
	
Label_310:
	var_3_bool = 0; // 0x136 TMovB
	
Label_293:
	var_117_string = "default"; // 0x125 PushS
	SetBackground(var_117_string); // 0x126 Func
}


main(var_0_int, var_1_int, var_2_object, var_3_bool, var_4_string, var_5_bool, var_6_bool, var_7_string, var_8_string, var_9_string, var_10_string, var_11_int)
{
	var_2_object = 0; // 0x0 SetNullT
	var_0_int = 0; // 0x1 TMovI
	var_1_int = 1; // 0x2 TMovI
	var_3_bool = 0; // 0x3 TMovB
	var_5_bool = 0; // 0x4 TMovB
	var_11_int = 0; // 0x5 TMovI
	var_12_string = "default"; // 0x6 PushS
	SetBackground(var_12_string); // 0x7 Func
	var_13_bool = 1; // 0x9 PushB
	SetOwnerDraw(var_13_bool); // 0xa Func
	ProcessEvents(); // 0xc Func
	return 0; // 0xe Return
}


func_337(var_18_string, var_19_int)
{
	var_20_int = 1; // 0x152 PushI
	var_21_int = var_19_int + var_20_int; // 0x153 Add
	var_22_int = 10; // 0x154 PushI
	var_23_bool = var_21_int < var_22_int; // 0x155 LT
	if(var_23_bool == 0) goto Label_348; // 0x156 JumpB
	var_24_string = "l_slot0"; // 0x157 PushS
	var_25_int = 1; // 0x158 PushI
	var_26_int = var_19_int + var_25_int; // 0x159 Add
	var_18_string = var_24_string + var_26_int; // 0x15a Add2
	return 0; // 0x15b Return
	
Label_348:
	var_27_string = "l_slot"; // 0x15c PushS
	var_28_int = 1; // 0x15d PushI
	var_29_int = var_19_int + var_28_int; // 0x15e Add
	var_18_string = var_27_string + var_29_int; // 0x15f Add2
	return 0; // 0x160 Return
}


func_74()
{
	var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_int = 0; var_35_int = 0; var_36_int = 0; var_37_int = 0; // 0x4a PushV
	var_34_int = 0; // 0x4b MovI
	var_35_int = 0; // 0x4c MovI
	var_36_int = 0; // 0x4d MovI
	var_37_int = 0; // 0x4e MovI
	ClientToScreen(var_34_int, var_35_int); // 0x4f Func
	GetWindowSize(var_36_int, var_37_int); // 0x51 Func
	var_38_int = 2; // 0x53 PushI
	var_39_float = var_36_int / var_38_int; // 0x54 Div
	var_40_int = var_34_int + var_39_float; // 0x55 Add
	var_41_int = 2; // 0x56 PushI
	var_42_float = var_37_int / var_41_int; // 0x57 Div
	var_43_int = var_35_int + var_42_float; // 0x58 Add
	SetMousePos(var_40_int, var_43_int); // 0x59 Func
	return 8; // 0x5b Return
}


func_353(var_31_string, var_32_int)
{
	var_33_int = 1; // 0x162 PushI
	var_34_int = var_32_int + var_33_int; // 0x163 Add
	var_35_int = 10; // 0x164 PushI
	var_36_bool = var_34_int < var_35_int; // 0x165 LT
	if(var_36_bool == 0) goto Label_364; // 0x166 JumpB
	var_37_string = "r_slot0"; // 0x167 PushS
	var_38_int = 1; // 0x168 PushI
	var_39_int = var_32_int + var_38_int; // 0x169 Add
	var_31_string = var_37_string + var_39_int; // 0x16a Add2
	return 0; // 0x16b Return
	
Label_364:
	var_40_string = "r_slot"; // 0x16c PushS
	var_41_int = 1; // 0x16d PushI
	var_42_int = var_32_int + var_41_int; // 0x16e Add
	var_31_string = var_40_string + var_42_int; // 0x16f Add2
	return 0; // 0x170 Return
}


func_121(var_5_bool, var_49_string)
{
	var_50_int = 0; var_51_int = 0; var_52_int = 0; var_53_int = 0; var_54_int = 0; var_55_int = 0; var_56_int = 0; var_57_int = 0; var_58_int = 0; var_59_int = 0; var_60_int = 0; var_61_int = 0; // 0x79 PushV
	var_62_string = ""; // 0x7a PushS
	var_63_bool = var_49_string != var_62_string; // 0x7b Neq
	if(var_63_bool == 0) goto Label_174; // 0x7c JumpB
	var_56_int = 0; // 0x7d MovI
	var_57_int = 0; // 0x7e MovI
	var_58_int = 0; // 0x7f MovI
	var_59_int = 0; // 0x80 MovI
	ClientToScreen(var_56_int, var_57_int); // 0x81 Func
	GetWindowSize(var_58_int, var_59_int); // 0x83 Func
	var_60_int = 0; // 0x85 MovI
	var_61_int = 0; // 0x86 MovI
	GetCursorPos(var_60_int, var_61_int); // 0x87 Func
	var_64_bool = 0; // 0x89 PushV
	var_64_bool = 0; // 0x8a MovB
	var_65_bool = 0; // 0x8b PushV
	var_65_bool = 0; // 0x8c MovB
	var_66_bool = 0; // 0x8d PushV
	var_66_bool = 0; // 0x8e MovB
	var_67_bool = var_60_int > var_56_int; // 0x8f GT
	if(var_67_bool == 0) goto Label_148; // 0x90 JumpB
	var_68_bool = var_61_int > var_57_int; // 0x91 GT
	if(var_68_bool == 0) goto Label_148; // 0x92 JumpB
	var_66_bool = 1; // 0x93 MovB
	
Label_148:
	if(var_66_bool == 0) goto Label_153; // 0x94 JumpB
	var_69_int = var_56_int + var_58_int; // 0x95 Add
	var_70_bool = var_60_int < var_69_int; // 0x96 LT
	if(var_70_bool == 0) goto Label_153; // 0x97 JumpB
	var_65_bool = 1; // 0x98 MovB
	
Label_153:
	if(var_65_bool == 0) goto Label_158; // 0x99 JumpB
	var_71_int = var_57_int + var_59_int; // 0x9a Add
	var_72_bool = var_61_int < var_71_int; // 0x9b LT
	if(var_72_bool == 0) goto Label_158; // 0x9c JumpB
	var_64_bool = 1; // 0x9d MovB
	
Label_158:
	if(var_64_bool == 0) goto Label_171; // 0x9e JumpB
	var_5_bool = 0; // 0x9f TMovB
	var_73_string = "$parent"; // 0xa0 PushS
	var_74_bool = var_49_string == var_73_string; // 0xa1 Eq
	if(var_74_bool == 0) goto Label_167; // 0xa2 JumpB
	var_75_int = -4; // 0xa3 PushI
	SendMessageToParent(var_75_int); // 0xa4 Func
	goto Label_170; // 0xa6 Jump
	
Label_170:
	goto Label_174; // 0xaa Jump
	
Label_174:
	return 12; // 0xae Return
	
Label_167:
	var_76_int = -4; // 0xa7 PushI
	SendMessage(var_76_int, var_49_string); // 0xa8 Func
	
Label_171:
	func_74(); // 0xac NEW_2
}


