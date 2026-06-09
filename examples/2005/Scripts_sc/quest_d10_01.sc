event OnTrigger 26;

maintask t0
{
	var object tv0;
	var object tv1;
	var object tv2;
	var object tv3;
	var bool tv4;

	void init(void)
	{
		object L0;
		@GetSceneByName(L0, "warehouse_rubin");
		@Trigger(L0, "rubin");
		f_eb_a2_v("house_petr@door1", false);
		tv0 = f_c1_a0_o();
		tv4 = false;
		for (; ; ) {
			@Hold();
		}
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (a0 == "init_house") {
			object L0;
			int L1;
			f_fc_a1_b("NPC_Petr");
			@GetSceneByName(L0, "house_petr");
			for (L1 = 1; L1 <= 4; L1++) {
				tv0->add(f_c7_a4_o(L0, "pt_d10q01_soldier" + L1, "pers_soldat", "d10q01_soldier.xml"));
			}
			tv0->add(f_c7_a4_o(L0, "pt_d10q01_msoldier", "pers_soldat", "d10q01_msoldier.xml"));
			tv1 = f_d9_a4_o(L0, "pt_d10q01_sketch", "scripted_container", "d10q01_blueprint.xml");
			@GetMainOutdoorScene(L0);
			tv2 = f_c7_a4_o(L0, "pt_d10q01_petr", "pers_birdmask", "d10q01_petr.xml");
			tv3 = f_d9_a4_o(L0, "pt_d10q01_fire", "scripted", "d10q01_fire.xml");
		} else {
			if (a0 == "soldier_fight") {
				f_108_a2_v(tv0, "attack");
				tv4 = true;
			} else {
				if (a0 == "house_unload") {
					f_eb_a2_v("house_petr@door1", true);
				} else {
					if (a0 == "cleanup") {
						int L2;
						@GetVariable("d10q01", L2);
						if (L2 != 1000) {
							f_8b_a0_v();
						} else {
							f_9b_a0_v();
						}
					} else {
						if (a0 == "fail") {
							f_8b_a0_v();
						} else {
							if (a0 == "completed") {
								f_93_a0_v();
							}
						}
					}
				}
			}
		}
	}

	void f_8b_a0_v(void)
	{
		@SetVariable("d10q01", -1);
		f_9b_a0_v();
	}

	void f_93_a0_v(void)
	{
		@SetVariable("d10q01", 1000);
		f_9b_a0_v();
	}

	void f_9b_a0_v(void)
	{
		disable OnTrigger;
		f_108_a2_v(tv0, "cleanup");
		if (tv1) {
			@Trigger(tv1, "cleanup");
		}
		if (tv2) {
			@Trigger(tv2, "cleanup");
		}
		if (tv3) {
			@Trigger(tv3, "cleanup");
		}
		f_eb_a2_v("house_petr@door1", false);
		@RemoveActor(f_bb_a0_o());
	}
}

object f_bb_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_c1_a0_o(void)
{
	object L0;
	@CreateObjectVector(L0);
	return L0;
}

object f_c7_a4_o(object a0, string a1, string a2, string a3)
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

object f_d9_a4_o(object a0, string a1, string a2, string a3)
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
		@AddActorByType(L3, a2, a0, L1, L2, a3);
	}
	return L3;
}

void f_eb_a2_v(string a0, bool a1)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		@Trace("Door " + a0 + " not found");
	} else {
		L0->SetProperty("locked", a1);
	}
}

bool f_fc_a1_b(string a0)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		return false;
	}
	@RemoveActor(L0);
	return true;
}

void f_108_a2_v(object a0, string a1)
{
	if (a0) {
		int L0;
		int L1;
		a0->size(L0);
		for (L1 = 0; L1 < L0; L1++) {
			object L2;
			a0->get(L2, L1);
			if (L2) {
				@Trigger(L2, a1);
			}
		}
	}
}

