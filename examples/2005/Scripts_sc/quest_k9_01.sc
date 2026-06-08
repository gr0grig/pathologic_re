event OnTrigger 26;

var object g0;

maintask t0
{
	var object tv0;
	var object tv1;
	var object tv2;
	var object tv3;

	void init(void)
	{
		@QueuePlayMovie("army.wmv");
		f_d0_a2_v("mnogogrannik_han@door1", false);
		for (; ; ) {
			@Hold();
		}
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (a0 == "init_termitnik2") {
			object L0;
			@GetSceneByName(L0, "burah_home");
			@Trigger(L0, "noburah");
			@GetSceneByName(L0, "cot_eva");
			@Trigger(L0, "nodanko");
			@GetSceneByName(L0, "termitnik2");
			tv1 = f_be_a4_o(L0, "pt_k9q01_burah", "NPC_Bakalavr", "k9q01_danko.xml");
			tv0 = f_be_a4_o(L0, "pt_k9q01_danko", "NPC_Burah", "k9q01_burah.xml");
		} else {
			if (a0 == "init_mnogogrannik") {
				object L1;
				f_d0_a2_v("mnogogrannik@door1", false);
				@GetSceneByName(L1, "mnogogrannik");
				tv2 = f_be_a4_o(L1, "pt_k9q01_littlegirl", "pers_littleboy", "k9q01_littleboy.xml");
				tv3 = f_be_a4_o(L1, "pt_k9q01_littleboy", "pers_littlegirl", "k9q01_littlegirl.xml");
			} else {
				if (a0 == "fail") {
					f_ed_a0_v();
					f_75_a0_v();
				} else {
					if (a0 == "completed") {
						f_ed_a0_v();
						f_7d_a0_v();
					} else {
						if (a0 == "cleanup") {
							int L2;
							@GetVariable("k9q01", L2);
							if (L2 != 1000) {
								f_75_a0_v();
							} else {
								f_85_a0_v();
							}
						}
					}
				}
			}
		}
	}

	void f_75_a0_v(void)
	{
		@SetVariable("k9q01", -1);
		f_85_a0_v();
	}

	void f_7d_a0_v(void)
	{
		@SetVariable("k9q01", 1000);
		f_85_a0_v();
	}

	void f_85_a0_v(void)
	{
		object L0;
		disable OnTrigger;
		if (tv1) {
			@Trigger(tv1, "cleanup");
		}
		if (tv0) {
			@Trigger(tv0, "cleanup");
		}
		if (tv2) {
			@Trigger(tv2, "cleanup");
		}
		if (tv3) {
			@Trigger(tv3, "cleanup");
		}
		@GetSceneByName(L0, "burah_home");
		@Trigger(L0, "burah");
		@GetSceneByName(L0, "cot_eva");
		@Trigger(L0, "danko");
		f_d0_a2_v("mnogogrannik@door1", true);
		f_d0_a2_v("mnogogrannik_han@door1", true);
		@RemoveActor(f_b8_a0_o());
	}
}

object f_b8_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_be_a4_o(object a0, string a1, string a2, string a3)
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

void f_d0_a2_v(string a0, bool a1)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		@Trace("Door " + a0 + " not found");
	} else {
		L0->SetProperty("locked", a1);
	}
}

bool f_e1_a2_b(string a0, string a1)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1);
	return true;
}

void f_ed_a0_v(void)
{
	f_e1_a2_b("klara2_npc_positioner", "init");
}

