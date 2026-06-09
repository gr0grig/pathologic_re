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
		f_10_a2_b("quest_d12_01", "hidden_room_load");
	}

	void OnUnload(void)
	{
		f_10_a2_b("quest_d12_01", "hidden_room_unload");
	}
}

bool f_10_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

