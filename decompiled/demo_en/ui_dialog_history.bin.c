task_0_event_0(var_0_bool, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_string, var_11_string)
{
	var_12_int = 0; var_13_int = 0; var_14_int = 0; var_15_string = ""; var_16_string = ""; var_17_int = 0; var_18_int = 0; var_19_int = 0; var_20_int = 0; var_21_string = ""; var_22_string = ""; var_23_int = 0; // 0x85 PushV
	var_18_int = var_1_int; // 0x86 MovT
	size(var_19_int); // 0x87 TObjFunc
	var_20_int = 0; // 0x89 MovI
	
Label_138:
	var_24_bool = var_20_int < var_19_int; // 0x8a LT
	if(var_24_bool == 0) goto Label_185; // 0x8b JumpB
	get(var_21_string, var_20_int); // 0x8c TObjFunc
	get(var_22_string, var_20_int); // 0x8e TObjFunc
	var_25_string = "default"; // 0x90 PushS
	var_26_int = GlobalVars[0]; // 0x91 PushGE
	var_27_int = GlobalVars[0]; // 0x92 PushGE
	var_28_int = var_6_int - var_27_int; // 0x93 Sub
	var_29_float = 0.804; // 0x94 PushF
	var_30_float = 0.804; // 0x95 PushF
	var_31_float = 0.804; // 0x96 PushF
	PrintInWidth(var_23_int, var_25_string, var_26_int, var_18_int, var_28_int, var_21_string, var_29_float, var_30_float, var_31_float); // 0x97 Func
	var_32_string = "default"; // 0x99 PushS
	var_33_int = 0; // 0x9a PushI
	var_34_float = 0.804; // 0x9b PushF
	var_35_float = 0.804; // 0x9c PushF
	var_36_float = 0.804; // 0x9d PushF
	Print(var_32_string, var_33_int, var_18_int, var_19_int, var_34_float, var_35_float, var_36_float); // 0x9e Func
	var_18_int = var_18_int + var_23_int; // 0xa0 Add2
	var_37_int = 10; // 0xa1 PushI
	var_18_int = var_18_int + var_37_int; // 0xa2 Add2
	var_38_string = "default"; // 0xa3 PushS
	var_39_int = GlobalVars[0]; // 0xa4 PushGE
	var_40_int = GlobalVars[0]; // 0xa5 PushGE
	var_41_int = var_6_int - var_40_int; // 0xa6 Sub
	var_42_float = 0.698; // 0xa7 PushF
	var_43_float = 0.659; // 0xa8 PushF
	var_44_float = 0.647; // 0xa9 PushF
	PrintInWidth(var_23_int, var_38_string, var_39_int, var_18_int, var_41_int, var_22_string, var_42_float, var_43_float, var_44_float); // 0xaa Func
	var_45_string = "default"; // 0xac PushS
	var_46_int = 0; // 0xad PushI
	var_47_float = 0.698; // 0xae PushF
	var_48_float = 0.659; // 0xaf PushF
	var_49_float = 0.647; // 0xb0 PushF
	Print(var_45_string, var_46_int, var_18_int, var_18_int, var_47_float, var_48_float, var_49_float); // 0xb1 Func
	var_18_int = var_18_int + var_23_int; // 0xb3 Add2
	var_50_int = 10; // 0xb4 PushI
	var_18_int = var_18_int + var_50_int; // 0xb5 Add2
	var_51_int = 1; // 0xb6 PushI
	var_20_int = var_20_int + var_51_int; // 0xb7 Add2
	goto Label_138; // 0xb8 Jump
	
Label_185:
	return 12; // 0xb9 Return
}


task_0_event_200(var_0_bool, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_string, var_11_string, var_12_int, var_13_string, var_14_object)
{
	var_15_string = ""; var_16_string = ""; var_17_string = ""; var_18_string = ""; // 0xba PushV
	var_19_string = "h_scrollbar"; // 0xbb PushS
	var_20_bool = var_13_string == var_19_string; // 0xbc Eq
	if(var_20_bool == 0) goto Label_195; // 0xbd JumpB
	var_21_int = -var_2_int; // 0xbe Neg
	var_22_float = var_21_int * var_12_int; // 0xbf Mult
	var_23_int = 100; // 0xc0 PushI
	var_1_int = var_22_float / var_22_float; // 0xc1 Div2
	goto Label_211; // 0xc2 Jump
	
Label_211:
	return 4; // 0xd3 Return
	
Label_195:
	var_24_string = "dialog_text"; // 0xc3 PushS
	var_25_bool = var_13_string == var_24_string; // 0xc4 Eq
	if(var_25_bool == 0) goto Label_211; // 0xc5 JumpB
	var_26_int = 0; // 0xc6 PushI
	get(var_17_string, var_26_int); // 0xc7 ObjFunc
	var_27_int = 1; // 0xc9 PushI
	get(var_18_string, var_27_int); // 0xca ObjFunc
	add(var_17_string); // 0xcc TObjFunc
	add(var_18_string); // 0xce TObjFunc
	func_43(var_16_string, var_17_string, var_18_string); // 0xd1 NEW_2
}


