task_0_event_0(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int)
{
	var_7_int = 0; var_8_string = ""; var_9_int = 0; var_10_int = 0; var_11_int = 0; var_12_string = ""; var_13_int = 0; var_14_string = ""; var_15_int = 0; var_16_int = 0; var_17_int = 0; var_18_string = ""; // 0x60 PushV
	func_18(var_16_int, var_17_int, var_18_string); // 0x62 NEW_2
	var_13_int = var_0_int; // 0x64 MovT
	var_75_string = ""; // 0x65 PushV
	func_354(var_75_string); // 0x66 NEW_2
	var_14_string = var_75_string; // 0x67 Mov
	var_76_string = "default"; // 0x69 PushS
	var_77_int = 0; // 0x6a PushI
	var_78_int = 5; // 0x6b PushI
	var_79_int = var_5_int - var_78_int; // 0x6c Sub
	var_80_float = 0.804; // 0x6d PushF
	var_81_float = 0.804; // 0x6e PushF
	var_82_float = 0.804; // 0x6f PushF
	PrintInWidth(var_81_float, var_76_string, var_77_int, var_13_int, var_79_int, var_14_string, var_80_float, var_81_float, var_82_float); // 0x70 Func
	var_13_int = var_13_int + var_2_int; // 0x72 Add2
	var_83_int = 10; // 0x73 PushI
	var_13_int = var_13_int + var_83_int; // 0x74 Add2
	GetAnswerCount(var_15_int); // 0x75 Func
	var_17_int = 0; // 0x77 MovI
	
Label_120:
	var_84_bool = var_17_int < var_15_int; // 0x78 LT
	if(var_84_bool == 0) goto Label_158; // 0x79 JumpB
	var_85_string = ""; var_86_int = 0; // 0x7a PushV
	var_86_int = var_17_int; // 0x7b Mov
	func_363(var_85_string, var_86_int); // 0x7c NEW_2
	var_18_string = var_85_string; // 0x7d Mov
	var_87_bool = var_17_int == var_3_int; // 0x7f Eq
	if(var_87_bool == 0) goto Label_141; // 0x80 JumpB
	var_88_string = "default"; // 0x81 PushS
	var_89_int = 15; // 0x82 PushI
	var_90_int = 15; // 0x83 PushI
	var_91_int = var_5_int - var_90_int; // 0x84 Sub
	var_92_int = 5; // 0x85 PushI
	var_93_int = var_91_int - var_92_int; // 0x86 Sub
	var_94_float = 1.0; // 0x87 PushF
	var_95_float = 1.0; // 0x88 PushF
	var_96_float = 1.0; // 0x89 PushF
	PrintInWidth(var_16_int, var_88_string, var_89_int, var_13_int, var_93_int, var_18_string, var_94_float, var_95_float, var_96_float); // 0x8a Func
	goto Label_152; // 0x8c Jump
	
Label_152:
	var_13_int = var_13_int + var_16_int; // 0x98 Add2
	var_97_int = 5; // 0x99 PushI
	var_13_int = var_13_int + var_97_int; // 0x9a Add2
	var_98_int = 1; // 0x9b PushI
	var_17_int = var_17_int + var_98_int; // 0x9c Add2
	goto Label_120; // 0x9d Jump
	
Label_141:
	var_99_string = "default"; // 0x8d PushS
	var_100_int = 15; // 0x8e PushI
	var_101_int = 15; // 0x8f PushI
	var_102_int = var_5_int - var_101_int; // 0x90 Sub
	var_103_int = 5; // 0x91 PushI
	var_104_int = var_102_int - var_103_int; // 0x92 Sub
	var_105_float = 0.698; // 0x93 PushF
	var_106_float = 0.659; // 0x94 PushF
	var_107_float = 0.647; // 0x95 PushF
	PrintInWidth(var_16_int, var_99_string, var_100_int, var_13_int, var_104_int, var_18_string, var_105_float, var_106_float, var_107_float); // 0x96 Func
	
Label_158:
	return 12; // 0x9e Return
}


