task_0_event_1(var_0_string, var_1_bool, var_2_bool, var_3_float, var_4_int, var_5_int, var_6_int, var_7_int, var_8_float)
{
	var_9_bool = var_2_bool == 0; // 0x37 Not
	if(var_9_bool == 0) goto Label_62; // 0x38 JumpB
	var_2_bool = 1; // 0x39 TMovB
	PlaySound(var_0_string); // 0x3a Func
	return 0; // 0x3c Return
	
Label_62:
	var_10_bool = 0; // 0x3e PushV
	func_92(var_10_bool); // 0x3f NEW_2
	if(var_10_bool == 0) goto Label_67; // 0x41 JumpB
	return 0; // 0x42 Return
	
Label_67:
	var_3_float = var_3_float - var_8_float; // 0x43 Sub2
	var_16_int = 0; // 0x44 PushI
	var_17_bool = var_3_float <= var_16_int; // 0x45 LE
	if(var_17_bool == 0) goto Label_73; // 0x46 JumpB
	DestroyWindow(); // 0x47 Func
	
Label_73:
	return 0; // 0x49 Return
}


task_0_event_0(var_0_string, var_1_bool, var_2_bool, var_3_float, var_4_int, var_5_int, var_6_int, var_7_int)
{
	var_8_string = ""; var_9_float = 0; var_10_int = 0; var_11_string = ""; var_12_float = 0; var_13_int = 0; // 0x4a PushV
	var_14_int = 0; // 0x4b PushI
	var_15_bool = var_3_float <= var_14_int; // 0x4c LE
	if(var_15_bool == 0) goto Label_79; // 0x4d JumpB
	return 6; // 0x4e Return
	
Label_79:
	GetStringByID(var_11_string, var_7_int); // 0x4f Func
	var_16_float = 1.0; // 0x51 PushF
	var_12_float = var_3_float / var_12_float; // 0x52 Div2
	var_17_string = "default"; // 0x53 PushS
	var_18_int = 0; // 0x54 PushI
	var_19_int = 0; // 0x55 PushI
	var_20_float = 1.0; // 0x56 PushF
	var_21_float = 1.0; // 0x57 PushF
	var_22_float = 1.0; // 0x58 PushF
	PrintInWidth(var_13_int, var_17_string, var_18_int, var_19_int, var_19_int, var_11_string, var_20_float, var_21_float, var_22_float, var_12_float); // 0x59 Func
	return 6; // 0x5b Return
}


main(var_0_string, var_1_bool, var_2_bool, var_3_float, var_4_int, var_5_int, var_6_int, var_7_int)
{
	var_8_int = 0; var_9_int = 0; var_10_int = 0; var_11_string = ""; var_12_int = 0; var_13_int = 0; var_14_int = 0; var_15_int = 0; var_16_string = ""; var_17_int = 0; // 0x0 PushV
	var_18_int = 0; // 0x1 PushV
	func_104(var_18_int); // 0x2 NEW_2
	var_14_int = var_18_int; // 0x3 Mov
	var_22_string = "c_iWM_RealDayChange"; // 0x5 PushS
	GetVariable(var_22_string, var_15_int); // 0x6 Func
	var_23_int = -1; // 0x8 PushI
	var_15_int = var_15_int + var_23_int; // 0x9 Add2
	var_3_float = 1.0; // 0xa TMovF
	var_24_int = 0; // 0xb PushI
	var_25_bool = var_14_int == var_24_int; // 0xc Eq
	if(var_25_bool == 0) goto Label_19; // 0xd JumpB
	var_26_string = "d"; // 0xe PushS
	var_27_int = var_26_string + var_15_int; // 0xf Add
	var_28_string = "q01"; // 0x10 PushS
	var_16_string = var_27_int + var_28_string; // 0x11 Add2
	goto Label_31; // 0x12 Jump
	
Label_31:
	GetVariable(var_16_string, var_17_int); // 0x1f Func
	var_29_int = 1000; // 0x21 PushI
	var_30_bool = var_17_int == var_29_int; // 0x22 Eq
	if(var_30_bool == 0) goto Label_40; // 0x23 JumpB
	var_1_bool = 1; // 0x24 TMovB
	var_0_string = "alive"; // 0x25 TMovS
	var_7_int = 351; // 0x26 TMovI
	goto Label_43; // 0x27 Jump
	
Label_43:
	GetWindowSize(var_14_int, var_13_int); // 0x2b Func
	var_31_bool = 1; // 0x2d PushB
	SetOwnerDraw(var_31_bool); // 0x2e Func
	var_32_bool = 1; // 0x30 PushB
	SetNeedUpdate(var_32_bool); // 0x31 Func
	ProcessEvents(); // 0x33 Func
	return 10; // 0x35 Return
	
Label_40:
	var_1_bool = 0; // 0x28 TMovB
	var_0_string = "dead"; // 0x29 TMovS
	var_7_int = 350; // 0x2a TMovI
	
Label_19:
	var_33_int = 1; // 0x13 PushI
	var_34_bool = var_14_int == var_33_int; // 0x14 Eq
	if(var_34_bool == 0) goto Label_27; // 0x15 JumpB
	var_35_string = "b"; // 0x16 PushS
	var_36_int = var_35_string + var_15_int; // 0x17 Add
	var_37_string = "q01"; // 0x18 PushS
	var_16_string = var_36_int + var_37_string; // 0x19 Add2
	goto Label_31; // 0x1a Jump
	
Label_27:
	var_38_string = "k"; // 0x1b PushS
	var_39_int = var_38_string + var_15_int; // 0x1c Add
	var_40_string = "q01"; // 0x1d PushS
	var_16_string = var_39_int + var_40_string; // 0x1e Add2
}


func_104(var_18_int)
{
	var_19_int = 0; var_20_int = 0; // 0x68 PushV
	var_21_string = "branch"; // 0x69 PushS
	GetVariable(var_21_string, var_20_int); // 0x6a Func
	var_18_int = var_20_int; // 0x6c Mov
	return 2; // 0x6d Return
}


func_92(var_10_bool)
{
	var_11_bool = 0; var_12_bool = 0; // 0x5c PushV
	var_13_bool = var_1_bool; // 0x5d PushT
	if(var_13_bool == 0) goto Label_99; // 0x5e JumpB
	var_14_string = "alive"; // 0x5f PushS
	IsSoundPlaying(var_12_bool, var_14_string); // 0x60 Func
	goto Label_102; // 0x62 Jump
	
Label_102:
	var_10_bool = var_12_bool; // 0x66 Mov
	return 2; // 0x67 Return
	
Label_99:
	var_15_string = "dead"; // 0x63 PushS
	IsSoundPlaying(var_12_bool, var_15_string); // 0x64 Func
}


