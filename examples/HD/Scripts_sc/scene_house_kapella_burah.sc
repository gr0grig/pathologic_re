event OnLoad 5;
event OnUnload 6;
event OnTrigger 26;

maintask t0
{
	var bool tv0;
	var bool tv1;
	var object tv2;
	var object tv3;

	void init(void)
	{
		tv0 = true;
		tv1 = false;
		for (; ; ) {
			@Hold();
		}
	}

	void OnLoad(void)
	{
		if (tv0) {
			tv2 = f_45_a4_o(f_3f_a0_o(), "pt_kapella", "NPC_Kapella", "NPC_Burah_Kapella.xml");
		}
		if (tv1) {
			tv3 = f_45_a4_o(f_3f_a0_o(), "pt_han", "NPC_Han", "NPC_Burah_Han.xml");
		}
	}

	void OnUnload(void)
	{
		if (tv2) {
			@RemoveActor(tv2);
		}
		if (tv3) {
			@RemoveActor(tv3);
		}
	}

	void OnTrigger(string a0)
	{
		if (a0 == "nokapella") {
			tv0 = false;
		} else {
			if (a0 == "kapella") {
				tv0 = true;
			} else {
				if (a0 == "nohan") {
					tv1 = false;
				} else {
					if (a0 == "han") {
						tv1 = true;
					}
				}
			}
		}
	}
}

object f_3f_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_45_a4_o(object a0, string a1, string a2, string a3)
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

