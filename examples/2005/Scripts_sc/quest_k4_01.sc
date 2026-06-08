event OnTrigger 26;

maintask t0
{
	var bool tv0;
	var object tv1;
	var object tv2;
	var object tv3;
	var object tv4;

	void init(void)
	{
		tv1 = f_107_a0_o();
		f_14e_a2_v("warehouse_gangster@door1", true);
		f_14e_a2_v("cot_alexandr@door1", false);
		for (; ; ) {
			@Hold();
		}
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (a0 == "init_volnica") {
			object L0;
			int L1;
			@GetMainOutdoorScene(L0);
			for (L1 = 1; ; L1 = L1 + 1) {
				bool L2;
				Vector L3;
				Vector L4;
				object L5;
				L0->GetLocator("pt_k4q01_grabitel" + L1, L2, L3, L4);
				if (!L2) {
					break;
				}
				L0->AddStationaryActor(L5, L3, L4, "pers_grabitel", "k4q01_grabitel.xml");
				tv1->add(L5);
			}
			tv2 = f_13c_a4_o(L0, "pt_k4q01_grabitel", "pers_grabitel", "k4q01_grabitel_e.xml");
		} else {
			if (a0 == "grabitel_entrance_dead") {
				object L6;
				f_14e_a2_v("warehouse_gangster@door1", false);
				if (tv2) {
					tv2->Remove();
				}
				@GetSceneByName(L6, "warehouse_gangster");
				tv4 = f_118_a4_o(L6, "pt_britva", "pers_grabitel", "k4q01_britva.xml");
				@PlaySound("door_open");
			} else {
				if (a0 == "cutscene") {
					object L7;
					if (tv4) {
						@RemoveActor(tv4);
					}
					@GetSceneByName(L7, "warehouse_gangster");
					@PlaySound("door_close");
					f_14e_a2_v("iwarehouse_gangster@door1", true);
					tv3 = f_12a_a4_o(L7, "pt_k4q01_meshok", "scripted_container", "k4q01_meshok.xml");
					f_10d_a1_o("quest_k4_01_cutscene");
				} else {
					if (a0 == "cutscene_end") {
						object L8;
						int L9;
						@GetSceneByName(L8, "warehouse_gangster");
						f_118_a4_o(L8, "pt_britva_attack", "pers_grabitel", "k4q01_britva_attack.xml");
						for (L9 = 1; ; L9 = L9 + 1) {
							bool L10;
							Vector L11;
							Vector L12;
							object L13;
							L8->GetLocator("pt_k4q01_rat" + L9, L10, L11, L12);
							if (!L10) {
								break;
							}
							@AddActor(L13, "pers_rat", L8, L11, L12, "rat_indoor.xml");
						}
						tv0 = true;
					} else {
						if (a0 == "meshok_taken") {
							f_14e_a2_v("iwarehouse_gangster@door1", false);
							f_174_a0_v();
							@PlaySound("door_open");
						} else {
							if (a0 == "warehouse_gangster_unload") {
								if (tv0) {
									f_14e_a2_v("warehouse_gangster@door1", true);
									if (tv4) {
										@Trigger(tv4, "cleanup");
									}
								}
							} else {
								if (a0 == "fail") {
									f_d0_a0_v();
								} else {
									if (a0 == "completed") {
										f_d8_a0_v();
									} else {
										if (a0 == "cleanup") {
											int L14;
											@GetVariable("k4q01", L14);
											if (L14 != 1000) {
												f_d0_a0_v();
											} else {
												f_e0_a0_v();
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
	}

	void f_d0_a0_v(void)
	{
		@SetVariable("k4q01", -1);
		f_e0_a0_v();
	}

	void f_d8_a0_v(void)
	{
		@SetVariable("k4q01", 1000);
		f_e0_a0_v();
	}

	void f_e0_a0_v(void)
	{
		disable OnTrigger;
		if (tv1) {
			f_15f_a1_v(tv1);
			tv1 = null;
		}
		if (tv2) {
			tv2->Remove();
		}
		if (tv3) {
			@Trigger(tv3, "cleanup");
		}
		if (tv4) {
			@Trigger(tv4, "cleanup");
		}
		f_14e_a2_v("iwarehouse_gangster@door1", false);
		@RemoveActor(f_101_a0_o());
	}
}

object f_101_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_107_a0_o(void)
{
	object L0;
	@CreateObjectVector(L0);
	return L0;
}

object f_10d_a1_o(string a0)
{
	object L0;
	object L1;
	@GetMainOutdoorScene(L0);
	@AddBlankActor(L1, L0, a0, a0 + ".bin");
	return L1;
}

object f_118_a4_o(object a0, string a1, string a2, string a3)
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

object f_12a_a4_o(object a0, string a1, string a2, string a3)
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

object f_13c_a4_o(object a0, string a1, string a2, string a3)
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

void f_14e_a2_v(string a0, bool a1)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		@Trace("Door " + a0 + " not found");
	} else {
		L0->SetProperty("locked", a1);
	}
}

void f_15f_a1_v(object a0)
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

void f_174_a0_v(void)
{
	object L0;
	@CreateDiaryEntry(L0, 373, 1, 525730);
	f_18e_a2_b(L0, 368);
}

object f_181_a0_o(void)
{
	object L0;
	@GetDiaryRoot(L0);
	if (!L0) {
		@Trace("Can't retrieve diary root");
		return false;
	}
	return L0;
}

bool f_18e_a2_b(object a0, int a1)
{
	object L0;
	object L1;
	int L2;
	L0 = f_181_a0_o();
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

