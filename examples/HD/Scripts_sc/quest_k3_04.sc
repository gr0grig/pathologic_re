event OnTrigger 26;
event OnGameTime 9;

var object g0;

maintask t0
{
	var object tv0;
	var object tv1;
	var object tv2;

	void init(void)
	{
		object L0;
		f_d8_a2_v("icot_eva_door", true);
		@SetVariable("k3q04", 1);
		@GetSceneByName(L0, "dt_house2_08");
		tv0 = f_a3_a4_o(L0, "pt_k3q04_danko", "NPC_Bakalavr", "k3q04_danko.xml");
		f_85_a1_v(3);
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (a0 == "place_burah_lopuh") {
			object L0;
			f_c7_a2_v("burah_home@door1", true);
			@GetSceneByName(L0, "house5_23");
			tv1 = f_a3_a4_o(L0, "pt_k3q04_burah", "NPC_Burah", "k3q04_burah.xml");
			@GetMainOutdoorScene(L0);
			tv2 = f_b5_a4_o(L0, "pt_d3q03_boy", "pers_littleboy", "k3q04_boy.xml");
		} else {
			if (a0 == "completed") {
				f_5e_a0_v();
			} else {
				if (a0 == "fail") {
					f_56_a0_v();
				}
			}
		}
	}

	void f_4b_a0_v(void)
	{
		int L0;
		@GetVariable("k3q04", L0);
		if (L0 != 1000) {
			f_56_a0_v();
		}
	}

	void f_56_a0_v(void)
	{
		@SetVariable("k3q04", -1);
		f_66_a0_v();
	}

	void f_5e_a0_v(void)
	{
		@SetVariable("k3q04", 1000);
		f_66_a0_v();
	}

	void f_66_a0_v(void)
	{
		disable OnTrigger;
		f_d8_a2_v("icot_eva_door", false);
		f_c7_a2_v("burah_home@door1", false);
		if (tv0) {
			@Trigger(tv0, "cleanup");
		}
		if (tv1) {
			@Trigger(tv1, "cleanup");
		}
		if (tv2) {
			tv2->Remove();
		}
		@RemoveActor(f_9d_a0_o());
	}

	void f_85_a1_v(int a0)
	{
		float L0;
		@GetGameTime(L0);
		if (L0 >= a0 * 24) {
			f_66_a0_v();
		} else {
			@SetTimeEvent(0, a0 * 24);
			@Hold();
		}
	}

	void OnGameTime(int a0, float a1)
	{
		f_4b_a0_v();
	}
}

object f_9d_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_a3_a4_o(object a0, string a1, string a2, string a3)
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

object f_b5_a4_o(object a0, string a1, string a2, string a3)
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

void f_c7_a2_v(string a0, bool a1)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		@Trace("Door " + a0 + " not found");
	} else {
		L0->SetProperty("locked", a1);
	}
}

void f_d8_a2_v(string a0, bool a1)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		@Trace("Door " + a0 + " not found");
	} else {
		if (a1) {
			L0->Close();
		}
		L0->SetProperty("locked", a1);
	}
}

