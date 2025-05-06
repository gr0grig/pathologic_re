main(var_0_float, var_1_float)
{
	var_2_float = 0; var_3_float = 0; // 0x0 PushV
	
Label_1:
	var_4_bool = 1; // 0x1 PushB
	Switch(var_4_bool); // 0x2 Func
	var_5_float = 0.05; // 0x4 PushF
	var_6_float = 1.0; // 0x5 PushF
	rand(var_3_float, var_5_float, var_6_float); // 0x6 Func
	Sleep(var_3_float); // 0x8 Func
	var_7_bool = 0; // 0xa PushB
	Switch(var_7_bool); // 0xb Func
	var_8_float = 0.05; // 0xd PushF
	var_9_float = 1.0; // 0xe PushF
	rand(var_3_float, var_8_float, var_9_float); // 0xf Func
	Sleep(var_3_float); // 0x11 Func
	goto Label_1; // 0x13 Jump
}


