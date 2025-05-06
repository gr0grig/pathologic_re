task_0_event_0(var_0_object)
{
	var_1_bool = 0; var_2_int = 0; var_3_bool = 0; var_4_int = 0; // 0x4 PushV
	var_5_bool = var_0_object == 0; // 0x5 Not
	if(var_5_bool == 0) goto Label_8; // 0x6 JumpB
	return 4; // 0x7 Return
	
Label_8:
	var_6_bool = 0; var_7_object = Obj(); // 0x8 PushV
	var_7_object = var_0_object; // 0x9 Mov
	func_70(var_7_object); // 0xa NEW_2
	var_13_bool = var_6_bool == 0; // 0xc Not
	if(var_13_bool == 0) goto Label_21; // 0xd JumpB
	var_14_string = "door_closed"; // 0xe PushS
	PlaySound(var_14_string); // 0xf Func
	var_15_string = "Door is locked"; // 0x11 PushS
	Trace(var_15_string); // 0x12 Func
	return 4; // 0x14 Return
	
Label_21:
	ClassifyActor(var_3_bool, var_0_object); // 0x15 Func
	var_3_bool = !var_3_bool; // 0x17 Not2
	GetOpenSide(var_4_int); // 0x18 Func
	var_16_bool = var_4_int == 0; // 0x1a Not
	if(var_16_bool == 0) goto Label_31; // 0x1b JumpB
	Open(var_3_bool); // 0x1c Func
	goto Label_49; // 0x1e Jump
	
Label_49:
	return 4; // 0x31 Return
	
Label_31:
	var_17_int = 0; // 0x1f PushI
	var_18_bool = var_4_int > var_17_int; // 0x20 GT
	if(var_18_bool == 0) goto Label_42; // 0x21 JumpB
	var_19_bool = var_3_bool; // 0x22 Push
	if(var_19_bool == 0) goto Label_39; // 0x23 JumpB
	Close(); // 0x24 Func
	goto Label_41; // 0x26 Jump
	
Label_41:
	goto Label_49; // 0x29 Jump
	
Label_39:
	Open(var_3_bool); // 0x27 Func
	
Label_42:
	var_20_bool = var_3_bool; // 0x2a Push
	if(var_20_bool == 0) goto Label_47; // 0x2b JumpB
	Open(var_3_bool); // 0x2c Func
	goto Label_49; // 0x2e Jump
	
Label_47:
	Close(); // 0x2f Func
}


task_0_event_38(var_0_object)
{
	var_1_bool = 0; var_2_bool = 0; // 0x32 PushV
	var_3_bool = 0; // 0x33 PushV
	var_3_bool = 1; // 0x34 MovB
	var_4_bool = var_0_object == 0; // 0x35 Not
	if(var_4_bool == 0) goto Label_62; // 0x36 JumpB
	var_5_bool = 0; var_6_object = Obj(); // 0x37 PushV
	var_6_object = var_0_object; // 0x38 Mov
	func_70(var_6_object); // 0x39 NEW_2
	var_12_bool = var_5_bool == 0; // 0x3b Not
	if(var_12_bool == 0) goto Label_62; // 0x3c JumpB
	var_3_bool = 0; // 0x3d MovB
	
Label_62:
	if(var_3_bool == 0) goto Label_64; // 0x3e JumpB
	return 2; // 0x3f Return
	
Label_64:
	ClassifyActor(var_2_bool, var_0_object); // 0x40 Func
	var_13_bool = var_2_bool == 0; // 0x42 Not
	Open(var_13_bool); // 0x43 Func
	return 2; // 0x45 Return
}


main()
{
	
Label_0:
	Hold(); // 0x0 Func
	goto Label_0; // 0x2 Jump
}


func_76(var_7_bool)
{
	var_8_int = 0; var_9_int = 0; // 0x4c PushV
	var_10_string = "locked"; // 0x4d PushS
	GetProperty(var_10_string, var_9_int); // 0x4e Func
	var_11_int = 0; // 0x50 PushI
	var_7_bool = var_9_int != var_11_int; // 0x51 Neq2
	return 2; // 0x52 Return
}


func_70(var_5_bool)
{
	var_7_bool = 0; // 0x47 PushV
	func_76(var_7_bool); // 0x48 NEW_2
	var_5_bool = !var_7_bool; // 0x4a Not2
	return 0; // 0x4b Return
}


