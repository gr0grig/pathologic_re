// @IMPORTS: CaptureKeyboard/0,GetPlayerHealth/1,SendMessage/2,GetPlayerImmunity/1,GetPlayerVisibility/1,GetPlayerNoise/1,GetPlayerReputation/1,GetPlayerHunger/1,GetPlayerTiredness/1,GetPlayerDisease/1,ProcessEvents/0,DestroyWindow/0
// @STRINGS: W:health|W:immunity|W:invisibility|W:noiseless|W:reputation|W:hunger|W:tiredness|W:infection
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_100: op=0x42 vars=int
// @PE: 0x42

task_0_event_100(var_0_int)
{
	DestroyWindow();
	return 0;
}


main()
{
	var_0_float = 0; var_1_float = 0;
	CaptureKeyboard();
	GetPlayerHealth(var_1_float);
	var_3_float = (int)100 * var_1_float;
	SendMessage(var_3_float, "health");
	GetPlayerImmunity(var_1_float);
	var_6_float = (int)100 * var_1_float;
	SendMessage(var_6_float, "immunity");
	GetPlayerVisibility(var_1_float);
	var_10_int = (float)1.0 - var_1_float;
	var_11_float = (int)100 * var_10_int;
	SendMessage(var_11_float, "invisibility");
	GetPlayerNoise(var_1_float);
	var_15_int = (float)1.0 - var_1_float;
	var_16_float = (int)100 * var_15_int;
	SendMessage(var_16_float, "noiseless");
	GetPlayerReputation(var_1_float);
	var_19_float = (int)100 * var_1_float;
	SendMessage(var_19_float, "reputation");
	GetPlayerHunger(var_1_float);
	var_22_float = (int)100 * var_1_float;
	SendMessage(var_22_float, "hunger");
	GetPlayerTiredness(var_1_float);
	var_25_float = (int)100 * var_1_float;
	SendMessage(var_25_float, "tiredness");
	GetPlayerDisease(var_1_float);
	var_28_float = (int)100 * var_1_float;
	SendMessage(var_28_float, "infection");
	ProcessEvents();
	return 2;
}


