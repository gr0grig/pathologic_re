event OnTrigger 26;

maintask t0
{
	var object tv0;

	void f_0_a0_v(void)
	{
		int L0;
		@Trace("kill the one");
		@GetVariable("b8q03MladVladIsVictim", L0);
		if (L0 != 0) {
			f_b8_a3_b("volonteers_burah", "kill", "mladvlad");
		} else {
			f_b8_a3_b("volonteers_burah", "kill", "bigvlad");
		}
	}

	void init(void)
	{
		f_a7_a2_v("boiny@door1", true);
		f_a7_a2_v("vagon_mishka@door1", false);
		for (; ; ) {
			@Hold();
		}
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (a0 == "place_klara") {
			object L0;
			@GetSceneByName(L0, "vagon_mishka");
			tv0 = f_95_a4_o(L0, "pt_b8q01_klara", "NPC_Klara", "b8q01_klara.xml");
		} else {
			if (a0 == "remove_klara") {
				@Trigger(tv0, "cleanup");
			} else {
				if (a0 == "unlock_boiny") {
					f_a7_a2_v("boiny@door1", false);
				} else {
					if (a0 == "cleanup") {
						int L1;
						@GetVariable("b8q01", L1);
						if (L1 != 1000) {
							f_6b_a0_v();
						} else {
							f_7b_a0_v();
						}
						f_81_a0_v();
					} else {
						if (a0 == "fail") {
							f_6b_a0_v();
						} else {
							if (a0 == "completed") {
								f_73_a0_v();
							}
						}
					}
				}
			}
		}
	}

	void f_6b_a0_v(void)
	{
		@SetVariable("b8q01", -1);
		f_7b_a0_v();
	}

	void f_73_a0_v(void)
	{
		@SetVariable("b8q01", 1000);
		f_7b_a0_v();
	}

	void f_7b_a0_v(void)
	{
		if (tv0) {
			@Trigger(tv0, "cleanup");
		}
	}

	void f_81_a0_v(void)
	{
		f_0_a0_v();
		@RemoveActor(f_8f_a0_o());
		f_a7_a2_v("boiny@door1", true);
	}
}

object f_8f_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_95_a4_o(object a0, string a1, string a2, string a3)
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

void f_a7_a2_v(string a0, bool a1)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		@Trace("Door " + a0 + " not found");
	} else {
		L0->SetProperty("locked", a1);
	}
}

bool f_b8_a3_b(string a0, string a1, string a2)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1, a2);
	return true;
}

