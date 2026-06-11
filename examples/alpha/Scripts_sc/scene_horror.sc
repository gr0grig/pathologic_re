event OnLoad 5;
event OnUnload 6;

maintask t0
{
	void init(void)
	{
		for (; ; ) {
			@Hold();
		}
	}

	void OnLoad(void)
	{
		t1{};
	}
}

task t1
{
	void init(void)
	{
		bool L0;
		@Sleep(3, L0);
		if (!L0) {
			return;
		}
		for (; ; ) {
			Vector L1;
			@GetRandomPFPoint(L1, 0, 0);
			f_24_a1_v(L1);
			@Sleep(30, L0);
			if (!L0) {
				break;
			}
		}
	}

	void OnUnload(void)
	{
		@StopGroup0();
	}
}

void f_24_a1_v(Vector a0)
{
	object L0;
	@Trace("New fog at " + a0);
	@AddActorByType(L0, "fog", f_33_a0_o(), a0, [0.0, 0.0, 1.0], "horror_fog.xml");
}

object f_33_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

