task_0_event_100(var_0_int)
{
	DestroyWindow(); // 0x43 Func
	return 0; // 0x45 Return
}


main()
{
	var_0_float = 0; var_1_float = 0; // 0x0 PushV
	CaptureKeyboard(); // 0x1 Func
	GetPlayerHealth(var_1_float); // 0x3 Func
	var_2_int = 100; // 0x5 PushI
	var_3_float = var_2_int * var_1_float; // 0x6 Mult
	var_4_string = "health"; // 0x7 PushS
	SendMessage(var_3_float, var_4_string); // 0x8 Func
	GetPlayerImmunity(var_1_float); // 0xa Func
	var_5_int = 100; // 0xc PushI
	var_6_float = var_5_int * var_1_float; // 0xd Mult
	var_7_string = "immunity"; // 0xe PushS
	SendMessage(var_6_float, var_7_string); // 0xf Func
	GetPlayerVisibility(var_1_float); // 0x11 Func
	var_8_int = 100; // 0x13 PushI
	var_9_float = 1.0; // 0x14 PushF
	var_10_int = var_9_float - var_1_float; // 0x15 Sub
	var_11_float = var_8_int * var_10_int; // 0x16 Mult
	var_12_string = "invisibility"; // 0x17 PushS
	SendMessage(var_11_float, var_12_string); // 0x18 Func
	GetPlayerNoise(var_1_float); // 0x1a Func
	var_13_int = 100; // 0x1c PushI
	var_14_float = 1.0; // 0x1d PushF
	var_15_int = var_14_float - var_1_float; // 0x1e Sub
	var_16_float = var_13_int * var_15_int; // 0x1f Mult
	var_17_string = "noiseless"; // 0x20 PushS
	SendMessage(var_16_float, var_17_string); // 0x21 Func
	GetPlayerReputation(var_1_float); // 0x23 Func
	var_18_int = 100; // 0x25 PushI
	var_19_float = var_18_int * var_1_float; // 0x26 Mult
	var_20_string = "reputation"; // 0x27 PushS
	SendMessage(var_19_float, var_20_string); // 0x28 Func
	GetPlayerHunger(var_1_float); // 0x2a Func
	var_21_int = 100; // 0x2c PushI
	var_22_float = var_21_int * var_1_float; // 0x2d Mult
	var_23_string = "hunger"; // 0x2e PushS
	SendMessage(var_22_float, var_23_string); // 0x2f Func
	GetPlayerTiredness(var_1_float); // 0x31 Func
	var_24_int = 100; // 0x33 PushI
	var_25_float = var_24_int * var_1_float; // 0x34 Mult
	var_26_string = "tiredness"; // 0x35 PushS
	SendMessage(var_25_float, var_26_string); // 0x36 Func
	GetPlayerDisease(var_1_float); // 0x38 Func
	var_27_int = 100; // 0x3a PushI
	var_28_float = var_27_int * var_1_float; // 0x3b Mult
	var_29_string = "infection"; // 0x3c PushS
	SendMessage(var_28_float, var_29_string); // 0x3d Func
	ProcessEvents(); // 0x3f Func
	return 2; // 0x41 Return
}


