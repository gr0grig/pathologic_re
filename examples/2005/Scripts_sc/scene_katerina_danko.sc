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
		if (f_3b_a1_b(3)) {
			tv0 = f_20_a4_o(f_1a_a0_o(), "pt_klara", "NPC_Klara", "d3_klara.xml");
		}
	}

	void OnUnload(void)
	{
		if (tv0) {
			@RemoveActor(tv0);
		}
	}
}

object f_1a_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_20_a4_o(object a0, string a1, string a2, string a3)
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

int f_32_a0_i(void)
{
	float L0;
	@GetGameTime(L0);
	return 1 + (int)(L0 / 24);
}

bool f_3b_a1_b(int a0)
{
	return f_32_a0_i() == a0;
}

