main(var_0_bool)
{
	var_1_float = 0; var_2_float = 0; // 0x0 PushV
	var_3_string = "immunity"; // 0x1 PushS
	GetProperty(var_3_string, var_2_float); // 0x2 Func
	var_4_float = 1.2; // 0x4 PushF
	var_5_bool = var_2_float < var_4_float; // 0x5 LT
	if(var_5_bool == 0) goto Label_11; // 0x6 JumpB
	var_6_string = "immunity"; // 0x7 PushS
	var_7_float = 1.2; // 0x8 PushF
	SetProperty(var_6_string, var_7_float); // 0x9 Func
	
Label_11:
	var_8_float = 0; // 0xb PushV
	var_8_float = 4.0; // 0xc MovF
	func_33(var_8_float); // 0xd NEW_2
	return 2; // 0xf Return
}


func_16(var_20_bool, var_21_float)
{
	var_22_float = 0; var_23_float = 0; // 0x10 PushV
	var_24_string = "immunity"; // 0x11 PushS
	GetProperty(var_24_string, var_23_float); // 0x12 Func
	var_25_float = 1.2; // 0x14 PushF
	var_26_bool = var_23_float < var_25_float; // 0x15 LT
	if(var_26_bool == 0) goto Label_31; // 0x16 JumpB
	var_27_bool = 0; var_28_string = ""; var_29_float = 0; var_30_float = 0; var_31_float = 0; // 0x17 PushV
	var_28_string = "immunity"; // 0x18 MovS
	var_32_float = 2.0; // 0x19 PushF
	var_29_float = var_21_float * var_32_float; // 0x1a Mult2
	var_30_float = 0; // 0x1b MovI
	var_31_float = 1.2; // 0x1c MovF
	func_65(var_27_bool, var_28_string, var_29_float, var_30_float, var_31_float); // 0x1d NEW_2
	
Label_31:
	var_20_bool = 0; // 0x1f MovB
	return 2; // 0x20 Return
}


func_65(var_27_bool, var_28_string, var_29_float, var_30_float, var_31_float)
{
	var_33_bool = 0; var_34_float = 0; var_35_bool = 0; var_36_float = 0; // 0x41 PushV
	HasProperty(var_28_string, var_35_bool); // 0x42 Func
	var_37_bool = var_35_bool == 0; // 0x44 Not
	if(var_37_bool == 0) goto Label_72; // 0x45 JumpB
	var_27_bool = 0; // 0x46 MovB
	return 4; // 0x47 Return
	
Label_72:
	GetProperty(var_28_string, var_36_float); // 0x48 Func
	var_38_float = 0; var_39_float = 0; var_40_float = 0; var_41_float = 0; // 0x4a PushV
	var_39_float = var_36_float + var_29_float; // 0x4b Add2
	var_40_float = var_30_float; // 0x4c Mov
	var_41_float = var_31_float; // 0x4d Mov
	func_84(var_38_float, var_39_float, var_40_float, var_41_float); // 0x4e NEW_2
	SetProperty(var_28_string, var_38_float); // 0x50 Func
	var_27_bool = 1; // 0x52 MovB
	return 4; // 0x53 Return
}


func_84(var_38_float, var_39_float, var_40_float, var_41_float)
{
	var_42_bool = var_39_float < var_40_float; // 0x55 LT
	if(var_42_bool == 0) goto Label_89; // 0x56 JumpB
	var_38_float = var_40_float; // 0x57 Mov
	return 0; // 0x58 Return
	
Label_89:
	var_43_bool = var_39_float > var_41_float; // 0x59 GT
	if(var_43_bool == 0) goto Label_93; // 0x5a JumpB
	var_38_float = var_41_float; // 0x5b Mov
	return 0; // 0x5c Return
	
Label_93:
	var_38_float = var_39_float; // 0x5d Mov
	return 0; // 0x5e Return
}


func_33(var_8_float)
{
	var_9_float = 0; var_10_float = 0; var_11_float = 0; var_12_float = 0; var_13_float = 0; var_14_float = 0; var_15_float = 0; var_16_float = 0; // 0x21 PushV
	GetGameTime(var_13_float); // 0x22 Func
	var_14_float = var_13_float + var_8_float; // 0x24 Add2
	var_15_float = var_13_float; // 0x25 Mov
	
Label_38:
	sync(); // 0x26 Func
	var_17_bool = var_0_bool; // 0x28 PushT
	if(var_17_bool == 0) goto Label_43; // 0x29 JumpB
	goto Label_64; // 0x2a Jump
	
Label_64:
	return 8; // 0x40 Return
	
Label_43:
	GetGameTime(var_16_float); // 0x2b Func
	var_18_bool = var_16_float <= var_15_float; // 0x2d LE
	if(var_18_bool == 0) goto Label_48; // 0x2e JumpB
	goto Label_63; // 0x2f Jump
	
Label_63:
	goto Label_38; // 0x3f Jump
	
Label_48:
	var_19_bool = var_16_float >= var_14_float; // 0x30 GE
	if(var_19_bool == 0) goto Label_56; // 0x31 JumpB
	var_20_bool = 0; var_21_float = 0; // 0x32 PushV
	var_21_float = var_14_float - var_15_float; // 0x33 Sub2
	func_16(var_20_bool, var_21_float); // 0x34 NEW_2
	goto Label_64; // 0x36 Jump
	
Label_56:
	var_44_bool = 0; var_45_float = 0; // 0x38 PushV
	var_45_float = var_16_float - var_15_float; // 0x39 Sub2
	func_16(var_44_bool, var_45_float); // 0x3a NEW_2
	if(var_44_bool == 0) goto Label_62; // 0x3c JumpB
	goto Label_64; // 0x3d Jump
	
Label_62:
	var_15_float = var_16_float; // 0x3e Mov
}


