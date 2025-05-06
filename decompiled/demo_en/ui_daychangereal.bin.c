task_0_event_1(var_0_string, var_1_bool, var_2_bool, var_3_bool, var_4_float, var_5_int, var_6_int, var_7_int, var_8_int, var_9_float)
{
	var_10_bool = var_3_bool == 0; // 0x3f Not
	if(var_10_bool == 0) goto Label_77; // 0x40 JumpB
	var_11_bool = var_2_bool == 0; // 0x41 Not
	if(var_11_bool == 0) goto Label_72; // 0x42 JumpB
	var_2_bool = 1; // 0x43 TMovB
	PlaySound(var_0_string); // 0x44 Func
	return 0; // 0x46 Return
	
Label_72:
	var_12_bool = 0; // 0x48 PushV
	func_111(var_12_bool); // 0x49 NEW_2
	if(var_12_bool == 0) goto Label_77; // 0x4b JumpB
	return 0; // 0x4c Return
	
Label_77:
	var_4_float = var_4_float - var_9_float; // 0x4d Sub2
	var_18_int = 0; // 0x4e PushI
	var_19_bool = var_4_float <= var_18_int; // 0x4f LE
	if(var_19_bool == 0) goto Label_88; // 0x50 JumpB
	var_20_bool = var_3_bool; // 0x51 PushT
	if(var_20_bool == 0) goto Label_86; // 0x52 JumpB
	var_21_string = "gameover.xml"; // 0x53 PushS
	GameOver(var_21_string); // 0x54 Func
	
Label_86:
	DestroyWindow(); // 0x56 Func
	
Label_88:
	return 0; // 0x58 Return
}


task_0_event_0(var_0_string, var_1_bool, var_2_bool, var_3_bool, var_4_float, var_5_int, var_6_int, var_7_int, var_8_int)
{
	var_9_string = ""; var_10_float = 0; var_11_int = 0; var_12_string = ""; var_13_float = 0; var_14_int = 0; // 0x59 PushV
	var_15_int = 0; // 0x5a PushI
	var_16_bool = var_4_float <= var_15_int; // 0x5b LE
	if(var_16_bool == 0) goto Label_94; // 0x5c JumpB
	return 6; // 0x5d Return
	
Label_94:
	GetStringByID(var_12_string, var_7_int); // 0x5e Func
	var_17_float = 1.0; // 0x60 PushF
	var_13_float = var_4_float / var_12_string; // 0x61 Div2
	var_18_int = 1; // 0x62 PushI
	var_19_bool = var_13_float > var_18_int; // 0x63 GT
	if(var_19_bool == 0) goto Label_102; // 0x64 JumpB
	var_13_float = 1; // 0x65 MovI
	
Label_102:
	var_20_string = "default"; // 0x66 PushS
	var_21_int = 0; // 0x67 PushI
	var_22_int = 0; // 0x68 PushI
	var_23_float = 1.0; // 0x69 PushF
	var_24_float = 1.0; // 0x6a PushF
	var_25_float = 1.0; // 0x6b PushF
	PrintInWidth(var_14_int, var_20_string, var_21_int, var_22_int, var_21_int, var_12_string, var_23_float, var_24_float, var_25_float, var_13_float); // 0x6c Func
	return 6; // 0x6e Return
}


