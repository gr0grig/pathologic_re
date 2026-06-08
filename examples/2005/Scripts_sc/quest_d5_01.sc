event OnTrigger 26;
event OnGameTime 9;
event OnKeyDown 24;

maintask t0
{
	var object tv0;
	var object tv1;
	var object tv2;
	var object tv3;
	var object tv4;
	var object tv5;

	void init(void)
	{
		object L0;
		@CreateObjectVector(tv1);
		@CreateObjectVector(tv5);
		@GetMainOutdoorScene(L0);
		tv5->add(f_1f8_a4_o(L0, "pt_d5q01_sobor_guard1", "pers_wasted_male", "d5q01_sobor_guard1.xml"));
		tv5->add(f_1f8_a4_o(L0, "pt_d5q01_sobor_guard2", "pers_wasted_male", "d5q01_sobor_guard2.xml"));
		tv5->add(f_1f8_a4_o(L0, "pt_d5q01_sobor_guard3", "pers_wasted_male", "d5q01_sobor_guard3.xml"));
		tv5->add(f_1f8_a4_o(L0, "pt_d5q01_theater_guard", "pers_whitemask", "d5q01_theater_guard.xml"));
		for (; ; ) {
			@Hold();
		}
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (a0 == "factory") {
			object L0;
			f_20a_a2_v("factory@door1", false);
			f_21b_a2_v("ifactory_grid_door", true);
			@GetSceneByName(L0, "factory");
			tv0 = f_1e6_a4_o(L0, "pt_d5q01_Burah", "NPC_Burah", "d5q01_Burah.xml");
			tv1->add(f_1e6_a4_o(L0, "pt_d5q01_PatrolBoss", "pers_patrool", "d5q01_PatrolBoss.xml"));
			tv1->add(f_1e6_a4_o(L0, "pt_d5q01_Patrol1", "pers_patrool", "d5q01_Patrol.xml"));
			tv1->add(f_1e6_a4_o(L0, "pt_d5q01_Patrol2", "pers_patrool", "d5q01_Patrol.xml"));
		} else {
			if (a0 == "d5q01_trigger_factory") {
				int L1;
				@GetVariable("d5q01PlayCutscene", L1);
				if (L1) {
					int L2;
					@GetVariable("d5q01", L2);
					if (f_29a_a1_b(L2)) {
						f_20a_a2_v("ifactory@door1", true);
						@SetVariable("d5q01PlayCutscene", 0);
						f_25d_a1_v(tv1);
						f_1db_a1_o("quest_d5_01_cutscene");
					}
				}
			} else {
				if (a0 == "cutscene_end") {
					object L3;
					@GetSceneByName(L3, "factory");
					tv1->add(f_1e6_a4_o(L3, "pt_d5q01_patrol_corpse1", "pers_patrool", "dummy_dead_b.xml"));
					tv1->add(f_1e6_a4_o(L3, "pt_d5q01_patrol_corpse2", "pers_patrool", "dummy_dead_b.xml"));
					tv1->add(f_1e6_a4_o(L3, "pt_d5q01_grabitel_corpse1", "pers_grabitel", "dummy_dead_b.xml"));
					tv1->add(f_1e6_a4_o(L3, "pt_d5q01_grabitel_corpse2", "pers_grabitel", "dummy_dead_b.xml"));
					tv1->add(f_1e6_a4_o(L3, "pt_d5q01_patrol_survived", "pers_patrool", "d5q01_PatrolCS.xml"));
				} else {
					if (a0 == "burah_free") {
						float L4;
						@GetGameTime(L4);
						if (L4 >= 116) {
							f_152_a0_v();
						} else {
							@SetTimeEvent(0, 116);
						}
						@Trigger(tv0, "cleanup");
						f_20a_a2_v("factory@door1", true);
					} else {
						if (a0 == "factory_fight") {
							f_20a_a2_v("ifactory@door1", true);
							f_287_a2_v(tv1, "attack");
							@PlaySound("door_close");
							f_230_a2_b(f_1a1_a0_o(), -0.25);
						} else {
							if (a0 == "dead") {
								int L5;
								int L6;
								f_230_a2_b(f_1a1_a0_o(), -0.25);
								tv1->size(L5);
								for (L6 = 0; L6 < L5; L6 = L6 + 1) {
									object L7;
									bool L8;
									tv1->get(L7, L6);
									L7->IsDead(L8);
									if (!L8) {
										break;
									}
								}
								if (L6 == L5) {
									f_20a_a2_v("ifactory@door1", false);
								}
							} else {
								if (a0 == "cleanup") {
									int L9;
									@GetVariable("d5q01", L9);
									if (L9 != 1000) {
										f_136_a0_v();
									} else {
										f_169_a0_v();
									}
									f_195_a0_v();
								} else {
									if (a0 == "fail") {
										f_136_a0_v();
									} else {
										if (a0 == "completed") {
											f_13e_a0_v();
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}

	void f_136_a0_v(void)
	{
		@SetVariable("d5q01", -1);
		f_169_a0_v();
	}

	void f_13e_a0_v(void)
	{
		@SetVariable("d5q01", 1000);
		f_169_a0_v();
	}

	void OnGameTime(int a0, float a1)
	{
		@ReleaseTimeEvent(0);
		f_152_a0_v();
	}

	void OnKeyDown(int a0)
	{
		@CameraSwitchToNormal();
	}

	void f_152_a0_v(void)
	{
		object L0;
		@GetMainOutdoorScene(L0);
		@AddActor(tv2, "d5q01_corpse_girl", L0, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0], "d5q01_girl_corpse.xml");
		@AddActor(tv3, "d5q01_corpse1", L0, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0], "d5q01_corpse.xml");
		@AddActor(tv4, "d5q01_corpse2", L0, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0], "d5q01_corpse.xml");
	}

	void f_169_a0_v(void)
	{
		if (tv0) {
			@Trigger(tv0, "cleanup");
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
		f_21b_a2_v("ifactory_grid_door", false);
		f_287_a2_v(tv1, "cleanup");
		tv1 = null;
		f_20a_a2_v("factory@door1", true);
		@SetVariable("d5q01PlayCutscene", 0);
		@ReleaseTimeEvent(0);
	}

	void f_195_a0_v(void)
	{
		disable OnTrigger;
		disable OnGameTime;
		f_272_a1_v(tv5);
		@RemoveActor(f_1ca_a0_o());
	}
}

object f_1a1_a0_o(void)
{
	object L0;
	@FindActor(L0, "player");
	return L0;
}

bool f_1a8_a2_b(object a0, string a1)
{
	bool L0;
	if (!a0->FuncExist("HasProperty", 2)) {
		return false;
	}
	a0->HasProperty(a1, L0);
	return L0;
}

bool f_1b4_a5_b(object a0, string a1, float a2, float a3, float a4)
{
	float L0;
	if (!f_1a8_a2_b(a0, a1)) {
		return false;
	}
	a0->GetProperty(a1, L0);
	a0->SetProperty(a1, f_1d0_a3_f(L0 + a2, a3, a4));
	return true;
}

object f_1ca_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

float f_1d0_a3_f(float a0, float a1, float a2)
{
	if (a0 < a1) {
		return a1;
	}
	if (a0 > a2) {
		return a2;
	}
	return a0;
}

object f_1db_a1_o(string a0)
{
	object L0;
	object L1;
	@GetMainOutdoorScene(L0);
	@AddBlankActor(L1, L0, a0, a0 + ".bin");
	return L1;
}

object f_1e6_a4_o(object a0, string a1, string a2, string a3)
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

object f_1f8_a4_o(object a0, string a1, string a2, string a3)
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

void f_20a_a2_v(string a0, bool a1)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		@Trace("Door " + a0 + " not found");
	} else {
		L0->SetProperty("locked", a1);
	}
}

void f_21b_a2_v(string a0, bool a1)
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

bool f_230_a2_b(object a0, float a1)
{
	if (!a0) {
		return false;
	}
	if (a1 > 0) {
		@SendWorldWndMessage(8);
	} else {
		if (a1 < 0) {
			@SendWorldWndMessage(9);
		} else {
			return false;
		}
	}
	f_253_a1_v(a1);
	f_1b4_a5_b(a0, "reputation", a1, 0, 1);
	return true;
}

void f_253_a1_v(float a0)
{
	object L0;
	@CreateFloatVector(L0);
	L0->add(a0);
	@SendWorldWndMessage(16, L0);
}

void f_25d_a1_v(object a0)
{
	if (a0) {
		int L0;
		int L1;
		a0->size(L0);
		for (L1 = 0; L1 < L0; L1 = L1 + 1) {
			object L2;
			a0->get(L2, L1);
			if (L2) {
				@RemoveActor(L2);
			}
		}
		a0->clear();
	}
}

void f_272_a1_v(object a0)
{
	if (a0) {
		int L0;
		int L1;
		a0->size(L0);
		for (L1 = 0; L1 < L0; L1 = L1 + 1) {
			object L2;
			a0->get(L2, L1);
			if (L2) {
				L2->Remove();
			}
		}
		a0->clear();
	}
}

void f_287_a2_v(object a0, string a1)
{
	if (a0) {
		int L0;
		int L1;
		a0->size(L0);
		for (L1 = 0; L1 < L0; L1 = L1 + 1) {
			object L2;
			a0->get(L2, L1);
			if (L2) {
				@Trigger(L2, a1);
			}
		}
	}
}

bool f_29a_a1_b(int a0)
{
	return a0 >= 1 && a0 < 1000;
}

