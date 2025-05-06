main()
{
	var_0_bool = 0; var_1_float = 0; var_2_bool = 0; var_3_float = 0; // 0x0 PushV
	
Label_1:
	GetEyesHeightCoef(var_3_float); // 0x1 Func
	var_4_int = 1; // 0x3 PushI
	var_5_bool = var_3_float == var_4_int; // 0x4 Eq
	if(var_5_bool == 0) goto Label_18; // 0x5 JumpB
	
Label_6:
	sync(); // 0x6 Func
	IsSneakEnabled(var_2_bool); // 0x8 Func
	var_6_bool = var_2_bool; // 0xa Push
	if(var_6_bool == 0) goto Label_13; // 0xb JumpB
	goto Label_14; // 0xc Jump
	
Label_14:
	func_31(); // 0xf NEW_2
	goto Label_29; // 0x11 Jump
	
Label_29:
	goto Label_1; // 0x1d Jump
	
Label_13:
	goto Label_6; // 0xd Jump
	
Label_18:
	IsSneakEnabled(var_2_bool); // 0x12 Func
	var_19_bool = var_2_bool; // 0x14 Push
	if(var_19_bool == 0) goto Label_26; // 0x15 JumpB
	func_31(); // 0x17 NEW_2
	goto Label_29; // 0x19 Jump
	
Label_26:
	func_58(); // 0x1b NEW_2
}


func_58()
{
	var_20_bool = 0; var_21_float = 0; var_22_float = 0; var_23_bool = 0; var_24_float = 0; var_25_float = 0; // 0x3a PushV
	
Label_59:
	sync(var_24_float); // 0x3b Func
	GetEyesHeightCoef(var_25_float); // 0x3d Func
	var_26_float = 1.2; // 0x3f PushF
	var_27_float = var_26_float * var_24_float; // 0x40 Mult
	var_25_float = var_25_float + var_27_float; // 0x41 Add2
	var_28_int = 1; // 0x42 PushI
	var_29_bool = var_25_float >= var_28_int; // 0x43 GE
	if(var_29_bool == 0) goto Label_70; // 0x44 JumpB
	goto Label_73; // 0x45 Jump
	
Label_73:
	var_30_int = 1; // 0x49 PushI
	SetEyesHeightCoef(var_30_int); // 0x4a Func
	return 6; // 0x4c Return
	
Label_70:
	SetEyesHeightCoef(var_25_float); // 0x46 Func
	goto Label_59; // 0x48 Jump
}


func_31()
{
	var_7_bool = 0; var_8_float = 0; var_9_float = 0; var_10_bool = 0; var_11_float = 0; var_12_float = 0; // 0x1f PushV
	
Label_32:
	sync(var_11_float); // 0x20 Func
	GetEyesHeightCoef(var_12_float); // 0x22 Func
	var_13_float = 1.2; // 0x24 PushF
	var_14_float = var_13_float * var_11_float; // 0x25 Mult
	var_12_float = var_12_float - var_14_float; // 0x26 Sub2
	var_15_float = 0.8; // 0x27 PushF
	var_16_bool = var_12_float <= var_15_float; // 0x28 LE
	if(var_16_bool == 0) goto Label_46; // 0x29 JumpB
	var_17_float = 0.8; // 0x2a PushF
	SetEyesHeightCoef(var_17_float); // 0x2b Func
	goto Label_49; // 0x2d Jump
	
Label_49:
	sync(); // 0x31 Func
	IsSneakEnabled(var_10_bool); // 0x33 Func
	var_18_bool = var_10_bool == 0; // 0x35 Not
	if(var_18_bool == 0) goto Label_56; // 0x36 JumpB
	goto Label_57; // 0x37 Jump
	
Label_57:
	return 6; // 0x39 Return
	
Label_56:
	goto Label_49; // 0x38 Jump
	
Label_46:
	SetEyesHeightCoef(var_12_float); // 0x2e Func
	goto Label_32; // 0x30 Jump
}


