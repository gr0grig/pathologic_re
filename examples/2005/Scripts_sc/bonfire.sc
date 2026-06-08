event OnLoad 5;
event OnUnload 6;

task t0
{
	void init(void)
	{
		do {
			@Hold();
		} while (!f_60_a0_b());
	}

	void OnLoad(void)
	{
		@StopGroup0();
		@sync();
	}
}

maintask t1
{
	void init(void)
	{
		object L0;
		object L1;
		if (!f_60_a0_b()) {
			t0{};
		}
		@FindParticleSystem("bonfire", L0);
		if (L0 == null) {
			@Trace("Can't find fire particle system");
			return;
		}
		@PlayLoopedGlobalSound(L1, "fire_loop", [0.0, 10.0, 0.0]);
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
		for (; ; ) {
			@Hold();
		}
	}

	void OnUnload(void)
	{
		t0{};
	}
}

bool f_60_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

