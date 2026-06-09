event OnUnload 6;

property int Material;

maintask t0
{
	void init(void)
	{
		object L0;
		if (!f_2e_a0_b()) {
			@RemoveActor(f_33_a0_o());
			return;
		}
		@FindParticleSystem("richochet", L0);
		L0->Enable();
		L0->AddSource([0.0, 0.0, 0.0], [0.0, 400.0, 0.0], 1.5);
		@Sleep(0.5);
		L0->Fade(true);
		@Sleep(0.5);
		@RemoveActor(f_33_a0_o());
	}

	void OnUnload(void)
	{
		@RemoveActor(f_33_a0_o());
		@sync();
	}
}

bool f_2e_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

object f_33_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

