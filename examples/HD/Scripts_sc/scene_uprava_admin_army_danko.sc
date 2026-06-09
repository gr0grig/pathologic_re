event OnLoad 5;
event OnUnload 6;

maintask t0
{
	var object tv0;

	void init(void)
	{
		for (; ; ) {
			@Hold();
		}
	}

	void OnLoad(void)
	{
		f_37_a2_b("quest_d11_02", "uprava_load");
		if (f_4c_a1_b(11)) {
			tv0 = f_25_a4_o(f_1f_a0_o(), "pt_d11_klara", "NPC_Klara", "d11_klara.xml");
		}
	}

	void OnUnload(void)
	{
		if (tv0) {
			@RemoveActor(tv0);
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

bool f_37_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

int f_43_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_4c_a1_b(int a0)
{
	return f_43_a0_i() == a0;
}

