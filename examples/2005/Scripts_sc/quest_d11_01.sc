event OnTrigger 26;

maintask t0
{
	var object tv0;
	var object tv1;
	var object tv2;
	var object tv3;
	var object tv4;
	var object tv5;
	var object tv6;
	var object tv7;
	var object tv8;
	var object tv9;
	var object tv10;
	var object tv11;
	var object tv12;
	var object tv13;
	var object tv14;
	var object tv15;
	var bool tv16;
	var bool tv17;

	void f_0_a0_v(void)
	{
		object L0;
		@GetMainOutdoorScene(L0);
		@AddActor(tv3, "d3q01_graveyard_fire", L0, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0], "d3q01_graveyard_fire.xml");
	}

	void init(void)
	{
		tv1 = f_1d2_a0_o();
		tv6 = f_1d2_a0_o();
		tv7 = f_1cc_a0_o();
		tv8 = f_1d2_a0_o();
		tv9 = f_1cc_a0_o();
		tv10 = f_1d2_a0_o();
		tv11 = f_1cc_a0_o();
		tv12 = f_1d2_a0_o();
		tv13 = f_1cc_a0_o();
		tv14 = f_1d2_a0_o();
		tv15 = f_1cc_a0_o();
		f_21a_a2_v("cot_maria@door1", true);
		for (; ; ) {
			@Hold();
		}
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (a0 == "init_soldiers") {
			object L0;
			int L1;
			@GetMainOutdoorScene(L0);
			for (L1 = 1; L1 <= 10; L1++) {
				tv1->add(f_1f5_a4_o(L0, "pt_d11q01_soldier" + L1, "pers_soldat", "d11q01_soldier.xml"));
			}
			tv2 = f_1f5_a4_o(L0, "pt_d11q01_msoldier", "pers_soldat_hand", "d11q01_msoldier.xml");
		} else {
			if (a0 == "init_girl") {
				object L2;
				@GetSceneByName(L2, "shouse1_kabak");
				tv0 = f_1e3_a4_o(L2, "pt_d11q01_girl", "pers_nudegirl", "d11q01_girl.xml");
			} else {
				if (a0 == "remove_andrei") {
					object L3;
					@GetSceneByName(L3, "shouse1_kabak");
					@Trigger(L3, "noandrei");
				} else {
					if (a0 == "restore_andrei") {
						object L4;
						@GetSceneByName(L4, "shouse1_kabak");
						@Trigger(L4, "andrei");
						if (tv0) {
							@Trigger(tv0, "cleanup");
						}
					} else {
						if (a0 == "soldier_attack") {
							int L5;
							int L6;
							tv1->size(L5);
							for (L6 = 0; L6 < L5; L6++) {
								object L7;
								tv1->get(L7, L6);
								if (L7) {
									object L8;
									L7->GetActor(L8);
									if (!L8) {
										L7->Remove();
									} else {
										@Trigger(L8, "attack");
									}
								}
							}
							if (tv2) {
								object L9;
								tv2->GetActor(L9);
								if (!L9) {
									tv2->Remove();
								} else {
									@Trigger(L9, "attack");
								}
							}
						} else {
							if (a0 == "teleport") {
								object L10;
								@FindActor(L10, "player");
								tv16 = true;
								if (L10) {
									int L11;
									tv6 = f_1ad_a3_o(L10, 0, tv7);
									tv8 = f_1ad_a3_o(L10, 1, tv9);
									tv10 = f_1ad_a3_o(L10, 2, tv11);
									tv12 = f_1ad_a3_o(L10, 3, tv13);
									tv14 = f_1ad_a3_o(L10, 4, tv15);
									for (L11 = 0; L11 < 5; L11++) {
										L10->RemoveAllItems(L11);
									}
									L10->SelectWeapon();
								}
								f_0_a0_v();
								f_1d8_a1_o("quest_d11_01_teleport");
								object L12;
								@GetMainOutdoorScene(L12);
								tv4 = f_207_a4_o(L12, "pt_d11q01_guard1", "pers_soldat", "d11q01_guard1.xml");
								tv5 = f_207_a4_o(L12, "pt_d11q01_guard2", "pers_soldat", "d11q01_guard2.xml");
								tv2->Remove();
								tv2 = f_1f5_a4_o(L12, "pt_d11q01_msoldier", "pers_soldat", "d11q01_soldier.xml");
							} else {
								if (a0 == "soldier_death") {
									if (!tv16) {
										return;
									}
									if (tv17) {
										return;
									}
									if (tv2) {
										object L13;
										bool L14;
										tv2->GetActor(L13);
										L13->IsDead(L14);
										if (L14) {
											bool L15;
											f_251_a3_v(L13, tv6, tv7);
											f_251_a3_v(L13, tv8, tv9);
											f_251_a3_v(L13, tv10, tv11);
											f_251_a3_v(L13, tv12, tv13);
											f_251_a3_v(L13, tv14, tv15);
											L13->AddItem(L15, f_24c_a1_i("burah_serum"), 0, 1);
											tv17 = true;
										}
									}
								} else {
									if (a0 == "cleanup") {
										int L16;
										@GetVariable("d11q01", L16);
										if (L16 != 1000) {
											f_170_a0_v();
										} else {
											f_186_a0_v();
										}
										f_199_a0_v();
									} else {
										if (a0 == "fail") {
											f_170_a0_v();
										} else {
											if (a0 == "completed") {
												f_17e_a0_v();
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

	void f_170_a0_v(void)
	{
		f_22b_a3_b("volonteers_danko", "disease", "andrei");
		@SetVariable("d11q01", -1);
		f_186_a0_v();
	}

	void f_17e_a0_v(void)
	{
		@SetVariable("d11q01", 1000);
		f_186_a0_v();
	}

	void f_186_a0_v(void)
	{
		if (tv0) {
			@Trigger(tv0, "cleanup");
		}
		if (tv3) {
			@Trigger(tv3, "cleanup");
		}
		if (tv4) {
			tv4->Remove();
		}
		if (tv5) {
			tv5->Remove();
		}
	}

	void f_199_a0_v(void)
	{
		disable OnTrigger;
		f_237_a1_v(tv1);
		if (tv2) {
			tv2->Remove();
		}
		f_21a_a2_v("cot_maria@door1", false);
		@RemoveActor(f_1c6_a0_o());
	}
}

object f_1ad_a3_o(object a0, int a1, object a2)
{
	object L0;
	int L1;
	int L2;
	L0 = f_1d2_a0_o();
	a0->GetItemCount(L1, a1);
	for (L2 = 0; L2 < L1; L2++) {
		object L3;
		int L4;
		a0->GetItem(L3, L2, a1);
		L0->add(L3);
		a0->GetItemAmount(L4, L2, a1);
		a2->add(L4);
	}
	return L0;
}

object f_1c6_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_1cc_a0_o(void)
{
	object L0;
	@CreateIntVector(L0);
	return L0;
}

object f_1d2_a0_o(void)
{
	object L0;
	@CreateObjectVector(L0);
	return L0;
}

object f_1d8_a1_o(string a0)
{
	object L0;
	object L1;
	@GetMainOutdoorScene(L0);
	@AddBlankActor(L1, L0, a0, a0 + ".bin");
	return L1;
}

object f_1e3_a4_o(object a0, string a1, string a2, string a3)
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

object f_1f5_a4_o(object a0, string a1, string a2, string a3)
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

object f_207_a4_o(object a0, string a1, string a2, string a3)
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

void f_21a_a2_v(string a0, bool a1)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		@Trace("Door " + a0 + " not found");
	} else {
		L0->SetProperty("locked", a1);
	}
}

bool f_22b_a3_b(string a0, string a1, string a2)
{
	object L0;
	@FindActor(L0, a0);
	if (L0 == null) {
		return false;
	}
	@Trigger(L0, a1, a2);
	return true;
}

void f_237_a1_v(object a0)
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

int f_24c_a1_i(string a0)
{
	int L0;
	@GetInvItemByName(L0, a0);
	return L0;
}

void f_251_a3_v(object a0, object a1, object a2)
{
	int L0;
	int L1;
	a1->size(L0);
	for (L1 = 0; L1 < L0; L1++) {
		object L2;
		int L3;
		bool L4;
		a1->get(L2, L1);
		a2->get(L3, L1);
		a0->AddItem(L4, L2, 0, L3);
	}
}

