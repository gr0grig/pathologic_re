event OnChar 100;

maintask t0
{
	void init(void)
	{
		float L0;
		@CaptureKeyboard();
		@GetPlayerHealth(L0);
		@SendMessage(100 * L0, "health");
		@GetPlayerImmunity(L0);
		@SendMessage(100 * L0, "immunity");
		@GetPlayerVisibility(L0);
		@SendMessage(100 * (1.0 - L0), "invisibility");
		@GetPlayerNoise(L0);
		@SendMessage(100 * (1.0 - L0), "noiseless");
		@GetPlayerReputation(L0);
		@SendMessage(100 * L0, "reputation");
		@GetPlayerHunger(L0);
		@SendMessage(100 * L0, "hunger");
		@GetPlayerTiredness(L0);
		@SendMessage(100 * L0, "tiredness");
		@GetPlayerDisease(L0);
		@SendMessage(100 * L0, "infection");
		@ProcessEvents();
	}

	void OnChar(int a0)
	{
		@DestroyWindow();
	}
}