task_0_event_8(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_int)
{
	var_9_int = 0; var_10_int = 0; var_11_int = 0; var_12_int = 0; var_13_string = ""; var_14_int = 0; var_15_int = 0; var_16_int = 0; var_17_int = 0; var_18_int = 0; var_19_string = ""; var_20_int = 0; // 0x9f PushV
	var_21_int = var_0_int + var_2_int; // 0xa0 Add
	var_22_int = 10; // 0xa1 PushI
	var_15_int = var_21_int + var_22_int; // 0xa2 Add2
	GetAnswerCount(var_16_int); // 0xa3 Func
	var_3_int = -1; // 0xa5 TMovI
	var_18_int = 0; // 0xa6 MovI
	
Label_167:
	var_23_bool = var_18_int < var_16_int; // 0xa7 LT
	if(var_23_bool == 0) goto Label_203; // 0xa8 JumpB
	var_24_string = ""; var_25_int = 0; // 0xa9 PushV
	var_25_int = var_18_int; // 0xaa Mov
	func_363(var_24_string, var_25_int); // 0xab NEW_2
	var_19_string = var_24_string; // 0xac Mov
	var_30_int = 0; var_31_int = 0; // 0xae PushV
	var_31_int = var_18_int; // 0xaf Mov
	func_372(var_30_int, var_31_int); // 0xb0 NEW_2
	var_20_int = var_30_int; // 0xb1 Mov
	var_36_string = "default"; // 0xb3 PushS
	var_37_int = 15; // 0xb4 PushI
	var_38_int = var_5_int - var_37_int; // 0xb5 Sub
	var_39_int = 5; // 0xb6 PushI
	var_40_int = var_38_int - var_39_int; // 0xb7 Sub
	GetTextHeightInWidth(var_17_int, var_36_string, var_40_int, var_19_string); // 0xb8 Func
	var_41_bool = 0; // 0xba PushV
	var_41_bool = 0; // 0xbb MovB
	var_42_bool = var_8_int > var_15_int; // 0xbc GT
	if(var_42_bool == 0) goto Label_194; // 0xbd JumpB
	var_43_int = var_15_int + var_17_int; // 0xbe Add
	var_44_bool = var_8_int < var_43_int; // 0xbf LT
	if(var_44_bool == 0) goto Label_194; // 0xc0 JumpB
	var_41_bool = 1; // 0xc1 MovB
	
Label_194:
	if(var_41_bool == 0) goto Label_197; // 0xc2 JumpB
	var_3_int = var_18_int; // 0xc3 TMov
	var_4_int = var_20_int; // 0xc4 TMov
	
Label_197:
	var_15_int = var_15_int + var_17_int; // 0xc5 Add2
	var_45_int = 5; // 0xc6 PushI
	var_15_int = var_15_int + var_45_int; // 0xc7 Add2
	var_46_int = 1; // 0xc8 PushI
	var_18_int = var_18_int + var_46_int; // 0xc9 Add2
	goto Label_167; // 0xca Jump
	
Label_203:
	return 12; // 0xcb Return
}


task_0_event_3(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_int)
{
	func_204(var_7_int, var_8_int); // 0xf9 NEW_2
	return 0; // 0xfb Return
}


task_0_event_15(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_int, var_9_float)
{
	var_10_int = 0; var_11_int = 0; var_12_int = 0; var_13_int = 0; // 0xfc PushV
	var_14_string = "default"; // 0xfd PushS
	GetFontHeight(var_12_int, var_14_string); // 0xfe Func
	var_13_int = var_9_float * var_12_int; // 0x100 Mult2
	var_0_int = var_0_int + var_13_int; // 0x101 Add2
	func_18(var_11_int, var_12_int, var_13_int); // 0x103 NEW_2
	return 4; // 0x105 Return
}


task_0_event_200(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_string, var_9_object)
{
	var_10_string = "p_scrollbar"; // 0x107 PushS
	var_11_bool = var_8_string == var_10_string; // 0x108 Eq
	if(var_11_bool == 0) goto Label_273; // 0x109 JumpB
	var_12_int = -var_1_int; // 0x10a Neg
	var_13_float = var_12_int * var_7_int; // 0x10b Mult
	var_14_int = 100; // 0x10c PushI
	var_0_int = var_13_float / var_13_float; // 0x10d Div2
	func_18(var_7_int, var_8_string, var_9_object); // 0x10f NEW_2
	
Label_273:
	return 0; // 0x111 Return
}


task_0_event_101(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int)
{
	var_8_int = 267; // 0x136 PushI
	var_9_bool = var_7_int == var_8_int; // 0x137 Eq
	if(var_9_bool == 0) goto Label_319; // 0x138 JumpB
	HideCursor(); // 0x139 Func
	func_274(var_7_int); // 0x13c NEW_2
	goto Label_327; // 0x13e Jump
	
Label_327:
	return 0; // 0x147 Return
	
Label_319:
	var_19_int = 268; // 0x13f PushI
	var_20_bool = var_7_int == var_19_int; // 0x140 Eq
	if(var_20_bool == 0) goto Label_327; // 0x141 JumpB
	HideCursor(); // 0x142 Func
	func_292(var_7_int); // 0x145 NEW_2
}


