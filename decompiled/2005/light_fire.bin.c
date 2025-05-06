task_0_event_5(var_0_float, var_1_float)
{
	StopGroup0(); // 0x8 Func
	sync(); // 0xa Func
	return 0; // 0xc Return
}


task_1_event_6(var_0_float, var_1_float)
{
	sync(); // 0x24 Func
	TaskCall(0); // 0x27 TaskCall
	func_0(); // 0x28 NEW_2
	TaskReturn(); // 0x29 TaskReturn
	return 0; // 0x2b Return
}


main(var_0_float, var_1_float)
{
	var_2_cvector = CVector(0,0,0); var_3_float = 0; var_4_float = 0; var_5_cvector = CVector(0,0,0); var_6_float = 0; var_7_float = 0; // 0xd PushV
	TaskCall(0); // 0xf TaskCall
	func_0(); // 0x10 NEW_2
	TaskReturn(); // 0x11 TaskReturn
	GetColor(var_5_cvector); // 0x13 Func
	
Label_21:
	var_12_float = 0.92; // 0x15 PushF
	var_13_float = 1.0; // 0x16 PushF
	rand(var_6_float, var_12_float, var_13_float); // 0x17 Func
	var_14_float = var_5_cvector * var_6_float; // 0x19 Mult
	SetColor(var_14_float); // 0x1a Func
	var_15_float = 0.075; // 0x1c PushF
	var_16_float = 0.1; // 0x1d PushF
	rand(var_7_float, var_15_float, var_16_float); // 0x1e Func
	Sleep(var_7_float); // 0x20 Func
	goto Label_21; // 0x22 Jump
}


func_0()
{
	
Label_0:
	Hold(); // 0x0 Func
	var_8_bool = 0; // 0x2 PushV
	func_44(var_8_bool); // 0x3 NEW_2
	var_11_bool = var_8_bool == 0; // 0x5 Not
	if(var_11_bool == 0) goto Label_0; // 0x6 JumpB
	return 0; // 0x7 Return
}


func_44(var_8_bool)
{
	var_9_bool = 0; var_10_bool = 0; // 0x2c PushV
	IsLoaded(var_10_bool); // 0x2d Func
	var_8_bool = var_10_bool; // 0x2f Mov
	return 2; // 0x30 Return
}


