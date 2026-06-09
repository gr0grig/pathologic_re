event OnTrigger 26;
event OnIntersection 23;

maintask t0
{
	var bool tv0;

	void init(void)
	{
		for (; ; ) {
			@Hold();
		}
	}

	void OnTrigger(string a0)
	{
		if (a0 == "activate") {
			tv0 = true;
		} else {
			if (a0 == "deactivate") {
				tv0 = false;
			}
		}
	}

	void OnIntersection(object a0)
	{
		bool L0;
		@IsPlayerActor(a0, L0);
		if (L0) {
			if (tv0) {
				f_21_a2_b("quest_b11_01", "shaft_drop");
			} else {
				a0->SetProperty("health", 0);
			}
		}
	}
}

bool f_21_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

