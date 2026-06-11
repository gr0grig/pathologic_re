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
		tv0 = f_14f_a0_o();
		f_106_a1_v(5);
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (a0 == "completed") {
			object L0;
			object L1;
			object L2;
			object L3;
			object L4;
			object L5;
			object L6;
			@GetSceneByName(L0, "uprava_prison");
			@AddScriptedActor(L1, "cs_uprava_prisoner1", "cs_play_all.bin", L0, [0.0, 0.0, 0.0]);
			@AddScriptedActor(L2, "cs_uprava_prisoner2", "cs_play_all.bin", L0, [0.0, 0.0, 0.0]);
			@AddScriptedActor(L3, "cs_uprava_prisoner3", "cs_play_all.bin", L0, [0.0, 0.0, 0.0]);
			@AddScriptedActor(L4, "cs_uprava_prisoner4", "cs_play_all.bin", L0, [0.0, 0.0, 0.0]);
			@AddScriptedActor(L5, "cs_uprava_prisoner5", "cs_play_all.bin", L0, [0.0, 0.0, 0.0]);
			L1->ForceGeometryLoad();
			L2->ForceGeometryLoad();
			L3->ForceGeometryLoad();
			L4->ForceGeometryLoad();
			L5->ForceGeometryLoad();
			@FindActor(L6, "player");
			f_11e_a1_v(L6);
			@RegisterKeyCallback("space");
			@CameraPlay("cs_uprava_prison1.mot");
			@CameraWaitForPlayFinish();
			@UnregisterKeyCallback("space");
			f_135_a1_v(L6);
			@RemoveActor(L1);
			@RemoveActor(L2);
			@RemoveActor(L3);
			@RemoveActor(L4);
			@RemoveActor(L5);
			@CameraSwitchToNormal();
			f_db_a0_v();
		} else {
			if (a0 == "fail") {
				f_ce_a0_v();
			} else {
				if (a0 == "place_prisoners") {
					object L7;
					object L8;
					f_167_a2_v("uprava_prison@door1", false);
					@GetSceneByName(L7, "uprava_prison");
					tv1 = f_155_a4_o(L7, "pt_guard", "pers_birdmask", "d5q03_birdmask.xml");
					L8 = f_155_a4_o(L7, "pt_prisoner1", "pers_unosha", "d5q03_unosha.xml");
					tv0->add(L8);
					L8 = f_155_a4_o(L7, "pt_prisoner2", "pers_worker", "d5q03_worker.xml");
					tv0->add(L8);
					L8 = f_155_a4_o(L7, "pt_prisoner3", "pers_wasted_male", "d5q03_wastedmale.xml");
					tv0->add(L8);
					L8 = f_155_a4_o(L7, "pt_prisoner4", "pers_alkash", "d5q03_alkash.xml");
					tv0->add(L8);
					L8 = f_155_a4_o(L7, "pt_prisoner5", "pers_worker", "d5q03_worker.xml");
					tv0->add(L8);
					L8 = f_155_a4_o(L7, "pt_prisoner6", "pers_unosha", "d5q03_unosha.xml");
					tv0->add(L8);
				}
			}
		}
	}

	void OnKeyDown(int a0)
	{
		@CameraSwitchToNormal();
	}

	void f_c3_a0_v(void)
	{
		int L0;
		@GetVariable("d5q03", L0);
		if (L0 != 1000) {
			f_ce_a0_v();
		}
	}

	void f_ce_a0_v(void)
	{
		@SetVariable("d5q03", -1);
		f_167_a2_v("uprava_prison@door1", true);
		f_f6_a0_v();
	}

	void f_db_a0_v(void)
	{
		int L0;
		@GetVariable("d5q03", L0);
		if (L0 != 1000 && L0 != -1) {
			@SetVariable("d5q03", 1000);
			f_167_a2_v("uprava_prison@door1", true);
			f_f6_a0_v();
		}
	}

	void f_f6_a0_v(void)
	{
		disable OnTrigger;
		f_177_a1_v(tv0);
		if (tv1) {
			@Trigger(tv1, "cleanup");
		}
		@RemoveActor(f_149_a0_o());
	}

	void f_106_a1_v(int a0)
	{
		float L0;
		@GetGameTime(L0);
		if (L0 >= a0 * 24) {
			f_f6_a0_v();
		} else {
			@SetTimeEvent(0, a0 * 24);
			@Hold();
		}
	}

	void OnGameTime(int a0, float a1)
	{
		f_c3_a0_v();
	}
}

void f_11e_a1_v(object a0)
{
	bool L0;
	if (!a0) {
		return;
	}
	a0->HasProperty("noaccess", L0);
	if (L0) {
		int L1;
		a0->GetProperty("noaccess", L1);
		a0->SetProperty("noaccess", L1 + 1);
	} else {
		a0->SetProperty("noaccess", 1);
	}
}

void f_135_a1_v(object a0)
{
	int L0;
	if (!a0) {
		return;
	}
	a0->GetProperty("noaccess", L0);
	if (L0 > 1) {
		a0->SetProperty("noaccess", L0 - 1);
	} else {
		a0->RemoveProperty("noaccess");
	}
}

object f_149_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_14f_a0_o(void)
{
	object L0;
	@CreateObjectVector(L0);
	return L0;
}

object f_155_a4_o(object a0, string a1, string a2, string a3)
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

void f_167_a2_v(string a0, bool a1)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		@Trace("Door " + a0 + " not found");
	}
	L0->SetProperty("locked", a1);
}

void f_177_a1_v(object a0)
{
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

