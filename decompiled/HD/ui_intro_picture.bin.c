task_0_event_0(var_0_float, var_1_float, var_2_float, var_3_int, var_4_int, var_5_int, var_6_int, var_7_bool)
{
	var_8_bool = var_7_bool == 0; // 0x1b Not
	if(var_8_bool == 0) goto Label_35; // 0x1c JumpB
	var_9_int = 1; // 0x1d PushI
	var_10_int = var_3_int + var_9_int; // 0x1e Add
	var_11_int = 0; // 0x1f PushI
	var_12_int = 0; // 0x20 PushI
	StretchBlit(var_10_int, var_11_int, var_12_int, var_6_int, var_5_int, var_11_int); // 0x21 Func
	
Label_35:
	return 0; // 0x23 Return
}


task_0_event_200(var_0_float, var_1_float, var_2_float, var_3_int, var_4_int, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_string, var_10_object)
{
	var_11_string = "intro"; // 0x25 PushS
	var_12_bool = var_9_string == var_11_string; // 0x26 Eq
	if(var_12_bool == 0) goto Label_43; // 0x27 JumpB
	func_75(var_4_int, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_string, var_10_object); // 0x29 NEW_2
	
Label_43:
	return 0; // 0x2b Return
}


task_0_event_1(var_0_float, var_1_float, var_2_float, var_3_int, var_4_int, var_5_int, var_6_int, var_7_bool, var_8_float)
{
	var_9_bool = var_7_bool; // 0x2d PushT
	if(var_9_bool == 0) goto Label_48; // 0x2e JumpB
	return 0; // 0x2f Return
	
Label_48:
	var_0_float = var_0_float - var_8_float; // 0x30 Sub2
	var_10_int = 0; // 0x31 PushI
	var_11_bool = var_0_float > var_10_int; // 0x32 GT
	if(var_11_bool == 0) goto Label_53; // 0x33 JumpB
	return 0; // 0x34 Return
	
Label_53:
	var_1_float = var_1_float - var_8_float; // 0x35 Sub2
	var_12_int = 0; // 0x36 PushI
	var_13_bool = var_1_float < var_12_int; // 0x37 LT
	if(var_13_bool == 0) goto Label_69; // 0x38 JumpB
	var_14_int = 1; // 0x39 PushI
	var_2_float = var_14_int + var_1_float; // 0x3a Add2
	var_15_int = -1; // 0x3b PushI
	var_16_bool = var_1_float < var_15_int; // 0x3c LT
	if(var_16_bool == 0) goto Label_68; // 0x3d JumpB
	var_17_int = 0; // 0x3e PushI
	var_18_string = "intro"; // 0x3f PushS
	SendMessage(var_17_int, var_18_string); // 0x40 Func
	var_7_bool = 1; // 0x42 TMovB
	return 0; // 0x43 Return
	
Label_68:
	goto Label_70; // 0x44 Jump
	
Label_70:
	var_19_int = 1; // 0x46 PushI
	var_20_bool = var_2_float > var_19_int; // 0x47 GT
	if(var_20_bool == 0) goto Label_74; // 0x48 JumpB
	var_2_float = 1; // 0x49 TMovI
	
Label_74:
	return 0; // 0x4a Return
	
Label_69:
	var_2_float = -var_0_float; // 0x45 Neg2
}


main(var_0_float, var_1_float, var_2_float, var_3_int, var_4_int, var_5_int, var_6_int, var_7_bool)
{
	var_8_bool = 0; var_9_bool = 0; // 0x0 PushV
	GetWindowSize(var_5_int, var_4_int); // 0x1 Func
	var_7_bool = 1; // 0x3 TMovB
	var_4_int = 0; // 0x4 TMovI
	var_3_int = 0; // 0x5 TMovI
	
Label_6:
	var_10_bool = 1; // 0x6 PushB
	if(var_10_bool == 0) goto Label_18; // 0x7 JumpB
	var_11_int = 1; // 0x8 PushI
	var_12_int = var_4_int + var_11_int; // 0x9 Add
	IsImageLoaded(var_9_bool, var_12_int); // 0xa Func
	var_13_bool = var_9_bool == 0; // 0xc Not
	if(var_13_bool == 0) goto Label_15; // 0xd JumpB
	goto Label_18; // 0xe Jump
	
Label_18:
	var_14_bool = 1; // 0x12 PushB
	SetOwnerDraw(var_14_bool); // 0x13 Func
	var_15_bool = 1; // 0x15 PushB
	SetNeedUpdate(var_15_bool); // 0x16 Func
	ProcessEvents(); // 0x18 Func
	return 2; // 0x1a Return
	
Label_15:
	var_16_int = 1; // 0xf PushI
	var_4_int = var_4_int + var_16_int; // 0x10 Add2
	goto Label_6; // 0x11 Jump
}


func_75(var_0_float, var_1_float, var_2_float, var_3_int, var_4_int, var_7_bool, var_10_object)
{
	var_7_bool = 0; // 0x4b TMovB
	var_0_float = 1; // 0x4c TMovI
	rand(var_10_object); // 0x4d Func
	var_13_int = 6; // 0x4f PushI
	var_14_int = 3; // 0x50 PushI
	var_15_float = var_1_float * var_14_int; // 0x51 Mult
	var_1_float = var_13_int + var_15_float; // 0x52 Add2
	var_2_float = 0; // 0x53 TMovI
	var_16_int = 1; // 0x54 PushI
	var_3_int = var_3_int + var_16_int; // 0x55 Add2
	var_3_int = var_3_int % var_4_int; // 0x56 Mod2
	return 0; // 0x57 Return
}


