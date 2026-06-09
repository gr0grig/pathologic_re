event OnLoad 5;
event OnUnload 6;
event OnTrigger 26;

maintask t0
{
	var bool tv0;
	var object tv1;

	void init(void)
	{
		tv0 = true;
		for (; ; ) {
			@Hold();
		}
	}

	void OnLoad(void)
	{
		if (tv0) {
			tv1 = f_29_a4_o(f_23_a0_o(), "pt_laska", "NPC_Laska", "NPC_Klara_Laska.xml");
		}
	}

	void OnUnload(void)
	{
		if (tv1) {
			@RemoveActor(tv1);
		}
	}

	void OnTrigger(string a0)
	{
		if (a0 == "nolaska") {
			tv0 = false;
		} else {
			if (a0 == "laska") {
				tv0 = true;
			}
		}
	}
}

object f_23_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_29_a4_o(object a0, string a1, string a2, string a3)
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

