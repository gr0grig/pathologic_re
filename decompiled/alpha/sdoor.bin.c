task_0_event_0(var_0_object)
{
	var_1_bool = 0; var_2_int = 0; var_3_bool = 0; var_4_int = 0; // 0x4 PushV
	var_5_bool = 0; // 0x5 PushV
	var_5_bool = 1; // 0x6 MovB
	var_6_bool = var_0_object == 0; // 0x7 Not
	if(var_6_bool == 0) goto Label_16; // 0x8 JumpB
	var_7_bool = 0; var_8_object = Obj(); // 0x9 PushV
	var_8_object = var_0_object; // 0xa Mov
	func_67(var_8_object); // 0xb Call
	var_14_bool = var_7_bool == 0; // 0xd Not
	if(var_14_bool == 0) goto Label_16; // 0xe JumpB
	var_5_bool = 0; // 0xf MovB
	
Label_16:
	if(var_5_bool == 0) goto Label_18; // 0x10 JumpB
	return 4; // 0x11 Return
	
Label_18:
	ClassifyActor(var_3_bool, var_0_object); // 0x12 Func
	var_3_bool = !var_3_bool; // 0x14 Not2
	GetOpenSide(var_4_int); // 0x15 Func
	var_15_bool = var_4_int == 0; // 0x17 Not
	if(var_15_bool == 0) goto Label_28; // 0x18 JumpB
	Open(var_3_bool); // 0x19 Func
	goto Label_46; // 0x1b Jump
	
Label_46:
	return 4; // 0x2e Return
	
Label_28:
	var_16_int = 0; // 0x1c PushI
	var_17_bool = var_4_int > var_16_int; // 0x1d GT
	if(var_17_bool == 0) goto Label_39; // 0x1e JumpB
	var_18_bool = var_3_bool; // 0x1f Push
	if(var_18_bool == 0) goto Label_36; // 0x20 JumpB
	Close(); // 0x21 Func
	goto Label_38; // 0x23 Jump
	
Label_38:
	goto Label_46; // 0x26 Jump
	
Label_36:
	Open(var_3_bool); // 0x24 Func
	
Label_39:
	var_19_bool = var_3_bool; // 0x27 Push
	if(var_19_bool == 0) goto Label_44; // 0x28 JumpB
	Open(var_3_bool); // 0x29 Func
	goto Label_46; // 0x2b Jump
	
Label_44:
	Close(); // 0x2c Func
}


task_0_event_38(var_0_object)
{
	var_1_bool = 0; var_2_bool = 0; // 0x2f PushV
	var_3_bool = 0; // 0x30 PushV
	var_3_bool = 1; // 0x31 MovB
	var_4_bool = var_0_object == 0; // 0x32 Not
	if(var_4_bool == 0) goto Label_59; // 0x33 JumpB
	var_5_bool = 0; var_6_object = Obj(); // 0x34 PushV
	var_6_object = var_0_object; // 0x35 Mov
	func_67(var_6_object); // 0x36 Call
	var_12_bool = var_5_bool == 0; // 0x38 Not
	if(var_12_bool == 0) goto Label_59; // 0x39 JumpB
	var_3_bool = 0; // 0x3a MovB
	
Label_59:
	if(var_3_bool == 0) goto Label_61; // 0x3b JumpB
	return 2; // 0x3c Return
	
Label_61:
	ClassifyActor(var_2_bool, var_0_object); // 0x3d Func
	var_13_bool = var_2_bool == 0; // 0x3f Not
	Open(var_13_bool); // 0x40 Func
	return 2; // 0x42 Return
}


main()
{
	
Label_0:
	Hold(); // 0x0 Func
	goto Label_0; // 0x2 Jump
}


func_73(var_7_bool)
{
	var_8_int = 0; var_9_int = 0; // 0x49 PushV
	var_10_string = "locked"; // 0x4a PushS
	GetProperty(var_10_string, var_9_int); // 0x4b Func
	var_11_int = 0; // 0x4d PushI
	var_7_bool = var_9_int != var_11_int; // 0x4e Neq2
	return 2; // 0x4f Return
}


func_67(var_5_bool)
{
	var_7_bool = 0; // 0x44 PushV
	func_73(var_7_bool); // 0x45 Call
	var_5_bool = !var_7_bool; // 0x47 Not2
	return 0; // 0x48 Return
}


