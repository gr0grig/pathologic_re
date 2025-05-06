task_0_event_15(var_0_int, var_1_int, var_2_object, var_3_bool, var_4_string, var_5_bool, var_6_bool, var_7_string, var_8_string, var_9_string, var_10_string, var_11_int, var_12_int, var_13_int, var_14_float)
{
	SendToParent(); // 0x10 Func
	return 0; // 0x12 Return
}


task_0_event_0(var_0_int, var_1_int, var_2_object, var_3_bool, var_4_string, var_5_bool, var_6_bool, var_7_string, var_8_string, var_9_string, var_10_string, var_11_int)
{
	var_12_string = ""; var_13_string = ""; // 0x13 PushV
	var_14_bool = var_2_object == 0; // 0x14 Not
	if(var_14_bool == 0) goto Label_23; // 0x15 JumpB
	return 2; // 0x16 Return
	
Label_23:
	var_15_int = 1; // 0x17 PushI
	var_16_int = 1; // 0x18 PushI
	Blit(var_12_string, var_15_int, var_16_int); // 0x19 Func
	var_17_bool = 0; // 0x1b PushV
	var_17_bool = 0; // 0x1c MovB
	var_18_int = 1; // 0x1d PushI
	var_19_bool = var_1_int > var_18_int; // 0x1e GT
	if(var_19_bool == 0) goto Label_35; // 0x1f JumpB
	var_20_bool = var_3_bool == 0; // 0x20 Not
	if(var_20_bool == 0) goto Label_35; // 0x21 JumpB
	var_17_bool = 1; // 0x22 MovB
	
Label_35:
	if(var_17_bool == 0) goto Label_44; // 0x23 JumpB
	var_21_string = "/"; // 0x24 PushS
	var_22_int = var_0_int + var_21_string; // 0x25 Add
	var_13_string = var_22_int + var_1_int; // 0x26 Add2
	var_23_string = "default"; // 0x27 PushS
	var_24_int = 2; // 0x28 PushI
	var_25_int = 35; // 0x29 PushI
	Print(var_23_string, var_24_int, var_25_int, var_13_string); // 0x2a Func
	
Label_44:
	var_26_bool = var_3_bool; // 0x2c PushT
	if(var_26_bool == 0) goto Label_53; // 0x2d JumpB
	var_27_string = "disabled"; // 0x2e PushS
	var_28_int = 1; // 0x2f PushI
	var_29_int = 1; // 0x30 PushI
	var_30_int = 50; // 0x31 PushI
	var_31_int = 50; // 0x32 PushI
	StretchBlit(var_27_string, var_28_int, var_29_int, var_30_int, var_31_int); // 0x33 Func
	
Label_53:
	return 2; // 0x35 Return
}


task_0_event_2(var_0_int, var_1_int, var_2_object, var_3_bool, var_4_string, var_5_bool, var_6_bool, var_7_string, var_8_string, var_9_string, var_10_string, var_11_int, var_12_int, var_13_int)
{
	var_14_int = 0; // 0x37 PushI
	SendMessageToParent(var_14_int); // 0x38 Func
	return 0; // 0x3a Return
}


task_0_event_6(var_0_int, var_1_int, var_2_object, var_3_bool, var_4_string, var_5_bool, var_6_bool, var_7_string, var_8_string, var_9_string, var_10_string, var_11_int, var_12_int, var_13_int)
{
	var_14_int = 1; // 0x3c PushI
	SendMessageToParent(var_14_int); // 0x3d Func
	return 0; // 0x3f Return
}


task_0_event_3(var_0_int, var_1_int, var_2_object, var_3_bool, var_4_string, var_5_bool, var_6_bool, var_7_string, var_8_string, var_9_string, var_10_string, var_11_int, var_12_int, var_13_int)
{
	return 0; // 0x41 Return
}


