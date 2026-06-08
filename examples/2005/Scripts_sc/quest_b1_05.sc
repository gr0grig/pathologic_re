event OnTrigger 26;
event OnGameTime 9;

var object g0;

maintask t0
{
	var int tv0;
	var object tv1;
	var object tv2;
	var object tv3;
	var object tv4;
	var object tv5;

	void init(void)
	{
		object L0;
		tv0 = 4;
		@GetSceneByName(L0, "d2q01_house1");
		tv4 = f_e2_a4_o(L0, "pt_b1q05_spi4ka", "NPC_Spi4ka", "b1q05_spi4ka.xml");
		@GetSceneByName(L0, "house_spi4ka");
		@Trigger(L0, "nospi4ka");
		@GetMainOutdoorScene(L0);
		tv1 = f_f4_a4_o(L0, "pt_b1q05_patrol_house", "pers_patrool", "b1q05_patrol_house.xml");
		tv2 = f_f4_a4_o(L0, "pt_b1q05_patrol1", "pers_patrool", "b1q05_patrol_key.xml");
		tv3 = f_f4_a4_o(L0, "pt_b1q05_patrol2", "pers_patrool", "b1q05_patrol.xml");
		tv5 = f_f4_a4_o(L0, "pt_b1q05_woman", "pers_woman", "b1q05_woman.xml");
		f_c4_a1_v(1);
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (a0 == "attack") {
			if (tv2) {
				object L0;
				tv2->GetActor(L0);
				if (L0) {
					@Trigger(L0, "attack");
				}
			}
			if (tv3) {
				object L1;
				tv3->GetActor(L1);
				if (L1) {
					@Trigger(L1, "attack");
				}
			}
		} else {
			if (a0 == "house_load") {
				object L2;
				int L3;
				@GetSceneByName(L2, "d2q01_house1");
				for (L3 = 0; L3 < tv0; L3 = L3 + 1) {
					f_e2_a4_o(L2, "pt_b1q05_rat" + (L3 + 1), "pers_rat", "b1q05_rat.xml");
				}
			} else {
				if (a0 == "rat_dead") {
					tv0 = tv0 + -1;
				} else {
					if (a0 == "fail") {
						f_95_a0_v();
					} else {
						if (a0 == "completed") {
							f_9d_a0_v();
						}
					}
				}
			}
		}
	}

	void f_82_a0_v(void)
	{
		int L0;
		@GetVariable("b1q05", L0);
		if (L0 != 1000) {
			f_95_a0_v();
		}
		f_a5_a0_v();
		@RemoveActor(f_dc_a0_o());
	}

	void f_95_a0_v(void)
	{
		@SetVariable("b1q05", -1);
		f_a5_a0_v();
	}

	void f_9d_a0_v(void)
	{
		@SetVariable("b1q05", 1000);
		f_a5_a0_v();
	}

	void f_a5_a0_v(void)
	{
		object L0;
		disable OnTrigger;
		@GetSceneByName(L0, "house_spi4ka");
		@Trigger(L0, "spi4ka");
		if (tv1) {
			tv1->Remove();
		}
		if (tv2) {
			tv2->Remove();
		}
		if (tv3) {
			tv3->Remove();
		}
		if (tv4) {
			@Trigger(tv4, "cleanup");
		}
		if (tv5) {
			tv5->Remove();
		}
	}

	void f_c4_a1_v(int a0)
	{
		float L0;
		@GetGameTime(L0);
		if (L0 >= a0 * 24) {
			f_a5_a0_v();
		} else {
			@SetTimeEvent(0, a0 * 24);
			@Hold();
		}
	}

	void OnGameTime(int a0, float a1)
	{
		f_82_a0_v();
	}
}

object f_dc_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_e2_a4_o(object a0, string a1, string a2, string a3)
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

object f_f4_a4_o(object a0, string a1, string a2, string a3)
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
		a0->AddStationaryActor(L3, L1, L2, a2, a3);
	}
	return L3;
}

