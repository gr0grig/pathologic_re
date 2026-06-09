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
		object L0;
		f_156_a2_v("sobor@door1", true);
		@CreateObjectVector(tv0);
		@CreateObjectVector(tv1);
		@GetMainOutdoorScene(L0);
		tv0->add(f_144_a4_o(L0, "pt_k5q04_sobor_patrol1", "pers_patrool", "k5q04_sobor_guard_patrol.xml"));
		tv0->add(f_144_a4_o(L0, "pt_k5q04_sobor_wasted", "pers_wasted_male", "k5q04_sobor_guard_wasted.xml"));
		tv0->add(f_144_a4_o(L0, "pt_k5q04_sobor_patrol2", "pers_patrool", "k5q04_sobor_guard_patrol.xml"));
		@GetSceneByName(L0, "cot_eva");
		@Trigger(L0, "danko");
		f_114_a1_v(5);
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (a0 == "sobor_load") {
			object L0;
			f_191_a0_v();
			@SetVariable("k5q04SoborVisit", 1);
			@GetSceneByName(L0, "sobor");
			@AddActor(tv2, "k5q04_crowd1", L0, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0], "static_keep.xml");
			@Trace(tv2);
			@AddActor(tv3, "k5q04_crowd2", L0, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0], "static_keep.xml");
			@Trace(tv3);
			tv1->add(f_132_a4_o(L0, "pt_k5q04_people1", "pers_woman", "k5q04_sobor_woman.xml"));
			tv1->add(f_132_a4_o(L0, "pt_k5q04_people2", "pers_nudegirl", "k5q04_sobor_nudegirl.xml"));
			tv1->add(f_132_a4_o(L0, "pt_k5q04_people3", "pers_worker", "k5q04_sobor_worker.xml"));
			tv1->add(f_132_a4_o(L0, "pt_k5q04_people4", "pers_boy", "k5q04_sobor_boy.xml"));
			tv1->add(f_132_a4_o(L0, "pt_k5q04_people5", "pers_salesman", "k5q04_sobor_salesman.xml"));
			tv1->add(f_132_a4_o(L0, "pt_k5q04_people6", "pers_woman", "k5q04_sobor_woman.xml"));
			tv1->add(f_132_a4_o(L0, "pt_k5q04_people7", "pers_worker", "k5q04_sobor_worker.xml"));
			tv1->add(f_132_a4_o(L0, "pt_k5q04_people8", "pers_unosha", "k5q04_sobor_unosha.xml"));
			tv1->add(f_132_a4_o(L0, "pt_k5q04_people9", "pers_girl", "k5q04_sobor_girl.xml"));
			tv1->add(f_132_a4_o(L0, "pt_k5q04_people10", "pers_worker", "k5q04_sobor_worker.xml"));
			tv1->add(f_132_a4_o(L0, "pt_k5q04_people11", "pers_woman", "k5q04_sobor_woman.xml"));
			tv1->add(f_132_a4_o(L0, "pt_k5q04_people12", "pers_unosha", "k5q04_sobor_unosha.xml"));
		} else {
			if (a0 == "sobor_unload") {
				f_167_a1_v(tv1);
				f_156_a2_v("sobor@door1", true);
				@Trace(tv2);
				@RemoveActor(tv2);
				@Trace(tv3);
				@RemoveActor(tv3);
			} else {
				if (a0 == "completed") {
					f_f3_a0_v();
				}
			}
		}
	}

	void f_dd_a0_v(void)
	{
		int L0;
		@GetVariable("k5q04", L0);
		if (L0 != 1000) {
			f_eb_a0_v();
		}
		f_fc_a0_v();
	}

	void f_eb_a0_v(void)
	{
		@SetVariable("k5q04", -1);
		f_fb_a0_v();
	}

	void f_f3_a0_v(void)
	{
		@SetVariable("k5q04", 1000);
		f_fb_a0_v();
	}

	void f_fb_a0_v(void)
	{
	}

	void f_fc_a0_v(void)
	{
		object L0;
		disable OnTrigger;
		f_17c_a1_v(tv0);
		f_156_a2_v("sobor@door1", true);
		@GetSceneByName(L0, "cot_eva");
		@Trigger(L0, "nodanko");
		@RemoveActor(f_12c_a0_o());
	}

	void f_114_a1_v(int a0)
	{
		float L0;
		@GetGameTime(L0);
		if (L0 >= a0 * 24) {
			f_fc_a0_v();
		} else {
			@SetTimeEvent(0, a0 * 24);
			@Hold();
		}
	}

	void OnGameTime(int a0, float a1)
	{
		f_dd_a0_v();
	}
}

object f_12c_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_132_a4_o(object a0, string a1, string a2, string a3)
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

object f_144_a4_o(object a0, string a1, string a2, string a3)
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

void f_156_a2_v(string a0, bool a1)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		@Trace("Door " + a0 + " not found");
	} else {
		L0->SetProperty("locked", a1);
	}
}

void f_167_a1_v(object a0)
{
	if (a0) {
		int L0;
		int L1;
		a0->size(L0);
		for (L1 = 0; L1 < L0; L1++) {
			object L2;
			a0->get(L2, L1);
			if (L2) {
				@RemoveActor(L2);
			}
		}
		a0->clear();
	}
}

void f_17c_a1_v(object a0)
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

void f_191_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 746, 2, 539463);
	f_1ab_a2_b(L0, 740);
}

object f_19e_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_1ab_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_19e_a0_o();
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

