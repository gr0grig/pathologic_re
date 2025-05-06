task_0_event_0(var_0_bool, var_1_string, var_2_int, var_3_int)
{
	var_4_int = 0; var_5_int = 0; // 0x9 PushV
	var_6_bool = var_0_bool; // 0xa PushT
	if(var_6_bool == 0) goto Label_20; // 0xb JumpB
	var_7_string = "default"; // 0xc PushS
	var_8_int = 0; // 0xd PushI
	var_9_int = 0; // 0xe PushI
	var_10_float = 1.0; // 0xf PushF
	var_11_float = 1.0; // 0x10 PushF
	var_12_float = 1.0; // 0x11 PushF
	PrintInWidth(var_5_int, var_7_string, var_8_int, var_9_int, var_11_float, var_12_float, var_10_float, var_11_float, var_12_float); // 0x12 Func
	
Label_20:
	return 2; // 0x14 Return
}


task_0_event_200(var_0_bool, var_1_string, var_2_int, var_3_int, var_4_int, var_5_string, var_6_object)
{
	var_7_int = -1; // 0x16 PushI
	var_8_bool = var_4_int != var_7_int; // 0x17 Neq
	if(var_8_bool == 0) goto Label_29; // 0x18 JumpB
	GetStringByID(var_6_object, var_4_int); // 0x19 Func
	var_0_bool = 1; // 0x1b TMovB
	goto Label_30; // 0x1c Jump
	
Label_30:
	return 0; // 0x1e Return
	
Label_29:
	var_0_bool = 0; // 0x1d TMovB
}


main(var_0_bool, var_1_string, var_2_int, var_3_int)
{
	var_0_bool = 0; // 0x0 TMovB
	GetWindowSize(var_2_int, var_1_string); // 0x1 Func
	var_4_bool = 1; // 0x3 PushB
	SetOwnerDraw(var_4_bool); // 0x4 Func
	ProcessEvents(); // 0x6 Func
	return 0; // 0x8 Return
}


