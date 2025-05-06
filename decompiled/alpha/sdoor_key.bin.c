task_0_event_0(var_0_object)
{
	var_1_string = ""; var_2_int = 0; var_3_string = ""; var_4_int = 0; // 0x0 PushV
	var_5_bool = 0; // 0x1 PushV
	func_94(var_5_bool); // 0x2 Call
	if(var_5_bool == 0) goto Label_16; // 0x4 JumpB
	var_10_string = "key"; // 0x5 PushS
	GetProperty(var_10_string, var_3_string); // 0x6 Func
	GetItemCountOfType(var_4_int, var_3_string); // 0x8 ObjFunc
	var_11_int = var_4_int; // 0xa Push
	if(var_11_int == 0) goto Label_16; // 0xb JumpB
	var_12_bool = 0; // 0xc PushV
	var_12_bool = 0; // 0xd MovB
	func_101(var_12_bool); // 0xe Call
	
Label_16:
	var_14_object = Obj(); // 0x10 PushV
	var_14_object = var_0_object; // 0x11 Mov
	func_25(var_14_object); // 0x12 Call
	return 4; // 0x14 Return
}


task_0_event_38(var_0_object)
{
	var_1_bool = 0; var_2_bool = 0; // 0x44 PushV
	var_3_bool = 0; // 0x45 PushV
	var_3_bool = 1; // 0x46 MovB
	var_4_bool = var_0_object == 0; // 0x47 Not
	if(var_4_bool == 0) goto Label_80; // 0x48 JumpB
	var_5_bool = 0; var_6_object = Obj(); // 0x49 PushV
	var_6_object = var_0_object; // 0x4a Mov
	func_88(var_6_object); // 0x4b Call
	var_12_bool = var_5_bool == 0; // 0x4d Not
	if(var_12_bool == 0) goto Label_80; // 0x4e JumpB
	var_3_bool = 0; // 0x4f MovB
	
Label_80:
	if(var_3_bool == 0) goto Label_82; // 0x50 JumpB
	return 2; // 0x51 Return
	
Label_82:
	ClassifyActor(var_2_bool, var_0_object); // 0x52 Func
	var_13_bool = var_2_bool == 0; // 0x54 Not
	Open(var_13_bool); // 0x55 Func
	return 2; // 0x57 Return
}


main()
{
	
Label_21:
	Hold(); // 0x15 Func
	goto Label_21; // 0x17 Jump
}


func_88(var_5_bool)
{
	var_7_bool = 0; // 0x59 PushV
	func_94(var_7_bool); // 0x5a Call
	var_5_bool = !var_7_bool; // 0x5c Not2
	return 0; // 0x5d Return
}


func_25(var_14_object)
{
	var_15_bool = 0; var_16_int = 0; var_17_bool = 0; var_18_int = 0; // 0x19 PushV
	var_19_bool = 0; // 0x1a PushV
	var_19_bool = 1; // 0x1b MovB
	var_20_bool = var_14_object == 0; // 0x1c Not
	if(var_20_bool == 0) goto Label_37; // 0x1d JumpB
	var_21_bool = 0; var_22_object = Obj(); // 0x1e PushV
	var_22_object = var_14_object; // 0x1f Mov
	func_88(var_22_object); // 0x20 Call
	var_24_bool = var_21_bool == 0; // 0x22 Not
	if(var_24_bool == 0) goto Label_37; // 0x23 JumpB
	var_19_bool = 0; // 0x24 MovB
	
Label_37:
	if(var_19_bool == 0) goto Label_39; // 0x25 JumpB
	return 4; // 0x26 Return
	
Label_39:
	ClassifyActor(var_17_bool, var_14_object); // 0x27 Func
	var_17_bool = !var_17_bool; // 0x29 Not2
	GetOpenSide(var_18_int); // 0x2a Func
	var_25_bool = var_18_int == 0; // 0x2c Not
	if(var_25_bool == 0) goto Label_49; // 0x2d JumpB
	Open(var_17_bool); // 0x2e Func
	goto Label_67; // 0x30 Jump
	
Label_67:
	return 4; // 0x43 Return
	
Label_49:
	var_26_int = 0; // 0x31 PushI
	var_27_bool = var_18_int > var_26_int; // 0x32 GT
	if(var_27_bool == 0) goto Label_60; // 0x33 JumpB
	var_28_bool = var_17_bool; // 0x34 Push
	if(var_28_bool == 0) goto Label_57; // 0x35 JumpB
	Close(); // 0x36 Func
	goto Label_59; // 0x38 Jump
	
Label_59:
	goto Label_67; // 0x3b Jump
	
Label_57:
	Open(var_17_bool); // 0x39 Func
	
Label_60:
	var_29_bool = var_17_bool; // 0x3c Push
	if(var_29_bool == 0) goto Label_65; // 0x3d JumpB
	Open(var_17_bool); // 0x3e Func
	goto Label_67; // 0x40 Jump
	
Label_65:
	Close(); // 0x41 Func
}


func_101(var_12_bool)
{
	var_13_string = "locked"; // 0x66 PushS
	SetProperty(var_13_string, var_12_bool); // 0x67 Func
	return 0; // 0x69 Return
}


func_94(var_7_bool)
{
	var_8_int = 0; var_9_int = 0; // 0x5e PushV
	var_10_string = "locked"; // 0x5f PushS
	GetProperty(var_10_string, var_9_int); // 0x60 Func
	var_11_int = 0; // 0x62 PushI
	var_7_bool = var_9_int != var_11_int; // 0x63 Neq2
	return 2; // 0x64 Return
}


