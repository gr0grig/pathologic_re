task_0_event_0(var_0_bool, var_1_bool)
{
	var_2_bool = 0; // 0xb PushV
	var_2_bool = 1; // 0xc MovB
	var_3_bool = var_0_bool == 0; // 0xd Not
	if(var_3_bool == 0) goto Label_18; // 0xe JumpB
	var_4_bool = var_1_bool; // 0xf PushT
	if(var_4_bool == 0) goto Label_18; // 0x10 JumpB
	var_2_bool = 0; // 0x11 MovB
	
Label_18:
	if(var_2_bool == 0) goto Label_26; // 0x12 JumpB
	var_5_string = "disabled"; // 0x13 PushS
	var_6_int = 0; // 0x14 PushI
	var_7_int = 0; // 0x15 PushI
	var_8_int = 250; // 0x16 PushI
	var_9_int = 297; // 0x17 PushI
	StretchBlit(var_5_string, var_6_int, var_7_int, var_8_int, var_9_int); // 0x18 Func
	
Label_26:
	return 0; // 0x1a Return
}


task_0_event_2(var_0_bool, var_1_bool, var_2_int, var_3_int)
{
	var_4_bool = var_1_bool == 0; // 0x1c Not
	if(var_4_bool == 0) goto Label_33; // 0x1d JumpB
	var_5_int = 0; // 0x1e PushI
	SendMessageToParent(var_5_int); // 0x1f Func
	
Label_33:
	return 0; // 0x21 Return
}


task_0_event_9(var_0_bool, var_1_bool)
{
	var_0_bool = 1; // 0x22 TMovB
	var_2_int = 1; // 0x23 PushI
	SendMessageToParent(var_2_int); // 0x24 Func
	return 0; // 0x26 Return
}


task_0_event_10(var_0_bool, var_1_bool)
{
	var_0_bool = 0; // 0x27 TMovB
	var_2_int = 2; // 0x28 PushI
	SendMessageToParent(var_2_int); // 0x29 Func
	return 0; // 0x2b Return
}


task_0_event_200(var_0_bool, var_1_bool, var_2_int, var_3_string, var_4_object)
{
	var_5_int = 131072; // 0x2d PushI
	var_6_bool = var_5_int == var_2_int; // 0x2e Eq
	if(var_6_bool == 0) goto Label_50; // 0x2f JumpB
	var_1_bool = 1; // 0x30 TMovB
	goto Label_74; // 0x31 Jump
	
Label_74:
	return 0; // 0x4a Return
	
Label_50:
	var_7_int = 0; // 0x32 PushI
	var_8_bool = var_2_int == var_7_int; // 0x33 Eq
	if(var_8_bool == 0) goto Label_58; // 0x34 JumpB
	var_0_bool = 0; // 0x35 TMovB
	var_9_int = 2; // 0x36 PushI
	SendMessageToParent(var_9_int); // 0x37 Func
	goto Label_74; // 0x39 Jump
	
Label_58:
	var_10_int = 1; // 0x3a PushI
	var_11_bool = var_2_int == var_10_int; // 0x3b Eq
	if(var_11_bool == 0) goto Label_66; // 0x3c JumpB
	var_0_bool = 1; // 0x3d TMovB
	var_12_int = 1; // 0x3e PushI
	SendMessageToParent(var_12_int); // 0x3f Func
	goto Label_74; // 0x41 Jump
	
Label_66:
	var_13_int = 2; // 0x42 PushI
	var_14_bool = var_2_int == var_13_int; // 0x43 Eq
	if(var_14_bool == 0) goto Label_74; // 0x44 JumpB
	var_15_bool = var_1_bool == 0; // 0x45 Not
	if(var_15_bool == 0) goto Label_74; // 0x46 JumpB
	var_16_int = 0; // 0x47 PushI
	SendMessageToParent(var_16_int); // 0x48 Func
}


main(var_0_bool, var_1_bool)
{
	var_0_bool = 0; // 0x0 TMovB
	var_1_bool = 0; // 0x1 TMovB
	var_2_string = "default"; // 0x2 PushS
	SetBackground(var_2_string); // 0x3 Func
	var_3_bool = 1; // 0x5 PushB
	SetOwnerDraw(var_3_bool); // 0x6 Func
	ProcessEvents(); // 0x8 Func
	return 0; // 0xa Return
}


