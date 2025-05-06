task_0_event_200(var_0_int, var_1_int, var_2_string, var_3_object)
{
	var_0_int = var_1_int; // 0xb TMov
	var_4_int = 100; // 0xc PushI
	var_5_bool = var_0_int > var_4_int; // 0xd GT
	if(var_5_bool == 0) goto Label_16; // 0xe JumpB
	var_0_int = 100; // 0xf TMovI
	
Label_16:
	var_6_int = 0; // 0x10 PushI
	var_7_bool = var_0_int < var_6_int; // 0x11 LT
	if(var_7_bool == 0) goto Label_20; // 0x12 JumpB
	var_0_int = 0; // 0x13 TMovI
	
Label_20:
	return 0; // 0x14 Return
}


task_0_event_0(var_0_int)
{
	var_1_string = ""; var_2_int = 0; var_3_int = 0; var_4_int = 0; var_5_int = 0; var_6_string = ""; var_7_int = 0; var_8_int = 0; var_9_int = 0; var_10_int = 0; // 0x15 PushV
	var_11_int = 33; // 0x16 PushI
	var_12_bool = var_0_int <= var_11_int; // 0x17 LE
	if(var_12_bool == 0) goto Label_27; // 0x18 JumpB
	var_6_string = "r1"; // 0x19 MovS
	goto Label_33; // 0x1a Jump
	
Label_33:
	GetWindowSize(var_7_int, var_8_int); // 0x21 Func
	var_13_int = 2; // 0x23 PushI
	var_9_int = var_0_int + var_13_int; // 0x24 Add2
	var_14_int = 100; // 0x25 PushI
	var_15_bool = var_9_int > var_14_int; // 0x26 GT
	if(var_15_bool == 0) goto Label_41; // 0x27 JumpB
	var_9_int = 100; // 0x28 MovI
	
Label_41:
	var_16_float = var_7_int * var_0_int; // 0x29 Mult
	var_17_int = 100; // 0x2a PushI
	var_10_int = var_16_float / var_16_float; // 0x2b Div2
	var_18_string = "default"; // 0x2c PushS
	var_19_int = 0; // 0x2d PushI
	var_20_int = 0; // 0x2e PushI
	Blit(var_18_string, var_19_int, var_20_int); // 0x2f Func
	var_21_int = 0; // 0x31 PushI
	var_22_int = 0; // 0x32 PushI
	var_23_int = 0; // 0x33 PushI
	var_24_int = 0; // 0x34 PushI
	BlitClipped(var_6_string, var_21_int, var_22_int, var_23_int, var_24_int, var_10_int, var_8_int); // 0x35 Func
	return 10; // 0x37 Return
	
Label_27:
	var_25_int = 66; // 0x1b PushI
	var_26_bool = var_0_int <= var_25_int; // 0x1c LE
	if(var_26_bool == 0) goto Label_32; // 0x1d JumpB
	var_6_string = "r2"; // 0x1e MovS
	goto Label_33; // 0x1f Jump
	
Label_32:
	var_6_string = "r3"; // 0x20 MovS
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


