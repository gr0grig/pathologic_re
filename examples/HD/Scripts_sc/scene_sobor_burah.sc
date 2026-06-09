event OnLoad 5;
event OnUnload 6;
event OnTrigger 26;

maintask t0
{
	var object tv0;
	var object tv1;
	var object tv2;

	void init(void)
	{
		for (; ; ) {
			@Hold();
		}
	}

	void OnLoad(void)
	{
		int L0;
		@GetVariable("sobor_aglaja", L0);
		if (L0) {
			tv0 = f_5a_a4_o(f_54_a0_o(), "pt_Aglaja", "NPC_Aglaja", "NPC_Burah_Aglaja.xml");
			tv1 = f_5a_a4_o(f_54_a0_o(), "pt_sobor_mask1", "pers_whitemask", "sobor_whitemask.xml");
			tv2 = f_5a_a4_o(f_54_a0_o(), "pt_sobor_mask2", "pers_whitemask", "sobor_whitemask.xml");
		}
		f_6c_a2_b("quest_b12_01", "sobor_load");
	}

	void OnUnload(void)
	{
		if (tv0) {
			@RemoveActor(tv0);
		}
		if (tv1) {
			@RemoveActor(tv1);
		}
		if (tv2) {
			@RemoveActor(tv2);
		}
		f_6c_a2_b("quest_b12_01", "sobor_unload");
	}

	void OnTrigger(string a0)
	{
		if (a0 == "noaglaja") {
			@SetVariable("sobor_aglaja", 0);
		} else {
			if (a0 == "aglaja") {
				@SetVariable("sobor_aglaja", 1);
			}
		}
	}
}

object f_54_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_5a_a4_o(object a0, string a1, string a2, string a3)
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

bool f_6c_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

