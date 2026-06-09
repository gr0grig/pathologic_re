event OnTrigger 26;
event OnGameTime 9;

var object g0;

maintask t0
{
	var object tv0;
	var object tv1;
	var object tv2;
	var object tv3;

	void init(void)
	{
		@SetVariable("b4q02", 1);
		tv3 = f_c4_a0_o();
		f_a6_a1_v(4);
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (a0 == "place_boy") {
			object L0;
			@GetMainOutdoorScene(L0);
			tv0 = f_dc_a4_o(L0, "pt_b4q02_boy", "pers_boy", "b4q02_boy.xml");
			@GetSceneByName(L0, "house5_unoin03r");
			tv1 = f_ca_a4_o(L0, "pt_b4q02_samopal", "scripted_container", "b4q02_samopal.xml");
			tv2 = f_ca_a4_o(L0, "pt_b4q02_samopal_ammo", "scripted_container", "b4q02_samopal_ammo.xml");
		} else {
			if (a0 == "boy_run") {
				object L1;
				object L2;
				int L3;
				@GetMainOutdoorScene(L2);
				for (L3 = 1; ; L3++) {
					bool L4;
					Vector L5;
					Vector L6;
					L2->GetLocator("pt_b4q02_grabitel" + L3, L4, L5, L6);
					if (!L4) {
						break;
					}
					L2->AddStationaryActor(L1, L5, L6, "pers_grabitel", "b4q02_grabitel.xml", true);
					tv3->add(L1);
				}
				tv0->GetActor(L1);
				if (!L1) {
					tv0->Remove();
				} else {
					@Trigger(L1, "run");
				}
			} else {
				if (a0 == "ammo_or_samopal_taken") {
					f_103_a0_v();
					f_85_a0_v();
				} else {
					if (a0 == "house_load") {
					} else {
						if (a0 == "fail") {
							f_7d_a0_v();
						} else {
							if (a0 == "completed") {
								f_85_a0_v();
							}
						}
					}
				}
			}
		}
	}

	void f_72_a0_v(void)
	{
		int L0;
		@GetVariable("b4q02", L0);
		if (L0 != 1000) {
			f_7d_a0_v();
		}
	}

	void f_7d_a0_v(void)
	{
		@SetVariable("b4q02", -1);
		f_8d_a0_v();
	}

	void f_85_a0_v(void)
	{
		@SetVariable("b4q02", 1000);
		f_8d_a0_v();
	}

	void f_8d_a0_v(void)
	{
		disable OnTrigger;
		if (tv0) {
			tv0->Remove();
		}
		if (tv1) {
			@Trigger(tv1, "cleanup");
		}
		if (tv2) {
			@Trigger(tv2, "cleanup");
		}
		f_ee_a1_v(tv3);
		@RemoveActor(f_be_a0_o());
	}

	void f_a6_a1_v(int a0)
	{
		float L0;
		@GetGameTime(L0);
		if (L0 >= a0 * 24) {
			f_8d_a0_v();
		} else {
			@SetTimeEvent(0, a0 * 24);
			@Hold();
		}
	}

	void OnGameTime(int a0, float a1)
	{
		f_72_a0_v();
	}
}

object f_be_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_c4_a0_o(void)
{
	object L0;
	@CreateObjectVector(L0);
	return L0;
}

object f_ca_a4_o(object a0, string a1, string a2, string a3)
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

object f_dc_a4_o(object a0, string a1, string a2, string a3)
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

void f_ee_a1_v(object a0)
{
	if (a0) {
		int L0;
		int L1;
		a0->size(L0);
		for (L1 = 0; L1 < L0; L1++) {
			object L2;
			a0->get(L2, L1);
			if (L2) {
				L2->Remove();
			}
		}
		a0->clear();
	}
}

void f_103_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 215, 2, 518578);
	f_11d_a2_b(L0, 213);
}

object f_110_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_11d_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_110_a0_o();
	L0->Find(a1, L1);
	if (!L1) {
		@Trace("Can't find diary parent with id: " + a1);
		return false;
	}
	L1->AddChild(a0);
	@SendWorldWndMessage(7);
	a0->GetCategory(L2);
	@SetDiarySection(L2);
	return false;
}

