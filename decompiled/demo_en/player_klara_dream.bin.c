main(var_0_float)
{
	var_1_float = 0; var_2_float = 0; var_3_float = 0; var_4_float = 0; var_5_float = 0; var_6_float = 0; // 0x0 PushV
	var_7_string = "dream effect inited"; // 0x1 PushS
	Trace(var_7_string); // 0x2 Func
	GetGameTime(var_4_float); // 0x4 Func
	var_5_float = var_4_float; // 0x6 Mov
	
Label_7:
	sync(); // 0x7 Func
	GetGameTime(var_6_float); // 0x9 Func
	var_8_bool = var_6_float <= var_5_float; // 0xb LE
	if(var_8_bool == 0) goto Label_14; // 0xc JumpB
	goto Label_19; // 0xd Jump
	
Label_19:
	goto Label_7; // 0x13 Jump
	
Label_14:
	var_9_float = 0; // 0xe PushV
	var_9_float = var_6_float - var_5_float; // 0xf Sub2
	func_21(var_6_float, var_9_float); // 0x10 NEW_2
	var_5_float = var_6_float; // 0x12 Mov
}


func_57(var_22_bool, var_23_string, var_24_string)
{
	var_25_object = Obj(); var_26_object = Obj(); // 0x39 PushV
	FindActor(var_26_object, var_23_string); // 0x3a Func
	var_27_bool = var_26_object == 0; // 0x3c NullEq
	if(var_27_bool == 0) goto Label_64; // 0x3d JumpB
	var_22_bool = 0; // 0x3e MovB
	return 2; // 0x3f Return
	
Label_64:
	Trigger(var_26_object, var_24_string); // 0x40 Func
	var_22_bool = 1; // 0x42 MovB
	return 2; // 0x43 Return
}


func_44(var_10_bool)
{
	var_11_bool = 0; var_12_bool = 0; var_13_bool = 0; var_14_bool = 0; // 0x2c PushV
	var_15_string = "sleeping"; // 0x2d PushS
	HasProperty(var_15_string, var_13_bool); // 0x2e Func
	var_16_bool = var_13_bool == 0; // 0x30 Not
	if(var_16_bool == 0) goto Label_52; // 0x31 JumpB
	var_10_bool = 0; // 0x32 MovB
	return 4; // 0x33 Return
	
Label_52:
	var_17_string = "sleeping"; // 0x34 PushS
	GetProperty(var_17_string, var_14_bool); // 0x35 Func
	var_10_bool = var_14_bool; // 0x37 Mov
	return 4; // 0x38 Return
}


func_21(var_0_float, var_9_float)
{
	var_10_bool = 0; // 0x16 PushV
	func_44(var_10_bool); // 0x17 NEW_2
	if(var_10_bool == 0) goto Label_28; // 0x19 JumpB
	var_0_float = var_0_float + var_9_float; // 0x1a Add2
	goto Label_43; // 0x1b Jump
	
Label_43:
	return 0; // 0x2b Return
	
Label_28:
	var_18_float = 4.0; // 0x1c PushF
	var_19_bool = var_0_float > var_18_float; // 0x1d GT
	if(var_19_bool == 0) goto Label_43; // 0x1e JumpB
	var_20_string = "dream time"; // 0x1f PushS
	Trace(var_20_string); // 0x20 Func
	var_21_float = 4.0; // 0x22 PushF
	var_0_float = var_0_float - var_21_float; // 0x23 Sub2
	sync(); // 0x24 Func
	var_22_bool = 0; var_23_string = ""; var_24_string = ""; // 0x26 PushV
	var_23_string = "klara2_positioner"; // 0x27 MovS
	var_24_string = "sleep_end"; // 0x28 MovS
	func_57(var_22_bool, var_23_string, var_24_string); // 0x29 NEW_2
}


