task_0_event_14(var_0_bool, var_1_float, var_2_float)
{
	var_3_object = Obj(); var_4_object = Obj(); var_5_object = Obj(); var_6_object = Obj(); // 0x32 PushV
	GetPlayer(var_5_object); // 0x33 Func
	var_7_string = "sleeping"; // 0x35 PushS
	var_8_bool = 0; // 0x36 PushB
	SetProperty(var_7_string, var_8_bool); // 0x37 ObjFunc
	CreateFloatVector(var_6_object); // 0x39 Func
	var_9_int = 0; // 0x3b PushI
	add(var_9_int); // 0x3c ObjFunc
	var_10_int = 11; // 0x3e PushI
	SendWorldWndMessage(var_10_int, var_6_object); // 0x3f Func
	var_11_int = 12; // 0x41 PushI
	SendWorldWndMessage(var_11_int, var_6_object); // 0x42 Func
	var_12_int = 13; // 0x44 PushI
	SendWorldWndMessage(var_12_int, var_6_object); // 0x45 Func
	var_13_int = 14; // 0x47 PushI
	SendWorldWndMessage(var_13_int, var_6_object); // 0x48 Func
	var_14_int = 15; // 0x4a PushI
	SendWorldWndMessage(var_14_int, var_6_object); // 0x4b Func
	var_15_int = 16; // 0x4d PushI
	SendWorldWndMessage(var_15_int, var_6_object); // 0x4e Func
	return 4; // 0x50 Return
}


task_0_event_1(var_0_bool, var_1_float, var_2_float, var_3_float)
{
	var_4_float = 0; var_5_int = 0; var_6_float = 0; var_7_int = 0; // 0x8e PushV
	var_8_bool = var_0_bool == 0; // 0x8f Not
	if(var_8_bool == 0) goto Label_146; // 0x90 JumpB
	return 4; // 0x91 Return
	
Label_146:
	GetGameTimeScale(var_6_float); // 0x92 Func
	var_9_float = var_3_float * var_6_float; // 0x94 Mult
	var_10_float = 200.0; // 0x95 PushF
	var_11_float = var_9_float * var_10_float; // 0x96 Mult
	AdvanceGameTime(var_11_float); // 0x97 Func
	func_96(); // 0x9a NEW_2
	var_1_float = var_1_float + var_3_float; // 0x9c Add2
	var_31_float = 200.0; // 0x9d PushF
	var_32_float = var_31_float * var_1_float; // 0x9e Mult
	var_33_float = var_32_float * var_6_float; // 0x9f Mult
	var_34_bool = var_33_float > var_2_float; // 0xa0 GT
	if(var_34_bool == 0) goto Label_167; // 0xa1 JumpB
	func_95(); // 0xa3 NEW_2
	DestroyWindow(); // 0xa5 Func
	
Label_167:
	var_35_int = 100; // 0xa7 PushI
	var_36_float = 200.0; // 0xa8 PushF
	var_37_float = var_36_float * var_1_float; // 0xa9 Mult
	var_38_float = var_37_float * var_6_float; // 0xaa Mult
	var_39_int = var_2_float - var_38_float; // 0xab Sub
	var_40_float = var_35_int * var_39_int; // 0xac Mult
	var_41_float = 6.0; // 0xad PushF
	var_7_int = var_40_float / var_40_float; // 0xae Div2
	var_42_string = "dream_progress"; // 0xaf PushS
	SendMessage(var_7_int, var_42_string); // 0xb0 Func
	return 4; // 0xb2 Return
}


task_0_event_100(var_0_bool, var_1_float, var_2_float, var_3_int)
{
	var_4_bool = var_0_bool; // 0xb4 PushT
	if(var_4_bool == 0) goto Label_185; // 0xb5 JumpB
	func_95(); // 0xb7 NEW_2
	
Label_185:
	DestroyWindow(); // 0xb9 Func
	return 0; // 0xbb Return
}


