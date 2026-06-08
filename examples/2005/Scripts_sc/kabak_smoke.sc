event OnUnload 6;

property int Material;

maintask t0
{
	void init(void)
	{
		object L0;
		if (!f_37_a0_b()) {
			@RemoveActor(f_3c_a0_o());
			return;
		}
		@FindParticleSystem("smoke", L0);
		L0->Enable();
		L0->AddSource([0.0, 0.0, 0.0], [0.0, 0.0, 0.0], 1.5);
		L0->AddSource([150.0, 0.0, 150.0], [0.0, 0.0, 0.0], 1.5);
		L0->AddSource([-150.0, 0.0, -150.0], [0.0, 0.0, 0.0], 1.5);
		L0->AddSource([-150.0, 0.0, 150.0], [0.0, 0.0, 0.0], 1.5);
		L0->AddSource([150.0, 0.0, -150.0], [0.0, 0.0, 0.0], 1.5);
		for (; ; ) {
			@Hold();
		}
	}

	void OnUnload(void)
	{
		@RemoveActor(f_3c_a0_o());
		@sync();
	}
}

bool f_37_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

object f_3c_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

