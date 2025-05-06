task_0_event_5(var_0_float, var_1_float)
{
	StopGroup0(); // 0x3 Func
	return 0; // 0x5 Return
}


task_1_event_6(var_0_float, var_1_float)
{
	sync(); // 0x1d Func
	TaskCall(0); // 0x20 TaskCall
	func_0(); // 0x21 Call
	TaskReturn(); // 0x22 TaskReturn
	return 0; // 0x24 Return
}


main(var_0_float, var_1_float)
{
	var_2_cvector = CVector(0,0,0); var_3_float = 0; var_4_float = 0; var_5_cvector = CVector(0,0,0); var_6_float = 0; var_7_float = 0; // 0x6 PushV
	TaskCall(0); // 0x8 TaskCall
	func_0(); // 0x9 Call
	TaskReturn(); // 0xa TaskReturn
	GetColor(var_5_cvector); // 0xc Func
	
Label_14:
	var_8_float = 0.92; // 0xe PushF
	var_9_float = 1.0; // 0xf PushF
	rand(var_6_float, var_8_float, var_9_float); // 0x10 Func
	var_10_float = var_5_cvector * var_6_float; // 0x12 Mult
	SetColor(var_10_float); // 0x13 Func
	var_11_float = 0.075; // 0x15 PushF
	var_12_float = 0.1; // 0x16 PushF
	rand(var_7_float, var_11_float, var_12_float); // 0x17 Func
	Sleep(var_7_float); // 0x19 Func
	goto Label_14; // 0x1b Jump
}


func_0()
{
	Hold(); // 0x0 Func
	return 0; // 0x2 Return
}


