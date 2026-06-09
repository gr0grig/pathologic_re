event OnTrigger 26;
event OnKeyDown 24;
event OnGameTime 9;

maintask t0
{
	var object tv0;
	var object tv1;

	void init(void)
	{
		@SetVariable("d5q03", 1);
		tv0 = f_d9_a0_o();
		f_bb_a1_v(5);
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (a0 == "completed") {
			f_df_a1_o("quest_d5_03_cutscene");
			f_90_a0_v();
		} else {
			if (a0 == "fail") {
				f_83_a0_v();
			} else {
				if (a0 == "place_prisoners") {
					object L0;
					object L1;
					f_fc_a2_v("uprava_prison@door1", false);
					@GetSceneByName(L0, "uprava_prison");
					tv1 = f_ea_a4_o(L0, "pt_guard", "pers_birdmask", "d5q03_birdmask.xml");
					L1 = f_ea_a4_o(L0, "pt_prisoner1", "pers_unosha", "d5q03_unosha.xml");
					tv0->add(L1);
					L1 = f_ea_a4_o(L0, "pt_prisoner2", "pers_worker", "d5q03_worker.xml");
					tv0->add(L1);
					L1 = f_ea_a4_o(L0, "pt_prisoner3", "pers_wasted_male", "d5q03_wastedmale.xml");
					tv0->add(L1);
					L1 = f_ea_a4_o(L0, "pt_prisoner4", "pers_alkash", "d5q03_alkash.xml");
					tv0->add(L1);
					L1 = f_ea_a4_o(L0, "pt_prisoner5", "pers_worker", "d5q03_worker.xml");
					tv0->add(L1);
					L1 = f_ea_a4_o(L0, "pt_prisoner6", "pers_unosha", "d5q03_unosha.xml");
					tv0->add(L1);
				}
			}
		}
	}

	void OnKeyDown(int a0)
	{
		@CameraSwitchToNormal();
	}

	void f_78_a0_v(void)
	{
		int L0;
		@GetVariable("d5q03", L0);
		if (L0 != 1000) {
			f_83_a0_v();
		}
	}

	void f_83_a0_v(void)
	{
		@SetVariable("d5q03", -1);
		f_fc_a2_v("uprava_prison@door1", true);
		f_ab_a0_v();
	}

	void f_90_a0_v(void)
	{
		int L0;
		@GetVariable("d5q03", L0);
		if (L0 != 1000 && L0 != -1) {
			@SetVariable("d5q03", 1000);
			f_fc_a2_v("uprava_prison@door1", true);
			f_ab_a0_v();
		}
	}

	void f_ab_a0_v(void)
	{
		disable OnTrigger;
		f_10d_a1_v(tv0);
		if (tv1) {
			@Trigger(tv1, "cleanup");
		}
		@RemoveActor(f_d3_a0_o());
	}

	void f_bb_a1_v(int a0)
	{
		float L0;
		@GetGameTime(L0);
		if (L0 >= a0 * 24) {
			f_ab_a0_v();
		} else {
			@SetTimeEvent(0, a0 * 24);
			@Hold();
		}
	}

	void OnGameTime(int a0, float a1)
	{
		f_78_a0_v();
	}
}

object f_d3_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_d9_a0_o(void)
{
	object L0;
	@CreateObjectVector(L0);
	return L0;
}

object f_df_a1_o(string a0)
{
	object L0;
	object L1;
	@GetMainOutdoorScene(L0);
	@AddBlankActor(L1, L0, a0, a0 + ".bin");
	return L1;
}

object f_ea_a4_o(object a0, string a1, string a2, string a3)
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

void f_fc_a2_v(string a0, bool a1)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		@Trace("Door " + a0 + " not found");
	} else {
		L0->SetProperty("locked", a1);
	}
}

void f_10d_a1_v(object a0)
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

