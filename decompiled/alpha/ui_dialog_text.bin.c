task_0_event_0(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int)
{
	var_7_int = 0; var_8_string = ""; var_9_int = 0; var_10_int = 0; var_11_int = 0; var_12_string = ""; var_13_int = 0; var_14_string = ""; var_15_int = 0; var_16_int = 0; var_17_int = 0; var_18_string = ""; // 0x49 PushV
	func_16(var_16_int, var_17_int, var_18_string); // 0x4b Call
	var_13_int = var_0_int; // 0x4d MovT
	GetReplic(var_14_string); // 0x4e Func
	var_54_string = "default"; // 0x50 PushS
	var_55_int = 0; // 0x51 PushI
	var_56_float = 0.804; // 0x52 PushF
	var_57_float = 0.804; // 0x53 PushF
	var_58_float = 0.804; // 0x54 PushF
	PrintInWidth(var_57_float, var_54_string, var_55_int, var_13_int, var_54_string, var_14_string, var_56_float, var_57_float, var_58_float); // 0x55 Func
	var_13_int = var_13_int + var_2_int; // 0x57 Add2
	var_59_int = 15; // 0x58 PushI
	var_13_int = var_13_int + var_59_int; // 0x59 Add2
	GetAnswerCount(var_15_int); // 0x5a Func
	var_17_int = 0; // 0x5c MovI
	
Label_93:
	var_60_bool = var_17_int < var_15_int; // 0x5d LT
	if(var_60_bool == 0) goto Label_124; // 0x5e JumpB
	GetAnswer(var_17_int, var_18_string); // 0x5f Func
	var_61_bool = var_17_int == var_3_int; // 0x61 Eq
	if(var_61_bool == 0) goto Label_109; // 0x62 JumpB
	var_62_string = "default"; // 0x63 PushS
	var_63_int = 15; // 0x64 PushI
	var_64_int = 15; // 0x65 PushI
	var_65_int = var_5_int - var_64_int; // 0x66 Sub
	var_66_float = 1.0; // 0x67 PushF
	var_67_float = 1.0; // 0x68 PushF
	var_68_float = 1.0; // 0x69 PushF
	PrintInWidth(var_16_int, var_62_string, var_63_int, var_13_int, var_65_int, var_18_string, var_66_float, var_67_float, var_68_float); // 0x6a Func
	goto Label_118; // 0x6c Jump
	
Label_118:
	var_13_int = var_13_int + var_16_int; // 0x76 Add2
	var_69_int = 10; // 0x77 PushI
	var_13_int = var_13_int + var_69_int; // 0x78 Add2
	var_70_int = 1; // 0x79 PushI
	var_17_int = var_17_int + var_70_int; // 0x7a Add2
	goto Label_93; // 0x7b Jump
	
Label_109:
	var_71_string = "default"; // 0x6d PushS
	var_72_int = 15; // 0x6e PushI
	var_73_int = 15; // 0x6f PushI
	var_74_int = var_5_int - var_73_int; // 0x70 Sub
	var_75_float = 0.698; // 0x71 PushF
	var_76_float = 0.659; // 0x72 PushF
	var_77_float = 0.647; // 0x73 PushF
	PrintInWidth(var_16_int, var_71_string, var_72_int, var_13_int, var_74_int, var_18_string, var_75_float, var_76_float, var_77_float); // 0x74 Func
	
Label_124:
	return 12; // 0x7c Return
}


task_0_event_8(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_int)
{
	var_9_int = 0; var_10_int = 0; var_11_int = 0; var_12_int = 0; var_13_string = ""; var_14_int = 0; var_15_int = 0; var_16_int = 0; var_17_int = 0; var_18_int = 0; var_19_string = ""; var_20_int = 0; // 0x7d PushV
	var_21_int = var_0_int + var_2_int; // 0x7e Add
	var_22_int = 15; // 0x7f PushI
	var_15_int = var_21_int + var_22_int; // 0x80 Add2
	GetAnswerCount(var_16_int); // 0x81 Func
	var_3_int = -1; // 0x83 TMovI
	var_18_int = 0; // 0x84 MovI
	
Label_133:
	var_23_bool = var_18_int < var_16_int; // 0x85 LT
	if(var_23_bool == 0) goto Label_157; // 0x86 JumpB
	GetAnswer(var_18_int, var_19_string, var_20_int); // 0x87 Func
	var_24_string = "default"; // 0x89 PushS
	GetTextHeightInWidth(var_17_int, var_24_string, var_17_int, var_19_string); // 0x8a Func
	var_25_bool = 0; // 0x8c PushV
	var_25_bool = 0; // 0x8d MovB
	var_26_bool = var_8_int > var_15_int; // 0x8e GT
	if(var_26_bool == 0) goto Label_148; // 0x8f JumpB
	var_27_int = var_15_int + var_17_int; // 0x90 Add
	var_28_bool = var_8_int < var_27_int; // 0x91 LT
	if(var_28_bool == 0) goto Label_148; // 0x92 JumpB
	var_25_bool = 1; // 0x93 MovB
	
Label_148:
	if(var_25_bool == 0) goto Label_151; // 0x94 JumpB
	var_3_int = var_18_int; // 0x95 TMov
	var_4_int = var_20_int; // 0x96 TMov
	
Label_151:
	var_15_int = var_15_int + var_17_int; // 0x97 Add2
	var_29_int = 10; // 0x98 PushI
	var_15_int = var_15_int + var_29_int; // 0x99 Add2
	var_30_int = 1; // 0x9a PushI
	var_18_int = var_18_int + var_30_int; // 0x9b Add2
	goto Label_133; // 0x9c Jump
	
Label_157:
	return 12; // 0x9d Return
}