task_0_event_15(var_0_bool, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_string, var_11_string, var_12_int, var_13_int, var_14_float)
{
	var_15_int = 0; var_16_int = 0; var_17_int = 0; var_18_int = 0; // 0xd4 PushV
	var_19_string = "default"; // 0xd5 PushS
	GetFontHeight(var_17_int, var_19_string); // 0xd6 Func
	var_18_int = var_14_float * var_17_int; // 0xd8 Mult2
	var_1_int = var_1_int + var_18_int; // 0xd9 Add2
	func_63(var_16_int, var_17_int, var_18_int); // 0xdb NEW_2
	return 4; // 0xdd Return
}


main(var_0_bool, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_string, var_11_string)
{
	var_12_object = Obj(); var_13_object = Obj(); // 0x0 PushV
	var_4_int = -1; // 0x1 TMovI
	var_1_int = 0; // 0x2 TMovI
	GetWindowSize(var_8_object, var_7_int); // 0x3 Func
	var_14_int = GlobalVars[0]; // 0x5 PushGE
	var_15_float = 4.8; // 0x6 PushF
	var_14_int = var_6_int / var_10_string; // 0x7 Div2
	GlobalVars[0] = var_14_int; // 0x8 PopGE
	CreateStringVector(var_6_int); // 0x9 Func
	CreateStringVector(var_5_int); // 0xb Func
	GetConversation(var_13_object); // 0xd Func
	var_16_bool = var_13_object == 0; // 0xf NullEq
	if(var_16_bool == 0) goto Label_21; // 0x10 JumpB
	var_17_string = "null conversation"; // 0x11 PushS
	UITrace(var_17_string); // 0x12 Func
	return 2; // 0x14 Return
	
Label_21:
	GetNPCName(var_4_int); // 0x15 ObjFunc
	_strupr(var_4_int); // 0x17 Func
	GetPlayerName(var_3_int); // 0x19 ObjFunc
	_strupr(var_3_int); // 0x1b Func
	func_43(var_11_string, var_12_object, var_13_object); // 0x1e NEW_2
	var_50_bool = 1; // 0x20 PushB
	EnableClipping(var_50_bool); // 0x21 Func
	var_51_bool = 1; // 0x23 PushB
	SetOwnerDraw(var_51_bool); // 0x24 Func
	var_0_bool = 0; // 0x26 TMovB
	ProcessEvents(); // 0x27 Func
	return 2; // 0x29 Return
}


func_97(var_6_int, var_18_int)
{
	var_19_int = 0; var_20_int = 0; var_21_int = 0; var_22_int = 0; var_23_string = ""; var_24_string = ""; var_25_int = 0; var_26_int = 0; var_27_int = 0; var_28_int = 0; var_29_string = ""; var_30_string = ""; // 0x61 PushV
	var_27_int = 0; // 0x62 MovI
	size(var_25_int); // 0x63 TObjFunc
	var_28_int = 0; // 0x65 MovI
	
Label_102:
	var_31_bool = var_28_int < var_25_int; // 0x66 LT
	if(var_31_bool == 0) goto Label_131; // 0x67 JumpB
	get(var_29_string, var_28_int); // 0x68 TObjFunc
	get(var_30_string, var_28_int); // 0x6a TObjFunc
	var_32_string = "default"; // 0x6c PushS
	var_33_int = GlobalVars[0]; // 0x6d PushGE
	var_34_int = var_6_int - var_33_int; // 0x6e Sub
	GetTextHeightInWidth(var_26_int, var_32_string, var_34_int, var_29_string); // 0x6f Func
	var_27_int = var_27_int + var_26_int; // 0x71 Add2
	var_35_int = 10; // 0x72 PushI
	var_27_int = var_27_int + var_35_int; // 0x73 Add2
	var_36_string = "default"; // 0x74 PushS
	var_37_int = GlobalVars[0]; // 0x75 PushGE
	var_38_int = var_6_int - var_37_int; // 0x76 Sub
	GetTextHeightInWidth(var_26_int, var_36_string, var_38_int, var_30_string); // 0x77 Func
	var_27_int = var_27_int + var_26_int; // 0x79 Add2
	var_39_int = 1; // 0x7a PushI
	var_40_int = var_25_int - var_39_int; // 0x7b Sub
	var_41_bool = var_28_int != var_40_int; // 0x7c Neq
	if(var_41_bool == 0) goto Label_128; // 0x7d JumpB
	var_42_int = 10; // 0x7e PushI
	var_27_int = var_27_int + var_42_int; // 0x7f Add2
	
Label_128:
	var_43_int = 1; // 0x80 PushI
	var_28_int = var_28_int + var_43_int; // 0x81 Add2
	goto Label_102; // 0x82 Jump
	
Label_131:
	var_18_int = var_27_int; // 0x83 Mov
	return 12; // 0x84 Return
}


