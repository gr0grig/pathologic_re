event OnTrigger 26;
event OnGameTime 9;

maintask t0
{
	var bool tv0;
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

	void init(void)
	{
		tv0 = false;
		for (; ; ) {
			@Hold();
		}
	}

	void f_5_a0_v(void)
	{
		object L0;
		@GetSceneByName(L0, "cot_eva");
		@Trigger(L0, "noeva");
	}

	void OnTrigger(string a0)
	{
		@Trace(a0);
		if (a0 == "lock_danko") {
			f_256_a2_v("icot_eva_door", true);
		} else {
			if (a0 == "teleport") {
				object L0;
				object L1;
				object L2;
				f_5_a0_v();
				@GetScene(L0);
				@GetSceneByName(L1, "cot_eva");
				f_256_a2_v("icot_eva_door", false);
				f_245_a2_v("icot_eva@door1", true);
				@PlaySound("door_close");
				if (tv1) {
					@Trigger(tv1, "cleanup");
				}
				if (L0 != L1) {
					f_28a_a3_v(f_207_a0_o(), "cot_eva", "pt_k6q01_klara");
					@sync();
				}
				@FindActor(L2, "player");
				if (L2 && tv0) {
					f_2a2_a3_v(L2, tv2, tv3);
					f_2a2_a3_v(L2, tv4, tv5);
					f_2a2_a3_v(L2, tv8, tv9);
					f_2a2_a3_v(L2, tv10, tv11);
				}
			} else {
				if (a0 == "cot_eva_load") {
					int L3;
					int L4;
					@GetVariable("k6q01", L3);
					@GetVariable("k6q01DoorWasLocked", L4);
					if (L3 == 2 && !L4) {
						f_245_a2_v("icot_eva@door1", true);
						@SetVariable("k6q01DoorWasLocked", 1);
						@PlaySound("door_close");
					}
				} else {
					if (a0 == "unlock_eva") {
						object L5;
						f_245_a2_v("icot_eva@door1", false);
						@PlaySound("door_open");
						@CreateIntVector(tv3);
						@CreateIntVector(tv5);
						@CreateIntVector(tv7);
						@CreateIntVector(tv9);
						@CreateIntVector(tv11);
						@FindActor(L5, "player");
						if (L5) {
							tv2 = f_20e_a3_o(L5, 0, tv3);
							tv4 = f_20e_a3_o(L5, 1, tv5);
							tv8 = f_20e_a3_o(L5, 3, tv9);
							tv10 = f_20e_a3_o(L5, 4, tv11);
							L5->ClearSubContainer(0);
							L5->ClearSubContainer(1);
							L5->ClearSubContainer(3);
							L5->ClearSubContainer(4);
							tv0 = true;
						}
					} else {
						if (a0 == "place_danko") {
							float L6;
							object L7;
							@GetGameTime(L6);
							if (L6 < 134) {
								@GetSceneByName(L7, "cot_anna");
								tv1 = f_233_a4_o(L7, "pt_k6q01_danko", "NPC_Bakalavr", "k6q01_danko.xml");
								@SetTimeEvent(1, 134);
								@SetTimeEvent(2, 136);
								@SetTimeEvent(3, 138);
								@SetVariable("k6q01DankoPos", 1);
							} else {
								if (L6 < 136) {
									@GetSceneByName(L7, "cot_lara");
									tv1 = f_233_a4_o(L7, "pt_k6q01_danko", "NPC_Bakalavr", "k6q01_danko.xml");
									@SetTimeEvent(2, 136);
									@SetTimeEvent(3, 138);
									@SetVariable("k6q01DankoPos", 2);
								} else {
									if (L6 < 138) {
										@GetSceneByName(L7, "dt_house_1_04");
										tv1 = f_233_a4_o(L7, "pt_k6q01_danko", "NPC_Bakalavr", "k6q01_danko.xml");
										@SetTimeEvent(3, 138);
										@SetVariable("k6q01DankoPos", 3);
									} else {
										f_256_a2_v("icot_eva_door", false);
										f_5_a0_v();
										@SetVariable("k6q01DankoPos", 4);
									}
								}
							}
						} else {
							if (a0 == "fail") {
								f_1d7_a0_v();
							} else {
								if (a0 == "completed") {
									f_1df_a0_v();
								} else {
									if (a0 == "cleanup") {
										int L8;
										@GetVariable("k6q01", L8);
										if (L8 != 1000) {
											f_1d7_a0_v();
										} else {
											f_1e4_a0_v();
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

	void OnGameTime(int a0, float a1)
	{
		int L0;
		@GetVariable("k6q01DankoPos", L0);
		if (a0 == 1) {
			object L1;
			object L2;
			if (L0 != 1) {
				return;
			}
			@GetScene(L1);
			@GetSceneByName(L2, "cot_lara");
			if (tv1) {
				@Trigger(tv1, "cleanup");
			}
			if (L1 != L2) {
				L1 = L2;
				@Trace("0: placing danko to lara");
				@SetVariable("k6q01DankoPos", 2);
			} else {
				@GetSceneByName(L1, "dt_house_1_04");
				@Trace("0: placing danko to ospina");
				@SetVariable("k6q01DankoPos", 3);
			}
			tv1 = f_233_a4_o(L1, "pt_k6q01_danko", "NPC_Bakalavr", "k6q01_danko.xml");
		} else {
			if (a0 == 2) {
				object L3;
				object L4;
				if (L0 != 2) {
					return;
				}
				@GetScene(L3);
				@GetSceneByName(L4, "dt_house_1_04");
				if (tv1) {
					@Trigger(tv1, "cleanup");
				}
				if (L3 != L4) {
					tv1 = f_233_a4_o(L4, "pt_k6q01_danko", "NPC_Bakalavr", "k6q01_danko.xml");
					@Trace("1: placing danko to ospina");
					@SetVariable("k6q01DankoPos", 3);
				} else {
					object L5;
					f_256_a2_v("icot_eva_door", false);
					f_5_a0_v();
					@SetVariable("k6q01DankoPos", 4);
					@Trace("1: placing danko to eva");
				}
			} else {
				if (a0 == 3) {
					object L6;
					object L7;
					if (L0 != 3) {
						return;
					}
					@GetScene(L6);
					@GetSceneByName(L7, "cot_eva");
					if (L6 != L7) {
						f_256_a2_v("icot_eva_door", false);
						@SetVariable("k6q01DankoPos", 4);
					}
				}
			}
		}
	}

	void f_1d7_a0_v(void)
	{
		@SetVariable("k6q01", -1);
		f_1e4_a0_v();
	}

	void f_1df_a0_v(void)
	{
		@SetVariable("k6q01", 1000);
	}

	void f_1e4_a0_v(void)
	{
		int L0;
		disable OnTrigger;
		f_256_a2_v("icot_eva_door", false);
		if (tv1) {
			@Trigger(tv1, "cleanup");
		}
		@GetVariable("k6q01", L0);
		f_245_a2_v("icot_eva@door1", false);
		if (L0 == 1000) {
			@PlaySound("door_open");
		}
		f_5_a0_v();
		@RemoveActor(f_227_a0_o());
	}
}

object f_207_a0_o(void)
{
	object L0;
	@FindActor(L0, "player");
	return L0;
}

object f_20e_a3_o(object a0, int a1, object a2)
{
	object L0;
	int L1;
	int L2;
	L0 = f_22d_a0_o();
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

object f_227_a0_o(void)
{
	object L0;
	@self(L0);
	return L0;
}

object f_22d_a0_o(void)
{
	object L0;
	@CreateObjectVector(L0);
	return L0;
}

object f_233_a4_o(object a0, string a1, string a2, string a3)
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

void f_245_a2_v(string a0, bool a1)
{
	object L0;
	@FindActor(L0, a0);
	if (!L0) {
		@Trace("Door " + a0 + " not found");
	} else {
		L0->SetProperty("locked", a1);
	}
}

void f_256_a2_v(string a0, bool a1)
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

void f_26b_a2_v(int a0, int a1)
{
	object L0;
	@CreateIntVector(L0);
	L0->add(a0);
	L0->add(a1);
	@SendWorldWndMessage(3, L0);
}

void f_277_a3_v(object a0, object a1, int a2)
{
	int L0;
	int L1;
	bool L2;
	a1->GetItemID(L0);
	@GetInvItemProperty(L1, L0, "Category");
	a0->AddItem(L2, a1, L1, a2);
	if (!L2) {
		a0->DropItems(a1, a2);
	} else {
		f_26b_a2_v(L0, a2);
	}
}

void f_28a_a3_v(object a0, string a1, string a2)
{
	object L0;
	bool L1;
	Vector L2;
	Vector L3;
	if (!a0) {
		return;
	}
	@GetSceneByName(L0, a1);
	L0->GetLocator(a2, L1, L2, L3);
	if (!L1) {
		@Trace("Teleport location '" + a2 + "' not found in scene '" + a1 + "'");
	} else {
		@Teleport(a0, L0, L2, L3);
	}
}

void f_2a2_a3_v(object a0, object a1, object a2)
{
	int L0;
	int L1;
	a1->size(L0);
	for (L1 = 0; L1 < L0; L1++) {
		object L2;
		int L3;
		a1->get(L2, L1);
		a2->get(L3, L1);
		f_277_a3_v(a0, L2, L3);
	}
}

