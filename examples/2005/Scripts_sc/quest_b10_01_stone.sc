event OnUse 0;
event OnTrigger 26;

maintask t0
{
	var bool tv0;

	void init(void)
	{
		@SetVisibility(true);
		while (!tv0) {
			@Hold();
		}
		@SetUsable(false);
	}

	void OnUse(object a0)
	{
		f_28_a1_o("quest_b10_01_cutscene");
		f_15_a0_v();
	}

	void f_15_a0_v(void)
	{
		tv0 = true;
		@StopGroup0();
		disable OnUse;
	}

	void OnTrigger(string a0)
	{
		if (a0 == "enable_use") {
			@SetUsable();
		} else {
			if (a0 == "disable_use") {
				f_15_a0_v();
			}
		}
	}
}

object f_28_a1_o(string a0)
{
	object L0;
	object L1;
	@GetMainOutdoorScene(L0);
	@AddBlankActor(L1, L0, a0, a0 + ".bin");
	return L1;
}

