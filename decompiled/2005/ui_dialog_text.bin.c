task_0_event_0(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int)
{
	var_7_int = 0; var_8_string = ""; var_9_int = 0; var_10_int = 0; var_11_int = 0; var_12_string = ""; var_13_int = 0; var_14_string = ""; var_15_int = 0; var_16_int = 0; var_17_int = 0; var_18_string = ""; // 0x5e PushV
	func_16(var_16_int, var_17_int, var_18_string); // 0x60 NEW_2
	var_13_int = var_0_int; // 0x62 MovT
	var_75_string = ""; // 0x63 PushV
	func_267(var_75_string); // 0x64 NEW_2
	var_14_string = var_75_string; // 0x65 Mov
	var_76_string = "default"; // 0x67 PushS
	var_77_int = 0; // 0x68 PushI
	var_78_int = 5; // 0x69 PushI
	var_79_int = var_5_int - var_78_int; // 0x6a Sub
	var_80_float = 0.804; // 0x6b PushF
	var_81_float = 0.804; // 0x6c PushF
	var_82_float = 0.804; // 0x6d PushF
	PrintInWidth(var_81_float, var_76_string, var_77_int, var_13_int, var_79_int, var_14_string, var_80_float, var_81_float, var_82_float); // 0x6e Func
	var_13_int = var_13_int + var_2_int; // 0x70 Add2
	var_83_int = 10; // 0x71 PushI
	var_13_int = var_13_int + var_83_int; // 0x72 Add2
	GetAnswerCount(var_15_int); // 0x73 Func
	var_17_int = 0; // 0x75 MovI
	
Label_118:
	var_84_bool = var_17_int < var_15_int; // 0x76 LT
	if(var_84_bool == 0) goto Label_156; // 0x77 JumpB
	var_85_string = ""; var_86_int = 0; // 0x78 PushV
	var_86_int = var_17_int; // 0x79 Mov
	func_276(var_85_string, var_86_int); // 0x7a NEW_2
	var_18_string = var_85_string; // 0x7b Mov
	var_87_bool = var_17_int == var_3_int; // 0x7d Eq
	if(var_87_bool == 0) goto Label_139; // 0x7e JumpB
	var_88_string = "default"; // 0x7f PushS
	var_89_int = 15; // 0x80 PushI
	var_90_int = 15; // 0x81 PushI
	var_91_int = var_5_int - var_90_int; // 0x82 Sub
	var_92_int = 5; // 0x83 PushI
	var_93_int = var_91_int - var_92_int; // 0x84 Sub
	var_94_float = 1.0; // 0x85 PushF
	var_95_float = 1.0; // 0x86 PushF
	var_96_float = 1.0; // 0x87 PushF
	PrintInWidth(var_16_int, var_88_string, var_89_int, var_13_int, var_93_int, var_18_string, var_94_float, var_95_float, var_96_float); // 0x88 Func
	goto Label_150; // 0x8a Jump
	
Label_150:
	var_13_int = var_13_int + var_16_int; // 0x96 Add2
	var_97_int = 5; // 0x97 PushI
	var_13_int = var_13_int + var_97_int; // 0x98 Add2
	var_98_int = 1; // 0x99 PushI
	var_17_int = var_17_int + var_98_int; // 0x9a Add2
	goto Label_118; // 0x9b Jump
	
Label_139:
	var_99_string = "default"; // 0x8b PushS
	var_100_int = 15; // 0x8c PushI
	var_101_int = 15; // 0x8d PushI
	var_102_int = var_5_int - var_101_int; // 0x8e Sub
	var_103_int = 5; // 0x8f PushI
	var_104_int = var_102_int - var_103_int; // 0x90 Sub
	var_105_float = 0.698; // 0x91 PushF
	var_106_float = 0.659; // 0x92 PushF
	var_107_float = 0.647; // 0x93 PushF
	PrintInWidth(var_16_int, var_99_string, var_100_int, var_13_int, var_104_int, var_18_string, var_105_float, var_106_float, var_107_float); // 0x94 Func
	
Label_156:
	return 12; // 0x9c Return
}


