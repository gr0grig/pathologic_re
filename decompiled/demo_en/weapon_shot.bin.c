task_0_event_26(var_0_bool, var_1_string)
{
	var_2_string = "shot"; // 0x6 PushS
	var_3_bool = var_1_string == var_2_string; // 0x7 Eq
	if(var_3_bool == 0) goto Label_12; // 0x8 JumpB
	func_13(var_1_string); // 0xa NEW_2
	
Label_12:
	return 0; // 0xc Return
}


main(var_0_bool)
{
	var_0_bool = 0; // 0x0 TMovB
	
Label_1:
	Hold(); // 0x1 Func
	goto Label_1; // 0x3 Jump
}


func_13(var_0_bool)
{
	var_4_string = ""; var_5_float = 0; var_6_float = 0; var_7_bool = 0; var_8_cvector = CVector(0,0,0); var_9_string = ""; var_10_float = 0; var_11_float = 0; var_12_bool = 0; var_13_cvector = CVector(0,0,0); // 0xd PushV
	var_14_bool = var_0_bool; // 0xe PushT
	if(var_14_bool == 0) goto Label_17; // 0xf JumpB
	return 10; // 0x10 Return
	
Label_17:
	GetCurrentWeapon(var_9_string); // 0x11 Func
	var_15_string = "samopal"; // 0x13 PushS
	var_16_bool = var_9_string == var_15_string; // 0x14 Eq
	if(var_16_bool == 0) goto Label_25; // 0x15 JumpB
	var_10_float = 18; // 0x16 MovI
	var_11_float = 0.03333; // 0x17 MovF
	goto Label_38; // 0x18 Jump
	
Label_38:
	var_17_string = "_blast"; // 0x26 PushS
	var_18_int = var_9_string + var_17_string; // 0x27 Add
	GetGeometryLocator(var_18_int, var_12_bool, var_13_cvector); // 0x28 Func
	var_19_bool = var_12_bool; // 0x2a Push
	if(var_19_bool == 0) goto Label_62; // 0x2b JumpB
	var_0_bool = 1; // 0x2c TMovB
	var_20_cvector = CVector(0.49608, 0.41765, 0.16863); // 0x2d PushVec
	SetLitColor(var_20_cvector); // 0x2e Func
	var_21_string = "blast"; // 0x30 PushS
	var_22_string = "_blast.tex"; // 0x31 PushS
	var_23_int = var_9_string + var_22_string; // 0x32 Add
	MakeBillboard(var_21_string, var_23_int, var_13_cvector, var_10_float); // 0x33 Func
	Sleep(var_11_float); // 0x35 Func
	var_24_cvector = CVector(0.0, 0.0, 0.0); // 0x37 PushVec
	SetLitColor(var_24_cvector); // 0x38 Func
	var_25_string = "blast"; // 0x3a PushS
	RemoveBillboard(var_25_string); // 0x3b Func
	var_0_bool = 0; // 0x3d TMovB
	
Label_62:
	return 10; // 0x3e Return
	
Label_25:
	var_26_string = "rifle"; // 0x19 PushS
	var_27_bool = var_9_string == var_26_string; // 0x1a Eq
	if(var_27_bool == 0) goto Label_31; // 0x1b JumpB
	var_10_float = 18; // 0x1c MovI
	var_11_float = 0.075; // 0x1d MovF
	goto Label_38; // 0x1e Jump
	
Label_31:
	var_28_string = "revolver"; // 0x1f PushS
	var_29_bool = var_9_string == var_28_string; // 0x20 Eq
	if(var_29_bool == 0) goto Label_37; // 0x21 JumpB
	var_10_float = 15; // 0x22 MovI
	var_11_float = 0.075; // 0x23 MovF
	goto Label_38; // 0x24 Jump
	
Label_37:
	return 10; // 0x25 Return
}


