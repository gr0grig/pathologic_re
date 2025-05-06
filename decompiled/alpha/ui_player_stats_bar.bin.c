task_0_event_200(var_0_int, var_1_int, var_2_string, var_3_object)
{
	var_0_int = var_1_int; // 0xb TMov
	return 0; // 0xc Return
}


task_0_event_0(var_0_int)
{
	var_1_int = 0; var_2_int = 0; var_3_int = 0; var_4_int = 0; var_5_int = 0; var_6_int = 0; // 0xd PushV
	GetWindowSize(var_4_int, var_5_int); // 0xe Func
	var_7_float = var_4_int * var_0_int; // 0x10 Mult
	var_8_int = 100; // 0x11 PushI
	var_6_int = var_7_float / var_7_float; // 0x12 Div2
	var_9_int = 4; // 0x13 PushI
	var_10_bool = var_6_int < var_9_int; // 0x14 LT
	if(var_10_bool == 0) goto Label_23; // 0x15 JumpB
	return 6; // 0x16 Return
	
Label_23:
	var_11_int = 4; // 0x17 PushI
	var_6_int = var_6_int - var_11_int; // 0x18 Sub2
	var_12_int = 0; // 0x19 PushI
	var_13_bool = var_6_int != var_12_int; // 0x1a Neq
	if(var_13_bool == 0) goto Label_34; // 0x1b JumpB
	var_14_string = "middle"; // 0x1c PushS
	var_15_int = 2; // 0x1d PushI
	var_16_int = 0; // 0x1e PushI
	var_17_int = 7; // 0x1f PushI
	StretchBlit(var_14_string, var_15_int, var_16_int, var_6_int, var_17_int); // 0x20 Func
	
Label_34:
	var_18_string = "start"; // 0x22 PushS
	var_19_int = 0; // 0x23 PushI
	var_20_int = 0; // 0x24 PushI
	Blit(var_18_string, var_19_int, var_20_int); // 0x25 Func
	var_21_string = "end"; // 0x27 PushS
	var_22_int = 2; // 0x28 PushI
	var_23_int = var_22_int + var_6_int; // 0x29 Add
	var_24_int = 0; // 0x2a PushI
	Blit(var_21_string, var_23_int, var_24_int); // 0x2b Func
	return 6; // 0x2d Return
}


main(var_0_int)
{
	var_0_int = 0; // 0x0 TMovI
	var_1_bool = 1; // 0x1 PushB
	EnableClipping(var_1_bool); // 0x2 Func
	var_2_bool = 1; // 0x4 PushB
	SetOwnerDraw(var_2_bool); // 0x5 Func
	ProcessEvents(); // 0x7 Func
	return 0; // 0x9 Return
}