task_0_event_9(var_0_int, var_1_int, var_2_object, var_3_bool, var_4_string, var_5_bool, var_6_bool, var_7_string, var_8_string, var_9_string, var_10_string, var_11_int)
{
	var_12_int = 0; var_13_int = 0; // 0x54 PushV
	var_14_bool = var_5_bool == 0; // 0x55 Not
	if(var_14_bool == 0) goto Label_112; // 0x56 JumpB
	var_6_bool = 1; // 0x57 TMovB
	var_15_int = -20; // 0x58 PushI
	SendMessageToParent(var_15_int); // 0x59 Func
	var_13_int = 0; // 0x5b MovI
	
Label_92:
	var_16_bool = var_13_int < var_11_int; // 0x5c LT
	if(var_16_bool == 0) goto Label_111; // 0x5d JumpB
	var_17_int = -5; // 0x5e PushI
	var_18_string = ""; var_19_int = 0; // 0x5f PushV
	var_19_int = var_13_int; // 0x60 Mov
	func_329(var_18_string, var_19_int); // 0x61 NEW_2
	SendMessage(var_17_int, var_18_string); // 0x63 Func
	var_30_int = -5; // 0x65 PushI
	var_31_string = ""; var_32_int = 0; // 0x66 PushV
	var_32_int = var_13_int; // 0x67 Mov
	func_345(var_31_string, var_32_int); // 0x68 NEW_2
	SendMessage(var_30_int, var_31_string); // 0x6a Func
	var_43_int = 1; // 0x6c PushI
	var_13_int = var_13_int + var_43_int; // 0x6d Add2
	goto Label_92; // 0x6e Jump
	
Label_111:
	var_5_bool = 1; // 0x6f TMovB
	
Label_112:
	return 2; // 0x70 Return
}


