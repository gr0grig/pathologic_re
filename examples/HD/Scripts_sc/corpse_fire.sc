event OnTimer 7;
event OnTrigger 26;

maintask t0
{
	void init(void)
	{
		object L0;
		@SetTimer(1, 5.0);
		@FindParticleSystem("fire", L0);
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
		@Hold();
		@KillTimer(1);
		L0->Fade(true);
		@Sleep(2);
		@RemoveActor(f_5f_a0_o());
	}

	void OnTimer(int a0)
	{
		if (a0 == 1) {
			@StopGroup0();
		}
	}

	void OnTrigger(string a0)
	{
		if (a0 == "continue") {
			@SetTimer(1, 5.0);
		}
	}
}

object f_5f_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

