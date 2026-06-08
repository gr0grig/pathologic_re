event OnTrigger 26;
event OnLoad 5;
event OnUnload 6;

maintask t0
{
	var bool tv0;

	void init(void)
	{
		for (; ; ) {
			while (!f_3e_a0_b()) {
				@Hold();
			}
			@PlayAnimation("all", "prisoner");
			@WaitForAnimEnd();
		}
	}

	void OnTrigger(string a0)
	{
		if (a0 == "cleanup") {
			bool L0;
			tv0 = true;
			@IsLoaded(L0);
			if (!L0 && f_3c_a0_b()) {
				@RemoveActor(f_43_a0_o());
			}
		}
	}

	void OnLoad(void)
	{
		@StopGroup0();
		@sync();
	}

	void OnUnload(void)
	{
		if (tv0 && f_3c_a0_b()) {
			@RemoveActor(f_43_a0_o());
		}
	}
}

bool f_3c_a0_b(void)
{
	return true;
}

bool f_3e_a0_b(void)
{
	bool L0;
	@IsLoaded(L0);
	return L0;
}

object f_43_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