task_0_event_8(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_int)
{
	var_9_int = 0; var_10_int = 0; var_11_int = 0; var_12_int = 0; var_13_string = ""; var_14_int = 0; var_15_int = 0; var_16_int = 0; var_17_int = 0; var_18_int = 0; var_19_string = ""; var_20_int = 0; // 0x9d PushV
	var_21_int = var_0_int + var_2_int; // 0x9e Add
	var_22_int = 10; // 0x9f PushI
	var_15_int = var_21_int + var_22_int; // 0xa0 Add2
	GetAnswerCount(var_16_int); // 0xa1 Func
	var_3_int = -1; // 0xa3 TMovI
	var_18_int = 0; // 0xa4 MovI
	
Label_165:
	var_23_bool = var_18_int < var_16_int; // 0xa5 LT
	if(var_23_bool == 0) goto Label_201; // 0xa6 JumpB
	var_24_string = ""; var_25_int = 0; // 0xa7 PushV
	var_25_int = var_18_int; // 0xa8 Mov
	func_276(var_24_string, var_25_int); // 0xa9 NEW_2
	var_19_string = var_24_string; // 0xaa Mov
	var_30_int = 0; var_31_int = 0; // 0xac PushV
	var_31_int = var_18_int; // 0xad Mov
	func_285(var_30_int, var_31_int); // 0xae NEW_2
	var_20_int = var_30_int; // 0xaf Mov
	var_36_string = "default"; // 0xb1 PushS
	var_37_int = 15; // 0xb2 PushI
	var_38_int = var_5_int - var_37_int; // 0xb3 Sub
	var_39_int = 5; // 0xb4 PushI
	var_40_int = var_38_int - var_39_int; // 0xb5 Sub
	GetTextHeightInWidth(var_17_int, var_36_string, var_40_int, var_19_string); // 0xb6 Func
	var_41_bool = 0; // 0xb8 PushV
	var_41_bool = 0; // 0xb9 MovB
	var_42_bool = var_8_int > var_15_int; // 0xba GT
	if(var_42_bool == 0) goto Label_192; // 0xbb JumpB
	var_43_int = var_15_int + var_17_int; // 0xbc Add
	var_44_bool = var_8_int < var_43_int; // 0xbd LT
	if(var_44_bool == 0) goto Label_192; // 0xbe JumpB
	var_41_bool = 1; // 0xbf MovB
	
Label_192:
	if(var_41_bool == 0) goto Label_195; // 0xc0 JumpB
	var_3_int = var_18_int; // 0xc1 TMov
	var_4_int = var_20_int; // 0xc2 TMov
	
Label_195:
	var_15_int = var_15_int + var_17_int; // 0xc3 Add2
	var_45_int = 5; // 0xc4 PushI
	var_15_int = var_15_int + var_45_int; // 0xc5 Add2
	var_46_int = 1; // 0xc6 PushI
	var_18_int = var_18_int + var_46_int; // 0xc7 Add2
	goto Label_165; // 0xc8 Jump
	
Label_201:
	return 12; // 0xc9 Return
}


task_0_event_3(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_int)
{
	var_9_string = ""; var_10_int = 0; var_11_int = 0; var_12_string = ""; var_13_object = Obj(); var_14_string = ""; var_15_int = 0; var_16_int = 0; var_17_string = ""; var_18_object = Obj(); // 0xca PushV
	var_19_int = -1; // 0xcb PushI
	var_20_bool = var_3_int == var_19_int; // 0xcc Eq
	if(var_20_bool == 0) goto Label_207; // 0xcd JumpB
	return 10; // 0xce Return
	
Label_207:
	var_21_string = ""; // 0xcf PushV
	func_267(var_21_string); // 0xd0 NEW_2
	var_14_string = var_21_string; // 0xd1 Mov
	var_26_string = ""; var_27_int = 0; // 0xd3 PushV
	var_27_int = var_3_int; // 0xd4 MovT
	func_276(var_26_string, var_27_int); // 0xd5 NEW_2
	var_17_string = var_26_string; // 0xd6 Mov
	var_32_int = 0; var_33_int = 0; // 0xd8 PushV
	var_33_int = var_3_int; // 0xd9 MovT
	func_285(var_32_int, var_33_int); // 0xda NEW_2
	var_15_int = var_32_int; // 0xdb Mov
	var_38_int = 0; var_39_int = 0; // 0xdd PushV
	var_39_int = var_3_int; // 0xde MovT
	func_290(var_38_int, var_39_int); // 0xdf NEW_2
	var_16_int = var_38_int; // 0xe0 Mov
	SelectAnswer(var_15_int, var_16_int); // 0xe2 Func
	CreateStringVector(var_18_object); // 0xe4 Func
	add(var_14_string); // 0xe6 ObjFunc
	add(var_17_string); // 0xe8 ObjFunc
	var_3_int = -1; // 0xea TMovI
	var_46_int = 0; // 0xeb PushI
	var_47_string = "history_text"; // 0xec PushS
	SendMessage(var_46_int, var_47_string, var_18_object); // 0xed Func
	var_0_int = 0; // 0xef TMovI
	func_16(var_16_int, var_17_string, var_18_object); // 0xf1 NEW_2
	return 10; // 0xf3 Return
}


