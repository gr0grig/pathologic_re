event OnTrigger 26;
event OnGameTime 9;
event OnKeyDown 24;

maintask t0
{
	var object tv0;
	var object tv1;
	var object tv2;

	void init(void)
	{
		tv1 = f_1af_a0_o();
		for (; ; ) {
			@Hold();
		}
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (a0 == "factory") {
			object L0;
			f_1c7_a2_v("factory@door1", false);
			f_1d7_a2_v("ifactory_grid_door", true);
			@GetSceneByName(L0, "factory");
			tv0 = f_1b5_a4_o(L0, "pt_d5q01_Burah", "NPC_Burah", "d5q01_Burah.xml");
			tv1->add(f_1b5_a4_o(L0, "pt_d5q01_PatrolBoss", "pers_patrool", "d5q01_PatrolBoss.xml"));
			tv1->add(f_1b5_a4_o(L0, "pt_d5q01_Patrol1", "pers_patrool", "d5q01_Patrol.xml"));
			tv1->add(f_1b5_a4_o(L0, "pt_d5q01_Patrol2", "pers_patrool", "d5q01_Patrol.xml"));
		} else {
			if (a0 == "d5q01_trigger_factory") {
				int L1;
				@GetVariable("d5q01PlayCutscene", L1);
				if (L1) {
					int L2;
					@GetVariable("d5q01", L2);
					if (f_20d_a1_b(L2)) {
						object L3;
						object L4;
						object L5;
						object L6;
						object L7;
						object L8;
						object L9;
						f_1c7_a2_v("ifactory@door1", true);
						@GetSceneByName(L3, "factory");
						@SetVariable("d5q01PlayCutscene", 0);
						f_1e9_a1_v(tv1);
						@AddScriptedActor(L4, "cs_factory_grabitel1", "cs_play_all.bin", L3, [0.0, 0.0, 0.0]);
						@AddScriptedActor(L5, "cs_factory_grabitel2", "cs_play_all.bin", L3, [0.0, 0.0, 0.0]);
						@AddScriptedActor(L6, "cs_factory_patrol1", "cs_play_all.bin", L3, [0.0, 0.0, 0.0]);
						@AddScriptedActor(L7, "cs_factory_patrol2", "cs_play_all.bin", L3, [0.0, 0.0, 0.0]);
						@AddScriptedActor(L8, "cs_factory_patrol3", "cs_play_all.bin", L3, [0.0, 0.0, 0.0]);
						L6->ForceGeometryLoad();
						L7->ForceGeometryLoad();
						L8->ForceGeometryLoad();
						@FindActor(L9, "player");
						f_184_a1_v(L9);
						@RegisterKeyCallback("space");
						@CameraPlay("cs_factory1.mot");
						@CameraWaitForPlayFinish();
						@UnregisterKeyCallback("space");
						f_19b_a1_v(L9);
						@RemoveActor(L4);
						@RemoveActor(L5);
						@RemoveActor(L6);
						@RemoveActor(L7);
						@RemoveActor(L8);
						tv1->add(f_1b5_a4_o(L3, "pt_d5q01_patrol_corpse1", "pers_patrool", "dummy_dead_b.xml"));
						tv1->add(f_1b5_a4_o(L3, "pt_d5q01_patrol_corpse2", "pers_patrool", "dummy_dead_b.xml"));
						tv1->add(f_1b5_a4_o(L3, "pt_d5q01_grabitel_corpse1", "pers_grabitel", "dummy_dead_b.xml"));
						tv1->add(f_1b5_a4_o(L3, "pt_d5q01_grabitel_corpse2", "pers_grabitel", "dummy_dead_b.xml"));
						tv1->add(f_1b5_a4_o(L3, "pt_d5q01_patrol_survived", "pers_patrool", "d5q01_PatrolCS.xml"));
						@CameraSwitchToNormal();
					}
				}
			} else {
				if (a0 == "burah_free") {
					float L10;
					@GetGameTime(L10);
					if (L10 >= 117) {
						f_145_a0_v();
					} else {
						@SetTimeEvent(0, 117);
					}
					@Trigger(tv0, "cleanup");
					f_1c7_a2_v("factory@door1", true);
				} else {
					if (a0 == "factory_fight") {
						f_1c7_a2_v("ifactory@door1", true);
						f_1fc_a2_v(tv1, "attack");
						@PlaySound("door_close");
					} else {
						if (a0 == "dead") {
							int L11;
							int L12;
							tv1->size(L11);
							for (L12 = 0; L12 < L11; L12++) {
								object L13;
								bool L14;
								tv1->get(L13, L12);
								L13->IsDead(L14);
								if (!L14) {
									break;
								}
							}
							if (L12 == L11) {
								f_1c7_a2_v("ifactory@door1", false);
							}
						} else {
							if (a0 == "fail") {
								f_129_a0_v();
							} else {
								if (a0 == "completed") {
									f_131_a0_v();
								}
							}
						}
					}
				}
			}
		}
	}

	void f_129_a0_v(void)
	{
		@SetVariable("d5q01", -1);
		f_15f_a0_v();
	}

	void f_131_a0_v(void)
	{
		@SetVariable("d5q01", 1000);
		f_15f_a0_v();
	}

	void OnGameTime(int a0, float a1)
	{
		@ReleaseTimeEvent(0);
		f_145_a0_v();
	}

	void OnKeyDown(int a0)
	{
		@CameraSwitchToNormal();
	}

	void f_145_a0_v(void)
	{
		object L0;
		int L1;
		@GetMainOutdoorScene(L0);
		@irand(L1, 2);
		@Trace("Girl location: " + (L1 + 1));
		@AddActor(tv2, "d5q01_girl_corpse" + (L1 + 1), L0, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0], "d5q01_girl_corpse.xml");
		@Trigger(tv2, "cleanup");
	}

	void f_15f_a0_v(void)
	{
		disable OnTrigger;
		disable OnGameTime;
		if (tv0) {
			@Trigger(tv0, "cleanup");
		}
		if (tv2) {
			@Trigger(tv2, "cleanup");
		}
		f_1d7_a2_v("ifactory_grid_door", false);
		f_1fc_a2_v(tv1, "cleanup");
		tv1->clear();
		f_1c7_a2_v("factory@door1", true);
		@SetVariable("d5q01PlayCutscene", 0);
		@ReleaseTimeEvent(0);
	}
}

void f_184_a1_v(object a0)
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

void f_19b_a1_v(object a0)
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

object f_1af_a0_o(void)
{
	object L0;
	@CreateObjectVector(L0);
	return L0;
}

object f_1b5_a4_o(object a0, string a1, string a2, string a3)
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

void f_1c7_a2_v(string a0, bool a1)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		@Trace("Door " + a0 + " not found");
	}
	L0->SetProperty("locked", a1);
}

void f_1d7_a2_v(string a0, bool a1)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		@Trace("Door " + a0 + " not found");
	}
	L0->Close();
	L0->SetProperty("locked", a1);
}

void f_1e9_a1_v(object a0)
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

void f_1fc_a2_v(object a0, string a1)
{
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

bool f_20d_a1_b(int a0)
{
	return a0 >= 1 && a0 < 1000;
}

