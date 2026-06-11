event OnUnload 6;

property int Material;

maintask t0
{
	void init(void)
	{
		object L0;
		if (!f_43_a0_b()) {
			@SetDeathStateAndRemove();
			return;
		}
		@PlayGlobalSound(f_2f_a1_s(Material), [0.0, 0.0, 0.0], 500);
		@FindParticleSystem("richochet", L0);
		L0->Enable();
		L0->AddSource([0.0, 0.0, 0.0], [0.0, 400.0, 0.0], 1.5);
		@Sleep(0.5);
		L0->Fade(true);
		@Sleep(0.5);
		@SetDeathStateAndRemove();
	}

	void OnUnload(void)
	{
		@SetDeathStateAndRemove();
		@sync();
	}
}

string f_2f_a1_s(int a0)
{
	if (a0 == 1) {
		return "wood";
	} else {
		if (a0 == 2) {
			return "metal";
		} else {
			if (a0 == 3) {
				return "ground";
			}
		}
	}
	return "stone";
}

bool f_43_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