task_0_event_15(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_int, var_9_float)
{
	var_10_int = 0; var_11_int = 0; var_12_int = 0; var_13_int = 0; // 0xf5 PushV
	var_14_string = "default"; // 0xf6 PushS
	GetFontHeight(var_12_int, var_14_string); // 0xf7 Func
	var_13_int = var_9_float * var_12_int; // 0xf9 Mult2
	var_0_int = var_0_int + var_13_int; // 0xfa Add2
	func_16(var_11_int, var_12_int, var_13_int); // 0xfc NEW_2
	return 4; // 0xfe Return
}


task_0_event_200(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_string, var_9_object)
{
	var_10_string = "p_scrollbar"; // 0x100 PushS
	var_11_bool = var_8_string == var_10_string; // 0x101 Eq
	if(var_11_bool == 0) goto Label_266; // 0x102 JumpB
	var_12_int = -var_1_int; // 0x103 Neg
	var_13_float = var_12_int * var_7_int; // 0x104 Mult
	var_14_int = 100; // 0x105 PushI
	var_0_int = var_13_float / var_13_float; // 0x106 Div2
	func_16(var_7_int, var_8_string, var_9_object); // 0x108 NEW_2
	
Label_266:
	return 0; // 0x10a Return
}


main(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int)
{
	var_3_int = -1; // 0x0 TMovI
	var_0_int = 0; // 0x1 TMovI
	GetWindowSize(var_2_int, var_1_int); // 0x2 Func
	var_7_bool = 1; // 0x4 PushB
	EnableClipping(var_7_bool); // 0x5 Func
	var_8_bool = 1; // 0x7 PushB
	SetOwnerDraw(var_8_bool); // 0x8 Func
	func_16(var_4_int, var_5_int, var_6_int); // 0xb NEW_2
	ProcessEvents(); // 0xd Func
	return 0; // 0xf Return
}


func_290(var_38_int, var_39_int)
{
	var_40_int = 0; var_41_int = 0; var_42_string = ""; var_43_int = 0; var_44_int = 0; var_45_string = ""; // 0x122 PushV
	GetAnswer(var_39_int, var_45_string, var_43_int, var_44_int); // 0x123 Func
	var_38_int = var_44_int; // 0x125 Mov
	return 6; // 0x126 Return
}


func_267(var_24_string)
{
	var_25_string = ""; var_26_string = ""; // 0x10b PushV
	GetReplic(var_26_string); // 0x10c Func
	var_27_string = ""; // 0x10e PushS
	var_28_bool = var_26_string == var_27_string; // 0x10f Eq
	if(var_28_bool == 0) goto Label_274; // 0x110 JumpB
	var_26_string = "Error: missing replic"; // 0x111 MovS
	
Label_274:
	var_24_string = var_26_string; // 0x112 Mov
	return 2; // 0x113 Return
}


func_16(var_0_int, var_1_int, var_6_int)
{
	var_9_int = 0; // 0x10 PushV
	func_50(var_6_int, var_9_int); // 0x11 NEW_2
	var_1_int = var_9_int; // 0x12 TMov
	var_1_int = var_1_int - var_6_int; // 0x14 Sub2
	var_50_int = 0; // 0x15 PushI
	var_51_bool = var_1_int < var_50_int; // 0x16 LT
	if(var_51_bool == 0) goto Label_25; // 0x17 JumpB
	var_1_int = 0; // 0x18 TMovI
	
Label_25:
	var_52_int = -var_0_int; // 0x19 Neg
	var_53_bool = var_52_int > var_1_int; // 0x1a GT
	if(var_53_bool == 0) goto Label_30; // 0x1b JumpB
	var_0_int = -var_1_int; // 0x1c Neg2
	goto Label_34; // 0x1d Jump
	
Label_34:
	var_54_int = 0; // 0x22 PushI
	var_55_bool = var_1_int == var_54_int; // 0x23 Eq
	if(var_55_bool == 0) goto Label_42; // 0x24 JumpB
	var_56_int = 16384; // 0x25 PushI
	var_57_string = "p_scrollbar"; // 0x26 PushS
	SendMessage(var_56_int, var_57_string); // 0x27 Func
	goto Label_49; // 0x29 Jump
	
Label_49:
	return 0; // 0x31 Return
	
Label_42:
	var_58_int = -var_0_int; // 0x2a Neg
	var_59_int = 100; // 0x2b PushI
	var_60_float = var_58_int * var_59_int; // 0x2c Mult
	var_61_float = var_60_float / var_1_int; // 0x2d Div
	var_62_string = "p_scrollbar"; // 0x2e PushS
	SendMessage(var_61_float, var_62_string); // 0x2f Func
	
Label_30:
	var_63_int = 0; // 0x1e PushI
	var_64_bool = var_0_int > var_63_int; // 0x1f GT
	if(var_64_bool == 0) goto Label_34; // 0x20 JumpB
	var_0_int = 0; // 0x21 TMovI
}


