main()
{
	var_0_float = 0; var_1_float = 0; // 0x0 PushV
	var_2_string = "health"; // 0x1 PushS
	GetProperty(var_2_string, var_1_float); // 0x2 Func
	var_3_float = 0.05; // 0x4 PushF
	var_4_bool = var_1_float > var_3_float; // 0x5 GT
	if(var_4_bool == 0) goto Label_11; // 0x6 JumpB
	var_5_string = "health"; // 0x7 PushS
	var_6_float = 0.05; // 0x8 PushF
	SetProperty(var_5_string, var_6_float); // 0x9 Func
	
Label_11:
	var_7_string = "disease"; // 0xb PushS
	var_8_int = 0; // 0xc PushI
	SetProperty(var_7_string, var_8_int); // 0xd Func
	return 2; // 0xf Return
}


