event OnLoad 5;
event OnTrigger 26;
event OnUnload 6;

maintask t0
{
	var bool tv0;

	void init(void)
	{
		string L0;
		@RemoveRTEnvelope();
		@RemoveEnvelope();
		@SetDeathState();
		@GetProperty("animation", L0);
		@LockAnimationEnd("all", L0);
		f_19_a0_v();
	}

	void OnLoad(void)
	{
		string L0;
		@GetProperty("animation", L0);
		@LockAnimationEnd("all", L0);
	}

	void f_19_a0_v(void)
	{
		for (; ; ) {
			@Hold();
		}
	}

	void OnTrigger(string a0)
	{
		if (a0 == "cleanup") {
			bool L0;
			tv0 = true;
			@IsLoaded(L0);
			if (!L0 && f_49_a0_b()) {
				@RemoveActor(f_4b_a0_o());
			}
		} else {
			if (a0 == "restore") {
				tv0 = false;
			}
		}
	}

	void OnUnload(void)
	{
		if (tv0 && f_49_a0_b()) {
			@RemoveActor(f_4b_a0_o());
		}
	}
}

bool f_49_a0_b(void)
{
	return true;
}

object f_4b_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

