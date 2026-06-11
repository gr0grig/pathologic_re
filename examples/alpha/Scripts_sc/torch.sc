event OnTrigger 26;

var object g0;

maintask t0
{
	void init(void)
	{
		object L0;
		@FindParticleSystem("torch", L0);
		if (L0 == null) {
			@Trace("Can't find torch particle system");
			return;
		}
		L0->AddSource([0.0, 0.0, 0.0], [0.0, 1.0, 0.0], 0.0);
		L0->Enable();
		g0 = L0;
		for (; ; ) {
			@Hold();
		}
	}

	void OnTrigger(string a0)
	{
		if (a0 == "remove") {
			t1{};
		}
	}
}

task t1
{
	void init(void)
	{
		if (g0) {
			g0->Fade();
		}
		@Sleep(1);
		@RemoveActor(f_33_a0_o());
		@Hold();
	}
}

object f_33_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