task_0_event_102(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int)
{
	var_8_int = 272; // 0x149 PushI
	var_9_bool = var_7_int == var_8_int; // 0x14a Eq
	if(var_9_bool == 0) goto Label_338; // 0x14b JumpB
	HideCursor(); // 0x14c Func
	func_274(var_7_int); // 0x14f NEW_2
	goto Label_353; // 0x151 Jump
	
Label_353:
	return 0; // 0x161 Return
	
Label_338:
	var_19_int = 274; // 0x152 PushI
	var_20_bool = var_7_int == var_19_int; // 0x153 Eq
	if(var_20_bool == 0) goto Label_347; // 0x154 JumpB
	HideCursor(); // 0x155 Func
	func_292(var_7_int); // 0x158 NEW_2
	goto Label_353; // 0x15a Jump
	
Label_347:
	var_29_int = 256; // 0x15b PushI
	var_30_bool = var_7_int == var_29_int; // 0x15c Eq
	if(var_30_bool == 0) goto Label_353; // 0x15d JumpB
	func_204(var_6_int, var_7_int); // 0x15f NEW_2
}


main(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int)
{
	var_3_int = -1; // 0x0 TMovI
	var_0_int = 0; // 0x1 TMovI
	GetWindowSize(var_2_int, var_1_int); // 0x2 Func
	var_7_bool = 1; // 0x4 PushB
	EnableClipping(var_7_bool); // 0x5 Func
	CaptureKeyboard(); // 0x7 Func
	var_8_bool = 1; // 0x9 PushB
	SetOwnerDraw(var_8_bool); // 0xa Func
	func_18(var_4_int, var_5_int, var_6_int); // 0xd NEW_2
	ProcessEvents(); // 0xf Func
	return 0; // 0x11 Return
}


func_354(var_24_string)
{
	var_25_string = ""; var_26_string = ""; // 0x162 PushV
	GetReplic(var_26_string); // 0x163 Func
	var_27_string = ""; // 0x165 PushS
	var_28_bool = var_26_string == var_27_string; // 0x166 Eq
	if(var_28_bool == 0) goto Label_361; // 0x167 JumpB
	var_26_string = "Error: missing replic"; // 0x168 MovS
	
Label_361:
	var_24_string = var_26_string; // 0x169 Mov
	return 2; // 0x16a Return
}


func_292(var_3_int)
{
	var_21_int = 0; var_22_int = 0; // 0x124 PushV
	GetAnswerCount(var_22_int); // 0x125 Func
	var_23_int = -1; // 0x127 PushI
	var_24_bool = var_3_int == var_23_int; // 0x128 Eq
	if(var_24_bool == 0) goto Label_300; // 0x129 JumpB
	var_3_int = 0; // 0x12a TMovI
	goto Label_308; // 0x12b Jump
	
Label_308:
	return 2; // 0x134 Return
	
Label_300:
	var_25_int = 1; // 0x12c PushI
	var_26_int = var_22_int - var_25_int; // 0x12d Sub
	var_27_bool = var_3_int < var_26_int; // 0x12e LT
	if(var_27_bool == 0) goto Label_307; // 0x12f JumpB
	var_28_int = 1; // 0x130 PushI
	var_3_int = var_3_int + var_28_int; // 0x131 Add2
	goto Label_308; // 0x132 Jump
	
Label_307:
	var_3_int = 0; // 0x133 TMovI
}


func_363(var_37_string, var_38_int)
{
	var_39_string = ""; var_40_string = ""; // 0x16b PushV
	GetAnswer(var_38_int, var_40_string); // 0x16c Func
	var_41_string = ""; // 0x16e PushS
	var_42_bool = var_40_string == var_41_string; // 0x16f Eq
	if(var_42_bool == 0) goto Label_370; // 0x170 JumpB
	var_40_string = "ERROR: missing answer"; // 0x171 MovS
	
Label_370:
	var_37_string = var_40_string; // 0x172 Mov
	return 2; // 0x173 Return
}


