event OnLoad 5;
event OnUnload 6;

task t0
{
	void init(void)
	{
		@Hold();
	}

	void OnLoad(void)
	{
		@StopGroup0();
	}
}

maintask t1
{
	void init(void)
	{
		object L0;
		if (!f_2c_a0_b()) {
			t0{};
		}
		@FindParticleSystem("fire", L0);
		if (L0 == null) {
			@Trace("Can't find fire particle system");
			return;
		}
		L0->AddSource([0.0, 0.0, 0.0], [0.0, 1.0, 0.0], 0.0);
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

bool f_2c_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

