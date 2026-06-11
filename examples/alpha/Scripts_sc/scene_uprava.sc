event OnLoad 5;

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
		f_36_a2_b("quest_d11_02", "uprava_load");
		if (!tv0) {
			float L0;
			@GetGameTime(L0);
			if (L0 >= 192) {
				tv0 = true;
				f_24_a4_o(f_1e_a0_o(), "pt_Block", "NPC_Block", "NPC_Danko_Block.xml");
			}
		}
	}
}

object f_1e_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_24_a4_o(object a0, string a1, string a2, string a3)
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

bool f_36_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