func_43(var_1_int, var_2_int, var_7_int)
{
	var_18_int = 0; // 0x2b PushV
	func_97(var_13_object, var_18_int); // 0x2c NEW_2
	var_2_int = var_18_int; // 0x2d TMov
	var_2_int = var_2_int - var_7_int; // 0x2f Sub2
	var_44_int = 0; // 0x30 PushI
	var_45_bool = var_2_int < var_44_int; // 0x31 LT
	if(var_45_bool == 0) goto Label_57; // 0x32 JumpB
	var_2_int = 0; // 0x33 TMovI
	var_46_int = 16484; // 0x34 PushI
	var_47_string = "h_scrollbar"; // 0x35 PushS
	SendMessage(var_46_int, var_47_string); // 0x36 Func
	goto Label_61; // 0x38 Jump
	
Label_61:
	var_1_int = -var_2_int; // 0x3d Neg2
	return 0; // 0x3e Return
	
Label_57:
	var_48_int = 100; // 0x39 PushI
	var_49_string = "h_scrollbar"; // 0x3a PushS
	SendMessage(var_48_int, var_49_string); // 0x3b Func
}


func_63(var_1_int, var_2_int, var_7_int)
{
	var_20_int = 0; // 0x3f PushV
	func_97(var_18_int, var_20_int); // 0x40 NEW_2
	var_2_int = var_20_int; // 0x41 TMov
	var_2_int = var_2_int - var_7_int; // 0x43 Sub2
	var_46_int = 0; // 0x44 PushI
	var_47_bool = var_2_int < var_46_int; // 0x45 LT
	if(var_47_bool == 0) goto Label_72; // 0x46 JumpB
	var_2_int = 0; // 0x47 TMovI
	
Label_72:
	var_48_int = -var_1_int; // 0x48 Neg
	var_49_bool = var_48_int > var_2_int; // 0x49 GT
	if(var_49_bool == 0) goto Label_77; // 0x4a JumpB
	var_1_int = -var_2_int; // 0x4b Neg2
	goto Label_81; // 0x4c Jump
	
Label_81:
	var_50_int = 0; // 0x51 PushI
	var_51_bool = var_2_int == var_50_int; // 0x52 Eq
	if(var_51_bool == 0) goto Label_89; // 0x53 JumpB
	var_52_int = 16384; // 0x54 PushI
	var_53_string = "h_scrollbar"; // 0x55 PushS
	SendMessage(var_52_int, var_53_string); // 0x56 Func
	goto Label_96; // 0x58 Jump
	
Label_96:
	return 0; // 0x60 Return
	
Label_89:
	var_54_int = -var_1_int; // 0x59 Neg
	var_55_int = 100; // 0x5a PushI
	var_56_float = var_54_int * var_55_int; // 0x5b Mult
	var_57_float = var_56_float / var_2_int; // 0x5c Div
	var_58_string = "h_scrollbar"; // 0x5d PushS
	SendMessage(var_57_float, var_58_string); // 0x5e Func
	
Label_77:
	var_59_int = 0; // 0x4d PushI
	var_60_bool = var_1_int > var_59_int; // 0x4e GT
	if(var_60_bool == 0) goto Label_81; // 0x4f JumpB
	var_1_int = 0; // 0x50 TMovI
}


