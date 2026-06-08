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
	var bool tv5;

	void init(void)
	{
		f_c1_a1_v(6);
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (a0 == "init_grave") {
			object L0;
			@GetSceneByName(L0, "crypt2");
			tv2 = f_f1_a4_o(L0, "pt_b6q03_diary", "scripted_container", "b6q03_item_diary.xml");
			@GetMainOutdoorScene(L0);
			@AddActor(tv0, "b6q03_light_fire", L0, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0], "light_fire.xml");
			tv1 = f_f1_a4_o(L0, "pt_b6q03_fire", "scripted", "fire.xml");
			tv3 = f_df_a4_o(L0, "pt_b6q03_agony1", "pers_worker", "agony1_man.xml");
			tv4 = f_df_a4_o(L0, "pt_b6q03_agony2", "pers_woman", "agony1_woman.xml");
		} else {
			if (a0 == "crypt2_load") {
			} else {
				if (a0 == "crypt2_unload") {
					if (!tv5) {
						object L1;
						tv5 = true;
						@GetMainOutdoorScene(L1);
						f_df_a4_o(L1, "pt_b6q03_bomber1", "pers_bomber", "b6q03_bomber.xml");
						f_df_a4_o(L1, "pt_b6q03_bomber2", "pers_bomber", "b6q03_bomber.xml");
						f_df_a4_o(L1, "pt_b6q03_diseased1", "pers_vaxxabit", "vaxxabit_d.xml");
						f_df_a4_o(L1, "pt_b6q03_diseased2", "pers_vaxxabit", "vaxxabit_d.xml");
						f_df_a4_o(L1, "pt_b6q03_diseased3", "pers_vaxxabitka", "vaxxabitka_d.xml");
						f_df_a4_o(L1, "pt_b6q03_diseased4", "pers_vaxxabitka", "vaxxabitka_d.xml");
					}
				} else {
					if (a0 == "diary_taken") {
						f_103_a0_v();
						@PlaySound("explode");
					} else {
						if (a0 == "fail") {
							f_93_a0_v();
						} else {
							if (a0 == "completed") {
								f_9b_a0_v();
							}
						}
					}
				}
			}
		}
	}

	void f_88_a0_v(void)
	{
		int L0;
		@GetVariable("b6q03", L0);
		if (L0 != 1000) {
			f_93_a0_v();
		}
	}

	void f_93_a0_v(void)
	{
		@SetVariable("b6q03", -1);
		f_a3_a0_v();
	}

	void f_9b_a0_v(void)
	{
		@SetVariable("b6q03", 1000);
		f_a3_a0_v();
	}

	void f_a3_a0_v(void)
	{
		disable OnTrigger;
		if (tv1) {
			@RemoveActor(tv1);
		}
		if (tv0) {
			@RemoveActor(tv0);
		}
		if (tv2) {
			@Trigger(tv2, "cleanup");
		}
		if (tv3) {
			@Trigger(tv3, "cleanup");
		}
		if (tv4) {
			@Trigger(tv4, "cleanup");
		}
		@RemoveActor(f_d9_a0_o());
	}

	void f_c1_a1_v(int a0)
	{
		float L0;
		@GetGameTime(L0);
		if (L0 >= a0 * 24) {
			f_a3_a0_v();
		} else {
			@SetTimeEvent(0, a0 * 24);
			@Hold();
		}
	}

	void OnGameTime(int a0, float a1)
	{
		f_88_a0_v();
	}
}

object f_d9_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_df_a4_o(object a0, string a1, string a2, string a3)
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

object f_f1_a4_o(object a0, string a1, string a2, string a3)
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

void f_103_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 278, 2, 521339);
	f_11d_a2_b(L0, 276);
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

