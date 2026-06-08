event OnTrigger 26;
event OnGameTime 9;

var object g0;

maintask t0
{
	var object tv0;
	var object tv1;
	var object tv2;
	var object tv3;
	var object tv4;

	void init(void)
	{
		object L0;
		f_ec_a1_b("NPC_Mark");
		f_db_a2_v("theater@door1", true);
		@SetVariable("k4q02", 1);
		@GetMainOutdoorScene(L0);
		tv0 = f_c8_a4_o(L0, "pt_k4q02_birdmask1", "pers_birdmask", "k4q02_birdmask.xml");
		tv1 = f_c8_a4_o(L0, "pt_k4q02_birdmask2", "pers_birdmask", "k4q02_birdmask.xml");
		@GetSceneByName(L0, "cot_maria");
		tv2 = f_b6_a4_o(L0, "pt_k4q02_mark", "NPC_Mark", "k4q02_mark.xml");
		f_98_a1_v(4);
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (a0 == "init_theater") {
			object L0;
			@GetSceneByName(L0, "theater");
			tv4 = f_b6_a4_o(L0, "pt_k4q02_prophet", "pers_krysa", "k4q02_prophet.xml");
			f_db_a2_v("theater@door1", false);
		} else {
			if (a0 == "completed") {
				f_63_a0_v();
			}
		}
	}

	void f_50_a0_v(void)
	{
		int L0;
		@GetVariable("k4q02", L0);
		if (L0 != 1000) {
			f_5b_a0_v();
		}
	}

	void f_5b_a0_v(void)
	{
		@SetVariable("k4q02", -1);
		f_6b_a0_v();
	}

	void f_63_a0_v(void)
	{
		@SetVariable("k4q02", 1000);
		f_6b_a0_v();
	}

	void f_6b_a0_v(void)
	{
		disable OnTrigger;
		f_db_a2_v("theater@door1", false);
		if (tv2) {
			@Trigger(tv2, "cleanup");
		}
		if (tv0) {
			tv0->Remove();
		}
		if (tv1) {
			tv1->Remove();
		}
		if (tv4) {
			@Trigger(tv4, "cleanup");
		}
		if (!tv3) {
			object L0;
			@GetSceneByName(L0, "theater");
			tv3 = f_b6_a4_o(L0, "pt_mark", "NPC_Mark", "NPC_Klara_Mark.xml");
		}
		@RemoveActor(f_b0_a0_o());
	}

	void f_98_a1_v(int a0)
	{
		float L0;
		@GetGameTime(L0);
		if (L0 >= a0 * 24) {
			f_6b_a0_v();
		} else {
			@SetTimeEvent(0, a0 * 24);
			@Hold();
		}
	}

	void OnGameTime(int a0, float a1)
	{
		f_50_a0_v();
	}
}

object f_b0_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_b6_a4_o(object a0, string a1, string a2, string a3)
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

object f_c8_a4_o(object a0, string a1, string a2, string a3)
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
		a0->AddStationaryActor(L3, L1, L2, a2, a3, true);
	}
	return L3;
}

void f_db_a2_v(string a0, bool a1)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		@Trace("Door " + a0 + " not found");
	} else {
		L0->SetProperty("locked", a1);
	}
}

bool f_ec_a1_b(string a0)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		return false;
	}
	@RemoveActor(L0);
	return true;
}

