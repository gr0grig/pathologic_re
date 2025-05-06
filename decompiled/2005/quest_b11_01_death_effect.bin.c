main(var_0_bool)
{
	var_1_float = 0; var_2_float = 0; // 0x0 PushV
	
Label_1:
	sync(var_2_float); // 0x1 Func
	var_3_int = -var_2_float; // 0x3 Neg
	var_4_float = 4.0; // 0x4 PushF
	var_5_float = var_3_int / var_4_float; // 0x5 Div
	Trace(var_5_float); // 0x6 Func
	var_6_bool = 0; var_7_string = ""; var_8_float = 0; var_9_float = 0; var_10_float = 0; // 0x8 PushV
	var_7_string = "health"; // 0x9 MovS
	var_11_int = -var_2_float; // 0xa Neg
	var_12_float = 2.0; // 0xb PushF
	var_8_float = var_11_int / var_11_int; // 0xc Div2
	var_9_float = 0; // 0xd MovI
	var_10_float = 1; // 0xe MovI
	func_25(var_6_bool, var_7_string, var_8_float, var_9_float, var_10_float); // 0xf NEW_2
	var_24_float = 0; // 0x11 PushV
	var_25_int = -var_2_float; // 0x12 Neg
	var_26_float = 3.0; // 0x13 PushF
	var_24_float = var_25_int / var_25_int; // 0x14 Div2
	func_55(var_24_float); // 0x15 NEW_2
	goto Label_1; // 0x17 Jump
}


func_25(var_6_bool, var_7_string, var_8_float, var_9_float, var_10_float)
{
	var_13_bool = 0; var_14_float = 0; var_15_bool = 0; var_16_float = 0; // 0x19 PushV
	HasProperty(var_7_string, var_15_bool); // 0x1a Func
	var_17_bool = var_15_bool == 0; // 0x1c Not
	if(var_17_bool == 0) goto Label_32; // 0x1d JumpB
	var_6_bool = 0; // 0x1e MovB
	return 4; // 0x1f Return
	
Label_32:
	GetProperty(var_7_string, var_16_float); // 0x20 Func
	var_18_float = 0; var_19_float = 0; var_20_float = 0; var_21_float = 0; // 0x22 PushV
	var_19_float = var_16_float + var_8_float; // 0x23 Add2
	var_20_float = var_9_float; // 0x24 Mov
	var_21_float = var_10_float; // 0x25 Mov
	func_44(var_18_float, var_19_float, var_20_float, var_21_float); // 0x26 NEW_2
	SetProperty(var_7_string, var_18_float); // 0x28 Func
	var_6_bool = 1; // 0x2a MovB
	return 4; // 0x2b Return
}


func_44(var_18_float, var_19_float, var_20_float, var_21_float)
{
	var_22_bool = var_19_float < var_20_float; // 0x2d LT
	if(var_22_bool == 0) goto Label_49; // 0x2e JumpB
	var_18_float = var_20_float; // 0x2f Mov
	return 0; // 0x30 Return
	
Label_49:
	var_23_bool = var_19_float > var_21_float; // 0x31 GT
	if(var_23_bool == 0) goto Label_53; // 0x32 JumpB
	var_18_float = var_21_float; // 0x33 Mov
	return 0; // 0x34 Return
	
Label_53:
	var_18_float = var_19_float; // 0x35 Mov
	return 0; // 0x36 Return
}


func_55(var_24_float)
{
	var_27_object = Obj(); var_28_object = Obj(); // 0x37 PushV
	CreateFloatVector(var_28_object); // 0x38 Func
	add(var_24_float); // 0x3a ObjFunc
	var_29_int = 15; // 0x3c PushI
	SendWorldWndMessage(var_29_int, var_28_object); // 0x3d Func
	return 2; // 0x3f Return
}


