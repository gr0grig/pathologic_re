task_0_event_0(var_0_bool, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_string, var_11_string)
{
	var_12_int = 0; var_13_int = 0; var_14_int = 0; var_15_string = ""; var_16_string = ""; var_17_int = 0; var_18_int = 0; var_19_int = 0; var_20_int = 0; var_21_string = ""; var_22_string = ""; var_23_int = 0; // 0x5f PushV
	var_18_int = var_1_int; // 0x60 MovT
	size(var_19_int); // 0x61 TObjFunc
	var_20_int = 0; // 0x63 MovI
	
Label_100:
	var_24_bool = var_20_int < var_19_int; // 0x64 LT
	if(var_24_bool == 0) goto Label_147; // 0x65 JumpB
	get(var_21_string, var_20_int); // 0x66 TObjFunc
	get(var_22_string, var_20_int); // 0x68 TObjFunc
	var_25_string = "default"; // 0x6a PushS
	var_26_int = 159; // 0x6b PushI
	var_27_int = 159; // 0x6c PushI
	var_28_int = var_6_int - var_27_int; // 0x6d Sub
	var_29_float = 0.804; // 0x6e PushF
	var_30_float = 0.804; // 0x6f PushF
	var_31_float = 0.804; // 0x70 PushF
	PrintInWidth(var_23_int, var_25_string, var_26_int, var_18_int, var_28_int, var_21_string, var_29_float, var_30_float, var_31_float); // 0x71 Func
	var_32_string = "default"; // 0x73 PushS
	var_33_int = 0; // 0x74 PushI
	var_34_float = 0.804; // 0x75 PushF
	var_35_float = 0.804; // 0x76 PushF
	var_36_float = 0.804; // 0x77 PushF
	Print(var_32_string, var_33_int, var_18_int, var_19_int, var_34_float, var_35_float, var_36_float); // 0x78 Func
	var_18_int = var_18_int + var_23_int; // 0x7a Add2
	var_37_int = 10; // 0x7b PushI
	var_18_int = var_18_int + var_37_int; // 0x7c Add2
	var_38_string = "default"; // 0x7d PushS
	var_39_int = 159; // 0x7e PushI
	var_40_int = 159; // 0x7f PushI
	var_41_int = var_6_int - var_40_int; // 0x80 Sub
	var_42_float = 0.698; // 0x81 PushF
	var_43_float = 0.659; // 0x82 PushF
	var_44_float = 0.647; // 0x83 PushF
	PrintInWidth(var_23_int, var_38_string, var_39_int, var_18_int, var_41_int, var_22_string, var_42_float, var_43_float, var_44_float); // 0x84 Func
	var_45_string = "default"; // 0x86 PushS
	var_46_int = 0; // 0x87 PushI
	var_47_float = 0.698; // 0x88 PushF
	var_48_float = 0.659; // 0x89 PushF
	var_49_float = 0.647; // 0x8a PushF
	Print(var_45_string, var_46_int, var_18_int, var_18_int, var_47_float, var_48_float, var_49_float); // 0x8b Func
	var_18_int = var_18_int + var_23_int; // 0x8d Add2
	var_50_int = 10; // 0x8e PushI
	var_18_int = var_18_int + var_50_int; // 0x8f Add2
	var_51_int = 1; // 0x90 PushI
	var_20_int = var_20_int + var_51_int; // 0x91 Add2
	goto Label_100; // 0x92 Jump
	
Label_147:
	return 12; // 0x93 Return
}


task_0_event_200(var_0_bool, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_string, var_11_string, var_12_int, var_13_string, var_14_object)
{
	var_15_int = 0; var_16_int = 0; var_17_string = ""; var_18_string = ""; var_19_int = 0; var_20_int = 0; var_21_string = ""; var_22_string = ""; // 0x94 PushV
	var_23_string = "h_scrollbar"; // 0x95 PushS
	var_24_bool = var_13_string == var_23_string; // 0x96 Eq
	if(var_24_bool == 0) goto Label_157; // 0x97 JumpB
	var_25_int = -var_2_int; // 0x98 Neg
	var_26_float = var_25_int * var_12_int; // 0x99 Mult
	var_27_int = 100; // 0x9a PushI
	var_1_int = var_26_float / var_26_float; // 0x9b Div2
	goto Label_173; // 0x9c Jump
	
Label_173:
	return 8; // 0xad Return
	
Label_157:
	var_28_string = "dialog_text"; // 0x9d PushS
	var_29_bool = var_13_string == var_28_string; // 0x9e Eq
	if(var_29_bool == 0) goto Label_173; // 0x9f JumpB
	GetReplic(var_21_string); // 0xa0 Func
	GetAnswer(var_12_int, var_22_string, var_19_int, var_20_int); // 0xa2 Func
	add(var_21_string); // 0xa4 TObjFunc
	add(var_22_string); // 0xa6 TObjFunc
	func_39(var_20_int, var_21_string, var_22_string); // 0xa9 Call
	SelectAnswer(var_19_int, var_20_int); // 0xab Func
}


