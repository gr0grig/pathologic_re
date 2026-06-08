event OnTrigger 26;
event OnGameTime 9;

maintask t0
{
	var object tv0;

	void init(void)
	{
		@CreateObjectVector(tv0);
		f_80_a1_v(9);
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (a0 == "init_soldiers") {
			object L0;
			@GetMainOutdoorScene(L0);
			tv0->add(f_9e_a4_o(L0, "pt_d9q02_enemy1", "pers_soldat_hand", "d9q02_e_soldat.xml"));
			tv0->add(f_9e_a4_o(L0, "pt_d9q02_enemy2", "pers_soldat_hand", "d9q02_e_soldat.xml"));
			tv0->add(f_9e_a4_o(L0, "pt_d9q02_enemy3", "pers_soldat_hand", "d9q02_e_soldat_rifle.xml"));
			tv0->add(f_9e_a4_o(L0, "pt_d9q02_enemy4", "pers_soldat_hand", "d9q02_e_soldat_rifle.xml"));
			tv0->add(f_9e_a4_o(L0, "pt_d9q02_enemy5", "pers_soldat_hand", "d9q02_e_soldat_rifle.xml"));
			tv0->add(f_9e_a4_o(L0, "pt_d9q02_enemy6", "pers_soldat_hand", "d9q02_e_soldat_rifle.xml"));
		} else {
			if (a0 == "fail") {
				f_63_a0_v();
			} else {
				if (a0 == "completed") {
					f_6b_a0_v();
				}
			}
		}
	}

	void f_55_a0_v(void)
	{
		int L0;
		@GetVariable("d9q02", L0);
		if (L0 != 1000) {
			f_63_a0_v();
		}
		f_74_a0_v();
	}

	void f_63_a0_v(void)
	{
		@SetVariable("d9q02", -1);
		f_73_a0_v();
	}

	void f_6b_a0_v(void)
	{
		@SetVariable("d9q02", 1000);
		f_73_a0_v();
	}

	void f_73_a0_v(void)
	{
	}

	void f_74_a0_v(void)
	{
		disable OnTrigger;
		f_b0_a2_v(tv0, "cleanup");
		@RemoveActor(f_98_a0_o());
	}

	void f_80_a1_v(int a0)
	{
		float L0;
		@GetGameTime(L0);
		if (L0 >= a0 * 24) {
			f_74_a0_v();
		} else {
			@SetTimeEvent(0, a0 * 24);
			@Hold();
		}
	}

	void OnGameTime(int a0, float a1)
	{
		f_55_a0_v();
	}
}

object f_98_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_9e_a4_o(object a0, string a1, string a2, string a3)
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

void f_b0_a2_v(object a0, string a1)
{
	if (a0) {
		int L0;
		int L1;
		a0->size(L0);
		for (L1 = 0; L1 < L0; L1 = L1 + 1) {
			object L2;
			a0->get(L2, L1);
			if (L2) {
				@Trigger(L2, a1);
			}
		}
	}
}

