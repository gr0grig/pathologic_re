task_0_event_5(var_0_int)
{
	StopGroup0(); // 0x8 Func
	sync(); // 0xa Func
	return 0; // 0xc Return
}


task_1_event_6(var_0_int)
{
	StopGroup0(); // 0x14 Func
	sync(); // 0x16 Func
	return 0; // 0x18 Return
}


main(var_0_int)
{
	var_1_object = Obj(); var_2_object = Obj(); // 0x1b PushV
	GetPFPolyID(var_0_int); // 0x1c Func
	var_3_int = -1; // 0x1e PushI
	var_4_bool = var_0_int != var_3_int; // 0x1f Neq
	if(var_4_bool == 0) goto Label_37; // 0x20 JumpB
	var_5_int = 4; // 0x21 PushI
	var_6_float = var_0_int / var_5_int; // 0x22 Div
	var_7_int = 256; // 0x23 PushI
	var_0_int = var_6_float % var_7_int; // 0x24 Mod2
	
Label_37:
	var_8_bool = 0; // 0x25 PushV
	func_83(var_8_bool); // 0x26 NEW_2
	var_11_bool = var_8_bool == 0; // 0x28 Not
	if(var_11_bool == 0) goto Label_47; // 0x29 JumpB
	TaskCall(0); // 0x2b TaskCall
	func_0(); // 0x2c NEW_2
	TaskReturn(); // 0x2d TaskReturn
	
Label_47:
	var_14_bool = 0; // 0x2f PushV
	func_25(var_14_bool); // 0x30 NEW_2
	if(var_14_bool == 0) goto Label_75; // 0x32 JumpB
	GetScene(var_2_object); // 0x33 Func
	var_15_int = 255; // 0x35 PushI
	BlockPolygons(var_0_int, var_15_int); // 0x36 ObjFunc
	var_16_bool = 1; // 0x38 PushB
	SetVisibility(var_16_bool); // 0x39 Func
	func_82(); // 0x3c NEW_2
	TaskCall(1); // 0x3f TaskCall
	func_13(); // 0x40 NEW_2
	TaskReturn(); // 0x41 TaskReturn
	var_18_bool = 0; // 0x43 PushB
	SetVisibility(var_18_bool); // 0x44 Func
	var_19_int = 255; // 0x46 PushI
	UnblockPolygons(var_0_int, var_19_int); // 0x47 ObjFunc
	var_2_object = 0; // 0x49 SetNull
	goto Label_80; // 0x4a Jump
	
Label_80:
	goto Label_37; // 0x50 Jump
	
Label_75:
	TaskCall(1); // 0x4c TaskCall
	func_13(); // 0x4d NEW_2
	TaskReturn(); // 0x4e TaskReturn
}


func_0()
{
	
Label_0:
	Hold(); // 0x0 Func
	var_12_bool = 0; // 0x2 PushV
	func_83(var_12_bool); // 0x3 NEW_2
	var_13_bool = var_12_bool == 0; // 0x5 Not
	if(var_13_bool == 0) goto Label_0; // 0x6 JumpB
	return 0; // 0x7 Return
}


func_13()
{
	
Label_13:
	Hold(); // 0xd Func
	var_17_bool = 0; // 0xf PushV
	func_83(var_17_bool); // 0x10 NEW_2
	if(var_17_bool == 0) goto Label_13; // 0x12 JumpB
	return 0; // 0x13 Return
}


func_82()
{
	return 0; // 0x52 Return
}


func_83(var_8_bool)
{
	var_9_bool = 0; var_10_bool = 0; // 0x53 PushV
	IsLoaded(var_10_bool); // 0x54 Func
	var_8_bool = var_10_bool; // 0x56 Mov
	return 2; // 0x57 Return
}


func_25(var_14_bool)
{
	var_14_bool = 1; // 0x19 MovB
	return 0; // 0x1a Return
}


