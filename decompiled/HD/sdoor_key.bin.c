task_0_event_0(var_0_object)
{
	var_1_string = ""; var_2_int = 0; var_3_string = ""; var_4_int = 0; // 0x0 PushV
	var_5_bool = 0; // 0x1 PushV
	func_97(var_5_bool); // 0x2 NEW_2
	if(var_5_bool == 0) goto Label_16; // 0x4 JumpB
	var_10_string = "key"; // 0x5 PushS
	GetProperty(var_10_string, var_3_string); // 0x6 Func
	GetItemCountOfType(var_4_int, var_3_string); // 0x8 ObjFunc
	var_11_int = var_4_int; // 0xa Push
	if(var_11_int == 0) goto Label_16; // 0xb JumpB
	var_12_bool = 0; // 0xc PushV
	var_12_bool = 0; // 0xd MovB
	func_104(var_12_bool); // 0xe NEW_2
	
Label_16:
	var_14_object = Obj(); // 0x10 PushV
	var_14_object = var_0_object; // 0x11 Mov
	func_25(var_14_object); // 0x12 NEW_2
	return 4; // 0x14 Return
}


task_0_event_38(var_0_object)
{
	var_1_bool = 0; var_2_bool = 0; // 0x47 PushV
	var_3_bool = 0; // 0x48 PushV
	var_3_bool = 1; // 0x49 MovB
	var_4_bool = var_0_object == 0; // 0x4a Not
	if(var_4_bool == 0) goto Label_83; // 0x4b JumpB
	var_5_bool = 0; var_6_object = Obj(); // 0x4c PushV
	var_6_object = var_0_object; // 0x4d Mov
	func_91(var_6_object); // 0x4e NEW_2
	var_12_bool = var_5_bool == 0; // 0x50 Not
	if(var_12_bool == 0) goto Label_83; // 0x51 JumpB
	var_3_bool = 0; // 0x52 MovB
	
Label_83:
	if(var_3_bool == 0) goto Label_85; // 0x53 JumpB
	return 2; // 0x54 Return
	
Label_85:
	ClassifyActor(var_2_bool, var_0_object); // 0x55 Func
	var_13_bool = var_2_bool == 0; // 0x57 Not
	Open(var_13_bool); // 0x58 Func
	return 2; // 0x5a Return
}


main()
{
	
Label_21:
	Hold(); // 0x15 Func
	goto Label_21; // 0x17 Jump
}


func_104(var_12_bool)
{
	var_13_string = "locked"; // 0x69 PushS
	SetProperty(var_13_string, var_12_bool); // 0x6a Func
	return 0; // 0x6c Return
}


func_97(var_7_bool)
{
	var_8_int = 0; var_9_int = 0; // 0x61 PushV
	var_10_string = "locked"; // 0x62 PushS
	GetProperty(var_10_string, var_9_int); // 0x63 Func
	var_11_int = 0; // 0x65 PushI
	var_7_bool = var_9_int != var_11_int; // 0x66 Neq2
	return 2; // 0x67 Return
}


func_91(var_5_bool)
{
	var_7_bool = 0; // 0x5c PushV
	func_97(var_7_bool); // 0x5d NEW_2
	var_5_bool = !var_7_bool; // 0x5f Not2
	return 0; // 0x60 Return
}


func_25(var_14_object)
{
	var_15_bool = 0; var_16_int = 0; var_17_bool = 0; var_18_int = 0; // 0x19 PushV
	var_19_bool = var_14_object == 0; // 0x1a Not
	if(var_19_bool == 0) goto Label_29; // 0x1b JumpB
	return 4; // 0x1c Return
	
Label_29:
	var_20_bool = 0; var_21_object = Obj(); // 0x1d PushV
	var_21_object = var_14_object; // 0x1e Mov
	func_91(var_21_object); // 0x1f NEW_2
	var_23_bool = var_20_bool == 0; // 0x21 Not
	if(var_23_bool == 0) goto Label_42; // 0x22 JumpB
	var_24_string = "door_closed"; // 0x23 PushS
	PlaySound(var_24_string); // 0x24 Func
	var_25_string = "Door is locked"; // 0x26 PushS
	Trace(var_25_string); // 0x27 Func
	return 4; // 0x29 Return
	
Label_42:
	ClassifyActor(var_17_bool, var_14_object); // 0x2a Func
	var_17_bool = !var_17_bool; // 0x2c Not2
	GetOpenSide(var_18_int); // 0x2d Func
	var_26_bool = var_18_int == 0; // 0x2f Not
	if(var_26_bool == 0) goto Label_52; // 0x30 JumpB
	Open(var_17_bool); // 0x31 Func
	goto Label_70; // 0x33 Jump
	
Label_70:
	return 4; // 0x46 Return
	
Label_52:
	var_27_int = 0; // 0x34 PushI
	var_28_bool = var_18_int > var_27_int; // 0x35 GT
	if(var_28_bool == 0) goto Label_63; // 0x36 JumpB
	var_29_bool = var_17_bool; // 0x37 Push
	if(var_29_bool == 0) goto Label_60; // 0x38 JumpB
	Close(); // 0x39 Func
	goto Label_62; // 0x3b Jump
	
Label_62:
	goto Label_70; // 0x3e Jump
	
Label_60:
	Open(var_17_bool); // 0x3c Func
	
Label_63:
	var_30_bool = var_17_bool; // 0x3f Push
	if(var_30_bool == 0) goto Label_68; // 0x40 JumpB
	Open(var_17_bool); // 0x41 Func
	goto Label_70; // 0x43 Jump
	
Label_68:
	Close(); // 0x44 Func
}