main(var_0_bool, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_string, var_11_string)
{
	var_12_object = Obj(); var_13_object = Obj(); // 0x0 PushV
	var_4_int = -1; // 0x1 TMovI
	var_1_int = 0; // 0x2 TMovI
	CreateStringVector(var_6_int); // 0x3 Func
	CreateStringVector(var_5_int); // 0x5 Func
	GetConversation(var_13_object); // 0x7 Func
	var_14_bool = var_13_object == 0; // 0x9 NullEq
	if(var_14_bool == 0) goto Label_15; // 0xa JumpB
	var_15_string = "null conversation"; // 0xb PushS
	UITrace(var_15_string); // 0xc Func
	return 2; // 0xe Return
	
Label_15:
	GetNPCName(var_4_int); // 0xf ObjFunc
	_strupr(var_4_int); // 0x11 Func
	GetPlayerName(var_3_int); // 0x13 ObjFunc
	_strupr(var_3_int); // 0x15 Func
	GetWindowSize(var_8_object, var_7_int); // 0x17 Func
	func_39(var_11_string, var_12_object, var_13_object); // 0x1a Call
	var_48_bool = 1; // 0x1c PushB
	EnableClipping(var_48_bool); // 0x1d Func
	var_49_bool = 1; // 0x1f PushB
	SetOwnerDraw(var_49_bool); // 0x20 Func
	var_0_bool = 0; // 0x22 TMovB
	ProcessEvents(); // 0x23 Func
	return 2; // 0x25 Return
}


func_59(var_6_int, var_16_int)
{
	var_17_int = 0; var_18_int = 0; var_19_int = 0; var_20_int = 0; var_21_string = ""; var_22_string = ""; var_23_int = 0; var_24_int = 0; var_25_int = 0; var_26_int = 0; var_27_string = ""; var_28_string = ""; // 0x3b PushV
	var_25_int = 0; // 0x3c MovI
	size(var_23_int); // 0x3d TObjFunc
	var_26_int = 0; // 0x3f MovI
	
Label_64:
	var_29_bool = var_26_int < var_23_int; // 0x40 LT
	if(var_29_bool == 0) goto Label_93; // 0x41 JumpB
	get(var_27_string, var_26_int); // 0x42 TObjFunc
	get(var_28_string, var_26_int); // 0x44 TObjFunc
	var_30_string = "default"; // 0x46 PushS
	var_31_int = 159; // 0x47 PushI
	var_32_int = var_6_int - var_31_int; // 0x48 Sub
	GetTextHeightInWidth(var_24_int, var_30_string, var_32_int, var_27_string); // 0x49 Func
	var_25_int = var_25_int + var_24_int; // 0x4b Add2
	var_33_int = 10; // 0x4c PushI
	var_25_int = var_25_int + var_33_int; // 0x4d Add2
	var_34_string = "default"; // 0x4e PushS
	var_35_int = 159; // 0x4f PushI
	var_36_int = var_6_int - var_35_int; // 0x50 Sub
	GetTextHeightInWidth(var_24_int, var_34_string, var_36_int, var_28_string); // 0x51 Func
	var_25_int = var_25_int + var_24_int; // 0x53 Add2
	var_37_int = 1; // 0x54 PushI
	var_38_int = var_23_int - var_37_int; // 0x55 Sub
	var_39_bool = var_26_int != var_38_int; // 0x56 Neq
	if(var_39_bool == 0) goto Label_90; // 0x57 JumpB
	var_40_int = 10; // 0x58 PushI
	var_25_int = var_25_int + var_40_int; // 0x59 Add2
	
Label_90:
	var_41_int = 1; // 0x5a PushI
	var_26_int = var_26_int + var_41_int; // 0x5b Add2
	goto Label_64; // 0x5c Jump
	
Label_93:
	var_16_int = var_25_int; // 0x5d Mov
	return 12; // 0x5e Return
}


func_39(var_1_int, var_2_int, var_7_int)
{
	var_16_int = 0; // 0x27 PushV
	func_59(var_13_object, var_16_int); // 0x28 Call
	var_2_int = var_16_int; // 0x29 TMov
	var_2_int = var_2_int - var_7_int; // 0x2b Sub2
	var_42_int = 0; // 0x2c PushI
	var_43_bool = var_2_int < var_42_int; // 0x2d LT
	if(var_43_bool == 0) goto Label_53; // 0x2e JumpB
	var_2_int = 0; // 0x2f TMovI
	var_44_int = 16484; // 0x30 PushI
	var_45_string = "h_scrollbar"; // 0x31 PushS
	SendMessage(var_44_int, var_45_string); // 0x32 Func
	goto Label_57; // 0x34 Jump
	
Label_57:
	var_1_int = -var_2_int; // 0x39 Neg2
	return 0; // 0x3a Return
	
Label_53:
	var_46_int = 100; // 0x35 PushI
	var_47_string = "h_scrollbar"; // 0x36 PushS
	SendMessage(var_46_int, var_47_string); // 0x37 Func
}


