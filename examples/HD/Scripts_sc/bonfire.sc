event OnLoad 5;

maintask t0
{
	void init(void)
	{
		object L0;
		if (!f_4f_a0_b()) {
			@Hold();
		}
		@FindParticleSystem("bonfire", L0);
		if (L0 == null) {
			@Trace("Can't find fire particle system");
			return;
		}
		L0->AddSource([0.0, 0.0, 0.0], [0.0, 1.0, 0.0], 0.0);
		L0->AddSource([10.0, 0.0, 0.0], [0.0, 1.0, 0.0], 0.0);
		L0->AddSource([0.0, 0.0, 10.0], [0.0, 1.0, 0.0], 0.0);
		L0->AddSource([-10.0, 0.0, 0.0], [0.0, 1.0, 0.0], 0.0);
		L0->AddSource([0.0, 0.0, -10.0], [0.0, 1.0, 0.0], 0.0);
		L0->AddSource([10.0, 0.0, 10.0], [0.0, 1.0, 0.0], 0.0);
		L0->AddSource([-10.0, 0.0, -10.0], [0.0, 1.0, 0.0], 0.0);
		L0->AddSource([-10.0, 0.0, 10.0], [0.0, 1.0, 0.0], 0.0);
		L0->AddSource([10.0, 0.0, -10.0], [0.0, 1.0, 0.0], 0.0);
		L0->Enable();
		while (true) {
			object L1;
			@PlayLoopedGlobalSound(L1, "fire_loop", [0.0, 10.0, 0.0]);
			@Hold();
		}
	}

	void OnLoad(void)
	{
		@StopGroup0();
	}
}

bool f_4f_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

