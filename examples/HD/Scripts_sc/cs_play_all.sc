event OnTrigger 26;
event OnUnload 6;

maintask t0
{
	var bool tv0;

	void init(void)
	{
		@PlayAnimation();
		@Hold();
	}

	void OnTrigger(string a0)
	{
		if (a0 == "remove") {
			tv0 = true;
		}
	}

	void OnUnload(void)
	{
		if (tv0) {
			@RemoveActor(f_13_a0_o());
		}
	}
}

object f_13_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