task_0_event_3(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_int)
{
	var_9_int = -1; // 0x9f PushI
	var_10_bool = var_3_int == var_9_int; // 0xa0 Eq
	if(var_10_bool == 0) goto Label_163; // 0xa1 JumpB
	return 0; // 0xa2 Return
	
Label_163:
	var_11_string = "history_text"; // 0xa3 PushS
	SendMessage(var_7_int, var_11_string); // 0xa4 Func
	var_0_int = 0; // 0xa6 TMovI
	func_16(var_6_int, var_7_int, var_8_int); // 0xa8 Call
	return 0; // 0xaa Return
}


task_0_event_200(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_string, var_9_object)
{
	var_10_string = "p_scrollbar"; // 0xac PushS
	var_11_bool = var_8_string == var_10_string; // 0xad Eq
	if(var_11_bool == 0) goto Label_182; // 0xae JumpB
	var_12_int = -var_1_int; // 0xaf Neg
	var_13_float = var_12_int * var_7_int; // 0xb0 Mult
	var_14_int = 100; // 0xb1 PushI
	var_0_int = var_13_float / var_13_float; // 0xb2 Div2
	func_16(var_7_int, var_8_string, var_9_object); // 0xb4 Call
	
Label_182:
	return 0; // 0xb6 Return
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
	func_16(var_4_int, var_5_int, var_6_int); // 0xb Call
	ProcessEvents(); // 0xd Func
	return 0; // 0xf Return
}


func_16(var_0_int, var_1_int, var_6_int)
{
	var_9_int = 0; // 0x10 PushV
	func_38(var_6_int, var_9_int); // 0x11 Call
	var_1_int = var_9_int; // 0x12 TMov
	var_1_int = var_1_int - var_6_int; // 0x14 Sub2
	var_35_int = 0; // 0x15 PushI
	var_36_bool = var_1_int < var_35_int; // 0x16 LT
	if(var_36_bool == 0) goto Label_30; // 0x17 JumpB
	var_1_int = 0; // 0x18 TMovI
	var_37_int = 16384; // 0x19 PushI
	var_38_string = "p_scrollbar"; // 0x1a PushS
	SendMessage(var_37_int, var_38_string); // 0x1b Func
	goto Label_37; // 0x1d Jump
	
Label_37:
	return 0; // 0x25 Return
	
Label_30:
	var_39_int = -var_0_int; // 0x1e Neg
	var_40_int = 100; // 0x1f PushI
	var_41_float = var_39_int * var_40_int; // 0x20 Mult
	var_42_float = var_41_float / var_1_int; // 0x21 Div
	var_43_string = "p_scrollbar"; // 0x22 PushS
	SendMessage(var_42_float, var_43_string); // 0x23 Func
}


func_38(var_5_int, var_9_int)
{
	var_10_int = 0; var_11_int = 0; var_12_string = ""; var_13_int = 0; var_14_int = 0; var_15_int = 0; var_16_string = ""; var_17_int = 0; var_18_int = 0; var_19_string = ""; var_20_int = 0; var_21_int = 0; var_22_int = 0; var_23_string = ""; // 0x26 PushV
	GetReplic(var_19_string); // 0x27 Func
	var_24_string = "default"; // 0x29 PushS
	GetTextHeightInWidth(var_17_int, var_24_string, var_20_int, var_19_string); // 0x2a Func
	var_18_int = var_17_int; // 0x2c Mov
	var_25_int = 15; // 0x2d PushI
	var_18_int = var_18_int + var_25_int; // 0x2e Add2
	GetAnswerCount(var_20_int); // 0x2f Func
	var_22_int = 0; // 0x31 MovI
	
Label_50:
	var_26_bool = var_22_int < var_20_int; // 0x32 LT
	if(var_26_bool == 0) goto Label_71; // 0x33 JumpB
	var_27_int = 0; // 0x34 PushI
	var_28_bool = var_22_int == var_27_int; // 0x35 Eq
	if(var_28_bool == 0) goto Label_58; // 0x36 JumpB
	var_29_int = 15; // 0x37 PushI
	var_18_int = var_18_int + var_29_int; // 0x38 Add2
	goto Label_60; // 0x39 Jump
	
Label_60:
	GetAnswer(var_22_int, var_23_string); // 0x3c Func
	var_30_string = "default"; // 0x3e PushS
	var_31_int = 15; // 0x3f PushI
	var_32_int = var_5_int - var_31_int; // 0x40 Sub
	GetTextHeightInWidth(var_17_int, var_30_string, var_32_int, var_23_string); // 0x41 Func
	var_18_int = var_18_int + var_17_int; // 0x43 Add2
	var_33_int = 1; // 0x44 PushI
	var_22_int = var_22_int + var_33_int; // 0x45 Add2
	goto Label_50; // 0x46 Jump
	
Label_58:
	var_34_int = 10; // 0x3a PushI
	var_18_int = var_18_int + var_34_int; // 0x3b Add2
	
Label_71:
	var_9_int = var_18_int; // 0x47 Mov
	return 14; // 0x48 Return
}


