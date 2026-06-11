event OnUnload 6;

maintask t0
{
	void init(void)
	{
		object L0;
		if (!f_25_a0_b()) {
			@SetDeathStateAndRemove();
			return;
		}
		@FindParticleSystem("blood", L0);
		L0->Enable();
		L0->AddSource([0.0, 0.0, 0.0], [0.0, 400.0, 0.0], 1.5);
		@Sleep(0.5);
		L0->Fade(true);
		@Sleep(1.0);
		@SetDeathStateAndRemove();
	}

	void OnUnload(void)
	{
		@SetDeathStateAndRemove();
		@sync();
	}
}

bool f_25_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

