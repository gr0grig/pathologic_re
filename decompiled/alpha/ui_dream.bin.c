task_0_event_14(var_0_bool, var_1_float, var_2_float)
{
	var_3_object = Obj(); var_4_object = Obj(); // 0x1e PushV
	GetPlayer(var_4_object); // 0x1f Func
	var_5_string = "sleeping"; // 0x21 PushS
	var_6_bool = 0; // 0x22 PushB
	SetProperty(var_5_string, var_6_bool); // 0x23 ObjFunc
	return 2; // 0x25 Return
}


task_0_event_1(var_0_bool, var_1_float, var_2_float, var_3_float)
{
	var_4_float = 0; var_5_int = 0; var_6_float = 0; var_7_int = 0; // 0x6a PushV
	var_8_bool = var_0_bool == 0; // 0x6b Not
	if(var_8_bool == 0) goto Label_110; // 0x6c JumpB
	return 4; // 0x6d Return
	
Label_110:
	func_60(); // 0x6f Call
	var_1_float = var_1_float + var_3_float; // 0x71 Add2
	GetGameTimeScale(var_6_float); // 0x72 Func
	var_33_float = 200.0; // 0x74 PushF
	var_34_float = var_33_float * var_1_float; // 0x75 Mult
	var_35_float = var_34_float * var_6_float; // 0x76 Mult
	var_36_bool = var_35_float > var_2_float; // 0x77 GT
	if(var_36_bool == 0) goto Label_126; // 0x78 JumpB
	func_51(var_7_int); // 0x7a Call
	DestroyWindow(); // 0x7c Func
	
Label_126:
	var_37_int = 100; // 0x7e PushI
	var_38_float = 200.0; // 0x7f PushF
	var_39_float = var_38_float * var_1_float; // 0x80 Mult
	var_40_float = var_39_float * var_6_float; // 0x81 Mult
	var_41_int = var_2_float - var_40_float; // 0x82 Sub
	var_42_float = var_37_int * var_41_int; // 0x83 Mult
	var_43_float = 6.0; // 0x84 PushF
	var_7_int = var_42_float / var_42_float; // 0x85 Div2
	var_44_string = "dream_progress"; // 0x86 PushS
	SendMessage(var_7_int, var_44_string); // 0x87 Func
	return 4; // 0x89 Return
}


task_0_event_100(var_0_bool, var_1_float, var_2_float, var_3_int)
{
	var_4_bool = var_0_bool; // 0x8b PushT
	if(var_4_bool == 0) goto Label_144; // 0x8c JumpB
	func_51(var_3_int); // 0x8e Call
	
Label_144:
	DestroyWindow(); // 0x90 Func
	return 0; // 0x92 Return
}


task_0_event_200(var_0_bool, var_1_float, var_2_float, var_3_int, var_4_string, var_5_object)
{
	var_6_int = 0; var_7_int = 0; var_8_int = 0; var_9_int = 0; // 0x93 PushV
	var_10_string = "dream_button"; // 0x94 PushS
	var_11_bool = var_4_string == var_10_string; // 0x95 Eq
	if(var_11_bool == 0) goto Label_164; // 0x96 JumpB
	var_12_bool = var_0_bool; // 0x97 PushT
	if(var_12_bool == 0) goto Label_159; // 0x98 JumpB
	func_51(var_9_int); // 0x9a Call
	DestroyWindow(); // 0x9c Func
	goto Label_163; // 0x9e Jump
	
Label_163:
	goto Label_213; // 0xa3 Jump
	
Label_213:
	return 4; // 0xd5 Return
	
Label_159:
	var_0_bool = 1; // 0x9f TMovB
	func_39(var_9_int); // 0xa1 Call
	
Label_164:
	var_22_string = "button_plus"; // 0xa4 PushS
	var_23_bool = var_4_string == var_22_string; // 0xa5 Eq
	if(var_23_bool == 0) goto Label_189; // 0xa6 JumpB
	var_24_bool = var_0_bool; // 0xa7 PushT
	if(var_24_bool == 0) goto Label_170; // 0xa8 JumpB
	return 4; // 0xa9 Return
	
Label_170:
	var_25_int = 1; // 0xaa PushI
	var_2_float = var_2_float + var_25_int; // 0xab Add2
	var_26_float = 6.0; // 0xac PushF
	var_27_bool = var_2_float > var_26_float; // 0xad GT
	if(var_27_bool == 0) goto Label_177; // 0xae JumpB
	var_2_float = 6.0; // 0xaf TMovF
	goto Label_181; // 0xb0 Jump
	
Label_181:
	var_28_int = 100; // 0xb5 PushI
	var_29_float = var_28_int * var_2_float; // 0xb6 Mult
	var_30_float = 6.0; // 0xb7 PushF
	var_31_float = var_29_float / var_30_float; // 0xb8 Div
	var_32_string = "dream_progress"; // 0xb9 PushS
	SendMessage(var_31_float, var_32_string); // 0xba Func
	goto Label_213; // 0xbc Jump
	
Label_177:
	var_33_int = 1; // 0xb1 PushI
	var_8_int = var_2_float / var_9_int; // 0xb2 Div2
	var_34_int = 1; // 0xb3 PushI
	var_2_float = var_8_int * var_34_int; // 0xb4 Mult2
	
Label_189:
	var_35_string = "button_minus"; // 0xbd PushS
	var_36_bool = var_4_string == var_35_string; // 0xbe Eq
	if(var_36_bool == 0) goto Label_213; // 0xbf JumpB
	var_37_bool = var_0_bool; // 0xc0 PushT
	if(var_37_bool == 0) goto Label_195; // 0xc1 JumpB
	return 4; // 0xc2 Return
	
Label_195:
	var_38_int = 1; // 0xc3 PushI
	var_2_float = var_2_float - var_38_int; // 0xc4 Sub2
	var_39_int = 1; // 0xc5 PushI
	var_40_bool = var_2_float < var_39_int; // 0xc6 LT
	if(var_40_bool == 0) goto Label_202; // 0xc7 JumpB
	var_2_float = 1; // 0xc8 TMovI
	goto Label_206; // 0xc9 Jump
	
Label_206:
	var_41_int = 100; // 0xce PushI
	var_42_float = var_41_int * var_2_float; // 0xcf Mult
	var_43_float = 6.0; // 0xd0 PushF
	var_44_float = var_42_float / var_43_float; // 0xd1 Div
	var_45_string = "dream_progress"; // 0xd2 PushS
	SendMessage(var_44_float, var_45_string); // 0xd3 Func
	
Label_202:
	var_46_int = 1; // 0xca PushI
	var_9_int = var_2_float / var_9_int; // 0xcb Div2
	var_47_int = 1; // 0xcc PushI
	var_2_float = var_9_int * var_47_int; // 0xcd Mult2
}


