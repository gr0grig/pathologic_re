event OnUnload 6;

maintask t0
{
	void init(void)
	{
		for (; ; ) {
			@Hold();
		}
	}

	void OnUnload(void)
	{
		f_a_a2_b("quest_b4_01", "factory_unload");
	}
}

bool f_a_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

