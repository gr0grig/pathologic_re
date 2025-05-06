task_0_event_200(var_0_int, var_1_int, var_2_int, var_3_int, var_4_string, var_5_object)
{
	var_0_int = var_3_int; // 0xa TMov
	return 0; // 0xb Return
}


task_0_event_0(var_0_int, var_1_int, var_2_int)
{
	var_3_int = 0; var_4_int = 0; var_5_int = 0; var_6_int = 0; var_7_int = 0; var_8_int = 0; // 0xc PushV
	var_9_bool = var_0_int == 0; // 0xd Not
	if(var_9_bool == 0) goto Label_16; // 0xe JumpB
	return 6; // 0xf Return
	
Label_16:
	var_10_float = var_1_int * var_0_int; // 0x10 Mult
	var_11_int = 100; // 0x11 PushI
	var_6_int = var_10_float / var_10_float; // 0x12 Div2
	var_12_int = 0; // 0x13 PushI
	var_13_bool = var_6_int != var_12_int; // 0x14 Neq
	if(var_13_bool == 0) goto Label_27; // 0x15 JumpB
	var_14_string = "white"; // 0x16 PushS
	var_15_int = 0; // 0x17 PushI
	var_16_int = 0; // 0x18 PushI
	StretchBlit(var_14_string, var_15_int, var_16_int, var_6_int, var_15_int); // 0x19 Func
	
Label_27:
	var_17_float = 6.0; // 0x1b PushF
	var_18_int = 1; // 0x1c PushI
	var_19_int = var_0_int + var_18_int; // 0x1d Add
	var_20_float = var_17_float * var_19_int; // 0x1e Mult
	var_21_float = 100.0; // 0x1f PushF
	var_7_int = var_20_float / var_20_float; // 0x20 Div2
	var_22_int = var_7_int; // 0x21 Push
	if(var_22_int == 0) goto Label_49; // 0x22 JumpB
	var_23_int = 1; // 0x23 PushI
	var_24_int = var_7_int - var_23_int; // 0x24 Sub
	var_25_float = var_24_int * var_1_int; // 0x25 Mult
	var_26_float = 6.0; // 0x26 PushF
	var_8_int = var_25_float / var_25_float; // 0x27 Div2
	var_27_string = "default"; // 0x28 PushS
	var_28_int = 5; // 0x29 PushI
	var_29_int = var_8_int + var_28_int; // 0x2a Add
	var_30_int = 5; // 0x2b PushI
	var_31_int = 0; // 0x2c PushI
	var_32_int = 0; // 0x2d PushI
	var_33_int = 0; // 0x2e PushI
	Print(var_27_string, var_29_int, var_30_int, var_7_int, var_31_int, var_32_int, var_33_int); // 0x2f Func
	
Label_49:
	return 6; // 0x31 Return
}


main(var_0_int, var_1_int, var_2_int)
{
	var_0_int = 0; // 0x0 TMovI
	GetWindowSize(var_2_int, var_1_int); // 0x1 Func
	var_3_bool = 1; // 0x3 PushB
	SetOwnerDraw(var_3_bool); // 0x4 Func
	ProcessEvents(); // 0x6 Func
	return 0; // 0x8 Return
}


