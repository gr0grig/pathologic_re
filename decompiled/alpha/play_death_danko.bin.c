main()
{
	var_0_float = 0.15; // 0x0 PushF
	ModBlurLevel(var_0_float); // 0x1 Func
	var_1_string = "danko_death.mot"; // 0x3 PushS
	var_2_bool = 1; // 0x4 PushB
	CameraPlayRel(var_1_string, var_2_bool); // 0x5 Func
	var_3_float = 1.5; // 0x7 PushF
	Sleep(var_3_float); // 0x8 Func
	var_4_float = 0; var_5_float = 0; var_6_float = 0; // 0xa PushV
	var_4_float = 0; // 0xb MovI
	var_5_float = 1; // 0xc MovI
	var_6_float = 1.25; // 0xd MovF
	func_21(var_5_float, var_6_float); // 0xe Call
	CameraWaitForPlayFinish(); // 0x10 Func
	Hold(); // 0x12 Func
	return 0; // 0x14 Return
}


func_21(var_4_float, var_5_float)
{
	var_7_bool = 0; var_8_float = 0; var_9_float = 0; var_10_bool = 0; var_11_float = 0; var_12_float = 0; // 0x15 PushV
	var_10_bool = var_5_float > var_4_float; // 0x16 GT2
	var_13_int = var_5_float - var_4_float; // 0x17 Sub
	var_11_float = var_13_int / var_13_int; // 0x18 Div2
	
Label_25:
	var_14_bool = var_10_bool; // 0x19 Push
	if(var_14_bool == 0) goto Label_29; // 0x1a JumpB
	var_15_bool = var_4_float < var_5_float; // 0x1b LT
	goto Label_30; // 0x1c Jump
	
Label_30:
	if(var_15_bool == 0) goto Label_38; // 0x1e JumpB
	ModDarkenLevel(var_4_float); // 0x1f Func
	sync(var_12_float); // 0x21 Func
	var_16_float = var_12_float * var_11_float; // 0x23 Mult
	var_4_float = var_4_float + var_16_float; // 0x24 Add2
	goto Label_25; // 0x25 Jump
	
Label_38:
	ModDarkenLevel(var_5_float); // 0x26 Func
	return 6; // 0x28 Return
	
Label_29:
	var_17_bool = var_5_float < var_4_float; // 0x1d LT
}