func_204(var_0_int, var_3_int)
{
	var_31_string = ""; var_32_int = 0; var_33_int = 0; var_34_string = ""; var_35_object = Obj(); var_36_string = ""; var_37_int = 0; var_38_int = 0; var_39_string = ""; var_40_object = Obj(); // 0xcc PushV
	var_41_int = -1; // 0xcd PushI
	var_42_bool = var_3_int == var_41_int; // 0xce Eq
	if(var_42_bool == 0) goto Label_209; // 0xcf JumpB
	return 10; // 0xd0 Return
	
Label_209:
	var_43_string = ""; // 0xd1 PushV
	func_354(var_43_string); // 0xd2 NEW_2
	var_36_string = var_43_string; // 0xd3 Mov
	var_48_string = ""; var_49_int = 0; // 0xd5 PushV
	var_49_int = var_3_int; // 0xd6 MovT
	func_363(var_48_string, var_49_int); // 0xd7 NEW_2
	var_39_string = var_48_string; // 0xd8 Mov
	var_54_int = 0; var_55_int = 0; // 0xda PushV
	var_55_int = var_3_int; // 0xdb MovT
	func_372(var_54_int, var_55_int); // 0xdc NEW_2
	var_37_int = var_54_int; // 0xdd Mov
	var_60_int = 0; var_61_int = 0; // 0xdf PushV
	var_61_int = var_3_int; // 0xe0 MovT
	func_377(var_60_int, var_61_int); // 0xe1 NEW_2
	var_38_int = var_60_int; // 0xe2 Mov
	SelectAnswer(var_37_int, var_38_int); // 0xe4 Func
	CreateStringVector(var_40_object); // 0xe6 Func
	add(var_36_string); // 0xe8 ObjFunc
	add(var_39_string); // 0xea ObjFunc
	var_3_int = -1; // 0xec TMovI
	var_68_int = 0; // 0xed PushI
	var_69_string = "history_text"; // 0xee PushS
	SendMessage(var_68_int, var_69_string, var_40_object); // 0xef Func
	var_0_int = 0; // 0xf1 TMovI
	func_18(var_38_int, var_39_string, var_40_object); // 0xf3 NEW_2
	return 10; // 0xf5 Return
}


func_18(var_0_int, var_1_int, var_6_int)
{
	var_9_int = 0; // 0x12 PushV
	func_52(var_6_int, var_9_int); // 0x13 NEW_2
	var_1_int = var_9_int; // 0x14 TMov
	var_1_int = var_1_int - var_6_int; // 0x16 Sub2
	var_50_int = 0; // 0x17 PushI
	var_51_bool = var_1_int < var_50_int; // 0x18 LT
	if(var_51_bool == 0) goto Label_27; // 0x19 JumpB
	var_1_int = 0; // 0x1a TMovI
	
Label_27:
	var_52_int = -var_0_int; // 0x1b Neg
	var_53_bool = var_52_int > var_1_int; // 0x1c GT
	if(var_53_bool == 0) goto Label_32; // 0x1d JumpB
	var_0_int = -var_1_int; // 0x1e Neg2
	goto Label_36; // 0x1f Jump
	
Label_36:
	var_54_int = 0; // 0x24 PushI
	var_55_bool = var_1_int == var_54_int; // 0x25 Eq
	if(var_55_bool == 0) goto Label_44; // 0x26 JumpB
	var_56_int = 16384; // 0x27 PushI
	var_57_string = "p_scrollbar"; // 0x28 PushS
	SendMessage(var_56_int, var_57_string); // 0x29 Func
	goto Label_51; // 0x2b Jump
	
Label_51:
	return 0; // 0x33 Return
	
Label_44:
	var_58_int = -var_0_int; // 0x2c Neg
	var_59_int = 100; // 0x2d PushI
	var_60_float = var_58_int * var_59_int; // 0x2e Mult
	var_61_float = var_60_float / var_1_int; // 0x2f Div
	var_62_string = "p_scrollbar"; // 0x30 PushS
	SendMessage(var_61_float, var_62_string); // 0x31 Func
	
Label_32:
	var_63_int = 0; // 0x20 PushI
	var_64_bool = var_0_int > var_63_int; // 0x21 GT
	if(var_64_bool == 0) goto Label_36; // 0x22 JumpB
	var_0_int = 0; // 0x23 TMovI
}


