task_0_event_26(var_0_bool, var_1_string)
{
	var_2_string = "b10q01_stop"; // 0x15 PushS
	var_3_bool = var_1_string == var_2_string; // 0x16 Eq
	if(var_3_bool == 0) goto Label_27; // 0x17 JumpB
	func_60(var_1_string); // 0x19 NEW_2
	
Label_27:
	return 0; // 0x1b Return
}


main(var_0_bool)
{
	var_1_float = 0; // 0x0 PushV
	var_1_float = 12; // 0x1 MovI
	func_28(var_1_float); // 0x2 NEW_2
	return 0; // 0x4 Return
}


func_5(var_13_bool, var_14_float)
{
	var_15_bool = 0; var_16_string = ""; var_17_float = 0; var_18_float = 0; var_19_float = 0; // 0x6 PushV
	var_16_string = "hunger"; // 0x7 MovS
	var_17_float = var_14_float; // 0x8 Mov
	var_18_float = 0; // 0x9 MovI
	var_19_float = 1; // 0xa MovI
	func_62(var_15_bool, var_16_string, var_17_float, var_18_float, var_19_float); // 0xb NEW_2
	var_31_float = 0; // 0xd PushV
	var_32_int = 2; // 0xe PushI
	var_31_float = var_14_float * var_32_int; // 0xf Mult2
	func_92(var_31_float); // 0x10 NEW_2
	var_13_bool = 0; // 0x12 MovB
	return 0; // 0x13 Return
}


func_60(var_0_bool)
{
	var_0_bool = 1; // 0x3c TMovB
	return 0; // 0x3d Return
}


func_92(var_31_float)
{
	var_33_object = Obj(); var_34_object = Obj(); // 0x5c PushV
	CreateFloatVector(var_34_object); // 0x5d Func
	add(var_31_float); // 0x5f ObjFunc
	var_35_int = 12; // 0x61 PushI
	SendWorldWndMessage(var_35_int, var_34_object); // 0x62 Func
	return 2; // 0x64 Return
}


func_81(var_25_float, var_26_float, var_27_float, var_28_float)
{
	var_29_bool = var_26_float < var_27_float; // 0x52 LT
	if(var_29_bool == 0) goto Label_86; // 0x53 JumpB
	var_25_float = var_27_float; // 0x54 Mov
	return 0; // 0x55 Return
	
Label_86:
	var_30_bool = var_26_float > var_28_float; // 0x56 GT
	if(var_30_bool == 0) goto Label_90; // 0x57 JumpB
	var_25_float = var_28_float; // 0x58 Mov
	return 0; // 0x59 Return
	
Label_90:
	var_25_float = var_26_float; // 0x5a Mov
	return 0; // 0x5b Return
}


func_28(var_1_float)
{
	var_2_float = 0; var_3_float = 0; var_4_float = 0; var_5_float = 0; var_6_float = 0; var_7_float = 0; var_8_float = 0; var_9_float = 0; // 0x1c PushV
	GetGameTime(var_6_float); // 0x1d Func
	var_7_float = var_6_float + var_1_float; // 0x1f Add2
	var_8_float = var_6_float; // 0x20 Mov
	
Label_33:
	sync(); // 0x21 Func
	var_10_bool = var_0_bool; // 0x23 PushT
	if(var_10_bool == 0) goto Label_38; // 0x24 JumpB
	goto Label_59; // 0x25 Jump
	
Label_59:
	return 8; // 0x3b Return
	
Label_38:
	GetGameTime(var_9_float); // 0x26 Func
	var_11_bool = var_9_float <= var_8_float; // 0x28 LE
	if(var_11_bool == 0) goto Label_43; // 0x29 JumpB
	goto Label_58; // 0x2a Jump
	
Label_58:
	goto Label_33; // 0x3a Jump
	
Label_43:
	var_12_bool = var_9_float >= var_7_float; // 0x2b GE
	if(var_12_bool == 0) goto Label_51; // 0x2c JumpB
	var_13_bool = 0; var_14_float = 0; // 0x2d PushV
	var_14_float = var_7_float - var_8_float; // 0x2e Sub2
	func_5(var_13_bool, var_14_float); // 0x2f NEW_2
	goto Label_59; // 0x31 Jump
	
Label_51:
	var_36_bool = 0; var_37_float = 0; // 0x33 PushV
	var_37_float = var_9_float - var_8_float; // 0x34 Sub2
	func_5(var_36_bool, var_37_float); // 0x35 NEW_2
	if(var_36_bool == 0) goto Label_57; // 0x37 JumpB
	goto Label_59; // 0x38 Jump
	
Label_57:
	var_8_float = var_9_float; // 0x39 Mov
}


func_62(var_15_bool, var_16_string, var_17_float, var_18_float, var_19_float)
{
	var_20_bool = 0; var_21_float = 0; var_22_bool = 0; var_23_float = 0; // 0x3e PushV
	HasProperty(var_16_string, var_22_bool); // 0x3f Func
	var_24_bool = var_22_bool == 0; // 0x41 Not
	if(var_24_bool == 0) goto Label_69; // 0x42 JumpB
	var_15_bool = 0; // 0x43 MovB
	return 4; // 0x44 Return
	
Label_69:
	GetProperty(var_16_string, var_23_float); // 0x45 Func
	var_25_float = 0; var_26_float = 0; var_27_float = 0; var_28_float = 0; // 0x47 PushV
	var_26_float = var_23_float + var_17_float; // 0x48 Add2
	var_27_float = var_18_float; // 0x49 Mov
	var_28_float = var_19_float; // 0x4a Mov
	func_81(var_25_float, var_26_float, var_27_float, var_28_float); // 0x4b NEW_2
	SetProperty(var_16_string, var_25_float); // 0x4d Func
	var_15_bool = 1; // 0x4f MovB
	return 4; // 0x50 Return
}


