event OnUse 0;
event OnUnload 6;

maintask t0
{
	void init(void)
	{
		for (; ; ) {
			@Hold();
		}
	}

	void OnUse(void)
	{
	}
}

bool f_5_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

void OnUnload(void)
{
	f_5_a2_b("quest_d2_02", "driver_unload");
}

