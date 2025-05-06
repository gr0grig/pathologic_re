main()
{
	var_0_bool = 0; var_1_bool = 0; // 0x0 PushV
	
Label_1:
	IsFlashlightOn(var_1_bool); // 0x1 Func
	var_2_bool = 0; // 0x3 PushV
	var_2_bool = 0; // 0x4 MovB
	var_3_bool = var_1_bool; // 0x5 Push
	if(var_3_bool == 0) goto Label_13; // 0x6 JumpB
	var_4_bool = 0; // 0x7 PushV
	func_95(var_4_bool); // 0x8 Call
	var_12_bool = var_4_bool == 0; // 0xa Not
	if(var_12_bool == 0) goto Label_13; // 0xb JumpB
	var_2_bool = 1; // 0xc MovB
	
Label_13:
	if(var_2_bool == 0) goto Label_17; // 0xd JumpB
	func_21(); // 0xf Call
	
Label_17:
	sync(); // 0x11 Func
	goto Label_1; // 0x13 Jump
}


func_89(var_25_bool, var_26_int)
{
	var_27_int = 0; var_28_int = 0; // 0x59 PushV
	var_29_string = "kerosene"; // 0x5a PushS
	RemoveItemByType(var_28_int, var_29_string, var_26_int); // 0x5b Func
	var_25_bool = var_28_int == var_26_int; // 0x5d Eq2
	return 2; // 0x5e Return
}


func_21()
{
	var_13_float = 0; var_14_float = 0; var_15_float = 0; var_16_float = 0; var_17_bool = 0; var_18_int = 0; var_19_float = 0; var_20_float = 0; var_21_float = 0; var_22_float = 0; var_23_bool = 0; var_24_int = 0; // 0x15 PushV
	var_25_bool = 0; var_26_int = 0; // 0x16 PushV
	var_26_int = 1; // 0x17 MovI
	func_89(var_25_bool, var_26_int); // 0x18 Call
	if(var_25_bool == 0) goto Label_82; // 0x1a JumpB
	var_19_float = 0; // 0x1b MovI
	var_20_float = 0; // 0x1c MovI
	
Label_29:
	var_30_int = 0; // 0x1d PushI
	var_31_bool = var_20_float <= var_30_int; // 0x1e LE
	if(var_31_bool == 0) goto Label_44; // 0x1f JumpB
	var_32_float = 0.92; // 0x20 PushF
	var_33_float = 1.0; // 0x21 PushF
	rand(var_21_float, var_32_float, var_33_float); // 0x22 Func
	var_34_cvector = CVector(0.48039, 0.43333, 0.2902); // 0x24 PushVec
	var_35_float = var_34_cvector * var_21_float; // 0x25 Mult
	SetFlashlightColor(var_35_float); // 0x26 Func
	var_36_float = 0.075; // 0x28 PushF
	var_37_float = 0.1; // 0x29 PushF
	rand(var_20_float, var_36_float, var_37_float); // 0x2a Func
	
Label_44:
	sync(var_22_float); // 0x2c Func
	IsFlashlightOn(var_23_bool); // 0x2e Func
	var_38_bool = 0; // 0x30 PushV
	var_38_bool = 1; // 0x31 MovB
	var_39_bool = var_23_bool == 0; // 0x32 Not
	if(var_39_bool == 0) goto Label_57; // 0x33 JumpB
	var_40_bool = 0; // 0x34 PushV
	func_95(var_40_bool); // 0x35 Call
	if(var_40_bool == 0) goto Label_57; // 0x37 JumpB
	var_38_bool = 0; // 0x38 MovB
	
Label_57:
	if(var_38_bool == 0) goto Label_59; // 0x39 JumpB
	return 12; // 0x3a Return
	
Label_59:
	var_20_float = var_20_float - var_22_float; // 0x3b Sub2
	var_19_float = var_19_float + var_22_float; // 0x3c Add2
	var_41_int = 0; // 0x3d PushV
	var_41_int = var_19_float; // 0x3e Mov
	var_42_int = 5; // 0x3f PushI
	var_43_bool = var_41_int >= var_42_int; // 0x40 GE
	if(var_43_bool == 0) goto Label_67; // 0x41 JumpB
	goto Label_68; // 0x42 Jump
	
Label_68:
	var_44_int = 0; // 0x44 PushV
	var_44_int = var_19_float; // 0x45 Mov
	var_45_int = 5; // 0x46 PushI
	var_24_int = var_44_int / var_44_int; // 0x47 Div2
	var_46_bool = 0; var_47_int = 0; // 0x48 PushV
	var_47_int = var_24_int; // 0x49 Mov
	func_89(var_46_bool, var_47_int); // 0x4a Call
	var_48_bool = var_46_bool == 0; // 0x4c Not
	if(var_48_bool == 0) goto Label_79; // 0x4d JumpB
	goto Label_82; // 0x4e Jump
	
Label_82:
	var_49_bool = 0; // 0x52 PushB
	SwitchFlashlight(var_49_bool); // 0x53 Func
	var_50_string = "flashlight_off"; // 0x55 PushS
	PlaySound(var_50_string); // 0x56 Func
	return 12; // 0x58 Return
	
Label_79:
	var_51_int = 5; // 0x4f PushI
	var_19_float = var_19_float % var_51_int; // 0x50 Mod2
	goto Label_29; // 0x51 Jump
	
Label_67:
	goto Label_29; // 0x43 Jump
}


func_95(var_4_bool)
{
	var_5_bool = 0; var_6_bool = 0; var_7_bool = 0; var_8_bool = 0; // 0x5f PushV
	var_9_string = "sleeping"; // 0x60 PushS
	HasProperty(var_9_string, var_7_bool); // 0x61 Func
	var_10_bool = var_7_bool == 0; // 0x63 Not
	if(var_10_bool == 0) goto Label_103; // 0x64 JumpB
	var_4_bool = 0; // 0x65 MovB
	return 4; // 0x66 Return
	
Label_103:
	var_11_string = "sleeping"; // 0x67 PushS
	GetProperty(var_11_string, var_8_bool); // 0x68 Func
	var_4_bool = var_8_bool; // 0x6a Mov
	return 4; // 0x6b Return
}


