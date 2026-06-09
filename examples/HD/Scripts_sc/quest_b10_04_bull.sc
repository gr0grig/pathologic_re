event OnUnload 6;
event OnLoad 5;
event OnTrigger 26;
event OnDispose 32;

var object g0;

maintask t0
{
	var bool tv0;

	void init(void)
	{
		if (!f_45_a0_b()) {
			@Hold();
		}
		f_14_a0_v();
		while (true) {
			@PlayAnimation("all", "ill");
			@WaitForAnimEnd();
		}
	}

	void f_14_a0_v(void)
	{
		object L0;
		object L1;
		@GetScene(L0);
		@AddActor(L1, "b10q04_bull_envelope", L0, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0]);
		g0 = L1;
	}

	void OnUnload(void)
	{
		@StopAnimation();
		if (tv0) {
			@RemoveActor(f_4a_a0_o());
		}
		@Hold();
	}

	void OnLoad(void)
	{
		@StopGroup0();
	}

	void OnTrigger(string a0)
	{
		if (a0 == "cleanup") {
			bool L0;
			tv0 = true;
			@IsLoaded(L0);
			if (!L0) {
				@RemoveActor(f_4a_a0_o());
			}
		} else {
			if (a0 == "restore") {
				tv0 = false;
			}
		}
	}
}

bool f_45_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

object f_4a_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

void OnDispose(void)
{
	if (g0) {
		@RemoveActor(g0);
	}
}

