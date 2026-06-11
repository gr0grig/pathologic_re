event OnLoad 5;
event OnTrigger 26;

maintask t0
{
	var bool tv0;

	void init(void)
	{
		tv0 = false;
		for (; ; ) {
			@Hold();
		}
	}

	void OnLoad(void)
	{
		if (!tv0) {
			float L0;
			@GetGameTime(L0);
			if (L0 >= 144) {
				tv0 = true;
				f_25_a4_o(f_1f_a0_o(), "pt_Aglaja", "NPC_Aglaja", "NPC_Danko_Aglaja.xml");
			}
		}
	}

	void OnTrigger(string a0)
	{
		if (a0 == "noaglaja") {
			tv0 = true;
		}
	}
}

object f_1f_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_25_a4_o(object a0, string a1, string a2, string a3)
{
	bool L0;
	Vector L1;
	Vector L2;
	object L3;
	a0->GetLocator(a1, L0, L1, L2);
	if (!L0) {
		@Trace("Locator " + a1 + " doesn't exist");
		L3 = null;
	} else {
		@AddActor(L3, a2, a0, L1, L2, a3);
	}
	return L3;
}