main(var_0_string, var_1_bool, var_2_bool, var_3_bool, var_4_float, var_5_int, var_6_int, var_7_int, var_8_int)
{
	var_9_int = 0; var_10_int = 0; var_11_int = 0; var_12_string = ""; var_13_int = 0; var_14_int = 0; var_15_int = 0; var_16_int = 0; var_17_string = ""; var_18_int = 0; // 0x0 PushV
	var_3_bool = 0; // 0x1 TMovB
	var_19_int = 0; // 0x2 PushV
	func_123(var_19_int); // 0x3 NEW_2
	var_15_int = var_19_int; // 0x4 Mov
	var_23_string = "c_iWM_RealDayChange"; // 0x6 PushS
	GetVariable(var_23_string, var_16_int); // 0x7 Func
	var_24_int = -1; // 0x9 PushI
	var_16_int = var_16_int + var_24_int; // 0xa Add2
	var_25_int = 5; // 0xb PushI
	var_26_bool = var_16_int >= var_25_int; // 0xc GE
	if(var_26_bool == 0) goto Label_18; // 0xd JumpB
	var_8_int = 2001; // 0xe TMovI
	var_3_bool = 1; // 0xf TMovB
	var_4_float = 10; // 0x10 TMovI
	goto Label_51; // 0x11 Jump
	
Label_51:
	GetWindowSize(var_14_int, var_13_int); // 0x33 Func
	var_27_bool = 1; // 0x35 PushB
	SetOwnerDraw(var_27_bool); // 0x36 Func
	var_28_bool = 1; // 0x38 PushB
	SetNeedUpdate(var_28_bool); // 0x39 Func
	ProcessEvents(); // 0x3b Func
	return 10; // 0x3d Return
	
Label_18:
	var_4_float = 1.0; // 0x12 TMovF
	var_29_int = 0; // 0x13 PushI
	var_30_bool = var_15_int == var_29_int; // 0x14 Eq
	if(var_30_bool == 0) goto Label_27; // 0x15 JumpB
	var_31_string = "d"; // 0x16 PushS
	var_32_int = var_31_string + var_16_int; // 0x17 Add
	var_33_string = "q01"; // 0x18 PushS
	var_17_string = var_32_int + var_33_string; // 0x19 Add2
	goto Label_39; // 0x1a Jump
	
Label_39:
	GetVariable(var_17_string, var_18_int); // 0x27 Func
	var_34_int = 1000; // 0x29 PushI
	var_35_bool = var_18_int == var_34_int; // 0x2a Eq
	if(var_35_bool == 0) goto Label_48; // 0x2b JumpB
	var_1_bool = 1; // 0x2c TMovB
	var_0_string = "alive"; // 0x2d TMovS
	var_8_int = 351; // 0x2e TMovI
	goto Label_51; // 0x2f Jump
	
Label_48:
	var_1_bool = 0; // 0x30 TMovB
	var_0_string = "dead"; // 0x31 TMovS
	var_8_int = 350; // 0x32 TMovI
	
Label_27:
	var_36_int = 1; // 0x1b PushI
	var_37_bool = var_15_int == var_36_int; // 0x1c Eq
	if(var_37_bool == 0) goto Label_35; // 0x1d JumpB
	var_38_string = "b"; // 0x1e PushS
	var_39_int = var_38_string + var_16_int; // 0x1f Add
	var_40_string = "q01"; // 0x20 PushS
	var_17_string = var_39_int + var_40_string; // 0x21 Add2
	goto Label_39; // 0x22 Jump
	
Label_35:
	var_41_string = "k"; // 0x23 PushS
	var_42_int = var_41_string + var_16_int; // 0x24 Add
	var_43_string = "q01"; // 0x25 PushS
	var_17_string = var_42_int + var_43_string; // 0x26 Add2
}


func_123(var_19_int)
{
	var_20_int = 0; var_21_int = 0; // 0x7b PushV
	var_22_string = "branch"; // 0x7c PushS
	GetVariable(var_22_string, var_21_int); // 0x7d Func
	var_19_int = var_21_int; // 0x7f Mov
	return 2; // 0x80 Return
}


func_111(var_12_bool)
{
	var_13_bool = 0; var_14_bool = 0; // 0x6f PushV
	var_15_bool = var_1_bool; // 0x70 PushT
	if(var_15_bool == 0) goto Label_118; // 0x71 JumpB
	var_16_string = "alive"; // 0x72 PushS
	IsSoundPlaying(var_14_bool, var_16_string); // 0x73 Func
	goto Label_121; // 0x75 Jump
	
Label_121:
	var_12_bool = var_14_bool; // 0x79 Mov
	return 2; // 0x7a Return
	
Label_118:
	var_17_string = "dead"; // 0x76 PushS
	IsSoundPlaying(var_14_bool, var_17_string); // 0x77 Func
}


