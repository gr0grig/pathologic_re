task_0_event_5(var_0_int)
{
	StopGroup0(); // 0x3 Func
	return 0; // 0x5 Return
}


task_1_event_6(var_0_int)
{
	StopGroup0(); // 0x9 Func
	return 0; // 0xb Return
}


main(var_0_int)
{
	var_1_object = Obj(); var_2_object = Obj(); // 0xe PushV
	GetPFPolyID(var_0_int); // 0xf Func
	var_3_int = -1; // 0x11 PushI
	var_4_bool = var_0_int != var_3_int; // 0x12 Neq
	if(var_4_bool == 0) goto Label_24; // 0x13 JumpB
	var_5_int = 4; // 0x14 PushI
	var_6_float = var_0_int / var_5_int; // 0x15 Div
	var_7_int = 256; // 0x16 PushI
	var_0_int = var_6_float % var_7_int; // 0x17 Mod2
	
Label_24:
	var_8_bool = 0; // 0x18 PushV
	func_70(var_8_bool); // 0x19 Call
	var_11_bool = var_8_bool == 0; // 0x1b Not
	if(var_11_bool == 0) goto Label_34; // 0x1c JumpB
	TaskCall(0); // 0x1e TaskCall
	func_0(); // 0x1f Call
	TaskReturn(); // 0x20 TaskReturn
	
Label_34:
	var_12_bool = 0; // 0x22 PushV
	func_12(var_12_bool); // 0x23 Call
	if(var_12_bool == 0) goto Label_62; // 0x25 JumpB
	GetScene(var_2_object); // 0x26 Func
	var_13_int = 255; // 0x28 PushI
	BlockPolygons(var_0_int, var_13_int); // 0x29 ObjFunc
	var_14_bool = 1; // 0x2b PushB
	SetVisibility(var_14_bool); // 0x2c Func
	func_69(); // 0x2f Call
	TaskCall(1); // 0x32 TaskCall
	func_6(); // 0x33 Call
	TaskReturn(); // 0x34 TaskReturn
	var_15_bool = 0; // 0x36 PushB
	SetVisibility(var_15_bool); // 0x37 Func
	var_16_int = 255; // 0x39 PushI
	UnblockPolygons(var_0_int, var_16_int); // 0x3a ObjFunc
	var_2_object = 0; // 0x3c SetNull
	goto Label_67; // 0x3d Jump
	
Label_67:
	goto Label_24; // 0x43 Jump
	
Label_62:
	TaskCall(1); // 0x3f TaskCall
	func_6(); // 0x40 Call
	TaskReturn(); // 0x41 TaskReturn
}


func_0()
{
	Hold(); // 0x0 Func
	return 0; // 0x2 Return
}


func_69()
{
	return 0; // 0x45 Return
}


func_70(var_8_bool)
{
	var_9_bool = 0; var_10_bool = 0; // 0x46 PushV
	IsLoaded(var_10_bool); // 0x47 Func
	var_8_bool = var_10_bool; // 0x49 Mov
	return 2; // 0x4a Return
}


func_6()
{
	Hold(); // 0x6 Func
	return 0; // 0x8 Return
}


func_12(var_12_bool)
{
	var_12_bool = 1; // 0xc MovB
	return 0; // 0xd Return
}


