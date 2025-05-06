task_0_event_26(var_0_bool, var_1_string)
{
	var_2_string = "b9q01_stop"; // 0x14 PushS
	var_3_bool = var_1_string == var_2_string; // 0x15 Eq
	if(var_3_bool == 0) goto Label_26; // 0x16 JumpB
	func_59(var_1_string); // 0x18 NEW_2
	
Label_26:
	return 0; // 0x1a Return
}


main(var_0_bool)
{
	var_1_float = 0; // 0x0 PushV
	var_1_float = 12; // 0x1 MovI
	func_27(var_1_float); // 0x2 NEW_2
	return 0; // 0x4 Return
}


func_5(var_13_bool, var_14_float)
{
	var_15_bool = 0; var_16_string = ""; var_17_float = 0; var_18_float = 0; var_19_float = 0; // 0x6 PushV
	var_16_string = "tiredness"; // 0x7 MovS
	var_17_float = var_14_float; // 0x8 Mov
	var_18_float = 0; // 0x9 MovI
	var_19_float = 1; // 0xa MovI
	func_61(var_15_bool, var_16_string, var_17_float, var_18_float, var_19_float); // 0xb NEW_2
	var_31_float = 0; // 0xd PushV
	var_31_float = var_14_float; // 0xe Mov
	func_91(var_31_float); // 0xf NEW_2
	var_13_bool = 0; // 0x11 MovB
	return 0; // 0x12 Return
}


func_27(var_1_float)
{
	var_2_float = 0; var_3_float = 0; var_4_float = 0; var_5_float = 0; var_6_float = 0; var_7_float = 0; var_8_float = 0; var_9_float = 0; // 0x1b PushV
	GetGameTime(var_6_float); // 0x1c Func
	var_7_float = var_6_float + var_1_float; // 0x1e Add2
	var_8_float = var_6_float; // 0x1f Mov
	
Label_32:
	sync(); // 0x20 Func
	var_10_bool = var_0_bool; // 0x22 PushT
	if(var_10_bool == 0) goto Label_37; // 0x23 JumpB
	goto Label_58; // 0x24 Jump
	
Label_58:
	return 8; // 0x3a Return
	
Label_37:
	GetGameTime(var_9_float); // 0x25 Func
	var_11_bool = var_9_float <= var_8_float; // 0x27 LE
	if(var_11_bool == 0) goto Label_42; // 0x28 JumpB
	goto Label_57; // 0x29 Jump
	
Label_57:
	goto Label_32; // 0x39 Jump
	
Label_42:
	var_12_bool = var_9_float >= var_7_float; // 0x2a GE
	if(var_12_bool == 0) goto Label_50; // 0x2b JumpB
	var_13_bool = 0; var_14_float = 0; // 0x2c PushV
	var_14_float = var_7_float - var_8_float; // 0x2d Sub2
	func_5(var_13_bool, var_14_float); // 0x2e NEW_2
	goto Label_58; // 0x30 Jump
	
Label_50:
	var_35_bool = 0; var_36_float = 0; // 0x32 PushV
	var_36_float = var_9_float - var_8_float; // 0x33 Sub2
	func_5(var_35_bool, var_36_float); // 0x34 NEW_2
	if(var_35_bool == 0) goto Label_56; // 0x36 JumpB
	goto Label_58; // 0x37 Jump
	
Label_56:
	var_8_float = var_9_float; // 0x38 Mov
}


func_91(var_31_float)
{
	var_32_object = Obj(); var_33_object = Obj(); // 0x5b PushV
	CreateFloatVector(var_33_object); // 0x5c Func
	add(var_31_float); // 0x5e ObjFunc
	var_34_int = 11; // 0x60 PushI
	SendWorldWndMessage(var_34_int, var_33_object); // 0x61 Func
	return 2; // 0x63 Return
}


func_80(var_25_float, var_26_float, var_27_float, var_28_float)
{
	var_29_bool = var_26_float < var_27_float; // 0x51 LT
	if(var_29_bool == 0) goto Label_85; // 0x52 JumpB
	var_25_float = var_27_float; // 0x53 Mov
	return 0; // 0x54 Return
	
Label_85:
	var_30_bool = var_26_float > var_28_float; // 0x55 GT
	if(var_30_bool == 0) goto Label_89; // 0x56 JumpB
	var_25_float = var_28_float; // 0x57 Mov
	return 0; // 0x58 Return
	
Label_89:
	var_25_float = var_26_float; // 0x59 Mov
	return 0; // 0x5a Return
}


func_59(var_0_bool)
{
	var_0_bool = 1; // 0x3b TMovB
	return 0; // 0x3c Return
}


func_61(var_15_bool, var_16_string, var_17_float, var_18_float, var_19_float)
{
	var_20_bool = 0; var_21_float = 0; var_22_bool = 0; var_23_float = 0; // 0x3d PushV
	HasProperty(var_16_string, var_22_bool); // 0x3e Func
	var_24_bool = var_22_bool == 0; // 0x40 Not
	if(var_24_bool == 0) goto Label_68; // 0x41 JumpB
	var_15_bool = 0; // 0x42 MovB
	return 4; // 0x43 Return
	
Label_68:
	GetProperty(var_16_string, var_23_float); // 0x44 Func
	var_25_float = 0; var_26_float = 0; var_27_float = 0; var_28_float = 0; // 0x46 PushV
	var_26_float = var_23_float + var_17_float; // 0x47 Add2
	var_27_float = var_18_float; // 0x48 Mov
	var_28_float = var_19_float; // 0x49 Mov
	func_80(var_25_float, var_26_float, var_27_float, var_28_float); // 0x4a NEW_2
	SetProperty(var_16_string, var_25_float); // 0x4c Func
	var_15_bool = 1; // 0x4e MovB
	return 4; // 0x4f Return
}


