event OnLoad 5;

maintask t0
{
	var bool tv0;
	var object tv1;

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
			if (L0 >= 240 && L0 < 264) {
				tv0 = true;
				tv1 = f_32_a4_o(f_2c_a0_o(), "pt_d11q03_Burah", "NPC_Burah", "d11q03_Burah.xml");
			}
		} else {
			float L1;
			@GetGameTime(L1);
			if (L1 >= 264) {
				if (tv1) {
					@RemoveActor(tv1);
				}
				tv0 = false;
			}
		}
	}
}

object f_2c_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_32_a4_o(object a0, string a1, string a2, string a3)
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

