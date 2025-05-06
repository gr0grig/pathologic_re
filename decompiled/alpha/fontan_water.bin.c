task_0_event_9(var_0_bool, var_1_int, var_2_float)
{
	var_3_int = 0; // 0x11 PushI
	var_4_bool = var_1_int == var_3_int; // 0x12 Eq
	if(var_4_bool == 0) goto Label_23; // 0x13 JumpB
	StopGroup0(); // 0x14 Func
	var_0_bool = 1; // 0x16 TMovB
	
Label_23:
	return 0; // 0x17 Return
}


task_0_event_0(var_0_bool, var_1_object)
{
	EventDisable(0); // 0x19 EventDisable
	var_2_bool = 0; var_3_object = Obj(); var_4_string = ""; var_5_float = 0; var_6_float = 0; var_7_float = 0; // 0x1a PushV
	var_3_object = var_1_object; // 0x1b Mov
	var_4_string = "hunger"; // 0x1c MovS
	var_5_float = -0.05; // 0x1d MovF
	var_6_float = 0; // 0x1e MovI
	var_7_float = 1; // 0x1f MovI
	func_54(var_2_bool, var_3_object, var_4_string, var_5_float, var_6_float, var_7_float); // 0x20 Call
	var_26_string = "drink"; // 0x22 PushS
	PlaySound(var_26_string); // 0x23 Func
	var_27_int = 1; // 0x25 PushI
	Sleep(var_27_int); // 0x26 Func
	EventEnable(0); // 0x28 EventEnable
	return 0; // 0x29 Return
}


main(var_0_bool)
{
	var_1_bool = 1; // 0x0 PushB
	SetVisibility(var_1_bool); // 0x1 Func
	var_2_int = 0; // 0x3 PushI
	var_3_int = 24; // 0x4 PushI
	SetTimeEvent(var_2_int, var_3_int); // 0x5 Func
	var_0_bool = 0; // 0x7 TMovB
	
Label_8:
	Hold(); // 0x8 Func
	var_4_bool = var_0_bool == 0; // 0xa Not
	if(var_4_bool == 0) goto Label_8; // 0xb JumpB
	var_5_bool = 0; // 0xc PushB
	SetUsable(var_5_bool); // 0xd Func
	return 0; // 0xf Return
}


func_42(var_10_bool, var_11_object, var_12_string)
{
	var_13_bool = 0; var_14_bool = 0; // 0x2a PushV
	var_15_string = "HasProperty"; // 0x2b PushS
	var_16_int = 2; // 0x2c PushI
	var_17_bool = IsFuncExist(var_11_object, var_15_string, var_16_int); // 0x2d FuncExist
	var_18_bool = var_17_bool == 0; // 0x2e Not
	if(var_18_bool == 0) goto Label_50; // 0x2f JumpB
	var_10_bool = 0; // 0x30 MovB
	return 2; // 0x31 Return
	
Label_50:
	HasProperty(var_12_string, var_14_bool); // 0x32 ObjFunc
	var_10_bool = var_14_bool; // 0x34 Mov
	return 2; // 0x35 Return
}


func_76(var_20_float, var_21_float, var_22_float, var_23_float)
{
	var_24_bool = var_21_float < var_22_float; // 0x4d LT
	if(var_24_bool == 0) goto Label_81; // 0x4e JumpB
	var_20_float = var_22_float; // 0x4f Mov
	return 0; // 0x50 Return
	
Label_81:
	var_25_bool = var_21_float > var_23_float; // 0x51 GT
	if(var_25_bool == 0) goto Label_85; // 0x52 JumpB
	var_20_float = var_23_float; // 0x53 Mov
	return 0; // 0x54 Return
	
Label_85:
	var_20_float = var_21_float; // 0x55 Mov
	return 0; // 0x56 Return
}


func_54(var_2_bool, var_3_object, var_4_string, var_5_float, var_6_float, var_7_float)
{
	var_8_float = 0; var_9_float = 0; // 0x36 PushV
	var_10_bool = 0; var_11_object = Obj(); var_12_string = ""; // 0x37 PushV
	var_11_object = var_3_object; // 0x38 Mov
	var_12_string = var_4_string; // 0x39 Mov
	func_42(var_10_bool, var_11_object, var_12_string); // 0x3a Call
	var_19_bool = var_10_bool == 0; // 0x3c Not
	if(var_19_bool == 0) goto Label_64; // 0x3d JumpB
	var_2_bool = 0; // 0x3e MovB
	return 2; // 0x3f Return
	
Label_64:
	GetProperty(var_4_string, var_9_float); // 0x40 ObjFunc
	var_20_float = 0; var_21_float = 0; var_22_float = 0; var_23_float = 0; // 0x42 PushV
	var_21_float = var_9_float + var_5_float; // 0x43 Add2
	var_22_float = var_6_float; // 0x44 Mov
	var_23_float = var_7_float; // 0x45 Mov
	func_76(var_20_float, var_21_float, var_22_float, var_23_float); // 0x46 Call
	SetProperty(var_4_string, var_20_float); // 0x48 ObjFunc
	var_2_bool = 1; // 0x4a MovB
	return 2; // 0x4b Return
}