task_0_event_200(var_0_bool, var_1_float, var_2_float, var_3_int, var_4_string, var_5_object)
{
	var_6_int = 0; var_7_int = 0; var_8_int = 0; var_9_int = 0; // 0xbc PushV
	var_10_string = "dream_button"; // 0xbd PushS
	var_11_bool = var_4_string == var_10_string; // 0xbe Eq
	if(var_11_bool == 0) goto Label_205; // 0xbf JumpB
	var_12_bool = var_0_bool; // 0xc0 PushT
	if(var_12_bool == 0) goto Label_200; // 0xc1 JumpB
	func_95(); // 0xc3 NEW_2
	DestroyWindow(); // 0xc5 Func
	goto Label_204; // 0xc7 Jump
	
Label_204:
	goto Label_254; // 0xcc Jump
	
Label_254:
	return 4; // 0xfe Return
	
Label_200:
	var_0_bool = 1; // 0xc8 TMovB
	func_83(var_9_int); // 0xca NEW_2
	
Label_205:
	var_17_string = "button_plus"; // 0xcd PushS
	var_18_bool = var_4_string == var_17_string; // 0xce Eq
	if(var_18_bool == 0) goto Label_230; // 0xcf JumpB
	var_19_bool = var_0_bool; // 0xd0 PushT
	if(var_19_bool == 0) goto Label_211; // 0xd1 JumpB
	return 4; // 0xd2 Return
	
Label_211:
	var_20_int = 1; // 0xd3 PushI
	var_2_float = var_2_float + var_20_int; // 0xd4 Add2
	var_21_float = 6.0; // 0xd5 PushF
	var_22_bool = var_2_float > var_21_float; // 0xd6 GT
	if(var_22_bool == 0) goto Label_218; // 0xd7 JumpB
	var_2_float = 6.0; // 0xd8 TMovF
	goto Label_222; // 0xd9 Jump
	
Label_222:
	var_23_int = 100; // 0xde PushI
	var_24_float = var_23_int * var_2_float; // 0xdf Mult
	var_25_float = 6.0; // 0xe0 PushF
	var_26_float = var_24_float / var_25_float; // 0xe1 Div
	var_27_string = "dream_progress"; // 0xe2 PushS
	SendMessage(var_26_float, var_27_string); // 0xe3 Func
	goto Label_254; // 0xe5 Jump
	
Label_218:
	var_28_int = 1; // 0xda PushI
	var_8_int = var_2_float / var_9_int; // 0xdb Div2
	var_29_int = 1; // 0xdc PushI
	var_2_float = var_8_int * var_29_int; // 0xdd Mult2
	
Label_230:
	var_30_string = "button_minus"; // 0xe6 PushS
	var_31_bool = var_4_string == var_30_string; // 0xe7 Eq
	if(var_31_bool == 0) goto Label_254; // 0xe8 JumpB
	var_32_bool = var_0_bool; // 0xe9 PushT
	if(var_32_bool == 0) goto Label_236; // 0xea JumpB
	return 4; // 0xeb Return
	
Label_236:
	var_33_int = 1; // 0xec PushI
	var_2_float = var_2_float - var_33_int; // 0xed Sub2
	var_34_int = 1; // 0xee PushI
	var_35_bool = var_2_float < var_34_int; // 0xef LT
	if(var_35_bool == 0) goto Label_243; // 0xf0 JumpB
	var_2_float = 1; // 0xf1 TMovI
	goto Label_247; // 0xf2 Jump
	
Label_247:
	var_36_int = 100; // 0xf7 PushI
	var_37_float = var_36_int * var_2_float; // 0xf8 Mult
	var_38_float = 6.0; // 0xf9 PushF
	var_39_float = var_37_float / var_38_float; // 0xfa Div
	var_40_string = "dream_progress"; // 0xfb PushS
	SendMessage(var_39_float, var_40_string); // 0xfc Func
	
Label_243:
	var_41_int = 1; // 0xf3 PushI
	var_9_int = var_2_float / var_9_int; // 0xf4 Div2
	var_42_int = 1; // 0xf5 PushI
	var_2_float = var_9_int * var_42_int; // 0xf6 Mult2
}


