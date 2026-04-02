maintask task_0
{
	void init(void)
	{
		@CaptureKeyboard();
		float var_1_float;
		@GetPlayerHealth(var_1_float);
		@SendMessage((100 * var_1_float), "health");
		@GetPlayerImmunity(var_1_float);
		@SendMessage((100 * var_1_float), "immunity");
		@GetPlayerVisibility(var_1_float);
		@SendMessage((100 * (1.0 - var_1_float)), "invisibility");
		@GetPlayerNoise(var_1_float);
		@SendMessage((100 * (1.0 - var_1_float)), "noiseless");
		@GetPlayerReputation(var_1_float);
		@SendMessage((100 * var_1_float), "reputation");
		@GetPlayerHunger(var_1_float);
		@SendMessage((100 * var_1_float), "hunger");
		@GetPlayerTiredness(var_1_float);
		@SendMessage((100 * var_1_float), "tiredness");
		@GetPlayerDisease(var_1_float);
		@SendMessage((100 * var_1_float), "infection");
		@ProcessEvents();
	}

	// @pe
	void event_100(int var_0_int)
	{
		@DestroyWindow();
	}

}