func_274(var_3_int)
{
	var_10_int = 0; var_11_int = 0; // 0x112 PushV
	GetAnswerCount(var_11_int); // 0x113 Func
	var_12_int = -1; // 0x115 PushI
	var_13_bool = var_3_int == var_12_int; // 0x116 Eq
	if(var_13_bool == 0) goto Label_283; // 0x117 JumpB
	var_14_int = 1; // 0x118 PushI
	var_3_int = var_11_int - var_14_int; // 0x119 Sub2
	goto Label_291; // 0x11a Jump
	
Label_291:
	return 2; // 0x123 Return
	
Label_283:
	var_15_int = 0; // 0x11b PushI
	var_16_bool = var_3_int > var_15_int; // 0x11c GT
	if(var_16_bool == 0) goto Label_289; // 0x11d JumpB
	var_17_int = -1; // 0x11e PushI
	var_3_int = var_3_int + var_17_int; // 0x11f Add2
	goto Label_291; // 0x120 Jump
	
Label_289:
	var_18_int = 1; // 0x121 PushI
	var_3_int = var_11_int - var_18_int; // 0x122 Sub2
}


func_372(var_54_int, var_55_int)
{
	var_56_int = 0; var_57_string = ""; var_58_int = 0; var_59_string = ""; // 0x174 PushV
	GetAnswer(var_55_int, var_59_string, var_58_int); // 0x175 Func
	var_54_int = var_58_int; // 0x177 Mov
	return 4; // 0x178 Return
}


func_52(var_5_int, var_9_int)
{
	var_10_int = 0; var_11_int = 0; var_12_string = ""; var_13_int = 0; var_14_int = 0; var_15_int = 0; var_16_string = ""; var_17_int = 0; var_18_int = 0; var_19_string = ""; var_20_int = 0; var_21_int = 0; var_22_int = 0; var_23_string = ""; // 0x34 PushV
	var_24_string = ""; // 0x35 PushV
	func_354(var_24_string); // 0x36 NEW_2
	var_19_string = var_24_string; // 0x37 Mov
	var_29_string = "default"; // 0x39 PushS
	var_30_int = 5; // 0x3a PushI
	var_31_int = var_5_int - var_30_int; // 0x3b Sub
	GetTextHeightInWidth(var_17_int, var_29_string, var_31_int, var_19_string); // 0x3c Func
	var_18_int = var_17_int; // 0x3e Mov
	var_32_int = 10; // 0x3f PushI
	var_18_int = var_18_int + var_32_int; // 0x40 Add2
	GetAnswerCount(var_20_int); // 0x41 Func
	var_22_int = 0; // 0x43 MovI
	
Label_68:
	var_33_bool = var_22_int < var_20_int; // 0x44 LT
	if(var_33_bool == 0) goto Label_94; // 0x45 JumpB
	var_34_int = 0; // 0x46 PushI
	var_35_bool = var_22_int == var_34_int; // 0x47 Eq
	if(var_35_bool == 0) goto Label_76; // 0x48 JumpB
	var_36_int = 10; // 0x49 PushI
	var_18_int = var_18_int + var_36_int; // 0x4a Add2
	goto Label_78; // 0x4b Jump
	
Label_78:
	var_37_string = ""; var_38_int = 0; // 0x4e PushV
	var_38_int = var_22_int; // 0x4f Mov
	func_363(var_37_string, var_38_int); // 0x50 NEW_2
	var_23_string = var_37_string; // 0x51 Mov
	var_43_string = "default"; // 0x53 PushS
	var_44_int = 15; // 0x54 PushI
	var_45_int = var_5_int - var_44_int; // 0x55 Sub
	var_46_int = 5; // 0x56 PushI
	var_47_int = var_45_int - var_46_int; // 0x57 Sub
	GetTextHeightInWidth(var_17_int, var_43_string, var_47_int, var_23_string); // 0x58 Func
	var_18_int = var_18_int + var_17_int; // 0x5a Add2
	var_48_int = 1; // 0x5b PushI
	var_22_int = var_22_int + var_48_int; // 0x5c Add2
	goto Label_68; // 0x5d Jump
	
Label_76:
	var_49_int = 5; // 0x4c PushI
	var_18_int = var_18_int + var_49_int; // 0x4d Add2
	
Label_94:
	var_9_int = var_18_int; // 0x5e Mov
	return 14; // 0x5f Return
}


func_377(var_60_int, var_61_int)
{
	var_62_int = 0; var_63_int = 0; var_64_string = ""; var_65_int = 0; var_66_int = 0; var_67_string = ""; // 0x179 PushV
	GetAnswer(var_61_int, var_67_string, var_65_int, var_66_int); // 0x17a Func
	var_60_int = var_66_int; // 0x17c Mov
	return 6; // 0x17d Return
}