task_0_event_200(var_0_int, var_1_int, var_2_object, var_3_bool, var_4_string, var_5_bool, var_6_bool, var_7_string, var_8_string, var_9_string, var_10_string, var_11_int, var_12_int, var_13_string, var_14_object)
{
	var_15_int = 0; var_16_int = 0; // 0xa7 PushV
	var_17_int = -1; // 0xa8 PushI
	var_18_bool = var_12_int == var_17_int; // 0xa9 Eq
	if(var_18_bool == 0) goto Label_186; // 0xaa JumpB
	var_19_bool = var_14_object != 0; // 0xab NullNeq
	if(var_19_bool == 0) goto Label_185; // 0xac JumpB
	var_20_int = 0; // 0xad PushI
	get(var_11_int, var_20_int); // 0xae ObjFunc
	var_21_int = 1; // 0xb0 PushI
	get(var_10_string, var_21_int); // 0xb1 ObjFunc
	var_22_int = 2; // 0xb3 PushI
	get(var_9_string, var_22_int); // 0xb4 ObjFunc
	var_23_int = 3; // 0xb6 PushI
	get(var_8_string, var_23_int); // 0xb7 ObjFunc
	
Label_185:
	return 2; // 0xb9 Return
	
Label_186:
	var_24_int = -19; // 0xba PushI
	var_25_bool = var_12_int == var_24_int; // 0xbb Eq
	if(var_25_bool == 0) goto Label_193; // 0xbc JumpB
	var_26_int = 0; // 0xbd PushI
	get(var_7_string, var_26_int); // 0xbe ObjFunc
	return 2; // 0xc0 Return
	
Label_193:
	var_27_int = -7; // 0xc1 PushI
	var_28_bool = var_12_int == var_27_int; // 0xc2 Eq
	if(var_28_bool == 0) goto Label_202; // 0xc3 JumpB
	var_29_bool = var_5_bool; // 0xc4 PushT
	if(var_29_bool == 0) goto Label_201; // 0xc5 JumpB
	func_66(); // 0xc7 NEW_2
	
Label_201:
	return 2; // 0xc9 Return
	
Label_202:
	var_44_int = -6; // 0xca PushI
	var_45_bool = var_12_int == var_44_int; // 0xcb Eq
	if(var_45_bool == 0) goto Label_207; // 0xcc JumpB
	var_5_bool = 1; // 0xcd TMovB
	return 2; // 0xce Return
	
Label_207:
	var_46_int = -13; // 0xcf PushI
	var_47_bool = var_12_int == var_46_int; // 0xd0 Eq
	if(var_47_bool == 0) goto Label_217; // 0xd1 JumpB
	var_48_bool = var_5_bool; // 0xd2 PushT
	if(var_48_bool == 0) goto Label_216; // 0xd3 JumpB
	var_49_string = ""; // 0xd4 PushV
	var_49_string = var_7_string; // 0xd5 MovT
	func_113(var_16_int, var_49_string); // 0xd6 NEW_2
	
Label_216:
	return 2; // 0xd8 Return
	
Label_217:
	var_77_int = -14; // 0xd9 PushI
	var_78_bool = var_12_int == var_77_int; // 0xda Eq
	if(var_78_bool == 0) goto Label_227; // 0xdb JumpB
	var_79_bool = var_5_bool; // 0xdc PushT
	if(var_79_bool == 0) goto Label_226; // 0xdd JumpB
	var_80_string = ""; // 0xde PushV
	var_80_string = var_8_string; // 0xdf MovT
	func_113(var_16_int, var_80_string); // 0xe0 NEW_2
	
Label_226:
	return 2; // 0xe2 Return
	
Label_227:
	var_81_int = -15; // 0xe3 PushI
	var_82_bool = var_12_int == var_81_int; // 0xe4 Eq
	if(var_82_bool == 0) goto Label_237; // 0xe5 JumpB
	var_83_bool = var_5_bool; // 0xe6 PushT
	if(var_83_bool == 0) goto Label_236; // 0xe7 JumpB
	var_84_string = ""; // 0xe8 PushV
	var_84_string = var_9_string; // 0xe9 MovT
	func_113(var_16_int, var_84_string); // 0xea NEW_2
	
Label_236:
	return 2; // 0xec Return
	
Label_237:
	var_85_int = -16; // 0xed PushI
	var_86_bool = var_12_int == var_85_int; // 0xee Eq
	if(var_86_bool == 0) goto Label_247; // 0xef JumpB
	var_87_bool = var_5_bool; // 0xf0 PushT
	if(var_87_bool == 0) goto Label_246; // 0xf1 JumpB
	var_88_string = ""; // 0xf2 PushV
	var_88_string = var_10_string; // 0xf3 MovT
	func_113(var_16_int, var_88_string); // 0xf4 NEW_2
	
Label_246:
	return 2; // 0xf6 Return
	
Label_247:
	var_89_int = -4; // 0xf7 PushI
	var_90_bool = var_12_int == var_89_int; // 0xf8 Eq
	if(var_90_bool == 0) goto Label_255; // 0xf9 JumpB
	var_5_bool = 1; // 0xfa TMovB
	func_66(); // 0xfc NEW_2
	return 2; // 0xfe Return
	
Label_255:
	var_91_int = -5; // 0xff PushI
	var_92_bool = var_12_int == var_91_int; // 0x100 Eq
	if(var_92_bool == 0) goto Label_264; // 0x101 JumpB
	var_93_bool = var_6_bool; // 0x102 PushT
	if(var_93_bool == 0) goto Label_262; // 0x103 JumpB
	var_6_bool = 0; // 0x104 TMovB
	goto Label_263; // 0x105 Jump
	
Label_263:
	return 2; // 0x107 Return
	
Label_262:
	var_5_bool = 0; // 0x106 TMovB
	
Label_264:
	var_94_int = 0; // 0x108 PushI
	var_95_bool = var_12_int < var_94_int; // 0x109 LT
	if(var_95_bool == 0) goto Label_268; // 0x10a JumpB
	return 2; // 0x10b Return
	
Label_268:
	var_96_int = 65536; // 0x10c PushI
	var_97_int = var_12_int & var_96_int; // 0x10d And
	if(var_97_int == 0) goto Label_278; // 0x10e JumpB
	var_98_int = 0; // 0x10f PushI
	get(var_0_int, var_98_int); // 0x110 ObjFunc
	var_99_int = 1; // 0x112 PushI
	get(var_99_int, var_99_int); // 0x113 ObjFunc
	return 2; // 0x115 Return
	
Label_278:
	var_100_int = 16384; // 0x116 PushI
	var_101_int = var_12_int & var_100_int; // 0x117 And
	if(var_101_int == 0) goto Label_285; // 0x118 JumpB
	var_102_string = "selected"; // 0x119 PushS
	SetBackground(var_102_string); // 0x11a Func
	goto Label_288; // 0x11c Jump
	
Label_288:
	var_103_int = 32768; // 0x120 PushI
	var_104_int = var_12_int & var_103_int; // 0x121 And
	if(var_104_int == 0) goto Label_297; // 0x122 JumpB
	var_2_object = 0; // 0x123 SetNullT
	var_105_int = -1; // 0x124 PushI
	var_106_string = ""; // 0x125 PushS
	SetTooltip(var_105_int, var_106_string); // 0x126 Func
	return 2; // 0x128 Return
	
Label_297:
	var_107_int = 131072; // 0x129 PushI
	var_108_int = var_12_int & var_107_int; // 0x12a And
	if(var_108_int == 0) goto Label_302; // 0x12b JumpB
	var_3_bool = 1; // 0x12c TMovB
	goto Label_303; // 0x12d Jump
	
Label_303:
	var_2_object = var_14_object; // 0x12f TMov
	var_109_object = var_2_object; // 0x130 PushT
	if(var_109_object == 0) goto Label_324; // 0x131 JumpB
	GetItemID(var_16_int); // 0x132 TObjFunc
	GetItemImage(var_16_int, var_13_string); // 0x134 Func
	LoadImage(var_13_string); // 0x136 Func
	var_110_bool = var_3_bool; // 0x138 PushT
	if(var_110_bool == 0) goto Label_319; // 0x139 JumpB
	var_111_int = -1; // 0x13a PushI
	var_112_string = ""; // 0x13b PushS
	SetTooltip(var_111_int, var_112_string); // 0x13c Func
	goto Label_323; // 0x13e Jump
	
Label_323:
	goto Label_328; // 0x143 Jump
	
Label_328:
	return 2; // 0x148 Return
	
Label_319:
	var_113_int = 4; // 0x13f PushI
	var_114_string = ""; // 0x140 PushS
	SetTooltip(var_113_int, var_114_string, var_113_int); // 0x141 Func
	
Label_324:
	var_115_int = -1; // 0x144 PushI
	var_116_string = ""; // 0x145 PushS
	SetTooltip(var_115_int, var_116_string); // 0x146 Func
	
Label_302:
	var_3_bool = 0; // 0x12e TMovB
	
Label_285:
	var_117_string = "default"; // 0x11d PushS
	SetBackground(var_117_string); // 0x11e Func
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


func_345(var_31_string, var_32_int)
{
	var_33_int = 1; // 0x15a PushI
	var_34_int = var_32_int + var_33_int; // 0x15b Add
	var_35_int = 10; // 0x15c PushI
	var_36_bool = var_34_int < var_35_int; // 0x15d LT
	if(var_36_bool == 0) goto Label_356; // 0x15e JumpB
	var_37_string = "r_slot0"; // 0x15f PushS
	var_38_int = 1; // 0x160 PushI
	var_39_int = var_32_int + var_38_int; // 0x161 Add
	var_31_string = var_37_string + var_39_int; // 0x162 Add2
	return 0; // 0x163 Return
	
Label_356:
	var_40_string = "r_slot"; // 0x164 PushS
	var_41_int = 1; // 0x165 PushI
	var_42_int = var_32_int + var_41_int; // 0x166 Add
	var_31_string = var_40_string + var_42_int; // 0x167 Add2
	return 0; // 0x168 Return
}


func_329(var_18_string, var_19_int)
{
	var_20_int = 1; // 0x14a PushI
	var_21_int = var_19_int + var_20_int; // 0x14b Add
	var_22_int = 10; // 0x14c PushI
	var_23_bool = var_21_int < var_22_int; // 0x14d LT
	if(var_23_bool == 0) goto Label_340; // 0x14e JumpB
	var_24_string = "l_slot0"; // 0x14f PushS
	var_25_int = 1; // 0x150 PushI
	var_26_int = var_19_int + var_25_int; // 0x151 Add
	var_18_string = var_24_string + var_26_int; // 0x152 Add2
	return 0; // 0x153 Return
	
Label_340:
	var_27_string = "l_slot"; // 0x154 PushS
	var_28_int = 1; // 0x155 PushI
	var_29_int = var_19_int + var_28_int; // 0x156 Add
	var_18_string = var_27_string + var_29_int; // 0x157 Add2
	return 0; // 0x158 Return
}


func_66()
{
	var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_int = 0; var_35_int = 0; var_36_int = 0; var_37_int = 0; // 0x42 PushV
	var_34_int = 0; // 0x43 MovI
	var_35_int = 0; // 0x44 MovI
	var_36_int = 0; // 0x45 MovI
	var_37_int = 0; // 0x46 MovI
	ClientToScreen(var_34_int, var_35_int); // 0x47 Func
	GetWindowSize(var_36_int, var_37_int); // 0x49 Func
	var_38_int = 2; // 0x4b PushI
	var_39_float = var_36_int / var_38_int; // 0x4c Div
	var_40_int = var_34_int + var_39_float; // 0x4d Add
	var_41_int = 2; // 0x4e PushI
	var_42_float = var_37_int / var_41_int; // 0x4f Div
	var_43_int = var_35_int + var_42_float; // 0x50 Add
	SetMousePos(var_40_int, var_43_int); // 0x51 Func
	return 8; // 0x53 Return
}


func_113(var_5_bool, var_49_string)
{
	var_50_int = 0; var_51_int = 0; var_52_int = 0; var_53_int = 0; var_54_int = 0; var_55_int = 0; var_56_int = 0; var_57_int = 0; var_58_int = 0; var_59_int = 0; var_60_int = 0; var_61_int = 0; // 0x71 PushV
	var_62_string = ""; // 0x72 PushS
	var_63_bool = var_49_string != var_62_string; // 0x73 Neq
	if(var_63_bool == 0) goto Label_166; // 0x74 JumpB
	var_56_int = 0; // 0x75 MovI
	var_57_int = 0; // 0x76 MovI
	var_58_int = 0; // 0x77 MovI
	var_59_int = 0; // 0x78 MovI
	ClientToScreen(var_56_int, var_57_int); // 0x79 Func
	GetWindowSize(var_58_int, var_59_int); // 0x7b Func
	var_60_int = 0; // 0x7d MovI
	var_61_int = 0; // 0x7e MovI
	GetCursorPos(var_60_int, var_61_int); // 0x7f Func
	var_64_bool = 0; // 0x81 PushV
	var_64_bool = 0; // 0x82 MovB
	var_65_bool = 0; // 0x83 PushV
	var_65_bool = 0; // 0x84 MovB
	var_66_bool = 0; // 0x85 PushV
	var_66_bool = 0; // 0x86 MovB
	var_67_bool = var_60_int > var_56_int; // 0x87 GT
	if(var_67_bool == 0) goto Label_140; // 0x88 JumpB
	var_68_bool = var_61_int > var_57_int; // 0x89 GT
	if(var_68_bool == 0) goto Label_140; // 0x8a JumpB
	var_66_bool = 1; // 0x8b MovB
	
Label_140:
	if(var_66_bool == 0) goto Label_145; // 0x8c JumpB
	var_69_int = var_56_int + var_58_int; // 0x8d Add
	var_70_bool = var_60_int < var_69_int; // 0x8e LT
	if(var_70_bool == 0) goto Label_145; // 0x8f JumpB
	var_65_bool = 1; // 0x90 MovB
	
Label_145:
	if(var_65_bool == 0) goto Label_150; // 0x91 JumpB
	var_71_int = var_57_int + var_59_int; // 0x92 Add
	var_72_bool = var_61_int < var_71_int; // 0x93 LT
	if(var_72_bool == 0) goto Label_150; // 0x94 JumpB
	var_64_bool = 1; // 0x95 MovB
	
Label_150:
	if(var_64_bool == 0) goto Label_163; // 0x96 JumpB
	var_5_bool = 0; // 0x97 TMovB
	var_73_string = "$parent"; // 0x98 PushS
	var_74_bool = var_49_string == var_73_string; // 0x99 Eq
	if(var_74_bool == 0) goto Label_159; // 0x9a JumpB
	var_75_int = -4; // 0x9b PushI
	SendMessageToParent(var_75_int); // 0x9c Func
	goto Label_162; // 0x9e Jump
	
Label_162:
	goto Label_166; // 0xa2 Jump
	
Label_166:
	return 12; // 0xa6 Return
	
Label_159:
	var_76_int = -4; // 0x9f PushI
	SendMessage(var_76_int, var_49_string); // 0xa0 Func
	
Label_163:
	func_66(); // 0xa4 NEW_2
}


