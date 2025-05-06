main()
{
	var_0_float = 0; var_1_float = 0; var_2_float = 0; var_3_float = 0; // 0x0 PushV
	
Label_1:
	GetGameTime(var_2_float); // 0x1 Func
	var_4_int = 24; // 0x3 PushI
	var_2_float = var_2_float % var_4_int; // 0x4 Mod2
	var_5_float = 6.0; // 0x5 PushF
	var_6_bool = var_2_float <= var_5_float; // 0x6 LE
	if(var_6_bool == 0) goto Label_10; // 0x7 JumpB
	var_3_float = 0.15686; // 0x8 MovF
	goto Label_42; // 0x9 Jump
	
Label_42:
	SetBaseVisibility(var_3_float); // 0x2a Func
	var_7_int = 5; // 0x2c PushI
	Sleep(var_7_int); // 0x2d Func
	goto Label_1; // 0x2f Jump
	
Label_10:
	var_8_float = 8.0; // 0xa PushF
	var_9_bool = var_2_float <= var_8_float; // 0xb LE
	if(var_9_bool == 0) goto Label_23; // 0xc JumpB
	var_10_float = 0; var_11_float = 0; var_12_float = 0; var_13_float = 0; var_14_float = 0; var_15_float = 0; // 0xd PushV
	var_11_float = var_2_float; // 0xe Mov
	var_12_float = 6.0; // 0xf MovF
	var_13_float = 8.0; // 0x10 MovF
	var_14_float = 0.15686; // 0x11 MovF
	var_15_float = 0.47059; // 0x12 MovF
	func_49(var_10_float, var_11_float, var_12_float, var_13_float, var_14_float, var_15_float); // 0x13 NEW_2
	var_3_float = var_10_float; // 0x14 Mov
	goto Label_42; // 0x16 Jump
	
Label_23:
	var_24_float = 20.0; // 0x17 PushF
	var_25_bool = var_2_float <= var_24_float; // 0x18 LE
	if(var_25_bool == 0) goto Label_28; // 0x19 JumpB
	var_3_float = 0.47059; // 0x1a MovF
	goto Label_42; // 0x1b Jump
	
Label_28:
	var_26_float = 21.0; // 0x1c PushF
	var_27_bool = var_2_float <= var_26_float; // 0x1d LE
	if(var_27_bool == 0) goto Label_41; // 0x1e JumpB
	var_28_float = 0; var_29_float = 0; var_30_float = 0; var_31_float = 0; var_32_float = 0; var_33_float = 0; // 0x1f PushV
	var_29_float = var_2_float; // 0x20 Mov
	var_30_float = 20.0; // 0x21 MovF
	var_31_float = 21.0; // 0x22 MovF
	var_32_float = 0.47059; // 0x23 MovF
	var_33_float = 0.15686; // 0x24 MovF
	func_49(var_28_float, var_29_float, var_30_float, var_31_float, var_32_float, var_33_float); // 0x25 NEW_2
	var_3_float = var_28_float; // 0x26 Mov
	goto Label_42; // 0x28 Jump
	
Label_41:
	var_3_float = 0.15686; // 0x29 MovF
}


func_49(var_10_float, var_11_float, var_12_float, var_13_float, var_14_float, var_15_float)
{
	var_16_float = 0; var_17_float = 0; // 0x31 PushV
	var_18_int = var_11_float - var_12_float; // 0x32 Sub
	var_19_int = var_13_float - var_12_float; // 0x33 Sub
	var_17_float = var_18_int / var_18_int; // 0x34 Div2
	var_20_int = 1; // 0x35 PushI
	var_21_int = var_20_int - var_17_float; // 0x36 Sub
	var_22_float = var_14_float * var_21_int; // 0x37 Mult
	var_23_float = var_15_float * var_17_float; // 0x38 Mult
	var_10_float = var_22_float + var_23_float; // 0x39 Add2
	return 2; // 0x3a Return
}