main(var_0_bool, var_1_float, var_2_float)
{
	CaptureKeyboard(); // 0x0 Func
	var_2_float = 6.0; // 0x2 TMovF
	var_0_bool = 0; // 0x3 TMovB
	func_96(); // 0x5 NEW_2
	var_22_int = 100; // 0x7 PushI
	var_23_float = var_22_int * var_2_float; // 0x8 Mult
	var_24_float = 6.0; // 0x9 PushF
	var_25_float = var_23_float / var_24_float; // 0xa Div
	var_26_string = "dream_progress"; // 0xb PushS
	SendMessage(var_25_float, var_26_string); // 0xc Func
	var_27_int = 701; // 0xe PushI
	var_28_string = "health_text"; // 0xf PushS
	SendMessage(var_27_int, var_28_string); // 0x10 Func
	var_29_int = 702; // 0x12 PushI
	var_30_string = "immunity_text"; // 0x13 PushS
	SendMessage(var_29_int, var_30_string); // 0x14 Func
	var_31_int = 703; // 0x16 PushI
	var_32_string = "hunger_text"; // 0x17 PushS
	SendMessage(var_31_int, var_32_string); // 0x18 Func
	var_33_int = 704; // 0x1a PushI
	var_34_string = "tiredness_text"; // 0x1b PushS
	SendMessage(var_33_int, var_34_string); // 0x1c Func
	var_35_int = 705; // 0x1e PushI
	var_36_string = "infection_text"; // 0x1f PushS
	SendMessage(var_35_int, var_36_string); // 0x20 Func
	ShowCursor(); // 0x22 Func
	var_37_string = "default"; // 0x24 PushS
	SetCursor(var_37_string); // 0x25 Func
	var_38_bool = 0; // 0x27 PushB
	SetOwnerDraw(var_38_bool); // 0x28 Func
	var_39_bool = 1; // 0x2a PushB
	SetNeedUpdate(var_39_bool); // 0x2b Func
	CaptureKeyboard(); // 0x2d Func
	ProcessEvents(); // 0x2f Func
	return 0; // 0x31 Return
}


func_96()
{
	var_3_float = 0; var_4_float = 0; // 0x60 PushV
	GetPlayerHealth(var_4_float); // 0x61 Func
	var_5_int = 100; // 0x63 PushI
	var_6_float = var_5_int * var_4_float; // 0x64 Mult
	var_7_string = "health"; // 0x65 PushS
	SendMessage(var_6_float, var_7_string); // 0x66 Func
	var_8_int = 0; // 0x68 PushI
	var_9_bool = var_4_float <= var_8_int; // 0x69 LE
	if(var_9_bool == 0) goto Label_113; // 0x6a JumpB
	func_95(); // 0x6c NEW_2
	DestroyWindow(); // 0x6e Func
	return 2; // 0x70 Return
	
Label_113:
	GetPlayerImmunity(var_4_float); // 0x71 Func
	var_10_int = 100; // 0x73 PushI
	var_11_float = var_10_int * var_4_float; // 0x74 Mult
	var_12_string = "immunity"; // 0x75 PushS
	SendMessage(var_11_float, var_12_string); // 0x76 Func
	GetPlayerHunger(var_4_float); // 0x78 Func
	var_13_int = 100; // 0x7a PushI
	var_14_float = var_13_int * var_4_float; // 0x7b Mult
	var_15_string = "hunger"; // 0x7c PushS
	SendMessage(var_14_float, var_15_string); // 0x7d Func
	GetPlayerTiredness(var_4_float); // 0x7f Func
	var_16_int = 100; // 0x81 PushI
	var_17_float = var_16_int * var_4_float; // 0x82 Mult
	var_18_string = "tiredness"; // 0x83 PushS
	SendMessage(var_17_float, var_18_string); // 0x84 Func
	GetPlayerDisease(var_4_float); // 0x86 Func
	var_19_int = 100; // 0x88 PushI
	var_20_float = var_19_int * var_4_float; // 0x89 Mult
	var_21_string = "infection"; // 0x8a PushS
	SendMessage(var_20_float, var_21_string); // 0x8b Func
	return 2; // 0x8d Return
}


func_83(var_1_float)
{
	var_13_object = Obj(); var_14_object = Obj(); // 0x53 PushV
	GetPlayer(var_14_object); // 0x54 Func
	var_15_string = "sleeping"; // 0x56 PushS
	var_16_bool = 1; // 0x57 PushB
	SetProperty(var_15_string, var_16_bool); // 0x58 ObjFunc
	BeginPlayerUpdate(); // 0x5a Func
	var_1_float = 0; // 0x5c TMovI
	return 2; // 0x5d Return
}


func_95()
{
	return 0; // 0x5f Return
}