func_50(var_5_int, var_9_int)
{
	var_10_int = 0; var_11_int = 0; var_12_string = ""; var_13_int = 0; var_14_int = 0; var_15_int = 0; var_16_string = ""; var_17_int = 0; var_18_int = 0; var_19_string = ""; var_20_int = 0; var_21_int = 0; var_22_int = 0; var_23_string = ""; // 0x32 PushV
	var_24_string = ""; // 0x33 PushV
	func_267(var_24_string); // 0x34 NEW_2
	var_19_string = var_24_string; // 0x35 Mov
	var_29_string = "default"; // 0x37 PushS
	var_30_int = 5; // 0x38 PushI
	var_31_int = var_5_int - var_30_int; // 0x39 Sub
	GetTextHeightInWidth(var_17_int, var_29_string, var_31_int, var_19_string); // 0x3a Func
	var_18_int = var_17_int; // 0x3c Mov
	var_32_int = 10; // 0x3d PushI
	var_18_int = var_18_int + var_32_int; // 0x3e Add2
	GetAnswerCount(var_20_int); // 0x3f Func
	var_22_int = 0; // 0x41 MovI
	
Label_66:
	var_33_bool = var_22_int < var_20_int; // 0x42 LT
	if(var_33_bool == 0) goto Label_92; // 0x43 JumpB
	var_34_int = 0; // 0x44 PushI
	var_35_bool = var_22_int == var_34_int; // 0x45 Eq
	if(var_35_bool == 0) goto Label_74; // 0x46 JumpB
	var_36_int = 10; // 0x47 PushI
	var_18_int = var_18_int + var_36_int; // 0x48 Add2
	goto Label_76; // 0x49 Jump
	
Label_76:
	var_37_string = ""; var_38_int = 0; // 0x4c PushV
	var_38_int = var_22_int; // 0x4d Mov
	func_276(var_37_string, var_38_int); // 0x4e NEW_2
	var_23_string = var_37_string; // 0x4f Mov
	var_43_string = "default"; // 0x51 PushS
	var_44_int = 15; // 0x52 PushI
	var_45_int = var_5_int - var_44_int; // 0x53 Sub
	var_46_int = 5; // 0x54 PushI
	var_47_int = var_45_int - var_46_int; // 0x55 Sub
	GetTextHeightInWidth(var_17_int, var_43_string, var_47_int, var_23_string); // 0x56 Func
	var_18_int = var_18_int + var_17_int; // 0x58 Add2
	var_48_int = 1; // 0x59 PushI
	var_22_int = var_22_int + var_48_int; // 0x5a Add2
	goto Label_66; // 0x5b Jump
	
Label_74:
	var_49_int = 5; // 0x4a PushI
	var_18_int = var_18_int + var_49_int; // 0x4b Add2
	
Label_92:
	var_9_int = var_18_int; // 0x5c Mov
	return 14; // 0x5d Return
}


func_276(var_37_string, var_38_int)
{
	var_39_string = ""; var_40_string = ""; // 0x114 PushV
	GetAnswer(var_38_int, var_40_string); // 0x115 Func
	var_41_string = ""; // 0x117 PushS
	var_42_bool = var_40_string == var_41_string; // 0x118 Eq
	if(var_42_bool == 0) goto Label_283; // 0x119 JumpB
	var_40_string = "ERROR: missing answer"; // 0x11a MovS
	
Label_283:
	var_37_string = var_40_string; // 0x11b Mov
	return 2; // 0x11c Return
}


func_285(var_32_int, var_33_int)
{
	var_34_int = 0; var_35_string = ""; var_36_int = 0; var_37_string = ""; // 0x11d PushV
	GetAnswer(var_33_int, var_37_string, var_36_int); // 0x11e Func
	var_32_int = var_36_int; // 0x120 Mov
	return 4; // 0x121 Return
}