main(var_0_bool, var_1_float, var_2_float)
{
	CaptureKeyboard(); // 0x0 Func
	var_2_float = 6.0; // 0x2 TMovF
	var_0_bool = 0; // 0x3 TMovB
	func_60(); // 0x5 Call
	var_27_int = 100; // 0x7 PushI
	var_28_float = var_27_int * var_2_float; // 0x8 Mult
	var_29_float = 6.0; // 0x9 PushF
	var_30_float = var_28_float / var_29_float; // 0xa Div
	var_31_string = "dream_progress"; // 0xb PushS
	SendMessage(var_30_float, var_31_string); // 0xc Func
	ShowCursor(); // 0xe Func
	var_32_string = "default"; // 0x10 PushS
	SetCursor(var_32_string); // 0x11 Func
	var_33_bool = 0; // 0x13 PushB
	SetOwnerDraw(var_33_bool); // 0x14 Func
	var_34_bool = 1; // 0x16 PushB
	SetNeedUpdate(var_34_bool); // 0x17 Func
	CaptureKeyboard(); // 0x19 Func
	ProcessEvents(); // 0x1b Func
	return 0; // 0x1d Return
}


func_51(var_1_float)
{
	var_10_float = 0; var_11_float = 0; // 0x33 PushV
	GetGameTimeScale(var_11_float); // 0x34 Func
	var_12_float = var_1_float * var_11_float; // 0x36 Mult
	var_13_float = 200.0; // 0x37 PushF
	var_14_float = var_12_float * var_13_float; // 0x38 Mult
	AdvanceGameTime(var_14_float); // 0x39 Func
	return 2; // 0x3b Return
}


func_60()
{
	var_3_float = 0; var_4_float = 0; // 0x3c PushV
	GetPlayerHealth(var_4_float); // 0x3d Func
	var_5_int = 100; // 0x3f PushI
	var_6_float = var_5_int * var_4_float; // 0x40 Mult
	var_7_string = "health"; // 0x41 PushS
	SendMessage(var_6_float, var_7_string); // 0x42 Func
	var_8_int = 0; // 0x44 PushI
	var_9_bool = var_4_float <= var_8_int; // 0x45 LE
	if(var_9_bool == 0) goto Label_77; // 0x46 JumpB
	func_51(var_4_float); // 0x48 Call
	DestroyWindow(); // 0x4a Func
	return 2; // 0x4c Return
	
Label_77:
	GetPlayerImmunity(var_4_float); // 0x4d Func
	var_15_int = 100; // 0x4f PushI
	var_16_float = var_15_int * var_4_float; // 0x50 Mult
	var_17_string = "immunity"; // 0x51 PushS
	SendMessage(var_16_float, var_17_string); // 0x52 Func
	GetPlayerHunger(var_4_float); // 0x54 Func
	var_18_int = 100; // 0x56 PushI
	var_19_float = var_18_int * var_4_float; // 0x57 Mult
	var_20_string = "hunger"; // 0x58 PushS
	SendMessage(var_19_float, var_20_string); // 0x59 Func
	GetPlayerTiredness(var_4_float); // 0x5b Func
	var_21_int = 100; // 0x5d PushI
	var_22_float = var_21_int * var_4_float; // 0x5e Mult
	var_23_string = "tiredness"; // 0x5f PushS
	SendMessage(var_22_float, var_23_string); // 0x60 Func
	GetPlayerDisease(var_4_float); // 0x62 Func
	var_24_int = 100; // 0x64 PushI
	var_25_float = var_24_int * var_4_float; // 0x65 Mult
	var_26_string = "infection"; // 0x66 PushS
	SendMessage(var_25_float, var_26_string); // 0x67 Func
	return 2; // 0x69 Return
}


func_39(var_1_float)
{
	var_18_object = Obj(); var_19_object = Obj(); // 0x27 PushV
	GetPlayer(var_19_object); // 0x28 Func
	var_20_string = "sleeping"; // 0x2a PushS
	var_21_bool = 1; // 0x2b PushB
	SetProperty(var_20_string, var_21_bool); // 0x2c ObjFunc
	BeginPlayerUpdate(); // 0x2e Func
	var_1_float = 0; // 0x30 TMovI
	return 2; // 0x31 Return
}


