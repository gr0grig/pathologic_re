maintask t0
{
	void init(void)
	{
		@GameSleep(1.0);
		f_14_a2_b("quest_d4_02", "survived");
		@RemoveActor(f_e_a0_o());
	}
}

object f_e_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

bool f_14_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

